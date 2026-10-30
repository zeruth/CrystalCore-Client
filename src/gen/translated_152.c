#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c53d13 */
GEN_LIB GEN_NOFRAME uint F_00c53d13(void)
{
  GEN_ENTER(0xc53d13u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(9);
  return uVar1;
}

/* ref: vfscanf */
GEN_LIB GEN_NOFRAME uint F_00c53d1c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc53d1cu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x48, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
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
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6300);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc53d28;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6300;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) || ((*(int *)&gen_args[2]) == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    return 0xffffffff;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar2 >> 5)])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar2 >> 5)])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c53dde;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  }
LAB_00c53dde: ;
  if ((*(uint *)(gen_frame + 0x10)) == 0) {
    uVar2 = (((code *)GEN_TOP((*(gen_code32 *)&gen_args[0]))))(_File,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(uint *)(gen_frame + 0x10)) = uVar2;
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c53e0e(_File);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00c53e0b */
GEN_LIB GEN_NOFRAME uint F_00c53e0b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc53e0bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 0xc))));
  return extraout_EAX;
}

/* ref: FUN_00c53e0e */
GEN_LIB GEN_NOFRAME uint F_00c53e0e(GEN_P(undefined * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc53e0eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * in_esi = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FID_conflict__fscanf_00c53e16 */
GEN_LIB GEN_NOFRAME int F_00c53e16(unsigned int gen_a0, unsigned int gen_a1, ...)
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
GEN_LIB GEN_NOFRAME int F_00c53e36(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
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
GEN_LIB GEN_NOFRAME int F_00c53e57(unsigned int gen_a0, unsigned int gen_a1, ...)
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
GEN_LIB GEN_NOFRAME int F_00c53e77(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
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
GEN_LIB GEN_NOFRAME int F_00c53e98(unsigned int gen_a0)
{
  GEN_ENTER(0xc53e98u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x34, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined * puVar4;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f6320);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc53ea4;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f6320;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) & 0xffffffcf;
    iVar2 = F_00c5d07b(_File_00);
    if ((iVar2 == -1) || (iVar2 = F_00c5d07b(_File_00), iVar2 == -2)) {
      puVar4 = &REFG(undefined, 0x134b280);
    }
    else {
      iVar2 = F_00c5d07b(_File_00);
      uVar3 = F_00c5d07b(_File_00);
      puVar4 = ((undefined *)GEN_TOP(((uVar3 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2 >> 5)])));
    }
    puVar4[4] = puVar4[4] & 0xfd;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c53f34(_File_00);
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
    return 0;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return 0x16;
}

/* ref: FUN_00c53f31 */
GEN_LIB GEN_NOFRAME uint F_00c53f31(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc53f31u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 8))));
  return extraout_EAX;
}

/* ref: FUN_00c53f34 */
GEN_LIB GEN_NOFRAME uint F_00c53f34(GEN_P(undefined * in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc53f34u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * in_edi = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(in_edi);
  return extraout_EAX;
}

/* ref: FUN_00c53f3c */
GEN_LIB GEN_NOFRAME uint F_00c53f3c(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc53f3cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c53e98(param_1);
  return uVar1;
}

/* ref: __vswprintf_helper */
GEN_LIB GEN_NOFRAME uint F_00c53f47(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc53f47u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = ((char *)GEN_TOP(0x0));
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *ppcVar4 = ((char *)GEN_TOP(0x0));
    ppcVar4 = ppcVar4 + 1;
  }
  if (param_4 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  if ((param_3 != 0) && (param_2 == ((char *)GEN_TOP(0x0)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = 0x42;
  (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = param_2;
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = param_2;
  if (param_3 < 0x40000000) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = param_3 * 2;
  }
  else {
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = 0x7fffffff;
  }
  uVar2 = (*param_1)(((undefined *)(gen_frame + 0x0)),param_4,param_5,param_6);
  if (param_2 == ((char *)GEN_TOP(0x0))) {
    return uVar2;
  }
  if (-1 < (int)uVar2) {
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
    if (iVar3 < 0) {
      iVar3 = F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
      if (iVar3 == -1) goto LAB_00c54028;
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = '\0';
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) + 1;
    }
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
    if (-1 < iVar3) {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = '\0';
      return uVar2;
    }
    iVar3 = F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
    if (iVar3 != -1) {
      return uVar2;
    }
  }
LAB_00c54028: ;
  (param_2 + param_3 * 2 - 2)[0] = '\0';
  (param_2 + param_3 * 2 - 2)[1] = '\0';
  return (-1 < (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4)))) - 2;
}

/* ref: FID_conflict___vswprintf_c_00c5403d */
GEN_LIB GEN_NOFRAME int F_00c5403d(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _SizeInWords, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc5403du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _SizeInWords = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc59b62)),_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FID_conflict___vswprintf_p_l_00c54066 */
GEN_LIB GEN_NOFRAME int F_00c54066(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _MaxCount, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3), GEN_P(undefined * _ArgList, unsigned int gen_a4))
{
  GEN_ENTER(0xc54066u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc59b62)),_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: __vswprintf_s_l */
GEN_LIB GEN_NOFRAME int F_00c54090(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _DstSize, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3), GEN_P(undefined * _ArgList, unsigned int gen_a4))
{
  GEN_ENTER(0xc54090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _DstSize = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;)
  int * piVar1;
  uint uVar2;
  
  if (_Format == ((wchar_t *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  if ((_DstBuf == ((wchar_t *)GEN_TOP(0x0))) || (_DstSize == 0)) {
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
GEN_LIB GEN_NOFRAME int F_00c54109(GEN_P(wchar_t * _Dst, unsigned int gen_a0), GEN_P(gen_size32 _SizeInWords, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc54109u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _Dst = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _SizeInWords = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  
  iVar1 = F_00c54090(_Dst,_SizeInWords,_Format,((undefined *)GEN_TOP(0x0)),_ArgList);
  return iVar1;
}

/* ref: __vsnwprintf_s_l */
GEN_LIB GEN_NOFRAME int F_00c54126(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _DstSize, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(wchar_t * _Format, unsigned int gen_a3), GEN_P(undefined * _Locale, unsigned int gen_a4), GEN_P(undefined * _ArgList, unsigned int gen_a5))
{
  GEN_ENTER(0xc54126u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _DstSize = (gen_size32)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a5;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (_Format == ((wchar_t *)GEN_TOP(0x0))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == ((wchar_t *)GEN_TOP(0x0))) {
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
  else if (_DstBuf != ((wchar_t *)GEN_TOP(0x0))) goto LAB_00c54167;
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
LAB_00c54209: ;
  F_00c4c305();
  return -1;
}

/* ref: __vsnwprintf_s */
GEN_LIB GEN_NOFRAME int F_00c54216(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _SizeInWords, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(wchar_t * _Format, unsigned int gen_a3), GEN_P(undefined * _ArgList, unsigned int gen_a4))
{
  GEN_ENTER(0xc54216u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _SizeInWords = (gen_size32)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;)
  int iVar1;
  
  iVar1 = F_00c54126(_DstBuf,_SizeInWords,_MaxCount,_Format,((undefined *)GEN_TOP(0x0)),_ArgList);
  return iVar1;
}

/* ref: FID_conflict___vswprintf_c_00c54236 */
GEN_LIB GEN_NOFRAME int F_00c54236(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _SizeInWords, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc54236u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _SizeInWords = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc72530)),_DstBuf,_SizeInWords,_Format,0,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FID_conflict___vswprintf_p_l_00c5425f */
GEN_LIB GEN_NOFRAME int F_00c5425f(GEN_P(wchar_t * _DstBuf, unsigned int gen_a0), GEN_P(gen_size32 _MaxCount, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3), GEN_P(undefined * _ArgList, unsigned int gen_a4))
{
  GEN_ENTER(0xc5425fu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c53f47(((code *)REFP(0xc72530)),_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: Global::??0exception@std@@QAE@ABQBDH@Z */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c5429a(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc5429au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  in_ecx[1] = *param_2;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: std::exception::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c542b7(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc542b7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  char * pcVar1;
  
  pcVar1 = *((char * PTR32 *)GEN_TOP((in_ecx + 4)));
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
    pcVar1 = ((char *)REFP(0x1118c34));
  }
  return (uint)pcVar1;
}

/* ref: std::exception::_Copy_str */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c542c4(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc542c4u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  gen_size32 sVar1;
  undefined * pvVar2;
  
  if (param_1 != ((char *)GEN_TOP(0x0))) {
    sVar1 = F_00c552f0(param_1);
    pvVar2 = F_00c51787(sVar1 + 1);
    *(undefined * PTR32 *)(this + 4) = pvVar2;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00c49908(pvVar2,sVar1 + 1,param_1);
      this[8] = (undefined1)0x1;
    }
  }
  return;
}

/* ref: std::exception::_Tidy */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c54304(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc54304u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (this[8] != (undefined1)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  this[8] = (undefined1)0x0;
  return;
}

/* ref: std::exception::exception_00c54322 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c54322(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * PTR32 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc54322u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * param_1 = (char * PTR32 *)(uintptr_t)gen_a1;)
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  this[8] = (undefined1)0x0;
  F_00c542c4(this GEN_EDX_FWD,*param_1);
  return this;
}

/* ref: std::exception::operator= */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c54349(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc54349u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    F_00c54304(this GEN_EDX_FWD);
    if (param_1[8] == (undefined1)0x0) {
      *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    }
    else {
      F_00c542c4(this GEN_EDX_ARG,*(char * PTR32 *)(param_1 + 4));
    }
  }
  return this;
}

/* ref: FUN_00c5437e */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c5437e(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc5437eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00c54389 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c54389(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc54389u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  F_00c54322(this GEN_EDX_FWD,(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c4c));
  return (uint)this;
}

/* ref: std::bad_typeid::bad_typeid */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c543b2(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc543b2u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  F_00c54322((undefined *)this GEN_EDX_FWD,&(*(char * PTR32 *)&gen_args[0]));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c58));
  return this;
}

/* ref: std::__non_rtti_object::__non_rtti_object */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c543db(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc543dbu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  F_00c543b2((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c64));
  return this;
}

/* ref: std::exception::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c54403(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54403u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: std::exception::exception_00c5442a */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c5442a(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc5442au, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  *(undefined4 *)(this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  this[8] = (undefined1)0x0;
  F_00c54349(this GEN_EDX_FWD,param_1);
  return this;
}

/* ref: std::bad_cast::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c5444f(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5444fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c54476 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c54476(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc54476u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_00c5442a(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c4c));
  return (uint)this;
}

/* ref: std::bad_typeid::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c54493(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54493u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00c544ba */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c544ba(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc544bau, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_00c5442a(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c58));
  return (uint)this;
}

/* ref: std::__non_rtti_object::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c544d7(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc544d7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1118c2c));
  F_00c54304(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::??0__non_rtti_object@std@@QAE@ABV01@@Z */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c544fe(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc544feu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00c544ba(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118c64));
  return (uint)this;
}

/* ref: strncnt_00c5451b */
GEN_LIB GEN_NOFRAME int F_00c5451b(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5451bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = param_2;
  for (; (iVar1 != 0 && (*in_eax != '\0')); in_eax = in_eax + 1) {
    iVar1 = iVar1 - 1;
  }
  return (param_2 - (iVar1 - 1)) - 1;
}

/* ref: __crtLCMapStringA_stat */
GEN_LIB GEN_NOFRAME int F_00c54539(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(ulong param_2, unsigned int gen_a1), GEN_P(ulong param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(char * param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xc54539u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_2 = (ulong)gen_a1;)
  GEN_PIN(ulong param_3 = (ulong)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(char * param_6 = (char *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_FRAME_DECL(0x10014, 12);
  bool bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  LPCWSTR lpWideCharStr;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x1000c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar2 = param_4;
  iVar8 = param_5;
  if (0 < param_5) {
    do {
      iVar8 = iVar8 - 1;
      if (*pcVar2 == '\0') goto LAB_00c54569;
      pcVar2 = pcVar2 + 1;
    } while (iVar8 != 0);
    iVar8 = -1;
LAB_00c54569: ;
    iVar8 = param_5 - iVar8;
    iVar3 = iVar8 - 1;
    bVar1 = iVar3 < param_5;
    param_5 = iVar3;
    if (bVar1) {
      param_5 = iVar8;
    }
  }
  (*(uint *)(gen_frame + 0x10008)) = 0;
  if (param_8 == 0) {
    param_8 = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  }
  uVar4 = gen_imp_MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,0,0);
  (*(uint *)(gen_frame + 0x10000)) = uVar4;
  if (uVar4 == 0) {
    (*((undefined4 *)GEN_TOP((gen_frame + 0x8)))) = 0xc5471e;
    return 0;
  }
  if (((int)uVar4 < 1) || (0xffffffe0 / uVar4 < 2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10004)) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    uVar7 = uVar4 * 2 + 8;
    if (uVar7 < 0x401) {
      puVar5 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
      *puVar5 = 0xcccc;
      puVar6 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
      if (1) {
LAB_00c545f9: ;
        puVar6 = puVar5 + 2;
      }
    }
    else {
      puVar5 = F_00c51787(uVar7);
      puVar6 = ((undefined4 *)GEN_TOP(0x0));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar5 = 0xdddd;
        goto LAB_00c545f9;
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x10004)) = puVar6;
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x10004)) == ((undefined4 *)GEN_TOP(0x0))) {
    (*((undefined4 *)GEN_TOP((gen_frame + 0x8)))) = 0xc5471e;
    return 0;
  }
  iVar8 = gen_imp_MultiByteToWideChar(param_8,1,param_4,param_5,(*(undefined4 * PTR32 *)(gen_frame + 0x10004)),uVar4);
  if (iVar8 != 0) {
    uVar7 = gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10004)),uVar4,0,0);
    (*(uint *)(gen_frame + 0x10008)) = uVar7;
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
          iVar8 = gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10004)),(*(uint *)(gen_frame + 0x10000)),lpWideCharStr,(*(uint *)(gen_frame + 0x10008)));
          if (iVar8 != 0) {
            pcVar2 = param_6;
            iVar8 = param_7;
            if (param_7 == 0) {
              iVar8 = 0;
              pcVar2 = (LPSTR)0x0;
            }
            uVar4 = gen_imp_WideCharToMultiByte(param_8,0,lpWideCharStr,(*(uint *)(gen_frame + 0x10008)),pcVar2,iVar8,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
            (*(uint *)(gen_frame + 0x10008)) = uVar4;
          }
          F_00c4f78f(lpWideCharStr);
        }
      }
      else if ((param_7 != 0) && ((int)uVar7 <= param_7)) {
        gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10004)),uVar4,param_6,param_7);
      }
    }
  }
LAB_00c54702: ;
  F_00c4f78f((*(undefined4 * PTR32 *)(gen_frame + 0x10004)));
  (*((undefined4 *)GEN_TOP((gen_frame + 0x8)))) = 0xc5471e;
  return (*(uint *)(gen_frame + 0x10008));
}

/* ref: ___crtLCMapStringA */
GEN_LIB GEN_NOFRAME int F_00c54720(GEN_P(undefined * _Plocinfo, unsigned int gen_a0), GEN_P(LPCWSTR _LocaleName, unsigned int gen_a1), GEN_P(DWORD _DwMapFlag, unsigned int gen_a2), GEN_P(LPCSTR _LpSrcStr, unsigned int gen_a3), GEN_P(int _CchSrc, unsigned int gen_a4), GEN_P(LPSTR _LpDestStr, unsigned int gen_a5), GEN_P(int _CchDest, unsigned int gen_a6), GEN_P(int _Code_page, unsigned int gen_a7), GEN_P(BOOL _BError, unsigned int gen_a8))
{
  GEN_ENTER(0xc54720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCWSTR _LocaleName = (LPCWSTR)gen_a1;)
  GEN_PIN(DWORD _DwMapFlag = (DWORD)gen_a2;)
  GEN_PIN(LPCSTR _LpSrcStr = (LPCSTR)gen_a3;)
  GEN_PIN(int _CchSrc = (int)gen_a4;)
  GEN_PIN(LPSTR _LpDestStr = (LPSTR)gen_a5;)
  GEN_PIN(int _CchDest = (int)gen_a6;)
  GEN_PIN(int _Code_page = (int)gen_a7;)
  GEN_PIN(BOOL _BError = (BOOL)gen_a8;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Plocinfo);
  iVar1 = F_00c54539((undefined *)((byte *)(gen_frame + 0x0)),(ulong)_LocaleName,_DwMapFlag,_LpSrcStr,_CchSrc,
                     _LpDestStr,_CchDest,_Code_page,_BError);
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: ___pctype_func */
GEN_LIB GEN_NOFRAME ushort * F_00c5476c(void)
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
GEN_LIB GEN_NOFRAME int F_00c54795(GEN_P(undefined * _LocInfo, unsigned int gen_a0))
{
  GEN_ENTER(0xc54795u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
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
  (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = ((undefined4 *)GEN_TOP(0x0));
  (*(BYTE * PTR32 *)(gen_frame + 0x30)) = ((BYTE *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = ((undefined *)GEN_TOP(0x0));
  if ((*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))) == ((wchar_t *)GEN_TOP(0x0))) {
    if (((LONG *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))))) != ((LONG *)GEN_TOP(0x0))) {
      gen_imp_InterlockedDecrement(((LONG *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))))));
    }
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) = 0;
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 12))))) = 0;
    (*((char * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16))))) = ((char *)REFP(0x1118d70));
    (*((wchar_t * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 4))))) = (wchar_t *)&REFG(undefined, 0x11191f8);
    (*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 8))))) = (int *)&REFG(undefined, 0x1119378);
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (3) * 4))))) = ((wchar_t *)GEN_TOP(0x1));
    return 0;
  }
  if (((*(uint *)(((char *)(_LocInfo) + 4))) != 0) ||
     (iVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,
                               (LPCWSTR)(uint)*(ushort *)&(*((char * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 16) + (2) * 16))))),0x1004,
                               &(*(uint *)(((char *)(_LocInfo) + 4)))), iVar3 == 0)) {
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
    if (((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != ((undefined4 *)GEN_TOP(0x0))) &&
       (((((*(BYTE * PTR32 *)(gen_frame + 0x30)) != ((BYTE *)GEN_TOP(0x0)) && (pvVar6 != ((undefined *)GEN_TOP(0x0)))) && ((*(undefined * PTR32 *)(gen_frame + 0x2c)) != ((undefined *)GEN_TOP(0x0)))) &&
        ((*(undefined * PTR32 *)(gen_frame + 0x24)) != ((undefined *)GEN_TOP(0x0)))))) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
      iVar3 = 0;
      do {
        *((char *)GEN_TOP((iVar3 + (int)pvVar6))) = (char)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x100);
      BVar7 = gen_imp_GetCPInfo((*(uint *)(((char *)(_LocInfo) + 4))),((undefined *)(gen_frame + 0x34)));
      if ((BVar7 != 0) && ((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) < 6)) {
        (*(wchar_t * PTR32 *)(gen_frame + 0x1c)) = ((wchar_t *)GEN_TOP(((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) & 0xffff)));
        if ((((wchar_t *)GEN_TOP(0x1)) < ((wchar_t *)GEN_TOP(((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) & 0xffff)))) &&
           ((*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x34)) + 6) + (0) * 1))))) != '\0')) {
          pBVar5 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
          do {
            bVar2 = *pBVar5;
            if (bVar2 == 0) break;
            for (uVar13 = (uint)pBVar5[-1]; (int)uVar13 <= (int)(uint)bVar2; uVar13 = uVar13 + 1) {
              *((undefined1 *)GEN_TOP((uVar13 + (int)(*(undefined * PTR32 *)(gen_frame + 0x28))))) = 0x20;
              bVar2 = *pBVar5;
            }
            pBVar9 = pBVar5 + 1;
            pBVar5 = pBVar5 + 2;
          } while (*pBVar9 != 0);
        }
        (*(byte * PTR32 *)(gen_frame + 0xc)) = (*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0x100;
        BVar7 = F_00c635a3(0,1,(*(undefined * PTR32 *)(gen_frame + 0x28)),0x100,(*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0x100,(*(uint *)(((char *)(_LocInfo) + 4))),0,0);
        if (((BVar7 != 0) &&
            (iVar3 = F_00c54720(((undefined *)GEN_TOP(0x0)),(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))),0x100,
                                        (LPCSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1),0xff,
                                        (LPSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x81),0xff,(*(uint *)(((char *)(_LocInfo) + 4))),0),
            iVar3 != 0)) &&
           (iVar3 = F_00c54720(((undefined *)GEN_TOP(0x0)),(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))),0x200,
                                       (LPCSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1),0xff,
                                       (LPSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x81),0xff,(*(uint *)(((char *)(_LocInfo) + 4))),0),
           pBVar5 = (*(BYTE * PTR32 *)(gen_frame + 0x30)), pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x2c)), iVar3 != 0)) {
          pbVar1 = (*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0xfe;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          (*(byte * PTR32 *)(gen_frame + 0x10)) = pbVar1;
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x7f))) = 0;
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7f))) = 0;
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80))) = 0;
          (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = ((wchar_t *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80)));
          (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80)));
          *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80))) = 0;
          if ((1 < (int)(*(wchar_t * PTR32 *)(gen_frame + 0x1c))) && ((*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x34)) + 6) + (0) * 1))))) != '\0')) {
            (*(BYTE * PTR32 *)(gen_frame + 0x30)) = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
            pBVar9 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
            do {
              (*(BYTE * PTR32 *)(gen_frame + 0x30)) = pBVar9;
              if (*pBVar9 == 0) break;
              pvVar10 = ((undefined *)GEN_TOP((uint)pBVar9[-1]));
              (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar10;
              if (pvVar10 <= ((undefined *)GEN_TOP((uint)*pBVar9))) {
                pBVar11 = pBVar5 + (int)((int)(uintptr_t)pvVar10) * 2 + 0x100;
                do {
                  pvVar10 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 1)));
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
          if ((((LONG *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))))) != ((LONG *)GEN_TOP(0x0))) &&
             (LVar8 = gen_imp_InterlockedDecrement(((LONG *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8)))))))), LVar8 == 0)) {
            F_00c4c68f(((undefined *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 12))))) - 0xfe))));
            F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 4))))) - 0x40);
            F_00c4c68f((*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 8))))) - 0x20);
            F_00c4c68f(((undefined *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))))));
          }
          *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 1;
          (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x20));
          (*((char * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16))))) = (char *)(*(byte * PTR32 *)(gen_frame + 0xc));
          (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 12))))) = (uint)(*(byte * PTR32 *)(gen_frame + 0x10));
          (*((wchar_t * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x8));
          (*((int * PTR32 *)GEN_TOP(((((((char *)(_LocInfo) + (1) * 184) + 16) + (0) * 16) + 8))))) = (*(int * PTR32 *)(gen_frame + 0x14));
          (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (3) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x1c));
          goto LAB_00c54ab1;
        }
      }
    }
  }
  F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
  F_00c4c68f((*(BYTE * PTR32 *)(gen_frame + 0x30)));
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x2c)));
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x24)));
  iVar12 = 1;
LAB_00c54ab1: ;
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x28)));
  return iVar12;
}

/* ref: ____mb_cur_max_func */
GEN_LIB GEN_NOFRAME int F_00c54b3c(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54b3cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_LIB GEN_NOFRAME UINT F_00c54b81(void)
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
GEN_LIB GEN_NOFRAME uint F_00c54bcd(void)
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
GEN_LIB GEN_NOFRAME uint F_00c54bf3(GEN_P(DWORD param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc54bf3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(DWORD param_1 = (DWORD)gen_a0;)
  uint uVar1;
  
  gen_imp_Sleep(param_1);
  uVar1 = param_1 + 1000;
  if (REFG(undefined4, 0x15d68d8) < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00c54c19 */
GEN_LIB GEN_NOFRAME uint F_00c54c19(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc54c19u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d68d8);
  REFG(undefined4, 0x15d68d8) = param_1;
  return uVar1;
}

/* ref: __malloc_crt */
GEN_LIB GEN_NOFRAME undefined * F_00c54c2e(GEN_P(gen_size32 _Size, unsigned int gen_a0))
{
  GEN_ENTER(0xc54c2eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a0;)
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = F_00c51787(_Size);
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      return pvVar1;
    }
    if (REFG(undefined4, 0x15d68d8) == 0) break;
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return ((undefined *)GEN_TOP(0x0));
    }
  }
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: __calloc_crt */
GEN_LIB GEN_NOFRAME undefined * F_00c54c73(GEN_P(gen_size32 _Count, unsigned int gen_a0), GEN_P(gen_size32 _Size, unsigned int gen_a1))
{
  GEN_ENTER(0xc54c73u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_size32 _Count = (gen_size32)gen_a0;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a1;)
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  while( true ) {
    pvVar1 = ((undefined *)GEN_TOP(F_00c73804(_Count,_Size,0)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      return pvVar1;
    }
    if (REFG(undefined4, 0x15d68d8) == 0) break;
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
    if (dwMilliseconds == 0xffffffff) {
      return ((undefined *)GEN_TOP(0x0));
    }
  }
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: __realloc_crt */
GEN_LIB GEN_NOFRAME undefined * F_00c54cbf(GEN_P(undefined * _Ptr, unsigned int gen_a0), GEN_P(gen_size32 _NewSize, unsigned int gen_a1))
{
  GEN_ENTER(0xc54cbfu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Ptr = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _NewSize = (gen_size32)gen_a1;)
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = F_00c52171(_Ptr,_NewSize);
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      return pvVar1;
    }
    if (_NewSize == 0) {
      return ((undefined *)GEN_TOP(0x0));
    }
    if (REFG(undefined4, 0x15d68d8) == 0) {
      return ((undefined *)GEN_TOP(0x0));
    }
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: __recalloc_crt */
GEN_LIB GEN_NOFRAME undefined * F_00c54d0d(GEN_P(undefined * _Ptr, unsigned int gen_a0), GEN_P(gen_size32 _Count, unsigned int gen_a1), GEN_P(gen_size32 _Size, unsigned int gen_a2))
{
  GEN_ENTER(0xc54d0du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Ptr = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _Count = (gen_size32)gen_a1;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a2;)
  undefined * pvVar1;
  uint dwMilliseconds;
  
  dwMilliseconds = 0;
  do {
    pvVar1 = F_00c73886(_Ptr,_Count,_Size);
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      return pvVar1;
    }
    if (_Size == 0) {
      return ((undefined *)GEN_TOP(0x0));
    }
    if (REFG(undefined4, 0x15d68d8) == 0) {
      return ((undefined *)GEN_TOP(0x0));
    }
    gen_imp_Sleep(dwMilliseconds);
    dwMilliseconds = dwMilliseconds + 1000;
    if (REFG(undefined4, 0x15d68d8) < dwMilliseconds) {
      dwMilliseconds = 0xffffffff;
    }
  } while (dwMilliseconds != 0xffffffff);
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: _JumpToContinuation */
GEN_LIB GEN_NOFRAME unsigned int F_00c54d5f(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54d5fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined * local_8;
  
  local_8 = param_2 + 0xc;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
                    
                    
  return (uint)(((code *)param_1)());
}

/* ref: _CallMemberFunction0 */
GEN_LIB GEN_NOFRAME unsigned int F_00c54d91(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54d91u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  LOCK();
  UNLOCK();
                    
                    
  return (uint)(((code *)param_2)());
}

/* ref: FID_conflict__CallMemberFunction1_00c54d98 */
GEN_LIB GEN_NOFRAME uint F_00c54d98(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(code * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54d98u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(code * param_2 = (code *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  LOCK();
  UNLOCK();
                    
                    
  uVar1 = (*param_2)();
  return uVar1;
}

/* ref: FID_conflict__CallMemberFunction1_00c54d9f */
GEN_LIB GEN_NOFRAME uint F_00c54d9f(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(code * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54d9fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(code * param_2 = (code *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  LOCK();
  UNLOCK();
                    
                    
  uVar1 = (*param_2)();
  return uVar1;
}

/* ref: _UnwindNestedFrames */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00c54da6(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc54da6u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
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
GEN_LIB GEN_FRAME uint F_00c54dfa(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc54dfau, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c74a36(param_2,param_3,param_4,param_5,in_eax,0,0,0);
  return uVar1;
}

/* ref: FID_conflict____CxxFrameHandler3_00c54e30 */
GEN_LIB GEN_FRAME uint F_00c54e30(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc54e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c74a36(param_2,param_3,param_4,param_5,in_eax,0,0,0);
  return uVar1;
}

/* ref: FID_conflict____CxxFrameHandler3_00c54e66 */
GEN_LIB GEN_FRAME uint F_00c54e66(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc54e66u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c74a36(param_2,param_3,param_4,param_5,in_eax,0,0,0);
  return uVar1;
}

/* ref: ___CxxLongjmpUnwind@4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c54e9c(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc54e9cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c739f2(*((undefined4 *)GEN_TOP((param_1 + 0x18))),0,*((undefined4 *)GEN_TOP((param_1 + 0x28))),
                     *((undefined4 *)GEN_TOP((param_1 + 0x1c))));
  return uVar1;
}

/* ref: CatchGuardHandler */
GEN_LIB GEN_NOFRAME int F_00c54ebb(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc54ebbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  int _Var1;
  
  _Var1 = F_00c74a36(param_1,*(undefined4 *)(param_2 + 0x10),param_3,0,
                     *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x14),param_2,0);
  return _Var1;
}

/* ref: _CallSETranslator */
GEN_LIB GEN_NOFRAME int F_00c54eee(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc54eeeu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x60, 0);
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
  
  if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x123))) {
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[1]) = 0xc54f99;
    iVar1 = 1;
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 *)GEN_TOP(0x0));
    (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0xc54fc5));
    (*(uint volatile *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 * PTR32 *)(gen_frame + 0x14));
    (*(undefined * PTR32 volatile *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)&gen_args[4]);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)&gen_args[1]);
    (*(int *)(gen_frame + 0x28)) = (*(int *)&gen_args[5]);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)&gen_args[6]);
    (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = ((undefined1 *)GEN_TOP(0x0));
    (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = ((undefined1 *)GEN_TOP(0x0));
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
GEN_LIB GEN_NOFRAME int F_00c54fc5(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc54fc5u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x8, 8);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int _Var5;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  F_00c74a36(param_1,uVar4,param_3,0,uVar3,uVar2,uVar1,1);
  if (*(int *)(param_2 + 0x24) == 0) {
    F_00c54da6((undefined *)param_2,param_1);
  }
  F_00c54eee(((undefined *)GEN_TOP(0x123)),(undefined *)&(*(gen_code32 *)(gen_frame + 0x0)),((undefined *)GEN_TOP(0x0)),
                    ((undefined *)GEN_TOP(0x0)),((undefined *)GEN_TOP(0x0)),0,((undefined *)GEN_TOP(0x0)));
                    
                    
  _Var5 = ((code *)(*(gen_code32 *)(gen_frame + 0x0)))();
  return _Var5;
}

/* ref: _GetRangeOfTrysToCheck */
GEN_LIB GEN_NOFRAME undefined * F_00c55064(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3), GEN_P(uint * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc55064u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a4;)
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
      param_2 = param_2 - 1;
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
GEN_LIB GEN_NOFRAME uint F_00c550d7(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc550d7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * p_Var1;
  
  *param_1 = param_2;
  p_Var1 = F_00c5b37a();
  param_1[1] = (*(void * PTR32 *)(((char *)(p_Var1) + 152)));
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 152))) = param_1;
  return (uint)param_1;
}

/* ref: __IsExceptionObjectToBeDestroyed */
GEN_LIB GEN_NOFRAME uint F_00c55103(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc55103u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * p_Var1;
  int * piVar2;
  
  p_Var1 = F_00c5b37a();
  piVar2 = (*(void * PTR32 *)(((char *)(p_Var1) + 152)));
  while( true ) {
    if (piVar2 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = ((int *)GEN_TOP(piVar2[1]));
  }
  return 0;
}

/* ref: __FindAndUnlinkFrame */
GEN_LIB GEN_NOFRAME uint F_00c5512a(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5512au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  undefined * p_Var1;
  undefined * p_Var2;
  
  p_Var1 = F_00c5b37a();
  if (param_1 == (*(void * PTR32 *)(((char *)(p_Var1) + 152)))) {
    p_Var2 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var2) + 152))) = ((undefined *)GEN_TOP((*(uint *)(((char *)(param_1) + 4)))));
  }
  else {
    p_Var1 = F_00c5b37a();
    p_Var1 = (*(void * PTR32 *)(((char *)(p_Var1) + 152)));
    do {
      p_Var2 = p_Var1;
      if ((*(uint *)(((char *)(p_Var2) + 4))) == 0) {
                    
        F_00c5aace();
      }
      p_Var1 = ((undefined *)GEN_TOP((*(uint *)(((char *)(p_Var2) + 4)))));
    } while (param_1 != ((undefined *)GEN_TOP((*(uint *)(((char *)(p_Var2) + 4))))));
    (*(uint *)(((char *)(p_Var2) + 4))) = (*(uint *)(((char *)(param_1) + 4)));
  }
  return (uint)p_Var2;
}

/* ref: _CallCatchBlock2 */
GEN_LIB GEN_NOFRAME undefined * F_00c5517c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc5517cu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  GEN_FRAME_DECL(0x34, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  (*(uint volatile *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 volatile *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[1]);
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xc54ebb));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x14)) = (*(int *)&gen_args[3]) + 1;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x0)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  pvVar1 = ((undefined *)GEN_TOP(F_00c74b20(in_esi,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[4]))));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x0));
  return pvVar1;
}

/* ref: _strlen */
GEN_LIB GEN_NOFRAME gen_size32 F_00c552f0(GEN_P(char * _Str, unsigned int gen_a0))
{
  GEN_ENTER(0xc552f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_00c55320;
    uVar1 = *puVar2;
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 1)));
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
GEN_LIB GEN_NOFRAME unsigned int F_00c5537b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5537bu, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int * _Memory;
  undefined * ptVar1;
  int * piVar2;
  int * piVar3;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6340);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc55387;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6340;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  F_00c5aa4f(0xe);
  ptVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  _Memory = REFG(int * PTR32, 0x15d68e0);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    piVar2 = (int *)&REFG(undefined, 0x15d68dc);
    do {
      piVar3 = piVar2;
      (*(int * PTR32 *)(gen_frame + 0x10)) = REFG(int * PTR32, 0x15d68e0);
      if (REFG(int * PTR32, 0x15d68e0) == ((int *)GEN_TOP(0x0))) goto LAB_00c553bf;
      piVar2 = REFG(int * PTR32, 0x15d68e0);
    } while (*REFG(int * PTR32, 0x15d68e0) != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))));
    piVar3[1] = REFG(int * PTR32, 0x15d68e0)[1];
    F_00c4c68f(_Memory);
LAB_00c553bf: ;
    F_00c4c68f(*(undefined * PTR32 *)(ptVar1 + 4));
    *(undefined4 *)(ptVar1 + 4) = 0;
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c553e2();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00c553e2 */
GEN_LIB GEN_NOFRAME uint F_00c553e2(void)
{
  GEN_ENTER(0xc553e2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: type_info::_Name_base */
GEN_LIB GEN_NOFRAME char * F_00c553eb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc553ebu, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * ptVar1;
  char * _Str;
  gen_size32 sVar2;
  undefined4 * _Memory;
  undefined * pvVar3;
  int eVar4;
  gen_size32 sVar5;
  
  ptVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6360);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc553f7;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6360;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (char *)(uintptr_t)gen_eh_resume(); }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    _Str = ((char *)GEN_TOP(F_00c79d47(0,(*(undefined * PTR32 *)&gen_args[0]) + 9,0,((code *)REFP(0xc51787)),((code *)REFP(0xc4c68f)),0x2800)));
    (*(char * PTR32 *)(gen_frame + 0x10)) = _Str;
    if (_Str == ((char *)GEN_TOP(0x0))) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      return ((char *)GEN_TOP(0x0));
    }
    sVar2 = F_00c552f0(_Str);
    while ((sVar2 != 0 && (sVar5 = sVar2 - 1, (*(char * PTR32 *)(gen_frame + 0x10))[sVar5] == ' '))) {
      (*(char * PTR32 *)(gen_frame + 0x10))[sVar5] = '\0';
      sVar2 = sVar5;
    }
    F_00c5aa4f(0xe);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
    if ((*(int *)(ptVar1 + 4) == 0) && (_Memory = F_00c51787(8), _Memory != ((undefined4 *)GEN_TOP(0x0)))) {
      pvVar3 = F_00c51787(sVar2 + 1);
      *(undefined * PTR32 *)(ptVar1 + 4) = pvVar3;
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        F_00c4c68f(_Memory);
      }
      else {
        eVar4 = F_00c49908(pvVar3,sVar2 + 1,(*(char * PTR32 *)(gen_frame + 0x10)));
        if (eVar4 != 0) {
                    
          F_00c4c299(0,0,0,0,0);
        }
        *_Memory = *(undefined4 *)(ptVar1 + 4);
        _Memory[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4)));
        *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4))) = _Memory;
      }
    }
    F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x10)));
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c554d4();
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return *(char * PTR32 *)(ptVar1 + 4);
}

/* ref: FUN_00c554d1 */
GEN_LIB GEN_NOFRAME uint F_00c554d1(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc554d1u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c554d4 */
GEN_LIB GEN_NOFRAME uint F_00c554d4(void)
{
  GEN_ENTER(0xc554d4u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c55544 */
GEN_LIB GEN_NOFRAME uint F_00c55544(void)
{
  GEN_ENTER(0xc55544u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: ___unDNameHelper */
GEN_LIB GEN_NOFRAME uint F_00c5554d(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5554du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if ((short)param_4 == 0) {
    param_4 = 0x2800;
  }
  uVar1 = F_00c79d47(param_1,param_2,param_3,((code *)REFP(0xc51787)),((code *)REFP(0xc4c68f)),param_4);
  return uVar1;
}

/* ref: type_info::_Name_base_internal */
GEN_LIB GEN_NOFRAME char * F_00c55580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc55580u, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x40, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * pcVar1;
  gen_size32 sVar2;
  undefined4 * _Memory;
  undefined * pvVar3;
  int eVar4;
  gen_size32 sVar5;
  undefined * ptVar6;
  
  ptVar6 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f63a0);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc5558c;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f63a0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (char *)(uintptr_t)gen_eh_resume(); }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    F_00c5aa4f(0xe);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
    if (*(int *)(ptVar6 + 4) == 0) {
      pcVar1 = ((char *)GEN_TOP(F_00c5554d(0,ptVar6 + 9,0,0x2800)));
      (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar1;
      if (pcVar1 == ((char *)GEN_TOP(0x0))) {
        F_00c5e5c0(&REFG(undefined4, 0x134ab78),&(*(undefined * PTR32 *)(gen_frame + 0x20)),0xfffffffe);
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return ((char *)GEN_TOP(0x0));
      }
      sVar2 = F_00c552f0(pcVar1);
      (*(gen_size32 *)(gen_frame + 0x10)) = sVar2;
      while( true ) {
        sVar5 = sVar2 - 1;
        (*(gen_size32 *)(gen_frame + 0x10)) = sVar5;
        if ((sVar2 == 0) || (pcVar1[sVar5] != ' ')) break;
        pcVar1[sVar5] = '\0';
        sVar2 = sVar5;
      }
      _Memory = F_00c51787(8);
      if (_Memory != ((undefined4 *)GEN_TOP(0x0))) {
        pvVar3 = F_00c51787(sVar2 + 1);
        if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
          F_00c4c68f(_Memory);
        }
        else {
          eVar4 = F_00c49908(pvVar3,sVar2 + 1,(*(char * PTR32 *)(gen_frame + 0x14)));
          if (eVar4 != 0) {
                    
            F_00c4c299(0,0,0,0,0);
          }
          *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = pvVar3;
          *_Memory = pvVar3;
          _Memory[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4)));
          *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4))) = _Memory;
        }
      }
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x14)));
      ptVar6 = (*(undefined * PTR32 *)&gen_args[0]);
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c55683();
  }
  pcVar1 = *(char * PTR32 *)(ptVar6 + 4);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return pcVar1;
}

/* ref: FUN_00c55680 */
GEN_LIB GEN_NOFRAME uint F_00c55680(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc55680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c55683 */
GEN_LIB GEN_NOFRAME uint F_00c55683(void)
{
  GEN_ENTER(0xc55683u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: FUN_00c556d6 */
GEN_LIB GEN_NOFRAME uint F_00c556d6(void)
{
  GEN_ENTER(0xc556d6u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xe);
  return uVar1;
}

/* ref: _strcmp */
GEN_LIB GEN_NOFRAME int F_00c556e0(GEN_P(char * _Str1, unsigned int gen_a0), GEN_P(char * _Str2, unsigned int gen_a1))
{
  GEN_ENTER(0xc556e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * _Str1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str2 = (char *)(uintptr_t)gen_a1;)
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
GEN_LIB GEN_NOFRAME wchar_t * F_00c55768(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc55768u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&REFG(undefined4, 0x1119cf8))[(int)(uVar1 * 2)]) {
      return *(wchar_t * PTR32 *)(&REFG(undefined, 0x1119cfc) + uVar1 * 8);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x16);
  return ((wchar_t *)GEN_TOP(0x0));
}

/* ref: __NMSG_WRITE */
GEN_LIB GEN_NOFRAME unsigned int F_00c5578e(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5578eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL(0x200, 0);
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
  if (pwVar1 != ((wchar_t *)GEN_TOP(0x0))) {
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
            eVar3 = F_00c4983b(&REFG(undefined, 0x15d68a4) + sVar5 * 2,0x2fb - ((int)(sVar5 * 2 - 0x76) >> 1),
                               &REFG(undefined, 0x1119dfc),3);
            if (eVar3 != 0) goto LAB_00c55853;
          }
          eVar3 = F_00c4b8d3((wchar_t *)&REFG(undefined, 0x15d68e8),0x314,L"\n\n");
          if ((eVar3 == 0) &&
             (eVar3 = F_00c4b8d3((wchar_t *)&REFG(undefined, 0x15d68e8),0x314,(*(wchar_t * PTR32 *)(gen_frame + 0x0))), eVar3 == 0)) {
            return (uint)(F_00c7a537((LPCWSTR)&REFG(undefined, 0x15d68e8),(LPCWSTR)(*(undefined * PTR32 (*)[4])REFP(0x1119da8)),0x12010));
          }
        }
      }
LAB_00c55853: ;
                    
      F_00c4c299(0,0,0,0,0);
    }
  }
  return 0;
}

/* ref: __FF_MSGBANNER */
GEN_LIB GEN_NOFRAME unsigned int F_00c5593d(void)
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
  return (uint)(F_00c5578e(0xff));
}

/* ref: ___getlocaleinfo */
GEN_LIB GEN_NOFRAME int F_00c55976(GEN_P(undefined * _Locale, unsigned int gen_a0), GEN_P(int _Lc_type, unsigned int gen_a1), GEN_P(LPCWSTR _LocaleName, unsigned int gen_a2), GEN_P(ulong _FieldType, unsigned int gen_a3), GEN_P(undefined * _Address, unsigned int gen_a4))
{
  GEN_ENTER(0xc55976u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int _Lc_type = (int)gen_a1;)
  GEN_PIN(LPCWSTR _LocaleName = (LPCWSTR)gen_a2;)
  GEN_PIN(ulong _FieldType = (ulong)gen_a3;)
  GEN_PIN(undefined * _Address = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x8c, 4);
  bool bVar1;
  gen_size32 sVar2;
  DWORD DVar3;
  LPSTR _LpLCData;
  undefined * pvVar4;
  int eVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x84)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x88);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = _Locale;
  if (_Lc_type != 1) {
    if (_Lc_type == 2) {
      *(undefined4 *)_Address = 0;
      sVar2 = gen_imp_GetLocaleInfoW(_LocaleName,_FieldType,0,0);
      if (sVar2 != 0) {
        pvVar4 = F_00c54c73(sVar2,2);
        *(undefined * PTR32 *)_Address = pvVar4;
        if ((pvVar4 != ((undefined *)GEN_TOP(0x0))) &&
           (iVar6 = gen_imp_GetLocaleInfoW(_LocaleName,_FieldType,pvVar4,sVar2), iVar6 != 0)) {
          return 0;
        }
      }
      F_00c4c68f(*(undefined * PTR32 *)_Address);
      *(undefined4 *)_Address = 0;
      return -1;
    }
    if (_Lc_type != 0) {
      return -1;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
    iVar6 = gen_imp_GetLocaleInfoW((LCID)_LocaleName,_FieldType | 0x20000000,(LPWSTR)&(*(undefined * PTR32 *)(gen_frame + 0x0)),2);
    if (iVar6 == 0) {
      return -1;
    }
    *(undefined1 *)_Address = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + (0) * 8));
    return 0;
  }
  bVar1 = false;
  _LpLCData = ((CHAR *)(gen_frame + 0x4));
  sVar2 = F_00c7a7cb(_Locale,_LocaleName,_FieldType,_LpLCData,0x80);
  if (sVar2 == 0) {
    DVar3 = gen_imp_GetLastError();
    if (DVar3 != 0x7a) {
      return -1;
    }
    sVar2 = F_00c7a7cb((*(undefined * PTR32 *)(gen_frame + 0x0)),_LocaleName,_FieldType,(LPSTR)0x0,0);
    if (sVar2 == 0) {
      return -1;
    }
    _LpLCData = F_00c54c73(sVar2,1);
    if (_LpLCData == (LPSTR)0x0) {
      return -1;
    }
    bVar1 = true;
    sVar2 = F_00c7a7cb((*(undefined * PTR32 *)(gen_frame + 0x0)),_LocaleName,_FieldType,_LpLCData,sVar2);
    if (sVar2 == 0) goto LAB_00c55a4a;
  }
  pvVar4 = F_00c54c73(sVar2,1);
  *(undefined * PTR32 *)_Address = pvVar4;
  if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
    eVar5 = F_00c4d9ef(pvVar4,sVar2,_LpLCData,sVar2 - 1);
    if (eVar5 == 0) {
      if (bVar1) {
        F_00c4c68f(_LpLCData);
      }
      return 0;
    }
                    
    F_00c4c299(0,0,0,0,0);
  }
  if (!bVar1) {
    return -1;
  }
LAB_00c55a4a: ;
  F_00c4c68f(_LpLCData);
  return -1;
}

/* ref: FUN_00c55b22 */
GEN_LIB GEN_NOFRAME uint F_00c55b22(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc55b22u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d6f10) = param_1;
  return param_1;
}

/* ref: Global::__VEC_memcpy */
GEN_LIB GEN_NOFRAME ulonglong F_00c55b31(GEN_P(uint in_ecx, unsigned int gen_a0), GEN_P(undefined4 * in_esi, unsigned int gen_a1), GEN_P(undefined4 * in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xc55b31u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;)
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
      in_esi = ((undefined4 *)GEN_TOP(((int)in_esi + 1)));
      puVar18 = ((undefined4 *)GEN_TOP(((int)puVar18 + 1)));
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
        in_esi = ((undefined4 *)GEN_TOP(((int)in_esi + 1)));
        puVar18 = ((undefined4 *)GEN_TOP(((int)puVar18 + 1)));
      }
    }
  }
  return CONCAT44(uVar16,in_edi);
}

/* ref: FUN_00c55c34 */
GEN_LIB GEN_NOFRAME uint F_00c55c34(void)
{
  GEN_ENTER(0xc55c34u, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  
  BVar1 = gen_imp_IsProcessorFeaturePresent(10);
  REFG(undefined4, 0x15e42a0) = BVar1;
  return 0;
}

/* ref: FUN_00c55c44 */
GEN_LIB GEN_NOFRAME uint F_00c55c44(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc55c44u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  char * pcVar1;
  
  pcVar1 = F_00c51220(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: __forcdecpt_l */
GEN_LIB GEN_NOFRAME unsigned int F_00c55c4f(GEN_P(char * _Buf, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc55c4fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * _Buf = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte * pbVar4;
  bool bVar5;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
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
  *pbVar4 = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))));
  do {
    pbVar4 = pbVar4 + 1;
    bVar1 = *pbVar4;
    *pbVar4 = bVar2;
    bVar2 = bVar1;
  } while (*pbVar4 != 0);
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __cropzeros_l */
GEN_LIB GEN_NOFRAME unsigned int F_00c55cc3(GEN_P(char * _Buf, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc55cc3u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * _Buf = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  char * pcVar1;
  char * pcVar2;
  char cVar4;
  char * pcVar3;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  cVar4 = *_Buf;
  pcVar1 = _Buf;
  if (cVar4 != '\0') {
    do {
      if (cVar4 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))))) break;
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
      pcVar2 = pcVar3 - 1;
    } while (*pcVar2 == '0');
    if (*pcVar2 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))))) {
      pcVar2 = pcVar3 - 2;
    }
    do {
      cVar4 = *pcVar1;
      pcVar2 = pcVar2 + 1;
      pcVar1 = pcVar1 + 1;
      *pcVar2 = cVar4;
    } while (cVar4 != '\0');
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __positive */
GEN_LIB GEN_NOFRAME int F_00c55d45(GEN_P(double * arg, unsigned int gen_a0))
{
  GEN_ENTER(0xc55d45u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(double * arg = (double *)(uintptr_t)gen_a0;)
  double dVar1;
  
  dVar1 = *arg;
  if (!GEN_ISNAN(dVar1) && 0.0 < dVar1 != (dVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

/* ref: __fassign_l */
GEN_LIB GEN_NOFRAME unsigned int F_00c55d61(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc55d61u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  GEN_FRAME_DECL(0xc, 4);
  
  if ((*(int *)&gen_args[0]) == 0) {
    F_00c7a984((undefined *)&(*(int *)&gen_args[0]),(*(char * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
    *(int *)(*(char * PTR32 *)&gen_args[1]) = (*(int *)&gen_args[0]);
  }
  else {
    F_00c7a805(&(*(undefined4 *)(gen_frame + 0x0)),(*(char * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
    *(float *)(*(char * PTR32 *)&gen_args[1]) = (*(float *)((char *)&((*(undefined4 *)(gen_frame + 0x0)))));
    *((undefined4 *)GEN_TOP(((*(char * PTR32 *)&gen_args[1]) + 4))) = (*(undefined4 *)(gen_frame + 0x4));
  }
  return 0;
}

/* ref: __fassign */
GEN_LIB GEN_NOFRAME unsigned int F_00c55da3(GEN_P(int flag, unsigned int gen_a0), GEN_P(char * argument, unsigned int gen_a1), GEN_P(char * number, unsigned int gen_a2))
{
  GEN_ENTER(0xc55da3u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int flag = (int)gen_a0;)
  GEN_PIN(char * argument = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * number = (char *)(uintptr_t)gen_a2;)
  return (uint)(F_00c55d61(flag,argument,number,((undefined *)GEN_TOP(0x0))));
}

/* ref: __shift */
GEN_LIB GEN_NOFRAME uint F_00c55dbd(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc55dbdu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  gen_size32 sVar1;
  
  if (in_edi != 0) {
    sVar1 = F_00c552f0(in_eax);
    in_eax = ((char *)GEN_TOP(F_00c46e20(in_eax + in_edi,in_eax,sVar1 + 1)));
  }
  return (uint)in_eax;
}

/* ref: __forcdecpt */
GEN_LIB GEN_NOFRAME unsigned int F_00c55ddc(GEN_P(char * _Buf, unsigned int gen_a0))
{
  GEN_ENTER(0xc55ddcu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * _Buf = (char *)(uintptr_t)gen_a0;)
  return (uint)(F_00c55c4f(_Buf,((undefined *)GEN_TOP(0x0))));
}

/* ref: __cropzeros */
GEN_LIB GEN_NOFRAME unsigned int F_00c55def(GEN_P(char * _Buf, unsigned int gen_a0))
{
  GEN_ENTER(0xc55defu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * _Buf = (char *)(uintptr_t)gen_a0;)
  return (uint)(F_00c55cc3(_Buf,((undefined *)GEN_TOP(0x0))));
}

/* ref: FUN_00c55e02 */
GEN_LIB GEN_NOFRAME uint F_00c55e02(GEN_P(undefined1 * in_eax, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc55e02u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * in_eax = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL(0x14, 12);
  uint * puVar1;
  int eVar2;
  int iVar3;
  int iVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  uint uVar7;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_7);
  if ((in_eax == ((undefined1 *)GEN_TOP(0x0))) || (param_2 == 0)) {
    puVar1 = (uint *)F_00c51f85();
    uVar7 = 0x16;
  }
  else {
    iVar3 = param_3;
    if (param_3 < 1) {
      iVar3 = 0;
    }
    if (iVar3 + 9U < param_2) {
      if (param_6 != '\0') {
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
        *puVar6 = *((undefined1 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))));
      }
      puVar6 = puVar6 + (uint)(param_6 == '\0') + param_3;
      if (param_2 == 0xffffffff) {
        puVar5 = ((undefined1 *)GEN_TOP(0xffffffff));
      }
      else {
        puVar5 = in_eax + (param_2 - (int)puVar6);
      }
      eVar2 = F_00c49908(puVar6,puVar5,((char *)REFP(0x1119e68)));
      if (eVar2 == 0) {
        if (param_4 != 0) {
          *puVar6 = 0x45;
        }
        if (*((char *)GEN_TOP(param_5[3])) != '0') {
          iVar3 = param_5[1] - 1;
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
        if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        }
        return 0;
      }
                    
      F_00c4c299(0,0,0,0,0);
    }
    puVar1 = (uint *)F_00c51f85();
    uVar7 = 0x22;
  }
  *puVar1 = uVar7;
  F_00c4c305();
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar7;
}

/* ref: __cftoe_l */
GEN_LIB GEN_NOFRAME uint F_00c55f63(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc55f63u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0x30, 0);
  int * piVar1;
  gen_size32 _SizeInBytes;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 0x16;
  F_00c7abe1(*param_1,param_1[1],((undefined *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),0x16);
  if ((param_2 == ((undefined1 *)GEN_TOP(0x0))) || (param_3 == 0)) {
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
  return uVar2;
}

/* ref: __cftoe */
GEN_LIB GEN_NOFRAME int F_00c5602a(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc5602au, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c55f63(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: __cftoa_l */
GEN_LIB GEN_NOFRAME uint F_00c5604a(GEN_P(ulonglong * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(gen_size32 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc5604au, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(gen_size32 param_4 = (gen_size32)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined * param_6 = (undefined *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x28, 8);
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
  
  (*(uint *)(gen_frame + 0x10)) = 0x3ff;
  (*(int *)(gen_frame + 0x20)) = 0x30;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_6);
  if ((int)param_4 < 0) {
    param_4 = 0;
  }
  if ((param_2 == ((undefined1 *)GEN_TOP(0x0))) || (param_3 == 0)) {
    puVar5 = (uint *)F_00c51f85();
    uVar15 = 0x16;
LAB_00c56085: ;
    *puVar5 = uVar15;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return uVar15;
  }
  *param_2 = 0;
  if (param_3 <= param_4 + 0xb) {
    puVar5 = (uint *)F_00c51f85();
    uVar15 = 0x22;
    goto LAB_00c56085;
  }
  (*(uint *)(gen_frame + 0x18)) = (uint)*param_1;
  if ((*((uint *)GEN_TOP(((int)param_1 + 4))) >> 0x14 & 0x7ff) == 0x7ff) {
    if (param_3 == 0xffffffff) {
      iVar6 = -1;
    }
    else {
      iVar6 = param_3 - 2;
    }
    uVar15 = F_00c5602a(param_1,param_2 + 2,iVar6,param_4,0);
    if (uVar15 != 0) {
      *param_2 = 0;
      if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
        return uVar15;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
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
    if (pcVar7 != ((char *)GEN_TOP(0x0))) {
      *pcVar7 = ((param_5 == 0) - 1U & 0xe0) + 0x70;
      pcVar7[3] = '\0';
    }
    goto LAB_00c563ac;
  }
  puVar11 = param_2;
  if ((*((uint *)GEN_TOP(((int)param_1 + 4))) & 0x80000000) != 0) {
    *param_2 = 0x2d;
    puVar11 = param_2 + 1;
  }
  *puVar11 = 0x30;
  puVar11[1] = ((param_5 == 0) - 1U & 0xe0) + 0x78;
  sVar10 = (-(ushort)(param_5 != 0) & 0xffe0) + 0x27;
  if ((*param_1 & 0x7ff0000000000000) == 0) {
    puVar11[2] = 0x30;
    if ((uint)*param_1 == 0 && (*param_1 & 0xfffff00000000) == 0) {
      (*(uint *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x10)) = 0x3fe;
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
    *pcVar13 = *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))));
  }
  uVar15 = *((uint *)GEN_TOP(((int)param_1 + 4))) & 0xfffff;
  (*(uint *)(gen_frame + 0x1c)) = uVar15;
  if ((uVar15 != 0) || ((uint)*param_1 != 0)) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0xf0000;
    do {
      if ((int)param_4 < 1) break;
      uVar4 = (ushort)((ulonglong)(byte)(*(int *)(gen_frame + 0x20)) < 0x40) *
              (short)(CONCAT44(*((uint *)GEN_TOP(((int)param_1 + 4))) & (*(uint *)(gen_frame + 0x1c)),(uint)*param_1 & (*(uint *)(gen_frame + 0x18))) >>
                     (ulonglong)(byte)(*(int *)(gen_frame + 0x20))) + 0x30;
      if (0x39 < uVar4) {
        uVar4 = uVar4 + sVar10;
      }
      iVar6 = (*(int *)(gen_frame + 0x20)) - 4;
      (*(int *)(gen_frame + 0x20)) = iVar6;
      iVar6 = (*(int *)(gen_frame + 0x20));
      *pcVar7 = (char)uVar4;
      pcVar7 = pcVar7 + 1;
      param_4 = param_4 - 1;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x20)) + 0)) = (short)iVar6;
      bVar14 = -1 < (short)(*(int *)(gen_frame + 0x20));
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) >> 4 | (*(uint *)(gen_frame + 0x1c)) << 0x1c;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) >> 4;
      (*(int *)(gen_frame + 0x20)) = iVar6;
    } while (bVar14);
    if ((-1 < (short)(*(int *)(gen_frame + 0x20))) &&
       (pcVar12 = pcVar7,
       8 < (ushort)((ushort)((ulonglong)(byte)(*(int *)(gen_frame + 0x20)) < 0x40) *
                   (short)(CONCAT44(*((uint *)GEN_TOP(((int)param_1 + 4))) & (*(uint *)(gen_frame + 0x1c)),(uint)*param_1 & (*(uint *)(gen_frame + 0x18)))
                          >> (ulonglong)(byte)(*(int *)(gen_frame + 0x20)))))) {
      while( true ) {
        pcVar8 = pcVar12 - 1;
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
  uVar9 = uVar15 - (*(uint *)(gen_frame + 0x10));
  iVar6 = -(uint)(uVar15 < (*(uint *)(gen_frame + 0x10)));
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
    (*(undefined4 *)(gen_frame + 0x14)) = (int)((ulonglong)lVar1 >> 0x20);
    if (pcVar13 == pcVar12) goto LAB_00c5635b;
LAB_00c56366: ;
    lVar1 = lVar2 / 100;
    lVar2 = lVar2 % 100;
    *pcVar13 = (char)lVar1 + '0';
    (*(undefined4 *)(gen_frame + 0x14)) = (int)((ulonglong)lVar1 >> 0x20);
    pcVar13 = pcVar13 + 1;
  }
  cVar3 = (char)lVar2;
  if ((pcVar13 != pcVar12) || (9 < lVar2)) {
    cVar3 = (char)(lVar2 % 10);
    *pcVar13 = (char)(lVar2 / 10) + '0';
    (*(undefined4 *)(gen_frame + 0x14)) = (int)((ulonglong)(lVar2 / 10) >> 0x20);
    pcVar13 = pcVar13 + 1;
    (*(undefined4 *)(gen_frame + 0x14)) = (int)((ulonglong)(lVar2 % 10) >> 0x20);
  }
  *pcVar13 = cVar3 + '0';
  pcVar13[1] = '\0';
LAB_00c563ac: ;
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __cftoa */
GEN_LIB GEN_NOFRAME int F_00c563c0(GEN_P(double * _Value, unsigned int gen_a0), GEN_P(char * _Buf, unsigned int gen_a1), GEN_P(gen_size32 _SizeInBytes, unsigned int gen_a2), GEN_P(int _Dec, unsigned int gen_a3), GEN_P(int _Caps, unsigned int gen_a4))
{
  GEN_ENTER(0xc563c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(double * _Value = (double *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Buf = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _SizeInBytes = (gen_size32)gen_a2;)
  GEN_PIN(int _Dec = (int)gen_a3;)
  GEN_PIN(int _Caps = (int)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c5604a(_Value,_Buf,_SizeInBytes,_Dec,_Caps,0);
  return uVar1;
}

/* ref: __cftof2_l */
GEN_LIB GEN_NOFRAME uint F_00c563e0(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(char * in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(gen_size32 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4), GEN_P(undefined * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc563e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(gen_size32 param_4 = (gen_size32)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_PIN(undefined * param_6 = (undefined *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL(0x14, 12);
  char * _Dst;
  int iVar1;
  int iVar2;
  int * piVar3;
  gen_size32 sVar4;
  uint uVar5;
  char * _Str;
  
  iVar1 = in_eax[1];
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_6);
  if ((in_ecx == ((char *)GEN_TOP(0x0))) || (param_3 == 0)) {
    piVar3 = F_00c51f85();
    uVar5 = 0x16;
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  else {
    if ((param_5 != '\0') && (iVar1 - 1U == param_4)) {
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
      *_Str = *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))));
      if (in_eax[1] < 0) {
        sVar4 = -in_eax[1];
        if ((param_5 != '\0') || ((int)sVar4 <= (int)param_4)) {
          param_4 = sVar4;
        }
        F_00c55dbd(_Dst,param_4);
        F_00c48350(_Dst,0x30,param_4);
      }
    }
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    uVar5 = 0;
  }
  return uVar5;
}

/* ref: __cftof_l */
GEN_LIB GEN_NOFRAME uint F_00c564e3(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc564e3u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL(0x20, 0);
  int * piVar1;
  gen_size32 _SizeInBytes;
  uint uVar2;
  undefined _Stack_30[16];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = 0x16;
  F_00c7abe1(*param_1,param_1[1],&_Stack_30,((undefined1 *)(gen_frame + 0x0)),0x16);
  if (param_2 == ((undefined1 *)GEN_TOP(0x0))) {
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
  return uVar2;
}

/* ref: __cftof */
GEN_LIB GEN_NOFRAME int F_00c565a4(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc565a4u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c564e3(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: __cftog_l */
GEN_LIB GEN_NOFRAME uint F_00c565c1(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc565c1u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0x20, 0);
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
  if ((param_2 == ((undefined1 *)GEN_TOP(0x0))) || (param_3 == 0)) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    iVar5 = (*(int *)(((char *)&(_Stack_30) + 4))) - 1;
    if (param_3 == -1) {
      _SizeInBytes = 0xffffffff;
    }
    else {
      _SizeInBytes = param_3 - (uint)((*(int *)((char *)&(_Stack_30))) == 0x2d);
    }
    uVar3 = F_00c7aa7b(param_2 + ((*(int *)((char *)&(_Stack_30))) == 0x2d),_SizeInBytes,param_4,&_Stack_30);
    if (uVar3 == 0) {
      iVar4 = (*(int *)(((char *)&(_Stack_30) + 4))) - 1;
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
  return uVar3;
}

/* ref: __cftog */
GEN_LIB GEN_NOFRAME uint F_00c566ae(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc566aeu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c565c1(param_1,param_2,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: __cfltcvt_l */
GEN_LIB GEN_NOFRAME int F_00c566ce(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc566ceu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
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
GEN_LIB GEN_NOFRAME int F_00c56756(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc56756u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int eVar1;
  
  eVar1 = F_00c566ce(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return eVar1;
}

/* ref: __initp_misc_cfltcvt_tab */
GEN_LIB GEN_NOFRAME unsigned int F_00c56779(void)
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
GEN_LIB GEN_NOFRAME uint F_00c5679c(void)
{
  GEN_ENTER(0xc5679cu, 0u, 0u, 0u, 0u);
  int eVar1;
  
  eVar1 = F_00c7ad58(((uint *)GEN_TOP(0x0)),0x10000,0x30000);
  if (eVar1 != 0) {
                    
    F_00c4c299(0,0,0,0,0);
  }
  return 0;
}

/* ref: __flsbuf */
GEN_LIB GEN_NOFRAME int F_00c567c4(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc567c4u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * pcVar1;
  char * pcVar2;
  undefined * _File_00;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * puVar6;
  longlong lVar7;
  uint local_8;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(F_00c5d07b((*(undefined * PTR32 *)&gen_args[1]))));
  uVar4 = (*(int *)(((char *)(_File_00) + 12)));
  if ((uVar4 & 0x82) == 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 9;
LAB_00c567ea: ;
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
    return -1;
  }
  if ((uVar4 & 0x40) != 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x22;
    goto LAB_00c567ea;
  }
  if ((uVar4 & 1) != 0) {
    (*(int *)(((char *)(_File_00) + 4))) = 0;
    if ((uVar4 & 0x10) == 0) {
      (*(int *)(((char *)(_File_00) + 12))) = uVar4 | 0x20;
      return -1;
    }
    (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    (*(int *)(((char *)(_File_00) + 12))) = uVar4 & 0xfffffffe;
  }
  uVar4 = (*(int *)(((char *)(_File_00) + 12)));
  (*(int *)(((char *)(_File_00) + 12))) = uVar4 & 0xffffffef | 2;
  (*(int *)(((char *)(_File_00) + 4))) = 0;
  local_8 = 0;
  if (((uVar4 & 0x10c) == 0) &&
     (((uVar4 = F_00c50860(), _File_00 != ((undefined *)GEN_TOP((uVar4 + 0x20))) &&
       (uVar4 = F_00c50860(), _File_00 != ((undefined *)GEN_TOP((uVar4 + 0x40))))) ||
      (iVar5 = F_00c7adb7((int)(*(undefined * PTR32 *)&gen_args[1])), iVar5 == 0)))) {
    F_00c6e658(_File_00);
  }
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x108U) == 0) {
    uVar4 = 1;
    local_8 = F_00c5de4b((int)(*(undefined * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[0]),1);
  }
  else {
    pcVar1 = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    pcVar2 = (*(char * PTR32 *)((char *)(_File_00)));
    (*(char * PTR32 *)((char *)(_File_00))) = pcVar1 + 1;
    uVar4 = (int)pcVar2 - (int)pcVar1;
    (*(int *)(((char *)(_File_00) + 4))) = (*(int *)(((char *)(_File_00) + 24))) - 1;
    if ((int)uVar4 < 1) {
      if (((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0xffffffff))) || ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0xfffffffe)))) {
        puVar6 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar6 = ((undefined *)GEN_TOP((((uint)(*(undefined * PTR32 *)&gen_args[1]) & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)(*(undefined * PTR32 *)&gen_args[1]) >> 5)])));
      }
      if (((puVar6[4] & 0x20) != 0) && (lVar7 = F_00c6de26((*(undefined * PTR32 *)&gen_args[1]),0,0,2), lVar7 == -1))
      goto LAB_00c56912;
    }
    else {
      local_8 = F_00c5de4b((int)(*(undefined * PTR32 *)&gen_args[1]),pcVar1,uVar4);
    }
    pcVar1 = (*(char * PTR32 *)(((char *)(_File_00) + 8)));
    *pcVar1 = (char)(*(int *)&gen_args[0]);
  }
  if (local_8 == uVar4) {
    return (*(int *)&gen_args[0]) & 0xff;
  }
LAB_00c56912: ;
  (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x20;
  return -1;
}

/* ref: write_char_00c56928 */
GEN_LIB GEN_NOFRAME uint F_00c56928(GEN_P(byte in_al, unsigned int gen_a0), GEN_P(undefined * in_ecx, unsigned int gen_a1), GEN_P(int * in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xc56928u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte in_al = (byte)gen_a0;)
  GEN_PIN(undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != ((char *)GEN_TOP(0x0)))) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 - 1;
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
GEN_LIB GEN_NOFRAME uint F_00c5695b(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5695bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 - 1;
    piVar1 = ((int *)GEN_TOP(F_00c56928(param_2,param_4,in_eax)));
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: Global::_write_string */
GEN_LIB GEN_NOFRAME uint F_00c56981(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ebx, unsigned int gen_a1), GEN_P(uint * in_edi, unsigned int gen_a2), GEN_P(undefined1 * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc56981u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ebx = (int)gen_a1;)
  GEN_PIN(uint * in_edi = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*((byte *)GEN_TOP((in_ebx + 0xc))) & 0x40) == 0) || (*((int *)GEN_TOP((in_ebx + 8))) != 0)) {
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
GEN_LIB GEN_NOFRAME uint F_00c569e3(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc569e3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  *param_1 = *param_1 + 4;
  return *((uint *)GEN_TOP((*param_1 - 4)));
}

/* ref: FUN_00c569f5 */
GEN_LIB GEN_NOFRAME ulonglong F_00c569f5(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc569f5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  *param_1 = *param_1 + 8;
  return *((ulonglong *)GEN_TOP((*param_1 - 8)));
}

/* ref: FUN_00c56a0a */
GEN_LIB GEN_NOFRAME ushort F_00c56a0a(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc56a0au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  *param_1 = *param_1 + 4;
  return *((ushort *)GEN_TOP((*param_1 - 4)));
}

/* ref: FUN_00c56a1d */
GEN_LIB GEN_NOFRAME uint F_00c56a1d(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(wchar_t * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc56a1du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x284, 12);
  wchar_t wVar1;
  short * psVar2;
  uint * puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte * pbVar6;
  undefined * in_ecx;
  byte bVar7;
  int * piVar8;
  uint uVar9;
  gen_size32 sVar10;
  wchar_t * pwVar11;
  int iVar12;
  code * pcVar13;
  wchar_t * pwVar14;
  int eVar15;
  char cVar16;
  undefined * puVar17;
  int iVar18;
  byte * pbVar19;
  wchar_t * pwVar20;
  bool bVar21;
  undefined4 * puVar22;
  undefined4 uVar23;
  undefined2 uVar24;
  undefined2 uVar26;
  undefined * p_Var25;
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = param_4;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(int *)(gen_frame + 0x68)) = 0;
  (*(int *)(gen_frame + 0x4c)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x44)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x24)) GEN_EDX_ARG,param_3);
  piVar8 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
  if (param_1 == ((undefined *)GEN_TOP(0x0))) goto LAB_00c56a93;
  if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
    uVar9 = F_00c5d07b(param_1);
    if ((uVar9 == 0xffffffff) || (uVar9 == 0xfffffffe)) {
      puVar17 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar17 = ((undefined *)GEN_TOP(((uVar9 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar9 >> 5)])));
    }
    if ((puVar17[0x24] & 0x7f) != 0) goto LAB_00c56a93;
    if ((uVar9 == 0xffffffff) || (uVar9 == 0xfffffffe)) {
      puVar17 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar17 = ((undefined *)GEN_TOP(((uVar9 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar9 >> 5)])));
    }
    if ((puVar17[0x24] & 0x80) != 0) goto LAB_00c56a93;
  }
  iVar18 = 0;
  if (param_2 != ((byte *)GEN_TOP(0x0))) {
    (*(byte *)(gen_frame + 0x6f)) = *param_2;
    (*(uint *)(gen_frame + 0x5c)) = 0;
    (*(gen_size32 *)(gen_frame + 0x58)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = ((wchar_t *)GEN_TOP(0x0));
    pbVar6 = param_2;
    pwVar14 = param_4;
    pwVar20 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
    while ((*(byte *)(gen_frame + 0x6f)) != 0) {
      pbVar19 = pbVar6 + 1;
      (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar19;
      if ((int)(*(uint *)(gen_frame + 0x5c)) < 0) break;
      if ((byte)((*(byte *)(gen_frame + 0x6f)) - 0x20) < 0x59) {
        uVar9 = (int)((char *)REFP(0x1119e68))[(char)(*(byte *)(gen_frame + 0x6f))] & 0xf;
      }
      else {
        uVar9 = 0;
      }
      (*(int *)(gen_frame + 0xc)) = (int)(char)(&REFG(undefined, 0x1119e88))[(int)(uVar9 * 8 + iVar18)] >> 4;
      (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar20;
      switch((unsigned int)(uintptr_t)((int)(char)(&REFG(undefined, 0x1119e88))[(int)(uVar9 * 8 + iVar18)] >> 4)) {
      case 0: ;
switchD_00c56b97_caseD_0: ;
        (*(int *)(gen_frame + 0x44)) = 0;
        iVar18 = F_00c6dfe8((uint)(*(byte *)(gen_frame + 0x6f)),&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
        bVar7 = (*(byte *)(gen_frame + 0x6f));
        if (iVar18 != 0) {
          F_00c56928((*(byte *)(gen_frame + 0x6f)),(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
          bVar7 = *pbVar19;
          (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar6 + 2;
          if (bVar7 == 0) goto LAB_00c56a93;
        }
        F_00c56928(bVar7,(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
        break;
      case 1: ;
        (*(int *)(gen_frame + 0x68)) = -1;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0x3c)) = 0;
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(int *)(gen_frame + 0x4c)) = 0;
        (*(uint *)(gen_frame + 0x70)) = 0;
        (*(int *)(gen_frame + 0x44)) = 0;
        break;
      case 2: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x20) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 2;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x23) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x80;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x2b) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 1;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x2d) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 4;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x30) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 8;
        }
        break;
      case 3: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14 + 2;
          iVar18 = *(int *)pwVar14;
          (*(int *)(gen_frame + 0x48)) = iVar18;
          if (iVar18 < 0) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 4;
            (*(int *)(gen_frame + 0x48)) = -iVar18;
          }
        }
        else {
          (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) * 10 - 0x30 + (int)(char)(*(byte *)(gen_frame + 0x6f));
        }
        break;
      case 4: ;
        (*(int *)(gen_frame + 0x68)) = 0;
        break;
      case 5: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14 + 2;
          (*(int *)(gen_frame + 0x68)) = *(int *)pwVar14;
          if (*(int *)pwVar14 < 0) {
            (*(int *)(gen_frame + 0x68)) = -1;
          }
        }
        else {
          (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) * 10 - 0x30 + (int)(char)(*(byte *)(gen_frame + 0x6f));
        }
        break;
      case 6: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x49) {
          bVar7 = *pbVar19;
          if ((bVar7 == 0x36) && (pbVar6[2] == 0x34)) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x8000;
            (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar6 + 3;
          }
          else if ((bVar7 == 0x33) && (pbVar6[2] == 0x32)) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) & 0xffff7fff;
            (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar6 + 3;
          }
          else if (((((bVar7 != 100) && (bVar7 != 0x69)) && (bVar7 != 0x6f)) &&
                   ((bVar7 != 0x75 && (bVar7 != 0x78)))) && (bVar7 != 0x58)) {
            (*(int *)(gen_frame + 0xc)) = 0;
            goto switchD_00c56b97_caseD_0;
          }
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x68) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x20;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x6c) {
          if (*pbVar19 == 0x6c) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x1000;
            (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar6 + 2;
          }
          else {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x10;
          }
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x77) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x800;
        }
        break;
      case 7: ;
        if ((char)(*(byte *)(gen_frame + 0x6f)) < 'e') {
          if ((*(byte *)(gen_frame + 0x6f)) == 100) {
LAB_00c57063: ;
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x40;
LAB_00c5706a: ;
            pwVar20 = pwVar14;
            (*(gen_size32 *)(gen_frame + 0x58)) = 10;
LAB_00c57074: ;
            if ((((*(uint *)(gen_frame + 0x70)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x70)) & 0x1000) == 0)) {
              pwVar14 = pwVar20 + 2;
              if (((*(uint *)(gen_frame + 0x70)) & 0x20) == 0) {
                uVar9 = *(uint *)pwVar20;
                if (((*(uint *)(gen_frame + 0x70)) & 0x40) == 0) {
                  iVar18 = 0;
                }
                else {
                  iVar18 = (int)uVar9 >> 0x1f;
                }
                goto LAB_00c5729f;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14;
              if (((*(uint *)(gen_frame + 0x70)) & 0x40) == 0) {
                uVar9 = (uint)(ushort)*pwVar20;
              }
              else {
                uVar9 = (uint)*pwVar20;
              }
              iVar18 = (int)uVar9 >> 0x1f;
            }
            else {
              uVar9 = *(uint *)pwVar20;
              iVar18 = *(int *)(pwVar20 + 2);
              pwVar14 = pwVar20 + 4;
LAB_00c5729f: ;
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14;
            }
            if (((((*(uint *)(gen_frame + 0x70)) & 0x40) != 0) && (iVar18 < 1)) && (iVar18 < 0)) {
              bVar21 = uVar9 != 0;
              uVar9 = -uVar9;
              iVar18 = -(iVar18 + (uint)bVar21);
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x100;
            }
            uVar4 = CONCAT44(iVar18,uVar9);
            if (((*(uint *)(gen_frame + 0x70)) & 0x9000) == 0) {
              iVar18 = 0;
            }
            if ((*(int *)(gen_frame + 0x68)) < 0) {
              (*(int *)(gen_frame + 0x68)) = 1;
            }
            else {
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) & 0xfffffff7;
              if (0x200 < (*(int *)(gen_frame + 0x68))) {
                (*(int *)(gen_frame + 0x68)) = 0x200;
              }
            }
            if (uVar9 == 0 && iVar18 == 0) {
              (*(int *)(gen_frame + 0x4c)) = 0;
            }
            pwVar14 = &(*(undefined2 *)(gen_frame + 0x273));
            while( true ) {
              iVar12 = (*(int *)(gen_frame + 0x68));
              (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1;
              if ((iVar12 < 1) && ((int)uVar4 == 0 && iVar18 == 0)) break;
              uVar5 = CONCAT44(iVar18,(int)uVar4);
              uVar4 = uVar5 / (*(gen_size32 *)(gen_frame + 0x58));
              iVar18 = (int)(uVar4 >> 0x20);
              uVar9 = (int)(uVar5 % (ulonglong)(*(gen_size32 *)(gen_frame + 0x58))) + 0x30;
              cVar16 = (char)uVar9;
              (*(gen_size32 *)(gen_frame + 0x20)) = 0;
              if (0x39 < uVar9) {
                cVar16 = cVar16 + (char)(*(undefined4 *)(gen_frame + 0x34));
              }
              *(char *)pwVar14 = cVar16;
              pwVar14 = ((wchar_t *)GEN_TOP(((int)pwVar14 - 1)));
            }
            sVar10 = (int)&(*(undefined2 *)(gen_frame + 0x273)) - (int)pwVar14;
            (*(gen_size32 *)(gen_frame + 0x58)) = sVar10;
            (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)GEN_TOP(((int)pwVar14 + 1)));
            if ((((*(uint *)(gen_frame + 0x70)) & 0x200) != 0) &&
               ((sVar10 == 0 || (*((char *)GEN_TOP(((int)pwVar14 + 1))) != '0')))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar14;
              *(char *)pwVar14 = '0';
              sVar10 = (int)&(*(undefined2 *)(gen_frame + 0x273)) - (int)pwVar14 + 1;
              goto LAB_00c573d0;
            }
          }
          else {
            if ((char)(*(byte *)(gen_frame + 0x6f)) < 'T') {
              if ((*(byte *)(gen_frame + 0x6f)) == 0x53) {
                if (((*(uint *)(gen_frame + 0x70)) & 0x830) == 0) {
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x800;
                }
                goto LAB_00c56e78;
              }
              if ((*(byte *)(gen_frame + 0x6f)) != 0x41) {
                if ((*(byte *)(gen_frame + 0x6f)) == 0x43) {
                  pwVar20 = pwVar14;
                  if (((*(uint *)(gen_frame + 0x70)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x800;
                  }
                  goto LAB_00c56ef1;
                }
                if (((*(byte *)(gen_frame + 0x6f)) != 0x45) && ((*(byte *)(gen_frame + 0x6f)) != 0x47)) goto LAB_00c573d6;
              }
              (*(undefined4 *)(gen_frame + 0x8)) = 1;
              (*(byte *)(gen_frame + 0x6f)) = (*(byte *)(gen_frame + 0x6f)) + 0x20;
LAB_00c57099: ;
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x40;
              pwVar20 = ((wchar_t *)(gen_frame + 0x74));
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar20;
              (*(gen_size32 *)(gen_frame + 0x20)) = 0x200;
              if ((*(int *)(gen_frame + 0x68)) < 0) {
                (*(int *)(gen_frame + 0x68)) = 6;
              }
              else if ((*(int *)(gen_frame + 0x68)) == 0) {
                if ((*(byte *)(gen_frame + 0x6f)) == 0x67) {
                  (*(int *)(gen_frame + 0x68)) = 1;
                }
              }
              else {
                if (0x200 < (*(int *)(gen_frame + 0x68))) {
                  (*(int *)(gen_frame + 0x68)) = 0x200;
                }
                if (0xa3 < (*(int *)(gen_frame + 0x68))) {
                  sVar10 = (*(int *)(gen_frame + 0x68)) + 0x15d;
                  pwVar11 = F_00c54c2e(sVar10);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = pwVar11;
                  if (pwVar11 == ((wchar_t *)GEN_TOP(0x0))) {
                    (*(int *)(gen_frame + 0x68)) = 0xa3;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar11;
                    (*(gen_size32 *)(gen_frame + 0x20)) = sVar10;
                    pwVar20 = pwVar11;
                  }
                }
              }
              (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)pwVar14;
              (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(pwVar14 + 2);
              p_Var25 = ((undefined *)(gen_frame + 0x24));
              iVar12 = (int)(char)(*(byte *)(gen_frame + 0x6f));
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14 + 4;
              puVar22 = &(*(undefined4 *)(gen_frame + 0x0));
              pwVar14 = pwVar20;
              sVar10 = (*(gen_size32 *)(gen_frame + 0x20));
              iVar18 = (*(int *)(gen_frame + 0x68));
              uVar23 = (*(undefined4 *)(gen_frame + 0x8));
              pcVar13 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
              (*pcVar13)(puVar22,pwVar14,sVar10,iVar12,iVar18,uVar23,p_Var25);
              uVar9 = (*(uint *)(gen_frame + 0x70)) & 0x80;
              if ((uVar9 != 0) && ((*(int *)(gen_frame + 0x68)) == 0)) {
                p_Var25 = ((undefined *)(gen_frame + 0x24));
                pwVar14 = pwVar20;
                pcVar13 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                (*pcVar13)(pwVar14,p_Var25);
              }
              if (((*(byte *)(gen_frame + 0x6f)) == 0x67) && (uVar9 == 0)) {
                p_Var25 = ((undefined *)(gen_frame + 0x24));
                pwVar14 = pwVar20;
                pcVar13 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                (*pcVar13)(pwVar14,p_Var25);
              }
              if ((char)*pwVar20 == '-') {
                (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x100;
                pwVar20 = ((wchar_t *)GEN_TOP(((int)pwVar20 + 1)));
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar20;
              }
              uVar24 = SUB42(pwVar20,0);
              uVar26 = (undefined2)((uint)((int)(uintptr_t)pwVar20) >> 0x10);
            }
            else {
              if ((*(byte *)(gen_frame + 0x6f)) == 0x58) goto LAB_00c571f9;
              if ((*(byte *)(gen_frame + 0x6f)) != 0x5a) {
                if ((*(byte *)(gen_frame + 0x6f)) == 0x61) goto LAB_00c57099;
                if ((*(byte *)(gen_frame + 0x6f)) != 99) goto LAB_00c573d6;
LAB_00c56ef1: ;
                (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar20 + 2;
                if (((*(uint *)(gen_frame + 0x70)) & 0x810) == 0) {
                  (*(undefined1 *)((char *)&((wchar_t *)(gen_frame + 0x74))[0] + 0)) = (char)*pwVar20;
                  (*(gen_size32 *)(gen_frame + 0x58)) = 1;
                }
                else {
                  wVar1 = *pwVar20;
                  eVar15 = F_00c7af62((int *)&(*(gen_size32 *)(gen_frame + 0x58)),(char *)((wchar_t *)(gen_frame + 0x74)),0x200,wVar1);
                  if (eVar15 != 0) {
                    (*(int *)(gen_frame + 0x3c)) = 1;
                  }
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)(gen_frame + 0x74));
                goto LAB_00c573d6;
              }
              psVar2 = *(short * PTR32 *)pwVar14;
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14 + 2;
              if ((psVar2 != ((short *)GEN_TOP(0x0))) && (*(wchar_t * PTR32 *)(psVar2 + 2) != ((wchar_t *)GEN_TOP(0x0)))) {
                sVar10 = (gen_size32)*psVar2;
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = *(wchar_t * PTR32 *)(psVar2 + 2);
                if (((*(uint *)(gen_frame + 0x70)) & 0x800) == 0) {
                  (*(int *)(gen_frame + 0x44)) = 0;
                }
                else {
                  sVar10 = (int)sVar10 / 2;
                  (*(int *)(gen_frame + 0x44)) = 1;
                }
                goto LAB_00c573d0;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              uVar24 = SUB42(REFG(undefined * PTR32, 0x134b148),0);
              uVar26 = (undefined2)((uint)REFG(undefined * PTR32, 0x134b148) >> 0x10);
            }
            sVar10 = F_00c552f0(((char *)GEN_TOP(CONCAT22(uVar26,uVar24))));
LAB_00c573d0: ;
            (*(gen_size32 *)(gen_frame + 0x58)) = sVar10;
          }
LAB_00c573d6: ;
          if ((*(int *)(gen_frame + 0x3c)) == 0) {
            if (((*(uint *)(gen_frame + 0x70)) & 0x40) != 0) {
              if (((*(uint *)(gen_frame + 0x70)) & 0x100) == 0) {
                if (((*(uint *)(gen_frame + 0x70)) & 1) == 0) {
                  if (((*(uint *)(gen_frame + 0x70)) & 2) == 0) goto LAB_00c57423;
                  (*(undefined1 *)(gen_frame + 0x54)) = 0x20;
                }
                else {
                  (*(undefined1 *)(gen_frame + 0x54)) = 0x2b;
                }
              }
              else {
                (*(undefined1 *)(gen_frame + 0x54)) = 0x2d;
              }
              (*(int *)(gen_frame + 0x4c)) = 1;
            }
LAB_00c57423: ;
            sVar10 = ((*(int *)(gen_frame + 0x48)) - (*(gen_size32 *)(gen_frame + 0x58))) - (*(int *)(gen_frame + 0x4c));
            (*(gen_size32 *)(gen_frame + 0x20)) = sVar10;
            if (((*(uint *)(gen_frame + 0x70)) & 0xc) == 0) {
              do {
                if ((int)sVar10 < 1) break;
                sVar10 = sVar10 - 1;
                F_00c56928(0x20,(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
              } while ((*(uint *)(gen_frame + 0x5c)) != 0xffffffff);
            }
            in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x50));
            F_00c56981(&(*(uint *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x50)),(*(int * PTR32 *)(gen_frame + 0x14)),&(*(undefined1 *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x4c)));
            if ((((*(uint *)(gen_frame + 0x70)) & 8) != 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x20)), ((*(uint *)(gen_frame + 0x70)) & 4) == 0)) {
              do {
                if ((int)sVar10 < 1) break;
                sVar10 = sVar10 - 1;
                F_00c56928(0x30,in_ecx,&(*(uint *)(gen_frame + 0x5c)));
              } while ((*(uint *)(gen_frame + 0x5c)) != 0xffffffff);
            }
            if (((*(int *)(gen_frame + 0x44)) == 0) || ((int)(*(gen_size32 *)(gen_frame + 0x58)) < 1)) {
              F_00c56981(&(*(uint *)(gen_frame + 0x5c)),in_ecx,(*(int * PTR32 *)(gen_frame + 0x14)),(*(wchar_t * PTR32 *)(gen_frame + 0x60)),(*(gen_size32 *)(gen_frame + 0x58)));
            }
            else {
              (*(gen_size32 *)(gen_frame + 0x18)) = (*(gen_size32 *)(gen_frame + 0x58));
              pwVar14 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
              do {
                wVar1 = *pwVar14;
                (*(gen_size32 *)(gen_frame + 0x18)) = (*(gen_size32 *)(gen_frame + 0x18)) - 1;
                pwVar14 = pwVar14 + 1;
                eVar15 = F_00c7af62(&(*(int *)(gen_frame + 0x10)),((char *)GEN_TOP(((int)&(*(undefined2 *)(gen_frame + 0x273)) + 1))),6,wVar1);
                if ((eVar15 != 0) || ((*(int *)(gen_frame + 0x10)) == 0)) {
                  (*(uint *)(gen_frame + 0x5c)) = 0xffffffff;
                  break;
                }
                F_00c56981(&(*(uint *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x50)),(*(int * PTR32 *)(gen_frame + 0x14)),(int)&(*(undefined2 *)(gen_frame + 0x273)) + 1,(*(int *)(gen_frame + 0x10)));
              } while ((*(gen_size32 *)(gen_frame + 0x18)) != 0);
            }
            if ((-1 < (int)(*(uint *)(gen_frame + 0x5c))) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x20)), ((*(uint *)(gen_frame + 0x70)) & 4) != 0)) {
              do {
                if ((int)sVar10 < 1) break;
                sVar10 = sVar10 - 1;
                F_00c56928(0x20,(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
              } while ((*(uint *)(gen_frame + 0x5c)) != 0xffffffff);
            }
          }
        }
        else {
          if ('p' < (char)(*(byte *)(gen_frame + 0x6f))) {
            if ((*(byte *)(gen_frame + 0x6f)) == 0x73) {
LAB_00c56e78: ;
              iVar18 = (*(int *)(gen_frame + 0x68));
              if ((*(int *)(gen_frame + 0x68)) == -1) {
                iVar18 = 0x7fffffff;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar14 + 2;
              pwVar14 = *(wchar_t * PTR32 *)pwVar14;
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar14;
              if (((*(uint *)(gen_frame + 0x70)) & 0x810) == 0) {
                pwVar14 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
                if (pwVar14 == ((wchar_t *)GEN_TOP(0x0))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                  pwVar14 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
                }
                for (; (iVar18 != 0 && (iVar18 = iVar18 - 1, (char)*pwVar14 != '\0'));
                    pwVar14 = ((wchar_t *)GEN_TOP(((int)pwVar14 + 1)))) {
                }
                sVar10 = (int)pwVar14 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x60));
              }
              else {
                if (pwVar14 == ((wchar_t *)GEN_TOP(0x0))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                }
                (*(int *)(gen_frame + 0x44)) = 1;
                for (pwVar14 = (*(wchar_t * PTR32 *)(gen_frame + 0x60)); (iVar18 != 0 && (iVar18 = iVar18 - 1, *pwVar14 != L'\0'))
                    ; pwVar14 = pwVar14 + 1) {
                }
                sVar10 = (int)pwVar14 - (int)((int)(uintptr_t)(*(wchar_t * PTR32 *)(gen_frame + 0x60))) >> 1;
              }
              goto LAB_00c573d0;
            }
            if ((*(byte *)(gen_frame + 0x6f)) == 0x75) goto LAB_00c5706a;
            if ((*(byte *)(gen_frame + 0x6f)) != 0x78) goto LAB_00c573d6;
            (*(undefined4 *)(gen_frame + 0x34)) = 0x27;
LAB_00c5722b: ;
            (*(gen_size32 *)(gen_frame + 0x58)) = 0x10;
            if (((*(uint *)(gen_frame + 0x70)) & 0x80) != 0) {
              (*(undefined1 *)(gen_frame + 0x54)) = 0x30;
              (*(char *)(gen_frame + 0x55)) = (char)(*(undefined4 *)(gen_frame + 0x34)) + 'Q';
              (*(int *)(gen_frame + 0x4c)) = 2;
            }
            goto LAB_00c57074;
          }
          if ((*(byte *)(gen_frame + 0x6f)) == 0x70) {
            (*(int *)(gen_frame + 0x68)) = 8;
LAB_00c571f9: ;
            (*(undefined4 *)(gen_frame + 0x34)) = 7;
            pwVar20 = pwVar14;
            goto LAB_00c5722b;
          }
          if ((char)(*(byte *)(gen_frame + 0x6f)) < 'e') goto LAB_00c573d6;
          pwVar14 = pwVar20;
          if ((char)(*(byte *)(gen_frame + 0x6f)) < 'h') goto LAB_00c57099;
          if ((*(byte *)(gen_frame + 0x6f)) == 0x69) goto LAB_00c57063;
          if ((*(byte *)(gen_frame + 0x6f)) != 0x6e) {
            if ((*(byte *)(gen_frame + 0x6f)) != 0x6f) goto LAB_00c573d6;
            (*(gen_size32 *)(gen_frame + 0x58)) = 8;
            if (((*(uint *)(gen_frame + 0x70)) & 0x80) != 0) {
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x200;
            }
            goto LAB_00c57074;
          }
          (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar20 + 2;
          puVar3 = *(uint * PTR32 *)pwVar20;
          uVar9 = F_00c51967();
          if (uVar9 == 0) goto LAB_00c56a93;
          if (((*(uint *)(gen_frame + 0x70)) & 0x20) == 0) {
            *puVar3 = (*(uint *)(gen_frame + 0x5c));
          }
          else {
            *(undefined2 *)puVar3 = (undefined2)(*(uint *)(gen_frame + 0x5c));
          }
          (*(int *)(gen_frame + 0x3c)) = 1;
        }
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x38)) != ((wchar_t *)GEN_TOP(0x0))) {
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x38)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x38)) = ((wchar_t *)GEN_TOP(0x0));
        }
      }
      (*(byte *)(gen_frame + 0x6f)) = *(*(byte * PTR32 *)(gen_frame + 0x40));
      iVar18 = (*(int *)(gen_frame + 0xc));
      pbVar6 = (*(byte * PTR32 *)(gen_frame + 0x40));
      pwVar14 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
      pwVar20 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
    }
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) == false) {
      return (*(uint *)(gen_frame + 0x5c));
    }
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    return (*(uint *)(gen_frame + 0x5c));
  }
LAB_00c56a93: ;
  piVar8 = F_00c51f85();
  *piVar8 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
  }
  return 0xffffffff;
}

/* ref: __vsprintf_l */
GEN_LIB GEN_NOFRAME int F_00c57625(GEN_P(char * _DstBuf, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc57625u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * _DstBuf = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = ((char *)GEN_TOP(0x0));
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *ppcVar4 = ((char *)GEN_TOP(0x0));
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Format != ((char *)GEN_TOP(0x0))) && (_DstBuf != ((char *)GEN_TOP(0x0)))) {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = _DstBuf;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = _DstBuf;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = 0x7fffffff;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = 0x42;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0x0)),_Format,param_3,_ArgList);
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = '\0';
    }
    return uVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return -1;
}

/* ref: _vsprintf */
GEN_LIB GEN_NOFRAME int F_00c576a9(GEN_P(char * _Dest, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _Args, unsigned int gen_a2))
{
  GEN_ENTER(0xc576a9u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * _Dest = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Args = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c57625(_Dest,_Format,((undefined *)GEN_TOP(0x0)),_Args);
  return iVar1;
}

/* ref: FID_conflict___vscprintf_helper_00c576c3 */
GEN_LIB GEN_NOFRAME uint F_00c576c3(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc576c3u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x4));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  ((undefined4 *)(gen_frame + 0x4))[0] = 0x7fffffff;
  ((undefined4 *)(gen_frame + 0x4))[2] = 0x42;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  uVar2 = (*param_1)(&(*(undefined4 *)(gen_frame + 0x0)),param_2,param_3,param_4);
  return uVar2;
}

/* ref: FID_conflict___vscprintf_p_00c5771f */
GEN_LIB GEN_NOFRAME int F_00c5771f(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc5771fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc56a1d)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5773b */
GEN_LIB GEN_NOFRAME int F_00c5773b(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc5773bu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc56a1d)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_00c57758 */
GEN_LIB GEN_NOFRAME int F_00c57758(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc57758u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc5867b)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c57774 */
GEN_LIB GEN_NOFRAME int F_00c57774(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc57774u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c576c3(((code *)REFP(0xc5867b)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: write_char_00c57791 */
GEN_LIB GEN_NOFRAME uint F_00c57791(GEN_P(byte in_al, unsigned int gen_a0), GEN_P(undefined * in_ecx, unsigned int gen_a1), GEN_P(int * in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xc57791u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte in_al = (byte)gen_a0;)
  GEN_PIN(undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != ((char *)GEN_TOP(0x0)))) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 - 1;
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
GEN_LIB GEN_NOFRAME uint F_00c577c4(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc577c4u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 - 1;
    piVar1 = ((int *)GEN_TOP(F_00c57791(param_2,param_4,in_eax)));
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: Global::_write_string_00c577ea */
GEN_LIB GEN_NOFRAME uint F_00c577ea(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ebx, unsigned int gen_a1), GEN_P(uint * in_edi, unsigned int gen_a2), GEN_P(undefined1 * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc577eau, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ebx = (int)gen_a1;)
  GEN_PIN(uint * in_edi = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*((byte *)GEN_TOP((in_ebx + 0xc))) & 0x40) == 0) || (*((int *)GEN_TOP((in_ebx + 8))) != 0)) {
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
GEN_LIB GEN_NOFRAME uint F_00c5784c(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(wchar_t * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5784cu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x284, 12);
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
  
  (*(uint *)(gen_frame + 0x27c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x280);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = param_4;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(uint *)(gen_frame + 0x70)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(int *)(gen_frame + 0x68)) = 0;
  (*(int *)(gen_frame + 0x4c)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x44)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x2c)) GEN_EDX_ARG,param_3);
  piVar6 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar6;
  if (param_1 == ((undefined *)GEN_TOP(0x0))) goto LAB_00c578c2;
  if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
    uVar7 = F_00c5d07b(param_1);
    if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
      puVar15 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar15 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar7 >> 5)])));
    }
    if ((puVar15[0x24] & 0x7f) != 0) goto LAB_00c578c2;
    if ((uVar7 == 0xffffffff) || (uVar7 == 0xfffffffe)) {
      puVar15 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar15 = ((undefined *)GEN_TOP(((uVar7 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar7 >> 5)])));
    }
    if ((puVar15[0x24] & 0x80) != 0) goto LAB_00c578c2;
  }
  if (param_2 == ((byte *)GEN_TOP(0x0))) {
LAB_00c578c2: ;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x2c)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x2c)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x2c)) + 8))) + 112))))) & 0xfffffffd;
    }
    return 0xffffffff;
  }
  (*(byte *)(gen_frame + 0x6f)) = *param_2;
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(gen_size32 *)(gen_frame + 0x58)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(wchar_t * PTR32 *)(gen_frame + 0x20)) = ((wchar_t *)GEN_TOP(0x0));
  pbVar18 = param_2;
  pwVar12 = param_4;
  if ((*(byte *)(gen_frame + 0x6f)) != 0) {
    do {
      pwVar19 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
      pbVar17 = pbVar18 + 1;
      (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar17;
      if ((int)(*(uint *)(gen_frame + 0x5c)) < 0) break;
      if ((byte)((*(byte *)(gen_frame + 0x6f)) - 0x20) < 0x59) {
        uVar7 = (byte)(&REFG(undefined, 0x1119ec8))[(int)((char)(*(byte *)(gen_frame + 0x6f)))] & 0xf;
      }
      else {
        uVar7 = 0;
      }
      uVar7 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(int)((*(uint *)(gen_frame + 0x3c)) + uVar7 * 9)] >> 4);
      (*(uint *)(gen_frame + 0x3c)) = uVar7;
      if (uVar7 == 8) goto LAB_00c578c2;
      switch((unsigned int)(uintptr_t)(uVar7)) {
      case 0: ;
switchD_00c579de_caseD_0: ;
        (*(int *)(gen_frame + 0x44)) = 0;
        iVar16 = F_00c6dfe8((uint)(*(byte *)(gen_frame + 0x6f)),&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x2c)))));
        bVar5 = (*(byte *)(gen_frame + 0x6f));
        if (iVar16 != 0) {
          F_00c57791((*(byte *)(gen_frame + 0x6f)),(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
          bVar5 = *pbVar17;
          (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar18 + 2;
          if (bVar5 == 0) goto LAB_00c578c2;
        }
        F_00c57791(bVar5,(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
        break;
      case 1: ;
        (*(int *)(gen_frame + 0x68)) = -1;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(int *)(gen_frame + 0x4c)) = 0;
        (*(uint *)(gen_frame + 0x70)) = 0;
        (*(int *)(gen_frame + 0x44)) = 0;
        break;
      case 2: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x20) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 2;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x23) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x80;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x2b) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 1;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x2d) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 4;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x30) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 8;
        }
        break;
      case 3: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar12 + 2;
          iVar16 = *(int *)pwVar12;
          (*(int *)(gen_frame + 0x48)) = iVar16;
          if (iVar16 < 0) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 4;
            (*(int *)(gen_frame + 0x48)) = -iVar16;
          }
        }
        else {
          (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) * 10 - 0x30 + (int)(char)(*(byte *)(gen_frame + 0x6f));
        }
        break;
      case 4: ;
        (*(int *)(gen_frame + 0x68)) = 0;
        break;
      case 5: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar12 + 2;
          (*(int *)(gen_frame + 0x68)) = *(int *)pwVar12;
          if (*(int *)pwVar12 < 0) {
            (*(int *)(gen_frame + 0x68)) = -1;
          }
        }
        else {
          (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) * 10 - 0x30 + (int)(char)(*(byte *)(gen_frame + 0x6f));
        }
        break;
      case 6: ;
        if ((*(byte *)(gen_frame + 0x6f)) == 0x49) {
          bVar5 = *pbVar17;
          if ((bVar5 == 0x36) && (pbVar18[2] == 0x34)) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x8000;
            (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar18 + 3;
          }
          else if ((bVar5 == 0x33) && (pbVar18[2] == 0x32)) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) & 0xffff7fff;
            (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar18 + 3;
          }
          else if (((((bVar5 != 100) && (bVar5 != 0x69)) && (bVar5 != 0x6f)) &&
                   ((bVar5 != 0x75 && (bVar5 != 0x78)))) && (bVar5 != 0x58)) {
            (*(uint *)(gen_frame + 0x3c)) = 0;
            goto switchD_00c579de_caseD_0;
          }
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x68) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x20;
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x6c) {
          if (*pbVar17 == 0x6c) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x1000;
            (*(byte * PTR32 *)(gen_frame + 0x40)) = pbVar18 + 2;
          }
          else {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x10;
          }
        }
        else if ((*(byte *)(gen_frame + 0x6f)) == 0x77) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x800;
        }
        break;
      case 7: ;
        if ((char)(*(byte *)(gen_frame + 0x6f)) < 'e') {
          if ((*(byte *)(gen_frame + 0x6f)) == 100) {
LAB_00c57eaa: ;
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x40;
LAB_00c57eb1: ;
            (*(gen_size32 *)(gen_frame + 0x58)) = 10;
LAB_00c57ebb: ;
            if ((((*(uint *)(gen_frame + 0x70)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x70)) & 0x1000) == 0)) {
              pwVar19 = pwVar12 + 2;
              if (((*(uint *)(gen_frame + 0x70)) & 0x20) == 0) {
                uVar7 = *(uint *)pwVar12;
                if (((*(uint *)(gen_frame + 0x70)) & 0x40) == 0) {
                  iVar16 = 0;
                }
                else {
                  iVar16 = (int)uVar7 >> 0x1f;
                }
                goto LAB_00c580e3;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar19;
              if (((*(uint *)(gen_frame + 0x70)) & 0x40) == 0) {
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
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar19;
            }
            if (((((*(uint *)(gen_frame + 0x70)) & 0x40) != 0) && (iVar16 < 1)) && (iVar16 < 0)) {
              bVar20 = uVar7 != 0;
              uVar7 = -uVar7;
              iVar16 = -(iVar16 + (uint)bVar20);
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x100;
            }
            uVar3 = CONCAT44(iVar16,uVar7);
            if (((*(uint *)(gen_frame + 0x70)) & 0x9000) == 0) {
              iVar16 = 0;
            }
            if ((*(int *)(gen_frame + 0x68)) < 0) {
              (*(int *)(gen_frame + 0x68)) = 1;
            }
            else {
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) & 0xfffffff7;
              if (0x200 < (*(int *)(gen_frame + 0x68))) {
                (*(int *)(gen_frame + 0x68)) = 0x200;
              }
            }
            if (uVar7 == 0 && iVar16 == 0) {
              (*(int *)(gen_frame + 0x4c)) = 0;
            }
            pwVar12 = &(*(undefined2 *)(gen_frame + 0x273));
            while( true ) {
              iVar10 = (*(int *)(gen_frame + 0x68));
              (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1;
              if ((iVar10 < 1) && ((int)uVar3 == 0 && iVar16 == 0)) break;
              uVar4 = CONCAT44(iVar16,(int)uVar3);
              uVar3 = uVar4 / (*(gen_size32 *)(gen_frame + 0x58));
              iVar16 = (int)(uVar3 >> 0x20);
              uVar7 = (int)(uVar4 % (ulonglong)(*(gen_size32 *)(gen_frame + 0x58))) + 0x30;
              cVar14 = (char)uVar7;
              (*(gen_size32 *)(gen_frame + 0x18)) = 0;
              if (0x39 < uVar7) {
                cVar14 = cVar14 + (char)(*(undefined4 *)(gen_frame + 0x28));
              }
              *(char *)pwVar12 = cVar14;
              pwVar12 = ((wchar_t *)GEN_TOP(((int)pwVar12 - 1)));
            }
            sVar8 = (int)&(*(undefined2 *)(gen_frame + 0x273)) - (int)pwVar12;
            (*(gen_size32 *)(gen_frame + 0x58)) = sVar8;
            (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)GEN_TOP(((int)pwVar12 + 1)));
            if ((((*(uint *)(gen_frame + 0x70)) & 0x200) != 0) && ((sVar8 == 0 || (*((char *)GEN_TOP(((int)pwVar12 + 1))) != '0')))
               ) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar12;
              *(char *)pwVar12 = '0';
              sVar8 = (int)&(*(undefined2 *)(gen_frame + 0x273)) - (int)pwVar12 + 1;
              goto LAB_00c58217;
            }
          }
          else {
            if ((char)(*(byte *)(gen_frame + 0x6f)) < 'T') {
              if ((*(byte *)(gen_frame + 0x6f)) == 0x53) {
                if (((*(uint *)(gen_frame + 0x70)) & 0x830) == 0) {
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x800;
                }
                goto LAB_00c57cc2;
              }
              if ((*(byte *)(gen_frame + 0x6f)) != 0x41) {
                if ((*(byte *)(gen_frame + 0x6f)) == 0x43) {
                  if (((*(uint *)(gen_frame + 0x70)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x800;
                  }
                  goto LAB_00c57d3b;
                }
                if (((*(byte *)(gen_frame + 0x6f)) != 0x45) && ((*(byte *)(gen_frame + 0x6f)) != 0x47)) goto LAB_00c5821d;
              }
              (*(undefined4 *)(gen_frame + 0xc)) = 1;
              (*(byte *)(gen_frame + 0x6f)) = (*(byte *)(gen_frame + 0x6f)) + 0x20;
LAB_00c57ee0: ;
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x40;
              pwVar19 = (wchar_t *)((undefined1 *)(gen_frame + 0x74));
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar19;
              (*(gen_size32 *)(gen_frame + 0x18)) = 0x200;
              if ((*(int *)(gen_frame + 0x68)) < 0) {
                (*(int *)(gen_frame + 0x68)) = 6;
              }
              else if ((*(int *)(gen_frame + 0x68)) == 0) {
                if ((*(byte *)(gen_frame + 0x6f)) == 0x67) {
                  (*(int *)(gen_frame + 0x68)) = 1;
                }
              }
              else {
                if (0x200 < (*(int *)(gen_frame + 0x68))) {
                  (*(int *)(gen_frame + 0x68)) = 0x200;
                }
                if (0xa3 < (*(int *)(gen_frame + 0x68))) {
                  sVar8 = (*(int *)(gen_frame + 0x68)) + 0x15d;
                  pwVar9 = F_00c54c2e(sVar8);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x20)) = pwVar9;
                  if (pwVar9 == ((wchar_t *)GEN_TOP(0x0))) {
                    (*(int *)(gen_frame + 0x68)) = 0xa3;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar9;
                    (*(gen_size32 *)(gen_frame + 0x18)) = sVar8;
                    pwVar19 = pwVar9;
                  }
                }
              }
              (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)pwVar12;
              (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(pwVar12 + 2);
              p_Var24 = ((undefined *)(gen_frame + 0x2c));
              iVar10 = (int)(char)(*(byte *)(gen_frame + 0x6f));
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar12 + 4;
              puVar21 = &(*(undefined4 *)(gen_frame + 0x0));
              pwVar12 = pwVar19;
              sVar8 = (*(gen_size32 *)(gen_frame + 0x18));
              iVar16 = (*(int *)(gen_frame + 0x68));
              uVar22 = (*(undefined4 *)(gen_frame + 0xc));
              pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
              (*pcVar11)(puVar21,pwVar12,sVar8,iVar10,iVar16,uVar22,p_Var24);
              uVar7 = (*(uint *)(gen_frame + 0x70)) & 0x80;
              if ((uVar7 != 0) && ((*(int *)(gen_frame + 0x68)) == 0)) {
                p_Var24 = ((undefined *)(gen_frame + 0x2c));
                pwVar12 = pwVar19;
                pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                (*pcVar11)(pwVar12,p_Var24);
              }
              if (((*(byte *)(gen_frame + 0x6f)) == 0x67) && (uVar7 == 0)) {
                p_Var24 = ((undefined *)(gen_frame + 0x2c));
                pwVar12 = pwVar19;
                pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                (*pcVar11)(pwVar12,p_Var24);
              }
              if ((char)*pwVar19 == '-') {
                (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x100;
                pwVar19 = ((wchar_t *)GEN_TOP(((int)pwVar19 + 1)));
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar19;
              }
              uVar23 = SUB42(pwVar19,0);
              uVar25 = (undefined2)((uint)((int)(uintptr_t)pwVar19) >> 0x10);
            }
            else {
              if ((*(byte *)(gen_frame + 0x6f)) == 0x58) goto LAB_00c5803d;
              if ((*(byte *)(gen_frame + 0x6f)) != 0x5a) {
                if ((*(byte *)(gen_frame + 0x6f)) == 0x61) goto LAB_00c57ee0;
                pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
                if ((*(byte *)(gen_frame + 0x6f)) != 99) goto LAB_00c5821d;
LAB_00c57d3b: ;
                (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar12 + 2;
                if (((*(uint *)(gen_frame + 0x70)) & 0x810) == 0) {
                  ((undefined1 *)(gen_frame + 0x74))[0] = (char)*pwVar12;
                  (*(gen_size32 *)(gen_frame + 0x58)) = 1;
                }
                else {
                  eVar13 = F_00c7af62((int *)&(*(gen_size32 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x74)),0x200,*pwVar12);
                  if (eVar13 != 0) {
                    (*(int *)(gen_frame + 0x24)) = 1;
                  }
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)((undefined1 *)(gen_frame + 0x74));
                goto LAB_00c5821d;
              }
              psVar1 = *(short * PTR32 *)pwVar12;
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar12 + 2;
              if ((psVar1 != ((short *)GEN_TOP(0x0))) && (*(wchar_t * PTR32 *)(psVar1 + 2) != ((wchar_t *)GEN_TOP(0x0)))) {
                sVar8 = (gen_size32)*psVar1;
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = *(wchar_t * PTR32 *)(psVar1 + 2);
                if (((*(uint *)(gen_frame + 0x70)) & 0x800) == 0) {
                  (*(int *)(gen_frame + 0x44)) = 0;
                }
                else {
                  sVar8 = (int)sVar8 / 2;
                  (*(int *)(gen_frame + 0x44)) = 1;
                }
                goto LAB_00c58217;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              uVar23 = SUB42(REFG(undefined * PTR32, 0x134b148),0);
              uVar25 = (undefined2)((uint)REFG(undefined * PTR32, 0x134b148) >> 0x10);
            }
            sVar8 = F_00c552f0(((char *)GEN_TOP(CONCAT22(uVar25,uVar23))));
LAB_00c58217: ;
            (*(gen_size32 *)(gen_frame + 0x58)) = sVar8;
          }
LAB_00c5821d: ;
          if ((*(int *)(gen_frame + 0x24)) == 0) {
            if (((*(uint *)(gen_frame + 0x70)) & 0x40) != 0) {
              if (((*(uint *)(gen_frame + 0x70)) & 0x100) == 0) {
                if (((*(uint *)(gen_frame + 0x70)) & 1) == 0) {
                  if (((*(uint *)(gen_frame + 0x70)) & 2) == 0) goto LAB_00c5826a;
                  (*(undefined1 *)(gen_frame + 0x54)) = 0x20;
                }
                else {
                  (*(undefined1 *)(gen_frame + 0x54)) = 0x2b;
                }
              }
              else {
                (*(undefined1 *)(gen_frame + 0x54)) = 0x2d;
              }
              (*(int *)(gen_frame + 0x4c)) = 1;
            }
LAB_00c5826a: ;
            sVar8 = ((*(int *)(gen_frame + 0x48)) - (*(gen_size32 *)(gen_frame + 0x58))) - (*(int *)(gen_frame + 0x4c));
            (*(gen_size32 *)(gen_frame + 0x18)) = sVar8;
            if (((*(uint *)(gen_frame + 0x70)) & 0xc) == 0) {
              do {
                if ((int)sVar8 < 1) break;
                sVar8 = sVar8 - 1;
                F_00c57791(0x20,(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
              } while ((*(uint *)(gen_frame + 0x5c)) != 0xffffffff);
            }
            in_ecx = (*(undefined * PTR32 *)(gen_frame + 0x50));
            F_00c577ea(&(*(uint *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x50)),(*(int * PTR32 *)(gen_frame + 0x1c)),&(*(undefined1 *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x4c)));
            if ((((*(uint *)(gen_frame + 0x70)) & 8) != 0) && (sVar8 = (*(gen_size32 *)(gen_frame + 0x18)), ((*(uint *)(gen_frame + 0x70)) & 4) == 0)) {
              do {
                if ((int)sVar8 < 1) break;
                sVar8 = sVar8 - 1;
                F_00c57791(0x30,in_ecx,&(*(uint *)(gen_frame + 0x5c)));
              } while ((*(uint *)(gen_frame + 0x5c)) != 0xffffffff);
            }
            if (((*(int *)(gen_frame + 0x44)) == 0) || ((int)(*(gen_size32 *)(gen_frame + 0x58)) < 1)) {
              F_00c577ea(&(*(uint *)(gen_frame + 0x5c)),in_ecx,(*(int * PTR32 *)(gen_frame + 0x1c)),(*(wchar_t * PTR32 *)(gen_frame + 0x60)),(*(gen_size32 *)(gen_frame + 0x58)));
            }
            else {
              (*(gen_size32 *)(gen_frame + 0x10)) = (*(gen_size32 *)(gen_frame + 0x58));
              pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
              do {
                _WCh = *pwVar12;
                (*(gen_size32 *)(gen_frame + 0x10)) = (*(gen_size32 *)(gen_frame + 0x10)) - 1;
                pwVar12 = pwVar12 + 1;
                eVar13 = F_00c7af62(&(*(int *)(gen_frame + 0x8)),((char *)GEN_TOP(((int)&(*(undefined2 *)(gen_frame + 0x273)) + 1))),6,_WCh);
                if ((eVar13 != 0) || ((*(int *)(gen_frame + 0x8)) == 0)) {
                  (*(uint *)(gen_frame + 0x5c)) = 0xffffffff;
                  break;
                }
                F_00c577ea(&(*(uint *)(gen_frame + 0x5c)),(*(undefined * PTR32 *)(gen_frame + 0x50)),(*(int * PTR32 *)(gen_frame + 0x1c)),(int)&(*(undefined2 *)(gen_frame + 0x273)) + 1,(*(int *)(gen_frame + 0x8)));
              } while ((*(gen_size32 *)(gen_frame + 0x10)) != 0);
            }
            if ((-1 < (int)(*(uint *)(gen_frame + 0x5c))) && (sVar8 = (*(gen_size32 *)(gen_frame + 0x18)), ((*(uint *)(gen_frame + 0x70)) & 4) != 0)) {
              do {
                if ((int)sVar8 < 1) break;
                sVar8 = sVar8 - 1;
                F_00c57791(0x20,(*(undefined * PTR32 *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x5c)));
              } while ((*(uint *)(gen_frame + 0x5c)) != 0xffffffff);
            }
          }
        }
        else {
          if ('p' < (char)(*(byte *)(gen_frame + 0x6f))) {
            if ((*(byte *)(gen_frame + 0x6f)) == 0x73) {
LAB_00c57cc2: ;
              iVar16 = (*(int *)(gen_frame + 0x68));
              if ((*(int *)(gen_frame + 0x68)) == -1) {
                iVar16 = 0x7fffffff;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = pwVar12 + 2;
              pwVar12 = *(wchar_t * PTR32 *)pwVar12;
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar12;
              if (((*(uint *)(gen_frame + 0x70)) & 0x810) == 0) {
                pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
                if (pwVar12 == ((wchar_t *)GEN_TOP(0x0))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                  pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
                }
                for (; (iVar16 != 0 && (iVar16 = iVar16 - 1, (char)*pwVar12 != '\0'));
                    pwVar12 = ((wchar_t *)GEN_TOP(((int)pwVar12 + 1)))) {
                }
                sVar8 = (int)pwVar12 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x60));
              }
              else {
                if (pwVar12 == ((wchar_t *)GEN_TOP(0x0))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                }
                (*(int *)(gen_frame + 0x44)) = 1;
                for (pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x60)); (iVar16 != 0 && (iVar16 = iVar16 - 1, *pwVar12 != L'\0'))
                    ; pwVar12 = pwVar12 + 1) {
                }
                sVar8 = (int)pwVar12 - (int)((int)(uintptr_t)(*(wchar_t * PTR32 *)(gen_frame + 0x60))) >> 1;
              }
              goto LAB_00c58217;
            }
            if ((*(byte *)(gen_frame + 0x6f)) == 0x75) goto LAB_00c57eb1;
            if ((*(byte *)(gen_frame + 0x6f)) != 0x78) goto LAB_00c5821d;
            (*(undefined4 *)(gen_frame + 0x28)) = 0x27;
            pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
LAB_00c5806f: ;
            (*(gen_size32 *)(gen_frame + 0x58)) = 0x10;
            if (((*(uint *)(gen_frame + 0x70)) & 0x80) != 0) {
              (*(undefined1 *)(gen_frame + 0x54)) = 0x30;
              (*(char *)(gen_frame + 0x55)) = (char)(*(undefined4 *)(gen_frame + 0x28)) + 'Q';
              (*(int *)(gen_frame + 0x4c)) = 2;
            }
            goto LAB_00c57ebb;
          }
          if ((*(byte *)(gen_frame + 0x6f)) == 0x70) {
            (*(int *)(gen_frame + 0x68)) = 8;
LAB_00c5803d: ;
            (*(undefined4 *)(gen_frame + 0x28)) = 7;
            goto LAB_00c5806f;
          }
          if ((char)(*(byte *)(gen_frame + 0x6f)) < 'e') goto LAB_00c5821d;
          pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
          if ((char)(*(byte *)(gen_frame + 0x6f)) < 'h') goto LAB_00c57ee0;
          if ((*(byte *)(gen_frame + 0x6f)) == 0x69) goto LAB_00c57eaa;
          if ((*(byte *)(gen_frame + 0x6f)) != 0x6e) {
            if ((*(byte *)(gen_frame + 0x6f)) != 0x6f) goto LAB_00c5821d;
            (*(gen_size32 *)(gen_frame + 0x58)) = 8;
            if (((*(uint *)(gen_frame + 0x70)) & 0x80) != 0) {
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) | 0x200;
            }
            goto LAB_00c57ebb;
          }
          (*(wchar_t * PTR32 *)(gen_frame + 0x64)) = (*(wchar_t * PTR32 *)(gen_frame + 0x64)) + 2;
          puVar2 = *(uint * PTR32 *)pwVar19;
          uVar7 = F_00c51967();
          if (uVar7 == 0) goto LAB_00c578c2;
          if (((*(uint *)(gen_frame + 0x70)) & 0x20) == 0) {
            *puVar2 = (*(uint *)(gen_frame + 0x5c));
          }
          else {
            *(undefined2 *)puVar2 = (undefined2)(*(uint *)(gen_frame + 0x5c));
          }
          (*(int *)(gen_frame + 0x24)) = 1;
        }
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x20)) != ((wchar_t *)GEN_TOP(0x0))) {
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x20)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x20)) = ((wchar_t *)GEN_TOP(0x0));
        }
      }
      (*(byte *)(gen_frame + 0x6f)) = *(*(byte * PTR32 *)(gen_frame + 0x40));
      pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x40));
      pwVar12 = (*(wchar_t * PTR32 *)(gen_frame + 0x64));
    } while ((*(byte *)(gen_frame + 0x6f)) != 0);
    if (((*(uint *)(gen_frame + 0x3c)) != 0) && ((*(uint *)(gen_frame + 0x3c)) != 7)) goto LAB_00c578c2;
  }
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x2c)) + 12))) == false) {
    return (*(uint *)(gen_frame + 0x5c));
  }
  (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x2c)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x2c)) + 8))) + 112))))) & 0xfffffffd;
  return (*(uint *)(gen_frame + 0x5c));
}

/* ref: FUN_00c58480 */
GEN_LIB GEN_NOFRAME uint F_00c58480(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc58480u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (char)param_1[2];
  if ((cVar1 == 'p') || (param_3 == 'p')) {
    return (uint)(cVar1 == param_3);
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 's') || (param_3 == 'S')) {
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
          ((param_3 != 'd' && ((param_3 != 'i' && (param_3 != 'o')))))))) && (param_3 != 'u')) &&
       ((param_3 != 'x' && (param_3 != 'X')))) goto LAB_00c58566;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_00c58524;
    iVar3 = 0;
  }
  if (((param_3 == 'd') || (param_3 == 'i')) ||
     ((param_3 == 'o' || (((param_3 == 'u' || (param_3 == 'x')) || (param_3 == 'X')))))) {
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
GEN_LIB GEN_NOFRAME uint F_00c585ab(GEN_P(byte in_al, unsigned int gen_a0), GEN_P(undefined * in_ecx, unsigned int gen_a1), GEN_P(int * in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xc585abu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte in_al = (byte)gen_a0;)
  GEN_PIN(undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined3 in_register_00000001;
  uint uVar2;
  
  uVar2 = CONCAT31(in_register_00000001,in_al);
  if ((((*(int *)(((char *)(in_ecx) + 12))) & 0x40) == 0) || ((*(char * PTR32 *)(((char *)(in_ecx) + 8))) != ((char *)GEN_TOP(0x0)))) {
    piVar1 = &(*(int *)(((char *)(in_ecx) + 4)));
    *piVar1 = *piVar1 - 1;
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
GEN_LIB GEN_NOFRAME uint F_00c585de(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc585deu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 - 1;
    piVar1 = ((int *)GEN_TOP(F_00c585ab(param_2,param_4,in_eax)));
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: Global::_write_string_00c58604 */
GEN_LIB GEN_NOFRAME uint F_00c58604(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ebx, unsigned int gen_a1), GEN_P(uint * in_edi, unsigned int gen_a2), GEN_P(undefined1 * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc58604u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ebx = (int)gen_a1;)
  GEN_PIN(uint * in_edi = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*((byte *)GEN_TOP((in_ebx + 0xc))) & 0x40) == 0) || (*((int *)GEN_TOP((in_ebx + 8))) != 0)) {
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
GEN_LIB GEN_NOFRAME ulonglong F_00c58666(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc58666u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  *param_1 = *param_1 + 8;
  return *((ulonglong *)GEN_TOP((*param_1 - 8)));
}

/* ref: FUN_00c5867b */
GEN_LIB GEN_NOFRAME uint F_00c5867b(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5867bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x8c0, 0);
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
  F_00c483ca(((undefined *)(gen_frame + 0x40)) GEN_EDX_ARG,param_3);
  (*(int *)(gen_frame + 0x5c)) = -1;
  ((byte *)(gen_frame + 0x0))[0x24] = 0;
  ((byte *)(gen_frame + 0x0))[0x25] = 0;
  ((byte *)(gen_frame + 0x0))[0x26] = 0;
  ((byte *)(gen_frame + 0x0))[0x27] = 0;
  piVar1 = F_00c51f85();
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = piVar1;
  if (param_1 == ((undefined *)GEN_TOP(0x0))) goto LAB_00c586f2;
  if (((*(int *)(((char *)(param_1) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(param_1);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar5 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar2 >> 5)])));
    }
    if ((puVar5[0x24] & 0x7f) != 0) goto LAB_00c586f2;
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar5 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar5 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar2 >> 5)])));
    }
    if ((puVar5[0x24] & 0x80) != 0) goto LAB_00c586f2;
  }
  if (param_2 != ((char *)GEN_TOP(0x0))) {
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
      if ((*(char *)(gen_frame + 0x60)) != '\0') {
        do {
          _Str = _Str + 1;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = _Str;
          if ((byte)((*(char *)(gen_frame + 0x60)) - 0x20U) < 0x59) {
            uVar2 = (byte)(&REFG(undefined, 0x1119ec8))[(int)((*(char *)(gen_frame + 0x60)))] & 0xf;
          }
          else {
            uVar2 = 0;
          }
          uVar2 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) + uVar2 * 9)] >> 4);
          ((byte *)(gen_frame + 0x0))[0x10] = (char)uVar2;
          ((byte *)(gen_frame + 0x0))[0x11] = (char)(uVar2 >> 8);
          ((byte *)(gen_frame + 0x0))[0x12] = (char)(uVar2 >> 0x10);
          ((byte *)(gen_frame + 0x0))[0x13] = (char)(uVar2 >> 0x18);
          if (uVar2 == 1) {
            if (*_Str != '%') {
              lVar3 = F_00c4ab6e(_Str,(char * PTR32 *)(((byte *)(gen_frame + 0x0)) + 0x24),10);
              if ((lVar3 < 1) || (*((char *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)))) != '$')) {
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
                iVar4 = lVar3 - 1;
                (*(int *)(gen_frame + 0x50)) = iVar4;
                (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) + 1;
                if ((*(int *)(gen_frame + 0x58)) == 0) {
                  if (((iVar4 < 0) || (*((char *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)))) != '$')) || (99 < iVar4))
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
      iVar4 = (*(int *)(gen_frame + 0x58)) + 1;
      (*(int *)(gen_frame + 0x58)) = iVar4;
    } while (iVar4 < 2);
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x40)) + 12))) == false) {
      return 0;
    }
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) & 0xfffffffd;
    return 0;
  }
LAB_00c586f2: ;
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x40)) + 12))) != false) {
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x40)) + 8))) + 112))))) & 0xfffffffd;
  }
  return 0xffffffff;
}

/* ref: ___report_gsfailure */
GEN_LIB GEN_NOFRAME uint F_00c5999f(unsigned int gen_a0)
{
  GEN_ENTER(0xc5999fu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL(0x32c, 4);
  undefined4 in_EAX = 0;
  HANDLE hProcess;
  uint uVar1;
  undefined4 in_ECX = 0;
  undefined4 in_EDX = 0;
  undefined4 cap_EBX = 0;
  undefined4 cap_EBP = 0;
  undefined4 cap_ESI = 0;
  undefined4 cap_EDI = 0;
  undefined2 cap_ES = 0;
  undefined2 cap_CS = 0;
  undefined2 cap_SS = 0;
  undefined2 cap_DS = 0;
  undefined2 cap_FS = 0;
  undefined2 cap_GS = 0;
  byte cap_AF = 0;
  byte cap_TF = 0;
  byte cap_IF = 0;
  byte cap_NT = 0;
  byte cap_AC = 0;
  byte cap_VIF = 0;
  byte cap_VIP = 0;
  byte cap_ID = 0;
  undefined4 cap_retaddr = 0;
  UINT uExitCode;
  
  *(uint *)&REFG(undefined, 0x15d7030) =
       (uint)(cap_NT & 1) * 0x4000 | (uint)SBORROW4((int)(gen_frame + 0x328),0x328) * 0x800 |
       (uint)(cap_IF & 1) * 0x200 | (uint)(cap_TF & 1) * 0x100 | (uint)((int)&(*(undefined4 *)(gen_frame + 0x0)) < 0) * 0x80 |
       (uint)(0) * 0x40 | (uint)(cap_AF & 1) * 0x10 |
       (uint)(((char)POPCOUNT((uint)&(*(undefined4 *)(gen_frame + 0x0)) & 0xff) & 1U) == 0) * 4 |
       (uint)((gen_frame + 0x328) < ((undefined1 *)GEN_TOP(0x328))) | (uint)(cap_ID & 1) * 0x200000 |
       (uint)(cap_VIP & 1) * 0x100000 | (uint)(cap_VIF & 1) * 0x80000 | (uint)(cap_AC & 1) * 0x40000;
  *(undefined4 * PTR32 *)&REFG(undefined, 0x15d7034) = &(*(undefined4 *)&gen_args[0]);
  *(undefined4 *)&REFG(undefined, 0x15d6f70) = 0x10001;
  *(undefined4 *)&REFG(undefined, 0x15d6f18) = 0xc0000409;
  *(undefined4 *)&REFG(undefined, 0x15d6f1c) = 1;
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab7c);
  *(undefined4 *)&REFG(undefined, 0x15d6f24) = cap_retaddr;
  *(undefined2 *)&REFG(undefined, 0x15d6ffc) = cap_GS;
  *(undefined2 *)&REFG(undefined, 0x15d7000) = cap_FS;
  *(undefined2 *)&REFG(undefined, 0x15d7004) = cap_ES;
  *(undefined2 *)&REFG(undefined, 0x15d7008) = cap_DS;
  *(undefined4 *)&REFG(undefined, 0x15d700c) = cap_EDI;
  *(undefined4 *)&REFG(undefined, 0x15d7010) = cap_ESI;
  *(undefined4 *)&REFG(undefined, 0x15d7014) = cap_EBX;
  *(undefined4 *)&REFG(undefined, 0x15d7018) = in_EDX;
  *(undefined4 *)&REFG(undefined, 0x15d701c) = in_ECX;
  *(undefined4 *)&REFG(undefined, 0x15d7020) = in_EAX;
  *(undefined4 *)&REFG(undefined, 0x15d7024) = cap_EBP;
  REFG(undefined4, 0x15d7028) = cap_retaddr;
  *(undefined2 *)&REFG(undefined, 0x15d702c) = cap_CS;
  *(undefined2 *)&REFG(undefined, 0x15d7038) = cap_SS;
  REFG(int, 0x15d6f68) = gen_imp_IsDebuggerPresent();
  F_00c655b2(1);
  gen_imp_SetUnhandledExceptionFilter((GEN_LPANY)0x0);
  gen_imp_UnhandledExceptionFilter((undefined *)&REFG(undefined * PTR32, 0x1119f44));
  if (REFG(int, 0x15d6f68) == 0) {
    F_00c655b2(1);
  }
  uExitCode = 0xc0000409;
  hProcess = gen_imp_GetCurrentProcess();
  uVar1 = gen_imp_TerminateProcess(hProcess,uExitCode);
  return uVar1;
}

/* ref: write_char_00c59aa5 */
GEN_LIB GEN_NOFRAME uint F_00c59aa5(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc59aa5u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (((*((byte *)GEN_TOP((in_eax + 0xc))) & 0x40) == 0) || (*((int *)GEN_TOP((in_eax + 8))) != 0)) {
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
GEN_LIB GEN_NOFRAME uint F_00c59ad4(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc59ad4u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  
  piVar1 = in_eax;
  do {
    if (param_3 < 1) {
      return (uint)piVar1;
    }
    param_3 = param_3 - 1;
    piVar1 = ((int *)GEN_TOP(F_00c59aa5(param_4,in_eax,param_2)));
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c59afb */
GEN_LIB GEN_NOFRAME uint F_00c59afb(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ebx, unsigned int gen_a1), GEN_P(uint * in_edi, unsigned int gen_a2), GEN_P(ushort * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc59afbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_ebx = (int)gen_a1;)
  GEN_PIN(uint * in_edi = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(ushort * param_4 = (ushort *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_edi;
  if (((*((byte *)GEN_TOP((in_ebx + 0xc))) & 0x40) == 0) || (*((int *)GEN_TOP((in_ebx + 8))) != 0)) {
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
GEN_LIB GEN_NOFRAME uint F_00c59b62(GEN_P(int param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(wchar_t * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc59b62u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x474, 12);
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
  
  (*(uint *)(gen_frame + 0x46c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x470);
  (*(int *)(gen_frame + 0x4c)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = param_4;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x68)) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x64)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x44)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x18)) GEN_EDX_ARG,param_3);
  piVar8 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar8;
  if (((*(int *)(gen_frame + 0x4c)) == 0) || (param_2 == ((ushort *)GEN_TOP(0x0)))) {
    piVar8 = F_00c51f85();
    *piVar8 = 0x16;
    F_00c4c305();
    cVar1 = (*(bool *)(((char *)((undefined *)(gen_frame + 0x18)) + 12)));
LAB_00c59bf2: ;
    if (cVar1 != '\0') {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x18)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x18)) + 8))) + 112))))) & 0xfffffffd;
    }
    (*(uint *)(gen_frame + 0x58)) = 0xffffffff;
  }
  else {
    uVar2 = *param_2;
    (*(uint *)(gen_frame + 0x54)) = (uint)uVar2;
    iVar14 = 0;
    (*(uint *)(gen_frame + 0x58)) = 0;
    (*(gen_size32 *)(gen_frame + 0x5c)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = ((wchar_t *)GEN_TOP(0x0));
    puVar7 = param_2;
    pwVar18 = param_4;
    while (uVar2 != 0) {
      puVar17 = puVar7 + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar17;
      if ((int)(*(uint *)(gen_frame + 0x58)) < 0) break;
      sVar5 = (short)(*(uint *)(gen_frame + 0x54));
      if ((ushort)(sVar5 - 0x20U) < 0x59) {
        uVar9 = (int)((char *)REFP(0x1119e68))[(*(uint *)(gen_frame + 0x54))] & 0xf;
      }
      else {
        uVar9 = 0;
      }
      (*(int *)(gen_frame + 0x10)) = (int)(char)(&REFG(undefined, 0x1119e88))[(int)(uVar9 * 8 + iVar14)] >> 4;
      switch((unsigned int)(uintptr_t)((int)(char)(&REFG(undefined, 0x1119e88))[(int)(uVar9 * 8 + iVar14)] >> 4)) {
      case 0: ;
switchD_00c59c7e_caseD_0: ;
        (*(int *)(gen_frame + 0x44)) = 1;
        F_00c59aa5((*(int *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x54)));
        break;
      case 1: ;
        (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(uint *)(gen_frame + 0x40)) = 0;
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(uint *)(gen_frame + 0x68)) = 0;
        (*(int *)(gen_frame + 0x44)) = 0;
        break;
      case 2: ;
        if ((*(uint *)(gen_frame + 0x54)) == 0x20) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 2;
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x23) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x80;
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x2b) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 1;
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x2d) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 4;
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x30) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 8;
        }
        break;
      case 3: ;
        if (sVar5 == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 2;
          uVar9 = *(uint *)pwVar18;
          (*(uint *)(gen_frame + 0x40)) = uVar9;
          if ((int)uVar9 < 0) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 4;
            (*(uint *)(gen_frame + 0x40)) = -uVar9;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) * 10 - 0x30 + (*(uint *)(gen_frame + 0x54));
        }
        break;
      case 4: ;
        (*(uint *)(gen_frame + 0x64)) = 0;
        break;
      case 5: ;
        if (sVar5 == 0x2a) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 2;
          (*(uint *)(gen_frame + 0x64)) = *(uint *)pwVar18;
          if ((int)*(uint *)pwVar18 < 0) {
            (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) * 10 - 0x30 + (*(uint *)(gen_frame + 0x54));
        }
        break;
      case 6: ;
        if ((*(uint *)(gen_frame + 0x54)) == 0x49) {
          uVar2 = *puVar17;
          if ((uVar2 == 0x36) && (puVar7[2] == 0x34)) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x8000;
            (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar7 + 3;
          }
          else if ((uVar2 == 0x33) && (puVar7[2] == 0x32)) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) & 0xffff7fff;
            (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar7 + 3;
          }
          else if (((((uVar2 != 100) && (uVar2 != 0x69)) && (uVar2 != 0x6f)) &&
                   ((uVar2 != 0x75 && (uVar2 != 0x78)))) && (uVar2 != 0x58)) {
            (*(int *)(gen_frame + 0x10)) = 0;
            goto switchD_00c59c7e_caseD_0;
          }
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x68) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x20;
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x6c) {
          if (*puVar17 == 0x6c) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x1000;
            (*(ushort * PTR32 *)(gen_frame + 0x30)) = puVar7 + 2;
          }
          else {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x10;
          }
        }
        else if ((*(uint *)(gen_frame + 0x54)) == 0x77) {
          (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x800;
        }
        break;
      case 7: ;
        if ((*(uint *)(gen_frame + 0x54)) < 0x65) {
          if ((*(uint *)(gen_frame + 0x54)) == 100) {
LAB_00c5a18e: ;
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x40;
LAB_00c5a195: ;
            (*(uint *)(gen_frame + 0x54)) = 10;
LAB_00c5a19f: ;
            if ((((*(uint *)(gen_frame + 0x68)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x68)) & 0x1000) == 0)) {
              pwVar16 = pwVar18 + 2;
              if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
                uVar9 = *(uint *)pwVar18;
                if (((*(uint *)(gen_frame + 0x68)) & 0x40) == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (int)uVar9 >> 0x1f;
                }
                goto LAB_00c5a391;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar16;
              if (((*(uint *)(gen_frame + 0x68)) & 0x40) == 0) {
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
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar16;
            }
            if (((((*(uint *)(gen_frame + 0x68)) & 0x40) != 0) && ((int)uVar15 < 1)) && ((int)uVar15 < 0)) {
              bVar19 = uVar9 != 0;
              uVar9 = -uVar9;
              uVar15 = -(uVar15 + bVar19);
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x100;
            }
            if (((*(uint *)(gen_frame + 0x68)) & 0x9000) == 0) {
              uVar15 = 0;
            }
            if ((int)(*(uint *)(gen_frame + 0x64)) < 0) {
              (*(uint *)(gen_frame + 0x64)) = 1;
            }
            else {
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) & 0xfffffff7;
              if (0x200 < (int)(*(uint *)(gen_frame + 0x64))) {
                (*(uint *)(gen_frame + 0x64)) = 0x200;
              }
            }
            if (uVar9 == 0 && uVar15 == 0) {
              (*(int *)(gen_frame + 0x48)) = 0;
            }
            pwVar18 = &(*(undefined2 *)(gen_frame + 0x26b));
            uVar6 = CONCAT44(uVar15,uVar9);
            while ((uVar9 = (*(uint *)(gen_frame + 0x64)), (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) - 1, 0 < (int)uVar9 || (uVar6 != 0))) {
              uVar9 = (int)(uVar6 % (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x54))) + 0x30;
              bVar13 = (byte)uVar9;
              if (0x39 < uVar9) {
                bVar13 = bVar13 + (char)(*(undefined4 *)(gen_frame + 0x2c));
              }
              *(byte *)pwVar18 = bVar13;
              pwVar18 = ((wchar_t *)GEN_TOP(((int)pwVar18 - 1)));
              uVar6 = uVar6 / (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x54));
            }
            sVar10 = (int)&(*(undefined2 *)(gen_frame + 0x26b)) - (int)pwVar18;
            (*(gen_size32 *)(gen_frame + 0x5c)) = sVar10;
            (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)GEN_TOP(((int)pwVar18 + 1)));
            if ((((*(uint *)(gen_frame + 0x68)) & 0x200) != 0) &&
               ((sVar10 == 0 || (*((byte *)GEN_TOP(((int)pwVar18 + 1))) != 0x30)))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar18;
              (*(gen_size32 *)(gen_frame + 0x5c)) = (int)&(*(undefined2 *)(gen_frame + 0x26b)) - (int)pwVar18 + 1;
              *(byte *)pwVar18 = 0x30;
            }
          }
          else {
            if ((*(uint *)(gen_frame + 0x54)) < 0x54) {
              if ((*(uint *)(gen_frame + 0x54)) == 0x53) {
                if (((*(uint *)(gen_frame + 0x68)) & 0x830) == 0) {
                  (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x20;
                }
                goto LAB_00c59f6a;
              }
              if ((*(uint *)(gen_frame + 0x54)) != 0x41) {
                if ((*(uint *)(gen_frame + 0x54)) == 0x43) {
                  if (((*(uint *)(gen_frame + 0x68)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x20;
                  }
                  goto LAB_00c5a013;
                }
                if (((*(uint *)(gen_frame + 0x54)) != 0x45) && ((*(uint *)(gen_frame + 0x54)) != 0x47)) goto LAB_00c5a4cd;
              }
              (*(undefined4 *)(gen_frame + 0x8)) = 1;
              (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x54)) + 0x20;
LAB_00c59f01: ;
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x40;
              pwVar16 = ((wchar_t *)(gen_frame + 0x6c));
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16;
              (*(gen_size32 *)(gen_frame + 0x5c)) = 0x200;
              if ((int)(*(uint *)(gen_frame + 0x64)) < 0) {
                (*(uint *)(gen_frame + 0x64)) = 6;
              }
              else if ((*(uint *)(gen_frame + 0x64)) == 0) {
                if ((short)(*(uint *)(gen_frame + 0x54)) == 0x67) {
                  (*(uint *)(gen_frame + 0x64)) = 1;
                }
              }
              else {
                if (0x200 < (int)(*(uint *)(gen_frame + 0x64))) {
                  (*(uint *)(gen_frame + 0x64)) = 0x200;
                }
                if (0xa3 < (int)(*(uint *)(gen_frame + 0x64))) {
                  sVar10 = (*(uint *)(gen_frame + 0x64)) + 0x15d;
                  pwVar11 = F_00c54c2e(sVar10);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar11;
                  if (pwVar11 == ((wchar_t *)GEN_TOP(0x0))) {
                    (*(uint *)(gen_frame + 0x64)) = 0xa3;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar11;
                    (*(gen_size32 *)(gen_frame + 0x5c)) = sVar10;
                    pwVar16 = pwVar11;
                  }
                }
              }
              (*(uint *)(gen_frame + 0x0)) = *(uint *)pwVar18;
              (*(uint *)(gen_frame + 0x4)) = *(uint *)(pwVar18 + 2);
              p_Var23 = ((undefined *)(gen_frame + 0x18));
              iVar14 = (int)(char)(*(uint *)(gen_frame + 0x54));
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 4;
              puVar20 = &(*(uint *)(gen_frame + 0x0));
              pwVar18 = pwVar16;
              sVar10 = (*(gen_size32 *)(gen_frame + 0x5c));
              uVar21 = (*(undefined4 *)(gen_frame + 0x8));
              uVar9 = (*(uint *)(gen_frame + 0x64));
              pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
              (*pcVar12)(puVar20,pwVar18,sVar10,iVar14,uVar9,uVar21,p_Var23);
              uVar9 = (*(uint *)(gen_frame + 0x68)) & 0x80;
              if ((uVar9 != 0) && ((*(uint *)(gen_frame + 0x64)) == 0)) {
                p_Var23 = ((undefined *)(gen_frame + 0x18));
                pwVar18 = pwVar16;
                pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                (*pcVar12)(pwVar18,p_Var23);
              }
              if (((short)(*(uint *)(gen_frame + 0x54)) == 0x67) && (uVar9 == 0)) {
                p_Var23 = ((undefined *)(gen_frame + 0x18));
                pwVar18 = pwVar16;
                pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                (*pcVar12)(pwVar18,p_Var23);
              }
              if ((byte)*pwVar16 == 0x2d) {
                (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x100;
                pwVar16 = ((wchar_t *)GEN_TOP(((int)pwVar16 + 1)));
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16;
              }
            }
            else {
              if ((*(uint *)(gen_frame + 0x54)) == 0x58) goto LAB_00c5a2f0;
              if ((*(uint *)(gen_frame + 0x54)) != 0x5a) {
                if ((*(uint *)(gen_frame + 0x54)) == 0x61) goto LAB_00c59f01;
                if ((*(uint *)(gen_frame + 0x54)) != 99) goto LAB_00c5a4cd;
LAB_00c5a013: ;
                wVar3 = *pwVar18;
                (*(int *)(gen_frame + 0x44)) = 1;
                (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 2;
                (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)wVar3;
                if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
                  ((wchar_t *)(gen_frame + 0x6c))[0] = wVar3;
                }
                else {
                  (*(char *)(gen_frame + 0x38)) = (char)wVar3;
                  (*(undefined1 *)(gen_frame + 0x39)) = 0;
                  pwVar18 = (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x18)))) + 160) + (3) * 4)))));
                  iVar14 = F_00c7b204(((wchar_t *)(gen_frame + 0x6c)),&(*(char *)(gen_frame + 0x38)),(gen_size32)pwVar18,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x18)))));
                  if (iVar14 < 0) {
                    (*(int *)(gen_frame + 0x28)) = 1;
                  }
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)(gen_frame + 0x6c));
                (*(gen_size32 *)(gen_frame + 0x5c)) = 1;
                goto LAB_00c5a4cd;
              }
              psVar4 = *(short * PTR32 *)pwVar18;
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 2;
              if ((psVar4 != ((short *)GEN_TOP(0x0))) && (*(wchar_t * PTR32 *)(psVar4 + 2) != ((wchar_t *)GEN_TOP(0x0)))) {
                sVar10 = (gen_size32)*psVar4;
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = *(wchar_t * PTR32 *)(psVar4 + 2);
                if (((*(uint *)(gen_frame + 0x68)) & 0x800) != 0) {
                  iVar14 = sVar10 - ((int)sVar10 >> 0x1f);
                  (*(int *)(gen_frame + 0x44)) = 1;
                  goto LAB_00c5a4c5;
                }
                (*(int *)(gen_frame + 0x44)) = 0;
                goto LAB_00c5a4c7;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              pwVar16 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
            }
            sVar10 = F_00c552f0((char *)pwVar16);
LAB_00c5a4c7: ;
            (*(gen_size32 *)(gen_frame + 0x5c)) = sVar10;
          }
LAB_00c5a4cd: ;
          if ((*(int *)(gen_frame + 0x28)) == 0) {
            if (((*(uint *)(gen_frame + 0x68)) & 0x40) != 0) {
              if (((*(uint *)(gen_frame + 0x68)) & 0x100) == 0) {
                if (((*(uint *)(gen_frame + 0x68)) & 1) == 0) {
                  if (((*(uint *)(gen_frame + 0x68)) & 2) == 0) goto LAB_00c5a50f;
                  uVar22 = 0x20;
                }
                else {
                  uVar22 = 0x2b;
                }
              }
              else {
                uVar22 = 0x2d;
              }
              (*(undefined2 *)(gen_frame + 0x3c)) = uVar22;
              (*(int *)(gen_frame + 0x48)) = 1;
            }
LAB_00c5a50f: ;
            uVar9 = ((*(uint *)(gen_frame + 0x40)) - (*(gen_size32 *)(gen_frame + 0x5c))) - (*(int *)(gen_frame + 0x48));
            (*(uint *)(gen_frame + 0x54)) = uVar9;
            if (((*(uint *)(gen_frame + 0x68)) & 0xc) == 0) {
              do {
                if ((int)uVar9 < 1) break;
                uVar9 = uVar9 - 1;
                F_00c59aa5((*(int *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x58)),0x20);
              } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
            }
            iVar14 = (*(int *)(gen_frame + 0x4c));
            F_00c59afb(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0xc)),&(*(undefined2 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x48)));
            if ((((*(uint *)(gen_frame + 0x68)) & 8) != 0) && (uVar9 = (*(uint *)(gen_frame + 0x54)), ((*(uint *)(gen_frame + 0x68)) & 4) == 0)) {
              do {
                if ((int)uVar9 < 1) break;
                uVar9 = uVar9 - 1;
                F_00c59aa5(iVar14,&(*(uint *)(gen_frame + 0x58)),0x30);
              } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
            }
            if (((*(int *)(gen_frame + 0x44)) == 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x5c)), pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x60)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x5c)))) {
              do {
                sVar10 = sVar10 - 1;
                iVar14 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x14)),(char *)pwVar18,
                                    (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x18)))) + 160) + (3) * 4))))),
                                    &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x18)))));
                if (iVar14 < 1) {
                  (*(uint *)(gen_frame + 0x58)) = 0xffffffff;
                  break;
                }
                F_00c59aa5((*(int *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x14)));
                pwVar18 = ((wchar_t *)GEN_TOP(((int)pwVar18 + iVar14)));
              } while (0 < (int)sVar10);
            }
            else {
              F_00c59afb(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x4c)),(*(int * PTR32 *)(gen_frame + 0xc)),(*(wchar_t * PTR32 *)(gen_frame + 0x60)),(*(gen_size32 *)(gen_frame + 0x5c)));
            }
            if ((-1 < (int)(*(uint *)(gen_frame + 0x58))) && (uVar9 = (*(uint *)(gen_frame + 0x54)), ((*(uint *)(gen_frame + 0x68)) & 4) != 0)) {
              do {
                if ((int)uVar9 < 1) break;
                uVar9 = uVar9 - 1;
                F_00c59aa5((*(int *)(gen_frame + 0x4c)),&(*(uint *)(gen_frame + 0x58)),0x20);
              } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
            }
          }
        }
        else {
          if (0x70 < (*(uint *)(gen_frame + 0x54))) {
            if ((*(uint *)(gen_frame + 0x54)) == 0x73) {
LAB_00c59f6a: ;
              uVar9 = (*(uint *)(gen_frame + 0x64));
              if ((*(uint *)(gen_frame + 0x64)) == 0xffffffff) {
                uVar9 = 0x7fffffff;
              }
              (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 2;
              pwVar18 = *(wchar_t * PTR32 *)pwVar18;
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar18;
              if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
                if (pwVar18 == ((wchar_t *)GEN_TOP(0x0))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                }
                (*(int *)(gen_frame + 0x44)) = 1;
                for (pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x60)); (uVar9 != 0 && (uVar9 = uVar9 - 1, *pwVar18 != L'\0'));
                    pwVar18 = pwVar18 + 1) {
                }
                iVar14 = (int)pwVar18 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x60));
LAB_00c5a4c5: ;
                (*(int *)(gen_frame + 0x44)) = 1;
                sVar10 = iVar14 >> 1;
                goto LAB_00c5a4c7;
              }
              if (pwVar18 == ((wchar_t *)GEN_TOP(0x0))) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              }
              (*(gen_size32 *)(gen_frame + 0x5c)) = 0;
              pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
              if (0 < (int)uVar9) {
                do {
                  if ((byte)*pwVar18 == 0) break;
                  iVar14 = F_00c6dfe8((uint)(byte)*pwVar18,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x18)))));
                  if (iVar14 != 0) {
                    pwVar18 = ((wchar_t *)GEN_TOP(((int)pwVar18 + 1)));
                  }
                  pwVar18 = ((wchar_t *)GEN_TOP(((int)pwVar18 + 1)));
                  sVar10 = (*(gen_size32 *)(gen_frame + 0x5c)) + 1;
                  (*(gen_size32 *)(gen_frame + 0x5c)) = sVar10;
                } while ((int)sVar10 < (int)uVar9);
              }
              goto LAB_00c5a4cd;
            }
            if ((*(uint *)(gen_frame + 0x54)) == 0x75) goto LAB_00c5a195;
            if ((*(uint *)(gen_frame + 0x54)) != 0x78) goto LAB_00c5a4cd;
            (*(undefined4 *)(gen_frame + 0x2c)) = 0x27;
LAB_00c5a31c: ;
            (*(uint *)(gen_frame + 0x54)) = 0x10;
            if (((*(uint *)(gen_frame + 0x68)) & 0x80) != 0) {
              (*(undefined2 *)(gen_frame + 0x3c)) = 0x30;
              (*(short *)(gen_frame + 0x3e)) = (short)(*(undefined4 *)(gen_frame + 0x2c)) + 0x51;
              (*(int *)(gen_frame + 0x48)) = 2;
            }
            goto LAB_00c5a19f;
          }
          if ((*(uint *)(gen_frame + 0x54)) == 0x70) {
            (*(uint *)(gen_frame + 0x64)) = 8;
LAB_00c5a2f0: ;
            (*(undefined4 *)(gen_frame + 0x2c)) = 7;
            goto LAB_00c5a31c;
          }
          if ((*(uint *)(gen_frame + 0x54)) < 0x65) goto LAB_00c5a4cd;
          if ((*(uint *)(gen_frame + 0x54)) < 0x68) goto LAB_00c59f01;
          if ((*(uint *)(gen_frame + 0x54)) == 0x69) goto LAB_00c5a18e;
          if ((*(uint *)(gen_frame + 0x54)) != 0x6e) {
            if ((*(uint *)(gen_frame + 0x54)) != 0x6f) goto LAB_00c5a4cd;
            (*(uint *)(gen_frame + 0x54)) = 8;
            if (((*(uint *)(gen_frame + 0x68)) & 0x80) != 0) {
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x200;
            }
            goto LAB_00c5a19f;
          }
          puVar20 = *(uint * PTR32 *)pwVar18;
          (*(wchar_t * PTR32 *)(gen_frame + 0x50)) = pwVar18 + 2;
          uVar9 = F_00c51967();
          if (uVar9 == 0) {
            piVar8 = F_00c51f85();
            *piVar8 = 0x16;
            F_00c4c305();
            cVar1 = (*(bool *)(((char *)((undefined *)(gen_frame + 0x18)) + 12)));
            goto LAB_00c59bf2;
          }
          if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
            *puVar20 = (*(uint *)(gen_frame + 0x58));
          }
          else {
            *(undefined2 *)puVar20 = (undefined2)(*(uint *)(gen_frame + 0x58));
          }
          (*(int *)(gen_frame + 0x28)) = 1;
        }
        if ((*(wchar_t * PTR32 *)(gen_frame + 0x34)) != ((wchar_t *)GEN_TOP(0x0))) {
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x34)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = ((wchar_t *)GEN_TOP(0x0));
        }
      }
      uVar2 = *(*(ushort * PTR32 *)(gen_frame + 0x30));
      (*(uint *)(gen_frame + 0x54)) = (uint)uVar2;
      iVar14 = (*(int *)(gen_frame + 0x10));
      puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x30));
      pwVar18 = (*(wchar_t * PTR32 *)(gen_frame + 0x50));
    }
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x18)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x18)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x18)) + 8))) + 112))))) & 0xfffffffd;
    }
  }
  return (*(uint *)(gen_frame + 0x58));
}

/* ref: __vswprintf_l */
GEN_LIB GEN_NOFRAME int F_00c5a72a(GEN_P(wchar_t * _String, unsigned int gen_a0), GEN_P(gen_size32 _Count, unsigned int gen_a1), GEN_P(wchar_t * _Format, unsigned int gen_a2), GEN_P(undefined * _Plocinfo, unsigned int gen_a3), GEN_P(undefined * _Ap, unsigned int gen_a4))
{
  GEN_ENTER(0xc5a72au, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * _String = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _Count = (gen_size32)gen_a1;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * _Ap = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = ((char *)GEN_TOP(0x0));
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *ppcVar4 = ((char *)GEN_TOP(0x0));
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Count == 0) || (_String == ((wchar_t *)GEN_TOP(0x0)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = (char *)_String;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = (char *)_String;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 12))) = 0x42;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = 0x7fffffff;
    uVar2 = F_00c59b62(((undefined *)(gen_frame + 0x0)),_Count,_Format,_Plocinfo);
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = 0;
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) + 1)));
    }
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0x0)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0x0)))) = 0;
    }
  }
  return uVar2;
}

/* ref: __vswprintf */
GEN_LIB GEN_NOFRAME int F_00c5a7ca(GEN_P(wchar_t * _Dest, unsigned int gen_a0), GEN_P(wchar_t * _Format, unsigned int gen_a1), GEN_P(undefined * _Args, unsigned int gen_a2))
{
  GEN_ENTER(0xc5a7cau, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Dest = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Args = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined * unaff_EBP = 0;
  
  iVar1 = F_00c5a72a(_Dest,(gen_size32)_Format,((wchar_t *)GEN_TOP(0x0)),(undefined *)_Args,unaff_EBP);
  return iVar1;
}

/* ref: FID_conflict___vscprintf_helper_00c5a7ef */
GEN_LIB GEN_NOFRAME uint F_00c5a7ef(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5a7efu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL(0x24, 12);
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  puVar4 = ((undefined4 *)(gen_frame + 0x4));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_2 == 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  ((undefined4 *)(gen_frame + 0x4))[0] = 0x7fffffff;
  ((undefined4 *)(gen_frame + 0x4))[2] = 0x42;
  ((undefined4 *)(gen_frame + 0x4))[1] = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  uVar2 = (*param_1)(&(*(undefined4 *)(gen_frame + 0x0)),param_2,param_3,param_4);
  return uVar2;
}

/* ref: FID_conflict___vscprintf_p_00c5a84b */
GEN_LIB GEN_NOFRAME int F_00c5a84b(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc5a84bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc59b62)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5a867 */
GEN_LIB GEN_NOFRAME int F_00c5a867(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc5a867u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc59b62)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_00c5a884 */
GEN_LIB GEN_NOFRAME int F_00c5a884(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc5a884u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc72530)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vscprintf_p_l_00c5a8a0 */
GEN_LIB GEN_NOFRAME int F_00c5a8a0(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc5a8a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c5a7ef(((code *)REFP(0xc72530)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: __mtinitlocks */
GEN_LIB GEN_NOFRAME int F_00c5a8bd(void)
{
  GEN_ENTER(0xc5a8bdu, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  int iVar2;
  undefined * puVar3;
  
  iVar2 = 0;
  puVar3 = &REFG(undefined, 0x15d7240);
  do {
    if ((&REFG(undefined4, 0x134b154))[(int)(iVar2 * 2)] == 1) {
      (&REFG(undefined4, 0x134b150))[(int)(iVar2 * 2)] = puVar3;
      puVar3 = puVar3 + 0x18;
      BVar1 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[(int)(iVar2 * 2)],4000);
      if (BVar1 == 0) {
        (&REFG(undefined4, 0x134b150))[(int)(iVar2 * 2)] = 0;
        return 0;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x24);
  return 1;
}

/* ref: __mtdeletelocks */
GEN_LIB GEN_NOFRAME unsigned int F_00c5a907(void)
{
  GEN_ENTER(0xc5a907u, 0u, 0u, 0u, 0u);
  undefined * _Memory;
  undefined4 * puVar1;
  int * piVar2;
  
  puVar1 = &REFG(undefined4, 0x134b150);
  do {
    _Memory = ((undefined *)GEN_TOP(*puVar1));
    if ((_Memory != ((undefined *)GEN_TOP(0x0))) && (puVar1[1] != 1)) {
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

/* ref: Global::__unlock */
GEN_LIB GEN_NOFRAME uint F_00c5a95e(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5a95eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[(int)(param_1 * 2)]);
  return extraout_EAX;
}

/* ref: __mtinitlocknum */
GEN_LIB GEN_NOFRAME int F_00c5a98d(unsigned int gen_a0)
{
  GEN_ENTER(0xc5a98du, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  BOOL BVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f63e0);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc5a999;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f63e0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  iVar3 = 1;
  (*(int *)(gen_frame + 0x10)) = 1;
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
        (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
        if (*piVar1 == 0) {
          BVar2 = gen_imp_InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
          if (BVar2 == 0) {
            F_00c4c68f(lpCriticalSection);
            piVar1 = F_00c51f85();
            *piVar1 = 0xc;
            (*(int *)(gen_frame + 0x10)) = 0;
          }
          else {
            *piVar1 = (int)lpCriticalSection;
          }
        }
        else {
          F_00c4c68f(lpCriticalSection);
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c5aa46();
        iVar3 = (*(int *)(gen_frame + 0x10));
      }
    }
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    return iVar3;
  }
  F_00c5593d();
  F_00c5578e(0x1e);
                    
  F_00c47986(0xff);
}

/* ref: FUN_00c5aa46 */
GEN_LIB GEN_NOFRAME uint F_00c5aa46(void)
{
  GEN_ENTER(0xc5aa46u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: __lock */
GEN_LIB GEN_NOFRAME unsigned int F_00c5aa4f(GEN_P(int _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc5aa4fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _File = (int)gen_a0;)
  int iVar1;
  
  if ((&REFG(undefined4, 0x134b150))[(int)(_File * 2)] == 0) {
    iVar1 = F_00c5a98d(_File);
    if (iVar1 == 0) {
                    
      F_00c47ca5(0x11);
    }
  }
  return (uint)(gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(&REFG(undefined4, 0x134b150))[(int)(_File * 2)]));
}

/* ref: terminate */
GEN_LIB GEN_NOFRAME unsigned int F_00c5aa82(void)
{
  GEN_ENTER(0xc5aa82u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x2c, 4);
  undefined * p_Var1;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f6400);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc5aa8e;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f6400;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 120))) != ((code *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 120))))();
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  }
                    
  F_00c4c6c9();
}

/* ref: FUN_00c5aaa2 */
GEN_LIB GEN_NOFRAME uint F_00c5aaa2(void)
{
  GEN_ENTER(0xc5aaa2u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c5aaa6 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5aaa6(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5aaa6u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
                    
  *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = &REFG(undefined, 0xc5aab5);
  F_00c4c6c9();
}

/* ref: Global::?unexpected@@YAXXZ */
GEN_LIB GEN_NOFRAME unsigned int F_00c5aabb(void)
{
  GEN_ENTER(0xc5aabbu, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 124))) != ((code *)GEN_TOP(0x0))) {
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 124))))();
  }
                    
  F_00c5aa82();
}

/* ref: _inconsistency */
GEN_LIB GEN_NOFRAME unsigned int F_00c5aace(void)
{
  GEN_ENTER(0xc5aaceu, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x2c, 4);
  code * pcVar1;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f6420);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc5aada;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f6420;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7390));
  if (pcVar1 != ((code *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    (*pcVar1)();
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  }
                    
  F_00c5aa82();
}

/* ref: FUN_00c5aaf2 */
GEN_LIB GEN_NOFRAME uint F_00c5aaf2(void)
{
  GEN_ENTER(0xc5aaf2u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c5aaf6 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5aaf6(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5aaf6u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
                    
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc5ab05;
  F_00c5aa82();
}

/* ref: Global::__initp_eh_hooks */
GEN_LIB GEN_NOFRAME unsigned int F_00c5ab06(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5ab06u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  PVOID pvVar1;
  
  pvVar1 = gen_imp_EncodePointer(((code *)REFP(0xc5aa82)));
  REFG(undefined4, 0x15d7390) = pvVar1;
  return 0;
}

/* ref: __initp_misc_winsig */
GEN_LIB GEN_NOFRAME uint F_00c5ab17(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5ab17u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d7394) = param_1;
  REFG(undefined4, 0x15d7398) = param_1;
  REFG(undefined4, 0x15d739c) = param_1;
  REFG(undefined4, 0x15d73a0) = param_1;
  return param_1;
}

/* ref: FUN_00c5ab35 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c5ab35(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ab35u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  uint uVar1;
  uint * puVar2;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6440);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc5ab41;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6440;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  F_00c5aa4f(0);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  if ((*(int *)&gen_args[0]) == 0) {
    puVar2 = (uint *)&REFG(undefined4, 0x15d7394);
    (*(gen_code32 *)(gen_frame + 0x14)) = gen_imp_DecodePointer(REFG(undefined4, 0x15d7394));
    (*(undefined4 *)(gen_frame + 0x10)) = 2;
  }
  else {
    puVar2 = (uint *)&REFG(undefined4, 0x15d7398);
    (*(gen_code32 *)(gen_frame + 0x14)) = gen_imp_DecodePointer(REFG(undefined4, 0x15d7398));
    (*(undefined4 *)(gen_frame + 0x10)) = 0x15;
  }
  if (((*(gen_code32 *)(gen_frame + 0x14)) != ((code *)GEN_TOP(0x0))) && ((*(gen_code32 *)(gen_frame + 0x14)) != ((code *)GEN_TOP(0x1)))) {
    uVar1 = F_00c5b18d();
    *puVar2 = uVar1;
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c5abaf();
  if ((*(gen_code32 *)(gen_frame + 0x14)) == ((code *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    if ((*(gen_code32 *)(gen_frame + 0x14)) != ((code *)GEN_TOP(0x1))) {
      ((code *)(*(gen_code32 *)(gen_frame + 0x14)))((*(undefined4 *)(gen_frame + 0x10)));
    }
    uVar1 = 1;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar1;
}

/* ref: FUN_00c5abaf */
GEN_LIB GEN_NOFRAME uint F_00c5abaf(void)
{
  GEN_ENTER(0xc5abafu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0);
  return uVar1;
}

/* ref: siglookup */
GEN_LIB GEN_NOFRAME uint F_00c5abd1(GEN_P(int in_edx, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5abd1u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*((int *)GEN_TOP((uVar1 + 4))) == in_edx) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < REFG(int, 0x111a064) * 0xc + param_2);
  if ((REFG(int, 0x111a064) * 0xc + param_2 <= uVar1) || (*((int *)GEN_TOP((uVar1 + 4))) != in_edx)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Global::___get_sigabrt */
GEN_LIB GEN_NOFRAME uint F_00c5ac08(void)
{
  GEN_ENTER(0xc5ac08u, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  
  pvVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d739c));
  return (uint)pvVar1;
}

/* ref: FUN_00c5ae29 */
GEN_LIB GEN_NOFRAME uint F_00c5ae29(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5ae29u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0);
  return uVar1;
}

/* ref: _raise */
GEN_LIB GEN_NOFRAME int F_00c5ae67(unsigned int gen_a0)
{
  GEN_ENTER(0xc5ae67u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x4c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x48);
  gen_args[0] = gen_a0;
  int in_edx;
  uint uVar1;
  int * piVar2;
  PVOID Ptr;
  code * pcVar3;
  uint * puVar4;
  undefined * p_Var5;
  
  in_edx = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x20;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x3c)) = &REFG(undefined, 0x12f6480);
  (*(uint volatile *)(gen_frame + 0x38)) = 0xc5ae73;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ 0x12f6480;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  (*(undefined1 * PTR32 *)(gen_frame + 0x28)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  p_Var5 = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = ((undefined *)GEN_TOP(0x0));
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
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = p_Var5;
    if (p_Var5 == ((undefined *)GEN_TOP(0x0))) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
      return -1;
    }
    uVar1 = F_00c5abd1(in_edx,(*(void * PTR32 *)(((char *)(p_Var5) + 92))));
    puVar4 = ((uint *)GEN_TOP((uVar1 + 8)));
    pcVar3 = ((code *)GEN_TOP(*puVar4));
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
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
        return -1;
      }
LAB_00c5aeef: ;
      puVar4 = (uint *)&REFG(undefined4, 0x15d739c);
      Ptr = REFG(undefined4, 0x15d739c);
    }
LAB_00c5af11: ;
    (*(int *)(gen_frame + 0x24)) = 1;
    pcVar3 = gen_imp_DecodePointer(Ptr);
  }
  (*(gen_code32 *)(gen_frame + 0x20)) = pcVar3;
  if (pcVar3 == ((code *)GEN_TOP(0x1))) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
    return 0;
  }
  if (pcVar3 == ((code *)GEN_TOP(0x0))) {
                    
    F_00c47c71(3);
  }
  if ((*(int *)(gen_frame + 0x24)) != 0) {
    F_00c5aa4f(0);
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(0x0));
  if (((in_edx == 8) || (in_edx == 0xb)) || (in_edx == 4)) {
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(void * PTR32 *)(((char *)(p_Var5) + 96)));
    (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = ((undefined *)GEN_TOP(0x0));
    if (in_edx == 8) {
      (*(int *)(gen_frame + 0x10)) = (*(int *)(((char *)(p_Var5) + 100)));
      (*(int *)(((char *)(p_Var5) + 100))) = 0x8c;
      goto LAB_00c5af75;
    }
  }
  else {
LAB_00c5af75: ;
    if (in_edx == 8) {
      for ((*(int *)(gen_frame + 0x1c)) = REFG(int, 0x111a058); (*(int *)(gen_frame + 0x1c)) < REFG(int, 0x111a05c) + REFG(int, 0x111a058); (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1)
      {
        *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x1c)) * 0xc + 8 + (int)(*(void * PTR32 *)(((char *)(p_Var5) + 92)))))) = 0;
      }
      goto LAB_00c5afad;
    }
  }
  uVar1 = F_00c5b18d();
  *puVar4 = uVar1;
LAB_00c5afad: ;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c5afce((gen_frame + 0x40));
  if (in_edx == 8) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x20)))(8,(*(int *)(((char *)(p_Var5) + 100))));
  }
  else {
    ((code *)(*(gen_code32 *)(gen_frame + 0x20)))(in_edx);
    if ((in_edx != 0xb) && (in_edx != 4)) {
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
      return 0;
    }
  }
  (*(void * PTR32 *)(((char *)(p_Var5) + 96))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  if (in_edx == 8) {
    (*(int *)(((char *)(p_Var5) + 100))) = (*(int *)(gen_frame + 0x10));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
  return 0;
}

/* ref: FUN_00c5afc8 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5afc8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5afc8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ebp - 0x1c))) != 0) {
    F_00c5a95e(0);
  }
  return;
}

/* ref: FUN_00c5afce */
GEN_LIB GEN_NOFRAME unsigned int F_00c5afce(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5afceu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ebp - 0x1c))) != 0) {
    F_00c5a95e(0);
  }
  return;
}

/* ref: FUN_00c5b00a */
GEN_LIB GEN_NOFRAME uint F_00c5b00a(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b00au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d73a8) = param_1;
  return param_1;
}

/* ref: rand_s */
GEN_LIB GEN_NOFRAME uint F_00c5b019(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b019u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
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
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
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
    Ptr = gen_imp_GetProcAddress(hModule,((char *)REFP(0x1119f4c)));
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
GEN_LIB GEN_NOFRAME uint F_00c5b109(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b109u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d73ac) = param_1;
  return param_1;
}

/* ref: _set_new_handler */
GEN_LIB GEN_NOFRAME code * F_00c5b118(GEN_P(code * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b118u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  code * p_Var1;
  
  F_00c5aa4f(4);
  p_Var1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73ac));
  REFG(undefined4, 0x15d73ac) = gen_imp_EncodePointer(param_1);
  F_00c5a95e(4);
  return p_Var1;
}

/* ref: __callnewh */
GEN_LIB GEN_NOFRAME int F_00c5b165(GEN_P(gen_size32 _Size, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b165u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73ac));
  if (pcVar1 != ((code *)GEN_TOP(0x0))) {
    uVar2 = (*pcVar1)(_Size);
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c5b18d */
GEN_LIB GEN_NOFRAME uint F_00c5b18d(void)
{
  GEN_ENTER(0xc5b18du, 0u, 0u, 0u, 0u);
  PVOID pvVar1;
  
  pvVar1 = gen_imp_EncodePointer((PVOID)0x0);
  return (uint)pvVar1;
}

/* ref: FUN_00c5b196 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00c5b196(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b196u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (uint)(gen_imp_TlsAlloc());
}

/* ref: ___fls_getvalue@4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c5b19f(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b19fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274));
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}

/* ref: FUN_00c5b1b9 */
GEN_LIB GEN_NOFRAME uint F_00c5b1b9(void)
{
  GEN_ENTER(0xc5b1b9u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x134b270);
}

/* ref: ___set_flsgetvalue */
GEN_LIB GEN_NOFRAME uint F_00c5b1bf(void)
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
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c5b1f3(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5b1f3u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
  uVar2 = (*pcVar1)(param_1,param_2);
  return uVar2;
}

/* ref: __mtterm */
GEN_LIB GEN_NOFRAME unsigned int F_00c5b210(void)
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
  return;
}

/* ref: __initptd */
GEN_LIB GEN_NOFRAME unsigned int F_00c5b24d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5b24du, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x38, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * p_Var1;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f64a0);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc5b259;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f64a0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
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
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
  gen_imp_InterlockedIncrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)(p_Var1) + 104))))));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c5b2ef();
  F_00c5aa4f(0xc);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x1));
  (*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) = (undefined *)REFG(undefined * PTR32, 0x134ba28);
  }
  F_00c5cb36((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c5b2f8();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return 0;
}

/* ref: FUN_00c5b2e9 */
GEN_LIB GEN_NOFRAME uint F_00c5b2e9(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b2e9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b2ef */
GEN_LIB GEN_NOFRAME uint F_00c5b2ef(void)
{
  GEN_ENTER(0xc5b2efu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b2f8 */
GEN_LIB GEN_NOFRAME uint F_00c5b2f8(void)
{
  GEN_ENTER(0xc5b2f8u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __getptd_noexit */
GEN_LIB GEN_NOFRAME undefined * F_00c5b301(void)
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
  pcVar1 = ((code *)GEN_TOP(F_00c5b1bf()));
  _Ptd = ((undefined *)GEN_TOP((*pcVar1)(uVar4)));
  if (_Ptd == ((undefined *)GEN_TOP(0x0))) {
    _Ptd = F_00c54c73(1,0x214);
    if (_Ptd != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = REFG(undefined4, 0x134b270);
      p_Var5 = _Ptd;
      pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
      uVar2 = (*pcVar1)(uVar4,p_Var5);
      if (uVar2 == 0) {
        F_00c4c68f(_Ptd);
        _Ptd = ((undefined *)GEN_TOP(0x0));
      }
      else {
        F_00c5b24d(_Ptd,((undefined *)GEN_TOP(0x0)));
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
GEN_LIB GEN_NOFRAME undefined * F_00c5b37a(void)
{
  GEN_ENTER(0xc5b37au, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == ((undefined *)GEN_TOP(0x0))) {
                    
    F_00c47ca5(0x10);
  }
  return p_Var1;
}

/* ref: __freefls@4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c5b394(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b394u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x34, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
  gen_args[0] = gen_a0;
  LONG * lpAddend;
  int * piVar1;
  undefined * _Memory;
  uint in_EAX = 0;
  LONG LVar2;
  uint extraout_EAX = 0;
  
  _Memory = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f64c8);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc5b3a0;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f64c8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x2c))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x2c))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x34))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x34))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x3c))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x3c))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x40))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x44))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x44))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x48))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x48))));
    }
    if (*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x5c))) != &REFG(undefined, 0x1119fc8)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)_Memory + 0x5c))));
    }
    F_00c5aa4f(0xd);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    lpAddend = *((LONG * PTR32 *)GEN_TOP(((int)_Memory + 0x68)));
    if (lpAddend != ((LONG *)GEN_TOP(0x0))) {
      LVar2 = gen_imp_InterlockedDecrement(lpAddend);
      if ((LVar2 == 0) && (lpAddend != (LONG *)&REFG(undefined, 0x134b2c0))) {
        F_00c4c68f(lpAddend);
      }
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c5b4ae();
    F_00c5aa4f(0xc);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x1));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)_Memory + 0x6c)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      F_00c5cbc5(piVar1);
      if (((piVar1 != (int *)REFG(undefined * PTR32, 0x134ba28)) && (piVar1 != (int *)&REFG(undefined, 0x134b950))) &&
         (*piVar1 == 0)) {
        F_00c5cc5e(piVar1);
      }
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c5b4ba();
    F_00c4c68f(_Memory);
    in_EAX = extraout_EAX;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return in_EAX;
}

/* ref: FUN_00c5b4ab */
GEN_LIB GEN_NOFRAME uint F_00c5b4ab(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b4abu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b4ae */
GEN_LIB GEN_NOFRAME uint F_00c5b4ae(void)
{
  GEN_ENTER(0xc5b4aeu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5b4b7 */
GEN_LIB GEN_NOFRAME uint F_00c5b4b7(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b4b7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c5b4ba */
GEN_LIB GEN_NOFRAME uint F_00c5b4ba(void)
{
  GEN_ENTER(0xc5b4bau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: __freeptd */
GEN_LIB GEN_NOFRAME unsigned int F_00c5b4c3(GEN_P(undefined * _Ptd, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b4c3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _Ptd = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  code * pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (REFG(int, 0x134b270) != -1) {
    if ((_Ptd == ((undefined *)GEN_TOP(0x0))) && (pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x134b274)), pvVar1 != (LPVOID)0x0)) {
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
GEN_LIB GEN_NOFRAME int F_00c5b53d(void)
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
  REFG(undefined * PTR32, 0x15d73b0) = gen_imp_GetProcAddress(pHVar1,((char *)REFP(0x1119fb8)));
  REFG(undefined4, 0x15d73b4) = gen_imp_GetProcAddress(pHVar1,((char *)REFP(0x1119fac)));
  REFG(undefined4, 0x15d73b8) = gen_imp_GetProcAddress(pHVar1,((char *)REFP(0x1119fa0)));
  REFG(undefined4, 0x15d73bc) = gen_imp_GetProcAddress(pHVar1,((char *)REFP(0x1119f98)));
  if ((((REFG(undefined * PTR32, 0x15d73b0) == (FARPROC)0x0) || (REFG(undefined4, 0x15d73b4) == (FARPROC)0x0)) ||
      (REFG(undefined4, 0x15d73b8) == (FARPROC)0x0)) || (REFG(undefined4, 0x15d73bc) == (FARPROC)0x0)) {
    REFG(undefined4, 0x15d73b4) = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
    REFG(undefined * PTR32, 0x15d73b0) = ((code *)REFP(0xc5b196));
    REFG(undefined4, 0x15d73b8) = (((code *)GEN_TOP(gen_imp_TlsSetValue)));
    REFG(undefined4, 0x15d73bc) = (((code *)GEN_TOP(gen_imp_TlsFree)));
  }
  REFG(undefined4, 0x134b274) = gen_imp_TlsAlloc();
  if ((REFG(undefined4, 0x134b274) != 0xffffffff) && (BVar2 = gen_imp_TlsSetValue(REFG(undefined4, 0x134b274),REFG(undefined4, 0x15d73b4)), BVar2 != 0))
  {
    F_00c479b0();
    REFG(undefined * PTR32, 0x15d73b0) = gen_imp_EncodePointer(REFG(undefined * PTR32, 0x15d73b0));
    REFG(undefined4, 0x15d73b4) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b4));
    REFG(undefined4, 0x15d73b8) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73b8));
    REFG(undefined4, 0x15d73bc) = gen_imp_EncodePointer(REFG(undefined4, 0x15d73bc));
    iVar3 = F_00c5a8bd();
    if (iVar3 != 0) {
      pcVar7 = ((code *)REFP(0xc5b394));
      pcVar4 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x15d73b0));
      REFG(undefined4, 0x134b270) = (*pcVar4)(pcVar7);
      if ((REFG(undefined4, 0x134b270) != 0xffffffff) && (_Ptd = F_00c54c73(1,0x214), _Ptd != ((undefined *)GEN_TOP(0x0)))) {
        uVar5 = REFG(undefined4, 0x134b270);
        p_Var8 = _Ptd;
        pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d73b8));
        uVar5 = (*pcVar4)(uVar5,p_Var8);
        if (uVar5 != 0) {
          F_00c5b24d(_Ptd,((undefined *)GEN_TOP(0x0)));
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
GEN_LIB GEN_NOFRAME unsigned int F_00c5b6b8(void)
{
  GEN_ENTER(0xc5b6b8u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c5b6de */
GEN_LIB GEN_NOFRAME unsigned int F_00c5b6de(void)
{
  GEN_ENTER(0xc5b6deu, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: __ValidateImageBase */
GEN_LIB GEN_NOFRAME BOOL F_00c5b710(GEN_P(GEN_LPANY pImageBase, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(GEN_LPANY pImageBase = (GEN_LPANY)gen_a0;)
  if ((*(short *)pImageBase == 0x5a4d) &&
     (*((int *)GEN_TOP((pImageBase + *(int *)(pImageBase + 0x3c)))) == 0x4550)) {
    return (uint)((short)*((int *)GEN_TOP(((int)(pImageBase + *(int *)(pImageBase + 0x3c)) + 0x18))) == 0x10b);
  }
  return 0;
}

/* ref: __FindPESection */
GEN_LIB GEN_NOFRAME GEN_LPANY F_00c5b750(GEN_P(GEN_LPANY pImageBase, unsigned int gen_a0), GEN_P(DWORD_PTR rva, unsigned int gen_a1))
{
  GEN_ENTER(0xc5b750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(GEN_LPANY pImageBase = (GEN_LPANY)gen_a0;)
  GEN_PIN(DWORD_PTR rva = (DWORD_PTR)gen_a1;)
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
GEN_LIB GEN_NOFRAME BOOL F_00c5b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc5b7a0u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x34, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
  gen_args[0] = gen_a0;
  BOOL BVar1;
  GEN_LPANY p_Var2;
  
  (*(undefined4 volatile *)(gen_frame + 0x24)) = 0xfffffffe;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x20)) = &REFG(undefined, 0x12f64f0);
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ 0x12f64f0)));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (BOOL)(uintptr_t)gen_eh_resume(); }
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*(undefined4 volatile *)(gen_frame + 0x24)) = 0;
  BVar1 = F_00c5b710((GEN_LPANY)&(*(undefined (*)[128])REFP(0x400000)));
  if (BVar1 != 0) {
    p_Var2 = F_00c5b750((GEN_LPANY)&(*(undefined (*)[128])REFP(0x400000)),(DWORD_PTR)((*(GEN_LPANY *)&gen_args[0]) - 0x400000));
    if (p_Var2 != (GEN_LPANY)0x0) {
      (*(undefined4 volatile *)(gen_frame + 0x24)) = 0xfffffffe;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
      return ~((*(DWORD *)(((char *)(p_Var2) + 36))) >> 0x1f) & 1;
    }
  }
  (*(undefined4 volatile *)(gen_frame + 0x24)) = 0xfffffffe;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return 0;
}

/* ref: FUN_00c5b82b */
GEN_LIB GEN_NOFRAME uint F_00c5b82b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b82bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  return (uint)(*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x14))))) == -0x3ffffffb);
}

/* ref: FUN_00c5b83e */
GEN_LIB GEN_NOFRAME uint F_00c5b83e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b83eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return 0;
}

/* ref: __msize */
GEN_LIB GEN_NOFRAME gen_size32 F_00c5b8b9(GEN_P(undefined * _Memory, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b8b9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _Memory = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  SIZE_T SVar2;
  
  if (_Memory == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  SVar2 = gen_imp_HeapSize(REFG(undefined4, 0x15d74c8),0,_Memory);
  return SVar2;
}

/* ref: __CxxUnhandledExceptionFilter */
GEN_LIB GEN_NOFRAME long GEN_STDCALL F_00c5b8ec(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5b8ecu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
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

/* ref: Global::___CxxSetUnhandledExceptionFilter */
GEN_LIB GEN_NOFRAME uint F_00c5b92e(void)
{
  GEN_ENTER(0xc5b92eu, 0u, 0u, 0u, 0u);
  gen_imp_SetUnhandledExceptionFilter(((code *)REFP(0xc5b8ec)));
  return 0;
}

/* ref: __XcptFilter */
GEN_LIB GEN_NOFRAME int F_00c5b962(GEN_P(ulong _ExceptionNum, unsigned int gen_a0), GEN_P(undefined * _ExceptionPtr, unsigned int gen_a1))
{
  GEN_ENTER(0xc5b962u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ulong _ExceptionNum = (ulong)gen_a0;)
  GEN_PIN(undefined * _ExceptionPtr = (undefined *)(uintptr_t)gen_a1;)
  ulong * puVar1;
  code * pcVar2;
  undefined * pvVar3;
  ulong uVar4;
  undefined * p_Var5;
  ulong * puVar6;
  int iVar7;
  
  p_Var5 = F_00c5b301();
  iVar7 = 0;
  if (p_Var5 != ((undefined *)GEN_TOP(0x0))) {
    puVar1 = (*(void * PTR32 *)(((char *)(p_Var5) + 92)));
    puVar6 = puVar1;
    do {
      if (*puVar6 == _ExceptionNum) break;
      puVar6 = puVar6 + 3;
    } while (puVar6 < puVar1 + 0x24);
    if ((puVar1 + 0x24 <= puVar6) || (*puVar6 != _ExceptionNum)) {
      puVar6 = ((ulong *)GEN_TOP(0x0));
    }
    if ((puVar6 == ((ulong *)GEN_TOP(0x0))) || (pcVar2 = ((code *)GEN_TOP(puVar6[2])), pcVar2 == ((code *)GEN_TOP(0x0)))) {
      iVar7 = 0;
    }
    else if (pcVar2 == (code *)&REFG(undefined, 0x5)) {
      puVar6[2] = 0;
      iVar7 = 1;
    }
    else {
      if (pcVar2 != ((code *)GEN_TOP(0x1))) {
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
GEN_LIB GEN_NOFRAME int F_00c5baac(GEN_P(ulong _ExceptionNum, unsigned int gen_a0), GEN_P(undefined * _ExceptionPtr, unsigned int gen_a1))
{
  GEN_ENTER(0xc5baacu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ulong _ExceptionNum = (ulong)gen_a0;)
  GEN_PIN(undefined * _ExceptionPtr = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (_ExceptionNum == 0xe06d7363) {
    iVar1 = F_00c5b962(0xe06d7363,_ExceptionPtr);
    return iVar1;
  }
  return 0;
}

/* ref: __wincmdln */
GEN_LIB GEN_NOFRAME uint F_00c5bacc(void)
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
  pbVar4 = REFG(byte * PTR32, 0x15e52cc);
  if (REFG(byte * PTR32, 0x15e52cc) == ((byte *)GEN_TOP(0x0))) {
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

/* ref: Global::__setenvp */
GEN_LIB GEN_NOFRAME uint F_00c5bb2b(void)
{
  GEN_ENTER(0xc5bb2bu, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  gen_size32 sVar2;
  undefined * pvVar3;
  int eVar4;
  char * pcVar5;
  int iVar6;
  
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  iVar6 = 0;
  pcVar5 = REFG(char * PTR32, 0x15d6864);
  if (REFG(char * PTR32, 0x15d6864) != ((char *)GEN_TOP(0x0))) {
    for (; *pcVar5 != '\0'; pcVar5 = pcVar5 + sVar2 + 1) {
      if (*pcVar5 != '=') {
        iVar6 = iVar6 + 1;
      }
      sVar2 = F_00c552f0(pcVar5);
    }
    puVar1 = F_00c54c73(iVar6 + 1,4);
    pcVar5 = REFG(char * PTR32, 0x15d6864);
    REFG(undefined4 * PTR32, 0x15d6840) = puVar1;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      do {
        if (*pcVar5 == '\0') {
          F_00c4c68f(REFG(char * PTR32, 0x15d6864));
          REFG(char * PTR32, 0x15d6864) = ((char *)GEN_TOP(0x0));
          *puVar1 = 0;
          REFG(undefined4, 0x15e52d4) = 1;
          return 0;
        }
        sVar2 = F_00c552f0(pcVar5);
        sVar2 = sVar2 + 1;
        if (*pcVar5 != '=') {
          pvVar3 = F_00c54c73(sVar2,1);
          *puVar1 = pvVar3;
          if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
            F_00c4c68f(REFG(undefined4 * PTR32, 0x15d6840));
            REFG(undefined4 * PTR32, 0x15d6840) = ((undefined4 *)GEN_TOP(0x0));
            return 0xffffffff;
          }
          eVar4 = F_00c49908(pvVar3,sVar2,pcVar5);
          if (eVar4 != 0) {
                    
            F_00c4c299(0,0,0,0,0);
          }
          puVar1 = puVar1 + 1;
        }
        pcVar5 = pcVar5 + sVar2;
      } while( true );
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c5bc07 */
GEN_LIB GEN_NOFRAME uint F_00c5bc07(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5bc07u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d6850) = param_1;
  return param_1;
}

/* ref: parse_cmdline */
GEN_LIB GEN_NOFRAME uint F_00c5bc16(GEN_P(byte * in_edx, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(byte * param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc5bc16u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * in_edx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(byte * param_4 = (byte *)(uintptr_t)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
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
  if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
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
      if (pbVar5 != ((byte *)GEN_TOP(0x0))) {
        *pbVar5 = *in_edx;
        param_4 = pbVar5 + 1;
      }
      bVar6 = *in_edx;
      pbVar7 = in_edx + 1;
      iVar3 = F_00c7b540((uint)bVar6);
      if (iVar3 != 0) {
        *in_edi = *in_edi + 1;
        if (param_4 != ((byte *)GEN_TOP(0x0))) {
          *param_4 = *pbVar7;
          param_4 = param_4 + 1;
        }
        pbVar7 = in_edx + 2;
      }
      pbVar5 = param_4;
      if (bVar6 == 0) {
        pbVar7 = pbVar7 - 1;
        goto LAB_00c5bcaa;
      }
    }
    in_edx = pbVar7;
  } while ((bVar2) || ((bVar6 != 0x20 && (bVar6 != 9))));
  if (pbVar5 != ((byte *)GEN_TOP(0x0))) {
    pbVar5[-1] = 0;
  }
LAB_00c5bcaa: ;
  bVar2 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
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
        if (pbVar5 != ((byte *)GEN_TOP(0x0))) {
          *pbVar5 = 0x5c;
          pbVar5 = pbVar5 + 1;
        }
        *in_edi = *in_edi + 1;
        param_4 = pbVar5;
      }
      bVar6 = *pbVar7;
      if ((bVar6 == 0) || ((!bVar2 && ((bVar6 == 0x20 || (bVar6 == 9)))))) break;
      if (bVar1) {
        if (pbVar5 == ((byte *)GEN_TOP(0x0))) {
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
    if (pbVar5 != ((byte *)GEN_TOP(0x0))) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
      param_4 = pbVar5;
    }
    *in_edi = *in_edi + 1;
  }
  if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_3 = 0;
  }
  *param_5 = *param_5 + 1;
  return (uint)param_3;
}

/* ref: __setargv */
GEN_LIB GEN_NOFRAME int F_00c5bdb0(void)
{
  GEN_ENTER(0xc5bdb0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x10, 0);
  uint _Size;
  undefined * pvVar1;
  int iVar2;
  
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5cb18();
  }
  REFG(undefined4, 0x15d74c4) = 0;
  gen_imp_GetModuleFileNameA((HMODULE)0x0,&REFG(undefined, 0x15d73c0),0x104);
  REFG(undefined * PTR32, 0x15d6850) = &REFG(undefined, 0x15d73c0);
  if ((REFG(char * PTR32, 0x15e52cc) == ((char *)GEN_TOP(0x0))) || ((*(char * PTR32 *)(gen_frame + 0x8)) = REFG(char * PTR32, 0x15e52cc), *REFG(char * PTR32, 0x15e52cc) == '\0')) {
    (*(char * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x15d73c0);
  }
  F_00c5bc16((*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),0,0,&(*(uint *)(gen_frame + 0x4)));
  if (((*(uint *)(gen_frame + 0x4)) < 0x3fffffff) && ((*(uint *)(gen_frame + 0x0)) != 0xffffffff)) {
    iVar2 = (*(uint *)(gen_frame + 0x4)) * 4;
    _Size = iVar2 + (*(uint *)(gen_frame + 0x0));
    if (((*(uint *)(gen_frame + 0x0)) <= _Size) && (pvVar1 = F_00c54c2e(_Size), pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
      F_00c5bc16((*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)),pvVar1,((undefined *)GEN_TOP((iVar2 + (int)pvVar1))),&(*(uint *)(gen_frame + 0x4)));
      REFG(int, 0x15d6834) = (*(uint *)(gen_frame + 0x4)) - 1;
      REFG(void * PTR32, 0x15d6838) = pvVar1;
      return 0;
    }
  }
  return -1;
}

/* ref: ___crtGetEnvironmentStringsA */
GEN_LIB GEN_NOFRAME LPVOID F_00c5be6b(void)
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
    if ((_Size == 0) || (local_8 = F_00c54c2e(_Size), local_8 == ((undefined *)GEN_TOP(0x0)))) {
      gen_imp_FreeEnvironmentStringsW(pWVar2);
      pvVar3 = (LPVOID)0x0;
    }
    else {
      iVar6 = gen_imp_WideCharToMultiByte(0,0,pWVar2,iVar6,local_8,_Size,0,0);
      if (iVar6 == 0) {
        F_00c4c68f(local_8);
        local_8 = ((undefined *)GEN_TOP(0x0));
      }
      gen_imp_FreeEnvironmentStringsW(pWVar2);
      pvVar3 = local_8;
    }
  }
  return pvVar3;
}

/* ref: __ioinit */
GEN_LIB GEN_NOFRAME int F_00c5bf02(void)
{
  GEN_ENTER(0xc5bf02u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x50, 0);
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
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    iVar2 = -1;
  }
  else {
    REFG(void * PTR32, 0x15e41a0) = pvVar1;
    REFG(undefined4, 0x15e4190) = 0x20;
    if (pvVar1 < ((undefined *)GEN_TOP(((int)pvVar1 + 0x800U)))) {
      iVar2 = (int)pvVar1 + 5;
      do {
        *((undefined4 *)GEN_TOP((iVar2 - 5))) = 0xffffffff;
        *((undefined2 *)GEN_TOP((iVar2 - 1))) = 0xa00;
        *((undefined4 *)GEN_TOP((iVar2 + 3))) = 0;
        *((undefined2 *)GEN_TOP((iVar2 + 0x1f))) = 0xa00;
        *((undefined1 *)GEN_TOP((iVar2 + 0x21))) = 10;
        *((undefined4 *)GEN_TOP((iVar2 + 0x33))) = 0;
        *((undefined1 *)GEN_TOP((iVar2 + 0x2f))) = 0;
        uVar10 = iVar2 + 0x3b;
        iVar2 = iVar2 + 0x40;
      } while (uVar10 < (int)REFG(void * PTR32, 0x15e41a0) + 0x800U);
    }
    if (((*(undefined2 *)((char *)((byte *)(gen_frame + 0x0)) + 50)) != 0) && ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52)) != 0)) {
      UVar6 = *((UINT *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))));
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
          if (pvVar1 == ((undefined *)GEN_TOP(0x0))) break;
          REFG(undefined4, 0x15e4190) = REFG(undefined4, 0x15e4190) + 0x20;
          *piVar9 = (int)pvVar1;
          if (pvVar1 < ((undefined *)GEN_TOP(((int)pvVar1 + 0x800U)))) {
            iVar2 = (int)pvVar1 + 5;
            do {
              *((undefined4 *)GEN_TOP((iVar2 - 5))) = 0xffffffff;
              *((undefined4 *)GEN_TOP((iVar2 + 3))) = 0;
              *((byte *)GEN_TOP((iVar2 + 0x1f))) = *((byte *)GEN_TOP((iVar2 + 0x1f))) & 0x80;
              *((undefined4 *)GEN_TOP((iVar2 + 0x33))) = 0;
              *((undefined2 *)GEN_TOP((iVar2 - 1))) = 0xa00;
              *((undefined2 *)GEN_TOP((iVar2 + 0x20))) = 0xa0a;
              *((undefined1 *)GEN_TOP((iVar2 + 0x2f))) = 0;
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
            puVar8 = ((undefined4 *)GEN_TOP(((uVar10 & 0x1f) * 0x40 + (int)(&REFG(void * PTR32, 0x15e41a0))[(int)((int)uVar10 >> 5)])))
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
      piVar9 = ((int *)GEN_TOP((iVar2 * 0x40 + (int)REFG(void * PTR32, 0x15e41a0))));
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
GEN_LIB GEN_NOFRAME int F_00c5c19a(void)
{
  GEN_ENTER(0xc5c19au, 0u, 0u, 0u, 0u);
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_HeapCreate(0,0x1000,0);
  REFG(undefined4, 0x15d74c8) = pvVar1;
  return (uint)(pvVar1 != (HANDLE)0x0);
}

/* ref: ___security_init_cookie */
GEN_LIB GEN_NOFRAME unsigned int F_00c5c1d2(void)
{
  GEN_ENTER(0xc5c1d2u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x14, 12);
  DWORD DVar1;
  DWORD DVar2;
  DWORD DVar3;
  uint uVar4;
  
  (*(_FILETIME *)(gen_frame + 0x8)).dwLowDateTime = 0;
  (*(_FILETIME *)(gen_frame + 0x8)).dwHighDateTime = 0;
  if ((REFG(undefined4, 0x134ab78) == 0xbb40e64e) || ((REFG(undefined4, 0x134ab78) & 0xffff0000) == 0)) {
    gen_imp_GetSystemTimeAsFileTime(&(*(_FILETIME *)(gen_frame + 0x8)));
    uVar4 = (*(_FILETIME *)(gen_frame + 0x8)).dwHighDateTime ^ (*(_FILETIME *)(gen_frame + 0x8)).dwLowDateTime;
    DVar1 = gen_imp_GetCurrentProcessId();
    DVar2 = gen_imp_GetCurrentThreadId();
    DVar3 = gen_imp_GetTickCount();
    gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
    REFG(undefined4, 0x134ab78) = uVar4 ^ DVar1 ^ DVar2 ^ DVar3 ^ (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.HighPart ^ (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart;
    if (REFG(undefined4, 0x134ab78) == 0xbb40e64e) {
      REFG(undefined4, 0x134ab78) = 0xbb40e64f;
    }
    else if ((REFG(undefined4, 0x134ab78) & 0xffff0000) == 0) {
      REFG(undefined4, 0x134ab78) = REFG(undefined4, 0x134ab78) | (REFG(undefined4, 0x134ab78) | 0x4711) << 0x10;
    }
  }
  return (uint)(REFG(undefined4, 0x134ab7c) = ~REFG(undefined4, 0x134ab78));
}

/* ref: __is_LFH_enabled */
GEN_LIB GEN_NOFRAME uint F_00c5c26d(void)
{
  GEN_ENTER(0xc5c26du, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x8, 8);
  BOOL BVar1;
  
  (*(int *)(gen_frame + 0x0)) = -1;
  BVar1 = gen_imp_HeapQueryInformation(REFG(undefined4, 0x15d74c8),HeapCompatibilityInformation,&(*(int *)(gen_frame + 0x0)),4,(GEN_LPANY)0x0);
  if ((BVar1 != 0) && ((*(int *)(gen_frame + 0x0)) == 2)) {
    return 1;
  }
  return 0;
}

/* ref: __expand */
GEN_LIB GEN_NOFRAME undefined * F_00c5c2a0(GEN_P(undefined * _Memory, unsigned int gen_a0), GEN_P(gen_size32 _NewSize, unsigned int gen_a1))
{
  GEN_ENTER(0xc5c2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Memory = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _NewSize = (gen_size32)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  int * piVar1;
  undefined * pvVar2;
  SIZE_T SVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  gen_size32 dwBytes;
  
  if (_Memory == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return ((undefined *)GEN_TOP(0x0));
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
        (*(int *)(gen_frame + 0x0)) = -1;
        BVar4 = gen_imp_HeapQueryInformation(REFG(undefined4, 0x15d74c8),HeapCompatibilityInformation,&(*(int *)(gen_frame + 0x0)),4,(GEN_LPANY)0x0);
        if ((BVar4 != 0) && ((*(int *)(gen_frame + 0x0)) == 2)) {
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
    pvVar2 = ((undefined *)GEN_TOP(0x0));
  }
  return pvVar2;
}

/* ref: __VEC_memzero */
GEN_LIB GEN_NOFRAME uint GEN_FASTCALL F_00c5c35a(GEN_P(gen_v16 * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5c35au, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  gen_v16 * pauVar2;
  uint uVar3;
  
  pauVar2 = param_1;
  if (((uint)param_1 & 0xf) != 0) {
    uVar3 = 0x10 - ((uint)param_1 & 0xf);
    param_2 = param_2 - uVar3;
    for (uVar1 = uVar3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      (*pauVar2)[0] = 0;
      pauVar2 = ((gen_v16 *)GEN_TOP((*pauVar2 + 1)));
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *((undefined4 *)GEN_TOP(*pauVar2)) = 0;
      pauVar2 = ((gen_v16 *)GEN_TOP((*pauVar2 + 4)));
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
        *((undefined4 *)GEN_TOP(*pauVar2)) = 0;
        pauVar2 = ((gen_v16 *)GEN_TOP((*pauVar2 + 4)));
      }
      for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = ((gen_v16 *)GEN_TOP((*pauVar2 + 1)));
      }
    }
  }
  return (uint)param_1;
}

/* ref: CPtoLCID */
GEN_LIB GEN_NOFRAME int F_00c5c414(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc5c414u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
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
GEN_LIB GEN_NOFRAME unsigned int F_00c5c443(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc5c443u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  undefined1 * puVar1;
  int iVar2;
  
  F_00c48350(((undefined *)GEN_TOP((in_eax + 0x1c))),0,0x101);
  *((undefined4 *)GEN_TOP((in_eax + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_eax + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_eax + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_eax + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_eax + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_eax + 0x18))) = 0;
  puVar1 = ((undefined1 *)GEN_TOP((in_eax + 0x1c)));
  iVar2 = 0x101;
  do {
    *puVar1 = puVar1[(int)&REFG(undefined, 0x134b2c0) - in_eax];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  puVar1 = ((undefined1 *)GEN_TOP((in_eax + 0x11d)));
  iVar2 = 0x100;
  do {
    *puVar1 = puVar1[(int)&REFG(undefined, 0x134b2c0) - in_eax];
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: setSBUpLow */
GEN_LIB GEN_NOFRAME uint F_00c5c4a7(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc5c4a7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_FRAME_DECL(0x508, 8);
  byte * pbVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  char * pcVar5;
  char cVar6;
  BYTE * pBVar7;
  undefined _Stack_51c[20];
  
  (*(uint *)(gen_frame + 0x500)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x504);
  BVar3 = gen_imp_GetCPInfo(*((UINT *)GEN_TOP((in_esi + 4))),&_Stack_51c);
  if (BVar3 == 0) {
    uVar4 = 0;
    do {
      pcVar5 = ((char *)GEN_TOP((in_esi + 0x11d + uVar4)));
      if (pcVar5 + (-0x61 - (in_esi + 0x11d)) + 0x20 < ((char *)GEN_TOP(0x1a))) {
        pbVar1 = ((byte *)GEN_TOP((in_esi + 0x1d + uVar4)));
        *pbVar1 = *pbVar1 | 0x10;
        cVar6 = (char)uVar4 + ' ';
LAB_00c5c61d: ;
        *pcVar5 = cVar6;
      }
      else {
        if (pcVar5 + (-0x61 - (in_esi + 0x11d)) < ((char *)GEN_TOP(0x1a))) {
          pbVar1 = ((byte *)GEN_TOP((in_esi + 0x1d + uVar4)));
          *pbVar1 = *pbVar1 | 0x20;
          cVar6 = (char)uVar4 - 0x20;
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
      ((CHAR *)(gen_frame + 0x400))[(int)(uVar4)] = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    ((CHAR *)(gen_frame + 0x400))[0] = ' ';
    if ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1))))) != 0) {
      pBVar7 = ((BYTE *)(((char *)&(_Stack_51c) + 6))) + 1;
      bVar2 = (*((BYTE *)GEN_TOP(((((char *)&(_Stack_51c) + 6) + (0) * 1)))));
      do {
        uVar4 = (uint)bVar2;
        if (uVar4 <= *pBVar7) {
          F_00c48350(((CHAR *)(gen_frame + 0x400)) + uVar4,0x20,(*pBVar7 - uVar4) + 1);
        }
        bVar2 = pBVar7[1];
        pBVar7 = pBVar7 + 2;
      } while (bVar2 != 0);
    }
    F_00c635a3(0,1,((CHAR *)(gen_frame + 0x400)),0x100,((ushort *)(gen_frame + 0x0)),*((undefined4 *)GEN_TOP((in_esi + 4))),
               *((undefined4 *)GEN_TOP((in_esi + 0xc))),0);
    F_00c54720(((undefined *)GEN_TOP(0x0)),*((LPCWSTR *)GEN_TOP((in_esi + 0xc))),0x100,((CHAR *)(gen_frame + 0x400)),0x100,((CHAR *)(gen_frame + 0x300)),
                       0x100,*((int *)GEN_TOP((in_esi + 4))),0);
    F_00c54720(((undefined *)GEN_TOP(0x0)),*((LPCWSTR *)GEN_TOP((in_esi + 0xc))),0x200,((CHAR *)(gen_frame + 0x400)),0x100,((CHAR *)(gen_frame + 0x200)),
                       0x100,*((int *)GEN_TOP((in_esi + 4))),0);
    pcVar5 = ((char *)GEN_TOP(0x0));
    do {
      if ((((ushort *)(gen_frame + 0x0))[(int)((int)pcVar5)] & 1) == 0) {
        if ((((ushort *)(gen_frame + 0x0))[(int)((int)pcVar5)] & 2) != 0) {
          pcVar5[in_esi + 0x1d] = pcVar5[in_esi + 0x1d] | 0x20;
          cVar6 = ((CHAR *)(gen_frame + 0x200))[(int)((int)pcVar5)];
          goto LAB_00c5c5c0;
        }
        pcVar5[in_esi + 0x11d] = '\0';
      }
      else {
        pcVar5[in_esi + 0x1d] = pcVar5[in_esi + 0x1d] | 0x10;
        cVar6 = ((CHAR *)(gen_frame + 0x300))[(int)((int)pcVar5)];
LAB_00c5c5c0: ;
        pcVar5[in_esi + 0x11d] = cVar6;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 < ((char *)GEN_TOP(0x100)));
  }
  return (uint)pcVar5;
}

/* ref: ___updatetmbcinfo */
GEN_LIB GEN_NOFRAME undefined * F_00c5c637(void)
{
  GEN_ENTER(0xc5c637u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  undefined * p_Var1;
  LONG LVar2;
  undefined * lpAddend;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6510);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc5c643;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6510;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  p_Var1 = F_00c5b37a();
  if ((((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0) || ((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) == ((undefined *)GEN_TOP(0x0)))) {
    F_00c5aa4f(0xd);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
    lpAddend = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = lpAddend;
    if (lpAddend != (undefined *)REFG(undefined * PTR32, 0x134b6e8)) {
      if (lpAddend != ((undefined *)GEN_TOP(0x0))) {
        LVar2 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(lpAddend))));
        if ((LVar2 == 0) && (lpAddend != (undefined *)&REFG(undefined, 0x134b2c0))) {
          F_00c4c68f(lpAddend);
        }
      }
      (*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      lpAddend = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)REFG(undefined * PTR32, 0x134b6e8);
      gen_imp_InterlockedIncrement((LONG *)REFG(undefined * PTR32, 0x134b6e8));
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c5c6d2();
  }
  else {
    lpAddend = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
  }
  if (lpAddend == ((undefined *)GEN_TOP(0x0))) {
                    
    F_00c47ca5(0x20);
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return lpAddend;
}

/* ref: FUN_00c5c6cf */
GEN_LIB GEN_NOFRAME uint F_00c5c6cf(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5c6cfu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c5c6d2 */
GEN_LIB GEN_NOFRAME uint F_00c5c6d2(void)
{
  GEN_ENTER(0xc5c6d2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: getSystemCP */
GEN_LIB GEN_NOFRAME int F_00c5c6db(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc5c6dbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  UINT UVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined *)GEN_TOP(0x0)));
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
      if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
        REFG(undefined4, 0x15d74cc) = 0;
        return in_esi;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      return in_esi;
    }
    UVar1 = *((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 4)));
    REFG(undefined4, 0x15d74cc) = 1;
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return UVar1;
}

/* ref: __setmbcp_nolock */
GEN_LIB GEN_NOFRAME uint F_00c5c757(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5c757u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
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
    local_20 = ((byte *)GEN_TOP(0x0));
    uVar5 = 0;
    do {
      if (*((uint *)GEN_TOP(((int)&REFG(undefined4, 0x134b6f0) + uVar5))) == uVar4) {
        F_00c48350(((undefined *)GEN_TOP((param_2 + 0x1c))),0,0x101);
        iVar11 = (int)((int)(uintptr_t)local_20) * 0x30;
        local_24 = 0;
        pbVar9 = &REFG(undefined, 0x134b700) + iVar11;
        local_20 = pbVar9;
        do {
          for (; (*pbVar9 != 0 && (bVar3 = pbVar9[1], bVar3 != 0)); pbVar9 = pbVar9 + 2) {
            for (uVar5 = (uint)*pbVar9; uVar5 <= bVar3; uVar5 = uVar5 + 1) {
              pbVar2 = ((byte *)GEN_TOP((param_2 + 0x1d + uVar5)));
              *pbVar2 = *pbVar2 | *((byte *)GEN_TOP((local_24 + 0x134b6ec)));
              bVar3 = pbVar9[1];
            }
          }
          local_24 = local_24 + 1;
          pbVar9 = local_20 + 8;
          local_20 = pbVar9;
        } while (local_24 < 4);
        *((uint *)GEN_TOP((param_2 + 4))) = uVar4;
        *((undefined4 *)GEN_TOP((param_2 + 8))) = 1;
        iVar7 = F_00c5c414(uVar4);
        *((int *)GEN_TOP((param_2 + 0xc))) = iVar7;
        puVar8 = ((undefined2 *)GEN_TOP((param_2 + 0x10)));
        puVar10 = (undefined2 *)(&REFG(undefined, 0x134b6f4) + iVar11);
        iVar11 = 6;
        do {
          *puVar8 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar8 = puVar8 + 1;
          iVar11 = iVar11 - 1;
        } while (iVar11 != 0);
        goto LAB_00c5c8c9;
      }
      local_20 = ((byte *)GEN_TOP(((int)local_20 + 1)));
      uVar5 = uVar5 + 0x30;
    } while (uVar5 < 0xf0);
    if (((uVar4 == 65000) || (uVar4 == 0xfde9)) ||
       (BVar6 = gen_imp_IsValidCodePage(uVar4 & 0xffff), BVar6 == 0)) {
      return 0xffffffff;
    }
    BVar6 = gen_imp_GetCPInfo(uVar4,&_Stack_1c);
    if (BVar6 != 0) {
      F_00c48350(((undefined *)GEN_TOP((param_2 + 0x1c))),0,0x101);
      *((uint *)GEN_TOP((param_2 + 4))) = uVar4;
      *((undefined4 *)GEN_TOP((param_2 + 0xc))) = 0;
      if ((*(UINT *)((char *)&(_Stack_1c))) < 2) {
        *((undefined4 *)GEN_TOP((param_2 + 8))) = 0;
      }
      else {
        if ((*((BYTE *)GEN_TOP(((((char *)&(_Stack_1c) + 6) + (0) * 1))))) != '\0') {
          pBVar12 = ((BYTE *)(((char *)&(_Stack_1c) + 6))) + 1;
          do {
            bVar3 = *pBVar12;
            if (bVar3 == 0) break;
            for (uVar4 = (uint)pBVar12[-1]; uVar4 <= bVar3; uVar4 = uVar4 + 1) {
              pbVar9 = ((byte *)GEN_TOP((param_2 + 0x1d + uVar4)));
              *pbVar9 = *pbVar9 | 4;
            }
            pBVar1 = pBVar12 + 1;
            pBVar12 = pBVar12 + 2;
          } while (*pBVar1 != 0);
        }
        pbVar9 = ((byte *)GEN_TOP((param_2 + 0x1e)));
        iVar11 = 0xfe;
        do {
          *pbVar9 = *pbVar9 | 8;
          pbVar9 = pbVar9 + 1;
          iVar11 = iVar11 - 1;
        } while (iVar11 != 0);
        iVar11 = F_00c5c414(*((undefined4 *)GEN_TOP((param_2 + 4))));
        *((int *)GEN_TOP((param_2 + 0xc))) = iVar11;
        *((undefined4 *)GEN_TOP((param_2 + 8))) = 1;
      }
      *((undefined4 *)GEN_TOP((param_2 + 0x10))) = 0;
      *((undefined4 *)GEN_TOP((param_2 + 0x14))) = 0;
      *((undefined4 *)GEN_TOP((param_2 + 0x18))) = 0;
LAB_00c5c8c9: ;
      F_00c5c4a7(param_2);
      return 0;
    }
    if (REFG(int, 0x15d74cc) == 0) {
      return 0xffffffff;
    }
  }
  F_00c5c443(param_2);
  return 0;
}

/* ref: __getmbcp */
GEN_LIB GEN_NOFRAME int F_00c5c940(void)
{
  GEN_ENTER(0xc5c940u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined *)GEN_TOP(0x0)));
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 4)));
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
  }
  return iVar1;
}

/* ref: __setmbcp */
GEN_LIB GEN_NOFRAME int F_00c5c97e(unsigned int gen_a0)
{
  GEN_ENTER(0xc5c97eu, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x40, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
  gen_args[0] = gen_a0;
  undefined * p_Var1;
  undefined * ptVar2;
  uint uVar3;
  LONG LVar4;
  int * piVar5;
  int iVar6;
  undefined * ptVar7;
  undefined * ptVar8;
  
  (*(undefined4 *)(gen_frame + 0x34)) = 0x14;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = &REFG(undefined, 0x12f6530);
  (*(uint volatile *)(gen_frame + 0x2c)) = 0xc5c98a;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ 0x12f6530;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x24)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  p_Var1 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = p_Var1;
  F_00c5c637();
  ptVar2 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
  (*(int *)&gen_args[0]) = F_00c5c6db((*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == (*(int *)(((char *)(ptVar2) + 4)))) {
    (*(uint *)(gen_frame + 0x14)) = 0;
  }
  else {
    ptVar2 = F_00c54c2e(0x220);
    if (ptVar2 != ((undefined *)GEN_TOP(0x0))) {
      ptVar7 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 104)));
      ptVar8 = ptVar2;
      for (iVar6 = 0x88; iVar6 != 0; iVar6 = iVar6 - 1) {
        (*(int *)((char *)(ptVar8))) = (*(int *)((char *)(ptVar7)));
        ptVar7 = (undefined *)&(*(int *)(((char *)(ptVar7) + 4)));
        ptVar8 = (undefined *)&(*(int *)(((char *)(ptVar8) + 4)));
      }
      (*(int *)((char *)(ptVar2))) = 0;
      uVar3 = F_00c5c757((*(int *)&gen_args[0]),ptVar2);
      p_Var1 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      (*(uint *)(gen_frame + 0x14)) = uVar3;
      if (uVar3 == 0) {
        LVar4 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)((*(undefined * PTR32 *)(gen_frame + 0x10))) + 104))))));
        if ((LVar4 == 0) && ((*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) != (undefined *)&REFG(undefined, 0x134b2c0))) {
          F_00c4c68f((*(undefined * PTR32 *)(((char *)(p_Var1) + 104))));
        }
        (*(undefined * PTR32 *)(((char *)(p_Var1) + 104))) = ptVar2;
        gen_imp_InterlockedIncrement(ptVar2);
        if ((((*(int *)(((char *)(p_Var1) + 112))) & 2) == 0) && (((byte)REFG(undefined4, 0x134b7e0) & 1) == 0)) {
          F_00c5aa4f(0xd);
          (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
          *(int *)&REFG(undefined, 0x15d74dc) = (*(int *)(((char *)(ptVar2) + 4)));
          *(int *)&REFG(undefined, 0x15d74e0) = (*(int *)(((char *)(ptVar2) + 8)));
          *(undefined4 *)&REFG(undefined, 0x15d74e4) = *(undefined4 *)((ushort *)(((char *)(ptVar2) + 12)));
          for (iVar6 = 0; (*(int *)(gen_frame + 0x18)) = iVar6, iVar6 < 5; iVar6 = iVar6 + 1) {
            (&REFG(undefined2, 0x15d74d0))[(int)(iVar6)] = (*((ushort *)GEN_TOP(((((char *)(ptVar2) + 12) + (iVar6 + 2) * 2)))));
          }
          for (iVar6 = 0; (*(int *)(gen_frame + 0x18)) = iVar6, iVar6 < 0x101; iVar6 = iVar6 + 1) {
            (&REFG(undefined1, 0x134b4e0))[(int)(iVar6)] = (*((uchar *)GEN_TOP(((((char *)(ptVar2) + 24) + (iVar6 + 4) * 1)))));
          }
          for (iVar6 = 0; (*(int *)(gen_frame + 0x18)) = iVar6, iVar6 < 0x100; iVar6 = iVar6 + 1) {
            (&REFG(undefined1, 0x134b5e8))[(int)(iVar6)] = (*((uchar *)GEN_TOP(((((char *)(ptVar2) + 281) + (iVar6 + 4) * 1)))));
          }
          LVar4 = gen_imp_InterlockedDecrement((LONG *)REFG(undefined * PTR32, 0x134b6e8));
          if ((LVar4 == 0) && (REFG(undefined * PTR32, 0x134b6e8) != &REFG(undefined, 0x134b2c0))) {
            F_00c4c68f(REFG(undefined * PTR32, 0x134b6e8));
          }
          REFG(undefined * PTR32, 0x134b6e8) = (undefined *)ptVar2;
          gen_imp_InterlockedIncrement(ptVar2);
          (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
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
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00c5cadf */
GEN_LIB GEN_NOFRAME uint F_00c5cadf(void)
{
  GEN_ENTER(0xc5cadfu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: ___initmbctable */
GEN_LIB GEN_NOFRAME uint F_00c5cb18(void)
{
  GEN_ENTER(0xc5cb18u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x15e52e0) == 0) {
    F_00c5c97e(-3);
    REFG(int, 0x15e52e0) = 1;
  }
  return 0;
}

/* ref: ___addlocaleref */
GEN_LIB GEN_NOFRAME unsigned int F_00c5cb36(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5cb36u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1;
  gen_imp_InterlockedIncrement(param_1);
  if (*((int *)GEN_TOP((param_1 + 0xb0))) != 0) {
    gen_imp_InterlockedIncrement(*((int *)GEN_TOP((param_1 + 0xb0))));
  }
  if (*((int *)GEN_TOP((param_1 + 0xb8))) != 0) {
    gen_imp_InterlockedIncrement(*((int *)GEN_TOP((param_1 + 0xb8))));
  }
  if (*((int *)GEN_TOP((param_1 + 0xb4))) != 0) {
    gen_imp_InterlockedIncrement(*((int *)GEN_TOP((param_1 + 0xb4))));
  }
  if (*((int *)GEN_TOP((param_1 + 0xc0))) != 0) {
    gen_imp_InterlockedIncrement(*((int *)GEN_TOP((param_1 + 0xc0))));
  }
  piVar2 = ((int *)GEN_TOP((param_1 + 0x50)));
  param_1 = 6;
  do {
    if ((((undefined *)GEN_TOP(piVar2[-2])) != &REFG(undefined, 0x134b7e4)) && (*piVar2 != 0)) {
      gen_imp_InterlockedIncrement(*piVar2);
    }
    if ((piVar2[-1] != 0) && (piVar2[1] != 0)) {
      gen_imp_InterlockedIncrement(piVar2[1]);
    }
    piVar2 = piVar2 + 4;
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return (uint)(gen_imp_InterlockedIncrement(*((int *)GEN_TOP((iVar1 + 0xd4))) + 0xb4));
}

/* ref: ___removelocaleref */
GEN_LIB GEN_NOFRAME uint F_00c5cbc5(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5cbc5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    gen_imp_InterlockedDecrement(param_1);
    if (*((int *)GEN_TOP((param_1 + 0xb0))) != 0) {
      gen_imp_InterlockedDecrement(*((int *)GEN_TOP((param_1 + 0xb0))));
    }
    if (*((int *)GEN_TOP((param_1 + 0xb8))) != 0) {
      gen_imp_InterlockedDecrement(*((int *)GEN_TOP((param_1 + 0xb8))));
    }
    if (*((int *)GEN_TOP((param_1 + 0xb4))) != 0) {
      gen_imp_InterlockedDecrement(*((int *)GEN_TOP((param_1 + 0xb4))));
    }
    if (*((int *)GEN_TOP((param_1 + 0xc0))) != 0) {
      gen_imp_InterlockedDecrement(*((int *)GEN_TOP((param_1 + 0xc0))));
    }
    piVar2 = ((int *)GEN_TOP((param_1 + 0x50)));
    param_1 = 6;
    do {
      if ((((undefined *)GEN_TOP(piVar2[-2])) != &REFG(undefined, 0x134b7e4)) && (*piVar2 != 0)) {
        gen_imp_InterlockedDecrement(*piVar2);
      }
      if ((piVar2[-1] != 0) && (piVar2[1] != 0)) {
        gen_imp_InterlockedDecrement(piVar2[1]);
      }
      piVar2 = piVar2 + 4;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    gen_imp_InterlockedDecrement(*((int *)GEN_TOP((uVar1 + 0xd4))) + 0xb4);
  }
  return uVar1;
}

/* ref: ___freetlocinfo */
GEN_LIB GEN_NOFRAME uint F_00c5cc5e(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5cc5eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * PTR32 * ppuVar2;
  undefined * _Memory;
  uint extraout_EAX = 0;
  undefined4 * puVar3;
  
  _Memory = param_1;
  if ((((*((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + 0xbc))) != ((undefined * PTR32 *)GEN_TOP(0x0))) &&
       (*((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + 0xbc))) != &REFG(undefined * PTR32, 0x134b048))) &&
      (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0xb0))) != ((int *)GEN_TOP(0x0)))) && (**((int * PTR32 *)GEN_TOP(((int)param_1 + 0xb0))) == 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xb8)));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
      F_00c5fe2f(*((undefined4 *)GEN_TOP(((int)param_1 + 0xbc))));
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0xb4)));
    if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
      F_00c5fba6(*((undefined4 *)GEN_TOP(((int)param_1 + 0xbc))));
    }
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0xb0))));
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0xbc))));
  }
  if ((*((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc0))) != ((int *)GEN_TOP(0x0))) && (**((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc0))) == 0)) {
    F_00c4c68f(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xc4))) - 0xfe))));
    F_00c4c68f(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xcc))) - 0x80))));
    F_00c4c68f(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xd0))) - 0x80))));
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0xc0))));
  }
  ppuVar2 = *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)param_1 + 0xd4)));
  if ((ppuVar2 != &REFG(undefined * PTR32, 0x134b7e8)) && (ppuVar2[0x2d] == ((undefined *)GEN_TOP(0x0)))) {
    F_00c5f782(ppuVar2);
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0xd4))));
  }
  puVar3 = ((undefined4 *)GEN_TOP(((int)param_1 + 0x50)));
  param_1 = ((undefined *)GEN_TOP(0x6));
  do {
    if (((((undefined *)GEN_TOP(puVar3[-2])) != &REFG(undefined, 0x134b7e4)) &&
        (piVar1 = ((int *)GEN_TOP(*puVar3)), piVar1 != ((int *)GEN_TOP(0x0)))) && (*piVar1 == 0)) {
      F_00c4c68f(piVar1);
    }
    if (((puVar3[-1] != 0) && (piVar1 = ((int *)GEN_TOP(puVar3[1])), piVar1 != ((int *)GEN_TOP(0x0)))) && (*piVar1 == 0))
    {
      F_00c4c68f(piVar1);
    }
    puVar3 = puVar3 + 4;
    param_1 = ((undefined *)GEN_TOP(((int)param_1 - 1)));
  } while (param_1 != ((undefined *)GEN_TOP(0x0)));
  F_00c4c68f(_Memory);
  return extraout_EAX;
}

/* ref: __updatetlocinfoEx_nolock */
GEN_LIB GEN_NOFRAME uint F_00c5cda9(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5cda9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  
  if ((param_2 == ((int *)GEN_TOP(0x0))) || (param_1 == ((undefined4 *)GEN_TOP(0x0)))) {
    piVar2 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar1 = ((int *)GEN_TOP(*param_1));
    piVar2 = param_2;
    if (piVar1 != param_2) {
      *param_1 = param_2;
      F_00c5cb36(param_2);
      if (((piVar1 != ((int *)GEN_TOP(0x0))) && (F_00c5cbc5(piVar1), *piVar1 == 0)) &&
         (piVar1 != (int *)&REFG(undefined, 0x134b950))) {
        F_00c5cc5e(piVar1);
      }
    }
  }
  return (uint)piVar2;
}

/* ref: ___updatetlocinfo */
GEN_LIB GEN_NOFRAME undefined * F_00c5cdf6(void)
{
  GEN_ENTER(0xc5cdf6u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  undefined * p_Var1;
  uint uVar2;
  undefined * ptVar3;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6550);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc5ce02;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6550;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  p_Var1 = F_00c5b37a();
  if ((((*(int *)(((char *)(p_Var1) + 112))) & REFG(undefined4, 0x134b7e0)) == 0) || ((*(undefined * PTR32 *)(((char *)(p_Var1) + 108))) == ((undefined *)GEN_TOP(0x0)))) {
    F_00c5aa4f(0xc);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
    uVar2 = F_00c5cda9(&(*(undefined * PTR32 *)(((char *)(p_Var1) + 108))),REFG(undefined * PTR32, 0x134ba28));
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    ptVar3 = ((undefined *)GEN_TOP(F_00c5ce63((gen_frame + 0x2c))));
  }
  else {
    p_Var1 = F_00c5b37a();
    ptVar3 = (*(undefined * PTR32 *)(((char *)(p_Var1) + 108)));
  }
  if (ptVar3 == ((undefined *)GEN_TOP(0x0))) {
                    
    F_00c47ca5(0x20);
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return ptVar3;
}

/* ref: FUN_00c5ce63 */
GEN_LIB GEN_NOFRAME uint F_00c5ce63(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5ce63u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c5a95e(0xc);
  return *((uint *)GEN_TOP((in_ebp - 0x1c)));
}

/* ref: __isctype_l */
GEN_LIB GEN_NOFRAME int F_00c5ce6f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5ce6fu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL(0x1c, 4);
  ushort uVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[2]));
  if ((*(int *)&gen_args[0]) + 1U < 0x101) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 200))) + (*(int *)&gen_args[0]) * 2)));
  }
  else {
    iVar2 = F_00c6dfe8((*(int *)&gen_args[0]) >> 8 & 0xff,(undefined *)((byte *)(gen_frame + 0x0)));
    uVar5 = (undefined1)(*(int *)&gen_args[0]);
    if (iVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x10)) = uVar5;
      (*(undefined1 *)(gen_frame + 0x11)) = 0;
      uVar4 = 1;
    }
    else {
      (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined1)((uint)(*(int *)&gen_args[0]) >> 8);
      (*(undefined1 *)(gen_frame + 0x10)) = (undefined1)(*(int *)&gen_args[0]);
      (*(undefined1 *)(gen_frame + 0x11)) = uVar5;
      (*(undefined1 *)(gen_frame + 0x12)) = 0;
      uVar4 = 2;
    }
    BVar3 = F_00c635a3(((byte *)(gen_frame + 0x0)),1,&(*(undefined1 *)(gen_frame + 0x10)),uVar4,((ushort *)(gen_frame + 0x14)),*((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 4))),
                       *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x14))),1);
    uVar1 = ((ushort *)(gen_frame + 0x14))[0];
    if (BVar3 == 0) {
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
      return 0;
    }
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return (uint)uVar1 & (*(int *)&gen_args[1]);
}

/* ref: __isctype */
GEN_LIB GEN_NOFRAME int F_00c5cf27(GEN_P(int _C, unsigned int gen_a0), GEN_P(int _Type, unsigned int gen_a1))
{
  GEN_ENTER(0xc5cf27u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int _C = (int)gen_a0;)
  GEN_PIN(int _Type = (int)gen_a1;)
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return (uint)*((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & _Type;
  }
  iVar1 = F_00c5ce6f(_C,_Type,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: __filbuf */
GEN_LIB GEN_NOFRAME int F_00c5cf59(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc5cf59u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
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
        if ((iVar3 != 0) && (iVar3 != -1)) {
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
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) - 1;
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
GEN_LIB GEN_NOFRAME int F_00c5d07b(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc5d07bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (_File == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  return (*(int *)(((char *)(_File) + 16)));
}

/* ref: __read_nolock */
GEN_LIB GEN_NOFRAME int F_00c5d0a1(GEN_P(int _FileHandle, unsigned int gen_a0), GEN_P(undefined * _DstBuf, unsigned int gen_a1), GEN_P(uint _MaxCharCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc5d0a1u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int _FileHandle = (int)gen_a0;)
  GEN_PIN(undefined * _DstBuf = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint _MaxCharCount = (uint)gen_a2;)
  GEN_FRAME_DECL(0x1c, 4);
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
  (*(int *)(gen_frame + 0x4)) = -2;
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
  bVar2 = *((byte *)GEN_TOP((*piVar6 + 4 + iVar14)));
  if ((bVar2 & 1) == 0) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    piVar6 = F_00c51f85();
    *piVar6 = 9;
    goto LAB_00c5d1a0;
  }
  if (_MaxCharCount < 0x80000000) {
    (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(0x0));
    if ((_MaxCharCount == 0) || ((bVar2 & 2) != 0)) {
      return 0;
    }
    if (_DstBuf != ((undefined *)GEN_TOP(0x0))) {
      cVar4 = (char)(*((char *)GEN_TOP((*piVar6 + 0x24 + iVar14))) * '\x02') >> 1;
      (*(char *)(gen_frame + 0x16)) = cVar4;
      if (cVar4 == '\x01') {
        if ((~_MaxCharCount & 1) == 0) goto LAB_00c5d18e;
        uVar7 = _MaxCharCount >> 1;
        _MaxCharCount = 4;
        if (3 < uVar7) {
          _MaxCharCount = uVar7;
        }
        pbVar13 = F_00c54c2e(_MaxCharCount);
        (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar13;
        if (pbVar13 == ((byte *)GEN_TOP(0x0))) {
          piVar6 = F_00c51f85();
          *piVar6 = 0xc;
          puVar5 = F_00c51f98();
          *puVar5 = 8;
          return -1;
        }
        lVar15 = F_00c6dda1(_FileHandle,0,0,1);
        iVar11 = *piVar6;
        *((int *)GEN_TOP((iVar14 + 0x28 + iVar11))) = (int)lVar15;
        *((int *)GEN_TOP((iVar14 + 0x2c + iVar11))) = (int)((ulonglong)lVar15 >> 0x20);
      }
      else {
        if (cVar4 == '\x02') {
          if ((~_MaxCharCount & 1) == 0) goto LAB_00c5d18e;
          _MaxCharCount = _MaxCharCount & 0xfffffffe;
        }
        (*(byte * PTR32 *)(gen_frame + 0x8)) = _DstBuf;
        pbVar13 = _DstBuf;
      }
      pbVar8 = pbVar13;
      uVar7 = _MaxCharCount;
      if ((((*((byte *)GEN_TOP((*piVar6 + iVar14 + 4))) & 0x48) != 0) &&
          (bVar2 = *((byte *)GEN_TOP((*piVar6 + iVar14 + 5))), bVar2 != 10)) && (_MaxCharCount != 0)) {
        uVar7 = _MaxCharCount - 1;
        *pbVar13 = bVar2;
        pbVar8 = pbVar13 + 1;
        (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(0x1));
        *((undefined1 *)GEN_TOP((iVar14 + 5 + *piVar6))) = 10;
        if ((((*(char *)(gen_frame + 0x16)) != '\0') && (bVar2 = *((byte *)GEN_TOP((iVar14 + 0x25 + *piVar6))), bVar2 != 10)) &&
           (uVar7 != 0)) {
          *pbVar8 = bVar2;
          pbVar8 = pbVar13 + 2;
          uVar7 = _MaxCharCount - 2;
          (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(0x2));
          *((undefined1 *)GEN_TOP((iVar14 + 0x25 + *piVar6))) = 10;
          if ((((*(char *)(gen_frame + 0x16)) == '\x01') && (bVar2 = *((byte *)GEN_TOP((iVar14 + 0x26 + *piVar6))), bVar2 != 10)) &&
             (uVar7 != 0)) {
            *pbVar8 = bVar2;
            pbVar8 = pbVar13 + 3;
            (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(0x3));
            *((undefined1 *)GEN_TOP((iVar14 + 0x26 + *piVar6))) = 10;
            uVar7 = _MaxCharCount - 3;
          }
        }
      }
      _MaxCharCount = uVar7;
      BVar9 = gen_imp_ReadFile(*((HANDLE *)GEN_TOP((iVar14 + *piVar6))),pbVar8,_MaxCharCount,&(*(uint *)(gen_frame + 0x0)),
                       (GEN_LPANY)0x0);
      if (((BVar9 == 0) || ((int)(*(uint *)(gen_frame + 0x0)) < 0)) || (_MaxCharCount < (*(uint *)(gen_frame + 0x0)))) {
        uVar12 = gen_imp_GetLastError();
        if (uVar12 != 5) {
          if (uVar12 == 0x6d) {
            (*(int *)(gen_frame + 0x4)) = 0;
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
        iVar11 = (int)(*(byte * PTR32 *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x0));
        (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(iVar11));
        pbVar8 = ((byte *)GEN_TOP((iVar14 + 4 + *piVar6)));
        if ((*pbVar8 & 0x80) == 0) goto LAB_00c5d4ad;
        if ((*(char *)(gen_frame + 0x16)) == '\x02') {
          if (((*(uint *)(gen_frame + 0x0)) == 0) || (*(short *)pbVar13 != 10)) {
            *pbVar8 = *pbVar8 & 0xfb;
          }
          else {
            *pbVar8 = *pbVar8 | 4;
          }
          _MaxCharCount = (uint)(*(byte * PTR32 *)(gen_frame + 0x8));
          (*(byte * PTR32 *)(gen_frame + 0xc)) = (*(byte * PTR32 *)(gen_frame + 0x8)) + iVar11;
          pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x8));
          if ((*(byte * PTR32 *)(gen_frame + 0x8)) < (*(byte * PTR32 *)(gen_frame + 0x8)) + iVar11) {
            do {
              sVar3 = *((short *)GEN_TOP(_MaxCharCount));
              if (sVar3 == 0x1a) {
                pbVar8 = ((byte *)GEN_TOP((iVar14 + 4 + *piVar6)));
                if ((*pbVar8 & 0x40) == 0) {
                  *pbVar8 = *pbVar8 | 2;
                }
                else {
                  *(undefined2 *)pbVar13 = *((undefined2 *)GEN_TOP(_MaxCharCount));
                  pbVar13 = pbVar13 + 2;
                }
                break;
              }
              if (sVar3 == 0xd) {
                if (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0xc)) - 2) {
                  if (*((short *)GEN_TOP((_MaxCharCount + 2))) == 10) {
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
                  BVar9 = gen_imp_ReadFile(*((HANDLE *)GEN_TOP((iVar14 + *piVar6))),&(*(short *)(gen_frame + 0x10)),2,&(*(uint *)(gen_frame + 0x0)),
                                   (GEN_LPANY)0x0);
                  if (((BVar9 == 0) && (DVar10 = gen_imp_GetLastError(), DVar10 != 0)) || ((*(uint *)(gen_frame + 0x0)) == 0))
                  goto LAB_00c5d5e0;
                  if ((*((byte *)GEN_TOP((iVar14 + 4 + *piVar6))) & 0x48) == 0) {
                    if ((pbVar13 == (*(byte * PTR32 *)(gen_frame + 0x8))) && ((*(short *)(gen_frame + 0x10)) == 10)) goto LAB_00c5d54d;
                    F_00c6dda1(_FileHandle,0xfffffffe,0xffffffff,1);
                    if ((*(short *)(gen_frame + 0x10)) == 10) goto LAB_00c5d5e9;
                    goto LAB_00c5d5e0;
                  }
                  if ((*(short *)(gen_frame + 0x10)) == 10) {
LAB_00c5d54d: ;
                    _MaxCharCount = uVar1;
                    uVar16 = 10;
                    goto LAB_00c5d5e2;
                  }
                  pbVar13[0] = 0xd;
                  pbVar13[1] = 0;
                  iVar11 = *piVar6;
                  *((undefined1 *)GEN_TOP((iVar14 + 5 + iVar11))) = (undefined1)(*(short *)(gen_frame + 0x10));
                  *((undefined1 *)GEN_TOP((iVar14 + 0x25 + *piVar6))) = (*(undefined1 *)((char *)&(*(short *)(gen_frame + 0x10)) + 1));
                  *((undefined1 *)GEN_TOP((iVar14 + 0x26 + *piVar6))) = 10;
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
            } while (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0xc)));
          }
          (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(((int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0x8)))));
          goto LAB_00c5d4ad;
        }
        if (((*(uint *)(gen_frame + 0x0)) == 0) || (*pbVar13 != 10)) {
          *pbVar8 = *pbVar8 & 0xfb;
        }
        else {
          *pbVar8 = *pbVar8 | 4;
        }
        _MaxCharCount = (uint)(*(byte * PTR32 *)(gen_frame + 0x8));
        (*(byte * PTR32 *)(gen_frame + 0xc)) = (*(byte * PTR32 *)(gen_frame + 0x8)) + iVar11;
        pbVar13 = (*(byte * PTR32 *)(gen_frame + 0x8));
        if ((*(byte * PTR32 *)(gen_frame + 0x8)) < (*(byte * PTR32 *)(gen_frame + 0x8)) + iVar11) {
          do {
            bVar2 = *((byte *)GEN_TOP(_MaxCharCount));
            if (bVar2 == 0x1a) {
              pbVar8 = ((byte *)GEN_TOP((iVar14 + 4 + *piVar6)));
              if ((*pbVar8 & 0x40) == 0) {
                *pbVar8 = *pbVar8 | 2;
              }
              else {
                *pbVar13 = *((byte *)GEN_TOP(_MaxCharCount));
                pbVar13 = pbVar13 + 1;
              }
              break;
            }
            if (bVar2 == 0xd) {
              if (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0xc)) - 1) {
                if (*((char *)GEN_TOP((_MaxCharCount + 1))) == '\n') {
                  uVar7 = _MaxCharCount + 2;
                  goto LAB_00c5d32d;
                }
LAB_00c5d3a4: ;
                _MaxCharCount = _MaxCharCount + 1;
                *pbVar13 = 0xd;
              }
              else {
                uVar7 = _MaxCharCount + 1;
                BVar9 = gen_imp_ReadFile(*((HANDLE *)GEN_TOP((iVar14 + *piVar6))),&(*(char *)(gen_frame + 0x17)),1,&(*(uint *)(gen_frame + 0x0)),
                                 (GEN_LPANY)0x0);
                if (((BVar9 == 0) && (DVar10 = gen_imp_GetLastError(), DVar10 != 0)) || ((*(uint *)(gen_frame + 0x0)) == 0))
                goto LAB_00c5d3a4;
                if ((*((byte *)GEN_TOP((iVar14 + 4 + *piVar6))) & 0x48) == 0) {
                  if ((pbVar13 == (*(byte * PTR32 *)(gen_frame + 0x8))) && ((*(char *)(gen_frame + 0x17)) == '\n')) goto LAB_00c5d32d;
                  F_00c6dda1(_FileHandle,0xffffffff,0xffffffff,1);
                  if ((*(char *)(gen_frame + 0x17)) == '\n') goto LAB_00c5d3a8;
                  goto LAB_00c5d3a4;
                }
                if ((*(char *)(gen_frame + 0x17)) == '\n') {
LAB_00c5d32d: ;
                  _MaxCharCount = uVar7;
                  *pbVar13 = 10;
                }
                else {
                  *pbVar13 = 0xd;
                  *((char *)GEN_TOP((iVar14 + 5 + *piVar6))) = (*(char *)(gen_frame + 0x17));
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
          } while (_MaxCharCount < (*(byte * PTR32 *)(gen_frame + 0xc)));
        }
        (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(((int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0x8)))));
        if (((*(char *)(gen_frame + 0x16)) != '\x01') || ((int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0x8)) == 0)) goto LAB_00c5d4ad;
        bVar2 = pbVar13[-1];
        if ((char)bVar2 < '\0') {
          iVar11 = 1;
          pbVar13 = pbVar13 - 1;
          while ((((&REFG(undefined, 0x134ba38))[(int)(bVar2)] == '\0' && (iVar11 < 5)) && ((*(byte * PTR32 *)(gen_frame + 0x8)) <= pbVar13))) {
            pbVar13 = pbVar13 - 1;
            bVar2 = *pbVar13;
            iVar11 = iVar11 + 1;
          }
          if ((char)(&REFG(undefined, 0x134ba38))[(int)(*pbVar13)] == 0) {
            piVar6 = F_00c51f85();
            *piVar6 = 0x2a;
            goto LAB_00c5d4a9;
          }
          if ((char)(&REFG(undefined, 0x134ba38))[(int)(*pbVar13)] + 1 == iVar11) {
            pbVar13 = pbVar13 + iVar11;
          }
          else if ((*((byte *)GEN_TOP((*piVar6 + 4 + iVar14))) & 0x48) == 0) {
            F_00c6dda1(_FileHandle,-iVar11,-iVar11 >> 0x1f,1);
          }
          else {
            pbVar8 = pbVar13 + 1;
            *((byte *)GEN_TOP((*piVar6 + 5 + iVar14))) = *pbVar13;
            if (1 < iVar11) {
              *((byte *)GEN_TOP((iVar14 + 0x25 + *piVar6))) = *pbVar8;
              pbVar8 = pbVar13 + 2;
            }
            if (iVar11 == 3) {
              *((byte *)GEN_TOP((iVar14 + 0x26 + *piVar6))) = *pbVar8;
              pbVar8 = pbVar8 + 1;
            }
            pbVar13 = pbVar8 - iVar11;
          }
        }
        cbMultiByte = (int)pbVar13 - (int)(*(byte * PTR32 *)(gen_frame + 0x8));
        iVar11 = gen_imp_MultiByteToWideChar(0xfde9,0,(LPCSTR)(*(byte * PTR32 *)(gen_frame + 0x8)),cbMultiByte,_DstBuf,uVar1 >> 1);
        (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP(iVar11));
        if (iVar11 != 0) {
          (*(byte * PTR32 *)(gen_frame + 0xc)) = ((byte *)GEN_TOP((iVar11 * 2)));
          *((uint *)GEN_TOP((iVar14 + 0x30 + *piVar6))) = (uint)(iVar11 != cbMultiByte);
          goto LAB_00c5d4ad;
        }
        uVar12 = gen_imp_GetLastError();
LAB_00c5d4a2: ;
        F_00c51fab(uVar12);
      }
LAB_00c5d4a9: ;
      (*(int *)(gen_frame + 0x4)) = -1;
LAB_00c5d4ad: ;
      if ((*(byte * PTR32 *)(gen_frame + 0x8)) != _DstBuf) {
        F_00c4c68f((*(byte * PTR32 *)(gen_frame + 0x8)));
      }
      if ((*(int *)(gen_frame + 0x4)) == -2) {
        return (int)(*(byte * PTR32 *)(gen_frame + 0xc));
      }
      return (*(int *)(gen_frame + 0x4));
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
GEN_LIB GEN_NOFRAME int F_00c5d658(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5d658u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_FRAME_DECL(0x44, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6570);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc5d664;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6570;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  if ((*(int *)&gen_args[0]) == -2) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
    return -1;
  }
  if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
    iVar3 = (*(int *)&gen_args[0]) >> 5;
    iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
    if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar3)] + 4 + iVar4))) & 1) != 0) {
      if ((*(uint *)&gen_args[2]) < 0x80000000) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar3)] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(int *)(gen_frame + 0x14)) = -1;
        }
        else {
          iVar3 = F_00c5d0a1(_FileHandle_00,(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]));
          (*(int *)(gen_frame + 0x14)) = iVar3;
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c5d746(_FileHandle_00);
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return (*(int *)(gen_frame + 0x14));
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
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return -1;
}

/* ref: FUN_00c5d743 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5d743(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5d743u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp + 8))));
  return;
}

/* ref: FUN_00c5d746 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5d746(GEN_P(int in_ebx, unsigned int gen_a0))
{
  GEN_ENTER(0xc5d746u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebx = (int)gen_a0;)
  F_00c6d8b6(in_ebx);
  return;
}

/* ref: __write_nolock */
GEN_LIB GEN_NOFRAME int F_00c5d74e(GEN_P(int _FileHandle, unsigned int gen_a0), GEN_P(undefined * _Buf, unsigned int gen_a1), GEN_P(uint _MaxCharCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc5d74eu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int _FileHandle = (int)gen_a0;)
  GEN_PIN(undefined * _Buf = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint _MaxCharCount = (uint)gen_a2;)
  GEN_FRAME_DECL(0x11ae8, 8);
  WCHAR WVar1;
  wchar_t * pwVar2;
  wchar_t wVar3;
  ulong * puVar4;
  int * piVar5;
  int iVar6;
  undefined * p_Var7;
  BOOL BVar8;
  WCHAR * pWVar9;
  DWORD DVar10;
  WCHAR * pWVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  gen_size32 _SrcSizeInBytes;
  
  (*(uint *)(gen_frame + 0x11ae0)) = 0xc5d75d;
  (*(uint *)(gen_frame + 0x11ae0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(WCHAR * PTR32 *)(gen_frame + 0x10018)) = _Buf;
  (*(uint *)(gen_frame + 0x1001c)) = 0;
  (*(int *)(gen_frame + 0x10014)) = 0;
  if (_MaxCharCount == 0) {
    return 0;
  }
  if (_Buf == ((undefined *)GEN_TOP(0x0))) {
    puVar4 = F_00c51f98();
    *puVar4 = 0;
    piVar5 = F_00c51f85();
    *piVar5 = 0x16;
    F_00c4c305();
    return -1;
  }
  piVar5 = &REFG(undefined4, 0x15e41a0) + (_FileHandle >> 5);
  iVar16 = (_FileHandle & 0x1fU) * 0x40;
  cVar12 = (char)(*((char *)GEN_TOP((*piVar5 + 0x24 + iVar16))) * '\x02') >> 1;
  (*(int * PTR32 *)(gen_frame + 0x10008)) = piVar5;
  (*(char *)(gen_frame + 0x10023)) = cVar12;
  if (((cVar12 == '\x02') || (cVar12 == '\x01')) && ((~_MaxCharCount & 1) == 0)) {
    puVar4 = F_00c51f98();
    *puVar4 = 0;
    piVar5 = F_00c51f85();
    *piVar5 = 0x16;
    F_00c4c305();
    return -1;
  }
  if ((*((byte *)GEN_TOP((*piVar5 + 4 + iVar16))) & 0x20) != 0) {
    F_00c6dda1(_FileHandle,0,0,2);
  }
  iVar6 = F_00c7adb7(_FileHandle);
  if ((iVar6 == 0) || ((*((byte *)GEN_TOP((iVar16 + 4 + *piVar5))) & 0x80) == 0)) {
LAB_00c5dace: ;
    if ((*((byte *)GEN_TOP((*piVar5 + 4 + iVar16))) & 0x80) == 0) {
      BVar8 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP((*piVar5 + iVar16))),(*(WCHAR * PTR32 *)(gen_frame + 0x10018)),_MaxCharCount,&(*(uint *)(gen_frame + 0x1000c)),
                        (GEN_LPANY)0x0);
      if (BVar8 == 0) {
LAB_00c5ddaf: ;
        DVar10 = gen_imp_GetLastError();
        (*(DWORD *)(gen_frame + 0x10028)) = DVar10;
      }
      else {
        (*(DWORD *)(gen_frame + 0x10028)) = 0;
        (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1000c));
      }
    }
    else {
      (*(DWORD *)(gen_frame + 0x10028)) = 0;
      if ((*(char *)(gen_frame + 0x10023)) == '\0') {
        pWVar9 = (*(WCHAR * PTR32 *)(gen_frame + 0x10018));
        if (_MaxCharCount == 0) goto LAB_00c5ddfa;
        do {
          uVar14 = 0;
          uVar13 = (int)pWVar9 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018));
          pWVar11 = ((WCHAR *)(gen_frame + 0x1002c));
          do {
            if (_MaxCharCount <= uVar13) break;
            WVar1 = *pWVar9;
            pWVar9 = ((WCHAR *)GEN_TOP(((int)pWVar9 + 1)));
            uVar13 = uVar13 + 1;
            (*(WCHAR * PTR32 *)(gen_frame + 0x10004)) = pWVar9;
            if ((char)WVar1 == '\n') {
              (*(int *)(gen_frame + 0x10014)) = (*(int *)(gen_frame + 0x10014)) + 1;
              *(char *)pWVar11 = '\r';
              pWVar11 = ((WCHAR *)GEN_TOP(((int)pWVar11 + 1)));
              uVar14 = uVar14 + 1;
            }
            *(char *)pWVar11 = (char)WVar1;
            pWVar11 = ((WCHAR *)GEN_TOP(((int)pWVar11 + 1)));
            uVar14 = uVar14 + 1;
          } while (uVar14 < 0x13ff);
          BVar8 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP((iVar16 + *(*(int * PTR32 *)(gen_frame + 0x10008))))),((WCHAR *)(gen_frame + 0x1002c)),
                            (int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x1002c)),&(*(uint *)(gen_frame + 0x1000c)),(GEN_LPANY)0x0);
          if (BVar8 == 0) goto LAB_00c5ddaf;
          (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + (*(uint *)(gen_frame + 0x1000c));
        } while (((int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x1002c)) <= (int)(*(uint *)(gen_frame + 0x1000c))) &&
                ((uint)((int)pWVar9 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018))) < _MaxCharCount));
      }
      else if ((*(char *)(gen_frame + 0x10023)) == '\x02') {
        pWVar9 = (*(WCHAR * PTR32 *)(gen_frame + 0x10018));
        if (_MaxCharCount == 0) goto LAB_00c5ddfa;
        do {
          (*(uint *)(gen_frame + 0x10024)) = 0;
          uVar13 = (int)pWVar9 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018));
          pWVar11 = ((WCHAR *)(gen_frame + 0x1002c));
          do {
            if (_MaxCharCount <= uVar13) break;
            WVar1 = *pWVar9;
            pWVar9 = pWVar9 + 1;
            uVar13 = uVar13 + 2;
            (*(WCHAR * PTR32 *)(gen_frame + 0x10004)) = pWVar9;
            if (WVar1 == L'\n') {
              (*(int *)(gen_frame + 0x10014)) = (*(int *)(gen_frame + 0x10014)) + 2;
              *pWVar11 = L'\r';
              pWVar11 = pWVar11 + 1;
              (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 2;
            }
            uVar14 = (*(uint *)(gen_frame + 0x10024)) + 2;
            (*(uint *)(gen_frame + 0x10024)) = uVar14;
            *pWVar11 = WVar1;
            pWVar11 = pWVar11 + 1;
          } while (uVar14 < 0x13fe);
          BVar8 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP((iVar16 + *(*(int * PTR32 *)(gen_frame + 0x10008))))),((WCHAR *)(gen_frame + 0x1002c)),
                            (int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x1002c)),&(*(uint *)(gen_frame + 0x1000c)),(GEN_LPANY)0x0);
          if (BVar8 == 0) goto LAB_00c5ddaf;
          (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + (*(uint *)(gen_frame + 0x1000c));
        } while (((int)pWVar11 - (int)((WCHAR *)(gen_frame + 0x1002c)) <= (int)(*(uint *)(gen_frame + 0x1000c))) &&
                ((uint)((int)pWVar9 - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018))) < _MaxCharCount));
      }
      else {
        (*(WCHAR * PTR32 *)(gen_frame + 0x10010)) = (*(WCHAR * PTR32 *)(gen_frame + 0x10018));
        if (_MaxCharCount == 0) goto LAB_00c5ddfa;
        do {
          (*(uint *)(gen_frame + 0x10024)) = 0;
          uVar13 = (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10010)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018));
          pWVar9 = ((WCHAR *)(gen_frame + 0x1142c));
          do {
            if (_MaxCharCount <= uVar13) break;
            WVar1 = *(*(WCHAR * PTR32 *)(gen_frame + 0x10010));
            (*(WCHAR * PTR32 *)(gen_frame + 0x10010)) = (*(WCHAR * PTR32 *)(gen_frame + 0x10010)) + 1;
            uVar13 = uVar13 + 2;
            if (WVar1 == L'\n') {
              *pWVar9 = L'\r';
              pWVar9 = pWVar9 + 1;
              (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 2;
            }
            uVar14 = (*(uint *)(gen_frame + 0x10024)) + 2;
            (*(uint *)(gen_frame + 0x10024)) = uVar14;
            *pWVar9 = WVar1;
            pWVar9 = pWVar9 + 1;
          } while (uVar14 < 0x6a8);
          iVar15 = 0;
          iVar6 = gen_imp_WideCharToMultiByte(0xfde9,0,((WCHAR *)(gen_frame + 0x1142c)),((int)pWVar9 - (int)((WCHAR *)(gen_frame + 0x1142c))) / 2,
                                      ((CHAR *)(gen_frame + 0x106d4)),0xd55,(LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar6 == 0) goto LAB_00c5ddaf;
          do {
            BVar8 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP((iVar16 + *(*(int * PTR32 *)(gen_frame + 0x10008))))),((CHAR *)(gen_frame + 0x106d4)) + iVar15,iVar6 - iVar15,
                              &(*(uint *)(gen_frame + 0x1000c)),(GEN_LPANY)0x0);
            if (BVar8 == 0) {
              DVar10 = gen_imp_GetLastError();
              (*(DWORD *)(gen_frame + 0x10028)) = DVar10;
              break;
            }
            iVar15 = iVar15 + (*(uint *)(gen_frame + 0x1000c));
          } while (iVar15 < iVar6);
        } while ((iVar6 <= iVar15) &&
                ((*(uint *)(gen_frame + 0x1001c)) = (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10010)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)),
                (uint)((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10010)) - (int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018))) < _MaxCharCount));
      }
    }
LAB_00c5ddbb: ;
    if ((*(uint *)(gen_frame + 0x1001c)) != 0) {
      return (*(uint *)(gen_frame + 0x1001c)) - (*(int *)(gen_frame + 0x10014));
    }
  }
  else {
    p_Var7 = F_00c5b37a();
    pwVar2 = (*((wchar_t * PTR32 *)GEN_TOP((((((char *)(*(undefined * PTR32 *)(((char *)(p_Var7) + 108))) + 16) + (0) * 16) + 4)))));
    BVar8 = gen_imp_GetConsoleMode(*((HANDLE *)GEN_TOP((iVar16 + *piVar5))),(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10004)));
    if ((BVar8 == 0) || ((pwVar2 == ((wchar_t *)GEN_TOP(0x0)) && ((*(char *)(gen_frame + 0x10023)) == '\0')))) goto LAB_00c5dace;
    pWVar9 = ((WCHAR *)GEN_TOP(gen_imp_GetConsoleCP()));
    (*(WCHAR * PTR32 *)(gen_frame + 0x10004)) = pWVar9;
    (*(WCHAR * PTR32 *)(gen_frame + 0x10010)) = ((WCHAR *)GEN_TOP(0x0));
    if (_MaxCharCount != 0) {
      (*(uint *)(gen_frame + 0x10024)) = 0;
      pWVar9 = (*(WCHAR * PTR32 *)(gen_frame + 0x10018));
      do {
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x10008));
        if ((*(char *)(gen_frame + 0x10023)) == '\0') {
          cVar12 = (char)*pWVar9;
          (*(uint *)(gen_frame + 0x10000)) = (uint)(cVar12 == '\n');
          iVar6 = *(*(int * PTR32 *)(gen_frame + 0x10008)) + iVar16;
          if (*((int *)GEN_TOP((iVar6 + 0x38))) == 0) {
            iVar6 = F_00c6e020((int)cVar12);
            if (iVar6 == 0) {
              _SrcSizeInBytes = 1;
              pWVar11 = pWVar9;
              goto LAB_00c5d935;
            }
            if (((char *)GEN_TOP(((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) + (_MaxCharCount - (int)pWVar9)))) < ((char *)GEN_TOP(0x2))) {
              (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 1;
              *((char *)GEN_TOP((iVar16 + 0x34 + *piVar5))) = (char)*pWVar9;
              *((undefined4 *)GEN_TOP((iVar16 + 0x38 + *piVar5))) = 1;
              break;
            }
            iVar6 = F_00c7b31a((wchar_t *)&(*(DWORD *)(gen_frame + 0x10028)),(char *)pWVar9,2);
            if (iVar6 == -1) break;
            pWVar9 = ((WCHAR *)GEN_TOP(((int)pWVar9 + 1)));
            (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
          }
          else {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ad8)) + 0)) = *((CHAR *)GEN_TOP((iVar6 + 0x34)));
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ad8)) + 1)) = cVar12;
            *((undefined4 *)GEN_TOP((iVar6 + 0x38))) = 0;
            _SrcSizeInBytes = 2;
            pWVar11 = &(*(undefined2 *)(gen_frame + 0x11ad8));
LAB_00c5d935: ;
            iVar6 = F_00c7b31a((wchar_t *)&(*(DWORD *)(gen_frame + 0x10028)),(char *)pWVar11,_SrcSizeInBytes);
            if (iVar6 == -1) break;
          }
          pWVar9 = ((WCHAR *)GEN_TOP(((int)pWVar9 + 1)));
          (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 1;
          DVar10 = gen_imp_WideCharToMultiByte((UINT)(*(WCHAR * PTR32 *)(gen_frame + 0x10004)),0,(LPCWSTR)&(*(DWORD *)(gen_frame + 0x10028)),1,(LPSTR)&(*(undefined2 *)(gen_frame + 0x11ad8)),5,
                                       (LPCSTR)0x0,(LPBOOL)0x0);
          if (DVar10 == 0) break;
          BVar8 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP((iVar16 + *(*(int * PTR32 *)(gen_frame + 0x10008))))),&(*(undefined2 *)(gen_frame + 0x11ad8)),DVar10,(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10010)),
                            (GEN_LPANY)0x0);
          if (BVar8 == 0) goto LAB_00c5ddaf;
          (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x10024)) + (*(int *)(gen_frame + 0x10014));
          if ((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10010)) < (int)DVar10) break;
          if ((*(uint *)(gen_frame + 0x10000)) != 0) {
            iVar6 = *(*(int * PTR32 *)(gen_frame + 0x10008));
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x11ad8)) + 0)) = '\r';
            BVar8 = gen_imp_WriteFile(*((HANDLE *)GEN_TOP((iVar16 + iVar6))),&(*(undefined2 *)(gen_frame + 0x11ad8)),1,(LPDWORD)&(*(WCHAR * PTR32 *)(gen_frame + 0x10010)),
                              (GEN_LPANY)0x0);
            if (BVar8 == 0) goto LAB_00c5ddaf;
            if ((int)(*(WCHAR * PTR32 *)(gen_frame + 0x10010)) < 1) break;
            (*(int *)(gen_frame + 0x10014)) = (*(int *)(gen_frame + 0x10014)) + 1;
            (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 1;
          }
        }
        else {
          if (((*(char *)(gen_frame + 0x10023)) == '\x01') || ((*(char *)(gen_frame + 0x10023)) == '\x02')) {
            WVar1 = *pWVar9;
            (*(uint *)(gen_frame + 0x10000)) = (uint)((ushort)WVar1 == 10);
            pWVar9 = pWVar9 + 1;
            (*(uint *)(gen_frame + 0x10024)) = (*(uint *)(gen_frame + 0x10024)) + 2;
            (*(DWORD *)(gen_frame + 0x10028)) = (uint)(ushort)WVar1;
          }
          if (((*(char *)(gen_frame + 0x10023)) == '\x01') || ((*(char *)(gen_frame + 0x10023)) == '\x02')) {
            wVar3 = F_00c7b5f1((wchar_t)(*(DWORD *)(gen_frame + 0x10028)));
            if (wVar3 != (wchar_t)(*(DWORD *)(gen_frame + 0x10028))) goto LAB_00c5ddaf;
            (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 2;
            if ((*(uint *)(gen_frame + 0x10000)) != 0) {
              (*(DWORD *)(gen_frame + 0x10028)) = 0xd;
              wVar3 = F_00c7b5f1(L'\r');
              if (wVar3 != (wchar_t)(*(DWORD *)(gen_frame + 0x10028))) goto LAB_00c5ddaf;
              (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 1;
              (*(int *)(gen_frame + 0x10014)) = (*(int *)(gen_frame + 0x10014)) + 1;
            }
          }
        }
      } while ((*(uint *)(gen_frame + 0x10024)) < _MaxCharCount);
      goto LAB_00c5ddbb;
    }
  }
  if ((*(DWORD *)(gen_frame + 0x10028)) != 0) {
    if ((*(DWORD *)(gen_frame + 0x10028)) == 5) {
      piVar5 = F_00c51f85();
      *piVar5 = 9;
      puVar4 = F_00c51f98();
      *puVar4 = 5;
      return -1;
    }
    F_00c51fab((*(DWORD *)(gen_frame + 0x10028)));
    return -1;
  }
LAB_00c5ddfa: ;
  if (((*((byte *)GEN_TOP((iVar16 + 4 + *(*(int * PTR32 *)(gen_frame + 0x10008))))) & 0x40) != 0) && ((char)*(*(WCHAR * PTR32 *)(gen_frame + 0x10018)) == '\x1a')) {
    return 0;
  }
  piVar5 = F_00c51f85();
  *piVar5 = 0x1c;
  puVar4 = F_00c51f98();
  *puVar4 = 0;
  return -1;
}

/* ref: __write */
GEN_LIB GEN_NOFRAME int F_00c5de4b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5de4bu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_FRAME_DECL(0x44, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6590);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc5de57;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6590;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (int)(uintptr_t)gen_eh_resume(); }
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
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar3)] + 4 + iVar4))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar3)] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(int *)(gen_frame + 0x14)) = -1;
        }
        else {
          iVar3 = F_00c5d74e(_FileHandle_00,(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)&gen_args[2]));
          (*(int *)(gen_frame + 0x14)) = iVar3;
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c5df17(_FileHandle_00);
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return (*(int *)(gen_frame + 0x14));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return -1;
}

/* ref: FUN_00c5df14 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5df14(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5df14u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp + 8))));
  return;
}

/* ref: FUN_00c5df17 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5df17(GEN_P(int in_ebx, unsigned int gen_a0))
{
  GEN_ENTER(0xc5df17u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebx = (int)gen_a0;)
  F_00c6d8b6(in_ebx);
  return;
}

/* ref: __freebuf */
GEN_LIB GEN_NOFRAME unsigned int F_00c5df1f(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc5df1fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  if ((((*(int *)(((char *)(_File) + 12))) & 0x83U) != 0) && (((*(int *)(((char *)(_File) + 12))) & 8U) != 0)) {
    F_00c4c68f((*(char * PTR32 *)(((char *)(_File) + 8))));
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xfffffbf7;
    (*(char * PTR32 *)((char *)(_File))) = ((char *)GEN_TOP(0x0));
    (*(char * PTR32 *)(((char *)(_File) + 8))) = ((char *)GEN_TOP(0x0));
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  return 0;
}

/* ref: __stbuf */
GEN_LIB GEN_NOFRAME int F_00c5df50(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc5df50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
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
  if (_File == ((undefined *)GEN_TOP((uVar4 + 0x20)))) {
    iVar3 = 0;
  }
  else {
    uVar4 = F_00c50860();
    if (_File != ((undefined *)GEN_TOP((uVar4 + 0x40)))) {
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
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      (*(char * PTR32 *)(((char *)(_File) + 8))) = (char *)&(*(int *)(((char *)(_File) + 20)));
      (*(char * PTR32 *)((char *)(_File))) = (char *)&(*(int *)(((char *)(_File) + 20)));
      (*(int *)(((char *)(_File) + 24))) = 2;
      (*(int *)(((char *)(_File) + 4))) = 2;
      goto LAB_00c5dfd9;
    }
  }
  pcVar2 = ((char *)GEN_TOP(*piVar1));
  (*(char * PTR32 *)(((char *)(_File) + 8))) = pcVar2;
  (*(char * PTR32 *)((char *)(_File))) = pcVar2;
  (*(int *)(((char *)(_File) + 24))) = 0x1000;
  (*(int *)(((char *)(_File) + 4))) = 0x1000;
LAB_00c5dfd9: ;
  (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x1102;
  return 1;
}

/* ref: __ftbuf */
GEN_LIB GEN_NOFRAME unsigned int F_00c5dfec(GEN_P(int _Flag, unsigned int gen_a0), GEN_P(undefined * _File, unsigned int gen_a1))
{
  GEN_ENTER(0xc5dfecu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int _Flag = (int)gen_a0;)
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a1;)
  if ((_Flag != 0) && (((*(int *)(((char *)(_File) + 12))) & 0x1000U) != 0)) {
    F_00c50d59(_File);
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffeeff;
    (*(int *)(((char *)(_File) + 24))) = 0;
    (*(char * PTR32 *)((char *)(_File))) = ((char *)GEN_TOP(0x0));
    (*(char * PTR32 *)(((char *)(_File) + 8))) = ((char *)GEN_TOP(0x0));
  }
  return;
}

/* ref: vfprintf_helper */
GEN_LIB GEN_NOFRAME uint F_00c5e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5e020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x48, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
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
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f65b0);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc5e02c;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f65b0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) || ((*(int *)&gen_args[2]) == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    return 0xffffffff;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar2 >> 5)])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar2 >> 5)])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c5e0e5;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  }
LAB_00c5e0e5: ;
  if ((*(uint *)(gen_frame + 0x10)) == 0) {
    _Flag = F_00c5df50(_File);
    uVar2 = (((code *)GEN_TOP((*(gen_code32 *)&gen_args[0]))))(_File,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    (*(uint *)(gen_frame + 0x10)) = uVar2;
    F_00c5dfec(_Flag,_File);
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c5e121((gen_frame + 0x2c));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00c5e121 */
GEN_LIB GEN_NOFRAME uint F_00c5e121(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5e121u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 0xc))));
  return extraout_EAX;
}

/* ref: FID_conflict:__vfprintf_l */
GEN_LIB GEN_NOFRAME int F_00c5e12b(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc5e12bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc56a1d)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vfprintf_s_l_00c5e14b */
GEN_LIB GEN_NOFRAME int F_00c5e14b(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc5e14bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5784c)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vfprintf_s_l_00c5e16b */
GEN_LIB GEN_NOFRAME int F_00c5e16b(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc5e16bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5867b)),_File,_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e18b */
GEN_LIB GEN_NOFRAME int F_00c5e18b(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc5e18bu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc56a1d)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e1aa */
GEN_LIB GEN_NOFRAME int F_00c5e1aa(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc5e1aau, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5784c)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vfprintf_00c5e1c9 */
GEN_LIB GEN_NOFRAME int F_00c5e1c9(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(char * _Format, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc5e1c9u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Format = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c5e020(((code *)REFP(0xc5867b)),_File,_Format,0,_ArgList);
  return uVar1;
}

/* ref: __openfile */
GEN_LIB GEN_NOFRAME undefined * F_00c5e1e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return ((undefined *)GEN_TOP(0x0));
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
      iVar8 = F_00c7b87d(puVar11,(uchar *)((char *)REFP(0x111a3bc)),5);
      if (iVar8 == 0) {
        puVar11 = puVar12 + 6;
        _OpenFlag = _OpenFlag | 0x40000;
      }
      else {
        iVar8 = F_00c7b87d(puVar11,(uchar *)((char *)REFP(0x111a3c4)),8);
        if (iVar8 == 0) {
          puVar11 = puVar12 + 9;
          _OpenFlag = _OpenFlag | 0x20000;
        }
        else {
          iVar8 = F_00c7b87d(puVar11,(uchar *)((char *)REFP(0x111a3d0)),7);
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
      return ((undefined *)GEN_TOP(0x0));
    }
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 12))))) = local_8;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4))))) = 0;
    (*(char * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[3])))) = ((char *)GEN_TOP(0x0));
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 8))))) = ((char *)GEN_TOP(0x0));
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 28))))) = ((char *)GEN_TOP(0x0));
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 16))))) = (int)(*(char * PTR32 *)&gen_args[1]);
    return (*(undefined * PTR32 *)&gen_args[3]);
  }
LAB_00c5e426: ;
  piVar7 = F_00c51f85();
  *piVar7 = 0x16;
  F_00c4c305();
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: __getstream */
GEN_LIB GEN_NOFRAME undefined * F_00c5e47f(void)
{
  GEN_ENTER(0xc5e47fu, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x34, 12);
  int * piVar1;
  uint uVar2;
  undefined * _File;
  int iVar3;
  undefined * pvVar4;
  BOOL BVar5;
  int _Index;
  undefined * pFVar6;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f65d0);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc5e48b;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f65d0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  pFVar6 = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(0x0));
  F_00c5aa4f(1);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  _Index = 0;
  do {
    (*(int *)(gen_frame + 0x10)) = _Index;
    if (REFG(int, 0x15e52c0) <= _Index) {
LAB_00c5e578: ;
      if (pFVar6 != ((undefined *)GEN_TOP(0x0))) {
        (*(int *)(((char *)(pFVar6) + 12))) = (*(int *)(((char *)(pFVar6) + 12))) & 0x8000;
        (*(int *)(((char *)(pFVar6) + 4))) = 0;
        (*(char * PTR32 *)(((char *)(pFVar6) + 8))) = ((char *)GEN_TOP(0x0));
        (*(char * PTR32 *)((char *)(pFVar6))) = ((char *)GEN_TOP(0x0));
        (*(char * PTR32 *)(((char *)(pFVar6) + 28))) = ((char *)GEN_TOP(0x0));
        (*(int *)(((char *)(pFVar6) + 16))) = -1;
      }
      (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
      F_00c5e5a9();
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return pFVar6;
    }
    piVar1 = ((int *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4)));
    if (*piVar1 == 0) {
      pvVar4 = F_00c54c2e(0x38);
      *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4))) = pvVar4;
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) {
        BVar5 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(*((int *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4))) + 0x20),4000);
        if (BVar5 == 0) {
          F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4))));
          *((undefined4 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4))) = 0;
        }
        else {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4))) + 0x20));
          pFVar6 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4)));
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = pFVar6;
          (*(int *)(((char *)(pFVar6) + 12))) = 0;
        }
      }
      goto LAB_00c5e578;
    }
    uVar2 = *((uint *)GEN_TOP((*piVar1 + 0xc)));
    if (((uVar2 & 0x83) == 0) && ((uVar2 & 0x8000) == 0)) {
      if (_Index - 3U < 0x11) {
        iVar3 = F_00c5a98d(_Index + 0x10);
        if (iVar3 == 0) goto LAB_00c5e578;
      }
      F_00c50978(_Index,*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4))));
      _File = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4)));
      if (((*(int *)(((char *)(_File) + 12))) & 0x83) == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = _File;
        pFVar6 = _File;
        goto LAB_00c5e578;
      }
      F_00c509e6(_Index,_File);
    }
    _Index = _Index + 1;
  } while( true );
}

/* ref: FUN_00c5e5a6 */
GEN_LIB GEN_NOFRAME uint F_00c5e5a6(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc5e5a6u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: FUN_00c5e5a9 */
GEN_LIB GEN_NOFRAME uint F_00c5e5a9(void)
{
  GEN_ENTER(0xc5e5a9u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __local_unwind4 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_FRAME_DECL(0x38, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x2c);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (*(uint * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x10)) = (*(int *)&gen_args[1]);
  (*(uint volatile *)(gen_frame + 0xc)) = (*(uint *)&gen_args[2]);
  (*(uint volatile *)(gen_frame + 0x8)) = (*(uint *)&gen_args[2]);
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xc5e650));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x0)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  while( true ) {
    uVar2 = *((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc)));
    if ((uVar2 == 0xfffffffe) || (((*(uint *)&gen_args[2]) != 0xfffffffe && (uVar2 <= (*(uint *)&gen_args[2]))))) break;
    puVar1 = ((undefined4 *)GEN_TOP(((*((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 8))) ^ *(*(uint * PTR32 *)&gen_args[0])) + 0x10 + uVar2 * 0xc)));
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) = *puVar1;
    if (puVar1[1] == 0) {
      F_00c6fab5(puVar1[2],0x101);
      F_00c6fad4(puVar1[2]);
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x0));
  return 0;
}

/* ref: FUN_00c5e650 */
GEN_LIB GEN_NOFRAME uint F_00c5e650(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5e650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = 1;
  if ((*((uint *)GEN_TOP((param_1 + 4))) & 6) != 0) {
    F_00c5e5c0(*((undefined4 *)GEN_TOP((param_2 + 0x14))),*((undefined4 *)GEN_TOP((param_2 + 0x10))),
                    *((undefined4 *)GEN_TOP((param_2 + 0xc))));
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: Global::__seh_longjmp_unwind4@4 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00c5e696(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5e696u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  F_00c5e5c0(*((undefined4 *)GEN_TOP((param_1 + 0x28))),*((undefined4 *)GEN_TOP((param_1 + 0x18))),
                  *((undefined4 *)GEN_TOP((param_1 + 0x1c))));
  return;
}

/* ref: _EH4_CallFilterFunc */
GEN_LIB GEN_NOFRAME uint GEN_FASTCALL F_00c5e6b2(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5e6b2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = (*param_1)();
  return uVar1;
}

/* ref: _EH4_TransferToHandler */
GEN_LIB GEN_NOFRAME unsigned int GEN_FASTCALL F_00c5e6c9(GEN_P(code * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5e6c9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00c6fab5(param_1,1);
  (*param_1)(0);
  return 0;
}

/* ref: _EH4_GlobalUnwind2 */
GEN_LIB GEN_FRAME unsigned int GEN_FASTCALL F_00c5e6e2(GEN_P(PVOID param_1, unsigned int gen_a0), GEN_P(GEN_LPANY param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5e6e2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(PVOID param_1 = (PVOID)gen_a0;)
  GEN_PIN(GEN_LPANY param_2 = (GEN_LPANY)gen_a1;)
  gen_imp_RtlUnwind(param_1,(PVOID)0xc5e6f6,param_2,(PVOID)0x0);
  return;
}

/* ref: _EH4_LocalUnwind */
GEN_LIB GEN_NOFRAME unsigned int GEN_FASTCALL F_00c5e6fb(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc5e6fbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00c5e5c0(param_4,param_1,param_2);
  return;
}

/* ref: FUN_00c5e712 */
GEN_LIB GEN_NOFRAME uint F_00c5e712(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5e712u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = -(uint)(param_1 != 0) & REFG(undefined4, 0x15e42a0);
  REFG(undefined4, 0x15e418c) = uVar1;
  return uVar1;
}

/* ref: FUN_00c5e72b */
GEN_LIB GEN_NOFRAME uint F_00c5e72b(void)
{
  GEN_ENTER(0xc5e72bu, 0u, 0u, 0u, 0u);
  BOOL BVar1;
  
  BVar1 = gen_imp_IsProcessorFeaturePresent(10);
  REFG(undefined4, 0x15e418c) = BVar1;
  return 0;
}

/* ref: FUN_00c5e740 */
GEN_LIB GEN_FRAME float10 F_00c5e740(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc5e740u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  double in_xmm0;
  float10 fVar1;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c5e75e(in_xmm0,(int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c5e75e */
GEN_LIB GEN_NOFRAME float10 F_00c5e75e(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc5e75eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  double in_xmm0 = (double)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL(0xc, 4);
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
    uVar2 = (uint)(ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x34);
    dVar7 = gen_bits2d((ulonglong)gen_d2bits(in_xmm0) &
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a3e0)) |
                       (ulonglong)gen_d2bits(REFG(double, 0x111a450)));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits(in_xmm0) & *(ulonglong *)&REFG(undefined, 0x111a3e8) |
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
      (*(double *)(gen_frame + 0x0)) = dVar7;
      return (float10)dVar7;
    }
    dVar7 = gen_bits2d(-(ulonglong)
                        (*(double *)&REFG(undefined, 0x111a460) == gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0])))));
    if ((short)(ulonglong)gen_d2bits(dVar7) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (REFG(double, 0x111a450) ==
            gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0])) & (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x111a3e0)) |
                       (ulonglong)gen_d2bits(REFG(double, 0x111a450)))) {
          return (float10)*(double *)&REFG(undefined, 0x111a488);
        }
        uVar6 = 0x3e9;
        dVar7 = *(double *)&REFG(undefined, 0x111a3e0);
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) || ((*(int *)&gen_args[0]) == 0 && ((*(uint *)&gen_args[1]) & 0xfffff) == 0)) {
        dVar7 = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_00c5e96a;
    }
    in_xmm0 = gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0]))) * REFG(double, 0x111a470);
    iVar4 = -0x34;
  }
  uVar6 = 8;
  dVar7 = REFG(double, 0x111a480);
LAB_00c5e96a: ;
  (*(double *)(gen_frame + 0x0)) = dVar7;
  F_00c6bf0e(&(*(int *)&gen_args[0]),&(*(int *)&gen_args[0]),&(*(double *)(gen_frame + 0x0)),uVar6);
  return (float10)(*(double *)(gen_frame + 0x0));
}

/* ref: FUN_00c5eb11 */
GEN_LIB GEN_NOFRAME float10 F_00c5eb11(GEN_P(char in_cl, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc5eb11u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(char in_cl = (char)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  if (in_cl == '\0') {
    return *(float10 *)&REFG(undefined, 0x111ad00);
  }
  return (float10)0;
}

/* ref: __trandisp1 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5ebd0(GEN_P(int in_edx, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1), GEN_P(int in_ebp, unsigned int gen_a2))
{
  GEN_ENTER(0xc5ebd0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  GEN_PIN(int in_edx = (int)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  GEN_PIN(int in_ebp = (int)gen_a2;)
  byte bVar1;
  float10 fVar2;
  char cVar3;
  undefined4 in_ECX = 0;
  undefined2 uVar4;
  
  if (*((char *)GEN_TOP((in_edx + 0xe))) == '\x05') {
    uVar4 = (undefined2)
            CONCAT31((uint3)((byte)((ushort)*((undefined2 *)GEN_TOP((in_ebp - 0xa4))) >> 8) & 0xfe | 2),0x3f);
  }
  else {
    uVar4 = 0x133f;
  }
  *((undefined2 *)GEN_TOP((in_ebp - 0xa2))) = uVar4;
  gen_set_x87_cw((unsigned short)*((undefined2 *)GEN_TOP((in_ebp - 0xa2))));
  fVar2 = (float10)0;
  *((int *)GEN_TOP((in_ebp - 0x94))) = in_edx;
  *((ushort *)GEN_TOP((in_ebp - 0xa0))) =
       (ushort)GEN_ISNAN(in_st0) << 8 | (ushort)(in_st0 < fVar2) << 9 | (ushort)(in_st0 != fVar2) << 10 |
       (ushort)(in_st0 == fVar2) << 0xe;
  *((undefined1 *)GEN_TOP((in_ebp - 0x90))) = 0;
  cVar3 = (char)(*((char *)GEN_TOP((in_ebp - 0x9f))) << 1) >> 1;
  bVar1 = cVar3 << 1;
  ((code *)*((gen_code32 *)GEN_TOP((in_edx + (char)(&REFG(undefined, 0x111ad7c))[(int)(bVar1 & 0xf | cVar3 < '\0')] + 0x10))))
            (CONCAT31((int3)((uint)in_ECX >> 8),bVar1) & 0x404);
  return 0;
}

/* ref: FUN_00c5ecd4 */
GEN_LIB GEN_NOFRAME float10 F_00c5ecd4(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc5ecd4u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  return (float10)0;
}

/* ref: FUN_00c5ecdd */
GEN_LIB GEN_NOFRAME float10 F_00c5ecdd(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc5ecddu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  return (float10)1;
}

/* ref: FUN_00c5ece2 */
GEN_LIB GEN_NOFRAME float10 F_00c5ece2(GEN_P(float10 in_st0, double gen_a0), GEN_P(int in_ebp, unsigned int gen_a1))
{
  GEN_ENTER(0xc5ece2u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  GEN_PIN(int in_ebp = (int)gen_a1;)
  *((float10 *)GEN_TOP((in_ebp - 0x9e))) = in_st0;
  if ((*((byte *)GEN_TOP((in_ebp - 0x97))) & 0x40) != 0) {
    *((undefined1 *)GEN_TOP((in_ebp - 0x90))) = 7;
    return *((float10 *)GEN_TOP((in_ebp - 0x9e)));
  }
  *((undefined1 *)GEN_TOP((in_ebp - 0x90))) = 1;
  return GEN_X87(*((float10 *)GEN_TOP((in_ebp - 0x9e))) + (float10)*(double *)&REFG(undefined, 0x111ad74));
}

/* ref: FUN_00c5ed0f */
GEN_LIB GEN_NOFRAME unsigned int F_00c5ed0f(GEN_P(float10 in_st0, double gen_a0), GEN_P(int in_ebp, unsigned int gen_a1))
{
  GEN_ENTER(0xc5ed0fu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  GEN_PIN(int in_ebp = (int)gen_a1;)
  *((float10 *)GEN_TOP((in_ebp - 0x9e))) = in_st0;
  if ((*((byte *)GEN_TOP((in_ebp - 0x97))) & 0x40) == 0) {
    *((undefined1 *)GEN_TOP((in_ebp - 0x90))) = 1;
  }
  else {
    *((undefined1 *)GEN_TOP((in_ebp - 0x90))) = 7;
  }
  return;
}

/* ref: FUN_00c5ed76 */
GEN_LIB GEN_NOFRAME float10 F_00c5ed76(GEN_P(undefined1 in_cl, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1), GEN_P(int in_ebp, unsigned int gen_a2))
{
  GEN_ENTER(0xc5ed76u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  GEN_PIN(undefined1 in_cl = (undefined1)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  GEN_PIN(int in_ebp = (int)gen_a2;)
  float10 fVar1;
  
  fVar1 = *(float10 *)&REFG(undefined, 0x111ad60);
  if (*((char *)GEN_TOP((in_ebp - 0x90))) < '\x01') {
    *((undefined1 *)GEN_TOP((in_ebp - 0x90))) = 1;
  }
  return fVar1;
}

/* ref: FUN_00c5ed93 */
GEN_LIB GEN_NOFRAME unsigned int F_00c5ed93(GEN_P(char in_cl, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc5ed93u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(char in_cl = (char)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  return;
}

/* ref: Global::__load_CW */
GEN_LIB GEN_NOFRAME unsigned int F_00c5edb5(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5edb5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  gen_set_x87_cw((unsigned short)(ushort)param_1 & 0x300 | 0x7f);
  return;
}

/* ref: Global::__convertTOStoQNaN */
GEN_LIB GEN_NOFRAME uint F_00c5edcc(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc5edccu, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  if ((in_eax & 0x80000) != 0) {
    return 7;
  }
  return 1;
}

/* ref: __fload_withFB */
GEN_LIB GEN_NOFRAME uint F_00c5ede5(GEN_P(int in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xc5ede5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_edx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_edx + 4))) & 0x7ff00000;
  if (uVar1 != 0x7ff00000) {
    return uVar1;
  }
  return *((uint *)GEN_TOP((in_edx + 4)));
}

/* ref: Global::__checkTOS_withFB */
GEN_LIB GEN_NOFRAME uint F_00c5ee28(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc5ee28u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

/* ref: Global::__startTwoArgErrorHandling */
GEN_LIB GEN_FRAME float10 F_00c5ef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc5ef30u, gen_a0, gen_a1, gen_a2, (unsigned int)gen_trace_d(gen_a3));
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 in_edx = (undefined4)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  unsigned int gen_args[6];
  gen_args[0] = gen_a4;
  gen_args[1] = gen_a5;
  gen_args[2] = gen_a6;
  gen_args[3] = gen_a7;
  gen_args[4] = gen_a8;
  gen_args[5] = gen_a9;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  
  (*(undefined4 *)(gen_frame + 0x0)) = in_eax;
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(double *)(gen_frame + 0x18)) = (double)in_st0;
  (*(undefined4 *)(gen_frame + 0x4)) = in_ecx;
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[3]);
  F_00c7b9fd(in_edx,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((short)(*(undefined4 *)&gen_args[0]) != 0x27f) {
    gen_set_x87_cw((unsigned short)(short)(*(undefined4 *)&gen_args[0]));
  }
  return (float10)(*(double *)(gen_frame + 0x18));
}

/* ref: __startOneArgErrorHandling */
GEN_LIB GEN_FRAME float10 F_00c5ef47(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc5ef47u, gen_a0, gen_a1, gen_a2, (unsigned int)gen_trace_d(gen_a3));
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 in_edx = (undefined4)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  unsigned int gen_args[4];
  gen_args[0] = gen_a4;
  gen_args[1] = gen_a5;
  gen_args[2] = gen_a6;
  gen_args[3] = gen_a7;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  
  (*(undefined4 *)(gen_frame + 0x0)) = in_eax;
  (*(double *)(gen_frame + 0x18)) = (double)in_st0;
  (*(undefined4 *)(gen_frame + 0x4)) = in_ecx;
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)&gen_args[3]);
  F_00c7b9fd(in_edx,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((short)(*(undefined4 *)&gen_args[0]) != 0x27f) {
    gen_set_x87_cw((unsigned short)(short)(*(undefined4 *)&gen_args[0]));
  }
  return (float10)(*(double *)(gen_frame + 0x18));
}

/* ref: __get_lc_time */
GEN_LIB GEN_NOFRAME uint F_00c5ef83(GEN_P(undefined * in_eax, unsigned int gen_a0), GEN_P(undefined * in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xc5ef83u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * in_eax = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x10, 0);
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
  if (in_ecx == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0xffffffff;
  }
  else {
    (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = in_eax;
    uVar2 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x31,((undefined *)GEN_TOP(((int)in_ecx + 4))));
    uVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x32,((undefined *)GEN_TOP(((int)in_ecx + 8))));
    uVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x33,((undefined *)GEN_TOP(((int)in_ecx + 0xc))));
    uVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x34,((undefined *)GEN_TOP(((int)in_ecx + 0x10))));
    uVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x35,((undefined *)GEN_TOP(((int)in_ecx + 0x14))));
    uVar7 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x36,((undefined *)GEN_TOP(((int)in_ecx + 0x18))));
    uVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x37,in_ecx);
    uVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2a,((undefined *)GEN_TOP(((int)in_ecx + 0x20))));
    uVar10 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2b,((undefined *)GEN_TOP(((int)in_ecx + 0x24))));
    uVar11 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2c,((undefined *)GEN_TOP(((int)in_ecx + 0x28))));
    uVar12 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2d,((undefined *)GEN_TOP(((int)in_ecx + 0x2c))));
    uVar13 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2e,((undefined *)GEN_TOP(((int)in_ecx + 0x30))));
    uVar14 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x2f,((undefined *)GEN_TOP(((int)in_ecx + 0x34))));
    uVar15 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x30,((undefined *)GEN_TOP(((int)in_ecx + 0x1c))));
    uVar16 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x44,((undefined *)GEN_TOP(((int)in_ecx + 0x38))));
    uVar17 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x45,((undefined *)GEN_TOP(((int)in_ecx + 0x3c))));
    uVar18 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x46,((undefined *)GEN_TOP(((int)in_ecx + 0x40))));
    uVar19 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x47,((undefined *)GEN_TOP(((int)in_ecx + 0x44))));
    uVar20 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x48,((undefined *)GEN_TOP(((int)in_ecx + 0x48))));
    uVar21 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x49,((undefined *)GEN_TOP(((int)in_ecx + 0x4c))));
    uVar22 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4a,((undefined *)GEN_TOP(((int)in_ecx + 0x50))));
    uVar23 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4b,((undefined *)GEN_TOP(((int)in_ecx + 0x54))));
    uVar24 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4c,((undefined *)GEN_TOP(((int)in_ecx + 0x58))));
    uVar25 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4d,((undefined *)GEN_TOP(((int)in_ecx + 0x5c))));
    uVar26 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4e,((undefined *)GEN_TOP(((int)in_ecx + 0x60))));
    uVar27 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x4f,((undefined *)GEN_TOP(((int)in_ecx + 100))));
    uVar28 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x38,((undefined *)GEN_TOP(((int)in_ecx + 0x68))));
    uVar29 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x39,((undefined *)GEN_TOP(((int)in_ecx + 0x6c))));
    uVar30 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3a,((undefined *)GEN_TOP(((int)in_ecx + 0x70))));
    uVar31 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3b,((undefined *)GEN_TOP(((int)in_ecx + 0x74))));
    uVar32 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3c,((undefined *)GEN_TOP(((int)in_ecx + 0x78))));
    uVar33 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3d,((undefined *)GEN_TOP(((int)in_ecx + 0x7c))));
    uVar34 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3e,((undefined *)GEN_TOP(((int)in_ecx + 0x80))));
    uVar35 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x3f,((undefined *)GEN_TOP(((int)in_ecx + 0x84))));
    uVar36 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x40,((undefined *)GEN_TOP(((int)in_ecx + 0x88))));
    uVar37 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x41,((undefined *)GEN_TOP(((int)in_ecx + 0x8c))));
    uVar38 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x42,((undefined *)GEN_TOP(((int)in_ecx + 0x90))));
    uVar39 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x43,((undefined *)GEN_TOP(((int)in_ecx + 0x94))));
    uVar40 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x28,((undefined *)GEN_TOP(((int)in_ecx + 0x98))));
    uVar41 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x29,((undefined *)GEN_TOP(((int)in_ecx + 0x9c))));
    uVar42 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x1f,((undefined *)GEN_TOP(((int)in_ecx + 0xa0))));
    uVar43 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x20,((undefined *)GEN_TOP(((int)in_ecx + 0xa4))));
    uVar44 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,(*(LPCWSTR *)(gen_frame + 0x8)),0x1003,((undefined *)GEN_TOP(((int)in_ecx + 0xa8))));
    uVar45 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,(*(LPCWSTR *)(gen_frame + 0x8)),0x1009,((undefined *)GEN_TOP(((int)in_ecx + 0xb0))));
    *((LPCWSTR *)GEN_TOP(((int)in_ecx + 0xac))) = (*(LPCWSTR *)(gen_frame + 0x8));
    uVar46 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x31,((undefined *)GEN_TOP(((int)in_ecx + 0xbc))));
    uVar47 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x32,((undefined *)GEN_TOP(((int)in_ecx + 0xc0))));
    uVar48 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x33,((undefined *)GEN_TOP(((int)in_ecx + 0xc4))));
    uVar49 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x34,((undefined *)GEN_TOP(((int)in_ecx + 200))));
    uVar50 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x35,((undefined *)GEN_TOP(((int)in_ecx + 0xcc))));
    uVar51 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x36,((undefined *)GEN_TOP(((int)in_ecx + 0xd0))));
    uVar52 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x37,((undefined *)GEN_TOP(((int)in_ecx + 0xb8))));
    uVar53 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2a,((undefined *)GEN_TOP(((int)in_ecx + 0xd8))));
    uVar54 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2b,((undefined *)GEN_TOP(((int)in_ecx + 0xdc))));
    uVar55 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2c,((undefined *)GEN_TOP(((int)in_ecx + 0xe0))));
    uVar56 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2d,((undefined *)GEN_TOP(((int)in_ecx + 0xe4))));
    uVar57 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2e,((undefined *)GEN_TOP(((int)in_ecx + 0xe8))));
    uVar58 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x2f,((undefined *)GEN_TOP(((int)in_ecx + 0xec))));
    uVar59 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x30,((undefined *)GEN_TOP(((int)in_ecx + 0xd4))));
    uVar60 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x44,((undefined *)GEN_TOP(((int)in_ecx + 0xf0))));
    uVar61 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x45,((undefined *)GEN_TOP(((int)in_ecx + 0xf4))));
    uVar62 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x46,((undefined *)GEN_TOP(((int)in_ecx + 0xf8))));
    uVar63 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x47,((undefined *)GEN_TOP(((int)in_ecx + 0xfc))));
    uVar64 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x48,((undefined *)GEN_TOP(((int)in_ecx + 0x100))));
    uVar65 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x49,((undefined *)GEN_TOP(((int)in_ecx + 0x104))));
    uVar66 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4a,((undefined *)GEN_TOP(((int)in_ecx + 0x108))));
    uVar67 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4b,((undefined *)GEN_TOP(((int)in_ecx + 0x10c))));
    uVar68 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4c,((undefined *)GEN_TOP(((int)in_ecx + 0x110))));
    uVar69 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4d,((undefined *)GEN_TOP(((int)in_ecx + 0x114))));
    uVar70 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4e,((undefined *)GEN_TOP(((int)in_ecx + 0x118))));
    uVar71 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x4f,((undefined *)GEN_TOP(((int)in_ecx + 0x11c))));
    uVar72 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x38,((undefined *)GEN_TOP(((int)in_ecx + 0x120))));
    uVar73 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x39,((undefined *)GEN_TOP(((int)in_ecx + 0x124))));
    uVar74 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3a,((undefined *)GEN_TOP(((int)in_ecx + 0x128))));
    uVar75 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3b,((undefined *)GEN_TOP(((int)in_ecx + 300))));
    uVar76 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3c,((undefined *)GEN_TOP(((int)in_ecx + 0x130))));
    uVar77 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3d,((undefined *)GEN_TOP(((int)in_ecx + 0x134))));
    uVar78 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3e,((undefined *)GEN_TOP(((int)in_ecx + 0x138))));
    uVar79 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x3f,((undefined *)GEN_TOP(((int)in_ecx + 0x13c))));
    uVar80 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x40,((undefined *)GEN_TOP(((int)in_ecx + 0x140))));
    uVar81 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x41,((undefined *)GEN_TOP(((int)in_ecx + 0x144))));
    uVar82 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x42,((undefined *)GEN_TOP(((int)in_ecx + 0x148))));
    uVar83 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x43,((undefined *)GEN_TOP(((int)in_ecx + 0x14c))));
    uVar84 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x28,((undefined *)GEN_TOP(((int)in_ecx + 0x150))));
    uVar85 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x29,((undefined *)GEN_TOP(((int)in_ecx + 0x154))));
    uVar86 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x1f,((undefined *)GEN_TOP(((int)in_ecx + 0x158))));
    uVar87 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x20,((undefined *)GEN_TOP(((int)in_ecx + 0x15c))));
    uVar1 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,(*(LPCWSTR *)(gen_frame + 0x8)),0x1003,((undefined *)GEN_TOP(((int)in_ecx + 0x160))));
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
GEN_LIB GEN_NOFRAME unsigned int F_00c5f782(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5f782u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00c4c68f(((undefined *)GEN_TOP(param_1[1])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[2])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[3])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[4])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[5])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[6])));
    F_00c4c68f(((undefined *)GEN_TOP(*param_1)));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[8])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[9])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[10])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0xb])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0xc])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0xd])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[7])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0xe])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0xf])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x10])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x11])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x12])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x13])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x14])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x15])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x16])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x17])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x18])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x19])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x1a])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x1b])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x1c])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x1d])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x1e])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x1f])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x20])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x21])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x22])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x23])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x24])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x25])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x26])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x27])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x28])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x29])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x2a])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x2f])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x30])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x31])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x32])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x33])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x34])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x2e])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x36])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x37])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x38])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x39])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x3a])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x3b])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x35])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x3c])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x3d])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x3e])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x3f])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x40])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x41])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x42])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x43])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x44])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x45])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x46])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x47])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x48])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x49])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x4a])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x4b])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x4c])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x4d])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x4e])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x4f])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x50])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x51])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x52])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x53])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x54])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x55])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x56])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x57])));
    F_00c4c68f(((undefined *)GEN_TOP(param_1[0x58])));
  }
  return;
}

/* ref: ___init_time */
GEN_LIB GEN_NOFRAME int F_00c5faf9(GEN_P(undefined * _LocInfo, unsigned int gen_a0))
{
  GEN_ENTER(0xc5faf9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;)
  undefined * PTR32 * ppuVar1;
  undefined * PTR32 * _Memory;
  int iVar2;
  uint uVar3;
  
  if ((*((char * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 16) + (1) * 16))))) == ((char *)GEN_TOP(0x0))) {
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
    if (_Memory != ((undefined * PTR32 *)GEN_TOP(0x0))) {
      uVar3 = F_00c5ef83(_LocInfo,_Memory);
      if (uVar3 == 0) {
        _Memory[0x2d] = ((undefined *)GEN_TOP(0x1));
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
GEN_LIB GEN_NOFRAME unsigned int F_00c5fba6(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5fba6u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_1)) != REFG(undefined * PTR32, 0x134b048)) {
      F_00c4c68f(((undefined *)GEN_TOP(*param_1)));
    }
    if (((undefined *)GEN_TOP(param_1[1])) != REFG(undefined * PTR32, 0x134b04c)) {
      F_00c4c68f(((undefined *)GEN_TOP(param_1[1])));
    }
    if (((undefined *)GEN_TOP(param_1[2])) != REFG(undefined * PTR32, 0x134b050)) {
      F_00c4c68f(((undefined *)GEN_TOP(param_1[2])));
    }
    if (((undefined *)GEN_TOP(param_1[0xc])) != REFG(undefined * PTR32, 0x134b078)) {
      F_00c4c68f(((undefined *)GEN_TOP(param_1[0xc])));
    }
    if (((undefined *)GEN_TOP(param_1[0xd])) != REFG(undefined * PTR32, 0x134b07c)) {
      F_00c4c68f(((undefined *)GEN_TOP(param_1[0xd])));
    }
  }
  return;
}

/* ref: ___init_numeric */
GEN_LIB GEN_NOFRAME int F_00c5fc0f(GEN_P(undefined * _LocInfo, unsigned int gen_a0))
{
  GEN_ENTER(0xc5fc0fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
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
  
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = ((undefined *)GEN_TOP(0x0));
  if (((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == ((int *)GEN_TOP(0x0))) &&
     ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == ((int *)GEN_TOP(0x0)))) {
    (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = ((wchar_t *)GEN_TOP(0x0));
    (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = ((wchar_t *)GEN_TOP(0x0));
    _Address = &REFG(undefined * PTR32, 0x134b048);
LAB_00c5fda4: ;
    if ((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))) != ((wchar_t *)GEN_TOP(0x0))) {
      gen_imp_InterlockedDecrement((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))));
    }
    if (((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) != ((wchar_t *)GEN_TOP(0x0))) &&
       (LVar8 = gen_imp_InterlockedDecrement((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4)))))), LVar8 == 0)) {
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))));
      F_00c4c68f(((undefined *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))))));
    }
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (5) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0xc));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x8));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) = (uint)_Address;
    iVar9 = 0;
  }
  else {
    _Address = F_00c54c73(1,0x50);
    if (_Address != ((undefined * PTR32 *)GEN_TOP(0x0))) {
      puVar10 = ((undefined4 *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4)))))));
      ppuVar12 = _Address;
      for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 - 1) {
        *ppuVar12 = ((undefined *)GEN_TOP(*puVar10));
        puVar10 = puVar10 + 1;
        ppuVar12 = ppuVar12 + 1;
      }
      pwVar2 = F_00c54c2e(4);
      (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = pwVar2;
      if (pwVar2 != ((wchar_t *)GEN_TOP(0x0))) {
        pwVar2[0] = L'\0';
        pwVar2[1] = L'\0';
        if ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == ((int *)GEN_TOP(0x0))) {
          *_Address = REFG(undefined * PTR32, 0x134b048);
          _Address[1] = REFG(undefined * PTR32, 0x134b04c);
          _Address[2] = REFG(undefined * PTR32, 0x134b050);
          _Address[0xc] = REFG(undefined * PTR32, 0x134b078);
          (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = ((wchar_t *)GEN_TOP(0x0));
          _Address[0xd] = REFG(undefined * PTR32, 0x134b07c);
        }
        else {
          pwVar2 = F_00c54c2e(4);
          (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = pwVar2;
          if (pwVar2 == ((wchar_t *)GEN_TOP(0x0))) {
            iVar9 = 1;
LAB_00c5fc9f: ;
            F_00c4c68f(_Address);
            F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x8)));
            return iVar9;
          }
          pwVar2[0] = L'\0';
          pwVar2[1] = L'\0';
          _LocaleName = (LPCWSTR)(uint)*((ushort *)GEN_TOP(((int)&(*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (2) * 16) + 12))))) + 2)));
          iVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0xe,_Address);
          iVar3 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0xf,_Address + 1);
          iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x10,_Address + 2);
          iVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0xe,_Address + 0xc);
          iVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0xf,_Address + 0xd);
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
              *pcVar7 = cVar1 - 0x30;
LAB_00c5fd4a: ;
              pcVar7 = pcVar7 + 1;
            }
          }
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x8))[0] = L'\x01';
        (*(wchar_t * PTR32 *)(gen_frame + 0x8))[1] = L'\0';
        if ((*(wchar_t * PTR32 *)(gen_frame + 0xc)) != ((wchar_t *)GEN_TOP(0x0))) {
          (*(wchar_t * PTR32 *)(gen_frame + 0xc))[0] = L'\x01';
          (*(wchar_t * PTR32 *)(gen_frame + 0xc))[1] = L'\0';
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
GEN_LIB GEN_NOFRAME unsigned int F_00c5fe2f(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc5fe2fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 != 0) {
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0xc))) != REFG(undefined * PTR32, 0x134b054)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0xc))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))) != REFG(undefined * PTR32, 0x134b058)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x10))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))) != REFG(undefined * PTR32, 0x134b05c)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x14))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))) != REFG(undefined * PTR32, 0x134b060)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1c))) != REFG(undefined * PTR32, 0x134b064)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x1c))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x20))) != REFG(undefined * PTR32, 0x134b068)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x20))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x24))) != REFG(undefined * PTR32, 0x134b06c)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x24))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x38))) != REFG(undefined * PTR32, 0x134b080)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x38))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3c))) != REFG(undefined * PTR32, 0x134b084)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x3c))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x40))) != REFG(undefined * PTR32, 0x134b088)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x40))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x44))) != REFG(undefined * PTR32, 0x134b08c)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x44))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x48))) != REFG(undefined * PTR32, 0x134b090)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x48))));
    }
    if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))) != REFG(undefined * PTR32, 0x134b094)) {
      F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))));
    }
  }
  return;
}

/* ref: ___init_monetary */
GEN_LIB GEN_NOFRAME int F_00c5ff2d(GEN_P(undefined * _LocInfo, unsigned int gen_a0))
{
  GEN_ENTER(0xc5ff2du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _LocInfo = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
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
  
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = _LocInfo;
  (*(undefined * PTR32 *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = ((undefined *)GEN_TOP(0x0));
  if (((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == ((int *)GEN_TOP(0x0))) &&
     ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 12))))) == ((int *)GEN_TOP(0x0)))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)GEN_TOP(0x0));
    (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = ((wchar_t *)GEN_TOP(0x0));
    _Memory = &REFG(undefined * PTR32, 0x134b048);
LAB_00c60230: ;
    if (((LONG *)GEN_TOP((*(int *)(((char *)(_LocInfo) + (1) * 184))))) != ((LONG *)GEN_TOP(0x0))) {
      gen_imp_InterlockedDecrement(((LONG *)GEN_TOP((*(int *)(((char *)(_LocInfo) + (1) * 184))))));
    }
    if (((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) != ((wchar_t *)GEN_TOP(0x0))) &&
       (LVar25 = gen_imp_InterlockedDecrement((LONG *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4)))))), LVar25 == 0)) {
      F_00c4c68f(((undefined *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))))));
      F_00c4c68f((*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))));
    }
    (*(int *)(((char *)(_LocInfo) + (1) * 184))) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*((wchar_t * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 160) + (4) * 4))))) = (*(wchar_t * PTR32 *)(gen_frame + 0x8));
    (*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) = (uint)_Memory;
    iVar26 = 0;
  }
  else {
    _Memory = F_00c54c73(1,0x50);
    if (_Memory != ((undefined * PTR32 *)GEN_TOP(0x0))) {
      pwVar2 = F_00c54c2e(4);
      (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = pwVar2;
      if (pwVar2 == ((wchar_t *)GEN_TOP(0x0))) {
        F_00c4c68f(_Memory);
      }
      else {
        pwVar2[0] = L'\0';
        pwVar2[1] = L'\0';
        if ((*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 8))))) == ((int *)GEN_TOP(0x0))) {
          ppuVar28 = &REFG(undefined * PTR32, 0x134b048);
          ppuVar29 = _Memory;
          for (iVar26 = 0x14; iVar26 != 0; iVar26 = iVar26 - 1) {
            *ppuVar29 = *ppuVar28;
            ppuVar28 = ppuVar28 + 1;
            ppuVar29 = ppuVar29 + 1;
          }
LAB_00c601dc: ;
          *_Memory = *((undefined * PTR32 *)GEN_TOP((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4)))))));
          _Memory[1] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 4)));
          _Memory[2] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 8)));
          _Memory[0xc] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 0x30)));
          _Memory[0xd] = *((undefined * PTR32 *)GEN_TOP(((*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 4))))) + 0x34)));
          (*(wchar_t * PTR32 *)(gen_frame + 0x8))[0] = L'\x01';
          (*(wchar_t * PTR32 *)(gen_frame + 0x8))[1] = L'\0';
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0))) {
            *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = 1;
          }
          goto LAB_00c60230;
        }
        puVar3 = F_00c54c2e(4);
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
        if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
          F_00c4c68f(_Memory);
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x8)));
        }
        else {
          *puVar3 = 0;
          _LocaleName = (LPCWSTR)(uint)*(ushort *)&(*((int * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (2) * 16) + 8)))));
          iVar26 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x15,_Memory + 3);
          iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x14,_Memory + 4);
          iVar5 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x16,_Memory + 5);
          iVar6 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x17,_Memory + 6);
          iVar7 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x18,_Memory + 7);
          iVar8 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x50,_Memory + 8);
          iVar9 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),1,_LocaleName,0x51,_Memory + 9);
          iVar10 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x1a,_Memory + 10);
          iVar11 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x19,((undefined *)GEN_TOP(((int)_Memory + 0x29))));
          iVar12 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x54,((undefined *)GEN_TOP(((int)_Memory + 0x2a))));
          iVar13 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x55,((undefined *)GEN_TOP(((int)_Memory + 0x2b))));
          iVar14 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x56,_Memory + 0xb);
          iVar15 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x57,((undefined *)GEN_TOP(((int)_Memory + 0x2d))));
          iVar16 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x52,((undefined *)GEN_TOP(((int)_Memory + 0x2e))));
          iVar17 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,_LocaleName,0x53,((undefined *)GEN_TOP(((int)_Memory + 0x2f))));
          iVar18 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x15,_Memory + 0xe);
          iVar19 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x14,_Memory + 0xf);
          iVar20 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x16,_Memory + 0x10);
          iVar21 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x17,_Memory + 0x11);
          iVar22 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x50,_Memory + 0x12);
          iVar23 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),2,_LocaleName,0x51,_Memory + 0x13);
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
                *pcVar24 = cVar1 - 0x30;
LAB_00c601b4: ;
                pcVar24 = pcVar24 + 1;
              }
            }
            goto LAB_00c601dc;
          }
          F_00c5fe2f(_Memory);
          F_00c4c68f(_Memory);
          F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x8)));
          F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0xc)));
        }
      }
    }
    iVar26 = 1;
  }
  return iVar26;
}

/* ref: FUN_00c6028d */
GEN_LIB GEN_NOFRAME uint F_00c6028d(void)
{
  GEN_ENTER(0xc6028du, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Global::_TranslateName */
GEN_LIB GEN_NOFRAME uint F_00c60290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc60290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
      puVar1 = ((undefined4 *)GEN_TOP((param_1 + iVar4 * 8)));
      iVar2 = F_00c4c468(((char *)GEN_TOP(*param_3)),((char *)GEN_TOP(*puVar1)));
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 - 1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return (uint)(iVar2 == 0);
}

/* ref: _ProcessCodePage */
GEN_LIB GEN_NOFRAME uint F_00c60306(GEN_P(char * in_esi, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xc60306u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_esi = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  LCID Locale;
  int iVar1;
  uint uVar2;
  UINT UVar3;
  
  if (((in_esi != ((char *)GEN_TOP(0x0))) && (*in_esi != '\0')) &&
     (iVar1 = F_00c556e0(in_esi,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b5b8))))), iVar1 != 0)) {
    iVar1 = F_00c556e0(in_esi,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x111b5b4)))));
    if (iVar1 != 0) {
      uVar2 = F_00c4c71d(in_esi);
      (*(uint *)(gen_frame + 0x0)) = uVar2;
      return uVar2;
    }
    iVar1 = gen_imp_GetLocaleInfoW(*((LCID *)GEN_TOP((in_edi + 0x1c))),0x2000000b,(LPWSTR)&(*(uint *)(gen_frame + 0x0)),2);
    if (iVar1 == 0) {
      return 0;
    }
    return (*(uint *)(gen_frame + 0x0));
  }
  Locale = *((LCID *)GEN_TOP((in_edi + 0x1c)));
  iVar1 = gen_imp_GetLocaleInfoW(Locale,0x20001004,(LPWSTR)&(*(uint *)(gen_frame + 0x0)),2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(gen_frame + 0x0)) != 0) {
    return (*(uint *)(gen_frame + 0x0));
  }
  UVar3 = gen_imp_GetACP();
  return UVar3;
}

/* ref: _TestDefaultCountry */
GEN_LIB GEN_NOFRAME uint F_00c6038a(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6038au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((short)param_1 == *((short *)GEN_TOP(((int)&REFG(undefined2, 0x111b5a0) + uVar1)))) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

/* ref: _LcidFromHexString */
GEN_LIB GEN_NOFRAME uint F_00c603af(GEN_P(char * in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xc603afu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * in_edx = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (cVar1 = *in_edx, cVar1 != '\0') {
    in_edx = in_edx + 1;
    if ((byte)(cVar1 + 0x9fU) < 6) {
      cVar1 = cVar1 - 0x27;
    }
    else if ((byte)(cVar1 + 0xbfU) < 6) {
      cVar1 = cVar1 - 7;
    }
    uVar2 = cVar1 - 0x30 + uVar2 * 0x10;
  }
  return uVar2;
}

/* ref: _GetPrimaryLen */
GEN_LIB GEN_NOFRAME uint F_00c603e0(GEN_P(char * in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xc603e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * in_edx = (char *)(uintptr_t)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c603fb(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc603fbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x80, 0);
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
  return uVar3;
}

/* ref: _TestDefaultLanguage */
GEN_LIB GEN_NOFRAME uint F_00c604a2(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc604a2u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x8, 8);
  char * _Str;
  int iVar1;
  uint uVar2;
  gen_size32 sVar3;
  
  iVar1 = gen_imp_GetLocaleInfoW(in_eax & 0x3ff | 0x400,0x20000001,(LPWSTR)&(*(uint *)(gen_frame + 0x0)),2);
  if (iVar1 == 0) {
LAB_00c604cd: ;
    uVar2 = 0;
  }
  else {
    if ((in_eax != (*(uint *)(gen_frame + 0x0))) && (param_2 != 0)) {
      _Str = ((char *)GEN_TOP(*param_3));
      uVar2 = F_00c603e0(_Str);
      sVar3 = F_00c552f0(_Str);
      if (uVar2 == sVar3) goto LAB_00c604cd;
    }
    uVar2 = 1;
  }
  return uVar2;
}

/* ref: _LangCountryEnumProc@4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c604fd(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc604fdu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x80, 0);
  int * piVar1;
  undefined * p_Var2;
  undefined * p_Var3;
  uint in_eax;
  int iVar4;
  uint uVar5;
  gen_size32 sVar6;
  uint uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var3 = F_00c5b37a();
  p_Var2 = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  in_eax = F_00c603af(param_1);
  iVar4 = gen_imp_GetLocaleInfoA(in_eax,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 20))))) != 0) & 0xfffff005) +
                                0x1002,((char *)(gen_frame + 0x0)),0x78);
  if (iVar4 == 0) goto LAB_00c6054e;
  iVar4 = F_00c4c468((char *)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(p_Var3) + 156) + 4))))),((char *)(gen_frame + 0x0)));
  if (iVar4 == 0) {
    iVar4 = gen_imp_GetLocaleInfoA(in_eax,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002
                                  ) + 0x1001,((char *)(gen_frame + 0x0)),0x78);
    if (iVar4 == 0) goto LAB_00c6054e;
    iVar4 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
    if (iVar4 == 0) {
      piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
      *piVar1 = *piVar1 | 0x304;
      (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = in_eax;
LAB_00c605fe: ;
      *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = in_eax;
    }
    else if (((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 2) == 0) {
      sVar6 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))));
      if ((sVar6 == 0) ||
         (iVar4 = F_00c4c591((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)),sVar6), iVar4 != 0)) {
        uVar7 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
        if (((uVar7 & 1) == 0) && (uVar5 = F_00c6038a(in_eax), uVar5 != 0)) {
          (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = uVar7 | 1;
          goto LAB_00c605fe;
        }
      }
      else {
        piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
        *piVar1 = *piVar1 | 2;
        *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = in_eax;
        sVar6 = F_00c552f0((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))));
        if (sVar6 == (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12)))))) {
          (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = in_eax;
        }
      }
    }
  }
  uVar7 = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) & 0x300;
  if (uVar7 == 0x300) goto LAB_00c606b2;
  iVar4 = gen_imp_GetLocaleInfoA(uVar7,in_eax,
                         (-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002) +
                         0x1001,((char *)(gen_frame + 0x0)),0x78);
  if (iVar4 == 0) {
LAB_00c6054e: ;
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    return 1;
  }
  iVar4 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0)));
  if (iVar4 == 0) {
    piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
    *piVar1 = *piVar1 | 0x200;
    if ((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) {
      if (((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) != 0) &&
         (sVar6 = F_00c552f0((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2)))), sVar6 == (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))))
         ) {
        uVar8 = 1;
        goto LAB_00c60696;
      }
      goto LAB_00c606a3;
    }
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) | 0x100;
  }
  else {
    if ((((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) || ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) == 0))
       || (iVar4 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((char *)(gen_frame + 0x0))), iVar4 != 0)) goto LAB_00c606b2;
    uVar8 = 0;
LAB_00c60696: ;
    uVar7 = F_00c604a2(in_eax,uVar8,p_Var2);
    if (uVar7 == 0) goto LAB_00c606b2;
LAB_00c606a3: ;
    piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
    *piVar1 = *piVar1 | 0x100;
  }
  if ((*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) == 0) {
    (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = in_eax;
  }
LAB_00c606b2: ;
  return ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) >> 2) & 1;
}

/* ref: _LanguageEnumProc@4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c606ce(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc606ceu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL(0x80, 0);
  int * piVar1;
  undefined * p_Var2;
  undefined * p_Var3;
  uint Locale;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  p_Var3 = F_00c5b37a();
  p_Var2 = &(*(undefined (*)[764])(((char *)(p_Var3) + 156)));
  Locale = F_00c603af(param_1);
  iVar4 = gen_imp_GetLocaleInfoA(Locale,(-(uint)((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) & 0xfffff002)
                                + 0x1001,((CHAR *)(gen_frame + 0x0)),0x78);
  if (iVar4 == 0) {
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    return 1;
  }
  iVar4 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((CHAR *)(gen_frame + 0x0)));
  if (iVar4 == 0) {
    if ((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) == 0) {
      uVar6 = 1;
      goto LAB_00c6075c;
    }
  }
  else {
    if ((((*((BOOL *)GEN_TOP(((((char *)(p_Var3) + 156) + 16))))) != 0) || ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 12))))) == 0))
       || (iVar4 = F_00c4c468((char *)(*(wchar_t * PTR32 *)((char *)(p_Var2))),((CHAR *)(gen_frame + 0x0))), iVar4 != 0)) goto LAB_00c60773;
    uVar6 = 0;
LAB_00c6075c: ;
    uVar5 = F_00c604a2(Locale,uVar6,p_Var2);
    if (uVar5 == 0) goto LAB_00c60773;
  }
  piVar1 = &(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8)))));
  *piVar1 = *piVar1 | 4;
  (*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24))))) = Locale;
  *(uint *)(((wchar_t *)GEN_TOP(((((char *)(p_Var3) + 156) + 28))))) = Locale;
LAB_00c60773: ;
  return ~((uint)(*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) >> 2) & 1;
}

/* ref: _GetLcidFromLangCountry */
GEN_LIB GEN_NOFRAME uint F_00c607ba(GEN_P(undefined4 * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc607bau, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  gen_size32 sVar1;
  uint uVar2;
  
  sVar1 = F_00c552f0(((char *)GEN_TOP(*in_esi)));
  in_esi[4] = (uint)(sVar1 == 3);
  sVar1 = F_00c552f0(((char *)GEN_TOP(in_esi[1])));
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
GEN_LIB GEN_NOFRAME unsigned int F_00c60821(GEN_P(undefined4 * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc60821u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;)
  gen_size32 sVar1;
  uint uVar2;
  
  sVar1 = F_00c552f0(((char *)GEN_TOP(*in_esi)));
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
GEN_LIB GEN_NOFRAME BOOL F_00c6085d(GEN_P(GEN_LPANY _LpInStr, unsigned int gen_a0), GEN_P(UINT * _LpCodePage, unsigned int gen_a1), GEN_P(GEN_LPANY _LpOutStr, unsigned int gen_a2))
{
  GEN_ENTER(0xc6085du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(GEN_LPANY _LpInStr = (GEN_LPANY)gen_a0;)
  GEN_PIN(UINT * _LpCodePage = (UINT *)(uintptr_t)gen_a1;)
  GEN_PIN(GEN_LPANY _LpOutStr = (GEN_LPANY)gen_a2;)
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
    if ((pwVar4 != ((wchar_t *)GEN_TOP(0x0))) && ((char)*pwVar4 != '\0')) {
      F_00c60290(&REFG(undefined * PTR32, 0x111b4e8),0x16,ppwVar2);
    }
    (*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) = 0;
    if (((*(wchar_t * PTR32 *)((char *)(in_esi))) == ((wchar_t *)GEN_TOP(0x0))) || ((char)*(*(wchar_t * PTR32 *)((char *)(in_esi))) == '\0')) {
      pwVar4 = *ppwVar2;
      if ((pwVar4 == ((wchar_t *)GEN_TOP(0x0))) || ((char)*pwVar4 == '\0')) {
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
      if ((*ppwVar2 == ((wchar_t *)GEN_TOP(0x0))) || ((char)**ppwVar2 == '\0')) {
        F_00c60821(in_esi);
      }
      else {
        F_00c607ba(in_esi);
      }
      if ((*((int *)GEN_TOP(((((char *)(p_Var3) + 156) + 8))))) != 0) goto LAB_00c6095c;
      uVar7 = F_00c60290(&REFG(undefined * PTR32, 0x111b2e0),0x40,in_esi);
      if (uVar7 != 0) {
        if ((*ppwVar2 == ((wchar_t *)GEN_TOP(0x0))) || ((char)**ppwVar2 == '\0')) {
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
  if (_LpCodePage != ((UINT *)GEN_TOP(0x0))) {
    *(short *)_LpCodePage = (short)(*((UINT *)GEN_TOP(((((char *)(p_Var3) + 156) + 24)))));
    *((wchar_t *)GEN_TOP(((int)_LpCodePage + 2))) = (*((wchar_t *)GEN_TOP((((((char *)(p_Var3) + 156) + 28) + (0) * 2)))));
    *(short *)(_LpCodePage + 1) = (short)uVar7;
  }
  if (_LpOutStr != (GEN_LPANY)0x0) {
    if ((short)*_LpCodePage == 0x814) {
      eVar9 = F_00c49908(_LpOutStr,0x40,((char *)REFP(0x111b5bc)));
      if (eVar9 != 0) {
                    
        F_00c4c299(0,0,0,0,0);
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
GEN_LIB GEN_NOFRAME int F_00c61f68(GEN_P(undefined * _Buf1, unsigned int gen_a0), GEN_P(undefined * _Buf2, unsigned int gen_a1), GEN_P(gen_size32 _Size, unsigned int gen_a2))
{
  GEN_ENTER(0xc61f68u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Buf1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Buf2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a2;)
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
    return (uint)(0 < (int)(uVar4 - uVar5)) * 2 - 1;
  }
  if (_Size == 2) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + 1)));
    uVar5 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + 1)));
    goto LAB_00c6339b;
  }
  if (_Size == 3) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + 1)));
    uVar5 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + 1)));
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + 2)));
    uVar5 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + 2)));
    goto LAB_00c6339b;
  }
  pbVar1 = _Buf1;
  pbVar3 = _Buf2;
  sVar6 = _Size;
  if (_Size == 4) {
    uVar4 = (uint)*(byte *)_Buf1;
    uVar5 = (uint)*(byte *)_Buf2;
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + 1)));
    uVar5 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + 1)));
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + 2)));
    uVar5 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + 2)));
    if ((uVar4 != uVar5) &&
       (iVar2 = (uint)(uVar4 != uVar5 && -1 < (int)(uVar4 - uVar5)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    uVar4 = (uint)*((byte *)GEN_TOP(((int)_Buf1 + 3)));
    uVar5 = (uint)*((byte *)GEN_TOP(((int)_Buf2 + 3)));
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[1];
      uVar4 = (uint)pbVar3[1];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[2];
      uVar4 = (uint)pbVar3[2];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[3] != (uint)pbVar3[3]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[3] - (uint)pbVar3[3])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[5];
      uVar4 = (uint)pbVar3[5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[6];
      uVar4 = (uint)pbVar3[6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[7] != (uint)pbVar3[7]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[7] - (uint)pbVar3[7])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[9];
      uVar4 = (uint)pbVar3[9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[10];
      uVar4 = (uint)pbVar3[10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0xb] != (uint)pbVar3[0xb]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0xb] - (uint)pbVar3[0xb])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0xd];
      uVar4 = (uint)pbVar3[0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0xe];
      uVar4 = (uint)pbVar3[0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0xf] != (uint)pbVar3[0xf]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0xf] - (uint)pbVar3[0xf])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x11];
      uVar4 = (uint)pbVar3[0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x12];
      uVar4 = (uint)pbVar3[0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x13] != (uint)pbVar3[0x13]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x13] - (uint)pbVar3[0x13])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x15];
      uVar4 = (uint)pbVar3[0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x16];
      uVar4 = (uint)pbVar3[0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x17] != (uint)pbVar3[0x17]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x17] - (uint)pbVar3[0x17])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x19];
      uVar4 = (uint)pbVar3[0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x1a];
      uVar4 = (uint)pbVar3[0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x1b] != (uint)pbVar3[0x1b]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x1b] - (uint)pbVar3[0x1b])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x1d];
      uVar4 = (uint)pbVar3[0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[0x1e];
      uVar4 = (uint)pbVar3[0x1e];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[0x1f] != (uint)pbVar3[0x1f]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[0x1f] - (uint)pbVar3[0x1f])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1b];
      uVar4 = (uint)pbVar3[sVar6 - 0x1b];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1a];
      uVar4 = (uint)pbVar3[sVar6 - 0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x19] != (uint)pbVar3[sVar6 - 0x19]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x19] - (uint)pbVar3[sVar6 - 0x19])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x17];
      uVar4 = (uint)pbVar3[sVar6 - 0x17];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x16];
      uVar4 = (uint)pbVar3[sVar6 - 0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x15] != (uint)pbVar3[sVar6 - 0x15]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x15] - (uint)pbVar3[sVar6 - 0x15])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x13];
      uVar4 = (uint)pbVar3[sVar6 - 0x13];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x12];
      uVar4 = (uint)pbVar3[sVar6 - 0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x11] != (uint)pbVar3[sVar6 - 0x11]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x11] - (uint)pbVar3[sVar6 - 0x11])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xf];
      uVar4 = (uint)pbVar3[sVar6 - 0xf];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xe];
      uVar4 = (uint)pbVar3[sVar6 - 0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xd] != (uint)pbVar3[sVar6 - 0xd]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xd] - (uint)pbVar3[sVar6 - 0xd])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xb];
      uVar4 = (uint)pbVar3[sVar6 - 0xb];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 10];
      uVar4 = (uint)pbVar3[sVar6 - 10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 9] != (uint)pbVar3[sVar6 - 9]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 9] - (uint)pbVar3[sVar6 - 9])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 7];
      uVar4 = (uint)pbVar3[sVar6 - 7];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 6];
      uVar4 = (uint)pbVar3[sVar6 - 6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 5] != (uint)pbVar3[sVar6 - 5]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 5] - (uint)pbVar3[sVar6 - 5])) * 2 - 1;
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
           (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 == 0)) {
          uVar5 = (uint)pbVar1[sVar6 - 3];
          uVar4 = (uint)pbVar3[sVar6 - 3];
          if ((uVar5 == uVar4) ||
             (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 == 0)) {
            uVar5 = (uint)pbVar1[sVar6 - 2];
            uVar4 = (uint)pbVar3[sVar6 - 2];
            if ((uVar5 == uVar4) ||
               (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 == 0)) {
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1c];
      uVar4 = (uint)pbVar3[sVar6 - 0x1c];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1b];
      uVar4 = (uint)pbVar3[sVar6 - 0x1b];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x1a] != (uint)pbVar3[sVar6 - 0x1a]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x1a] - (uint)pbVar3[sVar6 - 0x1a])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x18];
      uVar4 = (uint)pbVar3[sVar6 - 0x18];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x17];
      uVar4 = (uint)pbVar3[sVar6 - 0x17];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x16] != (uint)pbVar3[sVar6 - 0x16]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x16] - (uint)pbVar3[sVar6 - 0x16])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x14];
      uVar4 = (uint)pbVar3[sVar6 - 0x14];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x13];
      uVar4 = (uint)pbVar3[sVar6 - 0x13];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x12] != (uint)pbVar3[sVar6 - 0x12]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x12] - (uint)pbVar3[sVar6 - 0x12])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x10];
      uVar4 = (uint)pbVar3[sVar6 - 0x10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xf];
      uVar4 = (uint)pbVar3[sVar6 - 0xf];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xe] != (uint)pbVar3[sVar6 - 0xe]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xe] - (uint)pbVar3[sVar6 - 0xe])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xc];
      uVar4 = (uint)pbVar3[sVar6 - 0xc];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xb];
      uVar4 = (uint)pbVar3[sVar6 - 0xb];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 10] != (uint)pbVar3[sVar6 - 10]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 10] - (uint)pbVar3[sVar6 - 10])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 8];
      uVar4 = (uint)pbVar3[sVar6 - 8];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 7];
      uVar4 = (uint)pbVar3[sVar6 - 7];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 6] != (uint)pbVar3[sVar6 - 6]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 6] - (uint)pbVar3[sVar6 - 6])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 4];
      uVar4 = (uint)pbVar3[sVar6 - 4];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 3];
      uVar4 = (uint)pbVar3[sVar6 - 3];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 2] != (uint)pbVar3[sVar6 - 2]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 2] - (uint)pbVar3[sVar6 - 2])) * 2 - 1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_1: ;
    if ((uint)pbVar1[sVar6 - 1] == (uint)pbVar3[sVar6 - 1]) {
      return 0;
    }
    return (uint)(0 < (int)((uint)pbVar1[sVar6 - 1] - (uint)pbVar3[sVar6 - 1])) * 2 - 1;
  case 0x1e: ;
    if (*((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1e)))) == *((uint *)GEN_TOP((pbVar3 + (sVar6 - 0x1e))))) {
      iVar2 = 0;
    }
    else {
      uVar5 = *((uint *)GEN_TOP((pbVar1 + (sVar6 - 0x1e)))) & 0xff;
      uVar4 = (uint)pbVar3[sVar6 - 0x1e];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1d];
      uVar4 = (uint)pbVar3[sVar6 - 0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1c];
      uVar4 = (uint)pbVar3[sVar6 - 0x1c];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x1b] != (uint)pbVar3[sVar6 - 0x1b]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x1b] - (uint)pbVar3[sVar6 - 0x1b])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x19];
      uVar4 = (uint)pbVar3[sVar6 - 0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x18];
      uVar4 = (uint)pbVar3[sVar6 - 0x18];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x17] != (uint)pbVar3[sVar6 - 0x17]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x17] - (uint)pbVar3[sVar6 - 0x17])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x15];
      uVar4 = (uint)pbVar3[sVar6 - 0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x14];
      uVar4 = (uint)pbVar3[sVar6 - 0x14];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x13] != (uint)pbVar3[sVar6 - 0x13]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x13] - (uint)pbVar3[sVar6 - 0x13])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x11];
      uVar4 = (uint)pbVar3[sVar6 - 0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x10];
      uVar4 = (uint)pbVar3[sVar6 - 0x10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xf] != (uint)pbVar3[sVar6 - 0xf]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xf] - (uint)pbVar3[sVar6 - 0xf])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xd];
      uVar4 = (uint)pbVar3[sVar6 - 0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xc];
      uVar4 = (uint)pbVar3[sVar6 - 0xc];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xb] != (uint)pbVar3[sVar6 - 0xb]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xb] - (uint)pbVar3[sVar6 - 0xb])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar4 = (uint)pbVar3[sVar6 - 9];
      uVar5 = (uint)pbVar1[sVar6 - 9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar4 = (uint)pbVar3[sVar6 - 8];
      uVar5 = (uint)pbVar1[sVar6 - 8];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 7] != (uint)pbVar3[sVar6 - 7]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 7] - (uint)pbVar3[sVar6 - 7])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 5];
      uVar4 = (uint)pbVar3[sVar6 - 5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 4];
      uVar4 = (uint)pbVar3[sVar6 - 4];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 3] != (uint)pbVar3[sVar6 - 3]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 3] - (uint)pbVar3[sVar6 - 3])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1e];
      uVar4 = (uint)pbVar3[sVar6 - 0x1e];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1d];
      uVar4 = (uint)pbVar3[sVar6 - 0x1d];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x1c] != (uint)pbVar3[sVar6 - 0x1c]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x1c] - (uint)pbVar3[sVar6 - 0x1c])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x1a];
      uVar4 = (uint)pbVar3[sVar6 - 0x1a];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x19];
      uVar4 = (uint)pbVar3[sVar6 - 0x19];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x18] != (uint)pbVar3[sVar6 - 0x18]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x18] - (uint)pbVar3[sVar6 - 0x18])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x16];
      uVar4 = (uint)pbVar3[sVar6 - 0x16];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x15];
      uVar4 = (uint)pbVar3[sVar6 - 0x15];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x14] != (uint)pbVar3[sVar6 - 0x14]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x14] - (uint)pbVar3[sVar6 - 0x14])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x12];
      uVar4 = (uint)pbVar3[sVar6 - 0x12];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0x11];
      uVar4 = (uint)pbVar3[sVar6 - 0x11];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0x10] != (uint)pbVar3[sVar6 - 0x10]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0x10] - (uint)pbVar3[sVar6 - 0x10])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xe];
      uVar4 = (uint)pbVar3[sVar6 - 0xe];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 0xd];
      uVar4 = (uint)pbVar3[sVar6 - 0xd];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 0xc] != (uint)pbVar3[sVar6 - 0xc]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 0xc] - (uint)pbVar3[sVar6 - 0xc])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 10];
      uVar4 = (uint)pbVar3[sVar6 - 10];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 9];
      uVar4 = (uint)pbVar3[sVar6 - 9];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 8] != (uint)pbVar3[sVar6 - 8]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 8] - (uint)pbVar3[sVar6 - 8])) * 2 - 1;
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
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 6];
      uVar4 = (uint)pbVar3[sVar6 - 6];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      uVar5 = (uint)pbVar1[sVar6 - 5];
      uVar4 = (uint)pbVar3[sVar6 - 5];
      if ((uVar5 != uVar4) &&
         (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
        return iVar2;
      }
      iVar2 = 0;
      if ((uint)pbVar1[sVar6 - 4] != (uint)pbVar3[sVar6 - 4]) {
        iVar2 = (uint)(0 < (int)((uint)pbVar1[sVar6 - 4] - (uint)pbVar3[sVar6 - 4])) * 2 - 1;
      }
    }
    if (iVar2 != 0) {
      return iVar2;
    }
switchD_00c623ef_caseD_3: ;
    uVar5 = (uint)pbVar1[sVar6 - 3];
    uVar4 = (uint)pbVar3[sVar6 - 3];
    if ((uVar5 != uVar4) &&
       (iVar2 = (uint)(uVar5 != uVar4 && -1 < (int)(uVar5 - uVar4)) * 2 - 1, iVar2 != 0)) {
      return iVar2;
    }
    goto LAB_00c62f2d;
  }
}

/* ref: __crtGetStringTypeA_stat */
GEN_LIB GEN_NOFRAME int F_00c634bc(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(ulong param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(ushort * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc634bcu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_2 = (ulong)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_FRAME_DECL(0x1000c, 4);
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int cchSrc;
  BOOL BVar4;
  LPCWSTR lpSrcStr;
  
  (*(uint *)(gen_frame + 0x10004)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14);
  lpSrcStr = (LPCWSTR)0x0;
  (*(BOOL *)(gen_frame + 0x10000)) = 0;
  if (param_6 == 0) {
    param_6 = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  }
  uVar2 = gen_imp_MultiByteToWideChar(param_6,(uint)(param_7 != 0) * 8 + 1,param_3,param_4,0,0);
  if (uVar2 == 0) {
    (*((undefined4 *)GEN_TOP((gen_frame + 0x8)))) = 0xc635a1;
    return 0;
  }
  if ((0 < (int)uVar2) && (uVar2 < 0x7ffffff1)) {
    uVar1 = uVar2 * 2 + 8;
    if (uVar1 < 0x401) {
      puVar3 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
      *puVar3 = 0xcccc;
      lpSrcStr = (LPCWSTR)(gen_frame + 0x0);
      if (0) goto LAB_00c63550;
    }
    else {
      puVar3 = F_00c51787(uVar1);
      lpSrcStr = (LPCWSTR)0x0;
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00c63550;
      *puVar3 = 0xdddd;
    }
    lpSrcStr = (LPCWSTR)(puVar3 + 2);
  }
LAB_00c63550: ;
  if (lpSrcStr == (LPCWSTR)0x0) {
    (*((undefined4 *)GEN_TOP((gen_frame + 0x8)))) = 0xc635a1;
    return 0;
  }
  F_00c48350(lpSrcStr,0,uVar2 * 2);
  cchSrc = gen_imp_MultiByteToWideChar(param_6,1,param_3,param_4,lpSrcStr,uVar2);
  if (cchSrc != 0) {
    BVar4 = gen_imp_GetStringTypeW(param_2,lpSrcStr,cchSrc,param_5);
    (*(BOOL *)(gen_frame + 0x10000)) = BVar4;
  }
  F_00c4f78f(lpSrcStr);
  (*((undefined4 *)GEN_TOP((gen_frame + 0x8)))) = 0xc635a1;
  return (*(BOOL *)(gen_frame + 0x10000));
}

/* ref: ___crtGetStringTypeA */
GEN_LIB GEN_NOFRAME BOOL F_00c635a3(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(ulong param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(ushort * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc635a3u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_2 = (ulong)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  iVar1 = F_00c634bc((undefined *)((byte *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5,param_6,param_8,
                     (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: __fltin2 */
GEN_LIB GEN_NOFRAME undefined * F_00c635e3(GEN_P(undefined * _Flt, unsigned int gen_a0), GEN_P(char * _Str, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc635e3u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Flt = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x28, 8);
  uint uVar1;
  undefined4 IVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(char * PTR32 *)(gen_frame + 0x4)) = _Str;
  uVar3 = 0;
  uVar1 = F_00c63c8d(((undefined *)(gen_frame + 0x14)),&(*(int *)(gen_frame + 0x0)),_Str,0,0,0,0,_Locale);
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  if ((uVar1 & 4) == 0) {
    IVar2 = F_00c7c314(((undefined *)(gen_frame + 0x14)),&(*(undefined8 *)(gen_frame + 0x8)));
    if ((((*(uint *)(gen_frame + 0x10)) & 2) != 0) || (IVar2 == (1))) {
      uVar3 = 0x80;
    }
    if ((((*(uint *)(gen_frame + 0x10)) & 1) != 0) || (IVar2 == (2))) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) + 4)) = 0;
  }
  (*(int *)(((char *)(_Flt) + 4))) = (*(int *)(gen_frame + 0x0)) - (int)(*(char * PTR32 *)(gen_frame + 0x4));
  *(undefined4 *)&(*(double *)(((char *)(_Flt) + 16))) = (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) + 0));
  *((undefined4 *)GEN_TOP(((int)&(*(double *)(((char *)(_Flt) + 16))) + 4))) = (*(undefined4 *)((char *)&(*(double *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) + 4));
  (*(int *)((char *)(_Flt))) = uVar3;
  return _Flt;
}

/* ref: ___addl */
GEN_LIB GEN_NOFRAME uint F_00c6368a(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc6368au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
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
GEN_LIB GEN_NOFRAME uint F_00c636ae(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc636aeu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c636e1(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc636e1u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return (uint)param_1;
}

/* ref: ___ld12mul */
GEN_LIB GEN_NOFRAME uint F_00c63713(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc63713u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  int * piVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort * puVar10;
  ushort uVar11;
  short * psVar12;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  piVar6 = param_1;
  uVar9 = *((ushort *)GEN_TOP(((int)param_2 + 10)));
  (*(int *)(gen_frame + 0x0)) = 0;
  ((short *)(gen_frame + 0x20))[0] = 0;
  ((short *)(gen_frame + 0x20))[1] = 0;
  ((short *)(gen_frame + 0x20))[2] = 0;
  ((short *)(gen_frame + 0x20))[3] = 0;
  uVar3 = (uVar9 ^ *((ushort *)GEN_TOP(((int)param_1 + 10)))) & 0x8000;
  uVar7 = *((ushort *)GEN_TOP(((int)param_1 + 10))) & 0x7fff;
  uVar9 = uVar9 & 0x7fff;
  uVar11 = uVar9 + uVar7;
  if (((uVar7 < 0x7fff) && (uVar9 < 0x7fff)) && (uVar11 < 0xbffe)) {
    if (0x3fbf < uVar11) {
      if (((uVar7 == 0) && (uVar11 = uVar11 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
         ((param_1[1] == 0 && (*param_1 == 0)))) {
        *((undefined2 *)GEN_TOP(((int)param_1 + 10))) = 0;
        return (uint)piVar6;
      }
      if (((uVar9 != 0) || (uVar11 = uVar11 + 1, (param_2[2] & 0x7fffffffU) != 0)) ||
         ((param_2[1] != 0 || (*param_2 != 0)))) {
        (*(int *)(gen_frame + 0x10)) = 0;
        psVar12 = ((short *)(gen_frame + 0x20));
        (*(int *)(gen_frame + 0x14)) = 5;
        do {
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x14));
          if (0 < (*(int *)(gen_frame + 0x14))) {
            (*(ushort * PTR32 *)(gen_frame + 0x8)) = (ushort *)(param_2 + 2);
            puVar10 = ((ushort *)GEN_TOP(((int)param_1 + (*(int *)(gen_frame + 0x10)) * 2)));
            do {
              bVar4 = false;
              uVar1 = *(uint *)(psVar12 - 2) + (uint)*puVar10 * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8));
              if ((uVar1 < *(uint *)(psVar12 - 2)) || (uVar1 < (uint)*puVar10 * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x8)))) {
                bVar4 = true;
              }
              *(uint *)(psVar12 - 2) = uVar1;
              if (bVar4) {
                *psVar12 = *psVar12 + 1;
              }
              (*(ushort * PTR32 *)(gen_frame + 0x8)) = (*(ushort * PTR32 *)(gen_frame + 0x8)) - 1;
              puVar10 = puVar10 + 1;
              (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
            } while (0 < (*(int *)(gen_frame + 0x4)));
          }
          uVar1 = CONCAT22(((short *)(gen_frame + 0x20))[1],((short *)(gen_frame + 0x20))[0]);
          psVar12 = psVar12 + 1;
          (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
          (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) - 1;
        } while (0 < (*(int *)(gen_frame + 0x14)));
        uVar11 = uVar11 + 0xc002;
        uVar8 = uVar1;
        if ((short)uVar11 < 1) {
LAB_00c6389f: ;
          (*(ushort *)(gen_frame + 0x1e)) = 0;
          (*(undefined1 *)(gen_frame + 0x1d)) = 0;
          (*(byte *)(gen_frame + 0x1c)) = 0;
          uVar11 = uVar11 - 1;
          uVar8 = uVar1;
          if ((short)uVar11 < 0) {
            (*(uint *)(gen_frame + 0x18)) = (uint)(ushort)-uVar11;
            uVar11 = 0;
            do {
              if (((*(byte *)(gen_frame + 0x1c)) & 1) != 0) {
                (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
              }
              iVar2 = CONCAT22(((short *)(gen_frame + 0x20))[3],((short *)(gen_frame + 0x20))[2]);
              ((short *)(gen_frame + 0x20))[2] = (short)(CONCAT22(((short *)(gen_frame + 0x20))[3],((short *)(gen_frame + 0x20))[2]) >> 1);
              ((short *)(gen_frame + 0x20))[3] = (ushort)((short *)(gen_frame + 0x20))[3] >> 1;
              ((short *)(gen_frame + 0x20))[1] = (ushort)(uVar1 >> 0x11) | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
              uVar8 = CONCAT22((*(ushort *)(gen_frame + 0x1e)),CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) >> 1;
              (*(ushort *)(gen_frame + 0x1e)) = (*(ushort *)(gen_frame + 0x1e)) >> 1 | (ushort)((uVar1 << 0x1f) >> 0x10);
              (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) - 1;
              ((short *)(gen_frame + 0x20))[0] = (short)(uVar1 >> 1);
              uVar1 = CONCAT22(((short *)(gen_frame + 0x20))[1],((short *)(gen_frame + 0x20))[0]);
              (*(byte *)(gen_frame + 0x1c)) = (byte)uVar8;
              (*(undefined1 *)(gen_frame + 0x1d)) = (undefined1)(uVar8 >> 8);
            } while ((*(uint *)(gen_frame + 0x18)) != 0);
            uVar8 = CONCAT22(((short *)(gen_frame + 0x20))[1],((short *)(gen_frame + 0x20))[0]);
            if ((*(int *)(gen_frame + 0x0)) != 0) {
              (*(byte *)(gen_frame + 0x1c)) = (*(byte *)(gen_frame + 0x1c)) | 1;
              uVar8 = uVar1;
            }
          }
        }
        else {
          do {
            uVar1 = uVar8;
            if ((((short *)(gen_frame + 0x20))[3] & 0x8000U) != 0) break;
            uVar1 = uVar8 * 2;
            iVar2 = (int)CONCAT22(((short *)(gen_frame + 0x20))[3],((short *)(gen_frame + 0x20))[2]) * 2;
            ((short *)(gen_frame + 0x20))[2] = (ushort)iVar2 | (ushort)(uVar8 >> 0x1f);
            uVar11 = uVar11 - 1;
            ((short *)(gen_frame + 0x20))[3] = (short)((uint)iVar2 >> 0x10);
            uVar8 = uVar1;
          } while (0 < (short)uVar11);
          (*(ushort *)(gen_frame + 0x1e)) = 0;
          (*(undefined1 *)(gen_frame + 0x1d)) = 0;
          (*(byte *)(gen_frame + 0x1c)) = 0;
          uVar8 = uVar1;
          if ((short)uVar11 < 1) goto LAB_00c6389f;
        }
        ((short *)(gen_frame + 0x20))[1] = (short)(uVar8 >> 0x10);
        ((short *)(gen_frame + 0x20))[0] = (short)uVar8;
        if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) ||
           (iVar5 = (int)CONCAT22(((short *)(gen_frame + 0x20))[2],((short *)(gen_frame + 0x20))[1]),
           iVar2 = (int)CONCAT22(((short *)(gen_frame + 0x20))[0],(*(ushort *)(gen_frame + 0x1e))),
           (CONCAT22((*(ushort *)(gen_frame + 0x1e)),CONCAT11((*(undefined1 *)(gen_frame + 0x1d)),(*(byte *)(gen_frame + 0x1c)))) & 0x1ffff) == 0x18000)) {
          if ((int)CONCAT22(((short *)(gen_frame + 0x20))[0],(*(ushort *)(gen_frame + 0x1e))) == -1) {
            iVar2 = 0;
            if ((int)CONCAT22(((short *)(gen_frame + 0x20))[2],((short *)(gen_frame + 0x20))[1]) == -1) {
              if (((short *)(gen_frame + 0x20))[3] == 0xffff) {
                ((short *)(gen_frame + 0x20))[3] = 0x8000;
                uVar11 = uVar11 + 1;
                iVar5 = 0;
                iVar2 = 0;
              }
              else {
                ((short *)(gen_frame + 0x20))[3] = ((short *)(gen_frame + 0x20))[3] + 1;
                iVar5 = 0;
                iVar2 = 0;
              }
            }
            else {
              iVar5 = (int)CONCAT22(((short *)(gen_frame + 0x20))[2],((short *)(gen_frame + 0x20))[1]) + 1;
            }
          }
          else {
            iVar2 = (int)CONCAT22(((short *)(gen_frame + 0x20))[0],(*(ushort *)(gen_frame + 0x1e))) + 1;
            iVar5 = (int)CONCAT22(((short *)(gen_frame + 0x20))[2],((short *)(gen_frame + 0x20))[1]);
          }
        }
        ((short *)(gen_frame + 0x20))[0] = (short)((uint)iVar2 >> 0x10);
        (*(ushort *)(gen_frame + 0x1e)) = (ushort)iVar2;
        ((short *)(gen_frame + 0x20))[2] = (short)((uint)iVar5 >> 0x10);
        ((short *)(gen_frame + 0x20))[1] = (short)iVar5;
        if (uVar11 < 0x7fff) {
          *(ushort *)param_1 = (*(ushort *)(gen_frame + 0x1e));
          *((uint *)GEN_TOP(((int)param_1 + 2))) = CONCAT22(((short *)(gen_frame + 0x20))[1],((short *)(gen_frame + 0x20))[0]);
          *((uint *)GEN_TOP(((int)param_1 + 6))) = CONCAT22(((short *)(gen_frame + 0x20))[3],((short *)(gen_frame + 0x20))[2]);
          *((ushort *)GEN_TOP(((int)param_1 + 10))) = uVar11 | uVar3;
          return (uint)piVar6;
        }
        goto LAB_00c6395f;
      }
    }
    param_1[2] = 0;
  }
  else {
LAB_00c6395f: ;
    param_1[2] = ((uVar3 == 0) - 1 & 0x80000000) + 0x7fff8000;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)piVar6;
}

/* ref: ___multtenpow12 */
GEN_LIB GEN_NOFRAME uint F_00c6398e(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc6398eu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL(0x44, 12);
  undefined * puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ushort * puVar10;
  uint uVar11;
  ushort uVar12;
  ushort * puVar13;
  uint uVar14;
  ushort uVar15;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = &REFG(undefined, 0x134bea0);
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      (*(undefined * PTR32 *)(gen_frame + 0x1c)) = &REFG(undefined, 0x134c000);
    }
    uVar7 = param_2;
    puVar1 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
      uVar7 = param_2;
    }
joined_r0x00c639d6: ;
    if (uVar7 != 0) {
      puVar1 = puVar1 + 0x54;
      uVar14 = (int)uVar7 >> 3;
      uVar9 = uVar7 & 7;
      uVar7 = uVar14;
      if (uVar9 != 0) {
        puVar10 = (ushort *)(puVar1 + uVar9 * 0xc);
        if (0x7fff < *puVar10) {
          uVar3 = *(undefined4 *)puVar10;
          (*(ushort *)(gen_frame + 0x24)) = (ushort)uVar3;
          (*(undefined2 *)(gen_frame + 0x26)) = (undefined2)((uint)uVar3 >> 0x10);
          (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)*(undefined4 *)(puVar10 + 2);
          (*(undefined2 *)(gen_frame + 0x2a)) = (undefined2)((uint)*(undefined4 *)(puVar10 + 2) >> 0x10);
          (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(puVar10 + 4);
          iVar2 = (int)CONCAT22((*(undefined2 *)(gen_frame + 0x28)),(*(undefined2 *)(gen_frame + 0x26))) - 1;
          (*(undefined2 *)(gen_frame + 0x26)) = (undefined2)iVar2;
          (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)((uint)iVar2 >> 0x10);
          puVar10 = &(*(ushort *)(gen_frame + 0x24));
        }
        uVar8 = *((ushort *)GEN_TOP(((int)param_1 + 10)));
        (*(int *)(gen_frame + 0x8)) = 0;
        (*(byte *)(gen_frame + 0x30)) = 0;
        (*(undefined1 *)(gen_frame + 0x31)) = 0;
        (*(ushort *)(gen_frame + 0x32)) = 0;
        ((ushort *)(gen_frame + 0x34))[0] = 0;
        ((ushort *)(gen_frame + 0x34))[1] = 0;
        ((ushort *)(gen_frame + 0x34))[2] = 0;
        ((ushort *)(gen_frame + 0x34))[3] = 0;
        uVar5 = (puVar10[5] ^ uVar8) & 0x8000;
        uVar8 = uVar8 & 0x7fff;
        uVar12 = puVar10[5] & 0x7fff;
        uVar15 = uVar12 + uVar8;
        if (((uVar8 < 0x7fff) && (uVar12 < 0x7fff)) && (uVar15 < 0xbffe)) {
          if (0x3fbf < uVar15) {
            if (((uVar8 == 0) && (uVar15 = uVar15 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
               ((param_1[1] == 0 && (*param_1 == 0)))) {
              *((undefined2 *)GEN_TOP(((int)param_1 + 10))) = 0;
            }
            else if (((uVar12 == 0) &&
                     (uVar15 = uVar15 + 1, (*(uint *)(puVar10 + 4) & 0x7fffffff) == 0)) &&
                    ((*(int *)(puVar10 + 2) == 0 && (*(int *)puVar10 == 0)))) {
              param_1[2] = 0;
              param_1[1] = 0;
              *param_1 = 0;
            }
            else {
              (*(int *)(gen_frame + 0xc)) = 0;
              puVar13 = ((ushort *)(gen_frame + 0x34));
              (*(int *)(gen_frame + 0x20)) = 5;
              do {
                (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x20));
                if (0 < (*(int *)(gen_frame + 0x20))) {
                  (*(ushort * PTR32 *)(gen_frame + 0x0)) = puVar10 + 4;
                  (*(ushort * PTR32 *)(gen_frame + 0x4)) = ((ushort *)GEN_TOP(((*(int *)(gen_frame + 0xc)) * 2 + (int)param_1)));
                  do {
                    bVar6 = false;
                    uVar14 = *(uint *)(puVar13 - 2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x4)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x0));
                    if ((uVar14 < *(uint *)(puVar13 - 2)) ||
                       (uVar14 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0x4)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x0)))) {
                      bVar6 = true;
                    }
                    *(uint *)(puVar13 - 2) = uVar14;
                    if (bVar6) {
                      *puVar13 = *puVar13 + 1;
                    }
                    (*(ushort * PTR32 *)(gen_frame + 0x4)) = (*(ushort * PTR32 *)(gen_frame + 0x4)) + 1;
                    (*(ushort * PTR32 *)(gen_frame + 0x0)) = (*(ushort * PTR32 *)(gen_frame + 0x0)) - 1;
                    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) - 1;
                  } while (0 < (*(int *)(gen_frame + 0x14)));
                }
                puVar13 = puVar13 + 1;
                (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
                (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) - 1;
              } while (0 < (*(int *)(gen_frame + 0x20)));
              uVar15 = uVar15 + 0xc002;
              if ((short)uVar15 < 1) {
LAB_00c63b90: ;
                uVar15 = uVar15 - 1;
                if ((short)uVar15 < 0) {
                  uVar14 = (uint)(ushort)-uVar15;
                  uVar15 = 0;
                  do {
                    if (((*(byte *)(gen_frame + 0x30)) & 1) != 0) {
                      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
                    }
                    iVar4 = CONCAT22(((ushort *)(gen_frame + 0x34))[3],((ushort *)(gen_frame + 0x34))[2]);
                    uVar9 = CONCAT22(((ushort *)(gen_frame + 0x34))[1],((ushort *)(gen_frame + 0x34))[0]);
                    iVar2 = CONCAT22(((ushort *)(gen_frame + 0x34))[1],((ushort *)(gen_frame + 0x34))[0]);
                    ((ushort *)(gen_frame + 0x34))[2] = (ushort)(CONCAT22(((ushort *)(gen_frame + 0x34))[3],((ushort *)(gen_frame + 0x34))[2]) >> 1);
                    ((ushort *)(gen_frame + 0x34))[3] = ((ushort *)(gen_frame + 0x34))[3] >> 1;
                    ((ushort *)(gen_frame + 0x34))[1] = ((ushort *)(gen_frame + 0x34))[1] >> 1 | (ushort)((uint)(iVar4 << 0x1f) >> 0x10);
                    uVar11 = CONCAT22((*(ushort *)(gen_frame + 0x32)),CONCAT11((*(undefined1 *)(gen_frame + 0x31)),(*(byte *)(gen_frame + 0x30)))) >> 1;
                    (*(ushort *)(gen_frame + 0x32)) = (*(ushort *)(gen_frame + 0x32)) >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                    uVar14 = uVar14 - 1;
                    ((ushort *)(gen_frame + 0x34))[0] = (ushort)(uVar9 >> 1);
                    (*(byte *)(gen_frame + 0x30)) = (byte)uVar11;
                    (*(undefined1 *)(gen_frame + 0x31)) = (undefined1)(uVar11 >> 8);
                  } while (uVar14 != 0);
                  if ((*(int *)(gen_frame + 0x8)) != 0) {
                    (*(byte *)(gen_frame + 0x30)) = (*(byte *)(gen_frame + 0x30)) | 1;
                  }
                }
              }
              else {
                do {
                  uVar8 = (*(ushort *)(gen_frame + 0x32));
                  if ((((ushort *)(gen_frame + 0x34))[3] & 0x8000) != 0) break;
                  iVar2 = (int)CONCAT22((*(ushort *)(gen_frame + 0x32)),CONCAT11((*(undefined1 *)(gen_frame + 0x31)),(*(byte *)(gen_frame + 0x30)))) << 1;
                  (*(byte *)(gen_frame + 0x30)) = (byte)iVar2;
                  (*(undefined1 *)(gen_frame + 0x31)) = (undefined1)((uint)iVar2 >> 8);
                  (*(ushort *)(gen_frame + 0x32)) = (ushort)((uint)iVar2 >> 0x10);
                  iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[1],((ushort *)(gen_frame + 0x34))[0]) * 2;
                  ((ushort *)(gen_frame + 0x34))[0] = (ushort)iVar2 | uVar8 >> 0xf;
                  iVar4 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[3],((ushort *)(gen_frame + 0x34))[2]) * 2;
                  ((ushort *)(gen_frame + 0x34))[2] = (ushort)iVar4 | ((ushort *)(gen_frame + 0x34))[1] >> 0xf;
                  uVar15 = uVar15 - 1;
                  ((ushort *)(gen_frame + 0x34))[1] = (ushort)((uint)iVar2 >> 0x10);
                  ((ushort *)(gen_frame + 0x34))[3] = (ushort)((uint)iVar4 >> 0x10);
                } while (0 < (short)uVar15);
                if ((short)uVar15 < 1) goto LAB_00c63b90;
              }
              if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x31)),(*(byte *)(gen_frame + 0x30)))) ||
                 (iVar4 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[2],((ushort *)(gen_frame + 0x34))[1]),
                 iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[0],(*(ushort *)(gen_frame + 0x32))),
                 (CONCAT22((*(ushort *)(gen_frame + 0x32)),CONCAT11((*(undefined1 *)(gen_frame + 0x31)),(*(byte *)(gen_frame + 0x30)))) & 0x1ffff) == 0x18000)) {
                if ((int)CONCAT22(((ushort *)(gen_frame + 0x34))[0],(*(ushort *)(gen_frame + 0x32))) == -1) {
                  iVar2 = 0;
                  if ((int)CONCAT22(((ushort *)(gen_frame + 0x34))[2],((ushort *)(gen_frame + 0x34))[1]) == -1) {
                    if (((ushort *)(gen_frame + 0x34))[3] == 0xffff) {
                      ((ushort *)(gen_frame + 0x34))[3] = 0x8000;
                      uVar15 = uVar15 + 1;
                      iVar4 = 0;
                      iVar2 = 0;
                    }
                    else {
                      ((ushort *)(gen_frame + 0x34))[3] = ((ushort *)(gen_frame + 0x34))[3] + 1;
                      iVar4 = 0;
                      iVar2 = 0;
                    }
                  }
                  else {
                    iVar4 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[2],((ushort *)(gen_frame + 0x34))[1]) + 1;
                  }
                }
                else {
                  iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[0],(*(ushort *)(gen_frame + 0x32))) + 1;
                  iVar4 = (int)CONCAT22(((ushort *)(gen_frame + 0x34))[2],((ushort *)(gen_frame + 0x34))[1]);
                }
              }
              ((ushort *)(gen_frame + 0x34))[0] = (ushort)((uint)iVar2 >> 0x10);
              (*(ushort *)(gen_frame + 0x32)) = (ushort)iVar2;
              ((ushort *)(gen_frame + 0x34))[2] = (ushort)((uint)iVar4 >> 0x10);
              ((ushort *)(gen_frame + 0x34))[1] = (ushort)iVar4;
              if (0x7ffe < uVar15) goto LAB_00c63c53;
              *(ushort *)param_1 = (*(ushort *)(gen_frame + 0x32));
              *((uint *)GEN_TOP(((int)param_1 + 2))) = CONCAT22(((ushort *)(gen_frame + 0x34))[1],((ushort *)(gen_frame + 0x34))[0]);
              *((uint *)GEN_TOP(((int)param_1 + 6))) = CONCAT22(((ushort *)(gen_frame + 0x34))[3],((ushort *)(gen_frame + 0x34))[2]);
              *((ushort *)GEN_TOP(((int)param_1 + 10))) = uVar15 | uVar5;
            }
            goto joined_r0x00c639d6;
          }
          param_1[2] = 0;
        }
        else {
LAB_00c63c53: ;
          param_1[2] = ((uVar5 == 0) - 1 & 0x80000000) + 0x7fff8000;
        }
        param_1[1] = 0;
        *param_1 = 0;
      }
      goto joined_r0x00c639d6;
    }
  }
  return (uint)param_1;
}

/* ref: ___strgtold12_l */
GEN_LIB GEN_NOFRAME uint F_00c63c8d(GEN_P(undefined2 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc63c8du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int * param_8 = (int *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL(0x70, 0);
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  char cVar7;
  ushort uVar8;
  int * piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ushort uVar13;
  undefined2 uVar14;
  int iVar15;
  undefined * puVar16;
  char * pcVar17;
  char * pcVar18;
  undefined4 uVar19;
  ushort * puVar20;
  ushort uVar21;
  undefined4 uVar22;
  char * pcVar23;
  ushort * puVar24;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  iVar15 = 0;
  pcVar23 = ((char *)(gen_frame + 0x4c));
  uVar6 = 0;
  (*(int *)(gen_frame + 0x4)) = 1;
  (*(uint *)(gen_frame + 0x20)) = 0;
  bVar3 = false;
  bVar5 = false;
  bVar4 = false;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_8 == ((int *)GEN_TOP(0x0))) {
    piVar9 = F_00c51f85();
    *piVar9 = 0x16;
    F_00c4c305();
    return 0;
  }
  (*(char * PTR32 *)(gen_frame + 0x18)) = param_3;
  for (pcVar17 = param_3;
      (((cVar7 = *pcVar17, cVar7 == ' ' || (cVar7 == '\t')) || (cVar7 == '\n')) || (cVar7 == '\r'));
      pcVar17 = pcVar17 + 1) {
  }
LAB_00c63d0a: ;
  cVar7 = *pcVar17;
  pcVar18 = pcVar17 + 1;
  switch((unsigned int)(uintptr_t)(iVar15)) {
  case 0: ;
    if ((byte)(cVar7 - 0x31U) < 9) {
LAB_00c63d25: ;
      iVar15 = 3;
      goto LAB_00c63d27;
    }
    if (cVar7 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*param_8 + 0xbc)))))) {
LAB_00c63d3c: ;
      iVar15 = 5;
      pcVar17 = pcVar18;
    }
    else if (cVar7 == '+') {
      uVar6 = 0;
      iVar15 = 2;
      pcVar17 = pcVar18;
    }
    else {
      if (cVar7 != '-') {
        if (cVar7 == '0') goto LAB_00c63d56;
        goto LAB_00c63ed2;
      }
      iVar15 = 2;
      uVar6 = 0x8000;
      pcVar17 = pcVar18;
    }
    goto LAB_00c63d0a;
  case 1: ;
    bVar3 = true;
    if ((byte)(cVar7 - 0x31U) < 9) goto LAB_00c63d25;
    if (cVar7 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*param_8 + 0xbc)))))) goto LAB_00c63d8b;
    if ((cVar7 == '+') || (cVar7 == '-')) goto LAB_00c63db5;
    if (cVar7 == '0') goto LAB_00c63d56;
    goto LAB_00c63d9b;
  case 2: ;
    if ((byte)(cVar7 - 0x31U) < 9) goto LAB_00c63d25;
    if (cVar7 == *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*param_8 + 0xbc)))))) goto LAB_00c63d3c;
    pcVar17 = (*(char * PTR32 *)(gen_frame + 0x18));
    if (cVar7 != '0') goto LAB_00c63efb;
LAB_00c63d56: ;
    iVar15 = 1;
    pcVar17 = pcVar18;
    goto LAB_00c63d0a;
  case 3: ;
    while (('/' < cVar7 && (cVar7 < ':'))) {
      if ((*(uint *)(gen_frame + 0x20)) < 0x19) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
        *pcVar23 = cVar7 - 0x30;
        pcVar23 = pcVar23 + 1;
      }
      else {
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      }
      cVar7 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    }
    if (cVar7 != *((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*param_8 + 0xbc)))))) goto LAB_00c63e23;
LAB_00c63d8b: ;
    bVar3 = true;
    iVar15 = 4;
    pcVar17 = pcVar18;
    goto LAB_00c63d0a;
  case 4: ;
    bVar5 = true;
    if ((*(uint *)(gen_frame + 0x20)) == 0) {
      while (cVar7 == '0') {
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) - 1;
        cVar7 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
    }
    while (('/' < cVar7 && (cVar7 < ':'))) {
      if ((*(uint *)(gen_frame + 0x20)) < 0x19) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
        *pcVar23 = cVar7 - 0x30;
        pcVar23 = pcVar23 + 1;
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) - 1;
      }
      cVar7 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    }
LAB_00c63e23: ;
    if ((cVar7 == '+') || (cVar7 == '-')) {
LAB_00c63db5: ;
      bVar3 = true;
      iVar15 = 0xb;
      pcVar17 = pcVar18 - 1;
    }
    else {
LAB_00c63d9b: ;
      bVar3 = true;
      if ((cVar7 < 'D') || (('E' < cVar7 && (1 < (byte)(cVar7 + 0x9cU))))) goto LAB_00c63ed2;
      iVar15 = 6;
      pcVar17 = pcVar18;
    }
    goto LAB_00c63d0a;
  case 5: ;
    bVar5 = true;
    pcVar17 = (*(char * PTR32 *)(gen_frame + 0x18));
    if ((byte)(cVar7 - 0x30U) < 10) {
      iVar15 = 4;
      goto LAB_00c63d27;
    }
    goto LAB_00c63efb;
  case 6: ;
    (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar17 - 1;
    if (8 < (byte)(cVar7 - 0x31U)) {
      if (cVar7 == '+') goto LAB_00c63eb9;
      if (cVar7 == '-') goto LAB_00c63ead;
LAB_00c63ea0: ;
      pcVar17 = (*(char * PTR32 *)(gen_frame + 0x18));
      if (cVar7 != '0') goto LAB_00c63efb;
      iVar15 = 8;
      pcVar17 = pcVar18;
      goto LAB_00c63d0a;
    }
    break;
  case 7: ;
    if (8 < (byte)(cVar7 - 0x31U)) goto LAB_00c63ea0;
    break;
  case 8: ;
    bVar4 = true;
    while (cVar7 == '0') {
      cVar7 = *pcVar18;
      pcVar18 = pcVar18 + 1;
    }
    if (8 < (byte)(cVar7 - 0x31U)) goto LAB_00c63ed2;
    break;
  case 9: ;
    bVar4 = true;
    (*(int *)(gen_frame + 0x8)) = 0;
    goto LAB_00c63f5d;
  default: ;
    goto switchD_00c63d16_caseD_a;
  case 0xb: ;
    if (param_7 != 0) {
      (*(char * PTR32 *)(gen_frame + 0x18)) = pcVar17;
      if (cVar7 == '+') {
LAB_00c63eb9: ;
        iVar15 = 7;
        pcVar17 = pcVar18;
      }
      else {
        if (cVar7 != '-') goto LAB_00c63efb;
LAB_00c63ead: ;
        (*(int *)(gen_frame + 0x4)) = -1;
        iVar15 = 7;
        pcVar17 = pcVar18;
      }
      goto LAB_00c63d0a;
    }
    iVar15 = 10;
    pcVar18 = pcVar17;
switchD_00c63d16_caseD_a: ;
    pcVar17 = pcVar18;
    if (iVar15 != 10) goto LAB_00c63d0a;
    goto LAB_00c63efb;
  }
  iVar15 = 9;
LAB_00c63d27: ;
  pcVar17 = pcVar18 - 1;
  goto LAB_00c63d0a;
LAB_00c63f5d: ;
  if ((cVar7 < '0') || ('9' < cVar7)) goto LAB_00c63f78;
  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) * 10 - 0x30 + (int)cVar7;
  if ((*(int *)(gen_frame + 0x8)) < 0x1451) {
    cVar7 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_00c63f5d;
  }
  (*(int *)(gen_frame + 0x8)) = 0x1451;
LAB_00c63f78: ;
  while (('/' < cVar7 && (cVar7 < ':'))) {
    cVar7 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_00c63ed2: ;
  pcVar17 = pcVar18 - 1;
LAB_00c63efb: ;
  *param_2 = pcVar17;
  if (bVar3) {
    if (0x18 < (*(uint *)(gen_frame + 0x20))) {
      if ('\x04' < (*(char *)(gen_frame + 0x63))) {
        (*(char *)(gen_frame + 0x63)) = (*(char *)(gen_frame + 0x63)) + '\x01';
      }
      pcVar23 = pcVar23 - 1;
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x20)) = 0x18;
    }
    if ((*(uint *)(gen_frame + 0x20)) != 0) {
      while (pcVar23 = pcVar23 - 1, *pcVar23 == '\0') {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
        (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      }
      F_00c7cf04(((char *)(gen_frame + 0x4c)),(*(uint *)(gen_frame + 0x20)),&(*(int *)(gen_frame + 0x30)));
      uVar12 = CONCAT22((*(ushort *)(gen_frame + 0x3a)),(*(ushort *)(gen_frame + 0x38)));
      iVar2 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)),(undefined2)(*(int *)(gen_frame + 0x34)));
      iVar15 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
      iVar10 = (*(int *)(gen_frame + 0x8));
      if ((*(int *)(gen_frame + 0x4)) < 0) {
        iVar10 = -(*(int *)(gen_frame + 0x8));
      }
      (*(char * PTR32 *)(gen_frame + 0x18)) = ((char *)GEN_TOP((iVar10 + (*(int *)(gen_frame + 0x1c)))));
      if (!bVar4) {
        (*(char * PTR32 *)(gen_frame + 0x18)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x18)) + param_5)));
      }
      if (!bVar5) {
        (*(char * PTR32 *)(gen_frame + 0x18)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x18)) - param_6)));
      }
      if (0x1450 < (int)(*(char * PTR32 *)(gen_frame + 0x18))) {
        uVar22 = 0;
        uVar13 = 0x7fff;
        uVar19 = 0x80000000;
        uVar14 = 0;
        (*(uint *)(gen_frame + 0x0)) = 2;
        goto LAB_00c64311;
      }
      if (-0x1451 < (int)(*(char * PTR32 *)(gen_frame + 0x18))) {
        puVar16 = &REFG(undefined, 0x134bea0);
        if ((*(char * PTR32 *)(gen_frame + 0x18)) != ((char *)GEN_TOP(0x0))) {
          if ((int)(*(char * PTR32 *)(gen_frame + 0x18)) < 0) {
            (*(char * PTR32 *)(gen_frame + 0x18)) = ((char *)GEN_TOP(-(int)(*(char * PTR32 *)(gen_frame + 0x18))));
            puVar16 = &REFG(undefined, 0x134c000);
          }
          if (param_4 == 0) {
            (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
          }
          iVar15 = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)),(undefined2)(*(int *)(gen_frame + 0x30)));
          pcVar23 = (*(char * PTR32 *)(gen_frame + 0x18));
          iVar2 = (int)CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)),(undefined2)(*(int *)(gen_frame + 0x34)));
          uVar12 = CONCAT22((*(ushort *)(gen_frame + 0x3a)),(*(ushort *)(gen_frame + 0x38)));
joined_r0x00c64005: ;
          if (pcVar23 != ((char *)GEN_TOP(0x0))) {
            (*(ushort *)(gen_frame + 0x3a)) = (ushort)(uVar12 >> 0x10);
            uVar1 = (int)((int)(uintptr_t)pcVar23) >> 3;
            puVar16 = puVar16 + 0x54;
            uVar11 = (uint)pcVar23 & 7;
            pcVar23 = ((char *)GEN_TOP(uVar1));
            if (uVar11 != 0) {
              puVar20 = (ushort *)(puVar16 + uVar11 * 0xc);
              if (0x7fff < *puVar20) {
                uVar22 = *(undefined4 *)puVar20;
                (*(ushort *)(gen_frame + 0x24)) = (ushort)uVar22;
                (*(undefined2 *)(gen_frame + 0x26)) = (undefined2)((uint)uVar22 >> 0x10);
                (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)*(undefined4 *)(puVar20 + 2);
                (*(undefined2 *)(gen_frame + 0x2a)) = (undefined2)((uint)*(undefined4 *)(puVar20 + 2) >> 0x10);
                (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(puVar20 + 4);
                iVar10 = (int)CONCAT22((*(undefined2 *)(gen_frame + 0x28)),(*(undefined2 *)(gen_frame + 0x26))) - 1;
                (*(undefined2 *)(gen_frame + 0x26)) = (undefined2)iVar10;
                (*(undefined2 *)(gen_frame + 0x28)) = (undefined2)((uint)iVar10 >> 0x10);
                puVar20 = &(*(ushort *)(gen_frame + 0x24));
              }
              (*(int *)(gen_frame + 0x1c)) = 0;
              (*(byte *)(gen_frame + 0x40)) = 0;
              (*(undefined1 *)(gen_frame + 0x41)) = 0;
              (*(ushort *)(gen_frame + 0x42)) = 0;
              ((ushort *)(gen_frame + 0x44))[0] = 0;
              ((ushort *)(gen_frame + 0x44))[1] = 0;
              ((ushort *)(gen_frame + 0x44))[2] = 0;
              ((ushort *)(gen_frame + 0x44))[3] = 0;
              uVar8 = puVar20[5] & 0x7fff;
              uVar21 = (puVar20[5] ^ (*(ushort *)(gen_frame + 0x3a))) & 0x8000;
              uVar13 = uVar8 + ((*(ushort *)(gen_frame + 0x3a)) & 0x7fff);
              if (((((*(ushort *)(gen_frame + 0x3a)) & 0x7fff) < 0x7fff) && (uVar8 < 0x7fff)) && (uVar13 < 0xbffe)) {
                if (0x3fbf < uVar13) {
                  if ((((uVar12 & 0x7fff0000) == 0) &&
                      (uVar13 = uVar13 + 1, (uVar12 & 0x7fffffff) == 0)) &&
                     ((iVar2 == 0 && (iVar15 == 0)))) {
                    (*(ushort *)(gen_frame + 0x3a)) = 0;
                    uVar12 = uVar12 & 0xffff;
                  }
                  else if (((uVar8 == 0) &&
                           (uVar13 = uVar13 + 1, (*(uint *)(puVar20 + 4) & 0x7fffffff) == 0)) &&
                          ((*(int *)(puVar20 + 2) == 0 && (*(int *)puVar20 == 0)))) {
                    (*(ushort *)(gen_frame + 0x38)) = 0;
                    (*(ushort *)(gen_frame + 0x3a)) = 0;
                    uVar12 = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                    iVar2 = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                    (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
                    iVar15 = 0;
                  }
                  else {
                    (*(int *)(gen_frame + 0x4)) = 0;
                    puVar24 = ((ushort *)(gen_frame + 0x44));
                    (*(int *)(gen_frame + 0x14)) = 5;
                    do {
                      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x14));
                      if (0 < (*(int *)(gen_frame + 0x14))) {
                        (*(ushort * PTR32 *)(gen_frame + 0x10)) = ((ushort *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x4)) * 2)));
                        (*(ushort * PTR32 *)(gen_frame + 0xc)) = puVar20 + 4;
                        do {
                          bVar3 = false;
                          uVar12 = *(uint *)(puVar24 - 2) + (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10));
                          if ((uVar12 < *(uint *)(puVar24 - 2)) ||
                             (uVar12 < (uint)*(*(ushort * PTR32 *)(gen_frame + 0xc)) * (uint)*(*(ushort * PTR32 *)(gen_frame + 0x10)))) {
                            bVar3 = true;
                          }
                          *(uint *)(puVar24 - 2) = uVar12;
                          if (bVar3) {
                            *puVar24 = *puVar24 + 1;
                          }
                          (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
                          (*(ushort * PTR32 *)(gen_frame + 0xc)) = (*(ushort * PTR32 *)(gen_frame + 0xc)) - 1;
                          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) - 1;
                        } while (0 < (*(int *)(gen_frame + 0x8)));
                      }
                      puVar24 = puVar24 + 1;
                      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
                      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) - 1;
                    } while (0 < (*(int *)(gen_frame + 0x14)));
                    uVar13 = uVar13 + 0xc002;
                    if ((short)uVar13 < 1) {
LAB_00c641c1: ;
                      uVar13 = uVar13 - 1;
                      if ((short)uVar13 < 0) {
                        uVar12 = (uint)(ushort)-uVar13;
                        uVar13 = 0;
                        do {
                          if (((*(byte *)(gen_frame + 0x40)) & 1) != 0) {
                            (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
                          }
                          iVar2 = CONCAT22(((ushort *)(gen_frame + 0x44))[3],((ushort *)(gen_frame + 0x44))[2]);
                          uVar1 = CONCAT22(((ushort *)(gen_frame + 0x44))[1],((ushort *)(gen_frame + 0x44))[0]);
                          iVar15 = CONCAT22(((ushort *)(gen_frame + 0x44))[1],((ushort *)(gen_frame + 0x44))[0]);
                          ((ushort *)(gen_frame + 0x44))[2] = (ushort)(CONCAT22(((ushort *)(gen_frame + 0x44))[3],((ushort *)(gen_frame + 0x44))[2]) >> 1);
                          ((ushort *)(gen_frame + 0x44))[3] = ((ushort *)(gen_frame + 0x44))[3] >> 1;
                          ((ushort *)(gen_frame + 0x44))[1] = ((ushort *)(gen_frame + 0x44))[1] >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                          uVar11 = CONCAT22((*(ushort *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) >> 1;
                          (*(ushort *)(gen_frame + 0x42)) = (*(ushort *)(gen_frame + 0x42)) >> 1 | (ushort)((uint)(iVar15 << 0x1f) >> 0x10);
                          uVar12 = uVar12 - 1;
                          ((ushort *)(gen_frame + 0x44))[0] = (ushort)(uVar1 >> 1);
                          (*(byte *)(gen_frame + 0x40)) = (byte)uVar11;
                          (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)(uVar11 >> 8);
                        } while (uVar12 != 0);
                        if ((*(int *)(gen_frame + 0x1c)) != 0) {
                          (*(byte *)(gen_frame + 0x40)) = (*(byte *)(gen_frame + 0x40)) | 1;
                        }
                      }
                    }
                    else {
                      do {
                        uVar8 = (*(ushort *)(gen_frame + 0x42));
                        if ((short)((ushort *)(gen_frame + 0x44))[3] < 0) break;
                        iVar15 = (int)CONCAT22((*(ushort *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) << 1;
                        (*(byte *)(gen_frame + 0x40)) = (byte)iVar15;
                        (*(undefined1 *)(gen_frame + 0x41)) = (undefined1)((uint)iVar15 >> 8);
                        (*(ushort *)(gen_frame + 0x42)) = (ushort)((uint)iVar15 >> 0x10);
                        iVar15 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[1],((ushort *)(gen_frame + 0x44))[0]) * 2;
                        ((ushort *)(gen_frame + 0x44))[0] = (ushort)iVar15 | uVar8 >> 0xf;
                        iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[3],((ushort *)(gen_frame + 0x44))[2]) * 2;
                        ((ushort *)(gen_frame + 0x44))[2] = (ushort)iVar2 | ((ushort *)(gen_frame + 0x44))[1] >> 0xf;
                        uVar13 = uVar13 - 1;
                        ((ushort *)(gen_frame + 0x44))[1] = (ushort)((uint)iVar15 >> 0x10);
                        ((ushort *)(gen_frame + 0x44))[3] = (ushort)((uint)iVar2 >> 0x10);
                      } while (0 < (short)uVar13);
                      if ((short)uVar13 < 1) goto LAB_00c641c1;
                    }
                    if ((0x8000 < CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) ||
                       (iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[2],((ushort *)(gen_frame + 0x44))[1]),
                       iVar15 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[0],(*(ushort *)(gen_frame + 0x42))),
                       (CONCAT22((*(ushort *)(gen_frame + 0x42)),CONCAT11((*(undefined1 *)(gen_frame + 0x41)),(*(byte *)(gen_frame + 0x40)))) & 0x1ffff) == 0x18000)) {
                      if ((int)CONCAT22(((ushort *)(gen_frame + 0x44))[0],(*(ushort *)(gen_frame + 0x42))) == -1) {
                        iVar15 = 0;
                        if ((int)CONCAT22(((ushort *)(gen_frame + 0x44))[2],((ushort *)(gen_frame + 0x44))[1]) == -1) {
                          if (((ushort *)(gen_frame + 0x44))[3] == 0xffff) {
                            ((ushort *)(gen_frame + 0x44))[3] = 0x8000;
                            uVar13 = uVar13 + 1;
                            iVar2 = 0;
                            iVar15 = 0;
                          }
                          else {
                            ((ushort *)(gen_frame + 0x44))[3] = ((ushort *)(gen_frame + 0x44))[3] + 1;
                            iVar2 = 0;
                            iVar15 = 0;
                          }
                        }
                        else {
                          iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[2],((ushort *)(gen_frame + 0x44))[1]) + 1;
                        }
                      }
                      else {
                        iVar15 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[0],(*(ushort *)(gen_frame + 0x42))) + 1;
                        iVar2 = (int)CONCAT22(((ushort *)(gen_frame + 0x44))[2],((ushort *)(gen_frame + 0x44))[1]);
                      }
                    }
                    if (uVar13 < 0x7fff) {
                      (*(int *)(gen_frame + 0x30)) = iVar15;
                      (*(int *)(gen_frame + 0x34)) = iVar2;
                      (*(ushort *)(gen_frame + 0x38)) = ((ushort *)(gen_frame + 0x44))[3];
                      (*(ushort *)(gen_frame + 0x3a)) = uVar13 | uVar21;
                      uVar12 = CONCAT22(uVar13 | uVar21,((ushort *)(gen_frame + 0x44))[3]);
                    }
                    else {
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                      iVar2 = 0;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
                      iVar15 = 0;
                      uVar12 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                      (*(ushort *)(gen_frame + 0x38)) = (ushort)uVar12;
                      (*(ushort *)(gen_frame + 0x3a)) = (ushort)(uVar12 >> 0x10);
                    }
                  }
                  goto joined_r0x00c64005;
                }
                uVar12 = 0;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
              }
              else {
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = 0;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = 0;
                uVar12 = ((uVar21 == 0) - 1 & 0x80000000) + 0x7fff8000;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = 0;
                (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = 0;
              }
              iVar2 = 0;
              iVar15 = 0;
              (*(ushort *)(gen_frame + 0x38)) = (ushort)uVar12;
              (*(ushort *)(gen_frame + 0x3a)) = (ushort)(uVar12 >> 0x10);
            }
            goto joined_r0x00c64005;
          }
        }
        (*(ushort *)(gen_frame + 0x3a)) = (ushort)(uVar12 >> 0x10);
        (*(ushort *)(gen_frame + 0x38)) = (ushort)uVar12;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)) = (undefined2)((uint)iVar2 >> 0x10);
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 0)) = (undefined2)iVar2;
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)) = (undefined2)((uint)iVar15 >> 0x10);
        (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 0)) = (undefined2)iVar15;
        uVar22 = CONCAT22((undefined2)(*(int *)(gen_frame + 0x34)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x30)) + 2)));
        uVar19 = CONCAT22((*(ushort *)(gen_frame + 0x38)),(*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x34)) + 2)));
        uVar14 = (undefined2)(*(int *)(gen_frame + 0x30));
        uVar13 = (*(ushort *)(gen_frame + 0x3a));
        goto LAB_00c64311;
      }
      (*(uint *)(gen_frame + 0x0)) = 1;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = 4;
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar19 = 0;
  uVar22 = 0;
LAB_00c64311: ;
  *param_1 = uVar14;
  param_1[5] = uVar13 | uVar6;
  *(undefined4 *)(param_1 + 1) = uVar22;
  *(undefined4 *)(param_1 + 3) = uVar19;
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: ___STRINGTOLD_L */
GEN_LIB GEN_NOFRAME uint F_00c64369(GEN_P(undefined * pld, unsigned int gen_a0), GEN_P(char * PTR32 * p_end_ptr, unsigned int gen_a1), GEN_P(char * str, unsigned int gen_a2), GEN_P(int mult12, unsigned int gen_a3), GEN_P(undefined * _Locale, unsigned int gen_a4))
{
  GEN_ENTER(0xc64369u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * pld = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * str = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int mult12 = (int)gen_a3;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  uint uVar1;
  undefined4 IVar2;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10);
  uVar1 = F_00c63c8d(((undefined1 *)(gen_frame + 0x0)),p_end_ptr,str,mult12,0,0,0,_Locale);
  IVar2 = F_00c7cdb6(((undefined1 *)(gen_frame + 0x0)),pld);
  if (IVar2 == (1)) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}

/* ref: __aulldvrm */
GEN_LIB GEN_NOFRAME ulonglong GEN_STDCALL F_00c643d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc643d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      iVar5 = iVar5 - 1;
    }
    uVar4 = 0;
  }
  return CONCAT44(uVar4,iVar5);
}

/* ref: __mbsnbicoll_l */
GEN_LIB GEN_NOFRAME int F_00c64465(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2), GEN_P(undefined * _Locale, unsigned int gen_a3))
{
  GEN_ENTER(0xc64465u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
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
  if ((_Str1 == ((uchar *)GEN_TOP(0x0))) || (_Str2 == ((uchar *)GEN_TOP(0x0)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0x7fffffff;
  }
  if (_MaxCount < 0x80000000) {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
      iVar2 = F_00c7d0e8((char *)_Str1,(char *)_Str2,_MaxCount,_Locale);
    }
    else {
      iVar2 = F_00c6fdae((undefined *)((byte *)(gen_frame + 0x0)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 0xc))),0x1001,(LPCSTR)_Str1,
                         _MaxCount,(LPCSTR)_Str2,_MaxCount,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 4))));
      if (iVar2 == 0) goto LAB_00c64520;
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
LAB_00c64520: ;
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  return iVar2;
}

/* ref: __mbsnbicoll */
GEN_LIB GEN_NOFRAME int F_00c64543(GEN_P(uchar * _Str1, unsigned int gen_a0), GEN_P(uchar * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc64543u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uchar * _Str1 = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * _Str2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
  int iVar1;
  
  iVar1 = F_00c64465(_Str1,_Str2,_MaxCount,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: ___wtomb_environ */
GEN_LIB GEN_NOFRAME int F_00c6455d(void)
{
  GEN_ENTER(0xc6455du, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x8, 8);
  gen_size32 _Count;
  char * pcVar1;
  int iVar2;
  int * piVar3;
  
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
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
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar1;
    if (pcVar1 == ((char *)GEN_TOP(0x0))) {
      return -1;
    }
    iVar2 = gen_imp_WideCharToMultiByte(0,0,*piVar3,0xffffffff,pcVar1,_Count,0,0);
    if (iVar2 == 0) break;
    iVar2 = F_00c7d2ad(&(*(char * PTR32 *)(gen_frame + 0x0)),0);
    if ((iVar2 < 0) && ((*(char * PTR32 *)(gen_frame + 0x0)) != ((char *)GEN_TOP(0x0)))) {
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x0)));
      (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
    }
    piVar3 = piVar3 + 1;
    iVar2 = *piVar3;
  }
  F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x0)));
  return -1;
}

/* ref: _calloc */
GEN_LIB GEN_NOFRAME undefined * F_00c645f4(GEN_P(gen_size32 _Count, unsigned int gen_a0), GEN_P(gen_size32 _Size, unsigned int gen_a1))
{
  GEN_ENTER(0xc645f4u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_size32 _Count = (gen_size32)gen_a0;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  undefined * pvVar1;
  int * piVar2;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  pvVar1 = ((undefined *)GEN_TOP(F_00c73804(_Count,_Size,&(*(int *)(gen_frame + 0x0)))));
  if ((pvVar1 == ((undefined *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0x0)) != 0)) {
    piVar2 = F_00c51f85();
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      piVar2 = F_00c51f85();
      *piVar2 = (*(int *)(gen_frame + 0x0));
    }
  }
  return pvVar1;
}

/* ref: _strnlen */
GEN_LIB GEN_NOFRAME gen_size32 F_00c64634(GEN_P(char * _Str, unsigned int gen_a0), GEN_P(gen_size32 _MaxCount, unsigned int gen_a1))
{
  GEN_ENTER(0xc64634u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * _Str = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a1;)
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
GEN_LIB GEN_NOFRAME uint F_00c64651(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc64651u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00c650e4()));
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64662 */
GEN_LIB GEN_NOFRAME uint F_00c64662(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc64662u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00c650ea()));
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64673 */
GEN_LIB GEN_NOFRAME uint F_00c64673(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc64673u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_00c650f0()));
  *puVar1 = param_1;
  return (uint)puVar1;
}

/* ref: FUN_00c64684 */
GEN_LIB GEN_NOFRAME uint F_00c64684(void)
{
  GEN_ENTER(0xc64684u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x50, 0);
  char cVar1;
  long lVar2;
  int * piVar3;
  int eVar4;
  UINT UVar5;
  char * _Str1;
  int iVar6;
  gen_size32 sVar7;
  DWORD DVar8;
  int * piVar9;
  long lVar10;
  char * pcVar11;
  
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x2c;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = &REFG(undefined, 0x12f65f0);
  (*(uint volatile *)(gen_frame + 0x44)) = 0xc64690;
  (*(gen_code32 *)(gen_frame + 0x40)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ 0x12f65f0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x3c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x3c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(long *)(gen_frame + 0x30)) = 0;
  (*(long *)(gen_frame + 0x28)) = 0;
  (*(long *)(gen_frame + 0x24)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(0x0));
  F_00c5aa4f(7);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0x0));
  piVar3 = ((int *)GEN_TOP(F_00c650f6()));
  (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
  eVar4 = F_00c65025(&(*(long *)(gen_frame + 0x30)));
  if (((eVar4 != 0) || (eVar4 = F_00c64fcb(&(*(long *)(gen_frame + 0x28))), eVar4 != 0)) ||
     (eVar4 = F_00c64ff8(&(*(long *)(gen_frame + 0x24))), eVar4 != 0)) goto LAB_00c64788;
  UVar5 = F_00c54b81();
  (*(UINT *)(gen_frame + 0x18)) = UVar5;
  REFG(undefined4, 0x15d759c) = 0;
  REFG(undefined4, 0x134bb5c) = 0xffffffff;
  REFG(undefined4, 0x134bb50) = 0xffffffff;
  _Str1 = F_00c4b3f6(((char *)REFP(0x111b5d0)));
  (*(char * PTR32 *)(gen_frame + 0x10)) = _Str1;
  if ((_Str1 == ((char *)GEN_TOP(0x0))) || (*_Str1 == '\0')) {
    if (REFG(char * PTR32, 0x15d75a0) != ((char *)GEN_TOP(0x0))) {
      F_00c4c68f(REFG(char * PTR32, 0x15d75a0));
      REFG(char * PTR32, 0x15d75a0) = ((char *)GEN_TOP(0x0));
    }
    DVar8 = gen_imp_GetTimeZoneInformation((GEN_LPANY)&REFG(int, 0x15d74f0));
    if (DVar8 != 0xffffffff) {
      REFG(undefined4, 0x15d759c) = 1;
      (*(long *)(gen_frame + 0x30)) = REFG(int, 0x15d74f0) * 0x3c;
      if (REFG(short, 0x15d7536) != 0) {
        (*(long *)(gen_frame + 0x30)) = REFG(int, 0x15d74f0) * 0x3c + REFG(int, 0x15d7544) * 0x3c;
      }
      if ((REFG(short, 0x15d758a) == 0) || (REFG(int, 0x15d7598) == 0)) {
        (*(long *)(gen_frame + 0x28)) = 0;
        (*(long *)(gen_frame + 0x24)) = 0;
      }
      else {
        (*(long *)(gen_frame + 0x28)) = 1;
        (*(long *)(gen_frame + 0x24)) = (REFG(int, 0x15d7598) - REFG(int, 0x15d7544)) * 0x3c;
      }
      iVar6 = gen_imp_WideCharToMultiByte((*(UINT *)(gen_frame + 0x18)),0,&REFG(undefined, 0x15d74f4),0xffffffff,*(*(int * PTR32 *)(gen_frame + 0x2c)),0x3f,0,&(*(int *)(gen_frame + 0x1c)));
      if ((iVar6 == 0) || ((*(int *)(gen_frame + 0x1c)) != 0)) {
        *((undefined1 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x2c)))) = 0;
      }
      else {
        *((undefined1 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x3f))) = 0;
      }
      iVar6 = gen_imp_WideCharToMultiByte((*(UINT *)(gen_frame + 0x18)),0,&REFG(undefined, 0x15d7548),0xffffffff,(*(int * PTR32 *)(gen_frame + 0x2c))[1],0x3f,0,&(*(int *)(gen_frame + 0x1c)));
      if ((iVar6 == 0) || ((*(int *)(gen_frame + 0x1c)) != 0)) {
        *((undefined1 *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x2c))[1])) = 0;
      }
      else {
        *((undefined1 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x2c))[1] + 0x3f))) = 0;
      }
    }
LAB_00c6487d: ;
    (*(int *)(gen_frame + 0x20)) = 1;
  }
  else {
    if (REFG(char * PTR32, 0x15d75a0) != ((char *)GEN_TOP(0x0))) {
      iVar6 = F_00c556e0(_Str1,REFG(char * PTR32, 0x15d75a0));
      if (iVar6 == 0) goto LAB_00c6487d;
      if (REFG(char * PTR32, 0x15d75a0) != ((char *)GEN_TOP(0x0))) {
        F_00c4c68f(REFG(char * PTR32, 0x15d75a0));
      }
    }
    sVar7 = F_00c552f0(_Str1);
    REFG(char * PTR32, 0x15d75a0) = F_00c54c2e(sVar7 + 1);
    if (REFG(char * PTR32, 0x15d75a0) == ((char *)GEN_TOP(0x0))) goto LAB_00c6487d;
    pcVar11 = _Str1;
    sVar7 = F_00c552f0(_Str1);
    eVar4 = F_00c49908(REFG(char * PTR32, 0x15d75a0),sVar7 + 1,pcVar11);
    if (eVar4 != 0) goto LAB_00c64788;
  }
  lVar10 = (*(long *)(gen_frame + 0x30));
  piVar3 = ((int *)GEN_TOP(F_00c650f0()));
  lVar2 = (*(long *)(gen_frame + 0x28));
  *piVar3 = lVar10;
  piVar3 = ((int *)GEN_TOP(F_00c650e4()));
  lVar10 = (*(long *)(gen_frame + 0x24));
  *piVar3 = lVar2;
  piVar3 = ((int *)GEN_TOP(F_00c650ea()));
  *piVar3 = lVar10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
  piVar9 = ((int *)GEN_TOP(F_00c64907()));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x2c));
  if ((*(int *)(gen_frame + 0x20)) == 0) {
    eVar4 = F_00c4d9ef(*(*(int * PTR32 *)(gen_frame + 0x2c)),0x40,_Str1,3);
    if (eVar4 != 0) {
LAB_00c64788: ;
                    
      F_00c4c299(0,0,0,0,0);
    }
    pcVar11 = _Str1 + 3;
    if (*pcVar11 == '-') {
      (*(int *)(gen_frame + 0x14)) = 1;
      pcVar11 = _Str1 + 4;
    }
    lVar10 = F_00c4c71d(pcVar11);
    (*(long *)(gen_frame + 0x30)) = lVar10 * 0xe10;
    for (; (cVar1 = *pcVar11, cVar1 == '+' || (('/' < cVar1 && (cVar1 < ':'))));
        pcVar11 = pcVar11 + 1) {
    }
    if (*pcVar11 == ':') {
      pcVar11 = pcVar11 + 1;
      lVar10 = F_00c4c71d(pcVar11);
      (*(long *)(gen_frame + 0x30)) = (*(long *)(gen_frame + 0x30)) + lVar10 * 0x3c;
      for (; ('/' < *pcVar11 && (*pcVar11 < ':')); pcVar11 = pcVar11 + 1) {
      }
      if (*pcVar11 == ':') {
        pcVar11 = pcVar11 + 1;
        lVar10 = F_00c4c71d(pcVar11);
        (*(long *)(gen_frame + 0x30)) = (*(long *)(gen_frame + 0x30)) + lVar10;
        for (; ('/' < *pcVar11 && (*pcVar11 < ':')); pcVar11 = pcVar11 + 1) {
        }
      }
    }
    if ((*(int *)(gen_frame + 0x14)) != 0) {
      (*(long *)(gen_frame + 0x30)) = -(*(long *)(gen_frame + 0x30));
    }
    cVar1 = *pcVar11;
    (*(long *)(gen_frame + 0x28)) = (int)cVar1;
    if (cVar1 == 0) {
      *((undefined1 *)GEN_TOP(piVar3[1])) = 0;
    }
    else {
      eVar4 = F_00c4d9ef(piVar3[1],0x40,pcVar11,3);
      if (eVar4 != 0) goto LAB_00c64788;
    }
    lVar2 = (*(long *)(gen_frame + 0x30));
    piVar3 = ((int *)GEN_TOP(F_00c650f0()));
    lVar10 = (*(long *)(gen_frame + 0x28));
    *piVar3 = lVar2;
    piVar9 = ((int *)GEN_TOP(F_00c650e4()));
    *piVar9 = lVar10;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  return (uint)piVar9;
}

/* ref: FUN_00c64902 */
GEN_LIB GEN_NOFRAME uint F_00c64902(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc64902u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: FUN_00c64907 */
GEN_LIB GEN_NOFRAME uint F_00c64907(void)
{
  GEN_ENTER(0xc64907u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: Global::_cvtdate */
GEN_LIB GEN_NOFRAME int F_00c64997(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(int param_9, unsigned int gen_a8), GEN_P(int param_10, unsigned int gen_a9), GEN_P(int param_11, unsigned int gen_a10))
{
  GEN_ENTER(0xc64997u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(int param_9 = (int)gen_a8;)
  GEN_PIN(int param_10 = (int)gen_a9;)
  GEN_PIN(int param_11 = (int)gen_a10;)
  GEN_FRAME_DECL(0x8, 8);
  uint uVar1;
  int iVar2;
  int eVar3;
  int iVar4;
  undefined * puVar5;
  undefined * puVar6;
  bool bVar7;
  
  (*(long *)(gen_frame + 0x0)) = 0;
  if (param_4 == 1) {
    uVar1 = param_5 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_5 % 100 != 0)) || ((int)(param_5 + 0x76c) % 400 == 0)) {
      puVar5 = (&REFG(undefined * PTR32, 0x134bbfc))[(int)(in_eax)];
    }
    else {
      puVar5 = *(undefined * PTR32 *)(&REFG(undefined, 0x134bc30) + in_eax * 4);
    }
    puVar6 = puVar5 + 1;
    iVar2 = (param_6 * 7 -
            (int)(puVar6 + param_5 * 0x16d - 0x63db +
                           ((int)(param_5 + 299) / 400 - (int)(param_5 - 1) / 100) +
                           ((int)((param_5 - 1) + ((int)(param_5 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_7;
    if ((int)(puVar6 + param_5 * 0x16d - 0x63db +
                       ((int)(param_5 + 299) / 400 - (int)(param_5 - 1) / 100) +
                       ((int)((param_5 - 1) + ((int)(param_5 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_7) {
      puVar6 = puVar5 - 6;
    }
    puVar6 = puVar6 + iVar2;
    if (param_6 == 5) {
      if (((uVar1 == 0) && ((int)param_5 % 100 != 0)) || ((int)(param_5 + 0x76c) % 400 == 0)) {
        iVar2 = (&REFG(undefined4, 0x134bc00))[(int)(in_eax)];
      }
      else {
        iVar2 = (&REFG(undefined4, 0x134bc34))[(int)(in_eax)];
      }
      if (iVar2 < (int)puVar6) {
        puVar6 = puVar6 - 7;
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
      puVar6 = (&REFG(undefined * PTR32, 0x134bbfc))[(int)(in_eax)];
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
    eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x0)));
    if (eVar3 != 0) {
                    
      F_00c4c299(0,0,0,0,0);
    }
    iVar2 = (*(long *)(gen_frame + 0x0)) * 1000;
    REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + iVar2;
    REFG(undefined4, 0x134bb5c) = uVar1;
    if (REFG(int, 0x134bb64) < 0) {
      REFG(int, 0x134bb64) = REFG(int, 0x134bb64) + 86400000;
      REFG(undefined * PTR32, 0x134bb60) = REFG(undefined * PTR32, 0x134bb60) - 1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < REFG(int, 0x134bb64)) {
        REFG(int, 0x134bb64) = REFG(int, 0x134bb64) - 86400000;
        REFG(undefined * PTR32, 0x134bb60) = REFG(undefined * PTR32, 0x134bb60) + 1;
      }
    }
  }
  return iVar2;
}

/* ref: Global::__isindst_nolock */
GEN_LIB GEN_NOFRAME uint F_00c64b8e(GEN_P(int * in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc64b8eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x10, 0);
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
                    
    F_00c4c299(0,0,0,0,0);
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
      F_00c64997((uint)REFG(undefined2, 0x15d758a),(uint)REFG(undefined2, 0x15d7590),1,(uint)(REFG(short, 0x15d7588) == 0),iVar7,uVar4,uVar3,
               uVar8,(uint)REFG(undefined2, 0x15d7592),(uint)REFG(undefined2, 0x15d7594),(uint)REFG(undefined2, 0x15d7596));
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
      F_00c64997((uint)REFG(undefined2, 0x15d7536),(uint)REFG(undefined2, 0x15d753c),0,(uint)(REFG(short, 0x15d7534) == 0),iVar7,uVar4,uVar3,
               uVar8,(uint)REFG(undefined2, 0x15d753e),(uint)REFG(undefined2, 0x15d7540),(uint)REFG(undefined2, 0x15d7542));
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
GEN_LIB GEN_NOFRAME unsigned int F_00c64d65(void)
{
  GEN_ENTER(0xc64d65u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x2c, 4);
  
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f6610);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc64d71;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f6610;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  if (REFG(int, 0x15d75a4) == 0) {
    F_00c5aa4f(6);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    if (REFG(int, 0x15d75a4) == 0) {
      F_00c64684();
      REFG(int, 0x15d75a4) = REFG(int, 0x15d75a4) + 1;
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c64dab();
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return 0;
}

/* ref: FUN_00c64dab */
GEN_LIB GEN_NOFRAME uint F_00c64dab(void)
{
  GEN_ENTER(0xc64dabu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: FUN_00c64de3 */
GEN_LIB GEN_NOFRAME uint F_00c64de3(void)
{
  GEN_ENTER(0xc64de3u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: __isindst */
GEN_LIB GEN_NOFRAME int F_00c64dec(unsigned int gen_a0)
{
  GEN_ENTER(0xc64decu, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6650);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc64df8;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6650;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  F_00c5aa4f(6);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00c64b8e((*(undefined * PTR32 *)&gen_args[0]));
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c64e24();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00c64e24 */
GEN_LIB GEN_NOFRAME uint F_00c64e24(void)
{
  GEN_ENTER(0xc64e24u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(6);
  return uVar1;
}

/* ref: __gmtime32_s */
GEN_LIB GEN_NOFRAME int F_00c64e2d(GEN_P(undefined * _Tm, unsigned int gen_a0), GEN_P(int * _Time, unsigned int gen_a1))
{
  GEN_ENTER(0xc64e2du, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * _Tm = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * _Time = (int *)(uintptr_t)gen_a1;)
  bool bVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  
  bVar1 = false;
  if (_Tm == ((undefined *)GEN_TOP(0x0))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    F_00c48350(_Tm,0xff,0x24);
    if (_Time == ((int *)GEN_TOP(0x0))) {
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
          iVar4 = iVar3 - 0x1e13380;
          iVar6 = iVar5 + 0x47;
          if (0x1e1337f < iVar4) {
            iVar4 = iVar3 - 0x3c26700;
            iVar6 = iVar5 + 0x48;
            if (iVar4 < 0x1e28500) {
              bVar1 = true;
            }
            else {
              iVar6 = iVar5 + 0x49;
              iVar4 = iVar3 - 0x5a4ec00;
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
        (*(int *)(((char *)(_Tm) + 16))) = iVar6 - 1;
        (*(int *)(((char *)(_Tm) + 12))) = (*(int *)(((char *)(_Tm) + 28))) - puVar7[iVar6 - 1];
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
GEN_LIB GEN_NOFRAME undefined * F_00c64f6d(void)
{
  GEN_ENTER(0xc64f6du, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  int * piVar2;
  undefined * pvVar3;
  
  p_Var1 = F_00c5b301();
  if (p_Var1 == ((undefined *)GEN_TOP(0x0))) {
LAB_00c64f7b: ;
    piVar2 = F_00c51f85();
    *piVar2 = 0xc;
    return ((undefined *)GEN_TOP(0x0));
  }
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 68))) == ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = F_00c54c2e(0x24);
    (*(void * PTR32 *)(((char *)(p_Var1) + 68))) = pvVar3;
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) goto LAB_00c64f7b;
  }
  return (*(void * PTR32 *)(((char *)(p_Var1) + 68)));
}

/* ref: __gmtime32 */
GEN_LIB GEN_NOFRAME undefined * F_00c64fa4(GEN_P(int * _Time, unsigned int gen_a0))
{
  GEN_ENTER(0xc64fa4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * _Time = (int *)(uintptr_t)gen_a0;)
  undefined * _Tm;
  int eVar1;
  undefined * ptVar2;
  
  _Tm = F_00c64f6d();
  ptVar2 = ((undefined *)GEN_TOP(0x0));
  if (_Tm != ((undefined *)GEN_TOP(0x0))) {
    eVar1 = F_00c64e2d(_Tm,_Time);
    ptVar2 = ((undefined *)GEN_TOP((~-(uint)(eVar1 != 0) & (uint)_Tm)));
  }
  return ptVar2;
}

/* ref: FID_conflict___get_dstbias_00c64fcb */
GEN_LIB GEN_NOFRAME int F_00c64fcb(GEN_P(long * _Timezone, unsigned int gen_a0))
{
  GEN_ENTER(0xc64fcbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(long * _Timezone = (long *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (_Timezone == ((long *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb6c);
  return 0;
}

/* ref: FID_conflict___get_dstbias_00c64ff8 */
GEN_LIB GEN_NOFRAME int F_00c64ff8(GEN_P(long * _Timezone, unsigned int gen_a0))
{
  GEN_ENTER(0xc64ff8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(long * _Timezone = (long *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (_Timezone == ((long *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb70);
  return 0;
}

/* ref: FID_conflict___get_dstbias_00c65025 */
GEN_LIB GEN_NOFRAME int F_00c65025(GEN_P(long * _Timezone, unsigned int gen_a0))
{
  GEN_ENTER(0xc65025u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(long * _Timezone = (long *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (_Timezone == ((long *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_Timezone = REFG(int, 0x134bb68);
  return 0;
}

/* ref: __get_tzname */
GEN_LIB GEN_NOFRAME int F_00c65052(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc65052u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int * piVar1;
  gen_size32 sVar2;
  int eVar3;
  
  if (param_2 == ((undefined1 *)GEN_TOP(0x0))) {
    if (param_3 != 0) goto LAB_00c6509a;
  }
  else if (param_3 == 0) {
LAB_00c6509a: ;
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  if (param_2 != ((undefined1 *)GEN_TOP(0x0))) {
    *param_2 = 0;
  }
  if ((param_1 == ((uint *)GEN_TOP(0x0))) || ((param_4 != 0 && (param_4 != 1)))) {
    piVar1 = F_00c51f85();
    eVar3 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    sVar2 = F_00c552f0((&REFG(undefined * PTR32, 0x134bbf8))[(int)(param_4)]);
    *param_1 = sVar2 + 1;
    if (param_2 == ((undefined1 *)GEN_TOP(0x0))) {
      eVar3 = 0;
    }
    else if (param_3 < sVar2 + 1) {
      eVar3 = 0x22;
    }
    else {
      eVar3 = F_00c49908(param_2,param_3,(&REFG(undefined * PTR32, 0x134bbf8))[(int)(param_4)]);
    }
  }
  return eVar3;
}

/* ref: FUN_00c650e4 */
GEN_LIB GEN_NOFRAME uint F_00c650e4(void)
{
  GEN_ENTER(0xc650e4u, 0u, 0u, 0u, 0u);
  return 0x134bb6c;
}

/* ref: FUN_00c650ea */
GEN_LIB GEN_NOFRAME uint F_00c650ea(void)
{
  GEN_ENTER(0xc650eau, 0u, 0u, 0u, 0u);
  return 0x134bb70;
}

/* ref: FUN_00c650f0 */
GEN_LIB GEN_NOFRAME uint F_00c650f0(void)
{
  GEN_ENTER(0xc650f0u, 0u, 0u, 0u, 0u);
  return 0x134bb68;
}

/* ref: FUN_00c650f6 */
GEN_LIB GEN_NOFRAME uint F_00c650f6(void)
{
  GEN_ENTER(0xc650f6u, 0u, 0u, 0u, 0u);
  return 0x134bbf8;
}

/* ref: __lseek_nolock */
GEN_LIB GEN_NOFRAME long F_00c650fc(GEN_P(int _FileHandle, unsigned int gen_a0), GEN_P(long _Offset, unsigned int gen_a1), GEN_P(int _Origin, unsigned int gen_a2))
{
  GEN_ENTER(0xc650fcu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int _FileHandle = (int)gen_a0;)
  GEN_PIN(long _Offset = (long)gen_a1;)
  GEN_PIN(int _Origin = (int)gen_a2;)
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
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(_FileHandle >> 5)] + 4 + (_FileHandle & 0x1fU) * 0x40)));
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
GEN_LIB GEN_NOFRAME long F_00c65171(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc65171u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_FRAME_DECL(0x44, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
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
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6670);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc6517d;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6670;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (long)(uintptr_t)gen_eh_resume(); }
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
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar3)] + 4 + iVar5))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar3)] + 4 + iVar5))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(long *)(gen_frame + 0x14)) = -1;
        }
        else {
          lVar4 = F_00c650fc(_FileHandle_00,(*(long *)&gen_args[1]),(*(int *)&gen_args[2]));
          (*(long *)(gen_frame + 0x14)) = lVar4;
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c6523d(_FileHandle_00);
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return (*(long *)(gen_frame + 0x14));
      }
    }
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    piVar2 = F_00c51f85();
    *piVar2 = 9;
    F_00c4c305();
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return -1;
}

/* ref: FUN_00c6523a */
GEN_LIB GEN_NOFRAME unsigned int F_00c6523a(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6523au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp + 8))));
  return;
}

/* ref: FUN_00c6523d */
GEN_LIB GEN_NOFRAME unsigned int F_00c6523d(GEN_P(int in_ebx, unsigned int gen_a0))
{
  GEN_ENTER(0xc6523du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebx = (int)gen_a0;)
  F_00c6d8b6(in_ebx);
  return;
}

/* ref: __wopenfile */
GEN_LIB GEN_NOFRAME undefined * F_00c65245(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return ((undefined *)GEN_TOP(0x0));
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
      return ((undefined *)GEN_TOP(0x0));
    }
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 12))))) = local_8;
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 4))))) = 0;
    (*(char * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[3])))) = ((char *)GEN_TOP(0x0));
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 8))))) = ((char *)GEN_TOP(0x0));
    (*((char * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 28))))) = ((char *)GEN_TOP(0x0));
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[3])) + 16))))) = (int)(*(wchar_t * PTR32 *)&gen_args[1]);
    return (*(undefined * PTR32 *)&gen_args[3]);
  }
LAB_00c654a7: ;
  piVar6 = F_00c51f85();
  *piVar6 = 0x16;
  F_00c4c305();
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: __allrem */
GEN_LIB GEN_NOFRAME ulonglong GEN_STDCALL F_00c65500(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc65500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
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
GEN_LIB GEN_NOFRAME unsigned int F_00c655b2(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc655b2u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  *(undefined4 *)&REFG(undefined, 0x15e4188) = 0;
  return;
}

/* ref: ___ascii_strnicmp */
GEN_LIB GEN_FRAME int F_00c655c0(GEN_P(char * _Str1, unsigned int gen_a0), GEN_P(char * _Str2, unsigned int gen_a1), GEN_P(gen_size32 _MaxCount, unsigned int gen_a2))
{
  GEN_ENTER(0xc655c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * _Str1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Str2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _MaxCount = (gen_size32)gen_a2;)
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
GEN_LIB GEN_NOFRAME uint F_00c65621(GEN_P(gen_size32 * in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc65621u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if (((undefined *)GEN_TOP(*in_edi)) == param_4) {
      pvVar1 = F_00c54c73(_Count,2);
      *in_edi = pvVar1;
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi);
    }
    else {
      pvVar1 = F_00c54d0d(((undefined *)GEN_TOP(*in_edi)),_Count,2);
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: FUN_00c65678 */
GEN_LIB GEN_NOFRAME uint F_00c65678(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc65678u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *((uint *)GEN_TOP((*param_1 + 0xbc)));
}

/* ref: __hextodec_00c6568a */
GEN_LIB GEN_NOFRAME uint F_00c6568a(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6568au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c48637((uint)param_1);
  uVar2 = (uint)(char)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

/* ref: __inc_00c656aa */
GEN_LIB GEN_NOFRAME uint F_00c656aa(GEN_P(undefined * in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xc656aau, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * in_edx = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(in_edx) + 4)));
  *piVar1 = *piVar1 - 1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(in_edx)));
    (*(char * PTR32 *)((char *)(in_edx))) = (*(char * PTR32 *)((char *)(in_edx))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(in_edx);
  return uVar3;
}

/* ref: __un_inc_00c656c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00c656c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc656c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != -1) {
    F_00c50c0d(param_1,param_2);
    return;
  }
  return;
}

/* ref: __whiteout_00c656d3 */
GEN_LIB GEN_NOFRAME uint F_00c656d3(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc656d3u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_LIB GEN_NOFRAME int F_00c656fd(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(uchar * param_2, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc656fdu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * param_2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x204, 12);
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  code * pcVar8;
  int iVar9;
  undefined * puVar10;
  int iVar11;
  byte bVar12;
  wchar_t * pwVar13;
  byte * pbVar14;
  byte * pbVar15;
  uint uVar16;
  wchar_t * pwVar17;
  byte * pbVar18;
  undefined1 * puVar19;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = _File;
  (*(undefined1 * PTR32 *)(gen_frame + 0x50)) = ((undefined1 *)(gen_frame + 0x7c));
  (*(undefined4 *)(gen_frame + 0x24)) = 0x15e;
  (*(int *)(gen_frame + 0x30)) = 0;
  ((wchar_t *)(gen_frame + 0x14))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x14))[1] = L'\0';
  (*(uint *)(gen_frame + 0x6c)) = 0;
  if ((param_2 == ((uchar *)GEN_TOP(0x0))) || (_File == ((undefined *)GEN_TOP(0x0)))) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    return -1;
  }
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar5 = F_00c5d07b(_File);
    if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
      puVar10 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar10 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar5 >> 5)])));
    }
    if ((puVar10[0x24] & 0x7f) == 0) {
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar10 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar10 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar5 >> 5)])));
      }
      if ((puVar10[0x24] & 0x80) == 0) goto LAB_00c657ec;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar6 = -1;
  }
  else {
LAB_00c657ec: ;
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,_Locale);
    bVar3 = *param_2;
    (*(char *)(gen_frame + 0x5b)) = '\0';
    (*(int *)(gen_frame + 0x74)) = 0;
    (*(int *)(gen_frame + 0x34)) = 0;
    pbVar18 = param_2;
    if (bVar3 != 0) {
LAB_00c65819: ;
      iVar6 = F_00c4873c((uint)bVar3);
      if (iVar6 != 0) {
        (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
        uVar5 = F_00c656d3(&(*(int *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x5c)));
        pbVar14 = pbVar18;
        if (uVar5 != 0xffffffff) {
          F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
        }
        do {
          pbVar14 = pbVar14 + 1;
          iVar6 = F_00c4873c((uint)*pbVar14);
        } while (iVar6 != 0);
        goto LAB_00c66651;
      }
      if (*pbVar18 == 0x25) {
        if (pbVar18[1] == 0x25) {
          if (pbVar18[1] == 0x25) {
            pbVar18 = pbVar18 + 1;
          }
          goto LAB_00c665db;
        }
        (*(int *)(gen_frame + 0x1c)) = 0;
        (*(byte *)(gen_frame + 0x2f)) = 0;
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(int *)(gen_frame + 0x48)) = 0;
        (*(int *)(gen_frame + 0x64)) = 0;
        (*(byte *)(gen_frame + 0x58)) = 0;
        (*(char *)(gen_frame + 0x59)) = '\0';
        (*(char *)(gen_frame + 0x63)) = '\0';
        (*(char *)(gen_frame + 0x73)) = '\0';
        (*(char *)(gen_frame + 0x5a)) = '\0';
        (*(char *)(gen_frame + 0x6b)) = '\0';
        (*(byte *)(gen_frame + 0x7b)) = 1;
        (*(int *)(gen_frame + 0x28)) = 0;
        do {
          pbVar15 = pbVar18 + 1;
          uVar5 = (uint)*pbVar15;
          iVar6 = F_00c48637(uVar5);
          pbVar14 = pbVar15;
          if (iVar6 == 0) {
            if (uVar5 < 0x4f) {
              if (uVar5 != 0x4e) {
                if (uVar5 == 0x2a) {
                  (*(char *)(gen_frame + 0x63)) = (*(char *)(gen_frame + 0x63)) + '\x01';
                }
                else if (uVar5 != 0x46) {
                  if (uVar5 == 0x49) {
                    bVar3 = pbVar18[2];
                    if ((bVar3 == 0x36) && (pbVar14 = pbVar18 + 3, *pbVar14 == 0x34))
                    goto LAB_00c6593e;
                    if ((((((bVar3 != 0x33) || (pbVar14 = pbVar18 + 3, *pbVar14 != 0x32)) &&
                          (pbVar14 = pbVar15, bVar3 != 100)) && ((bVar3 != 0x69 && (bVar3 != 0x6f)))
                         ) && (bVar3 != 0x78)) && (bVar3 != 0x58)) goto LAB_00c65997;
                  }
                  else if (uVar5 == 0x4c) {
                    (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) + 1;
                  }
                  else {
LAB_00c65997: ;
                    (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                    pbVar14 = pbVar15;
                  }
                }
              }
            }
            else if (uVar5 == 0x68) {
              (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) - 1;
              (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) - 1;
            }
            else {
              if (uVar5 == 0x6c) {
                pbVar14 = pbVar18 + 2;
                if (*pbVar14 == 0x6c) {
LAB_00c6593e: ;
                  (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 0)) = 0;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 4)) = 0;
                  (*(longlong *)(gen_frame + 0x38)) = 0;
                  goto LAB_00c659c1;
                }
                (*(byte *)(gen_frame + 0x7b)) = (*(byte *)(gen_frame + 0x7b)) + 1;
              }
              else if (uVar5 != 0x77) goto LAB_00c65997;
              (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + '\x01';
              pbVar14 = pbVar15;
            }
          }
          else {
            (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 1;
            (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) * 10 - 0x30 + uVar5;
          }
LAB_00c659c1: ;
          pbVar18 = pbVar14;
        } while ((*(char *)(gen_frame + 0x73)) == '\0');
        (*(byte * PTR32 *)(gen_frame + 0x44)) = pbVar14;
        if ((*(char *)(gen_frame + 0x63)) == '\0') {
          pwVar13 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x18));
          (*(undefined * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 *)(gen_frame + 0x18));
          (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
        }
        else {
          pwVar13 = ((wchar_t *)GEN_TOP(0x0));
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar13;
        (*(char *)(gen_frame + 0x73)) = '\0';
        if (((*(char *)(gen_frame + 0x6b)) == '\0') && ((*pbVar14 == 0x53 || ((*(char *)(gen_frame + 0x6b)) = -1, *pbVar14 == 0x43)))) {
          (*(char *)(gen_frame + 0x6b)) = '\x01';
        }
        uVar5 = *pbVar14 | 0x20;
        (*(uint *)(gen_frame + 0x4c)) = uVar5;
        if (uVar5 != 0x6e) {
          if ((uVar5 == 99) || (uVar5 == 0x7b)) {
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            uVar7 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
          }
          else {
            uVar7 = F_00c656d3(&(*(int *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x5c)));
          }
          (*(uint *)(gen_frame + 0x6c)) = uVar7;
          if (uVar7 == 0xffffffff) goto LAB_00c66691;
        }
        uVar7 = (*(uint *)(gen_frame + 0x6c));
        if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x64)) == 0)) goto LAB_00c6667c;
        if (0x6f < uVar5) {
          if (uVar5 == 0x70) {
            (*(byte *)(gen_frame + 0x7b)) = 1;
LAB_00c66306: ;
            if ((*(uint *)(gen_frame + 0x6c)) == 0x2d) {
              (*(char *)(gen_frame + 0x59)) = '\x01';
            }
            else if ((*(uint *)(gen_frame + 0x6c)) != 0x2b) goto LAB_00c6634d;
            iVar6 = (*(int *)(gen_frame + 0x64)) - 1;
            (*(int *)(gen_frame + 0x64)) = iVar6;
            if ((iVar6 == 0) && ((*(int *)(gen_frame + 0x48)) != 0)) {
              (*(char *)(gen_frame + 0x73)) = '\x01';
            }
            else {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
LAB_00c66347: ;
              (*(uint *)(gen_frame + 0x6c)) = uVar5;
            }
          }
          else {
            if (uVar5 == 0x73) {
LAB_00c65ed9: ;
              if ('\0' < (*(char *)(gen_frame + 0x6b))) {
                (*(char *)(gen_frame + 0x5a)) = '\x01';
              }
LAB_00c65ee9: ;
              pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
              pwVar17 = pwVar13;
              if ((*(uint *)(gen_frame + 0x6c)) != 0xffffffff) {
                F_00c50c0d((*(uint *)(gen_frame + 0x6c)),(*(undefined * PTR32 *)(gen_frame + 0x5c)));
              }
              do {
                iVar6 = (*(int *)(gen_frame + 0x64));
                if (((*(int *)(gen_frame + 0x48)) != 0) && ((*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1, iVar6 == 0)) goto LAB_00c662b4;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                uVar7 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                (*(uint *)(gen_frame + 0x6c)) = uVar7;
                if (uVar7 == 0xffffffff) goto LAB_00c6629b;
                bVar3 = (byte)uVar7;
                if (uVar5 != 99) {
                  if (uVar5 == 0x73) {
                    if ((8 < (int)uVar7) && ((int)uVar7 < 0xe)) goto LAB_00c6629b;
                    if (uVar7 != 0x20) goto LAB_00c65f9b;
                  }
                  if ((uVar5 != 0x7b) ||
                     (uVar5 = (*(uint *)(gen_frame + 0x4c)),
                     ((int)(char)(((byte *)(gen_frame + 0x1dc))[(int)((int)uVar7 >> 3)] ^ (*(byte *)(gen_frame + 0x58))) & 1 << (bVar3 & 7)) == 0))
                  goto LAB_00c6629b;
                }
LAB_00c65f9b: ;
                if ((*(char *)(gen_frame + 0x63)) == '\0') {
                  if ((*(char *)(gen_frame + 0x5a)) == '\0') {
                    *(byte *)pwVar13 = bVar3;
                    pwVar13 = ((wchar_t *)GEN_TOP(((int)pwVar13 + 1)));
                  }
                  else {
                    (*(byte *)(gen_frame + 0x20)) = bVar3;
                    iVar6 = F_00c6e020(uVar7 & 0xff);
                    if (iVar6 != 0) {
                      (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                      uVar7 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                      (*(undefined1 *)(gen_frame + 0x21)) = (char)uVar7;
                    }
                    ((wchar_t *)(gen_frame + 0x14))[0] = L'?';
                    ((wchar_t *)(gen_frame + 0x14))[1] = L'\0';
                    F_00c7b204(((wchar_t *)(gen_frame + 0x14)),(char *)&(*(byte *)(gen_frame + 0x20)),*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xac))),
                               (undefined *)((byte *)(gen_frame + 0x4)));
                    *pwVar13 = ((wchar_t *)(gen_frame + 0x14))[0];
                    pwVar13 = pwVar13 + 1;
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar13;
                }
                else {
                  pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + 1)));
                }
              } while( true );
            }
            if (uVar5 == 0x75) goto LAB_00c66306;
            if (uVar5 != 0x78) {
              if (uVar5 == 0x7b) {
                if ('\0' < (*(char *)(gen_frame + 0x6b))) {
                  (*(char *)(gen_frame + 0x5a)) = '\x01';
                }
                pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x44)) + 1;
                if ((*(byte * PTR32 *)(gen_frame + 0x44))[1] == 0x5e) {
                  pbVar18 = (*(byte * PTR32 *)(gen_frame + 0x44)) + 2;
                  (*(byte *)(gen_frame + 0x58)) = 0xff;
                }
                F_00c48350(((byte *)(gen_frame + 0x1dc)),0,0x20);
                bVar3 = (*(byte *)(gen_frame + 0x2f));
                if (*pbVar18 == 0x5d) {
                  ((byte *)(gen_frame + 0x1dc))[0xb] = 0x20;
                  pbVar18 = pbVar18 + 1;
                  bVar3 = 0x5d;
                }
                while (bVar1 = *pbVar18, bVar1 != 0x5d) {
                  if (((bVar1 == 0x2d) && (bVar3 != 0)) && (bVar12 = pbVar18[1], bVar12 != 0x5d)) {
                    if (bVar3 < bVar12) {
                      (*(byte *)(gen_frame + 0x7b)) = bVar12;
                      bVar12 = bVar3;
                    }
                    else {
                      (*(byte *)(gen_frame + 0x7b)) = bVar3;
                    }
                    if (bVar12 < (*(byte *)(gen_frame + 0x7b))) {
                      uVar16 = (uint)bVar12;
                      uVar7 = (uint)(byte)((*(byte *)(gen_frame + 0x7b)) - bVar12);
                      do {
                        ((byte *)(gen_frame + 0x1dc))[(int)(uVar16 >> 3)] = ((byte *)(gen_frame + 0x1dc))[(int)(uVar16 >> 3)] | '\x01' << ((byte)uVar16 & 7)
                        ;
                        uVar16 = uVar16 + 1;
                        uVar7 = uVar7 - 1;
                        uVar5 = (*(uint *)(gen_frame + 0x4c));
                      } while (uVar7 != 0);
                    }
                    ((byte *)(gen_frame + 0x1dc))[(int)((*(byte *)(gen_frame + 0x7b)) >> 3)] = ((byte *)(gen_frame + 0x1dc))[(int)((*(byte *)(gen_frame + 0x7b)) >> 3)] | '\x01' << ((*(byte *)(gen_frame + 0x7b)) & 7);
                    pbVar18 = pbVar18 + 2;
                    bVar3 = 0;
                  }
                  else {
                    ((byte *)(gen_frame + 0x1dc))[(int)(bVar1 >> 3)] = ((byte *)(gen_frame + 0x1dc))[(int)(bVar1 >> 3)] | '\x01' << (bVar1 & 7);
                    uVar5 = (*(uint *)(gen_frame + 0x4c));
                    pbVar18 = pbVar18 + 1;
                    bVar3 = bVar1;
                  }
                }
                (*(byte * PTR32 *)(gen_frame + 0x44)) = pbVar18;
                goto LAB_00c65ee9;
              }
              goto LAB_00c6604f;
            }
LAB_00c65af2: ;
            if ((*(uint *)(gen_frame + 0x6c)) == 0x2d) {
              (*(char *)(gen_frame + 0x59)) = '\x01';
LAB_00c6618c: ;
              iVar6 = (*(int *)(gen_frame + 0x64)) - 1;
              (*(int *)(gen_frame + 0x64)) = iVar6;
              if ((iVar6 == 0) && ((*(int *)(gen_frame + 0x48)) != 0)) {
                (*(char *)(gen_frame + 0x73)) = '\x01';
              }
              else {
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
              }
            }
            else if ((*(uint *)(gen_frame + 0x6c)) == 0x2b) goto LAB_00c6618c;
            if ((*(uint *)(gen_frame + 0x6c)) == 0x30) {
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
              (*(uint *)(gen_frame + 0x6c)) = uVar5;
              if (((char)uVar5 == 'x') || ((char)uVar5 == 'X')) {
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
                if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar6 = (*(int *)(gen_frame + 0x64)) - 2, (*(int *)(gen_frame + 0x64)) = iVar6, iVar6 < 1)) {
                  (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x4c)) = 0x78;
              }
              else {
                (*(int *)(gen_frame + 0x54)) = 1;
                if ((*(uint *)(gen_frame + 0x4c)) == 0x78) {
                  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
                  if (uVar5 != 0xffffffff) {
                    F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
                  }
                  uVar5 = 0x30;
                  goto LAB_00c66347;
                }
                if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar6 = (*(int *)(gen_frame + 0x64)) - 1, (*(int *)(gen_frame + 0x64)) = iVar6, iVar6 == 0)) {
                  (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x4c)) = 0x6f;
              }
            }
          }
LAB_00c6634d: ;
          if ((*(int *)(gen_frame + 0x28)) == 0) {
            iVar6 = (*(int *)(gen_frame + 0x1c));
            if ((*(char *)(gen_frame + 0x73)) == '\0') {
              while ((uVar5 = (*(uint *)(gen_frame + 0x6c)), (*(uint *)(gen_frame + 0x4c)) != 0x78 && ((*(uint *)(gen_frame + 0x4c)) != 0x70))) {
                iVar9 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff);
                if (iVar9 == 0) goto LAB_00c6653a;
                if ((*(uint *)(gen_frame + 0x4c)) == 0x6f) {
                  if (0x37 < (int)uVar5) goto LAB_00c6653a;
                  iVar6 = iVar6 << 3;
                }
                else {
                  iVar6 = iVar6 * 10;
                }
LAB_00c66501: ;
                (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
                iVar6 = iVar6 - 0x30 + uVar5;
                if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar9 = (*(int *)(gen_frame + 0x64)) - 1, (*(int *)(gen_frame + 0x64)) = iVar9, iVar9 == 0))
                goto LAB_00c66553;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
              }
              iVar9 = F_00c486bb((*(uint *)(gen_frame + 0x6c)) & 0xff);
              if (iVar9 != 0) {
                iVar6 = iVar6 << 4;
                uVar5 = F_00c6568a((char)uVar5);
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
                goto LAB_00c66501;
              }
LAB_00c6653a: ;
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
              if (uVar5 != 0xffffffff) {
                F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
              }
            }
LAB_00c66553: ;
            if ((*(char *)(gen_frame + 0x59)) != '\0') {
              iVar6 = -iVar6;
            }
          }
          else {
            if ((*(char *)(gen_frame + 0x73)) == '\0') {
              while ((uVar5 = (*(uint *)(gen_frame + 0x6c)), (*(uint *)(gen_frame + 0x4c)) != 0x78 && ((*(uint *)(gen_frame + 0x4c)) != 0x70))) {
                iVar6 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff);
                if (iVar6 == 0) goto LAB_00c66446;
                if ((*(uint *)(gen_frame + 0x4c)) == 0x6f) {
                  if (0x37 < (int)uVar5) goto LAB_00c66446;
                  lVar2 = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x38)) >> 0x1d,
                                   (uint)(*(longlong *)(gen_frame + 0x38)) << 3);
                }
                else {
                  lVar2 = (*(longlong *)(gen_frame + 0x38)) * 10;
                }
LAB_00c663fd: ;
                (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
                (*(longlong *)(gen_frame + 0x38)) = lVar2 + (int)(uVar5 - 0x30);
                if (((*(int *)(gen_frame + 0x48)) != 0) && (iVar6 = (*(int *)(gen_frame + 0x64)) - 1, (*(int *)(gen_frame + 0x64)) = iVar6, iVar6 == 0))
                goto LAB_00c6645f;
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
              }
              iVar6 = F_00c486bb((*(uint *)(gen_frame + 0x6c)) & 0xff);
              if (iVar6 != 0) {
                lVar2 = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x38)) >> 0x1c,(uint)(*(longlong *)(gen_frame + 0x38)) << 4
                                );
                uVar5 = F_00c6568a((char)uVar5);
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
                goto LAB_00c663fd;
              }
LAB_00c66446: ;
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
              if (uVar5 != 0xffffffff) {
                F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
              }
            }
LAB_00c6645f: ;
            iVar6 = (*(int *)(gen_frame + 0x1c));
            if ((*(char *)(gen_frame + 0x59)) != '\0') {
              iVar9 = -(uint)(*(longlong *)(gen_frame + 0x38));
              iVar11 = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 4)) + (uint)((uint)(*(longlong *)(gen_frame + 0x38)) != 0));
              (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 0)) = iVar9;
              (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 4)) = iVar11;
              (*(longlong *)(gen_frame + 0x38)) = CONCAT44(iVar11,iVar9);
            }
          }
          if ((*(uint *)(gen_frame + 0x4c)) == 0x46) {
            (*(int *)(gen_frame + 0x54)) = 0;
          }
          if ((*(int *)(gen_frame + 0x54)) != 0) {
            if ((*(char *)(gen_frame + 0x63)) == '\0') {
              (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
LAB_00c66590: ;
              if ((*(int *)(gen_frame + 0x28)) == 0) {
                if ((*(byte *)(gen_frame + 0x7b)) == 0) {
                  *(*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (wchar_t)iVar6;
                }
                else {
                  *(int *)(*(wchar_t * PTR32 *)(gen_frame + 0x40)) = iVar6;
                }
              }
              else {
                *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (uint)(*(longlong *)(gen_frame + 0x38));
                *(int *)((*(wchar_t * PTR32 *)(gen_frame + 0x40)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x38)) + 4));
              }
            }
            goto LAB_00c665bc;
          }
          goto LAB_00c66691;
        }
        if (uVar5 == 0x6f) goto LAB_00c66306;
        if (uVar5 == 99) {
          if ((*(int *)(gen_frame + 0x48)) == 0) {
            (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 1;
            (*(int *)(gen_frame + 0x48)) = 1;
          }
          goto LAB_00c65ed9;
        }
        if (uVar5 == 100) goto LAB_00c66306;
        if (uVar5 < 0x65) {
LAB_00c6604f: ;
          if (*(*(byte * PTR32 *)(gen_frame + 0x44)) != (*(uint *)(gen_frame + 0x6c))) goto LAB_00c6667c;
          (*(char *)(gen_frame + 0x5b)) = (*(char *)(gen_frame + 0x5b)) - 1;
          if ((*(char *)(gen_frame + 0x63)) == '\0') {
            (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x0));
          }
        }
        else {
          if (0x67 < uVar5) {
            if (uVar5 == 0x69) {
              (*(uint *)(gen_frame + 0x4c)) = 100;
              goto LAB_00c65af2;
            }
            if (uVar5 != 0x6e) goto LAB_00c6604f;
            iVar6 = (*(int *)(gen_frame + 0x74));
            if ((*(char *)(gen_frame + 0x63)) != '\0') goto LAB_00c665bc;
            goto LAB_00c66590;
          }
          iVar6 = 0;
          if ((*(uint *)(gen_frame + 0x6c)) == 0x2d) {
            *(*(undefined1 * PTR32 *)(gen_frame + 0x50)) = 0x2d;
            iVar6 = 1;
LAB_00c65b2d: ;
            (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1;
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
            (*(uint *)(gen_frame + 0x6c)) = uVar5;
          }
          else if ((*(uint *)(gen_frame + 0x6c)) == 0x2b) goto LAB_00c65b2d;
          if ((*(int *)(gen_frame + 0x48)) == 0) {
            (*(int *)(gen_frame + 0x64)) = -1;
          }
          while( true ) {
            iVar11 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff);
            iVar9 = (*(int *)(gen_frame + 0x64));
            if ((iVar11 == 0) || ((*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1, iVar9 == 0)) break;
            (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
            (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar6] = (byte)(*(uint *)(gen_frame + 0x6c));
            iVar6 = iVar6 + 1;
            uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined1 * PTR32 *)(gen_frame + 0x50)),iVar6,((undefined1 *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x30)));
            if (uVar5 == 0) goto LAB_00c66691;
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
            (*(uint *)(gen_frame + 0x6c)) = uVar5;
          }
          iVar9 = (*(int *)(gen_frame + 0x64));
          (*(byte *)(gen_frame + 0x58)) = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xbc)))));
          if ((*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xbc))))) == (byte)(*(uint *)(gen_frame + 0x6c))) &&
             ((*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1, iVar9 != 0)) {
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
            (*(uint *)(gen_frame + 0x6c)) = uVar5;
            (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar6] = (*(byte *)(gen_frame + 0x58));
            iVar6 = iVar6 + 1;
            uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined1 * PTR32 *)(gen_frame + 0x50)),iVar6,((undefined1 *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x30)));
            if (uVar5 == 0) goto LAB_00c66691;
            while ((iVar11 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff), iVar9 = (*(int *)(gen_frame + 0x64)), iVar11 != 0 &&
                   ((*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1, iVar9 != 0))) {
              (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar6] = (byte)(*(uint *)(gen_frame + 0x6c));
              iVar6 = iVar6 + 1;
              uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined1 * PTR32 *)(gen_frame + 0x50)),iVar6,((undefined1 *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x30)));
              if (uVar5 == 0) goto LAB_00c66691;
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
              (*(uint *)(gen_frame + 0x6c)) = uVar5;
            }
          }
          iVar9 = (*(int *)(gen_frame + 0x64));
          iVar11 = iVar6;
          if (((*(int *)(gen_frame + 0x54)) != 0) &&
             ((((*(uint *)(gen_frame + 0x6c)) == 0x65 || ((*(uint *)(gen_frame + 0x6c)) == 0x45)) &&
              ((*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1, iVar9 != 0)))) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar6] = 0x65;
            iVar11 = iVar6 + 1;
            uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined1 * PTR32 *)(gen_frame + 0x50)),iVar11,((undefined1 *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x30)));
            if (uVar5 == 0) goto LAB_00c66691;
            (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
            uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
            (*(uint *)(gen_frame + 0x6c)) = uVar5;
            if (uVar5 == 0x2d) {
              (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar11] = 0x2d;
              iVar11 = iVar6 + 2;
              uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined1 * PTR32 *)(gen_frame + 0x50)),iVar11,((undefined1 *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x30)));
              if (uVar5 == 0) goto LAB_00c66691;
LAB_00c65d9e: ;
              iVar6 = (*(int *)(gen_frame + 0x64));
              (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1;
              if (iVar6 == 0) {
                (*(int *)(gen_frame + 0x64)) = 0;
              }
              else {
                (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
                uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
                (*(uint *)(gen_frame + 0x6c)) = uVar5;
              }
            }
            else if (uVar5 == 0x2b) goto LAB_00c65d9e;
            while ((iVar9 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff), iVar6 = (*(int *)(gen_frame + 0x64)), iVar9 != 0 &&
                   ((*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) - 1, iVar6 != 0))) {
              (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
              (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar11] = (byte)(*(uint *)(gen_frame + 0x6c));
              iVar11 = iVar11 + 1;
              uVar5 = F_00c65621(&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined1 * PTR32 *)(gen_frame + 0x50)),iVar11,((undefined1 *)(gen_frame + 0x7c)),&(*(int *)(gen_frame + 0x30)));
              if (uVar5 == 0) goto LAB_00c66691;
              (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
              uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
              (*(uint *)(gen_frame + 0x6c)) = uVar5;
            }
          }
          (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
          if ((*(uint *)(gen_frame + 0x6c)) != 0xffffffff) {
            F_00c50c0d((*(uint *)(gen_frame + 0x6c)),(*(undefined * PTR32 *)(gen_frame + 0x5c)));
          }
          if ((*(int *)(gen_frame + 0x54)) == 0) goto LAB_00c66691;
          if ((*(char *)(gen_frame + 0x63)) == '\0') {
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1;
            pbVar18 = ((byte *)(gen_frame + 0x4));
            (*(undefined1 * PTR32 *)(gen_frame + 0x50))[iVar11] = 0;
            iVar6 = (char)(*(byte *)(gen_frame + 0x7b)) - 1;
            pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
            puVar19 = (*(undefined1 * PTR32 *)(gen_frame + 0x50));
            pcVar8 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
            (*pcVar8)(iVar6,pwVar13,puVar19,pbVar18);
          }
        }
LAB_00c665bc: ;
        (*(char *)(gen_frame + 0x5b)) = (*(char *)(gen_frame + 0x5b)) + '\x01';
        pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x44)) + 1;
        (*(byte * PTR32 *)(gen_frame + 0x44)) = pbVar14;
LAB_00c66635: ;
        if (((*(uint *)(gen_frame + 0x6c)) == 0xffffffff) &&
           ((*pbVar14 != 0x25 || (pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x44)), (*(byte * PTR32 *)(gen_frame + 0x44))[1] != 0x6e)))) goto LAB_00c66691;
LAB_00c66651: ;
        bVar3 = *pbVar14;
        pbVar18 = pbVar14;
        if (bVar3 == 0) goto LAB_00c66691;
        goto LAB_00c65819;
      }
LAB_00c665db: ;
      (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
      uVar7 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
      pbVar14 = pbVar18 + 1;
      (*(uint *)(gen_frame + 0x6c)) = uVar7;
      (*(byte * PTR32 *)(gen_frame + 0x44)) = pbVar14;
      if (*pbVar18 == uVar7) {
        iVar6 = F_00c6e020(uVar7 & 0xff);
        if (iVar6 != 0) {
          (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) + 1;
          uVar5 = F_00c656aa((*(undefined * PTR32 *)(gen_frame + 0x5c)));
          bVar3 = *pbVar14;
          pbVar14 = pbVar18 + 2;
          (*(byte * PTR32 *)(gen_frame + 0x44)) = pbVar14;
          if (bVar3 != uVar5) {
            if (uVar5 != 0xffffffff) {
              F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
            }
            goto LAB_00c6667c;
          }
          (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
        }
        goto LAB_00c66635;
      }
LAB_00c6667c: ;
      if (uVar7 != 0xffffffff) {
        F_00c50c0d((*(uint *)(gen_frame + 0x6c)),(*(undefined * PTR32 *)(gen_frame + 0x5c)));
      }
LAB_00c66691: ;
      if ((*(int *)(gen_frame + 0x30)) == 1) {
        F_00c4c68f((*(undefined1 * PTR32 *)(gen_frame + 0x50)));
      }
      if ((*(uint *)(gen_frame + 0x6c)) == 0xffffffff) {
        iVar6 = (*(int *)(gen_frame + 0x34));
        if (((*(int *)(gen_frame + 0x34)) == 0) && ((*(char *)(gen_frame + 0x5b)) == '\0')) {
          iVar6 = -1;
        }
        if (((byte *)(gen_frame + 0x4))[0xc] == 0) {
          return iVar6;
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
        return iVar6;
      }
    }
    iVar6 = (*(int *)(gen_frame + 0x34));
    if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar6;
LAB_00c6629b: ;
  (*(int *)(gen_frame + 0x74)) = (*(int *)(gen_frame + 0x74)) - 1;
  if (uVar7 != 0xffffffff) {
    F_00c50c0d(uVar7,(*(undefined * PTR32 *)(gen_frame + 0x5c)));
  }
LAB_00c662b4: ;
  if (pwVar17 == pwVar13) goto LAB_00c66691;
  if (((*(char *)(gen_frame + 0x63)) == '\0') && ((*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 1, uVar5 != 99)) {
    if ((*(char *)(gen_frame + 0x5a)) == '\0') {
      *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x40)) = 0;
    }
    else {
      *(*(wchar_t * PTR32 *)(gen_frame + 0x40)) = L'\0';
    }
  }
  goto LAB_00c665bc;
}

/* ref: ___check_float_string_00c66701 */
GEN_LIB GEN_NOFRAME uint F_00c66701(GEN_P(gen_size32 * in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc66701u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if (((undefined *)GEN_TOP(*in_edi)) == param_4) {
      pvVar1 = F_00c54c73(_Count,2);
      *in_edi = pvVar1;
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi);
    }
    else {
      pvVar1 = F_00c54d0d(((undefined *)GEN_TOP(*in_edi)),_Count,2);
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c66758 */
GEN_LIB GEN_NOFRAME uint F_00c66758(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc66758u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c48637((uint)param_1);
  uVar2 = (uint)(char)param_1;
  if (iVar1 == 0) {
    uVar2 = (uVar2 & 0xffffffdf) - 7;
  }
  return uVar2;
}

/* ref: __inc_00c66778 */
GEN_LIB GEN_NOFRAME uint F_00c66778(GEN_P(undefined * in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xc66778u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * in_edx = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(in_edx) + 4)));
  *piVar1 = *piVar1 - 1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(in_edx)));
    (*(char * PTR32 *)((char *)(in_edx))) = (*(char * PTR32 *)((char *)(in_edx))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(in_edx);
  return uVar3;
}

/* ref: __un_inc_00c6678e */
GEN_LIB GEN_NOFRAME unsigned int F_00c6678e(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6678eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != -1) {
    F_00c50c0d(param_1,param_2);
    return;
  }
  return;
}

/* ref: __whiteout_00c667a1 */
GEN_LIB GEN_NOFRAME uint F_00c667a1(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc667a1u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_LIB GEN_NOFRAME int F_00c667cb(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(uchar * param_2, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc667cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uchar * param_2 = (uchar *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x208, 8);
  byte bVar1;
  undefined * pcVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code * pcVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  wchar_t * pwVar13;
  byte * pbVar14;
  byte * pbVar15;
  byte * pbVar16;
  wchar_t * pwVar17;
  bool bVar18;
  undefined1 * puVar19;
  uint uVar20;
  
  (*(uint *)(gen_frame + 0x200)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x204);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = _File;
  (*(byte * PTR32 *)(gen_frame + 0x54)) = param_2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x80));
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x15e;
  (*(int *)(gen_frame + 0x34)) = 0;
  ((wchar_t *)(gen_frame + 0x14))[0] = L'\0';
  ((wchar_t *)(gen_frame + 0x14))[1] = L'\0';
  (*(uint *)(gen_frame + 0x70)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  if ((param_2 == ((uchar *)GEN_TOP(0x0))) || (_File == ((undefined *)GEN_TOP(0x0)))) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    return -1;
  }
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar5 = F_00c5d07b(_File);
    if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
      puVar9 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar9 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar5 >> 5)])));
    }
    if ((puVar9[0x24] & 0x7f) == 0) {
      if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
        puVar9 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar9 = ((undefined *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)uVar5 >> 5)])));
      }
      if ((puVar9[0x24] & 0x80) == 0) goto LAB_00c668c6;
    }
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    iVar6 = -1;
  }
  else {
LAB_00c668c6: ;
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
    bVar3 = *param_2;
    (*(char *)(gen_frame + 0x62)) = '\0';
    (*(int *)(gen_frame + 0x78)) = 0;
    (*(int *)(gen_frame + 0x3c)) = 0;
    if (bVar3 != 0) {
      do {
        iVar6 = F_00c4873c((uint)bVar3);
        if (iVar6 == 0) {
          pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x54));
          if (*(*(byte * PTR32 *)(gen_frame + 0x54)) == 0x25) {
            if ((*(byte * PTR32 *)(gen_frame + 0x54))[1] == 0x25) {
              if ((*(byte * PTR32 *)(gen_frame + 0x54))[1] == 0x25) {
                pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x54)) + 1;
              }
              goto LAB_00c67734;
            }
            (*(int *)(gen_frame + 0x40)) = 0;
            (*(byte *)(gen_frame + 0x33)) = 0;
            (*(int *)(gen_frame + 0x58)) = 0;
            (*(int *)(gen_frame + 0x44)) = 0;
            (*(int *)(gen_frame + 0x68)) = 0;
            (*(int *)(gen_frame + 0x38)) = 0;
            (*(byte *)(gen_frame + 0x61)) = 0;
            (*(char *)(gen_frame + 0x60)) = '\0';
            (*(char *)(gen_frame + 0x6e)) = '\0';
            (*(char *)(gen_frame + 0x77)) = '\0';
            (*(char *)(gen_frame + 0x63)) = '\0';
            (*(char *)(gen_frame + 0x6f)) = '\0';
            (*(byte *)(gen_frame + 0x7f)) = 1;
            (*(int *)(gen_frame + 0x28)) = 0;
            pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x54));
            do {
              pbVar15 = pbVar16 + 1;
              uVar5 = (uint)*pbVar15;
              iVar6 = F_00c48637(uVar5);
              pbVar14 = pbVar15;
              if (iVar6 == 0) {
                if (uVar5 < 0x4f) {
                  if (uVar5 != 0x4e) {
                    if (uVar5 == 0x2a) {
                      (*(char *)(gen_frame + 0x6e)) = (*(char *)(gen_frame + 0x6e)) + '\x01';
                    }
                    else if (uVar5 != 0x46) {
                      if (uVar5 == 0x49) {
                        bVar3 = pbVar16[2];
                        if ((bVar3 == 0x36) && (pbVar14 = pbVar16 + 3, *pbVar14 == 0x34))
                        goto LAB_00c66a33;
                        if ((((((bVar3 != 0x33) || (pbVar14 = pbVar16 + 3, *pbVar14 != 0x32)) &&
                              (pbVar14 = pbVar15, bVar3 != 100)) &&
                             ((bVar3 != 0x69 && (bVar3 != 0x6f)))) && (bVar3 != 0x78)) &&
                           (bVar3 != 0x58)) goto LAB_00c66a8c;
                      }
                      else if (uVar5 == 0x4c) {
                        (*(byte *)(gen_frame + 0x7f)) = (*(byte *)(gen_frame + 0x7f)) + 1;
                      }
                      else {
LAB_00c66a8c: ;
                        (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                        pbVar14 = pbVar15;
                      }
                    }
                  }
                }
                else if (uVar5 == 0x68) {
                  (*(byte *)(gen_frame + 0x7f)) = (*(byte *)(gen_frame + 0x7f)) - 1;
                  (*(char *)(gen_frame + 0x6f)) = (*(char *)(gen_frame + 0x6f)) - 1;
                }
                else {
                  if (uVar5 == 0x6c) {
                    pbVar14 = pbVar16 + 2;
                    if (*pbVar14 == 0x6c) {
LAB_00c66a33: ;
                      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 1;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 0)) = 0;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) = 0;
                      (*(longlong *)(gen_frame + 0x4c)) = 0;
                      goto LAB_00c66ab6;
                    }
                    (*(byte *)(gen_frame + 0x7f)) = (*(byte *)(gen_frame + 0x7f)) + 1;
                  }
                  else if (uVar5 != 0x77) goto LAB_00c66a8c;
                  (*(char *)(gen_frame + 0x6f)) = (*(char *)(gen_frame + 0x6f)) + '\x01';
                  pbVar14 = pbVar15;
                }
              }
              else {
                (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
                (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) * 10 - 0x30 + uVar5;
              }
LAB_00c66ab6: ;
              pbVar16 = pbVar14;
            } while ((*(char *)(gen_frame + 0x77)) == '\0');
            (*(byte * PTR32 *)(gen_frame + 0x54)) = pbVar14;
            if ((*(char *)(gen_frame + 0x6e)) == '\0') {
              pwVar13 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x20));
              (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x20));
              (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x20)) + 4;
            }
            else {
              pwVar13 = ((wchar_t *)GEN_TOP(0x0));
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar13;
            (*(char *)(gen_frame + 0x77)) = '\0';
            if (((*(char *)(gen_frame + 0x6f)) == '\0') && ((*pbVar14 == 0x53 || ((*(char *)(gen_frame + 0x6f)) = -1, *pbVar14 == 0x43)))) {
              (*(char *)(gen_frame + 0x6f)) = '\x01';
            }
            uVar5 = *pbVar14 | 0x20;
            (*(uint *)(gen_frame + 0x1c)) = uVar5;
            if (uVar5 != 0x6e) {
              if ((uVar5 == 99) || (uVar5 == 0x7b)) {
                (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
              else {
                uVar5 = F_00c667a1(&(*(int *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
              (*(uint *)(gen_frame + 0x70)) = uVar5;
              if (uVar5 == 0xffffffff) break;
            }
            uVar20 = (*(uint *)(gen_frame + 0x1c));
            pcVar2 = (*(undefined * PTR32 *)(gen_frame + 0x18));
            if (((*(int *)(gen_frame + 0x44)) == 0) || (uVar5 = (*(uint *)(gen_frame + 0x70)), (*(int *)(gen_frame + 0x68)) != 0)) {
              if (((*(char *)(gen_frame + 0x6e)) == '\0') &&
                 ((((*(uint *)(gen_frame + 0x1c)) == 99 || ((*(uint *)(gen_frame + 0x1c)) == 0x73)) || ((*(uint *)(gen_frame + 0x1c)) == 0x7b)))) {
                pwVar13 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x18));
                (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
                (*(undefined * PTR32 *)(gen_frame + 0x20)) = pcVar2 + 8;
                iVar6 = *(int *)(pcVar2 + 4);
                (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar13;
                (*(int *)(gen_frame + 0x38)) = iVar6;
                if (iVar6 == 0) {
                  if ((*(char *)(gen_frame + 0x6f)) < '\x01') {
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
              if ((int)(*(uint *)(gen_frame + 0x1c)) < 0x70) {
                if ((*(uint *)(gen_frame + 0x1c)) == 0x6f) {
LAB_00c67441: ;
                  if ((*(uint *)(gen_frame + 0x70)) == 0x2d) {
                    (*(char *)(gen_frame + 0x60)) = '\x01';
                  }
                  else if ((*(uint *)(gen_frame + 0x70)) != 0x2b) goto LAB_00c67488;
                  iVar6 = (*(int *)(gen_frame + 0x68)) - 1;
                  (*(int *)(gen_frame + 0x68)) = iVar6;
                  if ((iVar6 == 0) && ((*(int *)(gen_frame + 0x44)) != 0)) {
                    (*(char *)(gen_frame + 0x77)) = '\x01';
                  }
                  else {
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
LAB_00c67482: ;
                    (*(uint *)(gen_frame + 0x70)) = uVar5;
                  }
                  goto LAB_00c67488;
                }
                if ((*(uint *)(gen_frame + 0x1c)) == 99) {
                  if ((*(int *)(gen_frame + 0x44)) == 0) {
                    (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 1;
                    (*(int *)(gen_frame + 0x44)) = 1;
                  }
LAB_00c67019: ;
                  if ('\0' < (*(char *)(gen_frame + 0x6f))) {
                    (*(char *)(gen_frame + 0x63)) = '\x01';
                  }
LAB_00c67029: ;
                  pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
                  uVar5 = (*(uint *)(gen_frame + 0x1c));
                  (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
                  if ((*(uint *)(gen_frame + 0x70)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  }
                  pwVar17 = pwVar13;
                  if (uVar5 == 99) goto LAB_00c67058;
LAB_00c67052: ;
                  (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) - 1;
LAB_00c67058: ;
                  do {
                    iVar6 = (*(int *)(gen_frame + 0x68));
                    if (((*(int *)(gen_frame + 0x44)) != 0) && ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar6 == 0)) {
LAB_00c673eb: ;
                      if (pwVar17 == pwVar13) goto LAB_00c67865;
                      if (((*(char *)(gen_frame + 0x6e)) == '\0') && ((*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1, (*(uint *)(gen_frame + 0x1c)) != 99)) {
                        if ((*(char *)(gen_frame + 0x63)) == '\0') {
                          *(byte *)(*(wchar_t * PTR32 *)(gen_frame + 0x48)) = 0;
                        }
                        else {
                          *(*(wchar_t * PTR32 *)(gen_frame + 0x48)) = L'\0';
                        }
                      }
                      goto LAB_00c67715;
                    }
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar20 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x70)) = uVar20;
                    if (uVar20 == 0xffffffff) {
LAB_00c673d2: ;
                      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
                      if (uVar20 != 0xffffffff) {
                        F_00c50c0d(uVar20,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                      }
                      goto LAB_00c673eb;
                    }
                    bVar3 = (byte)uVar20;
                    if (uVar5 != 99) {
                      if (uVar5 == 0x73) {
                        if ((8 < (int)uVar20) && ((int)uVar20 < 0xe)) goto LAB_00c673d2;
                        if (uVar20 != 0x20) goto LAB_00c670e6;
                      }
                      if ((uVar5 != 0x7b) ||
                         (uVar5 = (*(uint *)(gen_frame + 0x1c)),
                         ((int)(char)(((byte *)(gen_frame + 0x1e0))[(int)((int)uVar20 >> 3)] ^ (*(byte *)(gen_frame + 0x61))) & 1 << (bVar3 & 7)) ==
                         0)) goto LAB_00c673d2;
                    }
LAB_00c670e6: ;
                    if ((*(char *)(gen_frame + 0x6e)) == '\0') goto code_r0x00c670f3;
                    pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + 1)));
                  } while( true );
                }
                if ((*(uint *)(gen_frame + 0x1c)) == 100) goto LAB_00c67441;
                if (100 < (int)(*(uint *)(gen_frame + 0x1c))) {
                  if (0x67 < (int)(*(uint *)(gen_frame + 0x1c))) {
                    if ((*(uint *)(gen_frame + 0x1c)) == 0x69) {
                      uVar20 = 100;
                      goto LAB_00c66c32;
                    }
                    if ((*(uint *)(gen_frame + 0x1c)) != 0x6e) goto LAB_00c671a7;
                    iVar6 = (*(int *)(gen_frame + 0x78));
                    if ((*(char *)(gen_frame + 0x6e)) != '\0') goto LAB_00c67715;
                    goto LAB_00c676e9;
                  }
                  iVar6 = 0;
                  if ((*(uint *)(gen_frame + 0x70)) == 0x2d) {
                    *(*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = 0x2d;
                    iVar6 = 1;
LAB_00c66c6d: ;
                    (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1;
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x70)) = uVar5;
                  }
                  else if ((*(uint *)(gen_frame + 0x70)) == 0x2b) goto LAB_00c66c6d;
                  if ((*(int *)(gen_frame + 0x44)) == 0) {
                    (*(int *)(gen_frame + 0x68)) = -1;
                  }
                  while( true ) {
                    iVar7 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
                    iVar11 = (*(int *)(gen_frame + 0x68));
                    if ((iVar7 == 0) || ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar11 == 0)) break;
                    (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = (byte)(*(uint *)(gen_frame + 0x70));
                    iVar6 = iVar6 + 1;
                    uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar6,((undefined1 *)(gen_frame + 0x80)),&(*(int *)(gen_frame + 0x34)));
                    if (uVar5 == 0) goto LAB_00c67865;
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x70)) = uVar5;
                  }
                  iVar11 = (*(int *)(gen_frame + 0x68));
                  (*(byte *)(gen_frame + 0x61)) = *((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc)))));
                  if ((*((byte *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc))))) == (byte)(*(uint *)(gen_frame + 0x70))) &&
                     ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar11 != 0)) {
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x70)) = uVar5;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = (*(byte *)(gen_frame + 0x61));
                    iVar6 = iVar6 + 1;
                    uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar6,((undefined1 *)(gen_frame + 0x80)),&(*(int *)(gen_frame + 0x34)));
                    if (uVar5 == 0) break;
                    while ((iVar7 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff), iVar11 = (*(int *)(gen_frame + 0x68)), iVar7 != 0 &&
                           ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar11 != 0))) {
                      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                      (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = (byte)(*(uint *)(gen_frame + 0x70));
                      iVar6 = iVar6 + 1;
                      uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar6,((undefined1 *)(gen_frame + 0x80)),&(*(int *)(gen_frame + 0x34)));
                      if (uVar5 == 0) goto LAB_00c67865;
                      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                      uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x70)) = uVar5;
                    }
                  }
                  iVar11 = (*(int *)(gen_frame + 0x68));
                  iVar7 = iVar6;
                  if (((*(int *)(gen_frame + 0x58)) != 0) &&
                     ((((*(uint *)(gen_frame + 0x70)) == 0x65 || ((*(uint *)(gen_frame + 0x70)) == 0x45)) &&
                      ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar11 != 0)))) {
                    (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar6] = 0x65;
                    iVar7 = iVar6 + 1;
                    uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar7,((undefined1 *)(gen_frame + 0x80)),&(*(int *)(gen_frame + 0x34)));
                    if (uVar5 == 0) break;
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x70)) = uVar5;
                    if (uVar5 == 0x2d) {
                      (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar7] = 0x2d;
                      iVar7 = iVar6 + 2;
                      uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar7,((undefined1 *)(gen_frame + 0x80)),&(*(int *)(gen_frame + 0x34)));
                      if (uVar5 == 0) break;
LAB_00c66ede: ;
                      iVar6 = (*(int *)(gen_frame + 0x68));
                      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1;
                      if (iVar6 == 0) {
                        (*(int *)(gen_frame + 0x68)) = 0;
                      }
                      else {
                        (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                        uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                        (*(uint *)(gen_frame + 0x70)) = uVar5;
                      }
                    }
                    else if (uVar5 == 0x2b) goto LAB_00c66ede;
                    while ((iVar11 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff), iVar6 = (*(int *)(gen_frame + 0x68)), iVar11 != 0 &&
                           ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar6 != 0))) {
                      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                      (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar7] = (byte)(*(uint *)(gen_frame + 0x70));
                      iVar7 = iVar7 + 1;
                      uVar5 = F_00c66701(&(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x5c)),iVar7,((undefined1 *)(gen_frame + 0x80)),&(*(int *)(gen_frame + 0x34)));
                      if (uVar5 == 0) goto LAB_00c67865;
                      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                      uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x70)) = uVar5;
                    }
                  }
                  (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
                  if ((*(uint *)(gen_frame + 0x70)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  }
                  if ((*(int *)(gen_frame + 0x58)) != 0) {
                    if ((*(char *)(gen_frame + 0x6e)) == '\0') {
                      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
                      pbVar16 = ((byte *)(gen_frame + 0x0));
                      (*(undefined1 * PTR32 *)(gen_frame + 0x5c))[iVar7] = 0;
                      iVar6 = (char)(*(byte *)(gen_frame + 0x7f)) - 1;
                      pwVar13 = (*(wchar_t * PTR32 *)(gen_frame + 0x48));
                      puVar19 = (*(undefined1 * PTR32 *)(gen_frame + 0x5c));
                      pcVar8 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
                      (*pcVar8)(iVar6,pwVar13,puVar19,pbVar16);
                    }
                    goto LAB_00c67715;
                  }
                  break;
                }
LAB_00c671a7: ;
                if (*(*(byte * PTR32 *)(gen_frame + 0x54)) != (*(uint *)(gen_frame + 0x70))) {
                  if ((*(uint *)(gen_frame + 0x70)) != 0xffffffff) {
                    F_00c50c0d((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  }
                  (*(int *)(gen_frame + 0x10)) = 1;
                  break;
                }
                (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) - 1;
                if ((*(char *)(gen_frame + 0x6e)) == '\0') {
                  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 *)(gen_frame + 0x18));
                }
              }
              else {
                if ((*(uint *)(gen_frame + 0x1c)) == 0x70) {
                  (*(byte *)(gen_frame + 0x7f)) = 1;
                  goto LAB_00c67441;
                }
                if ((*(uint *)(gen_frame + 0x1c)) == 0x73) goto LAB_00c67019;
                if ((*(uint *)(gen_frame + 0x1c)) == 0x75) goto LAB_00c67441;
                if ((*(uint *)(gen_frame + 0x1c)) != 0x78) {
                  if ((*(uint *)(gen_frame + 0x1c)) == 0x7b) {
                    if ('\0' < (*(char *)(gen_frame + 0x6f))) {
                      (*(char *)(gen_frame + 0x63)) = '\x01';
                    }
                    pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x54)) + 1;
                    if (*pbVar16 == 0x5e) {
                      pbVar16 = (*(byte * PTR32 *)(gen_frame + 0x54)) + 2;
                      (*(byte *)(gen_frame + 0x61)) = 0xff;
                    }
                    F_00c48350(((byte *)(gen_frame + 0x1e0)),0,0x20);
                    bVar3 = (*(byte *)(gen_frame + 0x33));
                    if (*pbVar16 == 0x5d) {
                      ((byte *)(gen_frame + 0x1e0))[0xb] = 0x20;
                      pbVar16 = pbVar16 + 1;
                      bVar3 = 0x5d;
                    }
                    while (bVar1 = *pbVar16, bVar1 != 0x5d) {
                      if (((bVar1 == 0x2d) && (bVar3 != 0)) && (bVar12 = pbVar16[1], bVar12 != 0x5d)
                         ) {
                        if (bVar3 < bVar12) {
                          (*(byte *)(gen_frame + 0x7f)) = bVar12;
                          bVar12 = bVar3;
                        }
                        else {
                          (*(byte *)(gen_frame + 0x7f)) = bVar3;
                        }
                        if (bVar12 < (*(byte *)(gen_frame + 0x7f))) {
                          uVar20 = (uint)bVar12;
                          uVar5 = (uint)(byte)((*(byte *)(gen_frame + 0x7f)) - bVar12);
                          do {
                            ((byte *)(gen_frame + 0x1e0))[(int)(uVar20 >> 3)] =
                                 ((byte *)(gen_frame + 0x1e0))[(int)(uVar20 >> 3)] | '\x01' << ((byte)uVar20 & 7);
                            uVar20 = uVar20 + 1;
                            uVar5 = uVar5 - 1;
                          } while (uVar5 != 0);
                        }
                        ((byte *)(gen_frame + 0x1e0))[(int)((*(byte *)(gen_frame + 0x7f)) >> 3)] =
                             ((byte *)(gen_frame + 0x1e0))[(int)((*(byte *)(gen_frame + 0x7f)) >> 3)] | '\x01' << ((*(byte *)(gen_frame + 0x7f)) & 7);
                        pbVar16 = pbVar16 + 2;
                        bVar3 = 0;
                      }
                      else {
                        ((byte *)(gen_frame + 0x1e0))[(int)(bVar1 >> 3)] = ((byte *)(gen_frame + 0x1e0))[(int)(bVar1 >> 3)] | '\x01' << (bVar1 & 7);
                        pbVar16 = pbVar16 + 1;
                        bVar3 = bVar1;
                      }
                    }
                    (*(byte * PTR32 *)(gen_frame + 0x54)) = pbVar16;
                    goto LAB_00c67029;
                  }
                  goto LAB_00c671a7;
                }
LAB_00c66c32: ;
                if ((*(uint *)(gen_frame + 0x70)) == 0x2d) {
                  (*(char *)(gen_frame + 0x60)) = '\x01';
LAB_00c672d9: ;
                  iVar6 = (*(int *)(gen_frame + 0x68)) - 1;
                  (*(int *)(gen_frame + 0x68)) = iVar6;
                  if ((iVar6 == 0) && ((*(int *)(gen_frame + 0x44)) != 0)) {
                    (*(char *)(gen_frame + 0x77)) = '\x01';
                  }
                  else {
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x70)) = uVar5;
                  }
                }
                else if ((*(uint *)(gen_frame + 0x70)) == 0x2b) goto LAB_00c672d9;
                if ((*(uint *)(gen_frame + 0x70)) == 0x30) {
                  (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                  (*(uint *)(gen_frame + 0x70)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  if (((char)(*(uint *)(gen_frame + 0x70)) == 'x') || ((char)(*(uint *)(gen_frame + 0x70)) == 'X')) {
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                    (*(uint *)(gen_frame + 0x70)) = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    if (((*(int *)(gen_frame + 0x44)) != 0) && (iVar6 = (*(int *)(gen_frame + 0x68)) - 2, (*(int *)(gen_frame + 0x68)) = iVar6, iVar6 < 1))
                    {
                      (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                    }
                    uVar20 = 0x78;
                  }
                  else {
                    (*(int *)(gen_frame + 0x58)) = 1;
                    if (uVar20 == 0x78) {
                      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
                      if ((*(uint *)(gen_frame + 0x70)) != 0xffffffff) {
                        F_00c50c0d((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                      }
                      uVar5 = 0x30;
                      goto LAB_00c67482;
                    }
                    if (((*(int *)(gen_frame + 0x44)) != 0) && (iVar6 = (*(int *)(gen_frame + 0x68)) - 1, (*(int *)(gen_frame + 0x68)) = iVar6, iVar6 == 0))
                    {
                      (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                    }
                    uVar20 = 0x6f;
                  }
                }
LAB_00c67488: ;
                if ((*(int *)(gen_frame + 0x28)) == 0) {
                  if ((*(char *)(gen_frame + 0x77)) == '\0') {
                    while ((uVar5 = (*(uint *)(gen_frame + 0x70)), uVar20 != 0x78 && (uVar20 != 0x70))) {
                      iVar6 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
                      if (iVar6 == 0) goto LAB_00c6768d;
                      if (uVar20 == 0x6f) {
                        if (0x37 < (int)uVar5) goto LAB_00c6768d;
                        iVar6 = (*(int *)(gen_frame + 0x40)) << 3;
                      }
                      else {
                        iVar6 = (*(int *)(gen_frame + 0x40)) * 10;
                      }
LAB_00c6764e: ;
                      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                      (*(int *)(gen_frame + 0x40)) = iVar6 - 0x30 + uVar5;
                      if (((*(int *)(gen_frame + 0x44)) != 0) &&
                         (iVar6 = (*(int *)(gen_frame + 0x68)) - 1, (*(int *)(gen_frame + 0x68)) = iVar6, iVar6 == 0)) goto LAB_00c676a6;
                      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                      uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x70)) = uVar5;
                    }
                    iVar6 = F_00c486bb((*(uint *)(gen_frame + 0x70)) & 0xff);
                    if (iVar6 != 0) {
                      (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) << 4;
                      uVar5 = F_00c66758((char)uVar5);
                      (*(uint *)(gen_frame + 0x70)) = uVar5;
                      iVar6 = (*(int *)(gen_frame + 0x40));
                      goto LAB_00c6764e;
                    }
LAB_00c6768d: ;
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
                    if (uVar5 != 0xffffffff) {
                      F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                    }
                  }
LAB_00c676a6: ;
                  if ((*(char *)(gen_frame + 0x60)) != '\0') {
                    (*(int *)(gen_frame + 0x40)) = -(*(int *)(gen_frame + 0x40));
                  }
                }
                else {
                  if ((*(char *)(gen_frame + 0x77)) == '\0') {
                    while ((uVar5 = (*(uint *)(gen_frame + 0x70)), uVar20 != 0x78 && (uVar20 != 0x70))) {
                      iVar6 = F_00c48637((*(uint *)(gen_frame + 0x70)) & 0xff);
                      if (iVar6 == 0) goto LAB_00c67591;
                      if (uVar20 == 0x6f) {
                        if (0x37 < (int)uVar5) goto LAB_00c67591;
                        uVar10 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x4c)) >> 0x1d;
                        iVar6 = (uint)(*(longlong *)(gen_frame + 0x4c)) << 3;
                        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 0)) = iVar6;
                        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) = uVar10;
                        (*(longlong *)(gen_frame + 0x4c)) = CONCAT44(uVar10,iVar6);
                      }
                      else {
                        (*(longlong *)(gen_frame + 0x4c)) = (*(longlong *)(gen_frame + 0x4c)) * 10;
                      }
LAB_00c6754c: ;
                      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                      uVar5 = uVar5 - 0x30;
                      bVar18 = CARRY4((uint)(*(longlong *)(gen_frame + 0x4c)),uVar5);
                      iVar6 = (uint)(*(longlong *)(gen_frame + 0x4c)) + uVar5;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 0)) = iVar6;
                      iVar11 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) + ((int)uVar5 >> 0x1f) + (uint)bVar18;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) = iVar11;
                      (*(longlong *)(gen_frame + 0x4c)) = CONCAT44(iVar11,iVar6);
                      if (((*(int *)(gen_frame + 0x44)) != 0) &&
                         (iVar6 = (*(int *)(gen_frame + 0x68)) - 1, (*(int *)(gen_frame + 0x68)) = iVar6, iVar6 == 0)) goto LAB_00c675aa;
                      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                      uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x70)) = uVar5;
                    }
                    iVar6 = F_00c486bb((*(uint *)(gen_frame + 0x70)) & 0xff);
                    if (iVar6 != 0) {
                      uVar10 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x4c)) >> 0x1c;
                      iVar6 = (uint)(*(longlong *)(gen_frame + 0x4c)) << 4;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 0)) = iVar6;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) = uVar10;
                      (*(longlong *)(gen_frame + 0x4c)) = CONCAT44(uVar10,iVar6);
                      uVar5 = F_00c66758((char)uVar5);
                      (*(uint *)(gen_frame + 0x70)) = uVar5;
                      goto LAB_00c6754c;
                    }
LAB_00c67591: ;
                    (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
                    if (uVar5 != 0xffffffff) {
                      F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                    }
                  }
LAB_00c675aa: ;
                  if ((*(char *)(gen_frame + 0x60)) != '\0') {
                    iVar6 = -(uint)(*(longlong *)(gen_frame + 0x4c));
                    iVar11 = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) + ((uint)(*(longlong *)(gen_frame + 0x4c)) != 0));
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 0)) = iVar6;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4)) = iVar11;
                    (*(longlong *)(gen_frame + 0x4c)) = CONCAT44(iVar11,iVar6);
                  }
                }
                if (uVar20 == 0x46) {
                  (*(int *)(gen_frame + 0x58)) = 0;
                }
                if ((*(int *)(gen_frame + 0x58)) == 0) break;
                if ((*(char *)(gen_frame + 0x6e)) == '\0') {
                  (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 1;
                  iVar6 = (*(int *)(gen_frame + 0x40));
LAB_00c676e9: ;
                  if ((*(int *)(gen_frame + 0x28)) == 0) {
                    if ((*(byte *)(gen_frame + 0x7f)) == 0) {
                      *(*(wchar_t * PTR32 *)(gen_frame + 0x48)) = (wchar_t)iVar6;
                    }
                    else {
                      *(int *)(*(wchar_t * PTR32 *)(gen_frame + 0x48)) = iVar6;
                    }
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x48)) = (uint)(*(longlong *)(gen_frame + 0x4c));
                    *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x48)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x4c)) + 4));
                  }
                }
              }
LAB_00c67715: ;
              (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) + '\x01';
              pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x54)) + 1;
              (*(byte * PTR32 *)(gen_frame + 0x54)) = pbVar14;
              goto LAB_00c67796;
            }
          }
          else {
LAB_00c67734: ;
            (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
            uVar5 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
            pbVar14 = pbVar16 + 1;
            (*(uint *)(gen_frame + 0x70)) = uVar5;
            (*(byte * PTR32 *)(gen_frame + 0x54)) = pbVar14;
            if (*pbVar16 == uVar5) {
              iVar6 = F_00c6e020(uVar5 & 0xff);
              if (iVar6 != 0) {
                (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
                uVar20 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
                bVar3 = *pbVar14;
                pbVar14 = pbVar16 + 2;
                (*(byte * PTR32 *)(gen_frame + 0x54)) = pbVar14;
                if (bVar3 != uVar20) {
                  if (uVar20 != 0xffffffff) {
                    F_00c50c0d(uVar20,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  }
                  goto LAB_00c67850;
                }
                (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
              }
LAB_00c67796: ;
              if (((*(uint *)(gen_frame + 0x70)) != 0xffffffff) ||
                 ((*pbVar14 == 0x25 && (pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x54)), (*(byte * PTR32 *)(gen_frame + 0x54))[1] == 0x6e))))
              goto LAB_00c677ba;
              break;
            }
          }
LAB_00c67850: ;
          if (uVar5 != 0xffffffff) {
            F_00c50c0d((*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
          }
          break;
        }
        (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) - 1;
        uVar5 = F_00c667a1(&(*(int *)(gen_frame + 0x78)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
        pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x54));
        if (uVar5 != 0xffffffff) {
          F_00c50c0d(uVar5,(*(undefined * PTR32 *)(gen_frame + 0x64)));
          pbVar14 = (*(byte * PTR32 *)(gen_frame + 0x54));
        }
        do {
          pbVar14 = pbVar14 + 1;
          iVar6 = F_00c4873c((uint)*pbVar14);
        } while (iVar6 != 0);
        (*(byte * PTR32 *)(gen_frame + 0x54)) = pbVar14;
LAB_00c677ba: ;
        bVar3 = *pbVar14;
      } while (bVar3 != 0);
LAB_00c67865: ;
      if ((*(int *)(gen_frame + 0x34)) == 1) {
        F_00c4c68f((*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
      }
      if ((*(uint *)(gen_frame + 0x70)) == 0xffffffff) {
        iVar6 = (*(int *)(gen_frame + 0x3c));
        if (((*(int *)(gen_frame + 0x3c)) == 0) && ((*(char *)(gen_frame + 0x62)) == '\0')) {
          iVar6 = -1;
        }
        if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
          return iVar6;
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        return iVar6;
      }
      if ((*(int *)(gen_frame + 0x10)) == 1) {
        piVar4 = F_00c51f85();
        *piVar4 = 0x16;
        F_00c4c305();
      }
    }
    iVar6 = (*(int *)(gen_frame + 0x3c));
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar6;
code_r0x00c670f3: ;
  if ((*(int *)(gen_frame + 0x38)) == 0) {
    piVar4 = F_00c51f85();
    *piVar4 = 0xc;
    if ((*(char *)(gen_frame + 0x63)) == '\0') {
      *(byte *)pwVar17 = 0;
    }
    else {
      *pwVar17 = L'\0';
    }
    goto LAB_00c67865;
  }
  if ((*(char *)(gen_frame + 0x63)) == '\0') {
    *(byte *)pwVar13 = bVar3;
    pwVar13 = ((wchar_t *)GEN_TOP(((int)pwVar13 + 1)));
  }
  else {
    (*(byte *)(gen_frame + 0x24)) = bVar3;
    iVar6 = F_00c6e020(uVar20 & 0xff);
    if (iVar6 != 0) {
      (*(int *)(gen_frame + 0x78)) = (*(int *)(gen_frame + 0x78)) + 1;
      uVar20 = F_00c66778((*(undefined * PTR32 *)(gen_frame + 0x64)));
      (*(undefined1 *)(gen_frame + 0x25)) = (char)uVar20;
    }
    ((wchar_t *)(gen_frame + 0x14))[0] = L'?';
    ((wchar_t *)(gen_frame + 0x14))[1] = L'\0';
    F_00c7b204(((wchar_t *)(gen_frame + 0x14)),(char *)&(*(byte *)(gen_frame + 0x24)),*((gen_size32 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xac))),(undefined *)((byte *)(gen_frame + 0x0)));
    *pwVar13 = ((wchar_t *)(gen_frame + 0x14))[0];
    pwVar13 = pwVar13 + 1;
  }
  (*(wchar_t * PTR32 *)(gen_frame + 0x48)) = pwVar13;
  goto LAB_00c67052;
}

/* ref: FUN_00c678f0 */
GEN_LIB GEN_FRAME float10 F_00c678f0(GEN_P(float in_xmm2, float gen_a0), GEN_P(float in_xmm3, float gen_a1), GEN_P(float in_xmm4, float gen_a2), GEN_P(float10 in_st0, double gen_a3))
{
  GEN_ENTER(0xc678f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), (unsigned int)gen_trace_d(gen_a3));
  GEN_PIN(float in_xmm2 = (float)gen_a0;)
  GEN_PIN(float in_xmm3 = (float)gen_a1;)
  GEN_PIN(float in_xmm4 = (float)gen_a2;)
  GEN_PIN(float10 in_st0 = (float10)gen_a3;)
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
GEN_LIB GEN_NOFRAME float10 F_00c67e68(GEN_P(double in_xmm0, double gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc67e68u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  GEN_PIN(double in_xmm0 = (double)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ushort uVar2;
  ushort uVar3;
  int iVar4;
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
  double dVar18;
  
  dVar15 = gen_bits2d(CONCAT44(param_3,param_2));
  uVar2 = (ushort)((uint)param_3 >> 0x10);
  uVar3 = (uVar2 & 0x7fff) + 0xcfd0;
  if (uVar3 < 0x10c6) {
    dVar10 = (REFG(double, 0x111d6b0) * dVar15 + REFG(double, 0x111d6b8)) - REFG(double, 0x111d6b8);
    iVar4 = ((int)ROUND(REFG(double, 0x111d6b0) * dVar15) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = *(double *)&REFG(undefined, 0x111d6c0) * dVar10;
    dVar5 = dVar15 - REFG(double, 0x111d6d0) * dVar10;
    dVar15 = dVar15 - REFG(double, 0x111d6d0) * dVar10;
    dVar16 = dVar15 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - *(double *)&REFG(undefined, 0x111d6c8) * dVar10;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&REFG(undefined, 0x111ce70) + iVar4) + *(double *)(&REFG(undefined, 0x111ce88) + iVar4);
    dVar13 = *(double *)(&REFG(undefined, 0x111ce88) + iVar4) * dVar16;
    dVar17 = dVar16 * *(double *)(&REFG(undefined, 0x111ce70) + iVar4);
    dVar14 = dVar13 + *(double *)(&REFG(undefined, 0x111ce78) + iVar4);
    dVar18 = dVar17 + dVar14;
    return ((float10)GEN_TOD((dVar18 + ((((((dVar10 * *(double *)&REFG(undefined, 0x111d6d8) - ((dVar15 - dVar16) - dVar11)
                                   ) * (*(double *)(&REFG(undefined, 0x111ce78) + iVar4) * dVar16 - dVar12) +
                                  *(double *)(&REFG(undefined, 0x111ce80) + iVar4)) +
                                 ((*(double *)(&REFG(undefined, 0x111ce78) + iVar4) - dVar14) + dVar13)) +
                                ((dVar14 - dVar18) + dVar17)) +
                               ((*(double *)&REFG(undefined, 0x111d680) * dVar7 + *(double *)&REFG(undefined, 0x111d670)) +
                               ((*(double *)&REFG(undefined, 0x111d6a0) * dVar5) * dVar6 +
                               *(double *)&REFG(undefined, 0x111d690)) * (dVar7 * dVar7)) *
                               ((dVar12 * dVar16) * dVar7)) +
                              ((*(double *)&REFG(undefined, 0x111d688) * dVar9 + *(double *)&REFG(undefined, 0x111d678)) +
                              ((*(double *)&REFG(undefined, 0x111d6a8) * dVar5) * dVar8 + *(double *)&REFG(undefined, 0x111d698)
                              ) * (dVar9 * dVar9)) * (*(double *)(&REFG(undefined, 0x111ce78) + iVar4) * dVar9)))));
  }
  if ((short)uVar3 < 0x10c6) {
    return ((float10)GEN_TOD((REFG(double, 0x111d700) -
                    gen_bits2d((ulonglong)gen_d2bits(dVar15) & 0xffffffffffff |
                               (ulonglong)(uVar2 & 0x7fff) << 0x30))));
  }
  dVar15 = (GEN_X87MATH(CONCAT44(param_3,param_2),0xc));
  return (float10)dVar15;
}

/* ref: __d_inttype */
GEN_LIB GEN_NOFRAME uint F_00c68b60(GEN_P(double param_1, double gen_a0))
{
  GEN_ENTER(0xc68b60u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(double param_1 = (double)gen_a0;)
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
      dVar1 = GEN_X87(param_1 * REFG(double, 0x1088108));
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

/* ref: Global::__powhlp */
GEN_LIB GEN_NOFRAME uint F_00c68bca(double gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_LIB GEN_NOFRAME float10 F_00c68d18(GEN_P(double in_xmm0, double gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc68d18u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  GEN_PIN(double in_xmm0 = (double)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ushort uVar2;
  int iVar3;
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
  uVar2 = ((ushort)((uint)param_3 >> 0x10) & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar9 = (REFG(double, 0x11218a0) * dVar14 + REFG(double, 0x11218a8)) - REFG(double, 0x11218a8);
    iVar3 = ((int)ROUND(REFG(double, 0x11218a0) * dVar14) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = *(double *)&REFG(undefined, 0x11218b0) * dVar9;
    dVar4 = dVar14 - REFG(double, 0x11218c0) * dVar9;
    dVar14 = dVar14 - REFG(double, 0x11218c0) * dVar9;
    dVar15 = dVar14 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - *(double *)&REFG(undefined, 0x11218b8) * dVar9;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&REFG(undefined, 0x1121060) + iVar3) + *(double *)(&REFG(undefined, 0x1121078) + iVar3);
    dVar12 = *(double *)(&REFG(undefined, 0x1121078) + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&REFG(undefined, 0x1121060) + iVar3);
    dVar13 = dVar12 + *(double *)(&REFG(undefined, 0x1121068) + iVar3);
    dVar17 = dVar16 + dVar13;
    return ((float10)GEN_TOD((dVar17 + ((((((dVar9 * *(double *)&REFG(undefined, 0x11218c8) - ((dVar14 - dVar15) - dVar10))
                                   * (*(double *)(&REFG(undefined, 0x1121068) + iVar3) * dVar15 - dVar11) +
                                  *(double *)(&REFG(undefined, 0x1121070) + iVar3)) +
                                 ((*(double *)(&REFG(undefined, 0x1121068) + iVar3) - dVar13) + dVar12)) +
                                ((dVar13 - dVar17) + dVar16)) +
                               ((*(double *)&REFG(undefined, 0x1121870) * dVar6 + *(double *)&REFG(undefined, 0x1121860)) +
                               ((*(double *)&REFG(undefined, 0x1121890) * dVar4) * dVar5 +
                               *(double *)&REFG(undefined, 0x1121880)) * (dVar6 * dVar6)) *
                               ((dVar11 * dVar15) * dVar6)) +
                              ((*(double *)&REFG(undefined, 0x1121878) * dVar8 + *(double *)&REFG(undefined, 0x1121868)) +
                              ((*(double *)&REFG(undefined, 0x1121898) * dVar4) * dVar7 + *(double *)&REFG(undefined, 0x1121888)
                              ) * (dVar8 * dVar8)) * (*(double *)(&REFG(undefined, 0x1121068) + iVar3) * dVar8)))));
  }
  if ((short)uVar2 < 0x10c6) {
    if (uVar2 >> 4 == 0xcfd) {
      return (float10)(dVar14 * *(double *)&REFG(undefined, 0x11218e0));
    }
    return (float10)dVar14;
  }
  dVar14 = (GEN_X87MATH(CONCAT44(param_3,param_2),0xb));
  return (float10)dVar14;
}

/* ref: _wcslen */
GEN_LIB GEN_NOFRAME gen_size32 F_00c68ec8(GEN_P(wchar_t * _Str, unsigned int gen_a0))
{
  GEN_ENTER(0xc68ec8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c68ee3(GEN_P(gen_size32 * in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc68ee3u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if (((undefined *)GEN_TOP(*in_edi)) == param_4) {
      pvVar1 = F_00c54c73(_Count,4);
      *in_edi = pvVar1;
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi * 2);
    }
    else {
      pvVar1 = F_00c54d0d(((undefined *)GEN_TOP(*in_edi)),_Count,4);
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c68f3d */
GEN_LIB GEN_NOFRAME ushort F_00c68f3d(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc68f3du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  ushort uVar1;
  int iVar2;
  
  if (((param_1 & 0xff00) != 0) ||
     (iVar2 = F_00c48637(param_1 & 0xff), uVar1 = (ushort)param_1, iVar2 == 0)) {
    uVar1 = ((ushort)param_1 & 0xffdf) - 7;
  }
  return uVar1;
}

/* ref: FUN_00c68f73 */
GEN_LIB GEN_NOFRAME uint F_00c68f73(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc68f73u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d6bf(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __un_inc_00c68f7e */
GEN_LIB GEN_NOFRAME uint F_00c68f7e(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc68f7eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  if ((ushort)param_1 != 0xffff) {
    wVar1 = F_00c7d8e0((ushort)param_1,param_2);
    return CONCAT22(extraout_var,wVar1);
  }
  return 0xffff;
}

/* ref: __whiteout_00c68f96 */
GEN_LIB GEN_NOFRAME ushort F_00c68f96(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc68f96u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
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
GEN_LIB GEN_NOFRAME int F_00c68fc8(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(wchar_t * param_2, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc68fc8u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x33c, 4);
  gen_size32 _Size;
  longlong lVar1;
  ushort uVar2;
  wchar_t wVar3;
  ushort wVar4;
  wchar_t wVar5;
  int * piVar6;
  int iVar7;
  int iVar8;
  char * _Dst;
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
  
  (*(uint *)(gen_frame + 0x334)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x338);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = _File;
  (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = param_2;
  (*(wchar_t * PTR32 *)(gen_frame + 0x58)) = ((wchar_t *)(gen_frame + 0x78));
  (*(int *)(gen_frame + 0x24)) = 0x15e;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x6c)) = 0;
  if ((param_2 == ((wchar_t *)GEN_TOP(0x0))) || (_File == ((undefined *)GEN_TOP(0x0)))) {
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    iVar7 = -1;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
    wVar3 = *param_2;
    (*(char *)(gen_frame + 0x5e)) = '\0';
    (*(uint *)(gen_frame + 0x70)) = 0;
    (*(int *)(gen_frame + 0x2c)) = 0;
    pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x34));
    if (wVar3 != L'\0') {
LAB_00c6907e: ;
      iVar7 = F_00c7db09(wVar3,8);
      uVar20 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x60)),0);
      uVar21 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x60))) >> 0x10);
      if (iVar7 != 0) {
        (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
        uVar2 = F_00c68f96(&(*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x60)));
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
        (*(uint *)(gen_frame + 0x48)) = 0;
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(int *)(gen_frame + 0x44)) = 0;
        (*(int *)(gen_frame + 0x68)) = 0;
        (*(uint *)(gen_frame + 0x38)) = 0;
        (*(byte *)(gen_frame + 0x4f)) = 0;
        (*(char *)(gen_frame + 0x5d)) = '\0';
        (*(char *)(gen_frame + 0x65)) = '\0';
        (*(char *)(gen_frame + 0x77)) = '\0';
        (*(char *)(gen_frame + 0x5f)) = '\0';
        (*(char *)(gen_frame + 0x67)) = '\0';
        (*(char *)(gen_frame + 0x66)) = '\x01';
        pwVar15 = ((wchar_t *)GEN_TOP(0x0));
        do {
          pwVar18 = pwVar16 + 1;
          uVar12 = (uint)(ushort)*pwVar18;
          if (((*pwVar18 & 0xff00U) == 0) && (iVar7 = F_00c48637(uVar12 & 0xff), iVar7 != 0)) {
            (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
            (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) * 10 - 0x30 + uVar12;
          }
          else if (uVar12 < 0x4f) {
            if (uVar12 != 0x4e) {
              if (uVar12 == 0x2a) {
                (*(char *)(gen_frame + 0x65)) = (*(char *)(gen_frame + 0x65)) + '\x01';
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
                  (*(char *)(gen_frame + 0x66)) = (*(char *)(gen_frame + 0x66)) + '\x01';
                }
                else {
LAB_00c69216: ;
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                }
              }
            }
          }
          else if (uVar12 == 0x68) {
            (*(char *)(gen_frame + 0x66)) = (*(char *)(gen_frame + 0x66)) - 1;
            (*(char *)(gen_frame + 0x67)) = (*(char *)(gen_frame + 0x67)) - 1;
          }
          else {
            if (uVar12 == 0x6c) {
              if (pwVar16[2] == L'l') {
                pwVar18 = pwVar16 + 2;
LAB_00c691bf: ;
                (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
                (*(uint *)(gen_frame + 0x3c)) = 0;
                (*(uint *)(gen_frame + 0x40)) = 0;
                goto LAB_00c69244;
              }
              (*(char *)(gen_frame + 0x66)) = (*(char *)(gen_frame + 0x66)) + '\x01';
            }
            else if (uVar12 != 0x77) goto LAB_00c69216;
            (*(char *)(gen_frame + 0x67)) = (*(char *)(gen_frame + 0x67)) + '\x01';
          }
LAB_00c69244: ;
          pwVar16 = pwVar18;
        } while ((*(char *)(gen_frame + 0x77)) == '\0');
        (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar18;
        if ((*(char *)(gen_frame + 0x65)) == '\0') {
          pwVar15 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x1c));
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0x1c)) + 4;
        }
        (*(wchar_t * PTR32 *)(gen_frame + 0x30)) = pwVar15;
        (*(char *)(gen_frame + 0x77)) = '\0';
        if (((*(char *)(gen_frame + 0x67)) == '\0') && ((*pwVar18 == L'S' || ((*(char *)(gen_frame + 0x67)) = '\x01', *pwVar18 == L'C')))) {
          (*(char *)(gen_frame + 0x67)) = -1;
        }
        uVar12 = (ushort)*pwVar18 | 0x20;
        (*(uint *)(gen_frame + 0x50)) = uVar12;
        if (uVar12 != 0x6e) {
          if ((uVar12 == 99) || (uVar12 == 0x7b)) {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
            uVar2 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
          }
          else {
            uVar2 = F_00c68f96(&(*(uint *)(gen_frame + 0x70)),(*(undefined * PTR32 *)(gen_frame + 0x60)));
          }
          (*(uint *)(gen_frame + 0x6c)) = (uint)uVar2;
          if (uVar2 == 0xffff) goto LAB_00c6a013;
        }
        if (((*(int *)(gen_frame + 0x44)) != 0) && ((*(int *)(gen_frame + 0x68)) == 0)) goto LAB_00c6a000;
        if (0x6f < uVar12) {
          if (uVar12 == 0x70) {
            (*(char *)(gen_frame + 0x66)) = '\x01';
            goto LAB_00c69c71;
          }
          if (uVar12 == 0x73) goto LAB_00c69824;
          if (uVar12 == 0x75) goto LAB_00c69c71;
          if (uVar12 == 0x78) {
LAB_00c6937c: ;
            if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == L'-') {
              (*(char *)(gen_frame + 0x5d)) = '\x01';
LAB_00c69aba: ;
              iVar7 = (*(int *)(gen_frame + 0x68)) - 1;
              (*(int *)(gen_frame + 0x68)) = iVar7;
              if ((iVar7 == 0) && ((*(int *)(gen_frame + 0x44)) != 0)) {
                (*(char *)(gen_frame + 0x77)) = '\x01';
              }
              else {
                (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
                wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
                (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
              }
            }
            else if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == L'+') goto LAB_00c69aba;
            if ((short)(*(uint *)(gen_frame + 0x6c)) == 0x30) {
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
              (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
              if ((wVar4 == 0x78) || (wVar4 == 0x58)) {
                (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
                wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
                (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
                if (((*(int *)(gen_frame + 0x44)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x68)) - 2, (*(int *)(gen_frame + 0x68)) = iVar7, iVar7 < 1)) {
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x50)) = 0x78;
              }
              else {
                (*(int *)(gen_frame + 0x54)) = 1;
                if ((*(uint *)(gen_frame + 0x50)) == 0x78) {
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
                  F_00c68f7e((uint)wVar4,(*(undefined * PTR32 *)(gen_frame + 0x60)));
                  uVar12 = 0x30;
                  goto LAB_00c69cba;
                }
                if (((*(int *)(gen_frame + 0x44)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x68)) - 1, (*(int *)(gen_frame + 0x68)) = iVar7, iVar7 == 0)) {
                  (*(char *)(gen_frame + 0x77)) = (*(char *)(gen_frame + 0x77)) + '\x01';
                }
                (*(uint *)(gen_frame + 0x50)) = 0x6f;
              }
            }
LAB_00c69cc0: ;
            if ((*(uint *)(gen_frame + 0x38)) == 0) {
              uVar12 = (*(uint *)(gen_frame + 0x48));
              if ((*(char *)(gen_frame + 0x77)) == '\0') {
                while ((uVar17 = (*(uint *)(gen_frame + 0x6c)), uVar2 = (ushort)(*(uint *)(gen_frame + 0x6c)), (*(uint *)(gen_frame + 0x50)) != 0x78 &&
                       ((*(uint *)(gen_frame + 0x50)) != 0x70))) {
                  if ((((*(uint *)(gen_frame + 0x6c)) & 0xff00) != 0) ||
                     (iVar7 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff), iVar7 == 0)) goto LAB_00c69eee;
                  if ((*(uint *)(gen_frame + 0x50)) == 0x6f) {
                    if (0x37 < uVar2) goto LAB_00c69eee;
                    iVar7 = uVar12 << 3;
                  }
                  else {
                    iVar7 = uVar12 * 10;
                  }
LAB_00c69eb0: ;
                  (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
                  uVar12 = iVar7 - 0x30 + (uVar17 & 0xffff);
                  if (((*(int *)(gen_frame + 0x44)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x68)) - 1, (*(int *)(gen_frame + 0x68)) = iVar7, iVar7 == 0))
                  goto LAB_00c69f02;
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
                  wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
                  (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
                }
                if ((((*(uint *)(gen_frame + 0x6c)) & 0xff00) == 0) && (iVar7 = F_00c486bb((*(uint *)(gen_frame + 0x6c)) & 0xff), iVar7 != 0)
                   ) {
                  iVar7 = uVar12 << 4;
                  uVar2 = F_00c68f3d(uVar17);
                  uVar17 = (uint)uVar2;
                  (*(uint *)(gen_frame + 0x6c)) = uVar17;
                  goto LAB_00c69eb0;
                }
LAB_00c69eee: ;
                (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
                F_00c68f7e(uVar17,(*(undefined * PTR32 *)(gen_frame + 0x60)));
              }
LAB_00c69f02: ;
              if ((*(char *)(gen_frame + 0x5d)) != '\0') {
                uVar12 = -uVar12;
              }
            }
            else {
              if ((*(char *)(gen_frame + 0x77)) == '\0') {
                while ((uVar12 = (*(uint *)(gen_frame + 0x6c)), uVar2 = (ushort)(*(uint *)(gen_frame + 0x6c)), (*(uint *)(gen_frame + 0x50)) != 0x78 &&
                       ((*(uint *)(gen_frame + 0x50)) != 0x70))) {
                  if ((((*(uint *)(gen_frame + 0x6c)) & 0xff00) != 0) ||
                     (iVar7 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff), iVar7 == 0)) goto LAB_00c69de5;
                  if ((*(uint *)(gen_frame + 0x50)) == 0x6f) {
                    if (0x37 < uVar2) goto LAB_00c69de5;
                    uVar17 = (*(uint *)(gen_frame + 0x3c)) << 3;
                    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) << 3 | (*(uint *)(gen_frame + 0x3c)) >> 0x1d;
                  }
                  else {
                    lVar1 = (longlong)CONCAT44((*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x3c))) * 10;
                    uVar17 = (uint)lVar1;
                    (*(uint *)(gen_frame + 0x40)) = (uint)((ulonglong)lVar1 >> 0x20);
                  }
LAB_00c69d99: ;
                  (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
                  uVar12 = (uVar12 & 0xffff) - 0x30;
                  (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar17,uVar12);
                  (*(uint *)(gen_frame + 0x3c)) = uVar17 + uVar12;
                  if (((*(int *)(gen_frame + 0x44)) != 0) && (iVar7 = (*(int *)(gen_frame + 0x68)) - 1, (*(int *)(gen_frame + 0x68)) = iVar7, iVar7 == 0))
                  goto LAB_00c69df9;
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
                  wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
                  (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
                }
                if ((((*(uint *)(gen_frame + 0x6c)) & 0xff00) == 0) && (iVar7 = F_00c486bb((*(uint *)(gen_frame + 0x6c)) & 0xff), iVar7 != 0)
                   ) {
                  uVar17 = (*(uint *)(gen_frame + 0x3c)) << 4;
                  (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) << 4 | (*(uint *)(gen_frame + 0x3c)) >> 0x1c;
                  uVar2 = F_00c68f3d(uVar12);
                  uVar12 = (uint)uVar2;
                  (*(uint *)(gen_frame + 0x6c)) = uVar12;
                  goto LAB_00c69d99;
                }
LAB_00c69de5: ;
                (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
                F_00c68f7e(uVar12,(*(undefined * PTR32 *)(gen_frame + 0x60)));
              }
LAB_00c69df9: ;
              uVar12 = (*(uint *)(gen_frame + 0x48));
              if ((*(char *)(gen_frame + 0x5d)) != '\0') {
                bVar19 = (*(uint *)(gen_frame + 0x3c)) != 0;
                (*(uint *)(gen_frame + 0x3c)) = -(*(uint *)(gen_frame + 0x3c));
                (*(uint *)(gen_frame + 0x40)) = -((*(uint *)(gen_frame + 0x40)) + bVar19);
              }
            }
            if ((*(uint *)(gen_frame + 0x50)) == 0x46) {
              (*(int *)(gen_frame + 0x54)) = 0;
            }
            if ((*(int *)(gen_frame + 0x54)) != 0) {
              if ((*(char *)(gen_frame + 0x65)) == '\0') {
                (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
LAB_00c69f3f: ;
                if ((*(uint *)(gen_frame + 0x38)) == 0) {
                  if ((*(char *)(gen_frame + 0x66)) == '\0') {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x30)) = (wchar_t)uVar12;
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x30)) = uVar12;
                  }
                }
                else {
                  *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x3c));
                  *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x30)) + 2) = (*(uint *)(gen_frame + 0x40));
                }
              }
              goto LAB_00c69f6b;
            }
            goto LAB_00c6a013;
          }
          if (uVar12 != 0x7b) goto LAB_00c6993b;
          if ('\0' < (*(char *)(gen_frame + 0x67))) {
            (*(char *)(gen_frame + 0x5f)) = '\x01';
          }
          pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x34)) + 1;
          if (*pwVar16 == L'^') {
            pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x34)) + 2;
            (*(byte *)(gen_frame + 0x4f)) = 0xff;
          }
          if ((*(undefined * PTR32 *)(gen_frame + 0x20)) == ((undefined *)GEN_TOP(0x0))) {
            pvVar11 = F_00c54c2e(0x2000);
            (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar11;
            if (pvVar11 == ((undefined *)GEN_TOP(0x0))) goto LAB_00c6a013;
            (*(int *)(gen_frame + 0x18)) = 1;
          }
          pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x20));
          F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x20)),0,0x2000);
          uVar12 = (*(uint *)(gen_frame + 0x10));
          if (*pwVar16 == L']') {
            *((undefined1 *)GEN_TOP(((int)pvVar11 + 0xb))) = 0x20;
            uVar12 = 0x5d;
            pwVar16 = pwVar16 + 1;
          }
          while( true ) {
            wVar3 = *pwVar16;
            if (wVar3 == L']') break;
            if ((wVar3 == L'-') && ((wchar_t)uVar12 != L'\0')) {
              wVar5 = pwVar16[1];
              if (wVar5 == L']') goto LAB_00c69a71;
              uVar17 = (uint)(ushort)wVar5;
              if ((ushort)wVar5 <= (ushort)(wchar_t)uVar12) {
                uVar17 = uVar12 & 0xffff;
                uVar12 = (uint)(ushort)wVar5;
              }
              (*(uint *)(gen_frame + 0x48)) = uVar17;
              if ((ushort)uVar12 < (ushort)uVar17) {
                uVar14 = uVar12 & 0xffff;
                (*(uint *)(gen_frame + 0x38)) = uVar17 - uVar12 & 0xffff;
                do {
                  pbVar22 = ((byte *)GEN_TOP(((uVar14 >> 3) + (int)pvVar11)));
                  *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar14 & 7);
                  uVar14 = uVar14 + 1;
                  uVar12 = (*(uint *)(gen_frame + 0x38)) - 1;
                  (*(uint *)(gen_frame + 0x38)) = uVar12;
                } while (uVar12 != 0);
              }
              pbVar22 = ((byte *)GEN_TOP(((uint)(ushort)((ushort)uVar17 >> 3) + (int)pvVar11)));
              *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar17 & 7);
              uVar12 = 0;
              pwVar16 = pwVar16 + 2;
            }
            else {
LAB_00c69a71: ;
              pbVar22 = ((byte *)GEN_TOP(((uint)((ushort)wVar3 >> 3) + (int)pvVar11)));
              *pbVar22 = *pbVar22 | '\x01' << ((byte)wVar3 & 7);
              uVar12 = (uint)(ushort)wVar3;
              pwVar16 = pwVar16 + 1;
            }
          }
          if (*pwVar16 != L'\0') {
            (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar16;
            uVar12 = (*(uint *)(gen_frame + 0x50));
            goto LAB_00c69834;
          }
          goto LAB_00c6a013;
        }
        if (uVar12 == 0x6f) {
LAB_00c69c71: ;
          if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == L'-') {
            (*(char *)(gen_frame + 0x5d)) = '\x01';
          }
          else if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) != L'+') goto LAB_00c69cc0;
          iVar7 = (*(int *)(gen_frame + 0x68)) - 1;
          (*(int *)(gen_frame + 0x68)) = iVar7;
          if ((iVar7 == 0) && ((*(int *)(gen_frame + 0x44)) != 0)) {
            (*(char *)(gen_frame + 0x77)) = '\x01';
          }
          else {
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
            wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
            uVar12 = (uint)wVar4;
LAB_00c69cba: ;
            (*(uint *)(gen_frame + 0x6c)) = uVar12;
          }
          goto LAB_00c69cc0;
        }
        if (uVar12 == 99) {
          if ((*(int *)(gen_frame + 0x44)) == 0) {
            (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 1;
            (*(int *)(gen_frame + 0x44)) = 1;
          }
LAB_00c69824: ;
          if ('\0' < (*(char *)(gen_frame + 0x67))) {
            (*(char *)(gen_frame + 0x5f)) = '\x01';
          }
LAB_00c69834: ;
          pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x30));
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
          F_00c68f7e((*(uint *)(gen_frame + 0x6c)),(*(undefined * PTR32 *)(gen_frame + 0x60)));
          pwVar15 = pwVar16;
          do {
            iVar7 = (*(int *)(gen_frame + 0x68));
            if (((*(int *)(gen_frame + 0x44)) != 0) && ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar7 == 0)) goto LAB_00c69c1f;
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
            wVar3 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
            uVar17 = (uint)(ushort)wVar3;
            (*(uint *)(gen_frame + 0x6c)) = uVar17;
            if (wVar3 == L'\xffff') goto LAB_00c69c0b;
            if (uVar12 != 99) {
              if (uVar12 == 0x73) {
                if ((8 < uVar17) && (uVar17 < 0xe)) goto LAB_00c69c0b;
                if (uVar17 != 0x20) goto LAB_00c698ec;
              }
              if ((uVar12 != 0x7b) ||
                 (uVar12 = (*(uint *)(gen_frame + 0x50)),
                 ((int)(char)(*((byte *)GEN_TOP(((uint)((ushort)wVar3 >> 3) + (int)(*(undefined * PTR32 *)(gen_frame + 0x20))))) ^ (*(byte *)(gen_frame + 0x4f))) &
                 1 << ((byte)wVar3 & 7)) == 0)) goto LAB_00c69c0b;
            }
LAB_00c698ec: ;
            if ((*(char *)(gen_frame + 0x65)) == '\0') {
              if ((*(char *)(gen_frame + 0x5f)) == '\0') {
                (*(uint *)(gen_frame + 0x48)) = 0;
                eVar9 = F_00c7af62((int *)&(*(uint *)(gen_frame + 0x48)),(char *)pwVar16,5,wVar3);
                if (eVar9 == 0) {
                  pwVar16 = ((wchar_t *)GEN_TOP(((int)pwVar16 + (*(uint *)(gen_frame + 0x48)))));
                  goto LAB_00c69bf8;
                }
                if ((eVar9 == 0x16) || (eVar9 == 0x22)) goto LAB_00c69ff2;
              }
              else {
                *pwVar16 = wVar3;
                pwVar16 = pwVar16 + 1;
LAB_00c69bf8: ;
                (*(wchar_t * PTR32 *)(gen_frame + 0x30)) = pwVar16;
              }
            }
            else {
              pwVar15 = pwVar15 + 1;
            }
          } while( true );
        }
        if (uVar12 == 100) goto LAB_00c69c71;
        if (uVar12 < 0x65) {
LAB_00c6993b: ;
          if (*(*(wchar_t * PTR32 *)(gen_frame + 0x34)) == (wchar_t)(*(uint *)(gen_frame + 0x6c))) {
            (*(char *)(gen_frame + 0x5e)) = (*(char *)(gen_frame + 0x5e)) - 1;
            if ((*(char *)(gen_frame + 0x65)) == '\0') {
              (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0x14));
            }
            goto LAB_00c69f6b;
          }
          uVar21 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x60)),0);
          uVar23 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x60))) >> 0x10);
          uVar20 = (undefined2)((*(uint *)(gen_frame + 0x6c)) >> 0x10);
          wVar3 = (wchar_t)(*(uint *)(gen_frame + 0x6c));
          goto LAB_00c6a00c;
        }
        if (0x67 < uVar12) {
          if (uVar12 == 0x69) {
            (*(uint *)(gen_frame + 0x50)) = 100;
            goto LAB_00c6937c;
          }
          if (uVar12 != 0x6e) goto LAB_00c6993b;
          uVar12 = (*(uint *)(gen_frame + 0x70));
          if ((*(char *)(gen_frame + 0x65)) != '\0') goto LAB_00c69f6b;
          goto LAB_00c69f3f;
        }
        iVar7 = 0;
        if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == L'-') {
          *(*(wchar_t * PTR32 *)(gen_frame + 0x58)) = L'-';
          iVar7 = 1;
LAB_00c693c0: ;
          (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1;
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
          wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
          (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
        }
        else if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == L'+') goto LAB_00c693c0;
        if ((*(int *)(gen_frame + 0x44)) == 0) {
          (*(int *)(gen_frame + 0x68)) = -1;
        }
        if (((*(uint *)(gen_frame + 0x6c)) & 0xff00) == 0) {
          do {
            iVar8 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff);
            iVar13 = (*(int *)(gen_frame + 0x68));
            if ((iVar8 == 0) || ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar13 == 0)) break;
            (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
            (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar7] = (short)(char)(*(uint *)(gen_frame + 0x6c));
            iVar7 = iVar7 + 1;
            uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x24)),&(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar7,((wchar_t *)(gen_frame + 0x78)),&(*(int *)(gen_frame + 0x28)));
            if (uVar12 == 0) goto LAB_00c6a013;
            (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
            wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
            (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
          } while ((wVar4 & 0xff00) == 0);
        }
        iVar13 = (*(int *)(gen_frame + 0x68));
        wVar3 = **((wchar_t * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc))) + 0x30)));
        if (((uint)(ushort)wVar3 == (int)(char)(*(uint *)(gen_frame + 0x6c))) &&
           ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar13 != 0)) {
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
          wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
          (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
          (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar7] = wVar3;
          iVar7 = iVar7 + 1;
          uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x24)),&(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar7,((wchar_t *)(gen_frame + 0x78)),&(*(int *)(gen_frame + 0x28)));
          if (uVar12 == 0) goto LAB_00c6a013;
          if (((*(uint *)(gen_frame + 0x6c)) & 0xff00) == 0) {
            do {
              iVar8 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff);
              iVar13 = (*(int *)(gen_frame + 0x68));
              if ((iVar8 == 0) || ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar13 == 0)) break;
              (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
              (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar7] = (wchar_t)(*(uint *)(gen_frame + 0x6c));
              iVar7 = iVar7 + 1;
              uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x24)),&(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar7,((wchar_t *)(gen_frame + 0x78)),&(*(int *)(gen_frame + 0x28)));
              if (uVar12 == 0) goto LAB_00c6a013;
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
              (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
            } while ((wVar4 & 0xff00) == 0);
          }
        }
        iVar13 = (*(int *)(gen_frame + 0x68));
        if (((*(int *)(gen_frame + 0x54)) != 0) &&
           ((((wchar_t)(*(uint *)(gen_frame + 0x6c)) == 0x65 || ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == 0x45)) &&
            ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar13 != 0)))) {
          (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar7] = L'e';
          iVar13 = iVar7 + 1;
          uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x24)),&(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar13,((wchar_t *)(gen_frame + 0x78)),&(*(int *)(gen_frame + 0x28)))
          ;
          if (uVar12 == 0) goto LAB_00c6a013;
          (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
          wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
          (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
          if (wVar4 == 0x2d) {
            (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar13] = L'-';
            iVar13 = iVar7 + 2;
            uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x24)),&(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar13,((wchar_t *)(gen_frame + 0x78)),&(*(int *)(gen_frame + 0x28)));
            if (uVar12 == 0) goto LAB_00c6a013;
LAB_00c69682: ;
            iVar8 = (*(int *)(gen_frame + 0x68));
            (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1;
            iVar7 = iVar13;
            if (iVar8 == 0) {
              (*(int *)(gen_frame + 0x68)) = 0;
            }
            else {
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
              (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
            }
          }
          else {
            iVar7 = iVar13;
            if (wVar4 == 0x2b) goto LAB_00c69682;
          }
          if (((*(uint *)(gen_frame + 0x6c)) & 0xff00) == 0) {
            do {
              iVar8 = F_00c48637((*(uint *)(gen_frame + 0x6c)) & 0xff);
              iVar13 = (*(int *)(gen_frame + 0x68));
              if ((iVar8 == 0) || ((*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) - 1, iVar13 == 0)) break;
              (*(int *)(gen_frame + 0x54)) = (*(int *)(gen_frame + 0x54)) + 1;
              (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar7] = (wchar_t)(*(uint *)(gen_frame + 0x6c));
              iVar7 = iVar7 + 1;
              uVar12 = F_00c68ee3(&(*(int *)(gen_frame + 0x24)),&(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar7,((wchar_t *)(gen_frame + 0x78)),&(*(int *)(gen_frame + 0x28)));
              if (uVar12 == 0) goto LAB_00c6a013;
              (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
              wVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
              (*(uint *)(gen_frame + 0x6c)) = (uint)wVar4;
            } while ((wVar4 & 0xff00) == 0);
          }
        }
        (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
        F_00c68f7e((*(uint *)(gen_frame + 0x6c)),(*(undefined * PTR32 *)(gen_frame + 0x60)));
        if ((*(int *)(gen_frame + 0x54)) == 0) goto LAB_00c6a013;
        if ((*(char *)(gen_frame + 0x65)) != '\0') goto LAB_00c69f6b;
        (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
        iVar13 = (*(int *)(gen_frame + 0x24)) * 2;
        _Size = iVar13 + 2;
        (*(wchar_t * PTR32 *)(gen_frame + 0x58))[iVar7] = L'\0';
        _Dst = F_00c54c2e(_Size);
        if (_Dst == ((char *)GEN_TOP(0x0))) goto LAB_00c6a013;
        eVar9 = F_00c4b3d6(((gen_size32 *)GEN_TOP(0x0)),_Dst,_Size,(*(wchar_t * PTR32 *)(gen_frame + 0x58)),iVar13 + 1);
        if ((eVar9 != 0) && ((eVar9 == 0x16 || (eVar9 == 0x22)))) {
LAB_00c69ff2: ;
                    
          F_00c4c299(0,0,0,0,0);
        }
        pbVar22 = ((byte *)(gen_frame + 0x0));
        uVar20 = SUB42(_Dst,0);
        uVar21 = (undefined2)((uint)((int)(uintptr_t)_Dst) >> 0x10);
        iVar7 = (*(char *)(gen_frame + 0x66)) - 1;
        pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x30));
        pcVar10 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
        (*pcVar10)(iVar7,pwVar16,CONCAT22(uVar21,uVar20),pbVar22);
        F_00c4c68f(_Dst);
        goto LAB_00c69f6b;
      }
LAB_00c69f90: ;
      (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 1;
      wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x60)));
      wVar3 = *pwVar16;
      pwVar16 = pwVar16 + 1;
      (*(uint *)(gen_frame + 0x6c)) = (uint)(ushort)wVar5;
      (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar16;
      if (wVar3 == wVar5) goto LAB_00c69fbc;
LAB_00c6a000: ;
      uVar21 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x60)),0);
      uVar23 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x60))) >> 0x10);
      wVar3 = (wchar_t)(*(uint *)(gen_frame + 0x6c));
      uVar20 = (undefined2)((*(uint *)(gen_frame + 0x6c)) >> 0x10);
LAB_00c6a00c: ;
      F_00c68f7e(CONCAT22(uVar20,wVar3),CONCAT22(uVar23,uVar21));
LAB_00c6a013: ;
      if ((*(int *)(gen_frame + 0x18)) == 1) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x20)));
      }
      if ((*(int *)(gen_frame + 0x28)) == 1) {
        F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x58)));
      }
      if ((wchar_t)(*(uint *)(gen_frame + 0x6c)) == -1) {
        iVar7 = (*(int *)(gen_frame + 0x2c));
        if (((*(int *)(gen_frame + 0x2c)) == 0) && ((*(char *)(gen_frame + 0x5e)) == '\0')) {
          iVar7 = -1;
        }
        if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
          return iVar7;
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        return iVar7;
      }
    }
    iVar7 = (*(int *)(gen_frame + 0x2c));
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar7;
LAB_00c69c0b: ;
  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) - 1;
  F_00c68f7e((uint)(ushort)wVar3,(*(undefined * PTR32 *)(gen_frame + 0x60)));
LAB_00c69c1f: ;
  if (pwVar15 == pwVar16) goto LAB_00c6a013;
  if (((*(char *)(gen_frame + 0x65)) == '\0') && ((*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1, uVar12 != 99)) {
    if ((*(char *)(gen_frame + 0x5f)) == '\0') {
      *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x30)) = 0;
    }
    else {
      *(*(wchar_t * PTR32 *)(gen_frame + 0x30)) = L'\0';
    }
  }
LAB_00c69f6b: ;
  (*(char *)(gen_frame + 0x5e)) = (*(char *)(gen_frame + 0x5e)) + '\x01';
  pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x34)) + 1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar16;
LAB_00c69fbc: ;
  (*(wchar_t * PTR32 *)(gen_frame + 0x34)) = pwVar16;
  if (((wchar_t)(*(uint *)(gen_frame + 0x6c)) == -1) && ((*pwVar16 != L'%' || (pwVar16[1] != L'n')))) goto LAB_00c6a013;
LAB_00c69fdf: ;
  wVar3 = *pwVar16;
  if (wVar3 == L'\0') goto LAB_00c6a013;
  goto LAB_00c6907e;
}

/* ref: ___check_float_string_00c6a09d */
GEN_LIB GEN_NOFRAME uint F_00c6a09d(GEN_P(gen_size32 * in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc6a09du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(gen_size32 * in_esi = (gen_size32 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  gen_size32 _Count;
  undefined * pvVar1;
  
  _Count = *in_esi;
  if (param_3 == _Count) {
    if (((undefined *)GEN_TOP(*in_edi)) == param_4) {
      pvVar1 = F_00c54c73(_Count,4);
      *in_edi = pvVar1;
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *param_5 = 1;
      F_00c46aa0(*in_edi,param_4,*in_esi * 2);
    }
    else {
      pvVar1 = F_00c54d0d(((undefined *)GEN_TOP(*in_edi)),_Count,4);
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      *in_edi = pvVar1;
    }
    *in_esi = *in_esi << 1;
  }
  return 1;
}

/* ref: __hextodec_00c6a0f7 */
GEN_LIB GEN_NOFRAME ushort F_00c6a0f7(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6a0f7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  ushort uVar1;
  int iVar2;
  
  if (((param_1 & 0xff00) != 0) ||
     (iVar2 = F_00c48637(param_1 & 0xff), uVar1 = (ushort)param_1, iVar2 == 0)) {
    uVar1 = ((ushort)param_1 & 0xffdf) - 7;
  }
  return uVar1;
}

/* ref: FUN_00c6a12d */
GEN_LIB GEN_NOFRAME uint F_00c6a12d(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6a12du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  wVar1 = F_00c7d6bf(param_1);
  return CONCAT22(extraout_var,wVar1);
}

/* ref: __un_inc_00c6a138 */
GEN_LIB GEN_NOFRAME uint F_00c6a138(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6a138u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  ushort wVar1;
  undefined2 extraout_var = 0;
  
  if ((ushort)param_1 != 0xffff) {
    wVar1 = F_00c7d8e0((ushort)param_1,param_2);
    return CONCAT22(extraout_var,wVar1);
  }
  return 0xffff;
}

/* ref: __whiteout_00c6a150 */
GEN_LIB GEN_NOFRAME ushort F_00c6a150(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6a150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
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
GEN_LIB GEN_NOFRAME int F_00c6a182(GEN_P(undefined * _File, unsigned int gen_a0), GEN_P(wchar_t * param_2, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2), GEN_P(undefined * _ArgList, unsigned int gen_a3))
{
  GEN_ENTER(0xc6a182u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x348, 8);
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
  
  (*(uint *)(gen_frame + 0x340)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x344);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = _ArgList;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = _File;
  (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = param_2;
  (*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = ((wchar_t *)(gen_frame + 0x84));
  (*(int *)(gen_frame + 0x28)) = 0x15e;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  if ((param_2 == ((wchar_t *)GEN_TOP(0x0))) || (_File == ((undefined *)GEN_TOP(0x0)))) {
    piVar7 = F_00c51f85();
    *piVar7 = 0x16;
    F_00c4c305();
    iVar8 = -1;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
    wVar5 = *param_2;
    (*(char *)(gen_frame + 0x62)) = '\0';
    (*(uint *)(gen_frame + 0x7c)) = 0;
    (*(int *)(gen_frame + 0x30)) = 0;
    if (wVar5 != L'\0') {
      do {
        iVar8 = F_00c7db09(wVar5,8);
        uVar20 = SUB42((*(undefined * PTR32 *)(gen_frame + 0x64)),0);
        uVar21 = (undefined2)((uint)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x64))) >> 0x10);
        if (iVar8 == 0) {
          pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
          if (*(*(wchar_t * PTR32 *)(gen_frame + 0x40)) == L'%') {
            if ((*(wchar_t * PTR32 *)(gen_frame + 0x40))[1] == L'%') {
              if ((*(wchar_t * PTR32 *)(gen_frame + 0x40))[1] == L'%') {
                pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x40)) + 1;
              }
              goto LAB_00c6b1e7;
            }
            (*(uint *)(gen_frame + 0x50)) = 0;
            (*(int *)(gen_frame + 0x58)) = 0;
            (*(int *)(gen_frame + 0x38)) = 0;
            (*(int *)(gen_frame + 0x6c)) = 0;
            (*(gen_size32 *)(gen_frame + 0x34)) = 0;
            (*(byte *)(gen_frame + 0x47)) = 0;
            (*(char *)(gen_frame + 0x61)) = '\0';
            (*(char *)(gen_frame + 0x73)) = '\0';
            (*(char *)(gen_frame + 0x83)) = '\0';
            (*(char *)(gen_frame + 0x63)) = '\0';
            (*(char *)(gen_frame + 0x7b)) = '\0';
            (*(char *)(gen_frame + 0x6b)) = '\x01';
            (*(uint *)(gen_frame + 0x54)) = 0;
            pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
            do {
              pwVar18 = pwVar17 + 1;
              uVar16 = (uint)(ushort)*pwVar18;
              if (((*pwVar18 & 0xff00U) == 0) && (iVar8 = F_00c48637(uVar16 & 0xff), iVar8 != 0)) {
                (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 1;
                (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) * 10 - 0x30 + uVar16;
              }
              else if (uVar16 < 0x4f) {
                if (uVar16 != 0x4e) {
                  if (uVar16 == 0x2a) {
                    (*(char *)(gen_frame + 0x73)) = (*(char *)(gen_frame + 0x73)) + '\x01';
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
                      (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + '\x01';
                    }
                    else {
LAB_00c6a3e6: ;
                      (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + '\x01';
                    }
                  }
                }
              }
              else if (uVar16 == 0x68) {
                (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) - 1;
                (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) - 1;
              }
              else {
                if (uVar16 == 0x6c) {
                  if (pwVar17[2] == L'l') {
                    pwVar18 = pwVar17 + 2;
LAB_00c6a38f: ;
                    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x54)) + 1;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 0)) = 0;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) = 0;
                    (*(longlong *)(gen_frame + 0x48)) = 0;
                    goto LAB_00c6a414;
                  }
                  (*(char *)(gen_frame + 0x6b)) = (*(char *)(gen_frame + 0x6b)) + '\x01';
                }
                else if (uVar16 != 0x77) goto LAB_00c6a3e6;
                (*(char *)(gen_frame + 0x7b)) = (*(char *)(gen_frame + 0x7b)) + '\x01';
              }
LAB_00c6a414: ;
              pwVar17 = pwVar18;
            } while ((*(char *)(gen_frame + 0x83)) == '\0');
            (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar18;
            if ((*(char *)(gen_frame + 0x73)) == '\0') {
              pwVar17 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x1c));
              (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
              (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0x1c)) + 4;
            }
            else {
              pwVar17 = ((wchar_t *)GEN_TOP(0x0));
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = pwVar17;
            (*(char *)(gen_frame + 0x83)) = '\0';
            if (((*(char *)(gen_frame + 0x7b)) == '\0') &&
               ((*pwVar18 == L'S' || ((*(char *)(gen_frame + 0x7b)) = '\x01', *pwVar18 == L'C')))) {
              (*(char *)(gen_frame + 0x7b)) = -1;
            }
            uVar16 = (ushort)*pwVar18 | 0x20;
            (*(uint *)(gen_frame + 0x2c)) = uVar16;
            if (uVar16 != 0x6e) {
              if ((uVar16 == 99) || (uVar16 == 0x7b)) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                uVar4 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
              else {
                uVar4 = F_00c6a150(&(*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
              }
              (*(uint *)(gen_frame + 0x74)) = (uint)uVar4;
              if (uVar4 == 0xffff) break;
            }
            pcVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
            if (((*(int *)(gen_frame + 0x38)) != 0) && ((*(int *)(gen_frame + 0x6c)) == 0)) goto LAB_00c6b2b2;
            if (((*(char *)(gen_frame + 0x73)) == '\0') && (((uVar16 == 99 || (uVar16 == 0x73)) || (uVar16 == 0x7b)))) {
              pwVar17 = *(wchar_t * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x18));
              (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
              (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pcVar3 + 8;
              rVar2 = *(gen_size32 *)(pcVar3 + 4);
              (*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = pwVar17;
              (*(gen_size32 *)(gen_frame + 0x34)) = rVar2;
              if (rVar2 == 0) {
                if ((*(char *)(gen_frame + 0x7b)) < '\x01') {
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
                if ((wchar_t)(*(uint *)(gen_frame + 0x74)) == L'-') {
                  (*(char *)(gen_frame + 0x61)) = '\x01';
                }
                else if ((wchar_t)(*(uint *)(gen_frame + 0x74)) != L'+') goto LAB_00c6aefd;
                iVar8 = (*(int *)(gen_frame + 0x6c)) - 1;
                (*(int *)(gen_frame + 0x6c)) = iVar8;
                if ((iVar8 == 0) && ((*(int *)(gen_frame + 0x38)) != 0)) {
                  (*(char *)(gen_frame + 0x83)) = '\x01';
                }
                else {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  uVar13 = (uint)wVar6;
LAB_00c6aef7: ;
                  (*(uint *)(gen_frame + 0x74)) = uVar13;
                }
                goto LAB_00c6aefd;
              }
              if (uVar16 == 99) {
                if ((*(int *)(gen_frame + 0x38)) == 0) {
                  (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
                  (*(int *)(gen_frame + 0x38)) = 1;
                }
LAB_00c6aa44: ;
                if ('\0' < (*(char *)(gen_frame + 0x7b))) {
                  (*(char *)(gen_frame + 0x63)) = '\x01';
                }
LAB_00c6aa54: ;
                pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x3c));
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
                F_00c6a138((*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                pwVar18 = pwVar17;
                if (uVar16 == 99) goto LAB_00c6aa7a;
                do {
                  (*(gen_size32 *)(gen_frame + 0x34)) = (*(gen_size32 *)(gen_frame + 0x34)) - 1;
LAB_00c6aa7a: ;
                  iVar8 = (*(int *)(gen_frame + 0x6c));
                  if (((*(int *)(gen_frame + 0x38)) != 0) && ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1, iVar8 == 0)) {
LAB_00c6ae5c: ;
                    if (pwVar18 == pwVar17) goto LAB_00c6b2c5;
                    if (((*(char *)(gen_frame + 0x73)) == '\0') && ((*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1, uVar16 != 99)) {
                      if ((*(char *)(gen_frame + 0x63)) == '\0') {
                        *(undefined1 *)(*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = 0;
                      }
                      else {
                        *(*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = L'\0';
                      }
                    }
                    goto LAB_00c6b1c2;
                  }
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  uVar13 = (uint)(ushort)wVar5;
                  (*(uint *)(gen_frame + 0x74)) = uVar13;
                  if (wVar5 == L'\xffff') {
LAB_00c6ae48: ;
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
                    F_00c6a138((uint)(ushort)wVar5,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                    goto LAB_00c6ae5c;
                  }
                  if (uVar16 != 99) {
                    if (uVar16 == 0x73) {
                      if ((8 < uVar13) && (uVar13 < 0xe)) goto LAB_00c6ae48;
                      if (uVar13 != 0x20) goto LAB_00c6ab17;
                    }
                    if ((uVar16 != 0x7b) ||
                       (uVar16 = (*(uint *)(gen_frame + 0x2c)),
                       ((int)(char)(*((byte *)GEN_TOP(((uint)((ushort)wVar5 >> 3) + (int)(*(undefined * PTR32 *)(gen_frame + 0x20))))) ^
                                   (*(byte *)(gen_frame + 0x47))) & 1 << ((byte)wVar5 & 7)) == 0)) goto LAB_00c6ae48;
                  }
LAB_00c6ab17: ;
                  if ((*(char *)(gen_frame + 0x73)) != '\0') {
                    pwVar18 = pwVar18 + 1;
                    goto LAB_00c6aa7a;
                  }
                  if ((*(gen_size32 *)(gen_frame + 0x34)) == 0) {
LAB_00c6b292: ;
                    piVar7 = F_00c51f85();
                    *piVar7 = 0xc;
                    if ((*(char *)(gen_frame + 0x63)) == '\0') {
                      *(undefined1 *)pwVar18 = 0;
                    }
                    else {
                      *pwVar18 = L'\0';
                    }
                    goto LAB_00c6b2c5;
                  }
                  if ((*(char *)(gen_frame + 0x63)) == '\0') {
                    (*(uint *)(gen_frame + 0x54)) = 0;
                    eVar10 = F_00c7af62((int *)&(*(uint *)(gen_frame + 0x54)),(char *)pwVar17,(*(gen_size32 *)(gen_frame + 0x34)),wVar5);
                    if (eVar10 == 0x22) goto LAB_00c6b292;
                    if (0 < (int)(*(uint *)(gen_frame + 0x54))) {
                      pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + (*(uint *)(gen_frame + 0x54)))));
                      (*(gen_size32 *)(gen_frame + 0x34)) = (*(gen_size32 *)(gen_frame + 0x34)) - (*(uint *)(gen_frame + 0x54));
                      (*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = pwVar17;
                    }
                    goto LAB_00c6aa7a;
                  }
                  *pwVar17 = wVar5;
                  pwVar17 = pwVar17 + 1;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = pwVar17;
                } while( true );
              }
              if (uVar16 == 100) goto LAB_00c6aeae;
              if (uVar16 < 0x65) {
LAB_00c6ab79: ;
                if (*(*(wchar_t * PTR32 *)(gen_frame + 0x40)) != (wchar_t)(*(uint *)(gen_frame + 0x74))) {
                  F_00c6a138((*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(int *)(gen_frame + 0x10)) = 1;
                  break;
                }
                (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) - 1;
                if ((*(char *)(gen_frame + 0x73)) == '\0') {
                  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)(gen_frame + 0x18));
                }
              }
              else {
                if (0x67 < uVar16) {
                  if (uVar16 == 0x69) {
                    (*(uint *)(gen_frame + 0x2c)) = 100;
                    uVar16 = 100;
                    goto LAB_00c6a59c;
                  }
                  if (uVar16 != 0x6e) goto LAB_00c6ab79;
                  uVar16 = (*(uint *)(gen_frame + 0x7c));
                  if ((*(char *)(gen_frame + 0x73)) != '\0') goto LAB_00c6b1c2;
                  goto LAB_00c6b196;
                }
                iVar8 = 0;
                if ((wchar_t)(*(uint *)(gen_frame + 0x74)) == L'-') {
                  *(*(wchar_t * PTR32 *)(gen_frame + 0x5c)) = L'-';
                  iVar8 = 1;
LAB_00c6a5e0: ;
                  (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                }
                else if ((wchar_t)(*(uint *)(gen_frame + 0x74)) == L'+') goto LAB_00c6a5e0;
                if ((*(int *)(gen_frame + 0x38)) == 0) {
                  (*(int *)(gen_frame + 0x6c)) = -1;
                }
                if (((*(uint *)(gen_frame + 0x74)) & 0xff00) == 0) {
                  do {
                    iVar9 = F_00c48637((*(uint *)(gen_frame + 0x74)) & 0xff);
                    iVar15 = (*(int *)(gen_frame + 0x6c));
                    if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1, iVar15 == 0)) break;
                    (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                    (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = (short)(char)(*(uint *)(gen_frame + 0x74));
                    iVar8 = iVar8 + 1;
                    uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x24)));
                    if (uVar16 == 0) goto LAB_00c6b2c5;
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                  } while ((wVar6 & 0xff00) == 0);
                }
                iVar15 = (*(int *)(gen_frame + 0x6c));
                wVar5 = **((wchar_t * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xbc))) + 0x30)));
                if (((uint)(ushort)wVar5 == (int)(char)(*(uint *)(gen_frame + 0x74))) &&
                   ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1, iVar15 != 0)) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = wVar5;
                  iVar8 = iVar8 + 1;
                  uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x24)));
                  if (uVar16 == 0) break;
                  if (((*(uint *)(gen_frame + 0x74)) & 0xff00) == 0) {
                    do {
                      iVar9 = F_00c48637((*(uint *)(gen_frame + 0x74)) & 0xff);
                      iVar15 = (*(int *)(gen_frame + 0x6c));
                      if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1, iVar15 == 0)) break;
                      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x74));
                      iVar8 = iVar8 + 1;
                      uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x24)));
                      if (uVar16 == 0) goto LAB_00c6b2c5;
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                    } while ((wVar6 & 0xff00) == 0);
                  }
                }
                iVar15 = (*(int *)(gen_frame + 0x6c));
                if (((*(int *)(gen_frame + 0x58)) != 0) &&
                   ((((wchar_t)(*(uint *)(gen_frame + 0x74)) == 0x65 || ((wchar_t)(*(uint *)(gen_frame + 0x74)) == 0x45)) &&
                    ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1, iVar15 != 0)))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = L'e';
                  iVar15 = iVar8 + 1;
                  uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar15,((wchar_t *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x24)));
                  if (uVar16 == 0) break;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                  if (wVar6 == 0x2d) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar15] = L'-';
                    iVar15 = iVar8 + 2;
                    uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar15,((wchar_t *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x24)));
                    if (uVar16 == 0) break;
LAB_00c6a8a2: ;
                    iVar9 = (*(int *)(gen_frame + 0x6c));
                    (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1;
                    iVar8 = iVar15;
                    if (iVar9 == 0) {
                      (*(int *)(gen_frame + 0x6c)) = 0;
                    }
                    else {
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                    }
                  }
                  else {
                    iVar8 = iVar15;
                    if (wVar6 == 0x2b) goto LAB_00c6a8a2;
                  }
                  if (((*(uint *)(gen_frame + 0x74)) & 0xff00) == 0) {
                    do {
                      iVar9 = F_00c48637((*(uint *)(gen_frame + 0x74)) & 0xff);
                      iVar15 = (*(int *)(gen_frame + 0x6c));
                      if ((iVar9 == 0) || ((*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) - 1, iVar15 == 0)) break;
                      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                      (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = (wchar_t)(*(uint *)(gen_frame + 0x74));
                      iVar8 = iVar8 + 1;
                      uVar16 = F_00c6a09d(&(*(int *)(gen_frame + 0x28)),&(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar8,((wchar_t *)(gen_frame + 0x84)),&(*(int *)(gen_frame + 0x24)));
                      if (uVar16 == 0) goto LAB_00c6b2c5;
                      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                      wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                      (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                    } while ((wVar6 & 0xff00) == 0);
                  }
                }
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
                F_00c6a138((*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
                if ((*(int *)(gen_frame + 0x58)) == 0) break;
                if ((*(char *)(gen_frame + 0x73)) != '\0') goto LAB_00c6b1c2;
                (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
                iVar15 = (*(int *)(gen_frame + 0x28)) * 2;
                _Size = iVar15 + 2;
                (*(wchar_t * PTR32 *)(gen_frame + 0x5c))[iVar8] = L'\0';
                _Dst = F_00c54c2e(_Size);
                if (_Dst == ((char *)GEN_TOP(0x0))) break;
                eVar10 = F_00c4b3d6(((gen_size32 *)GEN_TOP(0x0)),_Dst,_Size,(*(wchar_t * PTR32 *)(gen_frame + 0x5c)),iVar15 + 1);
                if ((eVar10 != 0) && ((eVar10 == 0x16 || (eVar10 == 0x22)))) {
                    
                  F_00c4c299(0,0,0,0,0);
                }
                pbVar22 = ((byte *)(gen_frame + 0x0));
                uVar20 = SUB42(_Dst,0);
                uVar21 = (undefined2)((uint)((int)(uintptr_t)_Dst) >> 0x10);
                iVar8 = (*(char *)(gen_frame + 0x6b)) - 1;
                pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x3c));
                pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b13c));
                (*pcVar11)(iVar8,pwVar17,CONCAT22(uVar21,uVar20),pbVar22);
                F_00c4c68f(_Dst);
              }
            }
            else {
              if (uVar16 == 0x70) {
                (*(char *)(gen_frame + 0x6b)) = '\x01';
                goto LAB_00c6aeae;
              }
              if (uVar16 == 0x73) goto LAB_00c6aa44;
              if (uVar16 == 0x75) goto LAB_00c6aeae;
              if (uVar16 != 0x78) {
                if (uVar16 != 0x7b) goto LAB_00c6ab79;
                if ('\0' < (*(char *)(gen_frame + 0x7b))) {
                  (*(char *)(gen_frame + 0x63)) = '\x01';
                }
                pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x40)) + 1;
                if ((*(wchar_t * PTR32 *)(gen_frame + 0x40))[1] == L'^') {
                  pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x40)) + 2;
                  (*(byte *)(gen_frame + 0x47)) = 0xff;
                }
                if ((*(undefined * PTR32 *)(gen_frame + 0x20)) == ((undefined *)GEN_TOP(0x0))) {
                  pvVar12 = F_00c54c2e(0x2000);
                  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar12;
                  if (pvVar12 == ((undefined *)GEN_TOP(0x0))) break;
                  (*(int *)(gen_frame + 0x14)) = 1;
                }
                pvVar12 = (*(undefined * PTR32 *)(gen_frame + 0x20));
                F_00c48350((*(undefined * PTR32 *)(gen_frame + 0x20)),0,0x2000);
                if (*pwVar17 == L']') {
                  *((undefined1 *)GEN_TOP(((int)pvVar12 + 0xb))) = 0x20;
                  uVar16 = 0x5d;
                  pwVar17 = pwVar17 + 1;
                }
                else {
                  uVar16 = 0;
                }
                while( true ) {
                  wVar5 = *pwVar17;
                  if (wVar5 == L']') break;
                  if ((wVar5 == L'-') && ((wchar_t)uVar16 != L'\0')) {
                    wVar1 = pwVar17[1];
                    uVar13 = (uint)(ushort)wVar1;
                    if (wVar1 == L']') goto LAB_00c6acb0;
                    uVar14 = uVar16;
                    if ((ushort)(wchar_t)uVar16 < (ushort)wVar1) {
                      uVar14 = uVar13;
                      uVar13 = uVar16;
                    }
                    (*(uint *)(gen_frame + 0x54)) = uVar14;
                    if ((ushort)uVar13 < (ushort)uVar14) {
                      (*(uint *)(gen_frame + 0x50)) = uVar14 - uVar13 & 0xffff;
                      do {
                        pbVar22 = ((byte *)GEN_TOP(((uVar13 >> 3) + (int)pvVar12)));
                        *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar13 & 7);
                        uVar13 = uVar13 + 1;
                        uVar16 = (*(uint *)(gen_frame + 0x50)) - 1;
                        (*(uint *)(gen_frame + 0x50)) = uVar16;
                      } while (uVar16 != 0);
                    }
                    pbVar22 = ((byte *)GEN_TOP(((uint)(ushort)((ushort)uVar14 >> 3) + (int)pvVar12)));
                    *pbVar22 = *pbVar22 | '\x01' << ((byte)uVar14 & 7);
                    uVar16 = 0;
                    pwVar17 = pwVar17 + 2;
                  }
                  else {
LAB_00c6acb0: ;
                    pbVar22 = ((byte *)GEN_TOP(((uint)((ushort)wVar5 >> 3) + (int)pvVar12)));
                    *pbVar22 = *pbVar22 | '\x01' << ((byte)wVar5 & 7);
                    uVar16 = (uint)(ushort)wVar5;
                    pwVar17 = pwVar17 + 1;
                  }
                }
                if (*pwVar17 != L'\0') {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar17;
                  uVar16 = (*(uint *)(gen_frame + 0x2c));
                  goto LAB_00c6aa54;
                }
                break;
              }
LAB_00c6a59c: ;
              if ((wchar_t)(*(uint *)(gen_frame + 0x74)) == L'-') {
                (*(char *)(gen_frame + 0x61)) = '\x01';
LAB_00c6acf9: ;
                iVar8 = (*(int *)(gen_frame + 0x6c)) - 1;
                (*(int *)(gen_frame + 0x6c)) = iVar8;
                if ((iVar8 == 0) && ((*(int *)(gen_frame + 0x38)) != 0)) {
                  (*(char *)(gen_frame + 0x83)) = '\x01';
                }
                else {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                }
              }
              else if ((wchar_t)(*(uint *)(gen_frame + 0x74)) == L'+') goto LAB_00c6acf9;
              if ((short)(*(uint *)(gen_frame + 0x74)) == 0x30) {
                (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                if ((wVar6 == 0x78) || (wVar6 == 0x58)) {
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                  wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                  (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                  if (((*(int *)(gen_frame + 0x38)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x6c)) - 2, (*(int *)(gen_frame + 0x6c)) = iVar8, iVar8 < 1)) {
                    (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + '\x01';
                  }
                  (*(uint *)(gen_frame + 0x2c)) = 0x78;
                  uVar16 = (*(uint *)(gen_frame + 0x2c));
                }
                else {
                  (*(int *)(gen_frame + 0x58)) = 1;
                  if (uVar16 == 0x78) {
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
                    F_00c6a138((uint)wVar6,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                    uVar13 = 0x30;
                    goto LAB_00c6aef7;
                  }
                  if (((*(int *)(gen_frame + 0x38)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x6c)) - 1, (*(int *)(gen_frame + 0x6c)) = iVar8, iVar8 == 0)) {
                    (*(char *)(gen_frame + 0x83)) = (*(char *)(gen_frame + 0x83)) + '\x01';
                  }
                  (*(uint *)(gen_frame + 0x2c)) = 0x6f;
                  uVar16 = (*(uint *)(gen_frame + 0x2c));
                }
              }
LAB_00c6aefd: ;
              if ((*(uint *)(gen_frame + 0x54)) == 0) {
                if ((*(char *)(gen_frame + 0x83)) == '\0') {
                  while ((uVar13 = (*(uint *)(gen_frame + 0x74)), uVar4 = (ushort)(*(uint *)(gen_frame + 0x74)), uVar16 != 0x78 &&
                         (uVar16 != 0x70))) {
                    if ((((*(uint *)(gen_frame + 0x74)) & 0xff00) != 0) ||
                       (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x74)) & 0xff), iVar8 == 0)) goto LAB_00c6b13f;
                    if (uVar16 == 0x6f) {
                      if (0x37 < uVar4) goto LAB_00c6b13f;
                      uVar14 = (*(uint *)(gen_frame + 0x50)) << 3;
                    }
                    else {
                      uVar14 = (*(uint *)(gen_frame + 0x50)) * 10;
                    }
LAB_00c6b0fb: ;
                    (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                    (*(uint *)(gen_frame + 0x50)) = uVar14 - 0x30 + (uVar13 & 0xffff);
                    if (((*(int *)(gen_frame + 0x38)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x6c)) - 1, (*(int *)(gen_frame + 0x6c)) = iVar8, iVar8 == 0))
                    goto LAB_00c6b153;
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                  }
                  if ((((*(uint *)(gen_frame + 0x74)) & 0xff00) == 0) &&
                     (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x74)) & 0xff), iVar8 != 0)) {
                    (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) << 4;
                    uVar4 = F_00c6a0f7(uVar13);
                    uVar13 = (uint)uVar4;
                    (*(uint *)(gen_frame + 0x74)) = uVar13;
                    uVar14 = (*(uint *)(gen_frame + 0x50));
                    goto LAB_00c6b0fb;
                  }
LAB_00c6b13f: ;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
                  F_00c6a138(uVar13,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                }
LAB_00c6b153: ;
                if ((*(char *)(gen_frame + 0x61)) != '\0') {
                  (*(uint *)(gen_frame + 0x50)) = -(*(uint *)(gen_frame + 0x50));
                }
              }
              else {
                if ((*(char *)(gen_frame + 0x83)) == '\0') {
                  while ((uVar13 = (*(uint *)(gen_frame + 0x74)), uVar4 = (ushort)(*(uint *)(gen_frame + 0x74)), uVar16 != 0x78 &&
                         (uVar16 != 0x70))) {
                    if ((((*(uint *)(gen_frame + 0x74)) & 0xff00) != 0) ||
                       (iVar8 = F_00c48637((*(uint *)(gen_frame + 0x74)) & 0xff), iVar8 == 0)) goto LAB_00c6b027;
                    if (uVar16 == 0x6f) {
                      if (0x37 < uVar4) goto LAB_00c6b027;
                      uVar14 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) << 3 | (uint)(*(longlong *)(gen_frame + 0x48)) >> 0x1d;
                      iVar8 = (uint)(*(longlong *)(gen_frame + 0x48)) << 3;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 0)) = iVar8;
                      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) = uVar14;
                      (*(longlong *)(gen_frame + 0x48)) = CONCAT44(uVar14,iVar8);
                    }
                    else {
                      (*(longlong *)(gen_frame + 0x48)) = (*(longlong *)(gen_frame + 0x48)) * 10;
                    }
LAB_00c6afdd: ;
                    (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 1;
                    uVar13 = (uVar13 & 0xffff) - 0x30;
                    bVar19 = CARRY4((uint)(*(longlong *)(gen_frame + 0x48)),uVar13);
                    iVar8 = (uint)(*(longlong *)(gen_frame + 0x48)) + uVar13;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 0)) = iVar8;
                    iVar15 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) + ((int)uVar13 >> 0x1f) + (uint)bVar19;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) = iVar15;
                    (*(longlong *)(gen_frame + 0x48)) = CONCAT44(iVar15,iVar8);
                    if (((*(int *)(gen_frame + 0x38)) != 0) && (iVar8 = (*(int *)(gen_frame + 0x6c)) - 1, (*(int *)(gen_frame + 0x6c)) = iVar8, iVar8 == 0))
                    goto LAB_00c6b03b;
                    (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
                    wVar6 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
                    (*(uint *)(gen_frame + 0x74)) = (uint)wVar6;
                  }
                  if ((((*(uint *)(gen_frame + 0x74)) & 0xff00) == 0) &&
                     (iVar8 = F_00c486bb((*(uint *)(gen_frame + 0x74)) & 0xff), iVar8 != 0)) {
                    uVar14 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) << 4 | (uint)(*(longlong *)(gen_frame + 0x48)) >> 0x1c;
                    iVar8 = (uint)(*(longlong *)(gen_frame + 0x48)) << 4;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 0)) = iVar8;
                    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) = uVar14;
                    (*(longlong *)(gen_frame + 0x48)) = CONCAT44(uVar14,iVar8);
                    uVar4 = F_00c6a0f7(uVar13);
                    uVar13 = (uint)uVar4;
                    (*(uint *)(gen_frame + 0x74)) = uVar13;
                    goto LAB_00c6afdd;
                  }
LAB_00c6b027: ;
                  (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
                  F_00c6a138(uVar13,(*(undefined * PTR32 *)(gen_frame + 0x64)));
                }
LAB_00c6b03b: ;
                if ((*(char *)(gen_frame + 0x61)) != '\0') {
                  iVar8 = -(uint)(*(longlong *)(gen_frame + 0x48));
                  iVar15 = -((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) + ((uint)(*(longlong *)(gen_frame + 0x48)) != 0));
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 0)) = iVar8;
                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4)) = iVar15;
                  (*(longlong *)(gen_frame + 0x48)) = CONCAT44(iVar15,iVar8);
                }
              }
              if (uVar16 == 0x46) {
                (*(int *)(gen_frame + 0x58)) = 0;
              }
              if ((*(int *)(gen_frame + 0x58)) == 0) break;
              if ((*(char *)(gen_frame + 0x73)) == '\0') {
                (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + 1;
                uVar16 = (*(uint *)(gen_frame + 0x50));
LAB_00c6b196: ;
                if ((*(uint *)(gen_frame + 0x54)) == 0) {
                  if ((*(char *)(gen_frame + 0x6b)) == '\0') {
                    *(*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = (wchar_t)uVar16;
                  }
                  else {
                    *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = uVar16;
                  }
                }
                else {
                  *(uint *)(*(wchar_t * PTR32 *)(gen_frame + 0x3c)) = (uint)(*(longlong *)(gen_frame + 0x48));
                  *(uint *)((*(wchar_t * PTR32 *)(gen_frame + 0x3c)) + 2) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x48)) + 4));
                }
              }
            }
LAB_00c6b1c2: ;
            (*(char *)(gen_frame + 0x62)) = (*(char *)(gen_frame + 0x62)) + '\x01';
            (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = (*(wchar_t * PTR32 *)(gen_frame + 0x40)) + 1;
          }
          else {
LAB_00c6b1e7: ;
            (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) + 1;
            wVar5 = F_00c7d6bf((*(undefined * PTR32 *)(gen_frame + 0x64)));
            (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar17 + 1;
            (*(uint *)(gen_frame + 0x74)) = (uint)(ushort)wVar5;
            if (*pwVar17 != wVar5) {
LAB_00c6b2b2: ;
              F_00c6a138((*(uint *)(gen_frame + 0x74)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
              break;
            }
          }
          if (((wchar_t)(*(uint *)(gen_frame + 0x74)) == -1) && ((*(*(wchar_t * PTR32 *)(gen_frame + 0x40)) != L'%' || ((*(wchar_t * PTR32 *)(gen_frame + 0x40))[1] != L'n')))) break;
        }
        else {
          (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1;
          uVar4 = F_00c6a150(&(*(uint *)(gen_frame + 0x7c)),(*(undefined * PTR32 *)(gen_frame + 0x64)));
          F_00c6a138((uint)uVar4,CONCAT22(uVar21,uVar20));
          pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x40));
          do {
            pwVar17 = pwVar17 + 1;
            iVar8 = F_00c7db09(*pwVar17,8);
          } while (iVar8 != 0);
          (*(wchar_t * PTR32 *)(gen_frame + 0x40)) = pwVar17;
        }
        wVar5 = *(*(wchar_t * PTR32 *)(gen_frame + 0x40));
      } while (wVar5 != L'\0');
LAB_00c6b2c5: ;
      if ((*(int *)(gen_frame + 0x14)) == 1) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x20)));
      }
      if ((*(int *)(gen_frame + 0x24)) == 1) {
        F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x5c)));
      }
      if ((wchar_t)(*(uint *)(gen_frame + 0x74)) == -1) {
        iVar8 = (*(int *)(gen_frame + 0x30));
        if (((*(int *)(gen_frame + 0x30)) == 0) && ((*(char *)(gen_frame + 0x62)) == '\0')) {
          iVar8 = -1;
        }
        if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
          return iVar8;
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        return iVar8;
      }
      if ((*(int *)(gen_frame + 0x10)) == 1) {
        piVar7 = F_00c51f85();
        *piVar7 = 0x16;
        F_00c4c305();
      }
    }
    iVar8 = (*(int *)(gen_frame + 0x30));
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar8;
}

/* ref: FUN_00c6b370 */
GEN_LIB GEN_FRAME float10 F_00c6b370(GEN_P(float in_xmm2, float gen_a0), GEN_P(float in_xmm3, float gen_a1), GEN_P(float in_xmm4, float gen_a2), GEN_P(float10 in_st0, double gen_a3))
{
  GEN_ENTER(0xc6b370u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), (unsigned int)gen_trace_d(gen_a3));
  GEN_PIN(float in_xmm2 = (float)gen_a0;)
  GEN_PIN(float in_xmm3 = (float)gen_a1;)
  GEN_PIN(float in_xmm4 = (float)gen_a2;)
  GEN_PIN(float10 in_st0 = (float10)gen_a3;)
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
GEN_LIB GEN_NOFRAME float10 F_00c6b95c(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc6b95cu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  return *(float10 *)&REFG(undefined, 0x111ad6a);
}

/* ref: __cintrindisp2 */
GEN_LIB GEN_FRAME float10 F_00c6b9a0(GEN_P(undefined4 in_edx, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc6b9a0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  undefined1 gen_out[0x4];
  float10 fVar1;
  
  fVar1 = (float10)F_00c5ec37(in_edx,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba63(fVar1,(gen_out + 0x0));
  return fVar1;
}

/* ref: __cintrindisp1 */
GEN_LIB GEN_FRAME float10 F_00c6b9de(GEN_P(undefined4 in_edx, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc6b9deu, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  undefined1 gen_out[0x4];
  float10 fVar1;
  
  fVar1 = (float10)F_00c5ebd0(in_edx,in_st0,(gen_out + 0x0));
  fVar1 = F_00c6ba63(fVar1,(gen_out + 0x0));
  return fVar1;
}

/* ref: __ctrandisp2 */
GEN_LIB GEN_FRAME float F_00c6ba1b(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc6ba1bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
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
GEN_LIB GEN_FRAME float F_00c6bbaa(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6bbaau, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
GEN_LIB GEN_FRAME uint F_00c6bbdd(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_LIB GEN_FRAME float10 F_00c6bc20(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc6bc20u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  double in_xmm0;
  float10 fVar1;
  
  in_xmm0 = (double)in_st0;
  fVar1 = F_00c6bc3e(in_xmm0,(int)(ulonglong)gen_d2bits(in_xmm0),
                       (int)((ulonglong)gen_d2bits(in_xmm0) >> 0x20));
  return fVar1;
}

