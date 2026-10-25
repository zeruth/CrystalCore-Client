#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c49492 */
uint F_00c49492(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc49492u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e12b(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c494ae */
uint F_00c494ae(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc494aeu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e14b(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c494ca */
uint F_00c494ca(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc494cau, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5e14b(param_1,param_2,(undefined *)0x0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c494e5 */
uint F_00c494e5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc494e5u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e16b(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c49501 */
uint F_00c49501(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc49501u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5e16b(param_1,param_2,(undefined *)0x0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: __fsopen */
undefined * F_00c4951c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4951cu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * _Filename_00;
  char * _Mode_00;
  int * piVar1;
  
  _Mode_00 = (*(char * PTR32 *)&gen_args[1]);
  _Filename_00 = (*(char * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5ef0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc49528;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  if ((((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) || ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0)) || (*(*(char * PTR32 *)&gen_args[1]) == '\0')) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    (*(char * PTR32 *)&gen_args[0]) = (char *)F_00c5e47f();
    if ((undefined *)(*(char * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x18;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      if (*_Filename_00 != '\0') {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = F_00c5e1e8(_Filename_00,_Mode_00,(*(int *)&gen_args[2]),(undefined *)(*(char * PTR32 *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c495ce((gen_frame + 0x1c));
        return (*(undefined * PTR32 *)(gen_frame + 0x0));
      }
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c5e5c0(&REFG(undefined4, 0x134ab78),((undefined1 *)(gen_frame + 0xc)),0xfffffffe);
    }
  }
  return (undefined *)0x0;
}

/* ref: FUN_00c495ce */
uint F_00c495ce(unsigned int gen_a0)
{
  GEN_ENTER(0xc495ceu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: _fopen */
undefined * F_00c495d8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc495d8u, gen_a0, gen_a1, 0u, 0u);
  char * _Filename = (char *)(uintptr_t)gen_a0;
  char * _Mode = (char *)(uintptr_t)gen_a1;
  undefined * pFVar1;
  
  pFVar1 = F_00c4951c(_Filename,_Mode,0x40);
  return pFVar1;
}

/* ref: _fopen_s */
int F_00c495ef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc495efu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * PTR32 * _File = (undefined * PTR32 *)(uintptr_t)gen_a0;
  char * _Filename = (char *)(uintptr_t)gen_a1;
  char * _Mode = (char *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * pFVar2;
  int iVar3;
  
  if (_File == (undefined * PTR32 *)0x0) {
    piVar1 = F_00c51f85();
    iVar3 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    pFVar2 = F_00c4951c(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (undefined *)0x0) {
      piVar1 = F_00c51f85();
      iVar3 = *piVar1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

/* ref: FUN_00c49680 */
float10 F_00c49680(double gen_a0)
{
  GEN_ENTER(0xc49680u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c5e740(in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c496d8(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c49790 */
uint F_00c49790(double gen_a0)
{
  GEN_ENTER(0xc49790u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  ulonglong uVar1;
  uint uVar2;
  int uStack_20;
  float uStack_1c;
  
  if (REFG(int, 0x15e42a0) != 0) {
    return (int)in_st0;
  }
  uStack_1c = (float)in_st0;
  uVar1 = (ulonglong)ROUND(in_st0);
  uStack_20 = (int)uVar1;
  if ((uStack_20 == 0) &&
     (uStack_1c = gen_bits2f((uint)(uVar1 >> 0x20)), (uVar1 & 0x7fffffff00000000) == 0)) {
    uVar2 = 0;
  }
  else if ((int)gen_fl2bits(uStack_1c) < 0) {
    uVar2 = uStack_20 +
            (uint)(0x80000000 < (uint)gen_fl2bits(-(float)(in_st0 - (float10)(longlong)uVar1)));
  }
  else {
    uVar2 = uStack_20 -
            (uint)(0x80000000 < (uint)gen_fl2bits((float)(in_st0 - (float10)(longlong)uVar1)));
  }
  return uVar2;
}

/* ref: _wcsncpy_s */
int F_00c4983b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4983bu, gen_a0, gen_a1, gen_a2, gen_a3);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  short sVar1;
  int * piVar2;
  short * psVar3;
  int iVar4;
  int iVar5;
  int eStack_14;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_00c49861: ;
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != (short *)0x0) {
          iVar5 = param_2;
          if (param_4 == -1) {
            iVar4 = (int)param_1 - (int)param_3;
            do {
              sVar1 = *param_3;
              *(short *)(iVar4 + (int)param_3) = sVar1;
              param_3 = param_3 + 1;
              if (sVar1 == 0) break;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          else {
            psVar3 = param_1;
            do {
              sVar1 = *((short *)GEN_TOP((((int)param_3 - (int)param_1) + (int)psVar3)));
              *psVar3 = sVar1;
              psVar3 = psVar3 + 1;
              if ((sVar1 == 0) || (iVar5 = iVar5 + -1, iVar5 == 0)) break;
              param_4 = param_4 + -1;
            } while (param_4 != 0);
            if (param_4 == 0) {
              *psVar3 = 0;
            }
          }
          if (iVar5 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          piVar2 = F_00c51f85();
          eStack_14 = 0x22;
          *piVar2 = 0x22;
          goto LAB_00c49872;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_00c49861;
  piVar2 = F_00c51f85();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_00c49872: ;
  F_00c4c305();
  return eStack_14;
}

/* ref: _strcpy_s */
int F_00c49908(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc49908u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  int * piVar2;
  int iVar3;
  int eStack_10;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    if (param_3 != (char *)0x0) {
      iVar3 = (int)param_1 - (int)param_3;
      do {
        cVar1 = *param_3;
        param_3[iVar3] = cVar1;
        param_3 = param_3 + 1;
        if (cVar1 == '\0') break;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      if (param_2 != 0) {
        return 0;
      }
      *param_1 = 0;
      piVar2 = F_00c51f85();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00c49927;
    }
    *param_1 = 0;
  }
  piVar2 = F_00c51f85();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00c49927: ;
  F_00c4c305();
  return eStack_10;
}

/* ref: __invoke_watson_if_error */
unsigned int F_00c49967(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc49967u, gen_a0, gen_a1, gen_a2, gen_a3);
  int _ExpressionError = (int)gen_a0;
  wchar_t * _Expression = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * _Function = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t * _File = (wchar_t *)(uintptr_t)gen_a3;
  uint _Line = (uint)gen_a4;
  uint _Reserved = (uint)gen_a5;
  undefined4 unaff_EDI = 0;
  
  if (_ExpressionError != 0) {
                    
    F_00c4c299(unaff_EDI,_Expression,_Function,_File,_Line,_Reserved);
  }
  return 0;
}

/* ref: __copytlocinfo_nolock */
unsigned int F_00c49994(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc49994u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  if (((in_ecx != (undefined4 *)0x0) && (in_eax != (undefined4 *)0x0)) && (in_eax != in_ecx)) {
    puVar2 = in_eax;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *in_ecx;
      in_ecx = in_ecx + 1;
      puVar2 = puVar2 + 1;
    }
    *in_eax = 0;
    F_00c5cb36(in_eax);
  }
  return 0;
}

/* ref: __configthreadlocale */
int F_00c499ba(unsigned int gen_a0)
{
  GEN_ENTER(0xc499bau, gen_a0, 0u, 0u, 0u);
  int _Flag = (int)gen_a0;
  uint uVar1;
  undefined * p_Var2;
  int * piVar3;
  uint uVar4;
  
  p_Var2 = F_00c5b37a();
  uVar1 = (*(int *)(((char *)(p_Var2) + 112)));
  if (_Flag == -1) {
    REFG(undefined4, 0x134b7e0) = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = F_00c51f85();
        *piVar3 = 0x16;
        F_00c4c305();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    (*(int *)(((char *)(p_Var2) + 112))) = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}

/* ref: __free_locale */
unsigned int F_00c49a41(unsigned int gen_a0)
{
  GEN_ENTER(0xc49a41u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  undefined * ptVar1;
  undefined * _Memory;
  LONG LVar2;
  
  _Memory = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f5f10);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc49a4d;
  if ((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    F_00c5aa4f(0xd);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    if ((*(undefined * PTR32 *)(((char *)(_Memory) + 4))) != (undefined *)0x0) {
      LVar2 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)(_Memory) + 4))))));
      if ((LVar2 == 0) && ((*(undefined * PTR32 *)(((char *)(_Memory) + 4))) != (undefined *)&REFG(undefined, 0x134b2c0))) {
        F_00c4c68f((*(undefined * PTR32 *)(((char *)(_Memory) + 4))));
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c49aee();
    if ((*(undefined * PTR32 *)((char *)(_Memory))) != (undefined *)0x0) {
      F_00c5aa4f(0xc);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
      F_00c5cbc5((*(undefined * PTR32 *)((char *)(_Memory))));
      ptVar1 = (*(undefined * PTR32 *)((char *)(_Memory)));
      if (((ptVar1 != (undefined *)0x0) && ((*(int *)((char *)(ptVar1))) == 0)) &&
         (ptVar1 != (undefined *)&REFG(undefined, 0x134b950))) {
        F_00c5cc5e(ptVar1);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
      F_00c49afa();
    }
    (*(undefined * PTR32 *)((char *)(_Memory))) = (undefined *)0xbaadf00d;
    (*(undefined * PTR32 *)(((char *)(_Memory) + 4))) = (undefined *)0xbaadf00d;
    F_00c4c68f(_Memory);
  }
  return 0;
}

/* ref: FUN_00c49aeb */
uint F_00c49aeb(unsigned int gen_a0)
{
  GEN_ENTER(0xc49aebu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c49aee */
uint F_00c49aee(void)
{
  GEN_ENTER(0xc49aeeu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c49af7 */
uint F_00c49af7(unsigned int gen_a0)
{
  GEN_ENTER(0xc49af7u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c49afa */
uint F_00c49afa(void)
{
  GEN_ENTER(0xc49afau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c49b03 */
uint F_00c49b03(unsigned int gen_a0)
{
  GEN_ENTER(0xc49b03u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c49a41(param_1);
  return extraout_EAX;
}

/* ref: FUN_00c49ba5 */
uint F_00c49ba5(unsigned int gen_a0)
{
  GEN_ENTER(0xc49ba5u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c49bb1 */
uint F_00c49bb1(unsigned int gen_a0)
{
  GEN_ENTER(0xc49bb1u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c49bc2 */
undefined4 F_00c49bc2(void)
{
  GEN_ENTER(0xc49bc2u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c49bc5 */
unsigned int F_00c49bc5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc49bc5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int eVar1;
  undefined4 * puVar2;
  int in_edi;
  
  in_edi = 0;
  if (0 < (*(int *)&gen_args[2])) {
    puVar2 = &(*(int *)&gen_args[2]);
    do {
      puVar2 = puVar2 + 1;
      eVar1 = F_00c473c8((*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),*puVar2);
      if (eVar1 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      in_edi = in_edi + 1;
    } while (in_edi < (*(int *)&gen_args[2]));
  }
  return 0;
}

/* ref: ___lc_strtolc */
uint F_00c49c06(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc49c06u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int eVar2;
  uint uVar3;
  char * pcVar4;
  char * _Str;
  char * in_edi;
  undefined4 uVar5;
  
  _Str = param_2;
  F_00c48350(param_1,0,0x90);
  if (*param_2 == '\0') {
    return 0;
  }
  if ((*param_2 == '.') && (param_2[1] != '\0')) {
    eVar2 = F_00c4d9ef(param_1 + 0x80,0x10,param_2 + 1,0xf);
    in_edi = param_1;
    if (eVar2 == 0) {
      param_1[0x8f] = '\0';
      return 0;
    }
  }
  else {
    param_2 = (char *)0x0;
    uVar3 = F_00c525d0(_Str,"_.,");
    while( true ) {
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      in_edi = _Str + uVar3;
      cVar1 = *in_edi;
      if (param_2 == (char *)0x0) {
        if (0x3f < uVar3) {
          return 0xffffffff;
        }
        if (cVar1 == '.') {
          return 0xffffffff;
        }
        uVar5 = 0x40;
        pcVar4 = param_1;
      }
      else if (param_2 == (char *)0x1) {
        if (0x3f < uVar3) {
          return 0xffffffff;
        }
        if (cVar1 == '_') {
          return 0xffffffff;
        }
        uVar5 = 0x40;
        pcVar4 = param_1 + 0x40;
      }
      else {
        if (param_2 != (char *)0x2) {
          return 0xffffffff;
        }
        if (0xf < uVar3) {
          return 0xffffffff;
        }
        if ((cVar1 != '\0') && (cVar1 != ',')) {
          return 0xffffffff;
        }
        uVar5 = 0x10;
        pcVar4 = param_1 + 0x80;
      }
      eVar2 = F_00c4d9ef(pcVar4,uVar5,_Str,uVar3);
      if (eVar2 != 0) break;
      if (cVar1 == ',') {
        return 0;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      param_2 = (char *)((int)param_2 + 1);
      _Str = in_edi + 1;
      uVar3 = F_00c525d0(_Str,"_.,");
    }
  }
                    
  F_00c4c299(in_edi,0,0,0,0,0);
}

/* ref: FUN_00c49d25 */
unsigned int F_00c49d25(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc49d25u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int eVar1;
  undefined4 unaff_EDI = 0;
  
  eVar1 = F_00c49908(param_1,param_2,param_3);
  if (eVar1 == 0) {
    if (*(char *)(param_3 + 0x40) != '\0') {
      F_00c49bc5(param_1,param_2,2,&REFG(undefined, 0x10c4408),(char *)(param_3 + 0x40));
    }
    if (*(char *)(param_3 + 0x80) != '\0') {
      F_00c49bc5(param_1,param_2,2,&REFG(undefined, 0x1118a34),(char *)(param_3 + 0x80));
    }
    return 0;
  }
                    
  F_00c4c299(unaff_EDI,0,0,0,0,0);
}

/* ref: __setlocale_get_all */
uint F_00c49d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc49d90u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  bool bVar1;
  undefined4 * _Memory;
  int eVar2;
  int iVar3;
  LONG LVar4;
  undefined4 * in_edi;
  undefined4 * local_c;
  undefined * PTR32 * local_8;
  
  bVar1 = true;
  _Memory = F_00c54c2e(0x355);
  in_edi = _Memory;
  if (_Memory != (undefined4 *)0x0) {
    in_edi = _Memory + 1;
    *(undefined1 *)in_edi = 0;
    *_Memory = 1;
    F_00c49bc5(in_edi,0x351,3,REFG(undefined * PTR32, 0x1118974),&REFG(undefined, 0x1118a3c));
    local_8 = &REFG(undefined * PTR32, 0x1118974);
    local_c = (undefined4 *)(in_esi + 0x58);
    do {
      eVar2 = F_00c473c8(in_edi,0x351,&REFG(undefined, 0x1118a38));
      if (eVar2 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      iVar3 = F_00c556e0((char *)*local_c,(char *)local_c[4]);
      if (iVar3 != 0) {
        bVar1 = false;
      }
      local_8 = local_8 + 3;
      F_00c49bc5(in_edi,0x351,3,*local_8,&REFG(undefined, 0x1118a3c));
      local_c = local_c + 4;
    } while ((int)local_8 < 0x11189a4);
    if (bVar1) {
      F_00c4c68f(_Memory);
      if ((*(int *)(in_esi + 0x50) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x50)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x50));
      }
      if ((*(int *)(in_esi + 0x54) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x54)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x54));
      }
      in_edi = *(undefined4 * PTR32 *)(in_esi + 0x68);
      *(undefined4 *)(in_esi + 0x54) = 0;
      *(undefined4 *)(in_esi + 0x4c) = 0;
      *(undefined4 *)(in_esi + 0x50) = 0;
      *(undefined4 *)(in_esi + 0x48) = 0;
    }
    else {
      if ((*(int *)(in_esi + 0x50) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x50)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x50));
      }
      if ((*(int *)(in_esi + 0x54) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x54)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x54));
      }
      *(undefined4 *)(in_esi + 0x54) = 0;
      *(undefined4 *)(in_esi + 0x4c) = 0;
      *(undefined4 * PTR32 *)(in_esi + 0x50) = _Memory;
      *(undefined4 * PTR32 *)(in_esi + 0x48) = in_edi;
    }
  }
  return (uint)in_edi;
}

/* ref: __expandlocale */
uint F_00c49ef5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc49ef5u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  wchar_t * pwVar1;
  wchar_t * _Str1;
  wchar_t * _LpCodePage;
  undefined * p_Var2;
  int eVar3;
  gen_size32 sVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  char * _Str1_00;
  undefined2 * in_edi;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  p_Var2 = F_00c5b37a();
  pwVar1 = (((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 6;
  _Str1 = (((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 8;
  _LpCodePage = (((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 2;
  _Str1_00 = ((char *)GEN_TOP(((int)(((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 0x93)));
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
LAB_00c4a105: ;
    _Str1_00 = (char *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar3 = F_00c49908(param_2,param_3,&REFG(undefined, 0x11186a8));
      in_edi = param_4;
      if (eVar3 != 0) goto LAB_00c49fcb;
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      _Str1_00 = param_2;
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
      goto LAB_00c4a107;
    }
    sVar4 = F_00c552f0(param_1);
    in_edi = (undefined2 *)0x83;
    if ((0x82 < sVar4) ||
       ((iVar5 = F_00c556e0(_Str1_00,param_1), iVar5 != 0 &&
        (iVar5 = F_00c556e0((char *)_Str1,param_1), iVar5 != 0)))) {
      uVar6 = F_00c49c06(((undefined1 *)(gen_frame + 0x8)),param_1);
      if ((uVar6 != 0) ||
         (BVar7 = F_00c6085d((GEN_LPANY)((undefined1 *)(gen_frame + 0x8)),(UINT *)_LpCodePage,(GEN_LPANY)((undefined1 *)(gen_frame + 0x8))),
         BVar7 == 0)) goto LAB_00c4a105;
      *(uint *)pwVar1 = (uint)(ushort)(*((wchar_t *)GEN_TOP((((((char *)(p_Var2) + 156) + 28) + (4) * 2)))));
      F_00c49d25(_Str1_00,0x83,((undefined1 *)(gen_frame + 0x8)));
      if ((*param_1 == '\0') || (0x82 < sVar4)) {
        sVar4 = 0;
        param_1 = "";
      }
      eVar3 = F_00c4d9ef(_Str1,0x83,param_1,sVar4 + 1);
      if (eVar3 != 0) goto LAB_00c49fcb;
    }
    if (param_4 != (undefined2 *)0x0) {
      F_00c46aa0(param_4,_LpCodePage,6);
    }
    if (param_5 != (undefined4 *)0x0) {
      F_00c46aa0(param_5,pwVar1,4);
    }
    eVar3 = F_00c49908(param_2,param_3,_Str1_00);
    if (eVar3 != 0) {
LAB_00c49fcb: ;
                    
      F_00c4c299(in_edi,0,0,0,0,0);
    }
  }
LAB_00c4a107: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)_Str1_00;
}

/* ref: FUN_00c4a116 */
uint F_00c4a116(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4a116u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_esi = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  undefined * in_edi;
  uint uVar1;
  int iVar2;
  gen_size32 sVar3;
  int eVar4;
  wchar_t * pwVar5;
  BOOL BVar6;
  LONG LVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  (*(int *)(gen_frame + 0x3c)) = in_ecx;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_3;
  in_edi = F_00c5b37a();
  uVar1 = F_00c49ef5((*(undefined * PTR32 *)(gen_frame + 0x34)),((char *)(gen_frame + 0x144)),0x83,((ushort *)(gen_frame + 0x1c)),((undefined4 *)(gen_frame + 0x28)),in_ecx);
  if (uVar1 != 0) {
    iVar8 = in_ecx * 0x10 + in_esi;
    iVar2 = F_00c556e0(((char *)(gen_frame + 0x144)),*(char * PTR32 *)(iVar8 + 0x48));
    if (iVar2 == 0) {
LAB_00c4a19c: ;
      uVar1 = *(uint *)(iVar8 + 0x48);
      goto LAB_00c4a174;
    }
    sVar3 = F_00c552f0(((char *)(gen_frame + 0x144)));
    (*(gen_size32 *)(gen_frame + 0x40)) = sVar3 + 5;
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = F_00c54c2e(sVar3 + 5);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != (undefined4 *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 *)(iVar8 + 0x48);
      (*(uint * PTR32 *)(gen_frame + 0x24)) = (uint *)(in_esi + 0xc + (*(int *)(gen_frame + 0x3c)) * 4);
      (*(uint *)(gen_frame + 0x14)) = *(*(uint * PTR32 *)(gen_frame + 0x24));
      (*(int *)(gen_frame + 0x30)) = ((*(int *)(gen_frame + 0x3c)) + 6) * 6 + in_esi;
      F_00c46aa0(((undefined4 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x30)),6);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(in_esi + 4);
      eVar4 = F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 1,(*(gen_size32 *)(gen_frame + 0x40)) - 4,((char *)(gen_frame + 0x144)));
      if (eVar4 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      *(undefined4 * PTR32 *)(iVar8 + 0x48) = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 1;
      *(*(uint * PTR32 *)(gen_frame + 0x24)) = (uint)((ushort *)(gen_frame + 0x1c))[0];
      F_00c46aa0((*(int *)(gen_frame + 0x30)),((ushort *)(gen_frame + 0x1c)),6);
      if ((*(int *)(gen_frame + 0x3c)) == 2) {
        (*(gen_size32 *)(gen_frame + 0x40)) = 0;
        *(undefined4 *)(in_esi + 4) = ((undefined4 *)(gen_frame + 0x28))[0];
        (*(int *)(gen_frame + 0x30)) = *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0x1b)));
        pwVar5 = (((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 9;
        iVar2 = *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0x19)));
        do {
          if (*(int *)(in_esi + 4) == *(int *)pwVar5) {
            if ((*(gen_size32 *)(gen_frame + 0x40)) != 0) {
              pwVar5 = (((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + (*(gen_size32 *)(gen_frame + 0x40)) * 4 + 9;
              *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 9))) = *(int *)pwVar5;
              *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0xb))) = *(int *)(pwVar5 + 2);
              *(int *)pwVar5 = iVar2;
              *(int *)(pwVar5 + 2) = (*(int *)(gen_frame + 0x30));
            }
            break;
          }
          (*(int *)(gen_frame + 0xc)) = *(int *)pwVar5;
          (*(gen_size32 *)(gen_frame + 0x40)) = (*(gen_size32 *)(gen_frame + 0x40)) + 1;
          *(int *)pwVar5 = iVar2;
          iVar2 = *(int *)(pwVar5 + 2);
          *(int *)(pwVar5 + 2) = (*(int *)(gen_frame + 0x30));
          pwVar5 = pwVar5 + 4;
          (*(int *)(gen_frame + 0x30)) = iVar2;
          iVar2 = (*(int *)(gen_frame + 0xc));
        } while ((int)(*(gen_size32 *)(gen_frame + 0x40)) < 5);
        if ((*(gen_size32 *)(gen_frame + 0x40)) == 5) {
          BVar6 = F_00c635a3(0,1,&REFG(undefined, 0x11189b0),0x7f,((ushort *)(gen_frame + 0x44)),*(undefined4 *)(in_esi + 4),
                             *(undefined4 *)(in_esi + 0x14),1);
          if (BVar6 == 0) {
            (*((wchar_t *)GEN_TOP((((((char *)(in_edi) + 156) + 290) + (0xb) * 2))))) = L'\0';
            (*((wchar_t *)GEN_TOP((((((char *)(in_edi) + 156) + 290) + (0xc) * 2))))) = L'\0';
          }
          else {
            uVar1 = 0;
            do {
              ((ushort *)(gen_frame + 0x44))[uVar1] = ((ushort *)(gen_frame + 0x44))[uVar1] & 0x1ff;
              uVar1 = uVar1 + 1;
            } while (uVar1 < 0x7f);
            iVar2 = F_00c61f68(((ushort *)(gen_frame + 0x44)),REFG(undefined * PTR32, 0x134aba0),0xfe);
            *((uint *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0xb))) = (uint)(iVar2 == 0);
          }
          *((undefined4 *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 9))) = *(undefined4 *)(in_esi + 4);
        }
        *(undefined4 *)(in_esi + 0xa8) = *((undefined4 *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0xb)));
      }
      if ((*(int *)(gen_frame + 0x3c)) == 1) {
        *(undefined4 *)(in_esi + 8) = ((undefined4 *)(gen_frame + 0x28))[0];
      }
      uVar1 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1118970))[(*(int *)(gen_frame + 0x3c)) * 3])))(in_esi);
      if (uVar1 == 0) {
        if ((*(undefined * PTR32 *)(gen_frame + 0x34)) != &REFG(undefined, 0x134b7e4)) {
          iVar2 = (*(int *)(gen_frame + 0x3c)) + 5;
          LVar7 = gen_imp_InterlockedDecrement(*(LONG * PTR32 *)(in_esi + iVar2 * 0x10));
          if (LVar7 == 0) {
            F_00c4c68f(*(undefined * PTR32 *)(in_esi + iVar2 * 0x10));
            F_00c4c68f(*(undefined * PTR32 *)(iVar8 + 0x54));
            *(undefined4 *)(iVar8 + 0x4c) = 0;
          }
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 1;
        *((undefined4 * PTR32 *)GEN_TOP((in_esi + ((*(int *)(gen_frame + 0x3c)) + 5) * 0x10))) = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
        goto LAB_00c4a19c;
      }
      *(undefined * PTR32 *)(iVar8 + 0x48) = (*(undefined * PTR32 *)(gen_frame + 0x34));
      F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
      *(*(uint * PTR32 *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x14));
      *(undefined4 *)(in_esi + 4) = (*(undefined4 *)(gen_frame + 0x18));
    }
  }
  uVar1 = 0;
LAB_00c4a174: ;
  ((undefined4 *)(gen_frame + 0x4))[0] = 0xc4a180;
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar1;
}

/* ref: __setlocale_nolock */
uint F_00c4a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4a450u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  bool bVar1;
  uint uVar2;
  char * pcVar3;
  gen_size32 sVar4;
  gen_size32 sVar5;
  int eVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined * PTR32 * ppuVar10;
  undefined4 * puVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  iVar9 = 0;
  if (param_1 != 0) {
    if (param_3 == (char *)0x0) {
      uVar2 = *(uint *)(param_2 + 0x48 + param_1 * 0x10);
    }
    else {
      uVar2 = F_00c4a116(param_1,param_2,param_3);
    }
    goto LAB_00c4a65d;
  }
  bVar1 = true;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (param_3 != (char *)0x0) {
    if (((*param_3 == 'L') && (param_3[1] == 'C')) && (param_3[2] == '_')) {
      do {
        pcVar3 = F_00c52d60(param_3,"=;");
        if (((pcVar3 == (char *)0x0) || (sVar4 = (int)pcVar3 - (int)param_3, sVar4 == 0)) ||
           (*pcVar3 == ';')) {
LAB_00c4a5e1: ;
          uVar2 = 0;
          goto LAB_00c4a65d;
        }
        (*(int *)(gen_frame + 0x8)) = 1;
        ppuVar10 = &REFG(undefined * PTR32, 0x1118974);
        do {
          iVar9 = F_00c4b813(*ppuVar10,param_3,sVar4);
          if ((iVar9 == 0) && (sVar5 = F_00c552f0(*ppuVar10), sVar4 == sVar5)) break;
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          ppuVar10 = ppuVar10 + 3;
        } while ((int)ppuVar10 < 0x11189a5);
        pcVar3 = pcVar3 + 1;
        sVar4 = F_00c525d0(pcVar3,";");
        if ((sVar4 == 0) && (*pcVar3 != ';')) goto LAB_00c4a5e1;
        if ((*(int *)(gen_frame + 0x8)) < 6) {
          eVar6 = F_00c4d9ef(((char *)(gen_frame + 0x14)),0x83,pcVar3,sVar4);
          if (eVar6 != 0) {
                    
            F_00c4c299(sVar4,0,0,0,0,0);
          }
          ((char *)(gen_frame + 0x14))[sVar4] = '\0';
          uVar2 = F_00c4a116((*(int *)(gen_frame + 0x8)),param_2,((char *)(gen_frame + 0x14)));
          if (uVar2 != 0) {
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
          }
        }
      } while ((pcVar3[sVar4] != '\0') && (param_3 = pcVar3 + sVar4 + 1, *param_3 != '\0'));
    }
    else {
      uVar7 = F_00c49ef5(param_3,((char *)(gen_frame + 0x14)),0x83,0,0,0);
      uVar2 = 0;
      if (uVar7 == 0) goto LAB_00c4a65d;
      puVar11 = (undefined4 *)(param_2 + 0x48);
      do {
        if (iVar9 != 0) {
          iVar8 = F_00c556e0(((char *)(gen_frame + 0x14)),(char *)*puVar11);
          if ((iVar8 == 0) || (uVar2 = F_00c4a116(iVar9,param_2,((char *)(gen_frame + 0x14))), uVar2 != 0)) {
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar9 = iVar9 + 1;
        puVar11 = puVar11 + 4;
      } while (iVar9 < 6);
      if (bVar1) goto LAB_00c4a658;
    }
    uVar2 = 0;
    if ((*(int *)(gen_frame + 0x10)) == 0) goto LAB_00c4a65d;
  }
LAB_00c4a658: ;
  uVar2 = F_00c49d90(param_2);
LAB_00c4a65d: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar2;
}

/* ref: __create_locale */
undefined * F_00c4a66c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4a66cu, gen_a0, gen_a1, 0u, 0u);
  int _Category = (int)gen_a0;
  char * _Locale = (char *)(uintptr_t)gen_a1;
  undefined * _Memory;
  int * piVar1;
  undefined * ptVar2;
  undefined * ptVar3;
  uint uVar4;
  
  if (((uint)_Category < 6) && (_Locale != (char *)0x0)) {
    _Memory = F_00c54c73(8,1);
    if (_Memory != (undefined *)0x0) {
      ptVar2 = F_00c54c73(0xd8,1);
      (*(undefined * PTR32 *)((char *)(_Memory))) = ptVar2;
      if (ptVar2 == (undefined *)0x0) {
        F_00c4c68f(_Memory);
      }
      else {
        ptVar3 = F_00c54c73(0x220,1);
        (*(undefined * PTR32 *)(((char *)(_Memory) + 4))) = ptVar3;
        if (ptVar3 != (undefined *)0x0) {
          F_00c49994((*(undefined * PTR32 *)((char *)(_Memory))),&REFG(undefined, 0x134b950));
          uVar4 = F_00c4a450(_Category,(*(undefined * PTR32 *)((char *)(_Memory))),_Locale);
          if (uVar4 == 0) {
            F_00c5cbc5((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c5cc5e((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c4c68f(_Memory);
          }
          else {
            uVar4 = F_00c5c757((*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(_Memory))) + 4))))),(*(undefined * PTR32 *)(((char *)(_Memory) + 4))));
            if (uVar4 == 0) {
              (*(int *)((char *)(*(undefined * PTR32 *)(((char *)(_Memory) + 4))))) = 1;
              (*(int *)((char *)(*(undefined * PTR32 *)(((char *)(_Memory) + 4))))) = 1;
              return _Memory;
            }
            F_00c4c68f((*(undefined * PTR32 *)(((char *)(_Memory) + 4))));
            F_00c5cbc5((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c5cc5e((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c4c68f(_Memory);
          }
          return (undefined *)0x0;
        }
        F_00c4c68f((*(undefined * PTR32 *)((char *)(_Memory))));
        F_00c4c68f(_Memory);
      }
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
  }
  return (undefined *)0x0;
}

/* ref: FUN_00c4a761 */
uint F_00c4a761(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4a761u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * plVar1;
  
  plVar1 = F_00c4a66c(param_1,param_2);
  return (uint)plVar1;
}

/* ref: _setlocale */
char * F_00c4a76c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4a76cu, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  undefined * in_esi;
  undefined * in_eax;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f5f60);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc4a778;
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  if ((uint)(*(int *)&gen_args[0]) < 6) {
    in_esi = F_00c5b37a();
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = in_esi;
    F_00c5cdf6();
    (*(int *)(((char *)(in_esi) + 112))) = (*(int *)(((char *)(in_esi) + 112))) | 0x10;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    in_eax = F_00c54c73(0xd8,1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = in_eax;
    if (in_eax != (undefined *)0x0) {
      F_00c5aa4f(0xc);
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x1;
      F_00c49994(in_eax,(*(undefined * PTR32 *)(((char *)(in_esi) + 108))));
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      F_00c4a89e();
      (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)F_00c4a450((*(int *)&gen_args[0]),in_eax,(*(char * PTR32 *)&gen_args[1]));
      if ((*(char * PTR32 *)(gen_frame + 0xc)) == (char *)0x0) {
        F_00c5cbc5(in_eax);
        F_00c5cc5e(in_eax);
      }
      else {
        if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
          iVar2 = F_00c556e0((*(char * PTR32 *)&gen_args[1]),&REFG(undefined, 0x134b7e4));
          if (iVar2 != 0) {
            REFG(undefined4, 0x15d6874) = 1;
          }
        }
        F_00c5aa4f(0xc);
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x2;
        F_00c5cda9(&(*(undefined * PTR32 *)(((char *)(in_esi) + 108))),in_eax);
        F_00c5cbc5(in_eax);
        if ((((*(int *)(((char *)(in_esi) + 112))) & 2) == 0) && (((byte)REFG(undefined4, 0x134b7e0) & 1) == 0)) {
          F_00c5cda9(&REFG(undefined * PTR32, 0x134ba28),(*(undefined * PTR32 *)(((char *)(in_esi) + 108))));
          REFG(undefined * PTR32, 0x134b098) = *((undefined * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134ba28) + 0xbc)));
          REFG(undefined * PTR32, 0x134b110) = *((undefined * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134ba28) + 200)));
          *(undefined4 *)&REFG(undefined, 0x134bb40) = *((undefined4 *)GEN_TOP((REFG(undefined * PTR32, 0x134ba28) + 0xac)));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
        F_00c4a8aa();
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c4a8db(in_esi);
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  }
  return (*(char * PTR32 *)(gen_frame + 0xc));
}

/* ref: FUN_00c4a895 */
uint F_00c4a895(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a895u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a89e */
uint F_00c4a89e(void)
{
  GEN_ENTER(0xc4a89eu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a8a7 */
uint F_00c4a8a7(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a8a7u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a8aa */
uint F_00c4a8aa(void)
{
  GEN_ENTER(0xc4a8aau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a8d8 */
unsigned int F_00c4a8d8(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a8d8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)(in_ebp + -0x1c) + 0x70)));
  *puVar1 = *puVar1 & 0xffffffef;
  return 0;
}

/* ref: FUN_00c4a8db */
unsigned int F_00c4a8db(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a8dbu, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  *(uint *)(in_esi + 0x70) = *(uint *)(in_esi + 0x70) & 0xffffffef;
  return 0;
}

/* ref: _wcscpy_s */
int F_00c4a8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4a8e0u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Dst = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t wVar1;
  int * piVar2;
  int iVar3;
  int eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      iVar3 = (int)_Dst - (int)_Src;
      do {
        wVar1 = *_Src;
        *(wchar_t *)(iVar3 + (int)_Src) = wVar1;
        _Src = _Src + 1;
        if (wVar1 == L'\0') break;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = F_00c51f85();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      goto LAB_00c4a8ff;
    }
    *_Dst = L'\0';
  }
  piVar2 = F_00c51f85();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00c4a8ff: ;
  F_00c4c305();
  return eStack_10;
}

/* ref: strtoxl */
ulong F_00c4a943(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4a943u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * PTR32 * param_3 = (char * PTR32 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte * pbVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  byte * pbVar9;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),param_1);
  if (param_3 != (char * PTR32 *)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  bVar8 = *param_2;
  iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar2 + 1;
    if (*(int *)(iVar5 + 0xac) < 2) {
      uVar4 = *((ushort *)GEN_TOP((*(int *)(iVar5 + 200) + (uint)bVar8 * 2))) & 8;
    }
    else {
      uVar4 = F_00c5ce6f((uint)bVar8,8,(undefined *)((byte *)(gen_frame + 0x0)));
      iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    }
    if (uVar4 == 0) break;
    bVar8 = *pbVar9;
    pbVar2 = pbVar9;
  }
  if (bVar8 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00c4a9f4: ;
    bVar8 = *pbVar9;
    pbVar9 = pbVar2 + 2;
  }
  else if (bVar8 == 0x2b) goto LAB_00c4a9f4;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char * PTR32 *)0x0) {
      *param_3 = param_2;
    }
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar8 != 0x30) {
      param_4 = 10;
      goto LAB_00c4aa5c;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_00c4aa5c;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar8 != 0x30)) goto LAB_00c4aa5c;
  if ((*pbVar9 == 0x78) || (*pbVar9 == 0x58)) {
    bVar8 = pbVar9[1];
    pbVar9 = pbVar9 + 2;
  }
LAB_00c4aa5c: ;
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  (*(uint *)(gen_frame + 0x14)) = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  do {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar5 + 200) + (uint)bVar8 * 2)));
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_00c4aabb: ;
        pbVar9 = pbVar9 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char * PTR32 *)0x0) {
            pbVar9 = (byte *)param_2;
          }
          (*(uint *)(gen_frame + 0x18)) = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < (*(uint *)(gen_frame + 0x18)))) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < (*(uint *)(gen_frame + 0x18)))))))))) {
          piVar3 = F_00c51f85();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            (*(uint *)(gen_frame + 0x18)) = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
          }
        }
        if (param_3 != (char * PTR32 *)0x0) {
          *param_3 = (char *)pbVar9;
        }
        if ((param_5 & 2U) != 0) {
          (*(uint *)(gen_frame + 0x18)) = -(*(uint *)(gen_frame + 0x18));
        }
        if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
          return (*(uint *)(gen_frame + 0x18));
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        return (*(uint *)(gen_frame + 0x18));
      }
      iVar7 = (int)(char)bVar8;
      if ((byte)(bVar8 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar8 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_00c4aabb;
    if (((*(uint *)(gen_frame + 0x18)) < uVar4) || (((*(uint *)(gen_frame + 0x18)) == uVar4 && (uVar6 <= (*(uint *)(gen_frame + 0x14)))))) {
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char * PTR32 *)0x0) goto LAB_00c4aabb;
    }
    bVar8 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while( true );
}

/* ref: _strtol */
long F_00c4ab6e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4ab6eu, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulong uVar1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  uVar1 = F_00c4a943((undefined *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

/* ref: __strtol_l */
long F_00c4ab99(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4ab99u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulong uVar1;
  
  uVar1 = F_00c4a943(_Locale,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

/* ref: _strtoul */
ulong F_00c4abb6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4abb6u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulong uVar1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  uVar1 = F_00c4a943((undefined *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}

/* ref: __strtoul_l */
ulong F_00c4abe2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4abe2u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulong uVar1;
  
  uVar1 = F_00c4a943(_Locale,_Str,_EndPtr,_Radix,1);
  return uVar1;
}

/* ref: __atof_l */
double F_00c4abff(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4abffu, gen_a0, gen_a1, 0u, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  double dVar1;
  int * piVar2;
  uint uVar3;
  undefined * p_Var4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),_Locale);
  if (_String == (char *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xac))) < 2) {
        uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 200))) + (uint)(byte)*_String * 2))) & 8;
      }
      else {
        uVar3 = F_00c5ce6f((uint)(byte)*_String,8,(undefined *)((byte *)(gen_frame + 0x0)));
      }
      if (uVar3 == 0) break;
      _String = _String + 1;
    }
    p_Var4 = F_00c635e3(((undefined *)(gen_frame + 0x10)),_String,(undefined *)((byte *)(gen_frame + 0x0)));
    dVar1 = (*(double *)(((char *)(p_Var4) + 16)));
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return dVar1;
}

/* ref: _atof */
double F_00c4acaa(unsigned int gen_a0)
{
  GEN_ENTER(0xc4acaau, gen_a0, 0u, 0u, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  double dVar1;
  
  dVar1 = F_00c4abff(_String,(undefined *)0x0);
  return dVar1;
}

/* ref: ___strgtold12 */
uint F_00c4acbd(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc4acbdu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * pld12 = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;
  char * str = (char *)(uintptr_t)gen_a2;
  int mult12 = (int)gen_a3;
  int scale = (int)gen_a4;
  int decpt = (int)gen_a5;
  int implicit_E = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  uVar1 = F_00c63c8d(pld12,p_end_ptr,str,mult12,scale,decpt,implicit_E,((byte *)(gen_frame + 0xc)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: FID_conflict:___WSTRINGTOLD */
uint F_00c4acff(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4acffu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * pld = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;
  char * str = (char *)(uintptr_t)gen_a2;
  int mult12 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  uVar1 = F_00c64369(pld,p_end_ptr,str,mult12,(undefined *)((byte *)(gen_frame + 0xc)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: strtoxq */
ulonglong F_00c4ad38(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4ad38u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * PTR32 * param_3 = (char * PTR32 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte * pbVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte * pbVar9;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),param_1);
  if (param_3 != (char * PTR32 *)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar5 = F_00c51f85();
    *piVar5 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
    goto LAB_00c4afd2;
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
  (*(ulonglong *)(gen_frame + 0x28)) = 0;
  (*(byte *)(gen_frame + 0x3b)) = *param_2;
  iVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  pbVar4 = (byte *)param_2;
  while( true ) {
    pbVar9 = pbVar4 + 1;
    if (*(int *)(iVar8 + 0xac) < 2) {
      uVar6 = *((ushort *)GEN_TOP((*(int *)(iVar8 + 200) + (uint)(*(byte *)(gen_frame + 0x3b)) * 2))) & 8;
    }
    else {
      uVar6 = F_00c5ce6f((uint)(*(byte *)(gen_frame + 0x3b)),8,(undefined *)((byte *)(gen_frame + 0x0)));
      iVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    }
    if (uVar6 == 0) break;
    (*(byte *)(gen_frame + 0x3b)) = *pbVar9;
    pbVar4 = pbVar9;
  }
  (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar9;
  if ((*(byte *)(gen_frame + 0x3b)) == 0x2d) {
    param_5 = param_5 | 2;
LAB_00c4adfa: ;
    (*(byte *)(gen_frame + 0x3b)) = *pbVar9;
    pbVar9 = pbVar4 + 2;
    (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar9;
  }
  else if ((*(byte *)(gen_frame + 0x3b)) == 0x2b) goto LAB_00c4adfa;
  (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar9;
  if (param_4 == 0) {
    if ((*(byte *)(gen_frame + 0x3b)) != 0x30) {
      param_4 = 10;
      goto LAB_00c4ae51;
    }
    if ((*pbVar9 != 0x78) && (*pbVar9 != 0x58)) {
      param_4 = 8;
      goto LAB_00c4ae51;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && ((*(byte *)(gen_frame + 0x3b)) == 0x30)) && ((*pbVar9 == 0x78 || (*pbVar9 == 0x58)))) {
    (*(byte *)(gen_frame + 0x3b)) = pbVar9[1];
    (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar9 + 2;
  }
LAB_00c4ae51: ;
  (*(int *)(gen_frame + 0x14)) = param_4 >> 0x1f;
  uVar2 = 0xffffffffffffffff / (ulonglong)(longlong)param_4;
  uVar3 = 0xffffffffffffffff % (ulonglong)(longlong)param_4;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
  uVar3 = (*(ulonglong *)(gen_frame + 0x18));
  (*(ulonglong *)(gen_frame + 0x20)) = uVar2;
  uVar2 = (*(ulonglong *)(gen_frame + 0x20));
  do {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar8 + 200) + (uint)(*(byte *)(gen_frame + 0x3b)) * 2)));
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) break;
      iVar7 = (int)(char)(*(byte *)(gen_frame + 0x3b));
      if ((byte)((*(byte *)(gen_frame + 0x3b)) + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)(*(byte *)(gen_frame + 0x3b)) - 0x30;
    }
    if ((uint)param_4 <= uVar6) break;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)(uVar2 >> 0x20);
    if ((((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) < (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4))) ||
        (((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (uint)uVar2, (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) &&
         ((uint)(*(ulonglong *)(gen_frame + 0x28)) < (uint)(*(ulonglong *)(gen_frame + 0x20)))))) ||
       ((uVar2 == (*(ulonglong *)(gen_frame + 0x28)) &&
        (((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (int)(uVar3 >> 0x20), (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) != 0 ||
         ((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (uint)uVar3, uVar6 <= (uint)(*(ulonglong *)(gen_frame + 0x18)))))))) {
      (*(ulonglong *)(gen_frame + 0x28)) = (longlong)param_4 * (*(ulonglong *)(gen_frame + 0x28)) + (ulonglong)uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char * PTR32 *)0x0) break;
    }
    (*(byte *)(gen_frame + 0x3b)) = *(*(byte * PTR32 *)(gen_frame + 0x34));
    (*(byte * PTR32 *)(gen_frame + 0x34)) = (*(byte * PTR32 *)(gen_frame + 0x34)) + 1;
  } while( true );
  (*(byte * PTR32 *)(gen_frame + 0x34)) = (*(byte * PTR32 *)(gen_frame + 0x34)) + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char * PTR32 *)0x0) {
      (*(byte * PTR32 *)(gen_frame + 0x34)) = (byte *)param_2;
    }
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x28)) = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 && (0x8000000000000000 < (*(ulonglong *)(gen_frame + 0x28)))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffeffffffff < (*(ulonglong *)(gen_frame + 0x28)) && (0x7fffffffffffffff < (*(ulonglong *)(gen_frame + 0x28)))))))))))) {
    (*(ulonglong *)(gen_frame + 0x18)) = uVar3;
    (*(ulonglong *)(gen_frame + 0x20)) = uVar2;
    piVar5 = F_00c51f85();
    *piVar5 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0xffffffff;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0x7fffffff;
        (*(ulonglong *)(gen_frame + 0x28)) = 0x7fffffffffffffff;
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0x80000000;
        (*(ulonglong *)(gen_frame + 0x28)) = 0x8000000000000000;
      }
    }
    else {
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0xffffffff;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0xffffffff;
      (*(ulonglong *)(gen_frame + 0x28)) = 0xffffffffffffffff;
    }
  }
  if (param_3 != (char * PTR32 *)0x0) {
    *param_3 = (char *)(*(byte * PTR32 *)(gen_frame + 0x34));
  }
  if ((param_5 & 2U) != 0) {
    iVar8 = -(uint)(*(ulonglong *)(gen_frame + 0x28));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = -((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) + ((uint)(*(ulonglong *)(gen_frame + 0x28)) != 0));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = iVar8;
    (*(ulonglong *)(gen_frame + 0x28)) = CONCAT44((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),iVar8);
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
LAB_00c4afd2: ;
  return CONCAT44((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)),(uint)(*(ulonglong *)(gen_frame + 0x28)));
}

/* ref: __strtoi64 */
longlong F_00c4afd5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4afd5u, gen_a0, gen_a1, gen_a2, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulonglong _Var1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  _Var1 = F_00c4ad38((undefined *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}

/* ref: __strtoi64_l */
longlong F_00c4b000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b000u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulonglong _Var1;
  
  _Var1 = F_00c4ad38(_Locale,_String,_EndPtr,_Radix,0);
  return _Var1;
}

/* ref: __strtoui64 */
ulonglong F_00c4b01d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b01du, gen_a0, gen_a1, gen_a2, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulonglong _Var1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  _Var1 = F_00c4ad38((undefined *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}

/* ref: __strtoui64_l */
ulonglong F_00c4b049(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b049u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulonglong _Var1;
  
  _Var1 = F_00c4ad38(_Locale,_String,_EndPtr,_Radix,1);
  return _Var1;
}

/* ref: wcsncnt */
uint F_00c4b066(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4b066u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  wchar_t * pwVar1;
  uint uVar2;
  
  pwVar1 = param_1;
  uVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*pwVar1 == L'\0') break;
      pwVar1 = pwVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if ((uVar2 != 0) && (*pwVar1 == L'\0')) {
      return ((int)pwVar1 - (int)((int)(uintptr_t)param_1) >> 1) + 1;
    }
  }
  return param_2;
}

/* ref: __wcstombs_l_helper */
uint F_00c4b098(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b098u, gen_a0, gen_a1, gen_a2, gen_a3);
  LPSTR param_1 = (LPSTR)gen_a0;
  WCHAR * param_2 = (WCHAR *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  LPCWSTR pWVar3;
  DWORD DVar4;
  WCHAR WVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(BOOL *)(gen_frame + 0x1c)) = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    (*(uint *)(gen_frame + 0x8)) = 0;
    goto LAB_00c4b2f0;
  }
  if (param_2 == (LPCWSTR)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
LAB_00c4b2ed: ;
    (*(uint *)(gen_frame + 0x8)) = 0xffffffff;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_4);
    if (param_1 == (LPSTR)0x0) {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) != 0) {
        (*(uint *)(gen_frame + 0x8)) = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,-1,(LPSTR)0x0,0,
                                       (LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
        if ((*(uint *)(gen_frame + 0x8)) != 0) {
LAB_00c4b1c4: ;
          if ((*(BOOL *)(gen_frame + 0x1c)) == 0) {
LAB_00c4b1cd: ;
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
            goto LAB_00c4b12d;
          }
        }
        goto LAB_00c4b2d6;
      }
      (*(uint *)(gen_frame + 0x8)) = 0;
      WVar5 = *param_2;
      while (WVar5 != L'\0') {
        if (0xff < (ushort)WVar5) goto LAB_00c4b2d6;
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        param_2 = param_2 + 1;
        WVar5 = *param_2;
      }
    }
    else {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) != 0) {
        if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) == 1) {
          pWVar3 = param_2;
          uVar6 = param_3;
          if (param_3 != 0) {
            do {
              if (*pWVar3 == L'\0') break;
              pWVar3 = pWVar3 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            if ((uVar6 != 0) && (*pWVar3 == L'\0')) {
              param_3 = ((int)pWVar3 - (int)((int)(uintptr_t)param_2) >> 1) + 1;
            }
          }
          (*(uint *)(gen_frame + 0x8)) = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,param_3,param_1,
                                         param_3,(LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
          if (((*(uint *)(gen_frame + 0x8)) != 0) && ((*(BOOL *)(gen_frame + 0x1c)) == 0)) {
            if (param_1[(*(uint *)(gen_frame + 0x8)) - 1] == '\0') goto LAB_00c4b1cd;
            goto LAB_00c4b12d;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x8)) = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,-1,param_1,param_3,
                                         (LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
          if ((*(uint *)(gen_frame + 0x8)) != 0) goto LAB_00c4b1c4;
          if (((*(BOOL *)(gen_frame + 0x1c)) == 0) && (DVar4 = gen_imp_GetLastError(), DVar4 == 0x7a)) {
            (*(uint *)(gen_frame + 0x8)) = 0;
            if (param_3 != 0) {
              do {
                uVar6 = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,1,((CHAR *)(gen_frame + 0x20)),
                                            *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))),(LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
                if ((((uVar6 == 0) || ((*(BOOL *)(gen_frame + 0x1c)) != 0)) || ((int)uVar6 < 0)) || (5 < uVar6))
                goto LAB_00c4b2d6;
                if (param_3 < uVar6 + (*(uint *)(gen_frame + 0x8))) goto LAB_00c4b12d;
                (*(int *)(gen_frame + 0x0)) = 0;
                if (0 < (int)uVar6) {
                  do {
                    cVar1 = ((CHAR *)(gen_frame + 0x20))[(*(int *)(gen_frame + 0x0))];
                    param_1[(*(uint *)(gen_frame + 0x8))] = cVar1;
                    if (cVar1 == '\0') goto LAB_00c4b12d;
                    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
                    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
                  } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
                }
                param_2 = param_2 + 1;
              } while ((*(uint *)(gen_frame + 0x8)) < param_3);
            }
            if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
              *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
            }
            goto LAB_00c4b2f0;
          }
        }
LAB_00c4b2d6: ;
        piVar2 = F_00c51f85();
        *piVar2 = 0x2a;
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c4b2ed;
      }
      (*(uint *)(gen_frame + 0x8)) = 0;
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*param_2) goto LAB_00c4b2d6;
          param_1[(*(uint *)(gen_frame + 0x8))] = (CHAR)*param_2;
          WVar5 = *param_2;
          param_2 = param_2 + 1;
        } while ((WVar5 != L'\0') && ((*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1, (*(uint *)(gen_frame + 0x8)) < param_3));
      }
    }
LAB_00c4b12d: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c4b2f0: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00c4b2ff */
uint F_00c4b2ff(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b2ffu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c4b098(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: _wcstombs */
gen_size32 F_00c4b30a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b30au, gen_a0, gen_a1, gen_a2, 0u);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  wchar_t * _Source = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4b098(_Dest,_Source,_MaxCount,0);
  return uVar1;
}

/* ref: __wcstombs_s_l */
int F_00c4b324(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc4b324u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * _PtNumOfCharConverted = (gen_size32 *)(uintptr_t)gen_a0;
  char * _Dst = (char *)(uintptr_t)gen_a1;
  gen_size32 _DstSizeInBytes = (gen_size32)gen_a2;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a3;
  gen_size32 _MaxCountInBytes = (gen_size32)gen_a4;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a5;
  gen_size32 sVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (_Dst == (char *)0x0) {
    if (_DstSizeInBytes == 0) goto LAB_00c4b340;
  }
  else if (_DstSizeInBytes != 0) {
LAB_00c4b340: ;
    if (_Dst != (char *)0x0) {
      *_Dst = '\0';
    }
    if (_PtNumOfCharConverted != (gen_size32 *)0x0) {
      *_PtNumOfCharConverted = 0;
    }
    sVar1 = _MaxCountInBytes;
    if (_DstSizeInBytes < _MaxCountInBytes) {
      sVar1 = _DstSizeInBytes;
    }
    if (sVar1 < 0x80000000) {
      uVar2 = F_00c4b098(_Dst,_Src,sVar1,_Locale);
      if (uVar2 == 0xffffffff) {
        if (_Dst != (char *)0x0) {
          *_Dst = '\0';
        }
        piVar3 = F_00c51f85();
        return *piVar3;
      }
      uVar2 = uVar2 + 1;
      if (_Dst != (char *)0x0) {
        if (_DstSizeInBytes < uVar2) {
          if ((_MaxCountInBytes != 0xffffffff) && (*_Dst = '\0', _DstSizeInBytes <= uVar2)) {
            piVar3 = F_00c51f85();
            iVar4 = 0x22;
            goto LAB_00c4b38e;
          }
          local_8 = 0x50;
          uVar2 = _DstSizeInBytes;
        }
        _Dst[uVar2 - 1] = '\0';
      }
      if (_PtNumOfCharConverted == (gen_size32 *)0x0) {
        return local_8;
      }
      *_PtNumOfCharConverted = uVar2;
      return local_8;
    }
  }
  piVar3 = F_00c51f85();
  iVar4 = 0x16;
LAB_00c4b38e: ;
  *piVar3 = iVar4;
  F_00c4c305();
  return iVar4;
}

/* ref: _wcstombs_s */
int F_00c4b3d6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4b3d6u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * _PtNumOfCharConverted = (gen_size32 *)(uintptr_t)gen_a0;
  char * _Dst = (char *)(uintptr_t)gen_a1;
  gen_size32 _DstSizeInBytes = (gen_size32)gen_a2;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a3;
  gen_size32 _MaxCountInBytes = (gen_size32)gen_a4;
  int eVar1;
  
  eVar1 = F_00c4b324(_PtNumOfCharConverted,_Dst,_DstSizeInBytes,_Src,_MaxCountInBytes,
                         (undefined *)0x0);
  return eVar1;
}

/* ref: __getenv_helper_nolock */
char * F_00c4b3f6(unsigned int gen_a0)
{
  GEN_ENTER(0xc4b3f6u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int iVar1;
  gen_size32 _MaxCount;
  gen_size32 sVar2;
  int * piVar3;
  
  if (((REFG(int, 0x15e52d4) != 0) &&
      ((REFG(undefined4, 0x15d6840) != (int *)0x0 ||
       (((REFG(int, 0x15d6848) != 0 && (iVar1 = F_00c6455d(), iVar1 == 0)) &&
        (REFG(undefined4, 0x15d6840) != (int *)0x0)))))) && (piVar3 = REFG(undefined4, 0x15d6840), param_1 != (char *)0x0)) {
    _MaxCount = F_00c552f0(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = F_00c552f0((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = F_00c64543((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}

/* ref: FUN_00c4b47d */
undefined4 F_00c4b47d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b47du, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  int * piVar1;
  char * _Str;
  gen_size32 sVar2;
  int eVar3;
  
  if (in_eax != (uint *)0x0) {
    *in_eax = 0;
    if (param_2 == (undefined1 *)0x0) {
      if (param_3 == 0) goto LAB_00c4b4b4;
    }
    else if (param_3 != 0) {
LAB_00c4b4b4: ;
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      _Str = F_00c4b3f6(param_4);
      if (_Str != (char *)0x0) {
        sVar2 = F_00c552f0(_Str);
        *in_eax = sVar2 + 1;
        if (param_3 != 0) {
          if (param_3 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = F_00c49908(param_2,param_3,_Str);
          if (eVar3 != 0) {
                    
            F_00c4c299(_Str,0,0,0,0,0);
          }
        }
      }
      return 0;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: FUN_00c4b508 */
uint F_00c4b508(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b508u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  gen_size32 * param_2 = (gen_size32 *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int * piVar1;
  char * _Str;
  gen_size32 sVar2;
  undefined * pvVar3;
  uint * puVar4;
  int eVar5;
  
  if (in_eax != (undefined4 *)0x0) {
    *in_eax = 0;
    if (param_2 != (gen_size32 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (char *)0x0) {
      _Str = F_00c4b3f6(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = F_00c552f0(_Str);
        sVar2 = sVar2 + 1;
        pvVar3 = F_00c645f4(sVar2,1);
        *in_eax = pvVar3;
        if (pvVar3 == (undefined *)0x0) {
          piVar1 = F_00c51f85();
          *piVar1 = 0xc;
          puVar4 = (uint *)F_00c51f85();
          return *puVar4;
        }
        eVar5 = F_00c49908(pvVar3,sVar2,_Str);
        if (eVar5 != 0) {
                    
          F_00c4c299(0,0,0,0,0,0);
        }
        if (param_2 != (gen_size32 *)0x0) {
          *param_2 = sVar2;
        }
      }
      return 0;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: _getenv */
char * F_00c4b5a4(unsigned int gen_a0)
{
  GEN_ENTER(0xc4b5a4u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int * piVar1;
  gen_size32 sVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5f98);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4b5b0;
  if (((*(char * PTR32 *)&gen_args[0]) != (char *)0x0) && (sVar2 = F_00c64634((*(char * PTR32 *)&gen_args[0]),0x7fff), sVar2 < 0x7fff)) {
    F_00c5aa4f(7);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    (*(char * PTR32 *)(gen_frame + 0x0)) = F_00c4b3f6((*(char * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c4b615();
    return (*(char * PTR32 *)(gen_frame + 0x0));
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return (char *)0x0;
}

/* ref: FUN_00c4b615 */
uint F_00c4b615(void)
{
  GEN_ENTER(0xc4b615u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: _getenv_s */
int F_00c4b61e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b61eu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  bool bVar1;
  gen_size32 * in_edi;
  int * piVar2;
  char * _Str;
  gen_size32 sVar3;
  int eVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5fb8);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4b62a;
  F_00c5aa4f(7);
  in_edi = (*(gen_size32 * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if ((*(gen_size32 * PTR32 *)&gen_args[0]) != (gen_size32 *)0x0) {
    *(*(gen_size32 * PTR32 *)&gen_args[0]) = 0;
    if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) {
LAB_00c4b66b: ;
      if ((*(gen_size32 *)&gen_args[2]) == 0) goto LAB_00c4b670;
LAB_00c4b675: ;
      bVar1 = false;
    }
    else {
      if ((*(gen_size32 *)&gen_args[2]) == 0) {
        if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) goto LAB_00c4b66b;
        goto LAB_00c4b675;
      }
LAB_00c4b670: ;
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
        *(*(char * PTR32 *)&gen_args[1]) = '\0';
      }
      _Str = F_00c4b3f6((*(char * PTR32 *)&gen_args[3]));
      if (_Str != (char *)0x0) {
        sVar3 = F_00c552f0(_Str);
        *in_edi = sVar3 + 1;
        if ((*(gen_size32 *)&gen_args[2]) != 0) {
          if ((*(gen_size32 *)&gen_args[2]) < sVar3 + 1) {
            (*(int *)(gen_frame + 0x0)) = 0x22;
            goto LAB_00c4b6c3;
          }
          eVar4 = F_00c49908((*(char * PTR32 *)&gen_args[1]),(*(gen_size32 *)&gen_args[2]),_Str);
          if (eVar4 != 0) {
                    
            F_00c4c299(in_edi,0,0,0,0,0);
          }
        }
      }
      (*(int *)(gen_frame + 0x0)) = 0;
      goto LAB_00c4b6c3;
    }
  }
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
  F_00c4c305();
  (*(int *)(gen_frame + 0x0)) = 0x16;
LAB_00c4b6c3: ;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c4b6e2();
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c4b6e2 */
uint F_00c4b6e2(void)
{
  GEN_ENTER(0xc4b6e2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __dupenv_s */
int F_00c4b6eb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b6ebu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * PTR32 * ppcVar1;
  int * piVar2;
  char * _Str;
  gen_size32 sVar3;
  char * pcVar4;
  int eVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5fd8);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4b6f7;
  F_00c5aa4f(7);
  ppcVar1 = (*(char * PTR32 * PTR32 *)&gen_args[0]);
  iVar6 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if ((*(char * PTR32 * PTR32 *)&gen_args[0]) == (char * PTR32 *)0x0) {
LAB_00c4b712: ;
    piVar2 = F_00c51f85();
    iVar6 = 0x16;
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    *(*(char * PTR32 * PTR32 *)&gen_args[0]) = (char *)0x0;
    if ((*(gen_size32 * PTR32 *)&gen_args[1]) != (gen_size32 *)0x0) {
      *(*(gen_size32 * PTR32 *)&gen_args[1]) = 0;
    }
    if ((*(char * PTR32 *)&gen_args[2]) == (char *)0x0) goto LAB_00c4b712;
    _Str = F_00c4b3f6((*(char * PTR32 *)&gen_args[2]));
    if (_Str != (char *)0x0) {
      sVar3 = F_00c552f0(_Str);
      sVar3 = sVar3 + 1;
      pcVar4 = F_00c645f4(sVar3,1);
      *ppcVar1 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        piVar2 = F_00c51f85();
        *piVar2 = 0xc;
        piVar2 = F_00c51f85();
        (*(int *)(gen_frame + 0x0)) = *piVar2;
      }
      else {
        eVar5 = F_00c49908(pcVar4,sVar3,_Str);
        if (eVar5 != 0) {
                    
          F_00c4c299(0,0,0,0,0,0);
        }
        if ((*(gen_size32 * PTR32 *)&gen_args[1]) != (gen_size32 *)0x0) {
          *(*(gen_size32 * PTR32 *)&gen_args[1]) = sVar3;
        }
        (*(int *)(gen_frame + 0x0)) = 0;
      }
      goto LAB_00c4b79a;
    }
  }
  (*(int *)(gen_frame + 0x0)) = iVar6;
LAB_00c4b79a: ;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c4b7b9();
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c4b7b9 */
uint F_00c4b7b9(void)
{
  GEN_ENTER(0xc4b7b9u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __time64 */
__time64_t F_00c4b7c2(unsigned int gen_a0)
{
  GEN_ENTER(0xc4b7c2u, gen_a0, 0u, 0u, 0u);
  __time64_t * _Time = (__time64_t *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  gen_imp_GetSystemTimeAsFileTime(&(*(_FILETIME *)(gen_frame + 0x4)));
  uVar1 = CONCAT44((*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime + 0xfe624e21 + (uint)(0xd53e7fff < (*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime),
                   (*(_FILETIME *)(gen_frame + 0x4)).dwLowDateTime + 0x2ac18000) / 10000000;
  if (0x793406fff < uVar1) {
    uVar1 = 0xffffffffffffffff;
  }
  if (_Time != (__time64_t *)0x0) {
    *_Time = uVar1;
  }
  return uVar1;
}

/* ref: _strncmp */
int F_00c4b813(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b813u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte * pbVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (_MaxCount != 0) {
    if ((3 < _MaxCount) && (pbVar1 = (byte *)_Str1, pbVar3 = (byte *)_Str2, _MaxCount != 4)) {
      do {
        _Str1 = (char *)(pbVar1 + 4);
        _Str2 = (char *)(pbVar3 + 4);
        if ((*pbVar1 == 0) || (*pbVar1 != *pbVar3)) {
          uVar2 = (uint)*pbVar1;
          uVar4 = (uint)*pbVar3;
          goto LAB_00c4b8cf;
        }
        if ((pbVar1[1] == 0) || (pbVar1[1] != pbVar3[1])) {
          uVar2 = (uint)pbVar1[1];
          uVar4 = (uint)pbVar3[1];
          goto LAB_00c4b8cf;
        }
        if ((pbVar1[2] == 0) || (pbVar1[2] != pbVar3[2])) {
          uVar2 = (uint)pbVar1[2];
          uVar4 = (uint)pbVar3[2];
          goto LAB_00c4b8cf;
        }
        if ((pbVar1[3] == 0) || (pbVar1[3] != pbVar3[3])) {
          uVar2 = (uint)pbVar1[3];
          uVar4 = (uint)pbVar3[3];
          goto LAB_00c4b8cf;
        }
        local_8 = local_8 + 4;
        pbVar1 = (byte *)_Str1;
        pbVar3 = (byte *)_Str2;
      } while (local_8 < _MaxCount - 4);
    }
    for (; local_8 < _MaxCount; local_8 = local_8 + 1) {
      if ((*_Str1 == 0) || (*_Str1 != *_Str2)) {
        uVar2 = (uint)(byte)*_Str1;
        uVar4 = (uint)(byte)*_Str2;
LAB_00c4b8cf: ;
        return uVar2 - uVar4;
      }
      _Str1 = _Str1 + 1;
      _Str2 = _Str2 + 1;
    }
  }
  return 0;
}

/* ref: _wcscat_s */
int F_00c4b8d3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b8d3u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Dst = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t wVar1;
  int * piVar2;
  wchar_t * pwVar3;
  int iVar4;
  int eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    pwVar3 = _Dst;
    if (_Src != (wchar_t *)0x0) {
      do {
        if (*pwVar3 == L'\0') break;
        pwVar3 = pwVar3 + 1;
        _SizeInWords = _SizeInWords - 1;
      } while (_SizeInWords != 0);
      if (_SizeInWords != 0) {
        iVar4 = (int)pwVar3 - (int)_Src;
        do {
          wVar1 = *_Src;
          *(wchar_t *)(iVar4 + (int)_Src) = wVar1;
          _Src = _Src + 1;
          if (wVar1 == L'\0') break;
          _SizeInWords = _SizeInWords - 1;
        } while (_SizeInWords != 0);
        if (_SizeInWords != 0) {
          return 0;
        }
        *_Dst = L'\0';
        piVar2 = F_00c51f85();
        eStack_10 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00c4b8f2;
      }
    }
    *_Dst = L'\0';
  }
  piVar2 = F_00c51f85();
  eStack_10 = 0x16;
  *piVar2 = 0x16;
LAB_00c4b8f2: ;
  F_00c4c305();
  return eStack_10;
}

/* ref: FUN_00c4b948 */
uint F_00c4b948(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4b948u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * _Tm;
  int * _Time;
  int * piVar1;
  int eVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  _Tm = (*(undefined * PTR32 *)&gen_args[0]);
  (*(long *)(gen_frame + 0x4)) = 0;
  (*(long *)(gen_frame + 0x0)) = 0;
  (*(long *)(gen_frame + 0x8)) = 0;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  F_00c48350((*(undefined * PTR32 *)&gen_args[0]),0xff,0x24);
  _Time = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  if (*(*(int * PTR32 *)&gen_args[1]) < 0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    return 0x16;
  }
  F_00c64d65();
  eVar2 = F_00c64fcb(&(*(long *)(gen_frame + 0x4)));
  if (((eVar2 != 0) || (eVar2 = F_00c64ff8(&(*(long *)(gen_frame + 0x0))), eVar2 != 0)) ||
     (eVar2 = F_00c65025(&(*(long *)(gen_frame + 0x8))), eVar2 != 0)) {
                    
    F_00c4c299(0,0,0,0,0,0);
  }
  iVar4 = *_Time;
  if ((iVar4 < 0x3f481) || (0x7ffc0b7e < iVar4)) {
    uVar3 = F_00c64e2d(_Tm,_Time);
    if (uVar3 != 0) {
      return uVar3;
    }
    if (((*(long *)(gen_frame + 0x4)) == 0) || (iVar4 = F_00c64dec(_Tm), iVar4 == 0)) {
      iVar4 = (*(int *)((char *)(_Tm))) - (*(long *)(gen_frame + 0x8));
    }
    else {
      (*(int *)(((char *)(_Tm) + 32))) = 1;
      iVar4 = ((*(int *)((char *)(_Tm))) - (*(long *)(gen_frame + 0x8))) - (*(long *)(gen_frame + 0x0));
    }
    iVar5 = iVar4 % 0x3c;
    (*(int *)((char *)(_Tm))) = iVar5;
    if (iVar5 < 0) {
      (*(int *)((char *)(_Tm))) = iVar5 + 0x3c;
      iVar4 = iVar4 + -0x3c;
    }
    iVar4 = iVar4 / 0x3c + (*(int *)(((char *)(_Tm) + 4)));
    iVar5 = iVar4 % 0x3c;
    (*(int *)(((char *)(_Tm) + 4))) = iVar5;
    if (iVar5 < 0) {
      (*(int *)(((char *)(_Tm) + 4))) = iVar5 + 0x3c;
      iVar4 = iVar4 + -0x3c;
    }
    iVar4 = iVar4 / 0x3c + (*(int *)(((char *)(_Tm) + 8)));
    iVar5 = iVar4 % 0x18;
    (*(int *)(((char *)(_Tm) + 8))) = iVar5;
    if (iVar5 < 0) {
      (*(int *)(((char *)(_Tm) + 8))) = iVar5 + 0x18;
      iVar4 = iVar4 + -0x18;
    }
    iVar4 = iVar4 / 0x18;
    if (iVar4 < 1) {
      if (-1 < iVar4) {
        return 0;
      }
      (*(int *)(((char *)(_Tm) + 12))) = (*(int *)(((char *)(_Tm) + 12))) + iVar4;
      (*(int *)(((char *)(_Tm) + 24))) = ((*(int *)(((char *)(_Tm) + 24))) + 7 + iVar4) % 7;
      if ((*(int *)(((char *)(_Tm) + 12))) < 1) {
        (*(int *)(((char *)(_Tm) + 28))) = (*(int *)(((char *)(_Tm) + 28))) + iVar4 + 0x16d;
        (*(int *)(((char *)(_Tm) + 20))) = (*(int *)(((char *)(_Tm) + 20))) + -1;
        (*(int *)(((char *)(_Tm) + 12))) = (*(int *)(((char *)(_Tm) + 12))) + 0x1f;
        (*(int *)(((char *)(_Tm) + 16))) = 0xb;
        return 0;
      }
    }
    else {
      (*(int *)(((char *)(_Tm) + 12))) = (*(int *)(((char *)(_Tm) + 12))) + iVar4;
      (*(int *)(((char *)(_Tm) + 24))) = ((*(int *)(((char *)(_Tm) + 24))) + iVar4) % 7;
    }
    (*(int *)(((char *)(_Tm) + 28))) = (*(int *)(((char *)(_Tm) + 28))) + iVar4;
    return 0;
  }
  (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)(iVar4 - (*(long *)(gen_frame + 0x8)));
  uVar3 = F_00c64e2d(_Tm,(int *)&(*(undefined * PTR32 *)&gen_args[0]));
  if (uVar3 != 0) {
    return uVar3;
  }
  if ((*(long *)(gen_frame + 0x4)) == 0) {
    return 0;
  }
  iVar4 = F_00c64dec(_Tm);
  if (iVar4 == 0) {
    return 0;
  }
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - ((*(long *)(gen_frame + 0x0))) * 36)));
  uVar3 = F_00c64e2d(_Tm,(int *)&(*(undefined * PTR32 *)&gen_args[0]));
  if (uVar3 == 0) {
    (*(int *)(((char *)(_Tm) + 32))) = 1;
    return 0;
  }
  return uVar3;
}

/* ref: FID_conflict___localtime64_00c4bb4e */
undefined * F_00c4bb4e(unsigned int gen_a0)
{
  GEN_ENTER(0xc4bb4eu, gen_a0, 0u, 0u, 0u);
  int * _Time = (int *)(uintptr_t)gen_a0;
  undefined * ptVar1;
  uint uVar2;
  undefined * ptVar3;
  
  ptVar1 = F_00c64f6d();
  ptVar3 = (undefined *)0x0;
  if (ptVar1 != (undefined *)0x0) {
    uVar2 = F_00c4b948(ptVar1,_Time);
    ptVar3 = ((undefined *)GEN_TOP((~-(uint)(uVar2 != 0) & (uint)ptVar1)));
  }
  return ptVar3;
}

/* ref: __fseek_nolock */
int F_00c4bb75(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4bb75u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  long _Offset = (long)gen_a1;
  int _Origin = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  int iVar3;
  long lVar4;
  
  if (((*(int *)(((char *)(_File) + 12))) & 0x83U) == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    iVar3 = -1;
  }
  else {
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffffef;
    if (_Origin == 1) {
      lVar4 = F_00c51a3b(_File);
      _Offset = _Offset + lVar4;
      _Origin = 0;
    }
    F_00c50d59(_File);
    uVar1 = (*(int *)(((char *)(_File) + 12)));
    if ((char)uVar1 < '\0') {
      (*(int *)(((char *)(_File) + 12))) = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      (*(int *)(((char *)(_File) + 24))) = 0x200;
    }
    iVar3 = F_00c5d07b(_File);
    lVar4 = F_00c65171(iVar3,_Offset,_Origin);
    iVar3 = (lVar4 != -1) - 1;
  }
  return iVar3;
}

/* ref: _fseek */
int F_00c4bbff(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4bbffu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int _Origin_00;
  int * piVar1;
  
  _Origin_00 = (*(int *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5ff8);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4bc0b;
  if (((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) || ((((*(int *)&gen_args[2]) != 0 && ((*(int *)&gen_args[2]) != 1)) && ((*(int *)&gen_args[2]) != 2)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(int *)(gen_frame + 0x0)) = -1;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    (*(int *)(gen_frame + 0x0)) = F_00c4bb75((*(undefined * PTR32 *)&gen_args[0]),(*(long *)&gen_args[1]),_Origin_00);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c4bc71((gen_frame + 0x1c));
  }
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c4bc71 */
uint F_00c4bc71(unsigned int gen_a0)
{
  GEN_ENTER(0xc4bc71u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: __wfsopen */
undefined * F_00c4bc7b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4bc7bu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  wchar_t * _Filename_00;
  wchar_t * _Mode_00;
  int * piVar1;
  
  _Mode_00 = (*(wchar_t * PTR32 *)&gen_args[1]);
  _Filename_00 = (*(wchar_t * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6018);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4bc87;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  if ((((*(wchar_t * PTR32 *)&gen_args[0]) == (wchar_t *)0x0) || ((*(wchar_t * PTR32 *)&gen_args[1]) == (wchar_t *)0x0)) || (*(*(wchar_t * PTR32 *)&gen_args[1]) == L'\0')) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    (*(wchar_t * PTR32 *)&gen_args[0]) = (wchar_t *)F_00c5e47f();
    if ((undefined *)(*(wchar_t * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x18;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      if (*_Filename_00 != L'\0') {
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = F_00c65245(_Filename_00,_Mode_00,(*(int *)&gen_args[2]),(undefined *)(*(wchar_t * PTR32 *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c4bd2f((gen_frame + 0x1c));
        return (*(undefined * PTR32 *)(gen_frame + 0x0));
      }
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c5e5c0(&REFG(undefined4, 0x134ab78),((undefined1 *)(gen_frame + 0xc)),0xfffffffe);
    }
  }
  return (undefined *)0x0;
}

/* ref: FUN_00c4bd2f */
uint F_00c4bd2f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4bd2fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: __wfopen */
undefined * F_00c4bd39(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4bd39u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Filename = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Mode = (wchar_t *)(uintptr_t)gen_a1;
  undefined * pFVar1;
  
  pFVar1 = F_00c4bc7b(_Filename,_Mode,0x40);
  return pFVar1;
}

/* ref: __wfopen_s */
int F_00c4bd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * PTR32 * _File = (undefined * PTR32 *)(uintptr_t)gen_a0;
  wchar_t * _Filename = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * _Mode = (wchar_t *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * pFVar2;
  int iVar3;
  
  if (_File == (undefined * PTR32 *)0x0) {
    piVar1 = F_00c51f85();
    iVar3 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    pFVar2 = F_00c4bc7b(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (undefined *)0x0) {
      piVar1 = F_00c51f85();
      iVar3 = *piVar1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

/* ref: __CIsqrt */
float10 F_00c4bda0(double gen_a0)
{
  GEN_ENTER(0xc4bda0u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 in_st0_00;
  float10 fVar1;
  double dVar2;
  
  dVar2 = (double)in_st0;
  F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),(int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4bdbd(in_st0_00,(int)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c4be5a */
ulonglong F_00c4be5a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4be5au, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  longlong lVar2;
  int * piVar3;
  uint uVar4;
  int eVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined * ptVar11;
  bool bVar12;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(uint *)(gen_frame + 0xc)) = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  if (this == (undefined *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    uVar6 = 0xffffffff;
    uVar9 = 0xffffffff;
    goto LAB_00c4c0fb;
  }
  uVar10 = *(uint *)((int)this + 0x14);
  iVar7 = (int)uVar10 >> 0x1f;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = uVar10;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = iVar7;
  (*(longlong *)(gen_frame + 0x1c)) = (longlong)(int)uVar10;
  if ((iVar7 + -1 + (uint)(0x44 < uVar10) == 0) && (uVar10 - 0x45 < 0x409)) {
    iVar8 = *(int *)((int)this + 0x10);
    if ((iVar8 < 0) || (0xb < iVar8)) {
      uVar4 = iVar8 / 0xc;
      iVar8 = iVar8 % 0xc;
      iVar1 = uVar10 + uVar4;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = iVar1;
      *(int *)((int)this + 0x10) = iVar8;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = iVar7 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar10,uVar4);
      (*(longlong *)(gen_frame + 0x1c)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)),iVar1);
      if (iVar8 < 0) {
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = iVar1 + -1;
        *(int *)((int)this + 0x10) = iVar8 + 0xc;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) + -1 + (uint)(iVar1 != 0);
        (*(longlong *)(gen_frame + 0x1c)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)),iVar1 + -1);
      }
      if (((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) + -1 + (uint)(0x44 < (uint)(*(longlong *)(gen_frame + 0x1c))) != 0) ||
         (0x408 < (uint)(*(longlong *)(gen_frame + 0x1c)) - 0x45)) goto LAB_00c4c0ea;
    }
    uVar10 = (&REFG(undefined4, 0x134bc34))[*(int *)((int)this + 0x10)];
    (*(uint *)(gen_frame + 0x10)) = uVar10;
    (*(int *)(gen_frame + 0x14)) = (int)uVar10 >> 0x1f;
    if (((((*(longlong *)(gen_frame + 0x1c)) % 4 == 0) && ((*(longlong *)(gen_frame + 0x1c)) % 100 != 0)) ||
        ((longlong)
         CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) + (uint)(0xfffff893 < (uint)(*(longlong *)(gen_frame + 0x1c))),(uint)(*(longlong *)(gen_frame + 0x1c)) + 0x76c) % 400
         == 0)) && (1 < *(int *)((int)this + 0x10))) {
      (*(uint *)(gen_frame + 0x10)) = uVar10 + 1;
      (*(int *)(gen_frame + 0x14)) = ((int)uVar10 >> 0x1f) + (uint)(0xfffffffe < uVar10);
    }
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = (uint)(*(longlong *)(gen_frame + 0x1c)) - 1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) - (uint)((uint)(*(longlong *)(gen_frame + 0x1c)) == 0);
    lVar2 = (longlong)
            CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) + (uint)(0xfffffed4 < (uint)(*(longlong *)(gen_frame + 0x1c))),(uint)(*(longlong *)(gen_frame + 0x1c)) + 299) /
            400;
    (*(undefined4 *)(gen_frame + 0x18)) = (int)((ulonglong)lVar2 >> 0x20);
    lVar2 = lVar2 + *(int *)((int)this + 0xc);
    (*(undefined4 *)(gen_frame + 0x18)) = (int)((ulonglong)lVar2 >> 0x20);
    lVar2 = lVar2 - (longlong)CONCAT44((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))) / 100;
    (*(undefined4 *)(gen_frame + 0x18)) = (int)((ulonglong)lVar2 >> 0x20);
    lVar2 = lVar2 + (longlong)CONCAT44((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))) / 4;
    (*(undefined4 *)(gen_frame + 0x18)) = (int)((ulonglong)lVar2 >> 0x20);
    lVar2 = lVar2 + (*(longlong *)(gen_frame + 0x1c)) * 0x16d + (longlong)CONCAT44((*(int *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0x10)));
    uVar10 = (uint)lVar2;
    (*(longlong *)(gen_frame + 0x1c)) = (((longlong)
                 CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)(uVar10 < 0x63df),uVar10 - 0x63df)
                 * 0x18 + (longlong)*(int *)((int)this + 8)) * 0x3c +
               (longlong)*(int *)((int)this + 4)) * 0x3c + (longlong)*(int *)this;
    if (param_1 == 0) {
      uVar10 = F_00c52de3(((undefined *)(gen_frame + 0x24)),&(*(longlong *)(gen_frame + 0x1c)));
LAB_00c4c0d4: ;
      if (uVar10 != 0) goto LAB_00c4c0ea;
    }
    else {
      F_00c64d65();
      eVar5 = F_00c64ff8((long *)&(*(uint *)(gen_frame + 0xc)));
      if ((eVar5 != 0) ||
         (eVar5 = F_00c65025((long *)(((byte *)(gen_frame + 0x0)) + 8)), eVar5 != 0)) {
                    
        F_00c4c299(this,0,0,0,0,0);
      }
      bVar12 = CARRY4((uint)(*(longlong *)(gen_frame + 0x1c)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)));
      iVar7 = (uint)(*(longlong *)(gen_frame + 0x1c)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = iVar7;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) + ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) >> 0x1f) + (uint)bVar12;
      (*(longlong *)(gen_frame + 0x1c)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)),iVar7);
      uVar10 = F_00c4f4ca(((undefined *)(gen_frame + 0x24)),&(*(longlong *)(gen_frame + 0x1c)));
      if (uVar10 != 0) goto LAB_00c4c0ea;
      if ((0 < *(int *)((int)this + 0x20)) ||
         ((*(int *)((int)this + 0x20) < 0 && (0 < (*(int *)(((char *)((undefined *)(gen_frame + 0x24)) + 32))))))) {
        bVar12 = CARRY4((uint)(*(longlong *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0xc)));
        iVar7 = (uint)(*(longlong *)(gen_frame + 0x1c)) + (*(uint *)(gen_frame + 0xc));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 0)) = iVar7;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)) + ((int)(*(uint *)(gen_frame + 0xc)) >> 0x1f) + (uint)bVar12;
        (*(longlong *)(gen_frame + 0x1c)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)),iVar7);
        uVar10 = F_00c4f4ca(((undefined *)(gen_frame + 0x24)),&(*(longlong *)(gen_frame + 0x1c)));
        goto LAB_00c4c0d4;
      }
    }
    ptVar11 = ((undefined *)(gen_frame + 0x24));
    for (iVar7 = 9; uVar6 = (uint)(*(longlong *)(gen_frame + 0x1c)), uVar9 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x1c)) + 4)), iVar7 != 0; iVar7 = iVar7 + -1)
    {
      *(int *)this = (*(int *)((char *)(ptVar11)));
      ptVar11 = (undefined *)&(*(int *)(((char *)(ptVar11) + 4)));
      this = (int *)((int)this + 4);
    }
  }
  else {
LAB_00c4c0ea: ;
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    uVar6 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
LAB_00c4c0fb: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return CONCAT44(uVar9,uVar6);
}

/* ref: __mktime64 */
__time64_t F_00c4c109(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c109u, gen_a0, 0u, 0u, 0u);
  undefined * _Tm = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00c4be5a(_Tm,1);
  return uVar1;
}

/* ref: __mkgmtime64 */
__time64_t F_00c4c11b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c11bu, gen_a0, 0u, 0u, 0u);
  undefined * _Tm = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00c4be5a(_Tm,0);
  return uVar1;
}

/* ref: FUN_00c4c12d */
uint F_00c4c12d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c12du, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d6878) = param_1;
  return param_1;
}

/* ref: FUN_00c4c265 */
uint F_00c4c265(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c265u, gen_a0, 0u, 0u, 0u);
  PVOID param_1 = (PVOID)gen_a0;
  PVOID pvVar1;
  
  pvVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d6878));
  REFG(undefined4, 0x15d6878) = gen_imp_EncodePointer(param_1);
  return (uint)pvVar1;
}

/* ref: __invoke_watson */
unsigned int F_00c4c299(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc4c299u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_edi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  HANDLE hProcess;
  UINT uExitCode;
  
  F_00c4c13c(0xc0000417,in_edi,2,0xc0000417,1);
  uExitCode = 0xc0000417;
  hProcess = gen_imp_GetCurrentProcess();
  gen_imp_TerminateProcess(hProcess,uExitCode);
  return 0;
}

/* ref: FUN_00c4c2be */
unsigned int F_00c4c2be(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4c2beu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 unaff_EDI = 0;
  
                    
  F_00c4c299(unaff_EDI,param_1,param_2,param_3,param_4,param_5);
}

/* ref: FUN_00c4c2d8 */
uint F_00c4c2d8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4c2d8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  code * pcVar1;
  uint uVar2;
  undefined4 extraout_ECX = 0;
  undefined4 unaff_EDI = 0;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d6878));
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(extraout_ECX,param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
                    
  F_00c4c299(unaff_EDI,param_1,param_2,param_3,param_4,param_5);
}

/* ref: FUN_00c4c305 */
uint F_00c4c305(void)
{
  GEN_ENTER(0xc4c305u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c4c2d8(0,0,0,0,0);
  return uVar1;
}

/* ref: FUN_00c4c343 */
uint F_00c4c343(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4c343u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c4c2d8(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: __aullshr */
ulonglong F_00c4c350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4c350u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte in_cl = (byte)gen_a1;
  uint in_edx = (uint)gen_a2;
  if (0x3f < in_cl) {
    return 0;
  }
  if (in_cl < 0x20) {
    return CONCAT44(in_edx >> (in_cl & 0x1f),
                    in_eax >> (in_cl & 0x1f) | in_edx << 0x20 - (in_cl & 0x1f));
  }
  return (ulonglong)(in_edx >> (in_cl & 0x1f));
}

/* ref: ___ascii_stricmp */
int F_00c4c36f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c36fu, gen_a0, gen_a1, 0u, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)(byte)*_Str1;
    _Str1 = _Str1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)(byte)*_Str2;
    _Str2 = _Str2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 != 0) && (uVar1 == uVar2));
  return uVar1 - uVar2;
}

/* ref: __stricmp_l */
int F_00c4c3a8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4c3a8u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (_Str1 == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else if (_Str2 == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    iVar2 = 0x7fffffff;
  }
  else {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) == 0) {
      iVar2 = F_00c4c36f(_Str1,_Str2);
    }
    else {
      iVar4 = (int)_Str1 - (int)_Str2;
      do {
        iVar2 = F_00c4ee3a((uint)(byte)_Str2[iVar4],(undefined *)((byte *)(gen_frame + 0xc)));
        iVar3 = F_00c4ee3a((uint)(byte)*_Str2,(undefined *)((byte *)(gen_frame + 0xc)));
        _Str2 = _Str2 + 1;
        if (iVar2 == 0) break;
      } while (iVar2 == iVar3);
      iVar2 = iVar2 - iVar3;
    }
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return iVar2;
}

/* ref: __stricmp */
int F_00c4c468(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c468u, gen_a0, gen_a1, 0u, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  if (REFG(int, 0x15d6874) != 0) {
    iVar2 = F_00c4c3a8(_Str1,_Str2,(undefined *)0x0);
    return iVar2;
  }
  if ((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) {
    iVar2 = F_00c4c36f(_Str1,_Str2);
    return iVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x7fffffff;
}

/* ref: __strnicmp_l */
int F_00c4c4af(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4c4afu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (_MaxCount == 0) {
    iVar2 = 0;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
    if ((_Str1 == (char *)0x0) || (_Str2 == (char *)0x0)) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c4c305();
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
    else if (_MaxCount < 0x80000000) {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) == 0) {
        iVar2 = F_00c655c0(_Str1,_Str2,_MaxCount);
      }
      else {
        iVar4 = (int)_Str1 - (int)_Str2;
        do {
          iVar2 = F_00c4ee3a((uint)(byte)_Str2[iVar4],(undefined *)((byte *)(gen_frame + 0xc)));
          iVar3 = F_00c4ee3a((uint)(byte)*_Str2,(undefined *)((byte *)(gen_frame + 0xc)));
          _Str2 = _Str2 + 1;
          _MaxCount = _MaxCount - 1;
          if ((_MaxCount == 0) || (iVar2 == 0)) break;
        } while (iVar2 == iVar3);
        iVar2 = iVar2 - iVar3;
      }
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
    else {
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c4c305();
      if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
      }
      iVar2 = 0x7fffffff;
    }
  }
  return iVar2;
}

/* ref: __strnicmp */
int F_00c4c591(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4c591u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str1 = (char *)(uintptr_t)gen_a0;
  char * _Str2 = (char *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  int * piVar1;
  int iVar2;
  
  if (REFG(int, 0x15d6874) != 0) {
    iVar2 = F_00c4c4af(_Str1,_Str2,_MaxCount,(undefined *)0x0);
    return iVar2;
  }
  if (((_Str1 != (char *)0x0) && (_Str2 != (char *)0x0)) && (_MaxCount < 0x80000000)) {
    iVar2 = F_00c655c0(_Str1,_Str2,_MaxCount);
    return iVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x7fffffff;
}

/* ref: __aullrem */
ulonglong F_00c4c5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4c5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar4 = param_1;
  uVar9 = param_4;
  uVar10 = param_2;
  uVar3 = param_3;
  if (param_4 == 0) {
    iVar6 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) %
                 (ulonglong)param_3);
    iVar7 = 0;
  }
  else {
    do {
      uVar5 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar8 = uVar10 >> 1;
      uVar4 = (uint)(CONCAT14((uVar10 & 1) != 0,uVar4) >> 1);
      uVar9 = uVar5;
      uVar10 = uVar8;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar8,uVar4) / (ulonglong)uVar3;
    uVar3 = (int)uVar1 * param_4;
    lVar2 = (uVar1 & 0xffffffff) * (ulonglong)param_3;
    uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar4 = (uint)lVar2;
    uVar10 = uVar9 + uVar3;
    if (((CARRY4(uVar9,uVar3)) || (param_2 < uVar10)) || ((param_2 <= uVar10 && (param_1 < uVar4))))
    {
      bVar11 = uVar4 < param_3;
      uVar4 = uVar4 - param_3;
      uVar10 = (uVar10 - param_4) - (uint)bVar11;
    }
    iVar6 = -(uVar4 - param_1);
    iVar7 = -(uint)(uVar4 - param_1 != 0) - ((uVar10 - param_2) - (uint)(uVar4 < param_1));
  }
  return CONCAT44(iVar7,iVar6);
}

/* ref: __allshl */
ulonglong F_00c4c670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4c670u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte in_cl = (byte)gen_a1;
  int in_edx = (int)gen_a2;
  if (0x3f < in_cl) {
    return 0;
  }
  if (in_cl < 0x20) {
    return CONCAT44(in_edx << (in_cl & 0x1f) | in_eax >> 0x20 - (in_cl & 0x1f),
                    in_eax << (in_cl & 0x1f));
  }
  return (ulonglong)(in_eax << (in_cl & 0x1f)) << 0x20;
}

/* ref: _free */
unsigned int F_00c4c68f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c68fu, gen_a0, 0u, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  BOOL BVar1;
  int * piVar2;
  DWORD DVar3;
  int iVar4;
  
  if (_Memory != (undefined *)0x0) {
    BVar1 = gen_imp_HeapFree(REFG(undefined4, 0x15d74c8),0,_Memory);
    if (BVar1 == 0) {
      piVar2 = F_00c51f85();
      DVar3 = gen_imp_GetLastError();
      iVar4 = F_00c51f43(DVar3);
      *piVar2 = iVar4;
    }
  }
  return 0;
}

/* ref: _abort */
unsigned int F_00c4c6c9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c6c9u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5ac08();
  if (uVar1 != 0) {
    F_00c5ae67(0x16);
  }
  if (((byte)REFG(undefined4, 0x134abc0) & 2) != 0) {
    F_00c4c13c(in_esi,in_edi,3,0x40000015,1);
  }
                    
  F_00c47c71(3);
}

/* ref: __set_abort_behavior */
uint F_00c4c6fc(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c6fcu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134abc0);
  REFG(undefined4, 0x134abc0) = ~(*(uint *)&gen_args[1]) & REFG(undefined4, 0x134abc0) | (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
  return uVar1;
}

/* ref: _atol */
long F_00c4c71d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c71du, gen_a0, 0u, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  long lVar1;
  
  lVar1 = F_00c4ab6e(_Str,(char * PTR32 *)0x0,10);
  return lVar1;
}

/* ref: FUN_00c4c733 */
uint F_00c4c733(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c733u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4ab99(param_1,(char * PTR32 *)0x0,10,param_2);
  return uVar1;
}

/* ref: FUN_00c4c74c */
uint F_00c4c74c(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c74cu, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c4c71d(param_1);
  return uVar1;
}

/* ref: FUN_00c4c757 */
uint F_00c4c757(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c757u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4c733(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c4c762 */
ulonglong F_00c4c762(unsigned int gen_a0)
{
  GEN_ENTER(0xc4c762u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00c4afd5(param_1,(char * PTR32 *)0x0,10);
  return uVar1;
}

/* ref: FUN_00c4c778 */
uint F_00c4c778(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4c778u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  longlong lVar1;
  
  lVar1 = F_00c4b000(param_1,(char * PTR32 *)0x0,10,param_2);
  return (uint)lVar1;
}

/* ref: vscan_fn_00c4c791 */
uint F_00c4c791(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4c791u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * in_esi = (char *)(uintptr_t)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  gen_size32 sVar2;
  uint uVar3;
  int iVar4;
  gen_size32 * psVar5;
  
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  psVar5 = &(*(gen_size32 *)(gen_frame + 0x10));
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *psVar5 = 0;
    psVar5 = psVar5 + 1;
  }
  if ((in_esi != (char *)0x0) && (param_3 != 0)) {
    sVar2 = F_00c552f0(in_esi);
    (*(undefined4 *)(gen_frame + 0x18)) = 0x49;
    (*(char * PTR32 *)(gen_frame + 0x14)) = in_esi;
    (*(char * PTR32 *)(gen_frame + 0xc)) = in_esi;
    (*(gen_size32 *)(gen_frame + 0x10)) = 0x7fffffff;
    if (sVar2 < 0x80000000) {
      (*(gen_size32 *)(gen_frame + 0x10)) = sVar2;
    }
    uVar3 = (*param_2)((gen_frame + 0xc),param_3,param_4,param_5);
    return uVar3;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0xffffffff;
}

/* ref: FID_conflict__sscanf_00c4c7ff */
int F_00c4c7ff(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc4c7ffu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Src = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4c791(_Src,((code *)REFP(0xc656fd)),_Format,0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FID_conflict___sscanf_s_l_00c4c821 */
int F_00c4c821(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4c821u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Src = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4c791(_Src,((code *)REFP(0xc656fd)),_Format,_Locale,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FID_conflict__sscanf_00c4c844 */
int F_00c4c844(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc4c844u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Src = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4c791(_Src,((code *)REFP(0xc667cb)),_Format,0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FID_conflict___sscanf_s_l_00c4c866 */
int F_00c4c866(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4c866u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Src = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4c791(_Src,((code *)REFP(0xc667cb)),_Format,_Locale,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c4c8d0 */
float10 F_00c4c8d0(float gen_a0, float gen_a1, float gen_a2, double gen_a3)
{
  GEN_ENTER(0xc4c8d0u, 0u, 0u, 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c678f0(in_xmm2,in_xmm3,in_xmm4,in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4c928(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c4ca20 */
float10 F_00c4ca20(float gen_a0, float gen_a1, float gen_a2, float gen_a3, double gen_a4)
{
  GEN_ENTER(0xc4ca20u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float10 in_st0 = (float10)gen_a4;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c67e50(in_xmm1,in_xmm2,in_xmm3,in_xmm7,in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4ca78(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2));
  return fVar1;
}

/* ref: FUN_00c4ca6f */
unsigned int F_00c4ca6f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4ca6fu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
                    
  F_00c5ede5(&(*(undefined4 *)&gen_args[0]));
}

/* ref: FUN_00c4cde0 */
float10 F_00c4cde0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, double gen_a4)
{
  GEN_ENTER(0xc4cde0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float10 in_st0 = (float10)gen_a4;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c68d00(in_xmm1,in_xmm2,in_xmm3,in_xmm7,in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4ce38(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2));
  return fVar1;
}

/* ref: FUN_00c4ce2f */
unsigned int F_00c4ce2f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4ce2fu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
                    
  F_00c5ede5(&(*(undefined4 *)&gen_args[0]));
}

/* ref: _wcsstr */
wchar_t * F_00c4cec9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4cec9u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _SubStr = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t wVar1;
  wchar_t * pwVar2;
  int iVar3;
  
  if (*_SubStr != L'\0') {
    wVar1 = *_Str;
    if (wVar1 != L'\0') {
      iVar3 = (int)_Str - (int)_SubStr;
      pwVar2 = _SubStr;
joined_r0x00c4cef0: ;
      do {
        if (wVar1 != L'\0') {
          if (*pwVar2 == L'\0') {
            return _Str;
          }
          if (*(wchar_t *)(iVar3 + (int)pwVar2) == *pwVar2) {
            wVar1 = *((wchar_t *)GEN_TOP((iVar3 + (int)(pwVar2 + 1))));
            pwVar2 = pwVar2 + 1;
            goto joined_r0x00c4cef0;
          }
        }
        if (*pwVar2 == L'\0') {
          return _Str;
        }
        _Str = _Str + 1;
        wVar1 = *_Str;
        iVar3 = iVar3 + 2;
        pwVar2 = _SubStr;
      } while (wVar1 != L'\0');
    }
    _Str = (wchar_t *)0x0;
  }
  return _Str;
}

/* ref: vscan_fn_00c4cf29 */
uint F_00c4cf29(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4cf29u, gen_a0, gen_a1, gen_a2, gen_a3);
  wchar_t * in_esi = (wchar_t *)(uintptr_t)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  gen_size32 sVar2;
  uint uVar3;
  int iVar4;
  
  (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = (wchar_t *)0x0;
  piVar1 = &(*(int *)(gen_frame + 0x10));
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  if ((in_esi != (wchar_t *)0x0) && (param_3 != 0)) {
    sVar2 = F_00c68ec8(in_esi);
    (*(undefined4 *)(gen_frame + 0x18)) = 0x49;
    (*(wchar_t * PTR32 *)(gen_frame + 0x14)) = in_esi;
    (*(wchar_t * PTR32 *)(gen_frame + 0xc)) = in_esi;
    if (sVar2 < 0x40000000) {
      (*(int *)(gen_frame + 0x10)) = sVar2 * 2;
    }
    else {
      (*(int *)(gen_frame + 0x10)) = 0x7fffffff;
    }
    uVar3 = (*param_2)((gen_frame + 0xc),param_3,param_4,param_5);
    return uVar3;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0xffffffff;
}

/* ref: FID_conflict__swscanf_00c4cf9d */
int F_00c4cf9d(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc4cf9du, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4cf29(_Src,((code *)REFP(0xc68fc8)),_Format,0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FID_conflict___swscanf_l_00c4cfbf */
int F_00c4cfbf(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4cfbfu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4cf29(_Src,((code *)REFP(0xc68fc8)),_Format,_Locale,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FID_conflict__swscanf_00c4cfe2 */
int F_00c4cfe2(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc4cfe2u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4cf29(_Src,((code *)REFP(0xc6a182)),_Format,0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FID_conflict___swscanf_l_00c4d004 */
int F_00c4d004(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4d004u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4cf29(_Src,((code *)REFP(0xc6a182)),_Format,_Locale,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: _memcpy_s */
int F_00c4d027(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4d027u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Dst = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  undefined * _Src = (undefined *)(uintptr_t)gen_a2;
  gen_size32 _MaxCount = (gen_size32)gen_a3;
  int eVar1;
  int * piVar2;
  
  if (_MaxCount == 0) {
LAB_00c4d034: ;
    eVar1 = 0;
  }
  else {
    if (_Dst == (undefined *)0x0) {
LAB_00c4d03e: ;
      piVar2 = F_00c51f85();
      eVar1 = 0x16;
      *piVar2 = 0x16;
    }
    else {
      if ((_Src != (undefined *)0x0) && (_MaxCount <= _DstSize)) {
        F_00c46aa0(_Dst,_Src,_MaxCount);
        goto LAB_00c4d034;
      }
      F_00c48350(_Dst,0,_DstSize);
      if (_Src == (undefined *)0x0) goto LAB_00c4d03e;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      piVar2 = F_00c51f85();
      eVar1 = 0x22;
      *piVar2 = 0x22;
    }
    F_00c4c305();
  }
  return eVar1;
}

/* ref: FUN_00c4d0e0 */
float10 F_00c4d0e0(float gen_a0, float gen_a1, float gen_a2, double gen_a3)
{
  GEN_ENTER(0xc4d0e0u, 0u, 0u, 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c6b370(in_xmm2,in_xmm3,in_xmm4,in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4d138(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c4d1fa */
float10 F_00c4d1fa(double gen_a0)
{
  GEN_ENTER(0xc4d1fau, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c6b9a0(&REFG(undefined, 0x11230e0),in_st0);
  return fVar1;
}

/* ref: FUN_00c4d24c */
float10 F_00c4d24c(double gen_a0)
{
  GEN_ENTER(0xc4d24cu, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 fVar1;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c6bc20(in_st0);
    return fVar1;
  }
  fVar1 = F_00c6b9de(&REFG(undefined, 0x111ad3a),in_st0);
  return fVar1;
}

/* ref: FUN_00c4d2a0 */
float10 F_00c4d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4d2a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    uVar1 = (*(uint *)&gen_args[1]) >> 0x14;
    lVar6 = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1118a64),
                     *(int *)&REFG(undefined, 0x1118a60) - ((*(uint *)&gen_args[1]) >> 0x14 & *(uint *)&REFG(undefined, 0x1118a90)));
    if ((uVar1 & 0x800) == 0) {
      if (uVar1 < 0x3ff) {
        return (float10)0;
      }
      if (uVar1 < 0x433) {
        return ((float10)GEN_TOD(gen_bits2d(((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> lVar6) << lVar6)));
      }
    }
    else {
      dVar5 = gen_bits2d(((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> lVar6) << lVar6);
      if (uVar1 < 0xbff) {
        return ((float10)GEN_TOD(gen_bits2d((-(ulonglong)(*(double *)&(*(uint *)&gen_args[0]) < *(double *)&REFG(undefined, 0x1118a80)) |
                                   (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1118a80))) &
                                   *(ulonglong *)&REFG(undefined, 0x1118a70))));
      }
      if (uVar1 < 0xc33) {
        return ((float10)GEN_TOD((dVar5 - gen_bits2d(-(ulonglong)(*(double *)&(*(uint *)&gen_args[0]) < dVar5) &
                                            *(ulonglong *)&REFG(undefined, 0x1118a50)))));
      }
    }
    if (GEN_ISNAN(*(double *)&(*(uint *)&gen_args[0]))) {
      F_00c6bf0e(&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]),0x3ed);
    }
    return (float10)*(double *)&(*(uint *)&gen_args[0]);
  }
  uVar1 = F_00c6f59e(REFG(undefined4, 0x134bc70),0xffff);
  uVar3 = (undefined4)((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff0) == 0x7ff0) {
    uVar2 = F_00c6ebcd((int)(ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])),uVar3);
    if (0 < (int)uVar2) {
      if ((int)uVar2 < 3) {
        F_00c6f59e(uVar1,0xffff);
        return (float10)*(double *)&(*(uint *)&gen_args[0]);
      }
      if (uVar2 == 3) {
        fVar4 = F_00c6f323(0xb,*(double *)&(*(uint *)&gen_args[0]),uVar1);
        return fVar4;
      }
    }
    dVar5 = *(double *)&(*(uint *)&gen_args[0]) + REFG(double, 0x1088130);
    uVar7 = 8;
  }
  else {
    fVar4 = F_00c7d6ab(*(double *)&(*(uint *)&gen_args[0]));
    dVar5 = (double)fVar4;
    if (((GEN_ISNAN(*(double *)&(*(uint *)&gen_args[0])) || GEN_ISNAN(dVar5)) !=
         ((GEN_ISNAN(*(double *)&(*(uint *)&gen_args[0])) || GEN_ISNAN(dVar5)) || *(double *)&(*(uint *)&gen_args[0]) == dVar5)) ||
       ((uVar1 & 0x20) != 0)) {
      F_00c6f59e(uVar1,0xffff);
      return (float10)dVar5;
    }
    uVar7 = 0x10;
  }
  fVar4 = F_00c6f3d9(uVar3,uVar7,0xb,*(double *)&(*(uint *)&gen_args[0]),dVar5,uVar1);
  return fVar4;
}

/* ref: FUN_00c4d3da */
float10 F_00c4d3da(double gen_a0)
{
  GEN_ENTER(0xc4d3dau, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c6b9a0(&REFG(undefined, 0x1118aa0),in_st0);
  return fVar1;
}

/* ref: FUN_00c4d440 */
float10 F_00c4d440(float gen_a0, double gen_a1)
{
  GEN_ENTER(0xc4d440u, 0u, 0u, 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float10 in_st0 = (float10)gen_a1;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c6c2c0(in_xmm2,in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4d498(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c4d590 */
float10 F_00c4d590(float gen_a0, float gen_a1, float gen_a2, double gen_a3)
{
  GEN_ENTER(0xc4d590u, 0u, 0u, 0u, 0u);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c6c530(in_xmm3,in_xmm5,in_xmm6,in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4d5e8(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2));
  return fVar1;
}

/* ref: FUN_00c4d5df */
unsigned int F_00c4d5df(unsigned int gen_a0)
{
  GEN_ENTER(0xc4d5dfu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
                    
  F_00c5ede5(&(*(undefined4 *)&gen_args[0]));
}

/* ref: __CxxThrowException@8 */
unsigned int F_00c4d67d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4d67du, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  byte * pbVar3;
  
  puVar2 = &REFG(undefined4, 0x1118af0);
  pbVar3 = ((byte *)(gen_frame + 0xc));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pbVar3 = pbVar3 + 4;
  }
  (*(undefined4 *)(gen_frame + 0x24)) = param_1;
  (*(byte * PTR32 *)(gen_frame + 0x28)) = param_2;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 8) != 0)) {
    (*(ULONG_PTR *)(gen_frame + 0x20)) = 0x1994000;
  }
  gen_imp_RaiseException((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)),&(*(ULONG_PTR *)(gen_frame + 0x20)));
  return 0;
}

/* ref: __endthreadex */
unsigned int F_00c4d6c9(unsigned int gen_a0)
{
  GEN_ENTER(0xc4d6c9u, gen_a0, 0u, 0u, 0u);
  uint _Retval = (uint)gen_a0;
  undefined * _Ptd;
  
  _Ptd = F_00c5b301();
  if (_Ptd != (undefined *)0x0) {
    F_00c5b4c3(_Ptd);
  }
                    
  gen_imp_ExitThread(_Retval);
}

/* ref: __callthreadstartex */
unsigned int F_00c4d6e8(void)
{
  GEN_ENTER(0xc4d6e8u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  uint _Retval;
  undefined4 uStack_c;
  undefined * local_8;
  
  local_8 = &REFG(undefined, 0x12f6038);
  uStack_c = 0xc4d6f4;
  p_Var1 = F_00c5b37a();
  local_8 = (undefined *)0x0;
  _Retval = ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 84))))((*(void * PTR32 *)(((char *)(p_Var1) + 88))));
                    
  F_00c4d6c9(_Retval);
}

/* ref: FUN_00c4d71d */
unsigned int F_00c4d71d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4d71du, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ebp + -0x18);
  *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(in_ebp + -0x1c);
                    
  *(undefined * PTR32 *)(iVar1 + -8) = &REFG(undefined, 0xc4d728);
  F_00c47c71(*(undefined4 *)(iVar1 + -4));
}

/* ref: __threadstartex@4 */
unsigned int F_00c4d729(unsigned int gen_a0)
{
  GEN_ENTER(0xc4d729u, gen_a0, 0u, 0u, 0u);
  DWORD * param_1 = (DWORD *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD * pDVar4;
  
  F_00c5b1bf();
  uVar2 = F_00c5b1b9();
  uVar2 = F_00c5b19f(uVar2);
  if (uVar2 == 0) {
    pDVar4 = param_1;
    uVar2 = F_00c5b1b9();
    uVar2 = F_00c5b1f3(uVar2,pDVar4);
    if (uVar2 == 0) {
      DVar3 = gen_imp_GetLastError();
                    
      gen_imp_ExitThread(DVar3);
    }
    DVar3 = gen_imp_GetCurrentThreadId();
    *param_1 = DVar3;
  }
  else {
    *(DWORD *)(uVar2 + 0x54) = param_1[0x15];
    *(DWORD *)(uVar2 + 0x58) = param_1[0x16];
    *(DWORD *)(uVar2 + 4) = param_1[1];
    F_00c5b394(param_1);
  }
  F_00c4d6e8();
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: __beginthreadex */
uint F_00c4d78e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc4d78eu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  undefined * p_Var1;
  int * piVar2;
  undefined * _Ptd;
  undefined * p_Var3;
  undefined * PTR32 * lpThreadId;
  HANDLE pvVar4;
  DWORD DVar5;
  
  p_Var1 = (*(undefined * PTR32 *)&gen_args[2]);
  DVar5 = 0;
  if ((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else {
    F_00c5b1bf();
    _Ptd = F_00c54c73(1,0x214);
    if (_Ptd != (undefined *)0x0) {
      p_Var3 = F_00c5b37a();
      F_00c5b24d(_Ptd,(*(undefined * PTR32 *)(((char *)(p_Var3) + 108))));
      (*(uint *)(((char *)(_Ptd) + 4))) = 0xffffffff;
      (*(void * PTR32 *)(((char *)(_Ptd) + 88))) = (*(undefined * PTR32 *)&gen_args[3]);
      (*(void * PTR32 *)(((char *)(_Ptd) + 84))) = p_Var1;
      lpThreadId = (undefined * PTR32 *)(*(uint * PTR32 *)&gen_args[5]);
      if ((*(uint * PTR32 *)&gen_args[5]) == (uint *)0x0) {
        lpThreadId = &(*(undefined * PTR32 *)&gen_args[2]);
      }
      pvVar4 = gen_imp_CreateThread((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),((code *)REFP(0xc4d729)),_Ptd,(*(uint *)&gen_args[4]),
                            (LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uint)pvVar4;
      }
      DVar5 = gen_imp_GetLastError();
    }
    F_00c4c68f(_Ptd);
    if (DVar5 != 0) {
      F_00c51fab(DVar5);
    }
  }
  return 0;
}

/* ref: __except_handler4 */
uint F_00c4d860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4d860u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP((*(uint *)(param_2 + 8) ^ REFG(undefined4, 0x134ab78))));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(uint *)(gen_frame + 0x10)) = 1;
  iVar1 = param_2 + 0x10;
  if (*piVar5 != -2) {
    F_00c47745(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  F_00c47745(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  iVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int * PTR32 * PTR32 *)(param_2 + -4) = &(*(int * PTR32 *)(gen_frame + 0x4));
    iVar4 = *(int *)(param_2 + 0xc);
    (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    if (iVar4 == -2) {
      return (*(uint *)(gen_frame + 0x10));
    }
    do {
      (*(int * PTR32 *)(gen_frame + 0xc)) = piVar5 + iVar4 * 3 + 4;
      (*(int *)(gen_frame + 0x14)) = piVar5[iVar4 * 3 + 4];
      if (piVar5[iVar4 * 3 + 5] != 0) {
        uVar2 = F_00c5e6b2(piVar5[iVar4 * 3 + 5],iVar1);
        (*(char *)(gen_frame + 0x1b)) = '\x01';
        if ((int)uVar2 < 0) {
          (*(uint *)(gen_frame + 0x10)) = 0;
          goto LAB_00c4d908;
        }
        if (0 < (int)uVar2) {
          if (((*param_1 == -0x1f928c9d) && ((*(undefined * PTR32 (*)[1])REFP(0x1125c80))[0] != (undefined *)0x0)) &&
             (BVar3 = F_00c5b7a0((GEN_LPANY)(*(undefined * PTR32 (*)[1])REFP(0x1125c80))), BVar3 != 0)) {
            (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1125c80))[0])))(param_1,1);
          }
          F_00c5e6e2(param_2,param_1);
          if (*(int *)(param_2 + 0xc) != iVar4) {
            F_00c5e6fb(param_2,iVar4,iVar1,&REFG(undefined4, 0x134ab78));
          }
          *(int *)(param_2 + 0xc) = (*(int *)(gen_frame + 0x14));
          if (*piVar5 != -2) {
            F_00c47745(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          F_00c47745(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          F_00c5e6c9((*(int * PTR32 *)(gen_frame + 0xc))[2],iVar1);
          goto LAB_00c4d9cf;
        }
      }
      iVar4 = (*(int *)(gen_frame + 0x14));
    } while ((*(int *)(gen_frame + 0x14)) != -2);
    if ((*(char *)(gen_frame + 0x1b)) == '\0') {
      return (*(uint *)(gen_frame + 0x10));
    }
  }
  else {
LAB_00c4d9cf: ;
    if (*(int *)(iVar4 + 0xc) == -2) {
      return (*(uint *)(gen_frame + 0x10));
    }
    F_00c5e6fb(iVar4,0xfffffffe,iVar1,&REFG(undefined4, 0x134ab78));
  }
LAB_00c4d908: ;
  if (*piVar5 != -2) {
    F_00c47745(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  F_00c47745(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: _strncpy_s */
int F_00c4d9ef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4d9efu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  char cVar1;
  int * piVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  int eStack_14;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_00c4da15: ;
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != (char *)0x0) {
          iVar5 = param_2;
          if (param_4 == -1) {
            iVar4 = (int)param_1 - (int)param_3;
            do {
              cVar1 = *param_3;
              param_3[iVar4] = cVar1;
              param_3 = param_3 + 1;
              if (cVar1 == '\0') break;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          else {
            pcVar3 = param_1;
            do {
              cVar1 = pcVar3[(int)param_3 - (int)param_1];
              *pcVar3 = cVar1;
              pcVar3 = pcVar3 + 1;
              if ((cVar1 == '\0') || (iVar5 = iVar5 + -1, iVar5 == 0)) break;
              param_4 = param_4 + -1;
            } while (param_4 != 0);
            if (param_4 == 0) {
              *pcVar3 = '\0';
            }
          }
          if (iVar5 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          piVar2 = F_00c51f85();
          eStack_14 = 0x22;
          *piVar2 = 0x22;
          goto LAB_00c4da26;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_00c4da15;
  piVar2 = F_00c51f85();
  eStack_14 = 0x16;
  *piVar2 = 0x16;
LAB_00c4da26: ;
  F_00c4c305();
  return eStack_14;
}

/* ref: _IsRootUNCName_00c4daa4 */
uint F_00c4daa4(unsigned int gen_a0)
{
  GEN_ENTER(0xc4daa4u, gen_a0, 0u, 0u, 0u);
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

/* ref: __wfullpath_helper_00c4db41 */
uint F_00c4db41(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4db41u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: __wstat64 */
int F_00c4dba1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4dba1u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * _Name = (wchar_t *)(uintptr_t)gen_a0;
  undefined * _Stat = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x480];
  ushort wVar1;
  ushort uVar2;
  ulong * puVar3;
  int * piVar4;
  wchar_t * pwVar5;
  int iVar6;
  gen_size32 sVar7;
  UINT UVar8;
  int eVar9;
  BOOL BVar10;
  DWORD DVar11;
  uint uVar12;
  __time64_t _Var13;
  
  (*(uint *)(gen_frame + 0x478)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x47c);
  (*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime = (DWORD)_Name;
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
        if ((*_Name != L'\0') && (_Name[2] == L'\0')) goto LAB_00c4dbfc;
        wVar1 = F_00c6d650(*_Name);
        iVar6 = wVar1 - 0x60;
      }
      else {
        iVar6 = F_00c6d446();
      }
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = gen_imp_FindFirstFileExW(_Name,FindExInfoStandard,&(*(uint *)(gen_frame + 0x10)),FindExSearchNameMatch,
                                   (LPVOID)0x0,0);
      if ((*(undefined * PTR32 *)(gen_frame + 0xc)) == (HANDLE)0xffffffff) {
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
        pwVar5 = F_00c6d663(_Name,L"./\\");
        if (pwVar5 != (wchar_t *)0x0) {
          pwVar5 = (wchar_t *)F_00c4db41(((undefined1 *)(gen_frame + 0x270)),_Name,0x104,&(*(undefined * PTR32 *)(gen_frame + 0xc)));
          if (pwVar5 != (wchar_t *)0x0) {
            sVar7 = F_00c68ec8(pwVar5);
            if (sVar7 != 3) {
              uVar12 = F_00c4daa4(pwVar5);
              if (uVar12 == 0) goto LAB_00c4dd28;
            }
            UVar8 = gen_imp_GetDriveTypeW(pwVar5);
            if (1 < UVar8) {
              if ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0) {
                F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0xc)));
              }
              (*(uint *)(gen_frame + 0x10)) = 0x10;
              (*(undefined4 *)(gen_frame + 0x2c)) = 0;
              (*(undefined4 *)(gen_frame + 0x30)) = 0;
              (*(undefined2 *)(gen_frame + 0x3c)) = 0;
              _Var13 = F_00c6d1df(0x7bc,1,1,0,0,0,-1);
              (*(__time64_t *)(((char *)(_Stat) + 40))) = _Var13;
              (*(__time64_t *)(((char *)(_Stat) + 32))) = _Var13;
              (*(__time64_t *)(((char *)(_Stat) + 48))) = _Var13;
              _Name = ((wchar_t *)GEN_TOP((*(_FILETIME *)(gen_frame + 0x4)).dwHighDateTime));
LAB_00c4df78: ;
              uVar2 = F_00c6c88b((*(uint *)(gen_frame + 0x10)),_Name);
              (*(ushort *)(((char *)(_Stat) + 6))) = uVar2;
              (*(short *)(((char *)(_Stat) + 8))) = 1;
              *(undefined4 *)&(*(longlong *)(((char *)(_Stat) + 24))) = (*(undefined4 *)(gen_frame + 0x30));
              (*(ushort *)(((char *)(_Stat) + 4))) = 0;
              (*(short *)(((char *)(_Stat) + 12))) = 0;
              (*(short *)(((char *)(_Stat) + 10))) = 0;
              (*(uint *)((char *)(_Stat))) = iVar6 - 1U;
              (*(uint *)(((char *)(_Stat) + 16))) = iVar6 - 1U;
              *((undefined4 *)GEN_TOP(((int)&(*(longlong *)(((char *)(_Stat) + 24))) + 4))) = (*(undefined4 *)(gen_frame + 0x2c));
              uVar12 = 0;
              goto LAB_00c4dfe3;
            }
          }
LAB_00c4dd28: ;
          if ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0x0) {
            F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0xc)));
          }
        }
      }
      else {
        if ((((*(uint *)(gen_frame + 0x10)) & 0x400) == 0) || ((*(int *)(gen_frame + 0x34)) != -0x5ffffff4)) {
          if (((*(FILETIME *)(gen_frame + 0x24)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x24)).dwHighDateTime == 0)) {
            *(undefined4 *)&(*(__time64_t *)(((char *)(_Stat) + 40))) = 0;
            *((undefined4 *)GEN_TOP(((int)&(*(__time64_t *)(((char *)(_Stat) + 40))) + 4))) = 0;
LAB_00c4de40: ;
            if (((*(FILETIME *)(gen_frame + 0x1c)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x1c)).dwHighDateTime == 0)) {
              *(int *)&(*(__time64_t *)(((char *)(_Stat) + 32))) = (int)(*(__time64_t *)(((char *)(_Stat) + 40)));
              *((undefined4 *)GEN_TOP(((int)&(*(__time64_t *)(((char *)(_Stat) + 32))) + 4))) =
                   *((undefined4 *)GEN_TOP(((int)&(*(__time64_t *)(((char *)(_Stat) + 40))) + 4)));
LAB_00c4ded6: ;
              if (((*(FILETIME *)(gen_frame + 0x14)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x14)).dwHighDateTime == 0)) {
                *(int *)&(*(__time64_t *)(((char *)(_Stat) + 48))) = (int)(*(__time64_t *)(((char *)(_Stat) + 40)));
                *((undefined4 *)GEN_TOP(((int)&(*(__time64_t *)(((char *)(_Stat) + 48))) + 4))) =
                     *((undefined4 *)GEN_TOP(((int)&(*(__time64_t *)(((char *)(_Stat) + 40))) + 4)));
LAB_00c4df6c: ;
                gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0xc)));
                goto LAB_00c4df78;
              }
              BVar10 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x14)),&(*(_FILETIME *)(gen_frame + 0x4)));
              if (BVar10 != 0) {
                BVar10 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x4)),&(*(_SYSTEMTIME *)(gen_frame + 0x260)));
                if (BVar10 != 0) {
                  _Var13 = F_00c6d1df((uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wMonth,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wHour,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wSecond,-1);
                  (*(__time64_t *)(((char *)(_Stat) + 48))) = _Var13;
                  goto LAB_00c4df6c;
                }
              }
            }
            else {
              BVar10 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x1c)),&(*(_FILETIME *)(gen_frame + 0x4)));
              if (BVar10 != 0) {
                BVar10 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x4)),&(*(_SYSTEMTIME *)(gen_frame + 0x260)));
                if (BVar10 != 0) {
                  _Var13 = F_00c6d1df((uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wMonth,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wHour,
                                            (uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wSecond,-1);
                  (*(__time64_t *)(((char *)(_Stat) + 32))) = _Var13;
                  goto LAB_00c4ded6;
                }
              }
            }
          }
          else {
            BVar10 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x24)),&(*(_FILETIME *)(gen_frame + 0x4)));
            if (BVar10 != 0) {
              BVar10 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x4)),&(*(_SYSTEMTIME *)(gen_frame + 0x260)));
              if (BVar10 != 0) {
                _Var13 = F_00c6d1df((uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wMonth,
                                          (uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wDay,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wHour,
                                          (uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wMinute,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x260)).wSecond,-1);
                (*(__time64_t *)(((char *)(_Stat) + 40))) = _Var13;
                goto LAB_00c4de40;
              }
            }
          }
          DVar11 = gen_imp_GetLastError();
          F_00c51fab(DVar11);
          gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0xc)));
          goto LAB_00c4dfe0;
        }
        (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0xffffffff;
        eVar9 = F_00c4ece4((int *)&(*(undefined * PTR32 *)(gen_frame + 0xc)),_Name,0,0x40,0);
        if ((eVar9 == 0) && ((*(undefined * PTR32 *)(gen_frame + 0xc)) != (undefined *)0xffffffff)) {
          uVar12 = F_00c6ce7a((*(undefined * PTR32 *)(gen_frame + 0xc)),_Stat);
          F_00c4e08e((int)(*(undefined * PTR32 *)(gen_frame + 0xc)));
          goto LAB_00c4dfe3;
        }
      }
    }
LAB_00c4dbfc: ;
    piVar4 = F_00c51f85();
    *piVar4 = 2;
    puVar3 = F_00c51f98();
    *puVar3 = 2;
  }
LAB_00c4dfe0: ;
  uVar12 = 0xffffffff;
LAB_00c4dfe3: ;
  F_00c47745((*(uint *)(gen_frame + 0x478)) ^ (uint)(uint)(gen_frame + 0x47c));
  return uVar12;
}

/* ref: __close_nolock */
int F_00c4dff2(unsigned int gen_a0)
{
  GEN_ENTER(0xc4dff2u, gen_a0, 0u, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  iVar1 = F_00c6d7ae(_FileHandle);
  if (iVar1 != -1) {
    if (((_FileHandle == 1) && ((*(byte *)(REFG(int, 0x15e41a0) + 0x84) & 1) != 0)) ||
       ((_FileHandle == 2 && ((*(byte *)(REFG(int, 0x15e41a0) + 0x44) & 1) != 0)))) {
      iVar1 = F_00c6d7ae(2);
      iVar2 = F_00c6d7ae(1);
      if (iVar2 == iVar1) goto LAB_00c4e058;
    }
    hObject = (HANDLE)F_00c6d7ae(_FileHandle);
    BVar3 = gen_imp_CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = gen_imp_GetLastError();
      goto LAB_00c4e05a;
    }
  }
LAB_00c4e058: ;
  DVar4 = 0;
LAB_00c4e05a: ;
  F_00c6d728(_FileHandle);
  *((undefined1 *)GEN_TOP(((&REFG(int, 0x15e41a0))[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x40))) = 0;
  if (DVar4 == 0) {
    iVar5 = 0;
  }
  else {
    F_00c51fab(DVar4);
    iVar5 = -1;
  }
  return iVar5;
}

/* ref: __close */
int F_00c4e08e(unsigned int gen_a0)
{
  GEN_ENTER(0xc4e08eu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int _FileHandle_00;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  _FileHandle_00 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6058);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4e09a;
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
          (*(int *)(gen_frame + 0x0)) = -1;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = F_00c4dff2(_FileHandle_00);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c4e14a(_FileHandle_00);
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

/* ref: FUN_00c4e147 */
unsigned int F_00c4e147(unsigned int gen_a0)
{
  GEN_ENTER(0xc4e147u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c4e14a */
unsigned int F_00c4e14a(unsigned int gen_a0)
{
  GEN_ENTER(0xc4e14au, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __chsize_nolock */
int F_00c4e152(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4e152u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  HANDLE pvVar2;
  LPVOID _Buf;
  int * piVar3;
  int iVar4;
  uint uVar5;
  ulong * puVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  DWORD DVar14;
  SIZE_T dwBytes;
  
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  lVar12 = F_00c6dda1(param_1,0,0,1);
  if (lVar12 == -1) goto LAB_00c4e1da;
  lVar13 = F_00c6dda1(param_1,0,0,2);
  iVar4 = (int)((ulonglong)lVar13 >> 0x20);
  if (lVar13 == -1) goto LAB_00c4e1da;
  uVar8 = param_2 - (uint)lVar13;
  uVar5 = (uint)(param_2 < (uint)lVar13);
  iVar1 = param_3 - iVar4;
  iVar9 = iVar1 - uVar5;
  if ((iVar9 < 0) ||
     ((iVar9 == 0 || SBORROW4(param_3,iVar4) != SBORROW4(iVar1,uVar5) && (uVar8 == 0)))) {
    if ((iVar9 < 1) && (iVar9 < 0)) {
      lVar13 = F_00c6dda1(param_1,param_2,param_3,0);
      if (lVar13 == -1) goto LAB_00c4e1da;
      pvVar2 = (HANDLE)F_00c6d7ae(param_1);
      BVar7 = gen_imp_SetEndOfFile(pvVar2);
      (*(uint *)(gen_frame + 0xc)) = (BVar7 != 0) - 1;
      (*(uint *)(gen_frame + 0x10)) = (int)(*(uint *)(gen_frame + 0xc)) >> 0x1f;
      if (((*(uint *)(gen_frame + 0xc)) & (*(uint *)(gen_frame + 0x10))) == 0xffffffff) {
        piVar3 = F_00c51f85();
        *piVar3 = 0xd;
        puVar6 = F_00c51f98();
        DVar14 = gen_imp_GetLastError();
        *puVar6 = DVar14;
        goto LAB_00c4e2d8;
      }
    }
  }
  else {
    dwBytes = 0x1000;
    DVar14 = 8;
    pvVar2 = gen_imp_GetProcessHeap();
    _Buf = gen_imp_HeapAlloc(pvVar2,DVar14,dwBytes);
    if (_Buf == (LPVOID)0x0) {
      piVar3 = F_00c51f85();
      *piVar3 = 0xc;
      goto LAB_00c4e1da;
    }
    iVar4 = F_00c6db8c(param_1,0x8000);
    while( true ) {
      uVar5 = uVar8;
      if ((-1 < iVar9) && ((0 < iVar9 || (0xfff < uVar8)))) {
        uVar5 = 0x1000;
      }
      uVar5 = F_00c5d74e(param_1,_Buf,uVar5);
      if (uVar5 == 0xffffffff) break;
      bVar10 = uVar8 < uVar5;
      uVar8 = uVar8 - uVar5;
      bVar11 = SBORROW4(iVar9,(int)uVar5 >> 0x1f);
      iVar1 = iVar9 - ((int)uVar5 >> 0x1f);
      iVar9 = iVar1 - (uint)bVar10;
      if ((iVar9 < 0) || ((iVar9 == 0 || bVar11 != SBORROW4(iVar1,(uint)bVar10) && (uVar8 == 0))))
      goto LAB_00c4e22c;
    }
    puVar6 = F_00c51f98();
    if (*puVar6 == 5) {
      piVar3 = F_00c51f85();
      *piVar3 = 0xd;
    }
    (*(uint *)(gen_frame + 0xc)) = 0xffffffff;
    (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
LAB_00c4e22c: ;
    F_00c6db8c(param_1,iVar4);
    DVar14 = 0;
    pvVar2 = gen_imp_GetProcessHeap();
    gen_imp_HeapFree(pvVar2,DVar14,_Buf);
LAB_00c4e2d8: ;
    if (((*(uint *)(gen_frame + 0xc)) & (*(uint *)(gen_frame + 0x10))) == 0xffffffff) goto LAB_00c4e1da;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)((ulonglong)lVar12 >> 0x20);
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)lVar12;
  lVar12 = F_00c6dda1(param_1,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0);
  if (lVar12 != -1) {
    return 0;
  }
LAB_00c4e1da: ;
  piVar3 = F_00c51f85();
  return *piVar3;
}

/* ref: __chsize_s */
int F_00c4e308(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4e308u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint in_ebx;
  ulong * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int eVar5;
  
  in_ebx = (*(uint *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6078);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4e314;
  if ((*(uint *)&gen_args[0]) == 0xfffffffe) {
    puVar1 = F_00c51f98();
    *puVar1 = 0;
    return 9;
  }
  if ((-1 < (int)(*(uint *)&gen_args[0])) && ((*(uint *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
    iVar3 = (int)(*(uint *)&gen_args[0]) >> 5;
    iVar4 = ((*(uint *)&gen_args[0]) & 0x1f) * 0x40;
    if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) != 0) {
      if ((0 < (*(int *)&gen_args[2])) || (-1 < (*(int *)&gen_args[2]))) {
        F_00c6d817((*(uint *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[iVar3] + 4 + iVar4))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          (*(int *)(gen_frame + 0x0)) = 9;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = F_00c4e152(in_ebx,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c4e3e7(in_ebx);
        return (*(int *)(gen_frame + 0x0));
      }
      puVar1 = F_00c51f98();
      *puVar1 = 0;
      piVar2 = F_00c51f85();
      eVar5 = 0x16;
      *piVar2 = 0x16;
      goto LAB_00c4e34a;
    }
  }
  puVar1 = F_00c51f98();
  *puVar1 = 0;
  piVar2 = F_00c51f85();
  eVar5 = 9;
  *piVar2 = 9;
LAB_00c4e34a: ;
  F_00c4c305();
  return eVar5;
}

/* ref: FUN_00c4e3e4 */
unsigned int F_00c4e3e4(unsigned int gen_a0)
{
  GEN_ENTER(0xc4e3e4u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00c6d8b6(*(int *)(in_ebp + 8));
  return 0;
}

/* ref: FUN_00c4e3e7 */
unsigned int F_00c4e3e7(unsigned int gen_a0)
{
  GEN_ENTER(0xc4e3e7u, gen_a0, 0u, 0u, 0u);
  int in_ebx = (int)gen_a0;
  F_00c6d8b6(in_ebx);
  return 0;
}

/* ref: __chsize */
int F_00c4e3ef(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4e3efu, gen_a0, gen_a1, 0u, 0u);
  int _FileHandle = (int)gen_a0;
  long _Size = (long)gen_a1;
  int eVar1;
  
  eVar1 = F_00c4e308(_FileHandle,_Size,_Size >> 0x1f);
  return -(uint)(eVar1 != 0);
}

/* ref: FUN_00c4e40b */
uint F_00c4e40b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc4e40bu, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  LPCWSTR param_3 = (LPCWSTR)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  byte bVar2;
  int eVar3;
  uint uVar4;
  ulong * puVar5;
  int * piVar6;
  uint * puVar7;
  DWORD DVar8;
  long lVar9;
  int iVar10;
  HANDLE pvVar11;
  byte bVar12;
  undefined4 unaff_EDI = 0;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  int iVar16;
  
  bVar14 = (param_4 & 0x80) == 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(byte *)(gen_frame + 0x3a)) = 0;
  (*(uint *)(gen_frame + 0x34)) = 0;
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x8)))) = 0xc;
  (*(LPVOID *)(((char *)((undefined *)(gen_frame + 0x8)) + 4))) = (LPVOID)0x0;
  if (bVar14) {
    (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) = 1;
    (*(byte *)(gen_frame + 0x3b)) = 0;
  }
  else {
    (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) = 0;
    (*(byte *)(gen_frame + 0x3b)) = 0x10;
  }
  (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x8)) + 8))) = (BOOL)bVar14;
  eVar3 = F_00c6dc89((int *)&(*(uint *)(gen_frame + 0x18)));
  if (eVar3 != 0) {
                    
    F_00c4c299(unaff_EDI,0,0,0,0,0);
  }
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x74000) != 0 || ((*(uint *)(gen_frame + 0x18)) != 0x8000)))) {
    (*(byte *)(gen_frame + 0x3b)) = (*(byte *)(gen_frame + 0x3b)) | 0x80;
  }
  uVar4 = param_4 & 3;
  if (uVar4 == 0) {
    (*(uint *)(gen_frame + 0x30)) = 0x80000000;
  }
  else {
    if (uVar4 == 1) {
      if (((param_4 & 8) == 0) || ((param_4 & 0x70000) == 0)) {
        (*(uint *)(gen_frame + 0x30)) = 0x40000000;
        goto LAB_00c4e4cd;
      }
    }
    else if (uVar4 != 2) goto LAB_00c4e48d;
    (*(uint *)(gen_frame + 0x30)) = 0xc0000000;
  }
LAB_00c4e4cd: ;
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
LAB_00c4e48d: ;
      puVar5 = F_00c51f98();
      *puVar5 = 0;
      *in_eax = 0xffffffff;
      piVar6 = F_00c51f85();
      *piVar6 = 0x16;
      F_00c4c305();
      return 0x16;
    }
    (*(uint *)(gen_frame + 0x28)) = (uint)((*(uint *)(gen_frame + 0x30)) == 0x80000000);
  }
  uVar4 = param_4 & 0x700;
  if (uVar4 < 0x401) {
    if ((uVar4 == 0x400) || (uVar4 == 0)) {
      (*(uint *)(gen_frame + 0x24)) = 3;
    }
    else if (uVar4 == 0x100) {
      (*(uint *)(gen_frame + 0x24)) = 4;
    }
    else {
      if (uVar4 == 0x200) goto LAB_00c4e58f;
      if (uVar4 != 0x300) goto LAB_00c4e56f;
      (*(uint *)(gen_frame + 0x24)) = 2;
    }
  }
  else {
    if (uVar4 != 0x500) {
      if (uVar4 == 0x600) {
LAB_00c4e58f: ;
        (*(uint *)(gen_frame + 0x24)) = 5;
        goto LAB_00c4e59f;
      }
      if (uVar4 != 0x700) {
LAB_00c4e56f: ;
        puVar5 = F_00c51f98();
        *puVar5 = 0;
        *in_eax = 0xffffffff;
        piVar6 = F_00c51f85();
        *piVar6 = 0x16;
        F_00c4c305();
        return 0x16;
      }
    }
    (*(uint *)(gen_frame + 0x24)) = 1;
  }
LAB_00c4e59f: ;
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
  uVar4 = F_00c6d8dd();
  *in_eax = uVar4;
  if (uVar4 == 0xffffffff) {
    puVar5 = F_00c51f98();
    *puVar5 = 0;
    *in_eax = 0xffffffff;
    piVar6 = F_00c51f85();
    *piVar6 = 0x18;
    puVar7 = (uint *)F_00c51f85();
    return *puVar7;
  }
  *param_2 = 1;
  (*(HANDLE *)(gen_frame + 0x1c)) = gen_imp_CreateFileW(param_3,(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)),((undefined *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x2c)),0);
  if ((*(HANDLE *)(gen_frame + 0x1c)) == (HANDLE)0xffffffff) {
    if ((((*(uint *)(gen_frame + 0x30)) & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) & 0x7fffffff;
      (*(HANDLE *)(gen_frame + 0x1c)) = gen_imp_CreateFileW(param_3,(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x28)),((undefined *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x2c)),0);
      if ((*(HANDLE *)(gen_frame + 0x1c)) != (HANDLE)0xffffffff) goto LAB_00c4e6c7;
    }
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
    DVar8 = gen_imp_GetLastError();
    F_00c51fab(DVar8);
    goto LAB_00c4e6b8;
  }
LAB_00c4e6c7: ;
  DVar8 = gen_imp_GetFileType((*(HANDLE *)(gen_frame + 0x1c)));
  if (DVar8 == 0) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
    DVar8 = gen_imp_GetLastError();
    F_00c51fab(DVar8);
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x1c)));
    if (DVar8 == 0) {
      piVar6 = F_00c51f85();
      *piVar6 = 0xd;
    }
    goto LAB_00c4e6b8;
  }
  if (DVar8 == 2) {
    (*(byte *)(gen_frame + 0x3b)) = (*(byte *)(gen_frame + 0x3b)) | 0x40;
  }
  else if (DVar8 == 3) {
    (*(byte *)(gen_frame + 0x3b)) = (*(byte *)(gen_frame + 0x3b)) | 8;
  }
  F_00c6d6a7(*in_eax,(int)(*(HANDLE *)(gen_frame + 0x1c)));
  bVar2 = (*(byte *)(gen_frame + 0x3b));
  bVar12 = (*(byte *)(gen_frame + 0x3b)) | 1;
  *((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40))) = bVar12;
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 & 0x80;
  (*(byte *)(gen_frame + 0x39)) = bVar12;
  (*(byte *)(gen_frame + 0x39)) = (*(byte *)(gen_frame + 0x3b)) & 0x48;
  (*(byte *)(gen_frame + 0x3b)) = bVar12;
  if ((*(byte *)(gen_frame + 0x39)) == 0) {
    if ((bVar2 & 0x80) == 0) goto LAB_00c4ea2e;
    if ((param_4 & 2) == 0) goto LAB_00c4e7fc;
    lVar9 = F_00c650fc(*in_eax,-1,2);
    if (lVar9 == -1) {
      puVar5 = F_00c51f98();
      if (*puVar5 == 0x83) goto LAB_00c4e7fc;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      iVar13 = F_00c5d0a1(*in_eax,&(*(undefined4 *)(gen_frame + 0x14)),1);
      if ((((iVar13 != 0) || ((short)(*(undefined4 *)(gen_frame + 0x14)) != 0x1a)) ||
          (iVar13 = F_00c4e152(*in_eax,lVar9,lVar9 >> 0x1f), iVar13 != -1)) &&
         (lVar9 = F_00c650fc(*in_eax,0,0), lVar9 != -1)) goto LAB_00c4e7fc;
    }
LAB_00c4e7ac: ;
    F_00c4dff2(*in_eax);
    goto LAB_00c4e6b8;
  }
LAB_00c4e7fc: ;
  if (((*(byte *)(gen_frame + 0x3b)) & 0x80) != 0) {
    if ((param_4 & 0x74000) == 0) {
      if (((*(uint *)(gen_frame + 0x18)) & 0x74000) == 0) {
        param_4 = param_4 | 0x4000;
      }
      else {
        param_4 = param_4 | (*(uint *)(gen_frame + 0x18)) & 0x74000;
      }
    }
    uVar4 = param_4 & 0x74000;
    if (uVar4 == 0x4000) {
      (*(byte *)(gen_frame + 0x3a)) = 0;
    }
    else if ((uVar4 == 0x10000) || (uVar4 == 0x14000)) {
      if ((param_4 & 0x301) == 0x301) goto LAB_00c4e86b;
    }
    else if ((uVar4 == 0x20000) || (uVar4 == 0x24000)) {
LAB_00c4e86b: ;
      (*(byte *)(gen_frame + 0x3a)) = 2;
    }
    else if ((uVar4 == 0x40000) || (uVar4 == 0x44000)) {
      (*(byte *)(gen_frame + 0x3a)) = 1;
    }
    if (((param_4 & 0x70000) != 0) && ((*(gen_code32 *)(gen_frame + 0x20)) = (code *)0x0, ((*(byte *)(gen_frame + 0x3b)) & 0x40) == 0)) {
      uVar4 = (*(uint *)(gen_frame + 0x30)) & 0xc0000000;
      if (uVar4 == 0x40000000) {
        if ((*(uint *)(gen_frame + 0x24)) == 0) goto LAB_00c4ea2e;
        if (2 < (*(uint *)(gen_frame + 0x24))) {
          if ((*(uint *)(gen_frame + 0x24)) < 5) {
            lVar15 = F_00c6dda1(*in_eax,0,0,2);
            if (lVar15 == 0) goto LAB_00c4e8d3;
            lVar15 = F_00c6dda1(*in_eax,0,0,0);
            uVar4 = (uint)lVar15 & (uint)((ulonglong)lVar15 >> 0x20);
            goto LAB_00c4e998;
          }
LAB_00c4e8ca: ;
          if ((*(uint *)(gen_frame + 0x24)) != 5) goto LAB_00c4ea2e;
        }
LAB_00c4e8d3: ;
        iVar13 = 0;
        if ((*(byte *)(gen_frame + 0x3a)) == 1) {
          (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xbfbbef));
          iVar16 = 3;
        }
        else {
          if ((*(byte *)(gen_frame + 0x3a)) != 2) goto LAB_00c4ea2e;
          (*(gen_code32 *)(gen_frame + 0x20)) = (code *)0xfeff;
          iVar16 = 2;
        }
        do {
          iVar10 = F_00c5de4b(*in_eax,(undefined *)((int)&(*(gen_code32 *)(gen_frame + 0x20)) + iVar13),iVar16 - iVar13);
          if (iVar10 == -1) goto LAB_00c4e7ac;
          iVar13 = iVar13 + iVar10;
        } while (iVar13 < iVar16);
      }
      else {
        if (uVar4 != 0x80000000) {
          if ((uVar4 == 0xc0000000) && ((*(uint *)(gen_frame + 0x24)) != 0)) {
            if (2 < (*(uint *)(gen_frame + 0x24))) {
              if (4 < (*(uint *)(gen_frame + 0x24))) goto LAB_00c4e8ca;
              lVar15 = F_00c6dda1(*in_eax,0,0,2);
              if (lVar15 != 0) {
                lVar15 = F_00c6dda1(*in_eax,0,0,0);
                if (lVar15 == -1) goto LAB_00c4e7ac;
                goto LAB_00c4e91e;
              }
            }
            goto LAB_00c4e8d3;
          }
          goto LAB_00c4ea2e;
        }
LAB_00c4e91e: ;
        iVar13 = F_00c5d0a1(*in_eax,&(*(gen_code32 *)(gen_frame + 0x20)),3);
        if (iVar13 == -1) goto LAB_00c4e7ac;
        if (iVar13 == 2) {
LAB_00c4e9a5: ;
          if (((uint)(*(gen_code32 *)(gen_frame + 0x20)) & 0xffff) == 0xfffe) {
            F_00c4dff2(*in_eax);
            piVar6 = F_00c51f85();
            *piVar6 = 0x16;
            (*(uint *)(gen_frame + 0x34)) = 0x16;
            return 0x16;
          }
          if (((uint)(*(gen_code32 *)(gen_frame + 0x20)) & 0xffff) == 0xfeff) {
            lVar9 = F_00c650fc(*in_eax,2,0);
            if (lVar9 == -1) goto LAB_00c4e7ac;
            (*(byte *)(gen_frame + 0x3a)) = 2;
            goto LAB_00c4ea2e;
          }
        }
        else if (iVar13 == 3) {
          if ((*(gen_code32 *)(gen_frame + 0x20)) == ((code *)REFP(0xbfbbef))) {
            (*(byte *)(gen_frame + 0x3a)) = 1;
            goto LAB_00c4ea2e;
          }
          goto LAB_00c4e9a5;
        }
        uVar4 = F_00c650fc(*in_eax,0,0);
LAB_00c4e998: ;
        if (uVar4 == 0xffffffff) goto LAB_00c4e7ac;
      }
    }
  }
LAB_00c4ea2e: ;
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
  pvVar11 = gen_imp_CreateFileW(param_3,(*(uint *)(gen_frame + 0x30)) & 0x7fffffff,(*(uint *)(gen_frame + 0x28)),((undefined *)(gen_frame + 0x8)),3,(*(uint *)(gen_frame + 0x2c)),(HANDLE)0x0);
  if (pvVar11 != (HANDLE)0xffffffff) {
    *((HANDLE *)GEN_TOP(((*in_eax & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5]))) = pvVar11;
    return (*(uint *)(gen_frame + 0x34));
  }
  DVar8 = gen_imp_GetLastError();
  F_00c51fab(DVar8);
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)*in_eax >> 5] + 4 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 & 0xfe;
  F_00c6d728(*in_eax);
LAB_00c4e6b8: ;
  puVar7 = (uint *)F_00c51f85();
  (*(uint *)(gen_frame + 0x34)) = *puVar7;
  return *puVar7;
}

/* ref: FUN_00c4ebb2 */
unsigned int F_00c4ebb2(unsigned int gen_a0)
{
  GEN_ENTER(0xc4ebb2u, gen_a0, 0u, 0u, 0u);
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

/* ref: FID_conflict___sopen_helper_00c4ebee */
int F_00c4ebee(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc4ebeeu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int * piVar1;
  
  piVar1 = (*(int * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x14;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f60b8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc4ebfa;
  ((undefined4 *)(gen_frame + 0x10))[0] = 0;
  if ((((*(int * PTR32 *)&gen_args[4]) == (int *)0x0) || (*(*(int * PTR32 *)&gen_args[4]) = -1, (*(char * PTR32 *)&gen_args[0]) == (char *)0x0)) ||
     (((*(int *)&gen_args[5]) != 0 && (((*(int *)&gen_args[3]) & 0xfffffe7fU) != 0)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0xc)) = 0x16;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    (*(uint *)(gen_frame + 0xc)) = F_00c4e40b((*(int * PTR32 *)&gen_args[4]),((undefined4 *)(gen_frame + 0x10)),(*(char * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c4ec84(piVar1,0,(gen_frame + 0x2c));
    if ((*(uint *)(gen_frame + 0xc)) != 0) {
      *piVar1 = -1;
    }
  }
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: FUN_00c4ec7f */
unsigned int F_00c4ec7f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4ec7fu, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c4ec84 */
unsigned int F_00c4ec84(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4ec84u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: __wsopen_s */
int F_00c4ece4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4ece4u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * _FileHandle = (int *)(uintptr_t)gen_a0;
  wchar_t * _Filename = (wchar_t *)(uintptr_t)gen_a1;
  int _OpenFlag = (int)gen_a2;
  int _ShareFlag = (int)gen_a3;
  int _PermissionFlag = (int)gen_a4;
  int eVar1;
  
  eVar1 = F_00c4ebee((char *)_Filename,_OpenFlag,_ShareFlag,_PermissionFlag,_FileHandle,1);
  return eVar1;
}

/* ref: FUN_00c4ed10 */
float10 F_00c4ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4ed10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    uVar1 = (*(uint *)&gen_args[1]) >> 0x14;
    lVar6 = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1118b34),
                     *(int *)&REFG(undefined, 0x1118b30) - ((*(uint *)&gen_args[1]) >> 0x14 & *(uint *)&REFG(undefined, 0x1118b50)));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = gen_bits2d(((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> lVar6) << lVar6);
      if (uVar1 < 0x3ff) {
        return ((float10)GEN_TOD(gen_bits2d(-(ulonglong)!(*(double *)&(*(uint *)&gen_args[0]) <= *(double *)&REFG(undefined, 0x1118b40)) &
                                   *(ulonglong *)&REFG(undefined, 0x1118b20))));
      }
      if (uVar1 < 0x433) {
        return ((float10)GEN_TOD((dVar5 + gen_bits2d(-(ulonglong)!(*(double *)&(*(uint *)&gen_args[0]) <= dVar5) &
                                            *(ulonglong *)&REFG(undefined, 0x1118b20)))));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)*(double *)&REFG(undefined, 0x1118b60);
      }
      if (uVar1 < 0xc33) {
        return ((float10)GEN_TOD(gen_bits2d(((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> lVar6) << lVar6)));
      }
    }
    if (GEN_ISNAN(*(double *)&(*(uint *)&gen_args[0]))) {
      F_00c6bf0e(&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]),0x3ec);
    }
    return (float10)*(double *)&(*(uint *)&gen_args[0]);
  }
  uVar1 = F_00c6f59e(REFG(undefined4, 0x134bc80),0xffff);
  uVar3 = (undefined4)((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff0) == 0x7ff0) {
    uVar2 = F_00c6ebcd((int)(ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])),uVar3);
    if (0 < (int)uVar2) {
      if ((int)uVar2 < 3) {
        F_00c6f59e(uVar1,0xffff);
        return (float10)*(double *)&(*(uint *)&gen_args[0]);
      }
      if (uVar2 == 3) {
        fVar4 = F_00c6f323(0xc,*(double *)&(*(uint *)&gen_args[0]),uVar1);
        return fVar4;
      }
    }
    dVar5 = *(double *)&(*(uint *)&gen_args[0]) + REFG(double, 0x1088130);
    uVar7 = 8;
  }
  else {
    fVar4 = F_00c7d6ab(*(double *)&(*(uint *)&gen_args[0]));
    dVar5 = (double)fVar4;
    if (((GEN_ISNAN(*(double *)&(*(uint *)&gen_args[0])) || GEN_ISNAN(dVar5)) !=
         ((GEN_ISNAN(*(double *)&(*(uint *)&gen_args[0])) || GEN_ISNAN(dVar5)) || *(double *)&(*(uint *)&gen_args[0]) == dVar5)) ||
       ((uVar1 & 0x20) != 0)) {
      F_00c6f59e(uVar1,0xffff);
      return (float10)dVar5;
    }
    uVar7 = 0x10;
  }
  fVar4 = F_00c6f3d9(uVar3,uVar7,0xc,*(double *)&(*(uint *)&gen_args[0]),dVar5,uVar1);
  return fVar4;
}

/* ref: FUN_00c4ee2d */
uint F_00c4ee2d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4ee2du, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: __tolower_l */
int F_00c4ee3a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4ee3au, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 200))) + (*(int *)&gen_args[0]) * 2))) & 1;
    }
    else {
      uVar2 = F_00c5ce6f((*(int *)&gen_args[0]),1,(undefined *)((byte *)(gen_frame + 0x4)));
    }
    if (uVar2 == 0) {
LAB_00c4ee9b: ;
      if (((byte *)(gen_frame + 0x4))[0xc] == 0) {
        return iVar1;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xcc))) + (*(int *)&gen_args[0]))));
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
    iVar3 = F_00c54720((undefined *)((byte *)(gen_frame + 0x4)),*((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0x14))),0x100,&(*(CHAR *)(gen_frame + 0x18)),
                               iVar3,(LPSTR)&(*(byte *)(gen_frame + 0x14)),3,*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 4))),1);
    if (iVar3 == 0) goto LAB_00c4ee9b;
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

/* ref: _tolower */
int F_00c4ef4f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4ef4fu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  if (REFG(int, 0x15d6874) == 0) {
    if (_C - 0x41U < 0x1a) {
      return _C + 0x20;
    }
  }
  else {
    _C = F_00c4ee3a(_C,(undefined *)0x0);
  }
  return _C;
}

/* ref: shortsort */
unsigned int F_00c4efb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4efb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * in_eax = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined1 uVar1;
  undefined1 * puVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  for (; puVar2 = param_2, puVar4 = param_2, param_2 < in_eax; in_eax = in_eax - param_3) {
    while (puVar4 = puVar4 + param_3, puVar4 <= in_eax) {
      uVar3 = (*param_4)(puVar4,puVar2);
      if (0 < (int)uVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != in_eax) && (param_3 != 0)) {
      puVar4 = in_eax;
      iVar5 = param_3;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)in_eax];
        puVar4[(int)puVar2 - (int)in_eax] = *puVar4;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

/* ref: _qsort */
unsigned int F_00c4f040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4f040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Base = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _NumOfElements = (gen_size32)gen_a1;
  gen_size32 _SizeOfElements = (gen_size32)gen_a2;
  undefined * _PtFuncCompare = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined1 uVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  gen_size32 sVar7;
  undefined1 * puVar8;
  undefined1 * puVar9;
  
  if ((_Base == (undefined *)0x0) && (_NumOfElements != 0)) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    return 0;
  }
  if ((_SizeOfElements == 0) || (_PtFuncCompare == (undefined *)0x0)) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
  }
  else if (1 < _NumOfElements) {
    (*(int *)(gen_frame + 0x100)) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x108)) = _Base;
    (*(undefined1 * PTR32 *)(gen_frame + 0x104)) = ((undefined1 *)GEN_TOP(((_NumOfElements - 1) * _SizeOfElements + (int)_Base)));
LAB_00c4f0b0: ;
    while (puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x108)), puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x104)),
          uVar3 = (uint)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x104)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x108))) / _SizeOfElements + 1, 8 < uVar3) {
      puVar8 = (*(undefined1 * PTR32 *)(gen_frame + 0x108)) + _SizeOfElements * (uVar3 >> 1);
      uVar3 = ((code *)_PtFuncCompare)((*(undefined1 * PTR32 *)(gen_frame + 0x108)),puVar8);
      if ((0 < (int)uVar3) && (puVar6 != puVar8)) {
        puVar4 = puVar8;
        (*(gen_size32 *)(gen_frame + 0xfc)) = _SizeOfElements;
        do {
          (*(gen_size32 *)(gen_frame + 0xfc)) = (*(gen_size32 *)(gen_frame + 0xfc)) - 1;
          uVar1 = puVar4[(int)puVar6 - (int)puVar8];
          puVar4[(int)puVar6 - (int)puVar8] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
        } while ((*(gen_size32 *)(gen_frame + 0xfc)) != 0);
      }
      uVar3 = ((code *)_PtFuncCompare)(puVar6,puVar9);
      puVar4 = puVar6;
      if ((0 < (int)uVar3) && (puVar6 != puVar9)) {
        puVar5 = puVar9;
        sVar7 = _SizeOfElements;
        do {
          uVar1 = puVar5[(int)puVar6 - (int)puVar9];
          puVar5[(int)puVar6 - (int)puVar9] = *puVar5;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          sVar7 = sVar7 - 1;
          puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x108));
        } while (sVar7 != 0);
      }
      uVar3 = ((code *)_PtFuncCompare)(puVar8,puVar9);
      if ((0 < (int)uVar3) && (puVar8 != puVar9)) {
        puVar6 = puVar9;
        sVar7 = _SizeOfElements;
        do {
          uVar1 = puVar6[(int)puVar8 - (int)puVar9];
          puVar6[(int)puVar8 - (int)puVar9] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          sVar7 = sVar7 - 1;
          puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x108));
        } while (sVar7 != 0);
      }
LAB_00c4f180: ;
      if (puVar4 < puVar8) {
        do {
          puVar4 = puVar4 + _SizeOfElements;
          if (puVar8 <= puVar4) goto LAB_00c4f1a0;
          uVar3 = ((code *)_PtFuncCompare)(puVar4,puVar8);
        } while ((int)uVar3 < 1);
        if (puVar8 <= puVar4) goto LAB_00c4f1a0;
      }
      else {
LAB_00c4f1a0: ;
        do {
          puVar4 = puVar4 + _SizeOfElements;
          if ((*(undefined1 * PTR32 *)(gen_frame + 0x104)) < puVar4) break;
          uVar3 = ((code *)_PtFuncCompare)(puVar4,puVar8);
        } while ((int)uVar3 < 1);
      }
      do {
        puVar9 = puVar9 - _SizeOfElements;
        if (puVar9 <= puVar8) break;
        uVar3 = ((code *)_PtFuncCompare)(puVar9,puVar8);
      } while (0 < (int)uVar3);
      if (puVar4 <= puVar9) {
        if (puVar4 != puVar9) {
          puVar6 = puVar9;
          (*(gen_size32 *)(gen_frame + 0xfc)) = _SizeOfElements;
          do {
            (*(gen_size32 *)(gen_frame + 0xfc)) = (*(gen_size32 *)(gen_frame + 0xfc)) - 1;
            uVar1 = puVar6[(int)puVar4 - (int)puVar9];
            puVar6[(int)puVar4 - (int)puVar9] = *puVar6;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          } while ((*(gen_size32 *)(gen_frame + 0xfc)) != 0);
        }
        if (puVar8 == puVar9) {
          puVar8 = puVar4;
        }
        goto LAB_00c4f180;
      }
      puVar9 = puVar9 + _SizeOfElements;
      if (puVar8 < puVar9) {
        do {
          puVar9 = puVar9 - _SizeOfElements;
          if (puVar9 <= puVar8) goto LAB_00c4f220;
          uVar3 = ((code *)_PtFuncCompare)(puVar9,puVar8);
        } while (uVar3 == 0);
        if (puVar9 <= puVar8) goto LAB_00c4f220;
      }
      else {
LAB_00c4f220: ;
        do {
          puVar9 = puVar9 - _SizeOfElements;
          if (puVar9 <= (*(undefined1 * PTR32 *)(gen_frame + 0x108))) break;
          uVar3 = ((code *)_PtFuncCompare)(puVar9,puVar8);
        } while (uVar3 == 0);
      }
      puVar8 = (*(undefined1 * PTR32 *)(gen_frame + 0x108));
      puVar6 = (*(undefined1 * PTR32 *)(gen_frame + 0x104));
      if ((int)puVar9 - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x108)) < (int)(*(undefined1 * PTR32 *)(gen_frame + 0x104)) - (int)puVar4) {
        if (puVar4 < (*(undefined1 * PTR32 *)(gen_frame + 0x104))) {
          ((undefined4 *)(gen_frame + 0x84))[(*(int *)(gen_frame + 0x100))] = puVar4;
          ((undefined4 *)(gen_frame + 0xc))[(*(int *)(gen_frame + 0x100))] = (*(undefined1 * PTR32 *)(gen_frame + 0x104));
          (*(int *)(gen_frame + 0x100)) = (*(int *)(gen_frame + 0x100)) + 1;
        }
        if (puVar9 <= puVar8) goto LAB_00c4f2a1;
        (*(undefined1 * PTR32 *)(gen_frame + 0x104)) = puVar9;
      }
      else {
        if ((*(undefined1 * PTR32 *)(gen_frame + 0x108)) < puVar9) {
          ((undefined4 *)(gen_frame + 0x84))[(*(int *)(gen_frame + 0x100))] = (*(undefined1 * PTR32 *)(gen_frame + 0x108));
          ((undefined4 *)(gen_frame + 0xc))[(*(int *)(gen_frame + 0x100))] = puVar9;
          (*(int *)(gen_frame + 0x100)) = (*(int *)(gen_frame + 0x100)) + 1;
        }
        if (puVar6 <= puVar4) goto LAB_00c4f2a1;
        (*(undefined1 * PTR32 *)(gen_frame + 0x108)) = puVar4;
      }
    }
    F_00c4efb0((*(undefined1 * PTR32 *)(gen_frame + 0x104)),(*(undefined1 * PTR32 *)(gen_frame + 0x108)),_SizeOfElements,_PtFuncCompare);
LAB_00c4f2a1: ;
    (*(int *)(gen_frame + 0x100)) = (*(int *)(gen_frame + 0x100)) + -1;
    if (-1 < (*(int *)(gen_frame + 0x100))) {
      (*(undefined1 * PTR32 *)(gen_frame + 0x108)) = (undefined1 *)((undefined4 *)(gen_frame + 0x84))[(*(int *)(gen_frame + 0x100))];
      (*(undefined1 * PTR32 *)(gen_frame + 0x104)) = (undefined1 *)((undefined4 *)(gen_frame + 0xc))[(*(int *)(gen_frame + 0x100))];
      goto LAB_00c4f0b0;
    }
  }
  return 0;
}

/* ref: FUN_00c4f2cb */
uint F_00c4f2cb(unsigned int gen_a0)
{
  GEN_ENTER(0xc4f2cbu, gen_a0, 0u, 0u, 0u);
  ulong param_1 = (ulong)gen_a0;
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  (*(ulong *)(((char *)(p_Var1) + 20))) = param_1;
  return (uint)p_Var1;
}

/* ref: FUN_00c4f2dd */
uint F_00c4f2dd(void)
{
  GEN_ENTER(0xc4f2ddu, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  uint uVar2;
  
  p_Var1 = F_00c5b37a();
  uVar2 = (*(ulong *)(((char *)(p_Var1) + 20))) * 0x343fd + 0x269ec3;
  (*(ulong *)(((char *)(p_Var1) + 20))) = uVar2;
  return uVar2 >> 0x10 & 0x7fff;
}

/* ref: FUN_00c4f340 */
float10 F_00c4f340(double gen_a0)
{
  GEN_ENTER(0xc4f340u, 0u, 0u, 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c6e2a0(in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c4f398(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2));
  return fVar1;
}

/* ref: __alldiv */
ulonglong F_00c4f420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4f420u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar10;
  char cVar11;
  uint uVar9;
  
  cVar11 = (int)param_2 < 0;
  if ((bool)cVar11) {
    bVar10 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(uint)bVar10 - param_2;
  }
  if ((int)param_4 < 0) {
    cVar11 = cVar11 + '\x01';
    bVar10 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar10 - param_4;
  }
  uVar7 = param_1;
  uVar3 = param_3;
  uVar5 = param_2;
  uVar9 = param_4;
  if (param_4 == 0) {
    uVar3 = param_2 / param_3;
    iVar4 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar8 = uVar9 >> 1;
      uVar3 = (uint)(CONCAT14((uVar9 & 1) != 0,uVar3) >> 1);
      uVar6 = uVar5 >> 1;
      uVar7 = (uint)(CONCAT14((uVar5 & 1) != 0,uVar7) >> 1);
      uVar5 = uVar6;
      uVar9 = uVar8;
    } while (uVar8 != 0);
    uVar1 = CONCAT44(uVar6,uVar7) / (ulonglong)uVar3;
    iVar4 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar7 = uVar3 + iVar4 * param_4;
    if (((CARRY4(uVar3,iVar4 * param_4)) || (param_2 < uVar7)) ||
       ((param_2 <= uVar7 && (param_1 < (uint)lVar2)))) {
      iVar4 = iVar4 + -1;
    }
    uVar3 = 0;
  }
  if (cVar11 == '\x01') {
    bVar10 = iVar4 != 0;
    iVar4 = -iVar4;
    uVar3 = -(uint)bVar10 - uVar3;
  }
  return CONCAT44(uVar3,iVar4);
}

/* ref: FUN_00c4f4ca */
uint F_00c4f4ca(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4f4cau, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  int iVar2;
  int * piVar3;
  int eVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  (*(long *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (param_1 == (undefined *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  F_00c48350(param_1,0xff,0x24);
  if (param_2 == (uint *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
  }
  else {
    uVar5 = param_2[1];
    if (((0 < (int)uVar5) || (-1 < (int)uVar5)) &&
       (((int)uVar5 < 7 || (((int)uVar5 < 8 && (*param_2 < 0x93407000)))))) {
      F_00c64d65();
      eVar4 = F_00c64fcb(&(*(long *)(gen_frame + 0x14)));
      if ((eVar4 == 0) &&
         ((eVar4 = F_00c64ff8((long *)&(*(uint *)(gen_frame + 0x10))), eVar4 == 0 &&
          (eVar4 = F_00c65025((long *)&(*(uint *)(gen_frame + 0x18))), eVar4 == 0)))) {
        uVar5 = param_2[1];
        uVar8 = *param_2;
        if (((int)uVar5 < 0) || (((int)uVar5 < 1 && (uVar8 < 0x3f481)))) {
          uVar5 = F_00c52de3(param_1,(__time64_t *)param_2);
          if (uVar5 != 0) {
            return uVar5;
          }
          if (((*(long *)(gen_frame + 0x14)) == 0) || (iVar6 = F_00c64dec(param_1), iVar6 == 0)) {
            uVar5 = (*(int *)((char *)(param_1)));
            uVar8 = uVar5 - (*(uint *)(gen_frame + 0x18));
            iVar6 = (((int)uVar5 >> 0x1f) - ((int)(*(uint *)(gen_frame + 0x18)) >> 0x1f)) - (uint)(uVar5 < (*(uint *)(gen_frame + 0x18)));
          }
          else {
            uVar7 = (*(uint *)(gen_frame + 0x18)) + (*(uint *)(gen_frame + 0x10));
            (*(int *)(((char *)(param_1) + 32))) = 1;
            uVar5 = (*(int *)((char *)(param_1)));
            uVar8 = uVar5 - uVar7;
            iVar6 = (((int)uVar5 >> 0x1f) - ((int)uVar7 >> 0x1f)) - (uint)(uVar5 < uVar7);
          }
          iVar2 = (int)((longlong)CONCAT44(iVar6,uVar8) % 0x3c);
          (*(int *)((char *)(param_1))) = iVar2;
          if (iVar2 < 0) {
            bVar9 = 0x3b < uVar8;
            uVar8 = uVar8 - 0x3c;
            (*(int *)((char *)(param_1))) = iVar2 + 0x3c;
            iVar6 = iVar6 + -1 + (uint)bVar9;
          }
          lVar1 = (longlong)CONCAT44(iVar6,uVar8) / 0x3c + (longlong)(*(int *)(((char *)(param_1) + 4)));
          iVar6 = (int)(lVar1 % 0x3c);
          (*(int *)(((char *)(param_1) + 4))) = iVar6;
          if (iVar6 < 0) {
            (*(int *)(((char *)(param_1) + 4))) = iVar6 + 0x3c;
            lVar1 = lVar1 + -0x3c;
          }
          lVar1 = lVar1 / 0x3c + (longlong)(*(int *)(((char *)(param_1) + 8)));
          iVar6 = (int)(lVar1 % 0x18);
          (*(int *)(((char *)(param_1) + 8))) = iVar6;
          if (iVar6 < 0) {
            (*(int *)(((char *)(param_1) + 8))) = iVar6 + 0x18;
            lVar1 = lVar1 + -0x18;
          }
          lVar1 = lVar1 / 0x18;
          iVar6 = (int)lVar1;
          if (lVar1 < 0) {
            (*(int *)(((char *)(param_1) + 12))) = (*(int *)(((char *)(param_1) + 12))) + iVar6;
            (*(int *)(((char *)(param_1) + 24))) = (iVar6 + 7 + (*(int *)(((char *)(param_1) + 24)))) % 7;
            if ((*(int *)(((char *)(param_1) + 12))) < 1) {
              (*(int *)(((char *)(param_1) + 28))) = (*(int *)(((char *)(param_1) + 28))) + iVar6 + 0x16d;
              (*(int *)(((char *)(param_1) + 20))) = (*(int *)(((char *)(param_1) + 20))) + -1;
              (*(int *)(((char *)(param_1) + 12))) = (*(int *)(((char *)(param_1) + 12))) + 0x1f;
              (*(int *)(((char *)(param_1) + 16))) = 0xb;
              return 0;
            }
          }
          else {
            if (lVar1 == 0) {
              return 0;
            }
            (*(int *)(((char *)(param_1) + 12))) = (*(int *)(((char *)(param_1) + 12))) + iVar6;
            (*(int *)(((char *)(param_1) + 24))) = ((*(int *)(((char *)(param_1) + 24))) + iVar6) % 7;
          }
          (*(int *)(((char *)(param_1) + 28))) = (*(int *)(((char *)(param_1) + 28))) + iVar6;
        }
        else {
          (*(uint *)(gen_frame + 0x8)) = uVar8 - (*(uint *)(gen_frame + 0x18));
          (*(int *)(gen_frame + 0xc)) = (uVar5 - ((int)(*(uint *)(gen_frame + 0x18)) >> 0x1f)) - (uint)(uVar8 < (*(uint *)(gen_frame + 0x18)));
          uVar5 = F_00c52de3(param_1,(__time64_t *)&(*(uint *)(gen_frame + 0x8)));
          if (uVar5 != 0) {
            return uVar5;
          }
          if (((*(long *)(gen_frame + 0x14)) != 0) && (iVar6 = F_00c64dec(param_1), iVar6 != 0)) {
            bVar9 = (*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x10));
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x10));
            (*(int *)(gen_frame + 0xc)) = ((*(int *)(gen_frame + 0xc)) - ((int)(*(uint *)(gen_frame + 0x10)) >> 0x1f)) - (uint)bVar9;
            uVar5 = F_00c52de3(param_1,(__time64_t *)&(*(uint *)(gen_frame + 0x8)));
            if (uVar5 != 0) {
              return uVar5;
            }
            (*(int *)(((char *)(param_1) + 32))) = 1;
          }
        }
        return 0;
      }
                    
      F_00c4c299(0,0,0,0,0,0);
    }
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
  }
  return 0x16;
}

/* ref: FID_conflict___localtime64_00c4f752 */
undefined * F_00c4f752(unsigned int gen_a0)
{
  GEN_ENTER(0xc4f752u, gen_a0, 0u, 0u, 0u);
  int * _Time = (int *)(uintptr_t)gen_a0;
  undefined * ptVar1;
  uint uVar2;
  undefined * ptVar3;
  
  ptVar1 = F_00c64f6d();
  ptVar3 = (undefined *)0x0;
  if (ptVar1 != (undefined *)0x0) {
    uVar2 = F_00c4f4ca(ptVar1,_Time);
    ptVar3 = ((undefined *)GEN_TOP((~-(uint)(uVar2 != 0) & (uint)ptVar1)));
  }
  return ptVar3;
}

/* ref: FUN_00c4f779 */
uint F_00c4f779(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4f779u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1 = param_1 + 2;
  }
  return (uint)param_1;
}

/* ref: __freea */
unsigned int F_00c4f78f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4f78fu, gen_a0, 0u, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  if ((_Memory != (undefined *)0x0) && (*(int *)((int)_Memory + -8) == 0xdddd)) {
    F_00c4c68f((int *)((int)_Memory + -8));
  }
  return 0;
}

/* ref: FUN_00c4f7af */
uint F_00c4f7af(unsigned int gen_a0)
{
  GEN_ENTER(0xc4f7afu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int in_edi;
  uint uVar1;
  gen_size32 sVar2;
  char * pcVar3;
  int eVar4;
  int iVar5;
  
  iVar5 = 0;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x4)),param_1);
  in_edi = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xd4)));
  (*(uint *)(gen_frame + 0x18)) = 0;
  do {
    uVar1 = (*(uint *)(gen_frame + 0x18));
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)F_00c552f0(*(char * PTR32 *)(in_edi + 0x1c + (*(uint *)(gen_frame + 0x18)) * 4));
    sVar2 = F_00c552f0(*(char * PTR32 *)(in_edi + uVar1 * 4));
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
    iVar5 = sVar2 + iVar5 + 2 + (int)(*(char * PTR32 *)(gen_frame + 0x14));
  } while ((*(uint *)(gen_frame + 0x18)) < 7);
  pcVar3 = F_00c54c2e(iVar5 + 1);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar3;
  if (pcVar3 != (char *)0x0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = F_00c49908(pcVar3,(*(char * PTR32 *)(gen_frame + 0x14)) + iVar5 + (1 - (int)pcVar3),
                        *(undefined4 *)(in_edi + (*(uint *)(gen_frame + 0x18)) * 4));
      if (eVar4 != 0) {
LAB_00c4f88a: ;
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      sVar2 = F_00c552f0(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = F_00c49908(pcVar3,(*(char * PTR32 *)(gen_frame + 0x14)) + iVar5 + (1 - (int)pcVar3),
                        *(undefined4 *)(in_edi + 0x1c + (*(uint *)(gen_frame + 0x18)) * 4));
      if (eVar4 != 0) goto LAB_00c4f88a;
      sVar2 = F_00c552f0(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
    } while ((*(uint *)(gen_frame + 0x18)) < 7);
    *pcVar3 = '\0';
  }
  if (((byte *)(gen_frame + 0x4))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return (uint)(*(char * PTR32 *)(gen_frame + 0x14));
}

/* ref: FUN_00c4f8a0 */
uint F_00c4f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc4f8a0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  gen_size32 sVar2;
  char * pcVar3;
  int eVar4;
  int iVar5;
  undefined4 * puVar6;
  
  iVar5 = 0;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),param_1);
  iVar1 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xd4)));
  puVar6 = (undefined4 *)(iVar1 + 0x38);
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)puVar6;
  (*(uint *)(gen_frame + 0x18)) = 0xc;
  do {
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)puVar6;
    (*(gen_size32 *)(gen_frame + 0x10)) = F_00c552f0((char *)puVar6[0xc]);
    sVar2 = F_00c552f0((char *)*puVar6);
    puVar6 = (undefined4 *)((int)(*(char * PTR32 *)(gen_frame + 0x14)) + 4);
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + -1;
    iVar5 = sVar2 + iVar5 + 2 + (*(gen_size32 *)(gen_frame + 0x10));
    (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)puVar6;
  } while ((*(uint *)(gen_frame + 0x18)) != 0);
  pcVar3 = F_00c54c2e(iVar5 + 1);
  (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar3;
  if (pcVar3 != (char *)0x0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    puVar6 = (undefined4 *)(iVar1 + 0x68);
    do {
      *pcVar3 = ':';
      pcVar3 = pcVar3 + 1;
      eVar4 = F_00c49908(pcVar3,(*(char * PTR32 *)(gen_frame + 0x14)) + iVar5 + (1 - (int)pcVar3),puVar6[-0xc]);
      if (eVar4 != 0) {
LAB_00c4f983: ;
                    
        F_00c4c299(puVar6,0,0,0,0,0);
      }
      sVar2 = F_00c552f0(pcVar3);
      pcVar3[sVar2] = ':';
      pcVar3 = pcVar3 + sVar2 + 1;
      eVar4 = F_00c49908(pcVar3,(*(char * PTR32 *)(gen_frame + 0x14)) + iVar5 + (1 - (int)pcVar3),*puVar6);
      if (eVar4 != 0) goto LAB_00c4f983;
      sVar2 = F_00c552f0(pcVar3);
      pcVar3 = pcVar3 + sVar2;
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
      puVar6 = puVar6 + 1;
    } while ((*(uint *)(gen_frame + 0x18)) < 0xc);
    *pcVar3 = '\0';
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return (uint)(*(char * PTR32 *)(gen_frame + 0x14));
}

/* ref: __Gettnames_l */
uint F_00c4f999(unsigned int gen_a0)
{
  GEN_ENTER(0xc4f999u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  gen_size32 sVar5;
  gen_size32 sVar6;
  gen_size32 sVar7;
  gen_size32 sVar8;
  gen_size32 sVar9;
  undefined * pvVar10;
  int eVar11;
  int iVar12;
  char * _Str;
  
  iVar12 = 0;
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),param_1);
  iVar2 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xd4)));
  (*(uint *)(gen_frame + 0x28)) = 0;
  do {
    uVar4 = (*(uint *)(gen_frame + 0x28));
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)F_00c552f0(*(char * PTR32 *)(iVar2 + 0x1c + (*(uint *)(gen_frame + 0x28)) * 4));
    sVar5 = F_00c552f0(*(char * PTR32 *)(iVar2 + uVar4 * 4));
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
    iVar12 = sVar5 + iVar12 + 2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x18));
  } while ((*(uint *)(gen_frame + 0x28)) < 7);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)(iVar2 + 0x38);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)0xc;
  do {
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)F_00c552f0((char *)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[0xc]);
    sVar5 = F_00c552f0((char *)*puVar3);
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + -1);
    iVar12 = sVar5 + iVar12 + 2 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x20));
  } while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0);
  sVar5 = F_00c552f0(*(char * PTR32 *)(iVar2 + 0x9c));
  sVar6 = F_00c552f0(*(char * PTR32 *)(iVar2 + 0x98));
  sVar7 = F_00c552f0(*(char * PTR32 *)(iVar2 + 0xa0));
  sVar8 = F_00c552f0(*(char * PTR32 *)(iVar2 + 0xa4));
  sVar9 = F_00c552f0(*(char * PTR32 *)(iVar2 + 0xa8));
  (*(gen_size32 *)(gen_frame + 0x24)) = sVar6 + iVar12 + sVar5 + sVar7 + sVar8 + 0x169 + sVar9;
  pvVar10 = F_00c54c2e((*(gen_size32 *)(gen_frame + 0x24)));
  if (pvVar10 != (undefined *)0x0) {
    _Str = (char *)((int)pvVar10 + 0x164);
    F_00c46aa0(pvVar10,iVar2,0x164);
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = pvVar10;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)((int)pvVar10 - iVar2);
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)(iVar2 + 0x1c);
    do {
      *(char * PTR32 *)((int)pvVar10 + (*(uint *)(gen_frame + 0x28)) * 4) = _Str;
      eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),(*(undefined4 * PTR32 *)(gen_frame + 0x20))[-7]);
      if (eVar11 != 0) goto LAB_00c4fb1c;
      sVar5 = F_00c552f0(_Str);
      _Str = _Str + sVar5 + 1;
      *(char * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x20))) = _Str;
      eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),*(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
      if (eVar11 != 0) goto LAB_00c4fb1c;
      sVar5 = F_00c552f0(_Str);
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 1;
      _Str = _Str + sVar5 + 1;
    } while ((*(uint *)(gen_frame + 0x28)) < 7);
    (*(uint *)(gen_frame + 0x28)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)((int)pvVar10 + 0x68);
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (undefined4 *)(iVar2 + 0x38);
    do {
      *(char * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))) = _Str;
      eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),*(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
      if (eVar11 != 0) goto LAB_00c4fb1c;
      sVar5 = F_00c552f0(_Str);
      _Str = _Str + sVar5 + 1;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = _Str;
      eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),(*(undefined4 * PTR32 *)(gen_frame + 0x20))[0xc]);
      if (eVar11 != 0) goto LAB_00c4fb1c;
      sVar5 = F_00c552f0(_Str);
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
      _Str = _Str + sVar5 + 1;
    } while ((*(uint *)(gen_frame + 0x28)) < 0xc);
    *(char * PTR32 *)((int)pvVar10 + 0x98) = _Str;
    eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),*(undefined4 *)(iVar2 + 0x98));
    if (eVar11 == 0) {
      sVar5 = F_00c552f0(_Str);
      _Str = _Str + sVar5 + 1;
      *(char * PTR32 *)((int)pvVar10 + 0x9c) = _Str;
      eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),*(undefined4 *)(iVar2 + 0x9c));
      if (eVar11 == 0) {
        sVar5 = F_00c552f0(_Str);
        _Str = _Str + sVar5 + 1;
        *(char * PTR32 *)((int)pvVar10 + 0xa0) = _Str;
        eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),*(undefined4 *)(iVar2 + 0xa0));
        if (eVar11 == 0) {
          sVar5 = F_00c552f0(_Str);
          _Str = _Str + sVar5 + 1;
          *(char * PTR32 *)((int)pvVar10 + 0xa4) = _Str;
          eVar11 = F_00c49908(_Str,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)_Str),*(undefined4 *)(iVar2 + 0xa4)
                            );
          if (eVar11 == 0) {
            sVar5 = F_00c552f0(_Str);
            pcVar1 = _Str + sVar5 + 1;
            *(char * PTR32 *)((int)pvVar10 + 0xa8) = pcVar1;
            eVar11 = F_00c49908(pcVar1,(int)pvVar10 + ((*(gen_size32 *)(gen_frame + 0x24)) - (int)pcVar1),
                               *(undefined4 *)(iVar2 + 0xa8));
            if (eVar11 == 0) goto LAB_00c4fc6f;
          }
        }
      }
    }
LAB_00c4fb1c: ;
                    
    F_00c4c299(_Str,0,0,0,0,0);
  }
LAB_00c4fc6f: ;
  if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return (uint)pvVar10;
}

/* ref: _store_str */
unsigned int F_00c4fc8c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4fc8cu, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  char * in_edx = (char *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *in_eax;
  for (; (iVar1 != 0 && (*in_edx != '\0')); in_edx = in_edx + 1) {
    *(char *)*in_ecx = *in_edx;
    *in_ecx = *in_ecx + 1;
    *in_eax = *in_eax + -1;
    iVar1 = *in_eax;
  }
  return 0;
}

/* ref: _store_num */
unsigned int F_00c4fce2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4fce2u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint in_edx = (uint)gen_a2;
  int * in_edi = (int *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  char cVar1;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  char * pcVar5;
  int local_8;
  
  local_8 = 0;
  if (param_5 == 0) {
    if (in_edx < *in_ecx) {
      iVar3 = in_edx - 1;
      if (in_edx != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *in_edi) = (char)(in_eax % 10) + '0';
          iVar3 = iVar3 + -1;
          in_eax = in_eax / 10;
        } while (iVar3 != -1);
      }
      *in_edi = *in_edi + local_8;
      *in_ecx = *in_ecx - local_8;
    }
    else {
      *in_ecx = 0;
    }
  }
  else {
    uVar2 = *in_ecx;
    pcVar5 = (char *)*in_edi;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_eax / 10;
      *pcVar5 = (char)(in_eax % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *in_ecx = *in_ecx - 1;
      uVar2 = *in_ecx;
      in_eax = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*in_edi;
    *in_edi = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return 0;
}

/* ref: _expandtime */
int F_00c4fd5d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc4fd5du, gen_a0, gen_a1, gen_a2, gen_a3);
  char in_al = (char)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  char * PTR32 * in_edx = (char * PTR32 *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char * in_edx_00;
  bool bVar6;
  bool bVar7;
  undefined4 in_edx_01;
  
  if ('Y' < in_al) {
    if (in_al < 'n') {
      if (in_al == 'm') {
        iVar5 = (*(int *)(((char *)(param_5) + 16)));
        if ((iVar5 < 0) || (0xb < iVar5)) goto LAB_00c5001a;
        iVar5 = iVar5 + 1;
      }
      else {
        if (in_al == 'Z') {
LAB_00c50067: ;
          F_00c64d65();
          uVar3 = F_00c650f6();
          in_edx_00 = *((char * PTR32 *)GEN_TOP((uVar3 + (uint)((*(int *)(((char *)(param_5) + 32))) != 0) * 4)));
LAB_00c50106: ;
          F_00c4fc8c(in_ecx,in_edx,in_edx_00);
          return 1;
        }
        if (in_al == 'a') {
          iVar5 = (*(int *)(((char *)(param_5) + 24)));
          if ((-1 < iVar5) && (iVar5 < 7)) {
            in_edx_00 = (*(char * PTR32 *)(((char *)(param_6) + (iVar5) * 4)));
            goto LAB_00c50106;
          }
          goto LAB_00c5001a;
        }
        if (in_al == 'b') {
          iVar5 = (*(int *)(((char *)(param_5) + 16)));
          if ((-1 < iVar5) && (iVar5 < 0xc)) {
            in_edx_00 = (*((char * PTR32 *)GEN_TOP(((((char *)(param_6) + 56) + (iVar5) * 4)))));
            goto LAB_00c50106;
          }
          goto LAB_00c5001a;
        }
        if (in_al == 'c') {
          iVar5 = F_00c50115(param_4,(uint)(param_7 != 0),param_5,in_edx,in_ecx,param_6);
          if (iVar5 == 0) {
            return 0;
          }
          if (*in_ecx == 0) {
            return 0;
          }
          **in_edx = ' ';
          *in_edx = *in_edx + 1;
          *in_ecx = *in_ecx - 1;
          goto LAB_00c4ffd5;
        }
        if (in_al != 'd') {
          if (in_al != 'j') {
            return 0;
          }
          iVar5 = (*(int *)(((char *)(param_5) + 28)));
          if ((-1 < iVar5) && (iVar5 < 0x16e)) {
            iVar5 = iVar5 + 1;
            in_edx_01 = 3;
            goto LAB_00c4ff9f;
          }
          goto LAB_00c5001a;
        }
        iVar5 = (*(int *)(((char *)(param_5) + 12)));
        if ((iVar5 < 1) || (0x1f < iVar5)) goto LAB_00c5001a;
      }
    }
    else {
      if (in_al == 'p') {
        iVar5 = (*(int *)(((char *)(param_5) + 8)));
        if ((-1 < iVar5) && (iVar5 < 0x18)) {
          if (iVar5 < 0xc) {
            in_edx_00 = (*((char * PTR32 *)GEN_TOP(((((char *)(param_6) + 152) + (0) * 4)))));
          }
          else {
            in_edx_00 = (*((char * PTR32 *)GEN_TOP(((((char *)(param_6) + 152) + (1) * 4)))));
          }
          goto LAB_00c50106;
        }
        goto LAB_00c5001a;
      }
      if (in_al == 'w') {
        iVar5 = (*(int *)(((char *)(param_5) + 24)));
        if ((-1 < iVar5) && (iVar5 < 7)) {
          in_edx_01 = 1;
          goto LAB_00c4ff9f;
        }
        goto LAB_00c5001a;
      }
      if (in_al == 'x') {
        if (param_7 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 1;
        }
        goto LAB_00c4ffdd;
      }
      if (in_al != 'y') {
        if (in_al != 'z') {
          return 0;
        }
        goto LAB_00c50067;
      }
      if ((*(int *)(((char *)(param_5) + 20))) < 0) goto LAB_00c5001a;
      iVar5 = (*(int *)(((char *)(param_5) + 20))) % 100;
    }
    goto LAB_00c4ff9c;
  }
  if (in_al == 'Y') {
    iVar5 = (*(int *)(((char *)(param_5) + 20)));
    if ((iVar5 < -0x76c) || (0x1fa3 < iVar5)) goto LAB_00c5001a;
    in_edx_01 = 4;
    iVar5 = (iVar5 / 100 + 0x13) * 100 + iVar5 % 100;
    goto LAB_00c4ff9f;
  }
  if (in_al < 'J') {
    if (in_al == 'I') {
      iVar5 = (*(int *)(((char *)(param_5) + 8)));
      if ((iVar5 < 0) || (0x17 < iVar5)) goto LAB_00c5001a;
      iVar5 = iVar5 % 0xc;
      if (iVar5 == 0) {
        iVar5 = 0xc;
      }
    }
    else {
      if (in_al == '\x04') {
        return 1;
      }
      if (in_al == '\r') {
        return 1;
      }
      if (in_al == '%') {
        **in_edx = '%';
        *in_edx = *in_edx + 1;
        *in_ecx = *in_ecx - 1;
        return 1;
      }
      if (in_al == 'A') {
        iVar5 = (*(int *)(((char *)(param_5) + 24)));
        if ((iVar5 < 0) || (6 < iVar5)) goto LAB_00c5001a;
        in_edx_00 = (*((char * PTR32 *)GEN_TOP(((((char *)(param_6) + 28) + (iVar5) * 4)))));
        goto LAB_00c50106;
      }
      if (in_al == 'B') {
        iVar5 = (*(int *)(((char *)(param_5) + 16)));
        if ((-1 < iVar5) && (iVar5 < 0xc)) {
          in_edx_00 = (*((char * PTR32 *)GEN_TOP(((((char *)(param_6) + 104) + (iVar5) * 4)))));
          goto LAB_00c50106;
        }
        goto LAB_00c5001a;
      }
      if (in_al != 'H') {
        return 0;
      }
      iVar5 = (*(int *)(((char *)(param_5) + 8)));
      if (iVar5 < 0) goto LAB_00c5001a;
      bVar7 = SBORROW4(iVar5,0x17);
      iVar4 = iVar5 + -0x17;
      bVar6 = iVar5 == 0x17;
LAB_00c4fdc4: ;
      if (!bVar6 && bVar7 == iVar4 < 0) {
LAB_00c5001a: ;
        piVar2 = F_00c51f85();
        *piVar2 = 0x16;
        F_00c4c305();
        return 0;
      }
    }
  }
  else {
    if (in_al == 'M') {
      iVar5 = (*(int *)(((char *)(param_5) + 4)));
      if (iVar5 < 0) goto LAB_00c5001a;
      bVar7 = SBORROW4(iVar5,0x3b);
      iVar4 = iVar5 + -0x3b;
      bVar6 = iVar4 == 0;
      goto LAB_00c4fdc4;
    }
    iVar4 = 6;
    if (in_al == 'S') {
      iVar5 = (*(int *)((char *)(param_5)));
      if ((iVar5 < 0) || (0x3b < iVar5)) goto LAB_00c5001a;
    }
    else {
      if (in_al == 'U') {
        iVar4 = (*(int *)(((char *)(param_5) + 24)));
        if ((iVar4 < 0) || (6 < iVar4)) goto LAB_00c5001a;
      }
      else {
        if (in_al != 'W') {
          if (in_al != 'X') {
            return 0;
          }
LAB_00c4ffd5: ;
          iVar5 = 2;
LAB_00c4ffdd: ;
          iVar5 = F_00c50115(param_4,iVar5,param_5,in_edx,in_ecx,param_6);
          if (iVar5 == 0) {
            return 0;
          }
          return 1;
        }
        iVar5 = (*(int *)(((char *)(param_5) + 24)));
        if ((iVar5 < 0) || (6 < iVar5)) goto LAB_00c5001a;
        if (iVar5 != 0) {
          iVar4 = iVar5 + -1;
        }
      }
      iVar1 = (*(int *)(((char *)(param_5) + 28)));
      if ((iVar1 < 0) || (0x16d < iVar1)) goto LAB_00c5001a;
      if (iVar1 < iVar4) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar1 / 7;
        if (iVar4 <= iVar1 % 7) {
          iVar5 = iVar5 + 1;
        }
      }
    }
  }
LAB_00c4ff9c: ;
  in_edx_01 = 2;
LAB_00c4ff9f: ;
  F_00c4fce2(iVar5,in_ecx,in_edx_01,in_edx,param_7);
  return 1;
}

/* ref: _store_winword */
int F_00c50115(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc50115u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  char * PTR32 * param_4 = (char * PTR32 *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10040];
  undefined1 in_al;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x10038)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined * PTR32 *)(gen_frame + 0x1001c)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x10014)) = param_3;
  (*(undefined * PTR32 *)(gen_frame + 0x10018)) = param_6;
  if (param_2 == 0) {
    pcVar6 = (*(char * PTR32 *)(((char *)(param_6) + 160)));
  }
  else if (param_2 == 1) {
    pcVar6 = (*(char * PTR32 *)(((char *)(param_6) + 164)));
  }
  else {
    pcVar6 = (*(char * PTR32 *)(((char *)(param_6) + 168)));
  }
  if ((*(int *)(((char *)(param_6) + 176))) != 1) {
    (*(gen_code32 *)(gen_frame + 0x10010)) = (((code *)GEN_TOP(gen_imp_GetDateFormatA)));
    if (param_2 == 2) {
      (*(gen_code32 *)(gen_frame + 0x10010)) = (((code *)GEN_TOP(gen_imp_GetTimeFormatA)));
    }
    (*(short *)(gen_frame + 0x10028)) = (short)(*(int *)(((char *)(param_3) + 20))) + 0x76c;
    (*(short *)(gen_frame + 0x1002a)) = (short)(*(int *)(((char *)(param_3) + 16))) + 1;
    (*(undefined2 *)(gen_frame + 0x1002e)) = (short)(*(int *)(((char *)(param_3) + 12)));
    (*(undefined2 *)(gen_frame + 0x10030)) = (short)(*(int *)(((char *)(param_3) + 8)));
    (*(undefined2 *)(gen_frame + 0x10034)) = (short)(*(int *)((char *)(param_3)));
    (*(undefined2 *)(gen_frame + 0x10032)) = (short)(*(int *)(((char *)(param_3) + 4)));
    (*(undefined2 *)(gen_frame + 0x10036)) = 0;
    (*(int *)(gen_frame + 0x1000c)) = ((code *)(*(gen_code32 *)(gen_frame + 0x10010)))((*(int *)(((char *)(param_6) + 172))),0,&(*(short *)(gen_frame + 0x10028)),pcVar6,0,0);
    if ((*(int *)(gen_frame + 0x1000c)) != 0) {
      if ((*(int *)(gen_frame + 0x1000c)) + 8 < 0x401) {
        puVar2 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        (*(char * PTR32 *)(gen_frame + 0x10024)) = (gen_frame + 0x0);
        if (1) {
LAB_00c5020f: ;
          (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)(puVar2 + 2);
        }
      }
      else {
        puVar2 = F_00c51787((*(int *)(gen_frame + 0x1000c)) + 8);
        (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0xdddd;
          goto LAB_00c5020f;
        }
      }
      if ((*(char * PTR32 *)(gen_frame + 0x10024)) != (char *)0x0) {
        (*(char * PTR32 *)(gen_frame + 0x10020)) = (*(char * PTR32 *)(gen_frame + 0x10024));
        iVar3 = ((code *)(*(gen_code32 *)(gen_frame + 0x10010)))((*(int *)(((char *)((*(undefined * PTR32 *)(gen_frame + 0x10018))) + 172))),0,&(*(short *)(gen_frame + 0x10028)),pcVar6,(*(char * PTR32 *)(gen_frame + 0x10024)),(*(int *)(gen_frame + 0x1000c)));
        pcVar6 = (*(char * PTR32 *)(gen_frame + 0x10020));
        while ((iVar3 = iVar3 + -1, 0 < iVar3 && (*param_5 != 0))) {
          **param_4 = *pcVar6;
          *param_4 = *param_4 + 1;
          pcVar6 = pcVar6 + 1;
          *param_5 = *param_5 - 1;
        }
        F_00c4f78f((*(char * PTR32 *)(gen_frame + 0x10024)));
LAB_00c5025d: ;
        iVar3 = 1;
        goto LAB_00c50260;
      }
    }
  }
LAB_00c502f1: ;
  do {
    cVar1 = *pcVar6;
    if ((cVar1 == '\0') || (*param_5 == 0)) goto LAB_00c5025d;
    (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x0;
    (*(char * PTR32 *)(gen_frame + 0x10020)) = pcVar6;
    uVar5 = 0;
    do {
      uVar4 = uVar5;
      (*(char * PTR32 *)(gen_frame + 0x10020)) = (*(char * PTR32 *)(gen_frame + 0x10020)) + 1;
      uVar5 = uVar4 + 1;
    } while (*(*(char * PTR32 *)(gen_frame + 0x10020)) == cVar1);
    iVar3 = (int)cVar1;
    if (iVar3 < 0x65) {
      if (iVar3 == 100) {
        if (uVar4 == 0) {
          (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x1;
        }
        else if (uVar4 != 1) {
          if (uVar4 == 2) {
            in_al = 0x61;
          }
          else {
            if (uVar4 != 3) goto LAB_00c502bd;
            in_al = 0x41;
          }
          goto LAB_00c50544;
        }
        in_al = 100;
        goto LAB_00c50544;
      }
      if (iVar3 == 0x27) {
        pcVar6 = pcVar6 + uVar5;
        if ((uVar5 & 1) != 0) {
          cVar1 = *pcVar6;
          if (cVar1 == '\0') goto LAB_00c5025d;
          do {
            if (*param_5 == 0) break;
            if (cVar1 == '\'') {
              pcVar6 = pcVar6 + 1;
              break;
            }
            iVar3 = F_00c6dfe8((int)cVar1,(*(undefined * PTR32 *)(gen_frame + 0x1001c)));
            if ((iVar3 != 0) && (1 < *param_5)) {
              if (pcVar6[1] == '\0') goto LAB_00c50568;
              **param_4 = *pcVar6;
              *param_4 = *param_4 + 1;
              pcVar6 = pcVar6 + 1;
              *param_5 = *param_5 - 1;
            }
            **param_4 = *pcVar6;
            *param_4 = *param_4 + 1;
            pcVar6 = pcVar6 + 1;
            *param_5 = *param_5 - 1;
            cVar1 = *pcVar6;
          } while (cVar1 != '\0');
        }
        goto LAB_00c502f1;
      }
      if (iVar3 != 0x41) {
        if (iVar3 == 0x48) {
          if (uVar4 == 0) {
            (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x1;
          }
          else if (uVar5 != 2) goto LAB_00c502bd;
          in_al = 0x48;
          goto LAB_00c50544;
        }
        if (iVar3 == 0x4d) {
          if (uVar4 == 0) {
            (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x1;
          }
          else if (uVar4 != 1) {
            if (uVar4 == 2) {
              in_al = 0x62;
            }
            else {
              if (uVar4 != 3) goto LAB_00c502bd;
              in_al = 0x42;
            }
            goto LAB_00c50544;
          }
          in_al = 0x6d;
          goto LAB_00c50544;
        }
        if (iVar3 != 0x61) goto LAB_00c502bd;
      }
      iVar3 = F_00c4c36f(pcVar6,"am/pm");
      if (iVar3 == 0) {
        (*(char * PTR32 *)(gen_frame + 0x10020)) = pcVar6 + 5;
LAB_00c5036c: ;
      }
      else {
        iVar3 = F_00c4c36f(pcVar6,((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1118b68)))));
        if (iVar3 == 0) {
          (*(char * PTR32 *)(gen_frame + 0x10020)) = pcVar6 + 3;
          goto LAB_00c5036c;
        }
      }
      in_al = 0x70;
    }
    else if (iVar3 == 0x68) {
      if (uVar4 == 0) {
        (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x1;
      }
      else if (uVar5 != 2) goto LAB_00c502bd;
      in_al = 0x49;
    }
    else if (iVar3 == 0x6d) {
      if (uVar4 == 0) {
        (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x1;
      }
      else if (uVar5 != 2) goto LAB_00c502bd;
      in_al = 0x4d;
    }
    else if (iVar3 == 0x73) {
      if (uVar4 == 0) {
        (*(char * PTR32 *)(gen_frame + 0x10024)) = (char *)0x1;
      }
      else if (uVar5 != 2) goto LAB_00c502bd;
      in_al = 0x53;
    }
    else {
      if (iVar3 == 0x74) {
        if ((*(int *)(((char *)((*(undefined * PTR32 *)(gen_frame + 0x10014))) + 8))) < 0xc) {
          pcVar7 = (*((char * PTR32 *)GEN_TOP(((((char *)((*(undefined * PTR32 *)(gen_frame + 0x10018))) + 152) + (0) * 4)))));
        }
        else {
          pcVar7 = (*((char * PTR32 *)GEN_TOP(((((char *)((*(undefined * PTR32 *)(gen_frame + 0x10018))) + 152) + (1) * 4)))));
        }
        if ((uVar5 == 1) && (*param_5 != 0)) {
          iVar3 = F_00c6dfe8((int)*pcVar7,(*(undefined * PTR32 *)(gen_frame + 0x1001c)));
          if ((iVar3 != 0) && (1 < *param_5)) {
            if (pcVar7[1] == '\0') break;
            **param_4 = *pcVar7;
            *param_4 = *param_4 + 1;
            pcVar7 = pcVar7 + 1;
            *param_5 = *param_5 - 1;
          }
          **param_4 = *pcVar7;
          *param_4 = *param_4 + 1;
          *param_5 = *param_5 - 1;
          pcVar6 = (*(char * PTR32 *)(gen_frame + 0x10020));
        }
        else {
          while ((pcVar6 = (*(char * PTR32 *)(gen_frame + 0x10020)), *pcVar7 != '\0' && (*param_5 != 0))) {
            iVar3 = F_00c6dfe8((int)*pcVar7,(*(undefined * PTR32 *)(gen_frame + 0x1001c)));
            if ((iVar3 != 0) && (1 < *param_5)) {
              if (pcVar7[1] == '\0') goto LAB_00c50568;
              **param_4 = *pcVar7;
              *param_4 = *param_4 + 1;
              pcVar7 = pcVar7 + 1;
              *param_5 = *param_5 - 1;
            }
            **param_4 = *pcVar7;
            *param_4 = *param_4 + 1;
            pcVar7 = pcVar7 + 1;
            *param_5 = *param_5 - 1;
          }
        }
        goto LAB_00c502f1;
      }
      if (iVar3 != 0x79) {
LAB_00c502bd: ;
        iVar3 = F_00c6dfe8(iVar3,(*(undefined * PTR32 *)(gen_frame + 0x1001c)));
        if ((iVar3 != 0) && (1 < *param_5)) {
          if (pcVar6[1] == '\0') break;
          **param_4 = *pcVar6;
          *param_4 = *param_4 + 1;
          pcVar6 = pcVar6 + 1;
          *param_5 = *param_5 - 1;
        }
        **param_4 = *pcVar6;
        *param_4 = *param_4 + 1;
        *param_5 = *param_5 - 1;
        pcVar6 = pcVar6 + 1;
        goto LAB_00c502f1;
      }
      if (uVar4 == 1) {
        in_al = 0x79;
      }
      else {
        if (uVar4 != 3) goto LAB_00c502bd;
        in_al = 0x59;
      }
    }
LAB_00c50544: ;
    iVar3 = F_00c4fd5d(in_al,param_5,param_4,(*(undefined * PTR32 *)(gen_frame + 0x1001c)),(*(undefined * PTR32 *)(gen_frame + 0x10014)),(*(undefined * PTR32 *)(gen_frame + 0x10018)),(*(char * PTR32 *)(gen_frame + 0x10024)));
    pcVar6 = (*(char * PTR32 *)(gen_frame + 0x10020));
  } while (iVar3 != 0);
LAB_00c50568: ;
  iVar3 = 0;
LAB_00c50260: ;
  F_00c47745((*(uint *)(gen_frame + 0x10038)) ^ (uint)(uint)(gen_frame + 0x3c));
  return iVar3;
}

/* ref: __Strftime_l */
uint F_00c5056f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc5056fu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  char * pcVar5;
  char * pcVar6;
  
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x1c)) = (*(char * PTR32 *)&gen_args[0]);
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[5]));
  uVar2 = (*(uint *)&gen_args[1]);
  if ((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  if ((*(uint *)&gen_args[1]) == 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  *(*(char * PTR32 *)&gen_args[0]) = '\0';
  if ((*(char * PTR32 *)&gen_args[2]) != (char *)0x0) {
    (*(int *)(gen_frame + 0x20)) = (*(int *)&gen_args[4]);
    if ((*(int *)&gen_args[4]) == 0) {
      (*(int *)(gen_frame + 0x20)) = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xd4)));
    }
    (*(uint *)(gen_frame + 0x28)) = (*(uint *)&gen_args[1]);
    pcVar5 = (*(char * PTR32 *)&gen_args[2]);
    if ((*(uint *)&gen_args[1]) != 0) {
      do {
        cVar1 = *pcVar5;
        if (cVar1 == '\0') break;
        if (cVar1 == '%') {
          if ((*(int *)&gen_args[3]) == 0) goto LAB_00c506d8;
          pcVar6 = pcVar5 + 1;
          cVar1 = *pcVar6;
          if (cVar1 == '#') {
            pcVar6 = pcVar5 + 2;
          }
          iVar4 = F_00c4fd5d(*pcVar6,&(*(uint *)(gen_frame + 0x28)),&(*(char * PTR32 *)&gen_args[0]),((byte *)(gen_frame + 0xc)),(*(int *)&gen_args[3]),(*(int *)(gen_frame + 0x20)),(uint)(cVar1 == '#')
                             );
          if (iVar4 == 0) {
            if ((*(uint *)(gen_frame + 0x28)) != 0) {
              (*(int *)(gen_frame + 0x24)) = 1;
            }
            goto LAB_00c506ae;
          }
        }
        else {
          iVar4 = F_00c6dfe8((int)cVar1,(undefined *)((byte *)(gen_frame + 0xc)));
          pcVar6 = pcVar5;
          if ((iVar4 != 0) && (1 < (*(uint *)(gen_frame + 0x28)))) {
            pcVar6 = pcVar5 + 1;
            if (*pcVar6 == '\0') {
              (*(int *)(gen_frame + 0x24)) = 1;
              goto LAB_00c506ae;
            }
            *(*(char * PTR32 *)&gen_args[0]) = *pcVar5;
            (*(char * PTR32 *)&gen_args[0]) = (*(char * PTR32 *)&gen_args[0]) + 1;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          }
          *(*(char * PTR32 *)&gen_args[0]) = *pcVar6;
          (*(char * PTR32 *)&gen_args[0]) = (*(char * PTR32 *)&gen_args[0]) + 1;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        }
        pcVar5 = pcVar6 + 1;
      } while ((*(uint *)(gen_frame + 0x28)) != 0);
      if ((*(uint *)(gen_frame + 0x28)) != 0) {
        *(*(char * PTR32 *)&gen_args[0]) = '\0';
        if (((byte *)(gen_frame + 0xc))[0xc] == 0) {
          return uVar2 - (*(uint *)(gen_frame + 0x28));
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        return uVar2 - (*(uint *)(gen_frame + 0x28));
      }
    }
LAB_00c506ae: ;
    *(*(char * PTR32 *)(gen_frame + 0x1c)) = '\0';
    if (((*(int *)(gen_frame + 0x24)) == 0) && ((*(uint *)(gen_frame + 0x28)) == 0)) {
      piVar3 = F_00c51f85();
      *piVar3 = 0x22;
      goto LAB_00c506e8;
    }
  }
LAB_00c506d8: ;
  piVar3 = F_00c51f85();
  *piVar3 = 0x16;
  F_00c4c305();
LAB_00c506e8: ;
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return 0;
}

/* ref: __strftime_l */
gen_size32 F_00c506fb(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc506fbu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  gen_size32 _Max_size = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Tm = (undefined *)(uintptr_t)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c5056f(_Buf,_Max_size,_Format,_Tm,0,_Locale);
  return uVar1;
}

/* ref: _strftime */
gen_size32 F_00c5071b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5071bu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Buf = (char *)(uintptr_t)gen_a0;
  gen_size32 _SizeInBytes = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Tm = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5056f(_Buf,_SizeInBytes,_Format,_Tm,0,0);
  return uVar1;
}

/* ref: __Strftime */
gen_size32 F_00c5073a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc5073au, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  gen_size32 _Maxsize = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c5056f(param_1,_Maxsize,param_3,param_4,param_5,0);
  return uVar1;
}

/* ref: _fputs */
int F_00c5075a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc5075au, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * _File_00;
  int * piVar1;
  uint uVar2;
  int _Flag;
  undefined * puVar3;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f60d8);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc50766;
  if (((*(char * PTR32 *)&gen_args[0]) != (char *)0x0) && ((*(undefined * PTR32 *)&gen_args[1]) != (undefined *)0x0)) {
    if (((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[1])) + 12))))) & 0x40) != 0) {
LAB_00c507fd: ;
      (*(gen_size32 *)(gen_frame + 0x10)) = F_00c552f0((*(char * PTR32 *)&gen_args[0]));
      F_00c50937(_File_00);
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      _Flag = F_00c5df50(_File_00);
      (*(gen_size32 *)(gen_frame + 0xc)) = F_00c490d4((*(char * PTR32 *)&gen_args[0]),1,(*(gen_size32 *)(gen_frame + 0x10)),_File_00);
      F_00c5dfec(_Flag,_File_00);
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
      F_00c50858(_File_00);
      return ((*(gen_size32 *)(gen_frame + 0xc)) == (*(gen_size32 *)(gen_frame + 0x10))) - 1;
    }
    uVar2 = F_00c5d07b((*(undefined * PTR32 *)&gen_args[1]));
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
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c507fd;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return -1;
}

/* ref: FUN_00c50855 */
uint F_00c50855(unsigned int gen_a0)
{
  GEN_ENTER(0xc50855u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00c50858 */
uint F_00c50858(unsigned int gen_a0)
{
  GEN_ENTER(0xc50858u, gen_a0, 0u, 0u, 0u);
  undefined * in_edi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_edi);
  return extraout_EAX;
}

/* ref: FUN_00c50860 */
uint F_00c50860(void)
{
  GEN_ENTER(0xc50860u, 0u, 0u, 0u, 0u);
  return 0x134ac50;
}

/* ref: FUN_00c50866 */
uint F_00c50866(void)
{
  GEN_ENTER(0xc50866u, 0u, 0u, 0u, 0u);
  gen_size32 sVar1;
  undefined * PTR32 * ppuVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  
  sVar1 = 0x14;
  if (REFG(undefined4, 0x15e52c0) == 0) {
    sVar1 = 0x200;
  }
  else if (0x13 < (int)REFG(undefined4, 0x15e52c0)) goto LAB_00c50885;
  REFG(undefined4, 0x15e52c0) = sVar1;
LAB_00c50885: ;
  REFG(undefined4, 0x15e42a8) = F_00c54c73(REFG(undefined4, 0x15e52c0),4);
  if (REFG(undefined4, 0x15e42a8) == (undefined *)0x0) {
    REFG(undefined4, 0x15e52c0) = 0x14;
    REFG(undefined4, 0x15e42a8) = F_00c54c73(0x14,4);
    if (REFG(undefined4, 0x15e42a8) == (undefined *)0x0) {
      return 0x1a;
    }
  }
  iVar4 = 0;
  ppuVar2 = &REFG(undefined * PTR32, 0x134ac50);
  do {
    *(undefined * PTR32 * PTR32 *)(iVar4 + (int)REFG(undefined4, 0x15e42a8)) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar4 = iVar4 + 4;
  } while ((int)ppuVar2 < 0x134aed0);
  uVar5 = 0;
  puVar3 = &REFG(undefined4, 0x134ac60);
  do {
    iVar4 = *((int *)GEN_TOP(((uVar5 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar5 >> 5])));
    if (((iVar4 == -1) || (iVar4 == -2)) || (iVar4 == 0)) {
      *puVar3 = 0xfffffffe;
    }
    puVar3 = puVar3 + 8;
    uVar5 = uVar5 + 1;
  } while ((int)puVar3 < 0x134acc0);
  return 0;
}

/* ref: FUN_00c50917 */
uint F_00c50917(void)
{
  GEN_ENTER(0xc50917u, 0u, 0u, 0u, 0u);
  uint extraout_EAX = 0;
  
  F_00c50f36();
  if (REFG(undefined4, 0x15d6858) != '\0') {
    F_00c6e5bc();
  }
  F_00c4c68f(REFG(undefined4, 0x15e42a8));
  return extraout_EAX;
}

/* ref: __lock_file */
unsigned int F_00c50937(unsigned int gen_a0)
{
  GEN_ENTER(0xc50937u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  if ((_File < &REFG(undefined * PTR32, 0x134ac50)) || ((undefined *)&REFG(undefined, 0x134aeb0) < _File)) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(_File + (1) * 32));
  }
  else {
    F_00c5aa4f(((int)&(*((int *)GEN_TOP(((((char *)(_File) + (-0x9a563) * 32) + 16))))) >> 5) + 0x10);
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x8000;
  }
  return 0;
}

/* ref: __lock_file2 */
unsigned int F_00c50978(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc50978u, gen_a0, gen_a1, 0u, 0u);
  int _Index = (int)gen_a0;
  undefined * _File = (undefined *)(uintptr_t)gen_a1;
  if (_Index < 0x14) {
    F_00c5aa4f(_Index + 0x10);
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) | 0x8000;
    return 0;
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return 0;
}

/* ref: __unlock_file */
unsigned int F_00c509aa(unsigned int gen_a0)
{
  GEN_ENTER(0xc509aau, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  if (((undefined *)0x134ac4f < _File) && (_File < (undefined *)0x134aeb1)) {
    (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffff7fff;
    F_00c5a95e(((int)&(*((int *)GEN_TOP(((((char *)(_File) + (-0x9a563) * 32) + 16))))) >> 5) + 0x10);
    return 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(_File + (1) * 32));
  return 0;
}

/* ref: __unlock_file2 */
unsigned int F_00c509e6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc509e6u, gen_a0, gen_a1, 0u, 0u);
  int _Index = (int)gen_a0;
  undefined * _File = (undefined *)(uintptr_t)gen_a1;
  if (_Index < 0x14) {
    *(uint *)((int)_File + 0xc) = *(uint *)((int)_File + 0xc) & 0xffff7fff;
    F_00c5a95e(_Index + 0x10);
    return 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)_File + 0x20));
  return 0;
}

/* ref: FID_conflict:_fputc */
int F_00c50a15(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc50a15u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * _File_00;
  int * piVar1;
  uint uVar2;
  undefined * puVar3;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f60f8);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc50a21;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File_00);
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
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c50acb;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c50acb: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    piVar1 = &(*(int *)(((char *)(_File_00) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      (*(uint *)(gen_frame + 0x0)) = F_00c567c4((*(int *)&gen_args[0]),_File_00);
    }
    else {
      *(*(char * PTR32 *)((char *)(_File_00))) = (char)(*(int *)&gen_args[0]);
      (*(uint *)(gen_frame + 0x0)) = (*(int *)&gen_args[0]) & 0xff;
      (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c50b09(_File_00);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c50b06 */
uint F_00c50b06(unsigned int gen_a0)
{
  GEN_ENTER(0xc50b06u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: FUN_00c50b09 */
uint F_00c50b09(unsigned int gen_a0)
{
  GEN_ENTER(0xc50b09u, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FUN_00c50c02 */
uint F_00c50c02(unsigned int gen_a0)
{
  GEN_ENTER(0xc50c02u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: __ungetc_nolock */
int F_00c50c0d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc50c0du, gen_a0, gen_a1, 0u, 0u);
  int _Ch = (int)gen_a0;
  undefined * _File = (undefined *)(uintptr_t)gen_a1;
  char * pcVar1;
  uint uVar2;
  int * piVar3;
  undefined * puVar4;
  
  if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar4 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar4 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
    }
    if ((puVar4[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar4 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar4 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar4[0x24] & 0x80) == 0) goto LAB_00c50c90;
    }
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
  }
  else {
LAB_00c50c90: ;
    if (_Ch != -1) {
      uVar2 = (*(int *)(((char *)(_File) + 12)));
      if (((uVar2 & 1) != 0) || (((char)uVar2 < '\0' && ((uVar2 & 2) == 0)))) {
        if ((*(char * PTR32 *)(((char *)(_File) + 8))) == (char *)0x0) {
          F_00c6e658(_File);
        }
        if ((*(char * PTR32 *)((char *)(_File))) == (*(char * PTR32 *)(((char *)(_File) + 8)))) {
          if ((*(int *)(((char *)(_File) + 4))) != 0) {
            return -1;
          }
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + 1;
        }
        (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + -1;
        pcVar1 = (*(char * PTR32 *)((char *)(_File)));
        if (((*(int *)(((char *)(_File) + 12))) & 0x40) == 0) {
          *pcVar1 = (char)_Ch;
        }
        else if (*pcVar1 != (char)_Ch) {
          (*(char * PTR32 *)((char *)(_File))) = pcVar1 + 1;
          return -1;
        }
        (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) + 1;
        (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xffffffefU | 1;
        return _Ch & 0xff;
      }
    }
  }
  return -1;
}

/* ref: _ungetc */
int F_00c50cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc50cf0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6138);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc50cfc;
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(int *)(gen_frame + 0x0)) = -1;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    (*(int *)(gen_frame + 0x0)) = F_00c50c0d((*(int *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c50d4f((gen_frame + 0x1c));
  }
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c50d4f */
uint F_00c50d4f(unsigned int gen_a0)
{
  GEN_ENTER(0xc50d4fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0xc));
  return extraout_EAX;
}

/* ref: __flush */
int F_00c50d59(unsigned int gen_a0)
{
  GEN_ENTER(0xc50d59u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int _FileHandle;
  uint uVar1;
  int iVar2;
  uint uVar3;
  char * _Buf;
  
  iVar2 = 0;
  if ((((byte)(*(int *)(((char *)(_File) + 12))) & 3) == 2) && (((*(int *)(((char *)(_File) + 12))) & 0x108U) != 0)) {
    _Buf = (*(char * PTR32 *)(((char *)(_File) + 8)));
    uVar3 = (int)(*(char * PTR32 *)((char *)(_File))) - (int)_Buf;
    if (0 < (int)uVar3) {
      uVar1 = uVar3;
      _FileHandle = F_00c5d07b(_File);
      uVar1 = F_00c5de4b(_FileHandle,_Buf,uVar1);
      if (uVar1 == uVar3) {
        if ((char)(*(int *)(((char *)(_File) + 12))) < '\0') {
          (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) & 0xfffffffd;
        }
      }
      else {
        (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x20;
        iVar2 = -1;
      }
    }
  }
  (*(int *)(((char *)(_File) + 4))) = 0;
  (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)(((char *)(_File) + 8)));
  return iVar2;
}

/* ref: __fflush_nolock */
int F_00c50dc1(unsigned int gen_a0)
{
  GEN_ENTER(0xc50dc1u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  if (_File == (undefined *)0x0) {
    uVar1 = F_00c50e09(0);
  }
  else {
    iVar2 = F_00c50d59(_File);
    if (iVar2 == 0) {
      if (((*(int *)(((char *)(_File) + 12))) & 0x4000U) == 0) {
        uVar1 = 0;
      }
      else {
        iVar2 = F_00c5d07b(_File);
        iVar2 = F_00c6e6a1(iVar2);
        uVar1 = -(uint)(iVar2 != 0);
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: flsall */
uint F_00c50e09(unsigned int gen_a0)
{
  GEN_ENTER(0xc50e09u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int * piVar1;
  undefined * _File;
  undefined * _File_00;
  int iVar2;
  int _Index;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6158);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc50e15;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  F_00c5aa4f(1);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
  for (_Index = 0; (*(int *)(gen_frame + 0xc)) = _Index, _Index < REFG(int, 0x15e52c0); _Index = _Index + 1) {
    piVar1 = (int *)(REFG(int, 0x15e42a8) + _Index * 4);
    if ((*piVar1 != 0) && (_File = (undefined *)*piVar1, (*(byte *)((int)_File + 0xc) & 0x83) != 0)) {
      F_00c50978(_Index,_File);
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x1;
      _File_00 = *(undefined * PTR32 *)(REFG(int, 0x15e42a8) + _Index * 4);
      if (((*(int *)(((char *)(_File_00) + 12))) & 0x83U) != 0) {
        if ((*(int *)&gen_args[0]) == 1) {
          iVar2 = F_00c50dc1(_File_00);
          if (iVar2 != -1) {
            (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
          }
        }
        else if (((*(int *)&gen_args[0]) == 0) && (((*(int *)(((char *)(_File_00) + 12))) & 2U) != 0)) {
          iVar2 = F_00c50dc1(_File_00);
          if (iVar2 == -1) {
            (*(uint *)(gen_frame + 0x8)) = 0xffffffff;
          }
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      F_00c50eab(_Index);
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
  F_00c50eda();
  if ((*(int *)&gen_args[0]) != 1) {
    (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x8));
  }
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00c50ea6 */
uint F_00c50ea6(unsigned int gen_a0)
{
  GEN_ENTER(0xc50ea6u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509e6(*(int *)(in_ebp + -0x20),*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + *(int *)(in_ebp + -0x20) * 4))));
  return extraout_EAX;
}

/* ref: FUN_00c50eab */
uint F_00c50eab(unsigned int gen_a0)
{
  GEN_ENTER(0xc50eabu, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509e6(in_esi,*(undefined * PTR32 *)(REFG(int, 0x15e42a8) + in_esi * 4));
  return extraout_EAX;
}

/* ref: FUN_00c50eda */
uint F_00c50eda(void)
{
  GEN_ENTER(0xc50edau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: _fflush */
int F_00c50ee3(unsigned int gen_a0)
{
  GEN_ENTER(0xc50ee3u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6180);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc50eef;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x0)) = F_00c50e09(0);
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    (*(uint *)(gen_frame + 0x0)) = F_00c50dc1((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c50f2c((gen_frame + 0x1c));
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c50f2c */
uint F_00c50f2c(unsigned int gen_a0)
{
  GEN_ENTER(0xc50f2cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c50f36 */
uint F_00c50f36(void)
{
  GEN_ENTER(0xc50f36u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c50e09(1);
  return uVar1;
}

/* ref: _setvbuf */
int F_00c50f3f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc50f3fu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * _File_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint _Size_00;
  
  iVar1 = (*(int *)&gen_args[2]);
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f61a0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc50f4b;
  (*(int *)(gen_frame + 0x0)) = 0;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) goto LAB_00c50f5d;
  if ((*(int *)&gen_args[2]) == 4) {
LAB_00c50f86: ;
    if (((*(int *)&gen_args[2]) == 0) || ((*(int *)&gen_args[2]) == 0x40)) goto LAB_00c50f8f;
  }
  else {
    if ((*(int *)&gen_args[2]) != 0) {
      if ((*(int *)&gen_args[2]) != 0x40) goto LAB_00c50f5d;
      goto LAB_00c50f86;
    }
LAB_00c50f8f: ;
    if (0x7ffffffd < (*(gen_size32 *)&gen_args[3]) - 2) {
LAB_00c50f5d: ;
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      return -1;
    }
  }
  _Size_00 = (*(gen_size32 *)&gen_args[3]) & 0xfffffffe;
  F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  F_00c50d59(_File_00);
  F_00c5df1f(_File_00);
  (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) & 0xffffc2f3;
  if ((iVar1 & 4U) == 0) {
    if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
      uVar3 = (*(int *)(((char *)(_File_00) + 12))) | 0x500;
      piVar2 = (int *)(*(char * PTR32 *)&gen_args[1]);
      goto LAB_00c51007;
    }
    piVar2 = F_00c54c2e(_Size_00);
    if (piVar2 == (int *)0x0) {
      *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
      (*(int *)(gen_frame + 0x0)) = -1;
      goto LAB_00c51016;
    }
    (*(int *)(((char *)(_File_00) + 12))) = (*(int *)(((char *)(_File_00) + 12))) | 0x408;
  }
  else {
    uVar3 = (*(int *)(((char *)(_File_00) + 12))) | 4;
    _Size_00 = 2;
    piVar2 = &(*(int *)(((char *)(_File_00) + 20)));
LAB_00c51007: ;
    (*(int *)(((char *)(_File_00) + 12))) = uVar3;
  }
  (*(int *)(((char *)(_File_00) + 24))) = _Size_00;
  (*(char * PTR32 *)(((char *)(_File_00) + 8))) = (char *)piVar2;
  (*(char * PTR32 *)((char *)(_File_00))) = (char *)piVar2;
  (*(int *)(((char *)(_File_00) + 4))) = 0;
LAB_00c51016: ;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c5102b((gen_frame + 0x1c));
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c5102b */
uint F_00c5102b(unsigned int gen_a0)
{
  GEN_ENTER(0xc5102bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: _fgetpos */
int F_00c51035(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc51035u, gen_a0, gen_a1, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  longlong * _Pos = (longlong *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  longlong lVar3;
  
  if (_File == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  if (_Pos == (longlong *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    iVar2 = -1;
  }
  else {
    lVar3 = F_00c6eac4(_File);
    iVar2 = -1;
    *_Pos = lVar3;
    if (lVar3 != -1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

/* ref: __fseeki64_nolock */
int F_00c51090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc51090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  int * piVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = CONCAT44(param_3,param_2);
  if ((((*(int *)(((char *)(param_1) + 12))) & 0x83U) == 0) || (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
  }
  else {
    (*(int *)(((char *)(param_1) + 12))) = (*(int *)(((char *)(param_1) + 12))) & 0xffffffef;
    if (param_4 == 1) {
      lVar4 = F_00c6e77a(param_1);
      lVar5 = lVar4 + lVar5;
      param_4 = 0;
    }
    F_00c50d59(param_1);
    uVar1 = (*(int *)(((char *)(param_1) + 12)));
    if ((char)uVar1 < '\0') {
      (*(int *)(((char *)(param_1) + 12))) = uVar1 & 0xfffffffc;
    }
    else if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
      (*(int *)(((char *)(param_1) + 24))) = 0x200;
    }
    iVar2 = F_00c5d07b(param_1);
    lVar5 = F_00c6de26(iVar2,(int)lVar5,(int)((ulonglong)lVar5 >> 0x20),param_4);
    if (lVar5 != -1) {
      return 0;
    }
  }
  return -1;
}

/* ref: __fseeki64 */
int F_00c5112c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc5112cu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = (*(int *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f61c0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc51138;
  if (((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) || ((((*(int *)&gen_args[3]) != 0 && ((*(int *)&gen_args[3]) != 1)) && ((*(int *)&gen_args[3]) != 2)))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    (*(int *)(gen_frame + 0x0)) = -1;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    (*(int *)(gen_frame + 0x0)) = F_00c51090((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c511a1((gen_frame + 0x1c));
  }
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c511a1 */
uint F_00c511a1(unsigned int gen_a0)
{
  GEN_ENTER(0xc511a1u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: _fsetpos */
int F_00c511ab(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc511abu, gen_a0, gen_a1, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  longlong * _Pos = (longlong *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  if ((_File != (undefined *)0x0) && (_Pos != (longlong *)0x0)) {
    iVar2 = F_00c5112c(_File,(int)*_Pos,*(undefined4 *)((int)_Pos + 4),0);
    return iVar2;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return -1;
}

/* ref: FUN_00c511e6 */
uint F_00c511e6(unsigned int gen_a0)
{
  GEN_ENTER(0xc511e6u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  BOOL BVar1;
  ulong uVar2;
  
  BVar1 = gen_imp_CreateDirectoryW(param_1,(GEN_LPANY)0x0);
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

/* ref: _strrchr */
char * F_00c51220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc51220u, gen_a0, gen_a1, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  int _Ch = (int)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  char * pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}

/* ref: __copysign */
double F_00c5124d(double gen_a0, double gen_a1)
{
  GEN_ENTER(0xc5124du, 0u, 0u, 0u, 0u);
  unsigned int gen_args[4];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[2], &gen_a1, sizeof gen_a1);
  return gen_bits2d(CONCAT44(((*(undefined4 *)((char *)&(*(double *)&gen_args[2]) + 4)) ^ (*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 4))) & 0x7fffffff ^ (*(undefined4 *)((char *)&(*(double *)&gen_args[2]) + 4)),
                             (int)(ulonglong)gen_d2bits((*(double *)&gen_args[0]))));
}

/* ref: __chgsign */
double F_00c51275(double gen_a0)
{
  GEN_ENTER(0xc51275u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  double local_c;
  
  local_c = gen_bits2d(CONCAT44(~(*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 4)),(int)(ulonglong)gen_d2bits((*(double *)&gen_args[0]))) ^ 0x7fffffff00000000);
  return local_c;
}

/* ref: FID_conflict:__scalb */
double F_00c512a2(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc512a2u, 0u, gen_a1, 0u, 0u);
  double _X = (double)gen_a0;
  long _Y = (long)gen_a1;
  double dVar1;
  
  dVar1 = F_00c52a5e(_X,_Y);
  return dVar1;
}

/* ref: FUN_00c512bc */
float10 F_00c512bc(double gen_a0)
{
  GEN_ENTER(0xc512bcu, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  uVar2 = F_00c6f59e(0x133f,0xffff);
  uVar4 = (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0;
  uVar3 = (uint)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20);
  if ((short)uVar4 == 0x7ff0) {
    uVar4 = uVar3;
    uVar3 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),uVar3);
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 3) {
        F_00c6f59e(uVar2,0xffff);
        goto LAB_00c5139e;
      }
      if (uVar3 == 3) {
        fVar5 = F_00c6f323(0x25,(*(double *)&gen_args[0]),uVar2);
        return fVar5;
      }
    }
    dVar1 = (*(double *)&gen_args[0]) + REFG(double, 0x1088130);
    uVar6 = 8;
  }
  else {
    if (GEN_ISNAN((*(double *)&gen_args[0])) == (GEN_ISNAN((*(double *)&gen_args[0])) || (*(double *)&gen_args[0]) == 0.0)) {
      F_00c6ec33((*(double *)&gen_args[0]),&(*(int *)(gen_frame + 0x8)));
      (*(double *)&gen_args[0]) = (double)((*(int *)(gen_frame + 0x8)) + -1);
      F_00c6f59e(uVar2,0xffff);
LAB_00c5139e: ;
      return (float10)(*(double *)&gen_args[0]);
    }
    dVar1 = -*(double *)&REFG(undefined, 0x134bc90);
    uVar6 = 4;
  }
  fVar5 = F_00c6f3d9(uVar4,uVar6,0x25,(*(double *)&gen_args[0]),dVar1,uVar2);
  return fVar5;
}

/* ref: FUN_00c513a5 */
float10 F_00c513a5(unsigned int gen_a0, unsigned int gen_a1, double gen_a2)
{
  GEN_ENTER(0xc513a5u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  
  (*(double *)(gen_frame + 0x0)) = 0.0;
  (*(uint *)(gen_frame + 0x8)) = F_00c6f59e(0x133f,0xffff);
  uVar2 = 0x7ff0;
  if ((((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff0) == 0x7ff0) || (((*(undefined2 *)((char *)&(*(double *)&gen_args[2]) + 6)) & 0x7ff0) == 0x7ff0)) {
    if (((((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff8) == 0x7ff0) && ((((*(uint *)&gen_args[1]) & 0x7ffff) != 0 || ((*(uint *)&gen_args[0]) != 0)))) ||
       ((((*(undefined2 *)((char *)&(*(double *)&gen_args[2]) + 6)) & 0x7ff8) == 0x7ff0 &&
        ((((ulonglong)gen_d2bits((*(double *)&gen_args[2])) & 0x7ffff00000000) != 0 || ((*(undefined4 *)((char *)&(*(double *)&gen_args[2]) + 0)) != 0)))))) {
      dVar7 = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0])))) + (*(double *)&gen_args[2]);
      dVar6 = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0]))));
      uVar5 = 8;
      goto LAB_00c51450;
    }
    if ((((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff8) == 0x7ff8) || (((*(undefined2 *)((char *)&(*(double *)&gen_args[2]) + 6)) & 0x7ff8) == 0x7ff8)) {
      fVar4 = F_00c6f378(0x26,GEN_TOD(gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),
                                                      CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0]))))),
                             (*(double *)&gen_args[2]),(*(uint *)(gen_frame + 0x8)));
      return fVar4;
    }
  }
  dVar7 = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0]))));
  if ((GEN_ISNAN(dVar7) || GEN_ISNAN((*(double *)&gen_args[2]))) != ((GEN_ISNAN(dVar7) || GEN_ISNAN((*(double *)&gen_args[2]))) || dVar7 == (*(double *)&gen_args[2]))) {
    F_00c6f59e((*(uint *)(gen_frame + 0x8)),0xffff);
    return ((float10)GEN_TOD(gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0]))))));
  }
  if (GEN_ISNAN(dVar7) != (GEN_ISNAN(dVar7) || dVar7 == 0.0)) {
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0)) = 1;
    if (!(dVar7 <= (*(double *)&gen_args[2])) || ((GEN_ISNAN((*(double *)&gen_args[2])) || GEN_ISNAN(dVar7)) || (*(double *)&gen_args[2]) == dVar7)) {
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0x80000000;
      (*(double *)(gen_frame + 0x0)) = -4.94065645841247e-324;
    }
    else {
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = 0;
      (*(double *)(gen_frame + 0x0)) = 4.94065645841247e-324;
    }
  }
  if (((!(dVar7 <= 0.0) != GEN_ISNAN(dVar7)) && (!(dVar7 <= (*(double *)&gen_args[2])) != (GEN_ISNAN((*(double *)&gen_args[2])) || GEN_ISNAN(dVar7)))) ||
     ((dVar7 <= 0.0 && (!GEN_ISNAN(dVar7) && dVar7 != 0.0) &&
      (dVar7 <= (*(double *)&gen_args[2]) && ((!GEN_ISNAN((*(double *)&gen_args[2])) && !GEN_ISNAN(dVar7)) && (*(double *)&gen_args[2]) != dVar7))))) {
    iVar1 = (*(uint *)&gen_args[0]) - 1;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0)) = iVar1;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = (*(uint *)&gen_args[1]);
    (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),iVar1));
    if ((*(uint *)&gen_args[0]) == 0) {
      iVar3 = (*(uint *)&gen_args[1]) - 1;
LAB_00c51513: ;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = iVar3;
      (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44(iVar3,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0))));
    }
  }
  else if (((!(dVar7 <= 0.0) != GEN_ISNAN(dVar7)) &&
           (dVar7 <= (*(double *)&gen_args[2]) && ((!GEN_ISNAN((*(double *)&gen_args[2])) && !GEN_ISNAN(dVar7)) && (*(double *)&gen_args[2]) != dVar7))) ||
          ((dVar7 <= 0.0 && (!GEN_ISNAN(dVar7) && dVar7 != 0.0) &&
           ((*(double *)&gen_args[2]) <= dVar7 && ((!GEN_ISNAN(dVar7) && !GEN_ISNAN((*(double *)&gen_args[2]))) && dVar7 != (*(double *)&gen_args[2])))))) {
    iVar1 = (*(uint *)&gen_args[0]) + 1;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0)) = iVar1;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) = (*(uint *)&gen_args[1]);
    (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),iVar1));
    if (iVar1 == 0) {
      iVar3 = (*(uint *)&gen_args[1]) + 1;
      goto LAB_00c51513;
    }
  }
  else {
    iVar1 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 0));
  }
  if ((((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) >> 0x10 & 0x7ff0) == 0) &&
     ((((ulonglong)gen_d2bits((*(double *)(gen_frame + 0x0))) & 0xfffff00000000) != 0 || (iVar1 != 0)))) {
    fVar4 = F_00c6ec33((*(double *)(gen_frame + 0x0)),(int)&(*(double *)(gen_frame + 0x0)) + 4);
    fVar4 = F_00c6eb31((double)fVar4,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) + 0x600);
    dVar7 = (double)fVar4;
    dVar6 = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0]))));
    uVar5 = 0x12;
    uVar2 = extraout_ECX;
  }
  else {
    if ((((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) != 0x7ff00000) || (iVar1 != 0)) &&
       (((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) != 0xfff00000 || (iVar1 != 0)))) {
      F_00c6f59e((*(uint *)(gen_frame + 0x8)),0xffff);
      return (float10)(*(double *)(gen_frame + 0x0));
    }
    fVar4 = F_00c6ec33((*(double *)(gen_frame + 0x0)),(int)&(*(double *)(gen_frame + 0x0)) + 4);
    fVar4 = F_00c6eb31((double)fVar4,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x0)) + 4)) + -0x600);
    dVar7 = (double)fVar4;
    dVar6 = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)),CONCAT24((undefined2)(*(uint *)&gen_args[1]),(*(uint *)&gen_args[0]))));
    uVar5 = 0x11;
    uVar2 = extraout_ECX_00;
  }
LAB_00c51450: ;
  fVar4 = F_00c6f4a3(uVar2,uVar5,0x26,dVar6,(*(double *)&gen_args[2]),dVar7,(*(uint *)(gen_frame + 0x8)));
  return fVar4;
}

/* ref: FUN_00c51657 */
uint F_00c51657(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc51657u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (uint)(((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)) & 0x7ff0) != 0x7ff0);
}

/* ref: __isnan */
int F_00c51673(double gen_a0)
{
  GEN_ENTER(0xc51673u, 0u, 0u, 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  if (((((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff8) != 0x7ff0) ||
      ((((ulonglong)gen_d2bits((*(double *)&gen_args[0])) & 0x7ffff00000000) == 0 && ((*(undefined4 *)((char *)&(*(double *)&gen_args[0]) + 0)) == 0)))) &&
     (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff8) != 0x7ff8)) {
    return 0;
  }
  return 1;
}

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
  LPVOID pvVar1;
  
  if (REFG(undefined4, 0x15d74c8) == (HANDLE)0x0) {
    F_00c5593d();
    F_00c5578e(0x1e);
                    
    F_00c47986(0xff);
  }
  if (_Size == 0) {
    _Size = 1;
  }
  pvVar1 = gen_imp_HeapAlloc(REFG(undefined4, 0x15d74c8),0,_Size);
  return pvVar1;
}

/* ref: _malloc */
undefined * F_00c51787(unsigned int gen_a0)
{
  GEN_ENTER(0xc51787u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  SIZE_T dwBytes;
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
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
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
    (*(uint *)(gen_frame + 0x0)) = F_00c56a1d(uVar2 + 0x20,pcVar3,uVar4,puVar5);
    uVar2 = F_00c50860();
    F_00c5dfec(_Flag,(undefined *)(uVar2 + 0x20));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c518af();
  }
  return (*(uint *)(gen_frame + 0x0));
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
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6220);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc51bdb;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(long *)(gen_frame + 0x0)) = -1;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    (*(long *)(gen_frame + 0x0)) = F_00c51a3b((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c51c2a((gen_frame + 0x1c));
  }
  return (*(long *)(gen_frame + 0x0));
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
  ulonglong uVar1;
  double * pdVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  ulonglong uVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  undefined4 uVar10;
  
  uVar1 = *(ulonglong *)&REFG(undefined, 0x1118ba0);
  if ((REFG(int, 0x15e418c) != 0) &&
     ((*(uint *)(gen_frame + 0xc)) = MXCSR, (MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    dVar9 = gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) & *(ulonglong *)&REFG(undefined, 0x1118ba0));
    uVar3 = (uint)((ulonglong)((longlong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) << 1) >> 0x35);
    lVar8 = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1118b94),*(int *)&REFG(undefined, 0x1118b90) - uVar3);
    dVar7 = gen_bits2d(((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> lVar8) << lVar8);
    if (uVar3 < 0x3ff) {
      *(*(double * PTR32 *)&gen_args[2]) = dVar9;
      return (float10)*(double *)&(*(uint *)&gen_args[0]);
    }
    if (uVar3 < 0x433) {
      *(*(double * PTR32 *)&gen_args[2]) = dVar7;
      return ((float10)GEN_TOD(gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0]) - dVar7) |
                                 (ulonglong)gen_d2bits(dVar9))));
    }
    if (uVar3 != 0x7ff) {
      *(*(double * PTR32 *)&gen_args[2]) = *(double *)&(*(uint *)&gen_args[0]);
      fVar5 = (float10)0;
      if (0x7ff < (*(uint *)&gen_args[1]) >> 0x14) {
        fVar5 = -fVar5;
      }
      return fVar5;
    }
    *(*(double * PTR32 *)&gen_args[2]) = *(double *)&(*(uint *)&gen_args[0]) + *(double *)&(*(uint *)&gen_args[0]);
    uVar6 = -(ulonglong)
             (gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0]) + *(double *)&(*(uint *)&gen_args[0])) &
                         *(ulonglong *)&REFG(undefined, 0x1118b80)) != *(double *)&REFG(undefined, 0x1118bb0));
    (*(double *)(gen_frame + 0x4)) = gen_bits2d((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) & (uVar6 | uVar1));
    if ((short)uVar6 != 0) {
      F_00c6bf0e(&(*(uint *)&gen_args[0]),&(*(double * PTR32 *)&gen_args[2]),&(*(double *)(gen_frame + 0x4)),0x3ef);
      return (float10)(*(double *)(gen_frame + 0x4));
    }
    return (float10)(*(double *)(gen_frame + 0x4));
  }
  uVar3 = F_00c6f59e(0,0);
  F_00c6f59e(REFG(undefined4, 0x134bdbc),0xffff);
  pdVar2 = (*(double * PTR32 *)&gen_args[2]);
  uVar10 = (undefined4)((ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])) >> 0x20);
  if (((*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x7ff0) == 0x7ff0) {
    *(*(double * PTR32 *)&gen_args[2]) = *(double *)&REFG(undefined, 0x134bc98);
    uVar4 = F_00c6ebcd((int)(ulonglong)gen_d2bits(*(double *)&(*(uint *)&gen_args[0])),uVar10);
    if (0 < (int)uVar4) {
      if ((int)uVar4 < 3) {
        *pdVar2 = *(double *)&(*(uint *)&gen_args[0]);
        (*(double *)(gen_frame + 0x4)) = F_00c5124d(0.0,*(double *)&(*(uint *)&gen_args[0]));
        F_00c6f59e(uVar3,0xffff);
        goto LAB_00c6f988;
      }
      if (uVar4 == 3) {
        *pdVar2 = *(double *)&(*(uint *)&gen_args[0]);
        fVar5 = F_00c6f323(0x1c,*(double *)&(*(uint *)&gen_args[0]),uVar3);
        return fVar5;
      }
    }
    dVar7 = *(double *)&(*(uint *)&gen_args[0]) + REFG(double, 0x1088130);
    *pdVar2 = dVar7;
    fVar5 = F_00c6f3d9(uVar10,8,0x1c,*(double *)&(*(uint *)&gen_args[0]),dVar7,uVar3);
  }
  else {
    fVar5 = F_00c7d6ab(*(double *)&(*(uint *)&gen_args[0]));
    *(*(double * PTR32 *)&gen_args[2]) = (double)fVar5;
    dVar7 = (double)((float10)*(double *)&(*(uint *)&gen_args[0]) - fVar5);
    (*(double *)(gen_frame + 0x4)) = dVar7;
    if (GEN_ISNAN(dVar7) != (GEN_ISNAN(dVar7) || dVar7 == 0.0)) {
      (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) = (ushort)((ulonglong)gen_d2bits(dVar7) >> 0x30);
      (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) = (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x4)) + 6)) | (*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 2)) & 0x8000;
      gen_piece_set(&(*(double *)(gen_frame + 0x4)), 0, 6, (unsigned long long)((undefined6)(ulonglong)gen_d2bits(dVar7)));
    }
    F_00c6f59e(uVar3,0xffff);
LAB_00c6f988: ;
    fVar5 = (float10)(*(double *)(gen_frame + 0x4));
  }
  return fVar5;
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
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == (char)param_2) {
      return (uint)param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)param_2,(char)param_2),
                               CONCAT11((char)param_2,(char)param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return 0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return 0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == (char)param_2) {
      return (uint)param_1;
    }
    if ((char)uVar1 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)param_2) {
      return (uint)(char *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)param_2) {
      return (uint)(char *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)param_2) {
      return (uint)(char *)((int)param_1 + 3);
    }
    param_1 = puVar5;
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
  char cVar6;
  uint uVar7;
  
  cVar6 = (char)in_eax;
  while (((uint)param_2 & 3) != 0) {
    uVar7 = *param_2;
    if ((char)uVar7 == cVar6) {
      return (uint)param_2;
    }
    param_2 = (uint *)((int)param_2 + 1);
    if ((char)uVar7 == '\0') {
      return 0;
    }
  }
  uVar7 = in_eax | in_eax << 8;
  while( true ) {
    while( true ) {
      uVar1 = *param_2;
      uVar4 = uVar1 ^ (uVar7 << 0x10 | uVar7);
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_2 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_2 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return 0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return 0;
        }
      }
    }
    uVar1 = *param_2;
    if ((char)uVar1 == cVar6) {
      return (uint)param_2;
    }
    if ((char)uVar1 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == cVar6) {
      return (uint)(char *)((int)param_2 + 1);
    }
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == cVar6) {
      return (uint)(char *)((int)param_2 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == cVar6) {
      return (uint)(char *)((int)param_2 + 3);
    }
    param_2 = puVar5;
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
  
  if (-1 < param_1) {
    piVar1 = (int *)F_00c6f990();
    if (param_1 < *piVar1) goto LAB_00c51e7b;
  }
  piVar1 = (int *)F_00c6f990();
  param_1 = *piVar1;
LAB_00c51e7b: ;
  uVar2 = F_00c6f996();
  return *(uint *)(uVar2 + param_1 * 4);
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
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * pvVar1;
  LPVOID pvVar2;
  int iVar3;
  int * piVar4;
  DWORD DVar5;
  
  if (param_1 == (undefined *)0x0) {
    pvVar1 = F_00c51787(param_2);
    return pvVar1;
  }
  if (param_2 == 0) {
    F_00c4c68f(param_1);
  }
  else {
    do {
      if (0xffffffe0 < param_2) {
        F_00c5b165(param_2);
        piVar4 = F_00c51f85();
        *piVar4 = 0xc;
        return (undefined *)0x0;
      }
      if (param_2 == 0) {
        param_2 = 1;
      }
      pvVar2 = gen_imp_HeapReAlloc(REFG(undefined4, 0x15d74c8),0,param_1,param_2);
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
      iVar3 = F_00c5b165(param_2);
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
  int * piVar2;
  uint uVar3;
  undefined * p_Var4;
  byte * _Str;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x8)),param_3);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  _Str = param_1;
  if (param_1 == (byte *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x8))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) + 0x70))) & 0xfffffffd;
    }
    dVar1 = 0.0;
    goto LAB_00c52465;
  }
  while( true ) {
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 0xac))) < 2) {
      uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + 200))) + (uint)*_Str * 2))) & 8;
    }
    else {
      uVar3 = F_00c5ce6f((uint)*_Str,8,(undefined *)((byte *)(gen_frame + 0x8)));
    }
    if (uVar3 == 0) break;
    _Str = _Str + 1;
  }
  p_Var4 = F_00c635e3(((undefined *)(gen_frame + 0x20)),(char *)_Str,(undefined *)((byte *)(gen_frame + 0x8)));
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _Str + (*(int *)(((char *)(p_Var4) + 4)));
  }
  uVar3 = (*(int *)((char *)(p_Var4)));
  if ((uVar3 & 0x240) == 0) {
    if ((uVar3 & 0x81) == 0) {
      if (((uVar3 & 0x100) == 0) ||
         (dVar1 = (*(double *)(((char *)(p_Var4) + 16))), (*(double *)(gen_frame + 0x18)) = 0.0, GEN_ISNAN(dVar1) == (GEN_ISNAN(dVar1) || dVar1 == 0.0))) {
        (*(double *)(gen_frame + 0x18)) = (*(double *)(((char *)(p_Var4) + 16)));
        goto LAB_00c52455;
      }
    }
    else {
      (*(double *)(gen_frame + 0x18)) = *(double *)&REFG(undefined, 0x134b0a0);
      if (*_Str == 0x2d) {
        (*(double *)(gen_frame + 0x18)) = -*(double *)&REFG(undefined, 0x134b0a0);
      }
    }
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
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
  uint * puVar5;
  uint * puVar6;
  
  puVar5 = (uint *)_Dest;
  if (_Count == 0) {
    return _Dest;
  }
  do {
    if (((uint)puVar5 & 3) == 0) goto LAB_00c524bc;
    uVar4 = *puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_00c524ed;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar6 = (uint *)((int)puVar6 + 2);
      goto LAB_00c524ff;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_00c524bc: ;
    do {
      puVar6 = puVar5;
      puVar5 = puVar6 + 1;
    } while (((*puVar6 ^ 0xffffffff ^ *puVar6 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar6;
    if ((char)uVar4 == '\0') goto LAB_00c524ff;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar6 = (uint *)((int)puVar6 + 1);
      goto LAB_00c524ff;
    }
  }
LAB_00c524ed: ;
  puVar6 = (uint *)((int)puVar5 + -1);
LAB_00c524ff: ;
  if (((uint)_Source & 3) == 0) {
    uVar3 = _Count >> 2;
  }
  else {
    do {
      bVar1 = (byte)*(uint *)_Source;
      uVar4 = (uint)bVar1;
      _Source = (char *)((int)_Source + 1);
      if (bVar1 == 0) goto LAB_00c5255a;
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 1);
      _Count = _Count - 1;
      if (_Count == 0) goto LAB_00c52550;
    } while (((uint)_Source & 3) != 0);
    uVar3 = _Count >> 2;
  }
  do {
    if (uVar3 == 0) {
      for (uVar4 = _Count & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar3 = *(uint *)_Source;
        _Source = (char *)((int)_Source + 1);
        *(byte *)puVar6 = (byte)uVar3;
        puVar6 = (uint *)((int)puVar6 + 1);
        if ((byte)uVar3 == 0) {
          return _Dest;
        }
      }
LAB_00c52550: ;
      *(byte *)puVar6 = 0;
      return _Dest;
    }
    uVar2 = *(uint *)_Source;
    uVar4 = *(uint *)_Source;
    _Source = (char *)((int)_Source + 4);
    if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
      if ((char)uVar4 == '\0') {
LAB_00c5255a: ;
        *(byte *)puVar6 = (byte)uVar4;
        return _Dest;
      }
      if ((char)(uVar4 >> 8) == '\0') {
        *(short *)puVar6 = (short)uVar4;
        return _Dest;
      }
      if ((uVar4 & 0xff0000) == 0) {
        *(short *)puVar6 = (short)uVar4;
        *(byte *)((int)puVar6 + 2) = 0;
        return _Dest;
      }
      if ((uVar4 & 0xff000000) == 0) {
        *puVar6 = uVar4;
        return _Dest;
      }
    }
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
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
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    ((byte *)(gen_frame + 0x8))[(int)(uint)bVar1 >> 3] = ((byte *)(gen_frame + 0x8))[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  sVar2 = 0xffffffff;
  do {
    sVar2 = sVar2 + 1;
    bVar1 = *_Str;
    if (bVar1 == 0) {
      return sVar2;
    }
    _Str = _Str + 1;
  } while ((((byte *)(gen_frame + 0x8))[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
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
  uint * puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x00c5266c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_00c526b3;
        goto LAB_00c52729;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x00c52725: ;
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_00c52729: ;
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_00c526b3;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x00c52725;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x00c52725;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x00c52725;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x00c5266c: ;
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_00c526b3: ;
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
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
          (*(uint *)(gen_frame + 0xc)) = F_00c5cf59(_File_00);
        }
        else {
          (*(uint *)(gen_frame + 0xc)) = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
          (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
        }
        if ((*(uint *)(gen_frame + 0xc)) == 0xffffffff) {
          if (pcVar5 == pcVar1) {
            (*(char * PTR32 *)(gen_frame + 0x10)) = (char *)0x0;
            goto LAB_00c52937;
          }
          break;
        }
        *pcVar5 = (char)(*(uint *)(gen_frame + 0xc));
        pcVar5 = pcVar5 + 1;
        (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar5;
      } while ((char)(*(uint *)(gen_frame + 0xc)) != '\n');
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
    }
    else {
      uVar2 = F_00c5ce6f((*(int *)&gen_args[0]),2,(undefined *)((byte *)(gen_frame + 0x4)));
    }
    if (uVar2 == 0) {
LAB_00c52c7c: ;
      if (((byte *)(gen_frame + 0x4))[0xc] == 0) {
        return iVar1;
      }
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) + 0x70))) & 0xfffffffd;
      return iVar1;
    }
    uVar2 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) + 0xd0))) + (*(int *)&gen_args[0]))));
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
  if (REFG(int, 0x15d6874) == 0) {
    if (_C - 0x61U < 0x1a) {
      return _C + -0x20;
    }
  }
  else {
    _C = F_00c52c1d(_C,(undefined *)0x0);
  }
  return _C;
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
  while( true ) {
    bVar1 = *_Control;
    if (bVar1 == 0) break;
    _Control = _Control + 1;
    ((byte *)(gen_frame + 0x8))[(int)(uint)bVar1 >> 3] = ((byte *)(gen_frame + 0x8))[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = (byte *)_Str;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (char *)0x0;
    }
    _Str = (char *)(pbVar2 + 1);
  } while ((((byte *)(gen_frame + 0x8))[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return (char *)pbVar2;
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
  uint uVar3;
  int eVar4;
  undefined * p_Var5;
  char * pcVar6;
  gen_size32 sVar7;
  char * _Filename;
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
    uVar3 = *puVar1;
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
      eVar4 = F_00c703b3(_Filename,0);
      pcVar6 = (*(char * PTR32 *)&gen_args[0]);
      if (eVar4 != 0) {
        if ((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) {
          p_Var5 = F_00c5b301();
          if (p_Var5 == (undefined *)0x0) {
LAB_00c5339f: ;
            (*(uint *)(gen_frame + 0x10)) = 0xc;
            break;
          }
          if ((*(char * PTR32 *)(((char *)(p_Var5) + 44))) == (char *)0x0) {
            pcVar6 = F_00c54c2e(0xe);
            (*(char * PTR32 *)(((char *)(p_Var5) + 44))) = pcVar6;
            if (pcVar6 == (char *)0x0) goto LAB_00c5339f;
          }
          pcVar6 = (*(char * PTR32 *)(((char *)(p_Var5) + 44)));
          (*(char * PTR32 *)&gen_args[0]) = pcVar6;
          uVar3 = 0xe;
        }
        else {
          uVar3 = (*(uint *)&gen_args[1]);
          if (((*(int *)&gen_args[2]) != 0) && (sVar7 = F_00c552f0(_Filename), uVar3 = (*(uint *)&gen_args[1]), (*(uint *)&gen_args[1]) <= sVar7)) {
            (*(uint *)(gen_frame + 0x10)) = 0x22;
            if ((*(uint *)&gen_args[1]) != 0) {
              *pcVar6 = '\0';
            }
            break;
          }
        }
        eVar4 = F_00c49908(pcVar6,uVar3,_Filename);
        if (eVar4 != 0) {
                    
          F_00c4c299(_Filename,0,0,0,0,0);
        }
        break;
      }
LAB_00c5336b: ;
      uVar3 = F_00c53264(_Filename,uVar8,(*(undefined4 *)&gen_args[3]));
    } while (uVar3 == 0);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c53429();
    uVar3 = (*(uint *)(gen_frame + 0x10));
    *(*(undefined4 * PTR32 *)&gen_args[4]) = (*(char * PTR32 *)&gen_args[0]);
    puVar1 = (uint *)F_00c51f85();
    if (uVar3 == 0) {
      *puVar1 = (*(uint *)(gen_frame + 0xc));
    }
    else {
      *puVar1 = uVar3;
    }
  }
  return uVar3;
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
  HANDLE hSourceProcessHandle;
  BOOL BVar8;
  int eVar9;
  gen_size32 sVar10;
  gen_size32 sVar11;
  uchar * _Str;
  char * pcVar12;
  uchar * puVar13;
  uint uVar14;
  gen_size32 sVar15;
  bool bVar16;
  
  (*(undefined4 *)(gen_frame + 0xbc)) = 0xa4;
  (*(undefined * PTR32 *)(gen_frame + 0xb8)) = &REFG(undefined, 0x12f62c0);
  (*(undefined4 *)(gen_frame + 0xb4)) = 0xc53798;
  uVar14 = 0;
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
    uVar14 = 0x4000;
  }
  else if (bVar3 == 0x62) {
    uVar14 = 0x8000;
  }
  iVar7 = F_00c71374((int *)((uint *)(gen_frame + 0x70)),0x400,uVar14 | 0x80);
  if (iVar7 == -1) {
    return (*(undefined * PTR32 *)(gen_frame + 0x90));
  }
  bVar16 = (byte)(*(ushort *)(gen_frame + 0x9c)) != 'w';
  if (bVar16) {
    (*(LPSTR *)(gen_frame + 0xa0)) = (LPSTR)0x1;
    (*(uint *)(gen_frame + 0x8c)) = 1;
    (*(uint *)(gen_frame + 0x88)) = 0;
  }
  else {
    (*(LPSTR *)(gen_frame + 0xa0)) = (LPSTR)0x0;
    (*(uint *)(gen_frame + 0x8c)) = 0;
    (*(uint *)(gen_frame + 0x88)) = 1;
  }
  (*(LPSTR *)(gen_frame + 0xa0)) = (LPSTR)(uint)bVar16;
  (*(uint *)(gen_frame + 0x8c)) = (uint)bVar16;
  (*(uint *)(gen_frame + 0x88)) = (uint)!bVar16;
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
  hSourceProcessHandle = gen_imp_GetCurrentProcess();
  puVar1 = ((uint *)(gen_frame + 0x70)) + (*(uint *)(gen_frame + 0x8c));
  uVar14 = *puVar1;
  BVar8 = gen_imp_DuplicateHandle(hSourceProcessHandle,
                          *((HANDLE *)GEN_TOP(((int)(&REFG(undefined4, 0x15e41a0))[(int)uVar14 >> 5] + (uVar14 & 0x1f) * 0x40))),
                          hSourceProcessHandle,&(*(HANDLE *)(gen_frame + 0x7c)),0,1,2);
  if (BVar8 != 0) {
    F_00c4e08e(*puVar1);
    ((int *)(gen_frame + 0x64))[(*(uint *)(gen_frame + 0x8c))] = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x90)) = F_00c711fe(((uint *)(gen_frame + 0x70))[(*(uint *)(gen_frame + 0x88))],(char *)&(*(ushort *)(gen_frame + 0x9c)));
    if ((*(undefined * PTR32 *)(gen_frame + 0x90)) != (undefined *)0x0) {
      sVar15 = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = (undefined4 *)F_00c5372b(0);
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x6c)) != (undefined4 *)0x0) {
        eVar9 = F_00c4b6eb(&(*(char * PTR32 *)(gen_frame + 0x94)),(gen_size32 *)0x0,"COMSPEC");
        if (eVar9 == 0) {
LAB_00c53934: ;
          (*(char * PTR32 *)(gen_frame + 0x98)) = (*(char * PTR32 *)(gen_frame + 0x94));
          if ((*(char * PTR32 *)(gen_frame + 0x94)) == (char *)0x0) goto LAB_00c5393e;
        }
        else {
          if (eVar9 == 0x16) goto LAB_00c53927;
          if (eVar9 == 0) goto LAB_00c53934;
LAB_00c5393e: ;
          (*(char * PTR32 *)(gen_frame + 0x98)) = "cmd.exe";
        }
        F_00c48350(&(*(_STARTUPINFOA *)(gen_frame + 0x8)),0,0x44);
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).cb = 0x44;
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).dwFlags = 0x100;
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdInput = (*(HANDLE *)(gen_frame + 0x7c));
        if ((*(LPSTR *)(gen_frame + 0xa0)) != (LPSTR)0x0) {
          (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdInput = (HANDLE)*REFG(int * PTR32, 0x15e41a0);
        }
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdOutput = (*(HANDLE *)(gen_frame + 0x7c));
        if ((*(LPSTR *)(gen_frame + 0xa0)) != (LPSTR)0x1) {
          (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdOutput = (HANDLE)REFG(int * PTR32, 0x15e41a0)[0x10];
        }
        (*(_STARTUPINFOA *)(gen_frame + 0x8)).hStdError = (HANDLE)REFG(int * PTR32, 0x15e41a0)[0x20];
        sVar15 = F_00c552f0((*(char * PTR32 *)(gen_frame + 0x98)));
        sVar10 = F_00c552f0((*(char * PTR32 *)&gen_args[0]));
        sVar11 = F_00c552f0(" /c ");
        sVar15 = sVar11 + 1 + sVar15 + sVar10;
        (*(LPSTR *)(gen_frame + 0xa0)) = F_00c54c73(sVar15,1);
        if ((*(LPSTR *)(gen_frame + 0xa0)) != (LPSTR)0x0) {
          eVar9 = F_00c49908((*(LPSTR *)(gen_frame + 0xa0)),sVar15,(*(char * PTR32 *)(gen_frame + 0x98)));
          if (((eVar9 != 0) || (eVar9 = F_00c473c8((*(LPSTR *)(gen_frame + 0xa0)),sVar15,&REFG(undefined, 0x1118c20)), eVar9 != 0)) ||
             (eVar9 = F_00c473c8((*(LPSTR *)(gen_frame + 0xa0)),sVar15,(*(char * PTR32 *)&gen_args[0])), eVar9 != 0)) {
LAB_00c53927: ;
                    
            F_00c4c299(sVar15,0,0,0,0,0);
          }
          piVar5 = F_00c51f85();
          (*(int *)(gen_frame + 0x84)) = *piVar5;
          eVar9 = F_00c703b3((*(char * PTR32 *)(gen_frame + 0x98)),0);
          if (eVar9 == 0) {
            ((uint *)(gen_frame + 0x70))[2] = gen_imp_CreateProcessA((*(char * PTR32 *)(gen_frame + 0x98)),(*(LPSTR *)(gen_frame + 0xa0)),(GEN_LPANY)0x0,
                                         (GEN_LPANY)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,
                                         &(*(_STARTUPINFOA *)(gen_frame + 0x8)),((undefined *)(gen_frame + 0x4c)));
          }
          else {
            (*(char * PTR32 *)&gen_args[0]) = (char *)0x0;
            sVar15 = 0x104;
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
            eVar9 = F_00c4b6eb(&(*(char * PTR32 *)&gen_args[0]),(gen_size32 *)0x0,"GEN_LPANY");
            pcVar12 = (*(char * PTR32 *)&gen_args[0]);
            if (eVar9 != 0) {
              if (eVar9 == 0x16) goto LAB_00c53927;
              if (eVar9 != 0) {
                F_00c4c68f((*(char * PTR32 *)&gen_args[0]));
                F_00c4c68f(_Str);
                F_00c4c68f((*(LPSTR *)(gen_frame + 0xa0)));
                F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x94)));
                goto LAB_00c53a80;
              }
            }
            do {
              (*(char * PTR32 *)(gen_frame + 0x5c)) = F_00c71169(pcVar12,_Str,0x103);
              if (((*(char * PTR32 *)(gen_frame + 0x5c)) == (char *)0x0) || (*_Str == '\0')) goto LAB_00c53b98;
              sVar10 = F_00c552f0((char *)_Str);
              (*(uchar * PTR32 *)(gen_frame + 0x80)) = _Str + (sVar10 - 1);
              uVar4 = _Str[sVar10 - 1];
              if (uVar4 == '\\') {
                puVar13 = F_00c7075f(_Str,0x5c);
                bVar16 = (*(uchar * PTR32 *)(gen_frame + 0x80)) == puVar13;
              }
              else {
                bVar16 = uVar4 == '/';
              }
              if ((!bVar16) && (eVar9 = F_00c473c8(_Str,0x104,&REFG(undefined, 0x1118c14)), eVar9 != 0))
              goto LAB_00c53927;
              (*(uchar * PTR32 *)(gen_frame + 0x80)) = (uchar *)F_00c552f0((*(char * PTR32 *)(gen_frame + 0x98)));
              sVar10 = F_00c552f0((char *)_Str);
              _Str = (*(uchar * PTR32 *)(gen_frame + 0x60));
              if ((uchar *)0x103 < (*(uchar * PTR32 *)(gen_frame + 0x80)) + sVar10) goto LAB_00c53b98;
              eVar9 = F_00c473c8((*(uchar * PTR32 *)(gen_frame + 0x60)),0x104,(*(char * PTR32 *)(gen_frame + 0x98)));
              if (eVar9 != 0) goto LAB_00c53927;
              eVar9 = F_00c703b3((char *)_Str,0);
              pcVar12 = (*(char * PTR32 *)(gen_frame + 0x5c));
            } while (eVar9 != 0);
            ((uint *)(gen_frame + 0x70))[2] = gen_imp_CreateProcessA((LPCSTR)_Str,(*(LPSTR *)(gen_frame + 0xa0)),(GEN_LPANY)0x0,
                                         (GEN_LPANY)0x0,1,0,(LPVOID)0x0,(LPCSTR)0x0,
                                         &(*(_STARTUPINFOA *)(gen_frame + 0x8)),((undefined *)(gen_frame + 0x4c)));
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
      ((int *)(gen_frame + 0x64))[(*(uint *)(gen_frame + 0x88))] = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x90)) = (undefined *)0x0;
    }
  }
  if (((int *)(gen_frame + 0x64))[(*(uint *)(gen_frame + 0x8c))] != 0) {
    F_00c4e08e(((uint *)(gen_frame + 0x70))[(*(uint *)(gen_frame + 0x8c))]);
  }
  if (((int *)(gen_frame + 0x64))[(*(uint *)(gen_frame + 0x88))] != 0) {
    F_00c4e08e(((uint *)(gen_frame + 0x70))[(*(uint *)(gen_frame + 0x88))]);
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
    (*(uint *)(gen_frame + 0x0)) = ((code *)(*(gen_code32 *)&gen_args[0]))(_File,(*(int *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
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
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    if ((*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) < 0) {
      iVar3 = F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
      if (iVar3 == -1) goto LAB_00c54028;
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) + 1;
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    if (-1 < (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)))) {
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
  uint uVar1;
  bool bVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  LPCWSTR lpWideCharStr;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x10018)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar3 = param_4;
  iVar7 = param_5;
  if (0 < param_5) {
    do {
      iVar7 = iVar7 + -1;
      if (*pcVar3 == '\0') goto LAB_00c54569;
      pcVar3 = pcVar3 + 1;
    } while (iVar7 != 0);
    iVar7 = -1;
LAB_00c54569: ;
    iVar7 = param_5 - iVar7;
    iVar4 = iVar7 + -1;
    bVar2 = iVar4 < param_5;
    param_5 = iVar4;
    if (bVar2) {
      param_5 = iVar7;
    }
  }
  (*(uint *)(gen_frame + 0x10014)) = 0;
  if (param_8 == 0) {
    param_8 = (*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(param_1))) + 4)))));
  }
  uVar5 = gen_imp_MultiByteToWideChar(param_8,(uint)(param_9 != 0) * 8 + 1,param_4,param_5,0,0);
  (*(uint *)(gen_frame + 0x1000c)) = uVar5;
  if (uVar5 != 0) {
    if (((int)uVar5 < 1) || (0xffffffe0 / uVar5 < 2)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10010)) = (undefined4 *)0x0;
    }
    else {
      uVar1 = uVar5 * 2 + 8;
      if (uVar1 < 0x401) {
        puVar6 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x10010)) = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
        if (1) {
LAB_00c545f9: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x10010)) = puVar6 + 2;
        }
      }
      else {
        puVar6 = F_00c51787(uVar1);
        (*(undefined4 * PTR32 *)(gen_frame + 0x10010)) = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0xdddd;
          goto LAB_00c545f9;
        }
      }
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x10010)) != (undefined4 *)0x0) {
      iVar7 = gen_imp_MultiByteToWideChar(param_8,1,param_4,param_5,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),uVar5);
      if (iVar7 != 0) {
        (*(uint *)(gen_frame + 0x10014)) = gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),uVar5,0,0);
        if ((*(uint *)(gen_frame + 0x10014)) != 0) {
          if ((param_3 & 0x400) == 0) {
            if (((int)(*(uint *)(gen_frame + 0x10014)) < 1) || (0xffffffe0 / (*(uint *)(gen_frame + 0x10014)) < 2)) {
              lpWideCharStr = (LPCWSTR)0x0;
            }
            else {
              uVar5 = (*(uint *)(gen_frame + 0x10014)) * 2 + 8;
              if (uVar5 < 0x401) {
                if (0) goto LAB_00c54702;
                lpWideCharStr = (LPCWSTR)(gen_frame + 0x8);
              }
              else {
                lpWideCharStr = F_00c51787(uVar5);
                if (lpWideCharStr != (LPCWSTR)0x0) {
                  lpWideCharStr[0] = L'\xdddd';
                  lpWideCharStr[1] = L'\0';
                  lpWideCharStr = lpWideCharStr + 4;
                }
              }
            }
            if (lpWideCharStr != (LPCWSTR)0x0) {
              iVar7 = gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),(*(uint *)(gen_frame + 0x1000c)),lpWideCharStr,(*(uint *)(gen_frame + 0x10014)));
              if (iVar7 != 0) {
                if (param_7 == 0) {
                  param_7 = 0;
                  param_6 = (LPSTR)0x0;
                }
                (*(uint *)(gen_frame + 0x10014)) = gen_imp_WideCharToMultiByte(param_8,0,lpWideCharStr,(*(uint *)(gen_frame + 0x10014)),param_6,param_7,
                                              (LPCSTR)0x0,(LPBOOL)0x0);
              }
              F_00c4f78f(lpWideCharStr);
            }
          }
          else if ((param_7 != 0) && ((int)(*(uint *)(gen_frame + 0x10014)) <= param_7)) {
            gen_imp_LCMapStringW(param_2,param_3,(*(undefined4 * PTR32 *)(gen_frame + 0x10010)),uVar5,param_6,param_7);
          }
        }
      }
LAB_00c54702: ;
      F_00c4f78f((*(undefined4 * PTR32 *)(gen_frame + 0x10010)));
      uVar5 = (*(uint *)(gen_frame + 0x10014));
      goto LAB_00c5470e;
    }
  }
  uVar5 = 0;
LAB_00c5470e: ;
  F_00c47745((*(uint *)(gen_frame + 0x10018)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar5;
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
  BYTE * pBVar1;
  byte bVar2;
  undefined * pvVar3;
  int iVar4;
  BOOL BVar5;
  BYTE * pBVar6;
  LONG LVar7;
  BYTE * pBVar8;
  int iVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar9 = 0;
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
    iVar9 = 0;
    goto LAB_00c54b2d;
  }
  if (((*(uint *)(((char *)(_LocInfo) + 4))) == 0) &&
     (iVar4 = F_00c55976(&(*(undefined8 *)(gen_frame + 0x0)),0,
                               (LPCWSTR)(uint)*(ushort *)&(*((char * PTR32 *)GEN_TOP(((((char *)(_LocInfo) + 16) + (2) * 16))))),0x1004,
                               &(*(uint *)(((char *)(_LocInfo) + 4)))), iVar4 != 0)) {
LAB_00c54abe: ;
    F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x20)));
    F_00c4c68f((*(BYTE * PTR32 *)(gen_frame + 0x30)));
    F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x2c)));
    F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x24)));
    iVar9 = 1;
  }
  else {
    (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = F_00c54c2e(4);
    (*(BYTE * PTR32 *)(gen_frame + 0x30)) = F_00c54c73(0x180,2);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = F_00c54c73(0x180,1);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = F_00c54c73(0x180,1);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = F_00c54c73(0x101,1);
    if (((*(undefined4 * PTR32 *)(gen_frame + 0x20)) == (undefined4 *)0x0) ||
       (((((*(BYTE * PTR32 *)(gen_frame + 0x30)) == (BYTE *)0x0 || ((*(undefined * PTR32 *)(gen_frame + 0x28)) == (undefined *)0x0)) || ((*(undefined * PTR32 *)(gen_frame + 0x2c)) == (undefined *)0x0)) ||
        ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0)))) goto LAB_00c54abe;
    *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
    iVar4 = 0;
    do {
      *(char *)(iVar4 + (int)(*(undefined * PTR32 *)(gen_frame + 0x28))) = (char)iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x100);
    BVar5 = gen_imp_GetCPInfo((*(uint *)(((char *)(_LocInfo) + 4))),((undefined *)(gen_frame + 0x34)));
    if ((BVar5 == 0) || (5 < (*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))))) goto LAB_00c54abe;
    (*(wchar_t * PTR32 *)(gen_frame + 0x1c)) = (wchar_t *)((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) & 0xffff);
    if (((wchar_t *)0x1 < (wchar_t *)((*(UINT *)((char *)((undefined *)(gen_frame + 0x34)))) & 0xffff)) &&
       ((*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x34)) + 6) + (0) * 1))))) != '\0')) {
      pBVar6 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
      do {
        bVar2 = *pBVar6;
        if (bVar2 == 0) break;
        for (uVar10 = (uint)pBVar6[-1]; (int)uVar10 <= (int)(uint)bVar2; uVar10 = uVar10 + 1) {
          *(undefined1 *)(uVar10 + (int)(*(undefined * PTR32 *)(gen_frame + 0x28))) = 0x20;
          bVar2 = *pBVar6;
        }
        pBVar8 = pBVar6 + 1;
        pBVar6 = pBVar6 + 2;
      } while (*pBVar8 != 0);
    }
    (*(byte * PTR32 *)(gen_frame + 0xc)) = (*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0x100;
    BVar5 = F_00c635a3(0,1,(*(undefined * PTR32 *)(gen_frame + 0x28)),0x100,(*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0x100,(*(uint *)(((char *)(_LocInfo) + 4))),0,0);
    if (((BVar5 == 0) ||
        (iVar4 = F_00c54720((undefined *)0x0,(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))),0x100,
                                    (LPCSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1),0xff,(LPSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x81),
                                    0xff,(*(uint *)(((char *)(_LocInfo) + 4))),0), iVar4 == 0)) ||
       (iVar4 = F_00c54720((undefined *)0x0,(*((wchar_t * PTR32 *)GEN_TOP((((((char *)(_LocInfo) + 16) + (0) * 16) + 4))))),0x200,
                                   (LPCSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1),0xff,(LPSTR)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x81),
                                   0xff,(*(uint *)(((char *)(_LocInfo) + 4))),0), pBVar6 = (*(BYTE * PTR32 *)(gen_frame + 0x30)),
       pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x2c)), iVar4 == 0)) goto LAB_00c54abe;
    (*(byte * PTR32 *)(gen_frame + 0x10)) = (*(BYTE * PTR32 *)(gen_frame + 0x30)) + 0xfe;
    (*(byte * PTR32 *)(gen_frame + 0x10))[0] = 0;
    (*(byte * PTR32 *)(gen_frame + 0x10))[1] = 0;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x7f) = 0;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x7f) = 0;
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x8)) = (wchar_t *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80);
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80);
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x80) = 0;
    if ((1 < (int)(*(wchar_t * PTR32 *)(gen_frame + 0x1c))) && ((*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x34)) + 6) + (0) * 1))))) != '\0')) {
      (*(BYTE * PTR32 *)(gen_frame + 0x30)) = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
      pBVar8 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x34)) + 6))) + 1;
      do {
        (*(BYTE * PTR32 *)(gen_frame + 0x30)) = pBVar8;
        if (*pBVar8 == 0) break;
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)(uint)pBVar8[-1];
        if ((*(undefined * PTR32 *)(gen_frame + 0x2c)) <= (undefined *)(uint)*pBVar8) {
          (*(BYTE * PTR32 *)(gen_frame + 0x18)) = pBVar6 + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x2c))) * 2 + 0x100;
          do {
            (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 1);
            (*(BYTE * PTR32 *)(gen_frame + 0x18))[0] = '\0';
            (*(BYTE * PTR32 *)(gen_frame + 0x18))[1] = 0x80;
            (*(BYTE * PTR32 *)(gen_frame + 0x18)) = (*(BYTE * PTR32 *)(gen_frame + 0x18)) + 2;
          } while ((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) <= (int)(uint)*pBVar8);
        }
        (*(BYTE * PTR32 *)(gen_frame + 0x30)) = pBVar8 + 2;
        pBVar1 = pBVar8 + 1;
        pBVar8 = pBVar8 + 2;
      } while (*pBVar1 != 0);
    }
    F_00c46aa0(pBVar6,pBVar6 + 0x200,0xfe);
    F_00c46aa0(pvVar3,(int)pvVar3 + 0x100,0x7f);
    F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x24)),(int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x100,0x7f);
    if (((LONG *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8))))) != (LONG *)0x0) &&
       (LVar7 = gen_imp_InterlockedDecrement((LONG *)(*((uint *)GEN_TOP(((((char *)(_LocInfo) + (1) * 184) + 8)))))), LVar7 == 0)) {
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
  return iVar9;
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
  undefined * p_Var1;
  
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x123) {
    *(undefined4 *)(*(undefined * PTR32 *)&gen_args[1]) = 0xc54f99;
    (*(int *)(gen_frame + 0x4)) = 1;
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
    p_Var1 = F_00c5b37a();
    (*(gen_code32 *)(gen_frame + 0x10)) = (*(void * PTR32 *)(((char *)(p_Var1) + 128)));
    ((code *)(*(gen_code32 *)(((char *)(p_Var1) + 128))))(*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    (*(int *)(gen_frame + 0x4)) = 0;
    if ((*(int *)(gen_frame + 0x38)) != 0) {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = *(undefined4 *)(*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
    }
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  }
  return (*(int *)(gen_frame + 0x4));
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
  gen_size32 sVar1;
  undefined4 * _Memory;
  undefined * pvVar2;
  int eVar3;
  gen_size32 sVar4;
  
  in_edi = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f6360);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc553f7;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    (*(char * PTR32 *)(gen_frame + 0x0)) = (char *)F_00c79d47(0,(*(undefined * PTR32 *)&gen_args[0]) + 9,0,((code *)REFP(0xc51787)),((code *)REFP(0xc4c68f)),0x2800);
    if ((*(char * PTR32 *)(gen_frame + 0x0)) == (char *)0x0) {
      return (char *)0x0;
    }
    sVar1 = F_00c552f0((*(char * PTR32 *)(gen_frame + 0x0)));
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
  undefined4 * _Memory;
  undefined * pvVar1;
  int eVar2;
  gen_size32 sVar3;
  undefined * ptVar4;
  
  ptVar4 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f63a0);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc5558c;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) == 0) {
    F_00c5aa4f(0xe);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    if (*(int *)(ptVar4 + 4) == 0) {
      _Str = (char *)F_00c5554d(0,ptVar4 + 9,0,0x2800);
      (*(char * PTR32 *)(gen_frame + 0x10)) = _Str;
      if (_Str == (char *)0x0) {
        F_00c5e5c0(&REFG(undefined4, 0x134ab78),((undefined1 *)(gen_frame + 0x1c)),0xfffffffe);
        return (char *)0x0;
      }
      (*(gen_size32 *)(gen_frame + 0xc)) = F_00c552f0(_Str);
      sVar3 = (*(gen_size32 *)(gen_frame + 0xc));
      while( true ) {
        (*(gen_size32 *)(gen_frame + 0xc)) = sVar3 - 1;
        if ((sVar3 == 0) || (_Str[(*(gen_size32 *)(gen_frame + 0xc))] != ' ')) break;
        _Str[(*(gen_size32 *)(gen_frame + 0xc))] = '\0';
        sVar3 = (*(gen_size32 *)(gen_frame + 0xc));
      }
      _Memory = F_00c51787(8);
      if (_Memory != (undefined4 *)0x0) {
        pvVar1 = F_00c51787(sVar3 + 1);
        if (pvVar1 == (undefined *)0x0) {
          F_00c4c68f(_Memory);
        }
        else {
          eVar2 = F_00c49908(pvVar1,sVar3 + 1,(*(char * PTR32 *)(gen_frame + 0x10)));
          if (eVar2 != 0) {
                    
            F_00c4c299(_Memory,0,0,0,0,0);
          }
          *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = pvVar1;
          *_Memory = pvVar1;
          _Memory[1] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4)));
          *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 4))) = _Memory;
        }
      }
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x10)));
      ptVar4 = (*(undefined * PTR32 *)&gen_args[0]);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c55683();
  }
  return *(char * PTR32 *)(ptVar4 + 4);
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
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_00c55724;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_00c556f0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_00c55724;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_00c55724;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_00c556f0: ;
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_00c55724: ;
  return (uint)bVar5 * -2 + 1;
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
          ((char *)(gen_frame + 0x4))[uVar6] = (char)pwVar1[uVar6];
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

