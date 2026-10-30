#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c6bc3e */
GEN_LIB GEN_NOFRAME float10 F_00c6bc3e(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6bc3eu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  double in_xmm0 = (double)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL(0xc, 4);
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = (ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30) & 0x7fff;
  if ((0x408f - uVar1 | uVar1 - 0x3c90) < 0x80000000) {
    dVar6 = GEN_X87(*(double *)&REFG(undefined, 0x11231c0) * in_xmm0 + *(double *)&REFG(undefined, 0x11231a0));
    dVar7 = GEN_X87((*(double *)&REFG(undefined, 0x11231c8) * in_xmm0 + *(double *)&REFG(undefined, 0x11231a8)) -
            *(double *)&REFG(undefined, 0x11231a8));
    uVar1 = (uint)(ulonglong)gen_d2bits(dVar6);
    iVar2 = (uVar1 & 0x3f) * 0x10;
    dVar5 = GEN_X87((in_xmm0 - *(double *)&REFG(undefined, 0x11231d0) * (dVar6 - *(double *)&REFG(undefined, 0x11231a0))) -
            *(double *)&REFG(undefined, 0x11231e0) * (dVar6 - *(double *)&REFG(undefined, 0x11231a0)));
    dVar7 = GEN_X87((in_xmm0 - *(double *)&REFG(undefined, 0x11231d8) * dVar7) - *(double *)&REFG(undefined, 0x11231e8) * dVar7);
    dVar6 = gen_bits2d(*(ulonglong *)(&REFG(undefined, 0x1123218) + iVar2) |
                       ((ulonglong)gen_d2bits(dVar6) & *(ulonglong *)&REFG(undefined, 0x1123180)) +
                       *(longlong *)&REFG(undefined, 0x1123190) << 0x2e);
    dVar5 = GEN_X87((dVar7 * dVar7) * (*(double *)&REFG(undefined, 0x1123208) + *(double *)&REFG(undefined, 0x11231f8) * dVar7) +
            ((dVar5 + *(double *)(&REFG(undefined, 0x1123210) + iVar2)) +
            ((dVar5 * dVar5) * (dVar5 * dVar5)) *
            (*(double *)&REFG(undefined, 0x1123200) + *(double *)&REFG(undefined, 0x11231f0) * dVar5)));
    if (((int)uVar1 >> 6) + 0x37eU < 0x77d) {
      return GEN_X87((float10)(dVar5 * dVar6 + dVar6));
    }
    gen_set_x87_cw((unsigned short)gen_x87_cw | 0x300);
    dVar7 = gen_bits2d(~*(ulonglong *)&REFG(undefined, 0x1123170) & (ulonglong)gen_d2bits(dVar6) |
                       (ulonglong)(((int)uVar1 >> 7) + 0x3ff) << 0x34);
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)((ulonglong)gen_d2bits(dVar7) >> 0x30);
    fVar4 = (float10)dVar7;
    in_xmm0 = GEN_X87(((double)GEN_TOD((((float10)GEN_TOD(gen_bits2d((ulonglong)
                                           ((((int)uVar1 >> 6) - ((int)uVar1 >> 7)) + 0x3ff) << 0x34
                                          ))) * (fVar4 + (float10)dVar5 * fVar4)))));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    if (((ushort)((ulonglong)gen_d2bits(in_xmm0) >> 0x30) & 0x7ff0) < 0x7ff0) {
      if (((ulonglong)gen_d2bits(in_xmm0) & 0x7ff0000000000000) != 0) goto LAB_00c6be32;
      uVar3 = 0xf;
    }
    else {
      uVar3 = 0xe;
    }
  }
  else {
    uVar1 = (*(uint *)&gen_args[1]) & 0x7fffffff;
    if (uVar1 < 0x40900000) {
      return GEN_X87((float10)(gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0]))) + *(double *)&REFG(undefined, 0x1123610)));
    }
    if (uVar1 < 0x7ff00000) {
      if ((*(uint *)&gen_args[1]) < 0x80000000) {
        in_xmm0 = GEN_X87(REFG(double, 0x1123640) * REFG(double, 0x1123640));
        uVar3 = 0xe;
      }
      else {
        in_xmm0 = GEN_X87(REFG(double, 0x1123648) * REFG(double, 0x1123648));
        uVar3 = 0xf;
      }
    }
    else {
      if ((uVar1 < 0x7ff00001) && ((*(int *)&gen_args[0]) == 0)) {
        if ((*(uint *)&gen_args[1]) != 0x7ff00000) {
          return (float10)*(double *)&REFG(undefined, 0x1123638);
        }
        return (float10)*(double *)&REFG(undefined, 0x1123630);
      }
      uVar3 = 0x3ea;
    }
  }
  (*(undefined2 *)(gen_frame + 0x0)) = (undefined2)(ulonglong)gen_d2bits(in_xmm0);
  (*(undefined6 *)(gen_frame + 0x2)) = (undefined6)((ulonglong)gen_d2bits(in_xmm0) >> 0x10);
  F_00c6bf0e(&(*(int *)&gen_args[0]),&(*(int *)&gen_args[0]),&(*(undefined2 *)(gen_frame + 0x0)),uVar3);
  in_xmm0 = gen_bits2d(CONCAT62((*(undefined6 *)(gen_frame + 0x2)),(*(undefined2 *)(gen_frame + 0x0))));
LAB_00c6be32: ;
  return (float10)in_xmm0;
}

/* ref: Global::__CIlog_pentium4 */
GEN_LIB GEN_FRAME float10 F_00c6c2c0(GEN_P(float in_xmm2, float gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc6c2c0u, gen_trace_f(gen_a0), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(float in_xmm2 = (float)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
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
GEN_LIB GEN_NOFRAME float10 F_00c6c2de(double gen_a0, double gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6c2deu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32));
  double in_xmm0 = (double)gen_a0;
  double in_xmm2 = (double)gen_a1;
  unsigned int gen_args[2];
  gen_args[0] = gen_a2;
  gen_args[1] = gen_a3;
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
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123720)) |
                       (ulonglong)gen_d2bits(REFG(double, 0x1123780)));
    dVar8 = gen_bits2d((ulonglong)gen_d2bits(in_xmm0) & *(ulonglong *)&REFG(undefined, 0x1123728) |
                       (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123788)));
    uVar1 = (ushort)(ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123730) + dVar7) & 0x7f0;
    dVar12 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123748) & (ulonglong)gen_d2bits(dVar8));
    dVar10 = gen_bits2d(*(ulonglong *)&REFG(undefined, 0x1123740) & (ulonglong)gen_d2bits(dVar7)) *
             *(double *)(&REFG(undefined, 0x1123800) + uVar1) - REFG(double, 0x1123780);
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
      (*(double *)(gen_frame + 0x0)) = dVar7;
      return (float10)dVar7;
    }
    dVar7 = gen_bits2d(-(ulonglong)
                        (*(double *)&REFG(undefined, 0x1123790) == gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0])))));
    if ((short)(ulonglong)gen_d2bits(dVar7) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        if (REFG(double, 0x1123780) ==
            gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0])) & (ulonglong)gen_d2bits(*(double *)&REFG(undefined, 0x1123720)) |
                       (ulonglong)gen_d2bits(REFG(double, 0x1123780)))) {
          return (float10)*(double *)&REFG(undefined, 0x11237b8);
        }
        uVar6 = 1000;
        dVar7 = *(double *)&REFG(undefined, 0x1123720);
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) || ((*(int *)&gen_args[0]) == 0 && ((*(uint *)&gen_args[1]) & 0xfffff) == 0)) {
        dVar7 = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_00c6c4d2;
    }
    in_xmm0 = gen_bits2d(CONCAT44((*(uint *)&gen_args[1]),(*(int *)&gen_args[0]))) * REFG(double, 0x11237a0);
    iVar4 = -0x34;
  }
  uVar6 = 2;
  dVar7 = REFG(double, 0x11237b0);
LAB_00c6c4d2: ;
  (*(double *)(gen_frame + 0x0)) = dVar7;
  F_00c6bf0e(&(*(int *)&gen_args[0]),&(*(int *)&gen_args[0]),&(*(double *)(gen_frame + 0x0)),uVar6);
  return (float10)(*(double *)(gen_frame + 0x0));
}

/* ref: FUN_00c6c530 */
GEN_LIB GEN_FRAME float10 F_00c6c530(GEN_P(float in_xmm3, float gen_a0), GEN_P(float in_xmm5, float gen_a1), GEN_P(float in_xmm6, float gen_a2), GEN_P(float10 in_st0, double gen_a3))
{
  GEN_ENTER(0xc6c530u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), (unsigned int)gen_trace_d(gen_a3));
  GEN_PIN(float in_xmm3 = (float)gen_a0;)
  GEN_PIN(float in_xmm5 = (float)gen_a1;)
  GEN_PIN(float in_xmm6 = (float)gen_a2;)
  GEN_PIN(float10 in_st0 = (float10)gen_a3;)
  float10 fVar1;
  undefined4 in_XMM3_Db = 0;
  undefined4 in_XMM5_Db = 0;
  undefined4 in_XMM6_Db = 0;
  
  fVar1 = F_00c6c54e((double)in_st0,GEN_TOD(gen_bits2d(CONCAT44(in_XMM3_Db,(uint)gen_fl2bits(in_xmm3)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM5_Db,(uint)gen_fl2bits(in_xmm5)))),GEN_TOD(gen_bits2d(CONCAT44(in_XMM6_Db,(uint)gen_fl2bits(in_xmm6)))),
                       (int)(ulonglong)gen_d2bits((double)in_st0));
  return fVar1;
}

/* ref: __wfullpath */
GEN_LIB GEN_NOFRAME wchar_t * F_00c6c790(GEN_P(wchar_t * _FullPath, unsigned int gen_a0), GEN_P(wchar_t * _Path, unsigned int gen_a1), GEN_P(gen_size32 _SizeInWords, unsigned int gen_a2))
{
  GEN_ENTER(0xc6c790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _FullPath = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Path = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _SizeInWords = (gen_size32)gen_a2;)
  GEN_FRAME_DECL(0x8, 8);
  DWORD DVar1;
  int * piVar2;
  wchar_t * pwVar3;
  gen_size32 _Count;
  
  if ((_Path == ((wchar_t *)GEN_TOP(0x0))) || (*_Path == L'\0')) {
    pwVar3 = F_00c7dcbc(_FullPath,_SizeInWords);
    return pwVar3;
  }
  if (_FullPath == ((wchar_t *)GEN_TOP(0x0))) {
    DVar1 = gen_imp_GetFullPathNameW(_Path,0,0,0);
    if (DVar1 == 0) goto LAB_00c6c7c4;
    _Count = _SizeInWords;
    if (_SizeInWords <= DVar1) {
      _Count = DVar1;
    }
    if (0x7fffffff < _Count) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      return ((wchar_t *)GEN_TOP(0x0));
    }
    pwVar3 = F_00c645f4(_Count,2);
    if (pwVar3 == ((wchar_t *)GEN_TOP(0x0))) {
      piVar2 = F_00c51f85();
      *piVar2 = 0xc;
      return ((wchar_t *)GEN_TOP(0x0));
    }
  }
  else {
    pwVar3 = _FullPath;
    _Count = _SizeInWords;
    if (_SizeInWords == 0) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x16;
      F_00c4c305();
      return ((wchar_t *)GEN_TOP(0x0));
    }
  }
  DVar1 = gen_imp_GetFullPathNameW(_Path,_Count,pwVar3,((undefined1 *)(gen_frame + 0x0)));
  if (_Count <= DVar1) {
    if (_FullPath == ((wchar_t *)GEN_TOP(0x0))) {
      F_00c4c68f(pwVar3);
    }
    piVar2 = F_00c51f85();
    *piVar2 = 0x22;
    return ((wchar_t *)GEN_TOP(0x0));
  }
  if (DVar1 != 0) {
    return pwVar3;
  }
  if (_FullPath == ((wchar_t *)GEN_TOP(0x0))) {
    F_00c4c68f(pwVar3);
  }
LAB_00c6c7c4: ;
  DVar1 = gen_imp_GetLastError();
  F_00c51fab(DVar1);
  return ((wchar_t *)GEN_TOP(0x0));
}

/* ref: ___wdtoxmode */
GEN_LIB GEN_NOFRAME ushort F_00c6c88b(GEN_P(byte param_1, unsigned int gen_a0), GEN_P(wchar_t * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6c88bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
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
  uVar4 = uVar4 | ~((uint)param_1 << 7) & 0x80 | 0x100;
  pwVar2 = F_00c7dedd(param_2,L'.');
  if (pwVar2 != ((wchar_t *)GEN_TOP(0x0))) {
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
GEN_LIB GEN_NOFRAME uint F_00c6c94c(GEN_P(wchar_t * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc6c94cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(wchar_t * in_esi = (wchar_t *)(uintptr_t)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c6c9e9(GEN_P(wchar_t * param_1, unsigned int gen_a0), GEN_P(wchar_t * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc6c9e9u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * param_2 = (wchar_t *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  wchar_t * pwVar3;
  
  piVar2 = F_00c51f85();
  iVar1 = *piVar2;
  piVar2 = F_00c51f85();
  *piVar2 = 0;
  pwVar3 = F_00c6c790(param_1,param_2,param_3);
  piVar2 = F_00c51f85();
  if (pwVar3 == ((wchar_t *)GEN_TOP(0x0))) {
    if (*piVar2 == 0x22) {
      piVar2 = F_00c51f85();
      *piVar2 = iVar1;
      pwVar3 = F_00c6c790(((wchar_t *)GEN_TOP(0x0)),param_2,0);
      *param_4 = pwVar3;
    }
    else {
      pwVar3 = ((wchar_t *)GEN_TOP(0x0));
    }
  }
  else {
    *piVar2 = iVar1;
  }
  return (uint)pwVar3;
}

/* ref: __wstat32 */
GEN_LIB GEN_NOFRAME int F_00c6ca49(GEN_P(wchar_t * _Name, unsigned int gen_a0), GEN_P(undefined * _Stat, unsigned int gen_a1))
{
  GEN_ENTER(0xc6ca49u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Name = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Stat = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x484, 12);
  ushort wVar1;
  ushort uVar2;
  ulong * puVar3;
  int * piVar4;
  wchar_t * pwVar5;
  int iVar6;
  HANDLE pvVar7;
  gen_size32 sVar8;
  uint uVar9;
  UINT UVar10;
  int _Var11;
  int eVar12;
  BOOL BVar13;
  DWORD DVar14;
  
  (*(uint *)(gen_frame + 0x47c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x480);
  (*(_FILETIME *)(gen_frame + 0x8)).dwHighDateTime = (DWORD)_Name;
  (*(int *)(gen_frame + 0x0)) = 0;
  if ((_Name == ((wchar_t *)GEN_TOP(0x0))) || (_Stat == ((undefined *)GEN_TOP(0x0)))) {
    puVar3 = F_00c51f98();
    *puVar3 = 0;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    return -1;
  }
  pwVar5 = F_00c6d663(_Name,L"?*");
  if (pwVar5 != ((wchar_t *)GEN_TOP(0x0))) goto LAB_00c6caaa;
  if (_Name[1] == L':') {
    if ((*_Name != L'\0') && (_Name[2] == L'\0')) goto LAB_00c6caaa;
    wVar1 = F_00c6d650(*_Name);
    iVar6 = wVar1 - 0x60;
  }
  else {
    iVar6 = F_00c6d446();
  }
  pvVar7 = gen_imp_FindFirstFileExW(_Name,FindExInfoStandard,&(*(uint *)(gen_frame + 0x14)),FindExSearchNameMatch,(LPVOID)0x0,0)
  ;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar7;
  if (pvVar7 == (HANDLE)0xffffffff) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0x0));
    pwVar5 = F_00c6d663(_Name,L"./\\");
    if (pwVar5 == ((wchar_t *)GEN_TOP(0x0))) {
LAB_00c6caaa: ;
      piVar4 = F_00c51f85();
      *piVar4 = 2;
      puVar3 = F_00c51f98();
      *puVar3 = 2;
      return -1;
    }
    pwVar5 = ((wchar_t *)GEN_TOP(F_00c6c9e9(((undefined1 *)(gen_frame + 0x274)),_Name,0x104,&(*(undefined * PTR32 *)(gen_frame + 0x10)))));
    if ((pwVar5 == ((wchar_t *)GEN_TOP(0x0))) ||
       (((sVar8 = F_00c68ec8(pwVar5), sVar8 != 3 &&
         (uVar9 = F_00c6c94c(pwVar5), uVar9 == 0)) ||
        (UVar10 = gen_imp_GetDriveTypeW(pwVar5), UVar10 < 2)))) {
      if ((*(undefined * PTR32 *)(gen_frame + 0x10)) != ((undefined *)GEN_TOP(0x0))) {
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x10)));
      }
      goto LAB_00c6caaa;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x10)) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x10)));
    }
    (*(uint *)(gen_frame + 0x14)) = 0x10;
    (*(int *)(gen_frame + 0x30)) = 0;
    (*(long *)(gen_frame + 0x34)) = 0;
    (*(undefined2 *)(gen_frame + 0x40)) = 0;
    _Var11 = F_00c7e237(0x7bc,1,1,0,0,0,-1);
    (*(long *)(((char *)(_Stat) + 28))) = _Var11;
    (*(long *)(((char *)(_Stat) + 24))) = _Var11;
    (*(long *)(((char *)(_Stat) + 32))) = _Var11;
    pwVar5 = ((wchar_t *)GEN_TOP((*(_FILETIME *)(gen_frame + 0x8)).dwHighDateTime));
  }
  else {
    if ((((*(uint *)(gen_frame + 0x14)) & 0x400) != 0) && ((*(int *)(gen_frame + 0x38)) == -0x5ffffff4)) {
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = ((undefined *)GEN_TOP(0xffffffff));
      eVar12 = F_00c4ece4((int *)&(*(undefined * PTR32 *)(gen_frame + 0x10)),_Name,0,0x40,0);
      if ((eVar12 == 0) && ((*(undefined * PTR32 *)(gen_frame + 0x10)) != ((undefined *)GEN_TOP(0xffffffff)))) {
        uVar9 = F_00c7df0b((*(undefined * PTR32 *)(gen_frame + 0x10)),_Stat);
        F_00c4e08e((int)(*(undefined * PTR32 *)(gen_frame + 0x10)));
        return uVar9;
      }
      goto LAB_00c6caaa;
    }
    if (((*(FILETIME *)(gen_frame + 0x28)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x28)).dwHighDateTime == 0)) {
      (*(long *)(((char *)(_Stat) + 28))) = 0;
    }
    else {
      BVar13 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x28)),&(*(_FILETIME *)(gen_frame + 0x8)));
      if ((BVar13 == 0) || (BVar13 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),&(*(_SYSTEMTIME *)(gen_frame + 0x264))), BVar13 == 0))
      goto LAB_00c6ce4f;
      _Var11 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wMonth,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wDay,
                                (uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wHour,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wMinute,
                                (uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wSecond,-1);
      (*(long *)(((char *)(_Stat) + 28))) = _Var11;
    }
    if (((*(FILETIME *)(gen_frame + 0x20)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x20)).dwHighDateTime == 0)) {
      _Var11 = (*(long *)(((char *)(_Stat) + 28)));
    }
    else {
      BVar13 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x20)),&(*(_FILETIME *)(gen_frame + 0x8)));
      if ((BVar13 == 0) || (BVar13 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),&(*(_SYSTEMTIME *)(gen_frame + 0x264))), BVar13 == 0))
      goto LAB_00c6ce4f;
      _Var11 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wMonth,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wDay,
                                (uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wHour,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wMinute,
                                (uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wSecond,-1);
    }
    (*(long *)(((char *)(_Stat) + 24))) = _Var11;
    if (((*(FILETIME *)(gen_frame + 0x18)).dwLowDateTime == 0) && ((*(FILETIME *)(gen_frame + 0x18)).dwHighDateTime == 0)) {
      _Var11 = (*(long *)(((char *)(_Stat) + 28)));
    }
    else {
      BVar13 = gen_imp_FileTimeToLocalFileTime(&(*(FILETIME *)(gen_frame + 0x18)),&(*(_FILETIME *)(gen_frame + 0x8)));
      if ((BVar13 == 0) || (BVar13 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x8)),&(*(_SYSTEMTIME *)(gen_frame + 0x264))), BVar13 == 0)) {
LAB_00c6ce4f: ;
        DVar14 = gen_imp_GetLastError();
        F_00c51fab(DVar14);
        gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0x10)));
        return -1;
      }
      _Var11 = F_00c7e237((uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wYear,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wMonth,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wDay,
                                (uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wHour,(uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wMinute,
                                (uint)(*(_SYSTEMTIME *)(gen_frame + 0x264)).wSecond,-1);
    }
    (*(long *)(((char *)(_Stat) + 32))) = _Var11;
    gen_imp_FindClose((*(undefined * PTR32 *)(gen_frame + 0x10)));
    pwVar5 = _Name;
  }
  uVar2 = F_00c6c88b((char)(*(uint *)(gen_frame + 0x14)),pwVar5);
  (*(ushort *)(((char *)(_Stat) + 6))) = uVar2;
  (*(short *)(((char *)(_Stat) + 8))) = 1;
  (*(long *)(((char *)(_Stat) + 20))) = (*(long *)(gen_frame + 0x34));
  if ((*(int *)(gen_frame + 0x30)) != 0) {
    (*(int *)(gen_frame + 0x0)) = -1;
    (*(long *)(((char *)(_Stat) + 20))) = 0;
  }
  (*(ushort *)(((char *)(_Stat) + 4))) = 0;
  (*(short *)(((char *)(_Stat) + 12))) = 0;
  (*(short *)(((char *)(_Stat) + 10))) = 0;
  (*(uint *)((char *)(_Stat))) = iVar6 - 1U;
  (*(uint *)(((char *)(_Stat) + 16))) = iVar6 - 1U;
  return (*(int *)(gen_frame + 0x0));
}

/* ref: __fstat64 */
GEN_LIB GEN_NOFRAME uint F_00c6ce7a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6ce7au, gen_a0, gen_a1, 0u, 0u);
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
  __time64_t _Var10;
  
  puVar1 = (*(uint * PTR32 *)&gen_args[1]);
  uVar5 = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x74)) = 0x68;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x70)) = &REFG(undefined, 0x12f6690);
  (*(undefined4 *)(gen_frame + 0x6c)) = 0xc6ce86;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == ((uint *)GEN_TOP(0x0))) {
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
      (*(int * PTR32 *)(gen_frame + 0xc)) = &REFG(undefined4, 0x15e41a0) + ((int)uVar5 >> 5);
      iVar9 = (uVar5 & 0x1f) * 0x40;
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)uVar5 >> 5)] + 4 + iVar9))) & 1) != 0) {
        F_00c6d817((*(uint *)(gen_frame + 0x8)));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + 4 + iVar9))) & 1) == 0) {
LAB_00c6cf3c: ;
          piVar4 = F_00c51f85();
          *piVar4 = 9;
LAB_00c6cf47: ;
          (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        }
        else {
          DVar6 = gen_imp_GetFileType(*((HANDLE *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + iVar9))));
          uVar5 = DVar6 & 0xffff7fff;
          if (uVar5 == 1) {
            *((undefined2 *)GEN_TOP(((int)puVar1 + 6))) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *((undefined2 *)GEN_TOP(((int)puVar1 + 10))) = 0;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 2) = 1;
            BVar7 = gen_imp_GetFileInformationByHandle(*((HANDLE *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + iVar9))),((undefined *)(gen_frame + 0x14)));
            if (BVar7 == 0) {
LAB_00c6cf85: ;
              DVar6 = gen_imp_GetLastError();
              F_00c51fab(DVar6);
              goto LAB_00c6cf47;
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
              puVar1[10] = 0;
              puVar1[0xb] = 0;
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x14)) + 20))),&(*(_FILETIME *)(gen_frame + 0x0)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x0)),((_SYSTEMTIME *)(gen_frame + 0x48))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 10) = _Var10;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 12))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x14)) + 12) + 4))))) == 0)) {
              puVar1[8] = puVar1[10];
              puVar1[9] = puVar1[0xb];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x14)) + 12))),&(*(_FILETIME *)(gen_frame + 0x0)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x0)),((_SYSTEMTIME *)(gen_frame + 0x48))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 8) = _Var10;
            }
            if (((*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 4))) == 0) &&
               ((*((DWORD *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x14)) + 4) + 4))))) == 0)) {
              puVar1[0xc] = puVar1[10];
              puVar1[0xd] = puVar1[0xb];
            }
            else {
              BVar7 = gen_imp_FileTimeToLocalFileTime(&(*(undefined (*)[8])(((char *)((undefined *)(gen_frame + 0x14)) + 4))),&(*(_FILETIME *)(gen_frame + 0x0)));
              if ((BVar7 == 0) || (BVar7 = gen_imp_FileTimeToSystemTime(&(*(_FILETIME *)(gen_frame + 0x0)),((_SYSTEMTIME *)(gen_frame + 0x48))), BVar7 == 0))
              goto LAB_00c6cf47;
              _Var10 = F_00c6d1df((uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wYear,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMonth,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wDay,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wHour,
                                        (uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wMinute,(uint)((_SYSTEMTIME *)(gen_frame + 0x48))[0].wSecond,-1);
              *(__time64_t *)(puVar1 + 0xc) = _Var10;
            }
            puVar1[6] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 36)));
            puVar1[7] = (*(DWORD *)(((char *)((undefined *)(gen_frame + 0x14)) + 32)));
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
                if (uVar5 != 0) goto LAB_00c6cf85;
                goto LAB_00c6cf3c;
              }
              uVar8 = 0x1000;
            }
            *((undefined2 *)GEN_TOP(((int)puVar1 + 6))) = uVar8;
            *puVar1 = (*(uint *)(gen_frame + 0x8));
            puVar1[4] = (*(uint *)(gen_frame + 0x8));
            *(undefined2 *)(puVar1 + 2) = 1;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined2 *)(puVar1 + 3) = 0;
            *((undefined2 *)GEN_TOP(((int)puVar1 + 10))) = 0;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[10] = 0;
            puVar1[0xb] = 0;
            puVar1[8] = 0;
            puVar1[9] = 0;
            if ((uVar5 == 2) ||
               (BVar7 = gen_imp_PeekNamedPipe(*((HANDLE *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0xc)) + iVar9))),(LPVOID)0x0,0,(LPDWORD)0x0,
                                      (LPDWORD)&(*(int * PTR32 *)(gen_frame + 0xc)),(LPDWORD)0x0), BVar7 == 0)) {
              puVar1[6] = 0;
              puVar1[7] = 0;
            }
            else {
              puVar1[6] = (uint)(*(int * PTR32 *)(gen_frame + 0xc));
              puVar1[7] = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xc))) >> 0x1f;
            }
          }
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x70)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c6d1d5((gen_frame + 0x74));
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
  uVar5 = F_00c7e488((gen_frame + 0x74));
  return uVar5;
}

/* ref: FUN_00c6d1d5 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6d1d5(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d1d5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp - 0x6c))));
  return;
}

/* ref: ___loctotime64_t */
GEN_LIB GEN_NOFRAME __time64_t F_00c6d1df(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xc6d1dfu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_FRAME_DECL(0x44, 12);
  longlong lVar1;
  uint uVar2;
  int eVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  uVar6 = param_1 - 0x76c;
  (*(int *)(gen_frame + 0x8)) = param_2;
  (*(long *)(gen_frame + 0xc)) = 0;
  (*(long *)(gen_frame + 0x4)) = 0;
  (*(long *)(gen_frame + 0x0)) = 0;
  if ((((((int)uVar6 < 0x46) || (0x44c < (int)uVar6)) || (0xb < param_2 - 1U)) ||
      ((0x17 < (uint)param_4 || (0x3b < (uint)param_5)))) ||
     ((0x3b < (uint)param_6 || (param_3 < 1)))) {
LAB_00c6d427: ;
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    lVar1 = -1;
  }
  else {
    if ((&REFG(undefined4, 0x134bc34))[(int)(param_2)] - *(int *)(&REFG(undefined, 0x134bc30) + param_2 * 4) < param_3) {
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
    (*(int *)(gen_frame + 0x14)) = iVar5;
    if ((int)uVar2 < 0) {
      bVar7 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if ((((bVar7) && ((int)uVar6 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      (*(int *)(gen_frame + 0x14)) = iVar5 + 1;
    }
    F_00c64d65();
    eVar3 = F_00c64fcb(&(*(long *)(gen_frame + 0xc)));
    if (((eVar3 != 0) || (eVar3 = F_00c64ff8(&(*(long *)(gen_frame + 0x4))), eVar3 != 0)) ||
       (eVar3 = F_00c65025(&(*(long *)(gen_frame + 0x0))), eVar3 != 0)) {
                    
      F_00c4c299(0,0,0,0,0);
    }
    iVar5 = ((param_1 - 0x641) / 400 - (param_1 - 0x76d) / 100) - 0x11 +
            ((int)(param_1 - 0x76d + (param_1 - 0x76d >> 0x1f & 3U)) >> 2);
    (*(int *)(gen_frame + 0x10)) = iVar5 >> 0x1f;
    lVar1 = (longlong)CONCAT44(((int)uVar6 >> 0x1f) - (uint)(uVar6 < 0x46),param_1 - 0x7b2) * 0x16d
            + (longlong)iVar5;
    (*(int *)(gen_frame + 0x10)) = (int)((ulonglong)lVar1 >> 0x20);
    lVar1 = (((lVar1 + (*(int *)(gen_frame + 0x14))) * 0x18 + (longlong)param_4) * 0x3c + (longlong)param_5) * 0x3c +
            (longlong)(*(long *)(gen_frame + 0x0)) + (longlong)param_6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x18)) + 28))) = (*(int *)(gen_frame + 0x14));
    (*(int *)(((char *)((undefined *)(gen_frame + 0x18)) + 20))) = uVar6;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x18)) + 16))) = (*(int *)(gen_frame + 0x8)) - 1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x18)) + 8))) = param_4;
    (*(int *)(((char *)((undefined *)(gen_frame + 0x18)) + 4))) = param_5;
    (*(int *)((char *)((undefined *)(gen_frame + 0x18)))) = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && ((*(long *)(gen_frame + 0xc)) != 0)) && (iVar5 = F_00c64dec(((undefined *)(gen_frame + 0x18))), iVar5 != 0)))) {
      lVar1 = lVar1 + (*(long *)(gen_frame + 0x4));
    }
  }
  return lVar1;
}

/* ref: __getdrive */
GEN_LIB GEN_NOFRAME int F_00c6d446(void)
{
  GEN_ENTER(0xc6d446u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x214, 12);
  bool bVar1;
  DWORD DVar2;
  ushort * _Memory;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x210);
  bVar1 = false;
  _Memory = ((ushort *)(gen_frame + 0x0));
  DVar2 = gen_imp_GetCurrentDirectoryW(0x105,_Memory);
  if (0x104 < (int)DVar2) {
    _Memory = F_00c54c73(DVar2 + 1,2);
    if (_Memory == ((ushort *)GEN_TOP(0x0))) {
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
  return iVar5;
}

/* ref: FUN_00c6d5a7 */
GEN_LIB GEN_NOFRAME uint F_00c6d5a7(void)
{
  GEN_ENTER(0xc6d5a7u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: __towlower_l */
GEN_LIB GEN_NOFRAME ushort F_00c6d5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6d5b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL(0x18, 8);
  LPCWSTR _LocaleName;
  WCHAR WVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  
  WVar1 = L'\xffff';
  if ((*(ushort *)&gen_args[0]) != 0xffff) {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]));
    _LocaleName = *((LPCWSTR *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0x14)));
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
        WVar1 = (WCHAR)*((byte *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xcc))) + (*(uint *)&(*(ushort *)&gen_args[0]) & 0xffff))));
      }
    }
    else {
      iVar2 = F_00c7e497(_LocaleName,0x100,(LPCWSTR)&(*(ushort *)&gen_args[0]),1,((WCHAR *)(gen_frame + 0x10)),1);
      WVar1 = (*(ushort *)&gen_args[0]);
      if (iVar2 != 0) {
        WVar1 = ((WCHAR *)(gen_frame + 0x10))[0];
      }
    }
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  return WVar1;
}

/* ref: _towlower */
GEN_LIB GEN_NOFRAME ushort F_00c6d650(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  ushort wVar1;
  
  wVar1 = F_00c6d5b0(_C,((undefined *)GEN_TOP(0x0)));
  return wVar1;
}

/* ref: _wcspbrk */
GEN_LIB GEN_NOFRAME wchar_t * F_00c6d663(GEN_P(wchar_t * _Str, unsigned int gen_a0), GEN_P(wchar_t * _Control, unsigned int gen_a1))
{
  GEN_ENTER(0xc6d663u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Str = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(wchar_t * _Control = (wchar_t *)(uintptr_t)gen_a1;)
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
  return ((wchar_t *)GEN_TOP(0x0));
}

/* ref: __set_osfhnd */
GEN_LIB GEN_NOFRAME int F_00c6d6a7(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6d6a7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  ulong * puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < REFG(undefined4, 0x15e4190))) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    if (*((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[(int)(param_1 >> 5)]))) == -1) {
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
      *((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[(int)(param_1 >> 5)]))) = param_2;
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
GEN_LIB GEN_NOFRAME int F_00c6d728(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d728u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int * piVar2;
  ulong * puVar3;
  int iVar4;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < REFG(undefined4, 0x15e4190))) {
    iVar1 = (&REFG(undefined4, 0x15e41a0))[(int)(param_1 >> 5)];
    iVar4 = (param_1 & 0x1fU) * 0x40;
    if (((*((byte *)GEN_TOP((iVar1 + 4 + iVar4))) & 1) != 0) && (*((int *)GEN_TOP((iVar1 + iVar4))) != -1)) {
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
      *((undefined4 *)GEN_TOP((iVar4 + (&REFG(undefined4, 0x15e41a0))[(int)(param_1 >> 5)]))) = 0xffffffff;
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
GEN_LIB GEN_NOFRAME int F_00c6d7ae(GEN_P(int _FileHandle, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d7aeu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _FileHandle = (int)gen_a0;)
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
      if ((*((byte *)GEN_TOP((iVar3 + 4 + (&REFG(undefined4, 0x15e41a0))[(int)(_FileHandle >> 5)]))) & 1) != 0) {
        return *((int *)GEN_TOP((iVar3 + (&REFG(undefined4, 0x15e41a0))[(int)(_FileHandle >> 5)])));
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
GEN_LIB GEN_NOFRAME int F_00c6d817(unsigned int gen_a0)
{
  GEN_ENTER(0xc6d817u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  
  iVar1 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f66d0);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc6d823;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f66d0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  iVar2 = (*(int *)&gen_args[0]) >> 5;
  iVar4 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2)];
  (*(int *)(gen_frame + 0x10)) = 1;
  if (*((int *)GEN_TOP((iVar4 + 8))) == 0) {
    F_00c5aa4f(10);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
    if (*((int *)GEN_TOP((iVar4 + 8))) == 0) {
      BVar3 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(iVar4 + 0xc),4000);
      if (BVar3 == 0) {
        (*(int *)(gen_frame + 0x10)) = 0;
      }
      *((int *)GEN_TOP((iVar4 + 8))) = *((int *)GEN_TOP((iVar4 + 8))) + 1;
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c6d8ad();
  }
  if ((*(int *)(gen_frame + 0x10)) != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((&REFG(undefined4, 0x15e41a0))[(int)(iVar2)] + 0xc + (iVar1 & 0x1fU) * 0x40));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  return (*(int *)(gen_frame + 0x10));
}

/* ref: FUN_00c6d8a8 */
GEN_LIB GEN_NOFRAME uint F_00c6d8a8(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d8a8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6d8ad */
GEN_LIB GEN_NOFRAME uint F_00c6d8ad(void)
{
  GEN_ENTER(0xc6d8adu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: __unlock_fhandle */
GEN_LIB GEN_NOFRAME unsigned int F_00c6d8b6(GEN_P(int _Filehandle, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d8b6u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _Filehandle = (int)gen_a0;)
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)
             ((&REFG(undefined4, 0x15e41a0))[(int)(_Filehandle >> 5)] + 0xc + (_Filehandle & 0x1fU) * 0x40));
  return 0;
}

/* ref: __alloc_osfhnd */
GEN_LIB GEN_NOFRAME int F_00c6d8dd(void)
{
  GEN_ENTER(0xc6d8ddu, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 4);
  int iVar1;
  BOOL BVar2;
  undefined4 * puVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0x18;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x34)) = &REFG(undefined, 0x12f66f0);
  (*(uint volatile *)(gen_frame + 0x30)) = 0xc6d8e9;
  (*(gen_code32 *)(gen_frame + 0x2c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ 0x12f66f0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38);
  (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x28));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x28)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  (*(int *)(gen_frame + 0x1c)) = -1;
  iVar4 = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  iVar1 = F_00c5a98d(0xb);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    F_00c5aa4f(0xb);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
    for (; (*(int *)(gen_frame + 0x10)) = iVar4, iVar4 < 0x40; iVar4 = iVar4 + 1) {
      puVar3 = ((undefined4 *)GEN_TOP((&REFG(undefined4, 0x15e41a0))[(int)(iVar4)]));
      if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = F_00c54c73(0x20,0x40);
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != ((undefined4 *)GEN_TOP(0x0))) {
          (&REFG(undefined4, 0x15e41a0))[(int)(iVar4)] = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
          REFG(int, 0x15e4190) = REFG(int, 0x15e4190) + 0x20;
          while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) < ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar4)] + 0x800)))) {
            *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1) = 0;
            *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = 0xffffffff;
            *((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 5))) = 10;
            (*(undefined4 * PTR32 *)(gen_frame + 0x18))[2] = 0;
            (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0x10;
          }
          iVar4 = iVar4 << 5;
          (*(int *)(gen_frame + 0x1c)) = iVar4;
          *((undefined1 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar4 >> 5)] + 4))) = 1;
          iVar1 = F_00c6d817(iVar4);
          if (iVar1 == 0) {
            (*(int *)(gen_frame + 0x1c)) = -1;
          }
        }
        break;
      }
      for (; (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar3, puVar3 < ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar4)] + 0x800)));
          puVar3 = puVar3 + 0x10) {
        if ((*(byte *)(puVar3 + 1) & 1) == 0) {
          if (puVar3[2] == 0) {
            F_00c5aa4f(10);
            (*(undefined * PTR32 volatile *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x1));
            if (puVar3[2] == 0) {
              BVar2 = gen_imp_InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar3 + 3),4000);
              if (BVar2 == 0) {
                (*(int *)(gen_frame + 0x14)) = 1;
              }
              else {
                puVar3[2] = puVar3[2] + 1;
              }
            }
            (*(undefined * PTR32 volatile *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
            F_00c6d9af();
          }
          if ((*(int *)(gen_frame + 0x14)) == 0) {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            if ((*(byte *)(puVar3 + 1) & 1) == 0) {
              if ((*(int *)(gen_frame + 0x14)) == 0) {
                *(undefined1 *)(puVar3 + 1) = 1;
                *puVar3 = 0xffffffff;
                (*(int *)(gen_frame + 0x1c)) = ((int)puVar3 - (&REFG(undefined4, 0x15e41a0))[(int)(iVar4)] >> 6) + iVar4 * 0x20;
                break;
              }
            }
            else {
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(puVar3 + 3));
            }
          }
        }
      }
      if ((*(int *)(gen_frame + 0x1c)) != -1) break;
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c6da6d();
    iVar1 = (*(int *)(gen_frame + 0x1c));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x28));
  return iVar1;
}

/* ref: FUN_00c6d9a9 */
GEN_LIB GEN_NOFRAME uint F_00c6d9a9(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6d9a9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6d9af */
GEN_LIB GEN_NOFRAME uint F_00c6d9af(void)
{
  GEN_ENTER(0xc6d9afu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(10);
  return uVar1;
}

/* ref: FUN_00c6da6d */
GEN_LIB GEN_NOFRAME uint F_00c6da6d(void)
{
  GEN_ENTER(0xc6da6du, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xb);
  return uVar1;
}

/* ref: FUN_00c6db5f */
GEN_LIB GEN_NOFRAME unsigned int F_00c6db5f(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6db5fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  byte * pbVar1;
  uint _Filehandle;
  
  _Filehandle = *((uint *)GEN_TOP((in_ebp + 0xc)));
  if (*((int *)GEN_TOP((in_ebp - 0x1c))) == 0) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)_Filehandle >> 5)] + 4 + (_Filehandle & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
  }
  F_00c6d8b6(_Filehandle);
  return;
}

/* ref: __setmode_nolock */
GEN_LIB GEN_NOFRAME int F_00c6db8c(GEN_P(int _FileHandle, unsigned int gen_a0), GEN_P(int _Mode, unsigned int gen_a1))
{
  GEN_ENTER(0xc6db8cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int _FileHandle = (int)gen_a0;)
  GEN_PIN(int _Mode = (int)gen_a1;)
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
  cVar2 = *((char *)GEN_TOP((iVar4 + 0x24)));
  bVar3 = *((byte *)GEN_TOP((iVar4 + 4)));
  if (_Mode == 0x4000) {
    *((byte *)GEN_TOP((iVar4 + 4))) = *((byte *)GEN_TOP((iVar4 + 4))) | 0x80;
    pbVar5 = ((byte *)GEN_TOP((*piVar1 + 0x24 + iVar7)));
    *pbVar5 = *pbVar5 & 0x80;
  }
  else if (_Mode == 0x8000) {
    *((byte *)GEN_TOP((iVar4 + 4))) = *((byte *)GEN_TOP((iVar4 + 4))) & 0x7f;
  }
  else {
    if ((_Mode == 0x10000) || (_Mode == 0x20000)) {
      *((byte *)GEN_TOP((iVar4 + 4))) = *((byte *)GEN_TOP((iVar4 + 4))) | 0x80;
      pbVar5 = ((byte *)GEN_TOP((*piVar1 + 0x24 + iVar7)));
      bVar6 = *pbVar5 & 0x82 | 2;
    }
    else {
      if (_Mode != 0x40000) goto LAB_00c6dc29;
      *((byte *)GEN_TOP((iVar4 + 4))) = *((byte *)GEN_TOP((iVar4 + 4))) | 0x80;
      pbVar5 = ((byte *)GEN_TOP((*piVar1 + 0x24 + iVar7)));
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
GEN_LIB GEN_NOFRAME int F_00c6dc47(GEN_P(int _Mode, unsigned int gen_a0))
{
  GEN_ENTER(0xc6dc47u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _Mode = (int)gen_a0;)
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
GEN_LIB GEN_NOFRAME int F_00c6dc89(GEN_P(int * _PMode, unsigned int gen_a0))
{
  GEN_ENTER(0xc6dc89u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * _PMode = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (_PMode == ((int *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0x16;
  }
  *_PMode = REFG(int, 0x15d7640);
  return 0;
}

/* ref: FUN_00c6dd96 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6dd96(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6dd96u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp + 8))));
  return;
}

/* ref: __lseeki64_nolock */
GEN_LIB GEN_NOFRAME longlong F_00c6dda1(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(LONG param_2, unsigned int gen_a1), GEN_P(LONG param_3, unsigned int gen_a2), GEN_P(DWORD param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc6dda1u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(LONG param_2 = (LONG)gen_a1;)
  GEN_PIN(LONG param_3 = (LONG)gen_a2;)
  GEN_PIN(DWORD param_4 = (DWORD)gen_a3;)
  GEN_FRAME_DECL(0x8, 8);
  byte * pbVar1;
  HANDLE hFile;
  int * piVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG LVar5;
  
  (*(LONG *)(gen_frame + 0x0)) = param_3;
  hFile = (HANDLE)F_00c6d7ae(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    piVar2 = F_00c51f85();
    *piVar2 = 9;
LAB_00c6ddd2: ;
    DVar3 = 0xffffffff;
    LVar5 = -1;
  }
  else {
    DVar3 = gen_imp_SetFilePointer(hFile,param_2,&(*(LONG *)(gen_frame + 0x0)),param_4);
    if (DVar3 == 0xffffffff) {
      DVar4 = gen_imp_GetLastError();
      if (DVar4 != 0) {
        F_00c51fab(DVar4);
        goto LAB_00c6ddd2;
      }
    }
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)param_1 >> 5)] + 4 + (param_1 & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfd;
    LVar5 = (*(LONG *)(gen_frame + 0x0));
  }
  return (longlong)CONCAT44(LVar5,DVar3);
}

/* ref: __lseeki64 */
GEN_LIB GEN_NOFRAME longlong F_00c6de26(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6de26u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x4c, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
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
  
  (*(undefined4 *)(gen_frame + 0x34)) = 0x14;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = &REFG(undefined, 0x12f6758);
  (*(uint volatile *)(gen_frame + 0x2c)) = 0xc6de32;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ 0x12f6758;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x24)))))) { return (longlong)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = 0xffffffff;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = 0xffffffff;
  (*(longlong *)(gen_frame + 0x10)) = 0xffffffffffffffff;
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
      if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar4)] + 4 + iVar6))) & 1) != 0) {
        F_00c6d817((*(uint *)&gen_args[0]));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar4)] + 4 + iVar6))) & 1) == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = 9;
          puVar1 = F_00c51f98();
          *puVar1 = 0;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 0)) = 0xffffffff;
          (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4)) = 0xffffffff;
          (*(longlong *)(gen_frame + 0x10)) = -1;
        }
        else {
          lVar7 = F_00c6dda1((*(uint *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
          (*(longlong *)(gen_frame + 0x10)) = lVar7;
        }
        (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c6df06((gen_frame + 0x34));
        uVar3 = (undefined4)(*(longlong *)(gen_frame + 0x10));
        uVar5 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4));
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
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
  return (longlong)CONCAT44(uVar5,uVar3);
}

/* ref: FUN_00c6df06 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6df06(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6df06u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp + 8))));
  return;
}

/* ref: __ceil_default */
GEN_LIB GEN_NOFRAME float10 F_00c6df10(double gen_a0)
{
  GEN_ENTER(0xc6df10u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  double dVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uVar2 = F_00c6f59e(REFG(undefined4, 0x134bc80),0xffff);
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) == 0x7ff0) {
    uVar3 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),
                     (int)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20));
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 3) {
        F_00c6f59e(uVar2,0xffff);
        return (float10)(*(double *)&gen_args[0]);
      }
      if (uVar3 == 3) {
        fVar4 = F_00c6f323(0xc,(*(double *)&gen_args[0]),uVar2);
        return fVar4;
      }
    }
    dVar1 = GEN_X87((*(double *)&gen_args[0]) + REFG(double, 0x1088130));
    uVar5 = 8;
  }
  else {
    fVar4 = F_00c7d6ab((*(double *)&gen_args[0]));
    dVar1 = (double)fVar4;
    if (((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(dVar1)) != ((GEN_ISNAN((*(double *)&gen_args[0])) || GEN_ISNAN(dVar1)) || (*(double *)&gen_args[0]) == dVar1)) ||
       ((uVar2 & 0x20) != 0)) {
      F_00c6f59e(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = F_00c6f3d9(uVar5,0xc,(*(double *)&gen_args[0]),dVar1,uVar2);
  return fVar4;
}

/* ref: __isleadbyte_l */
GEN_LIB GEN_NOFRAME int F_00c6dfe8(GEN_P(int _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6dfe8u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int _C = (int)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  ushort uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 200))) + (_C & 0xffU) * 2)));
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1 & 0x8000;
}

/* ref: _isleadbyte */
GEN_LIB GEN_NOFRAME int F_00c6e020(GEN_P(int _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _C = (int)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c6dfe8(_C,((undefined *)GEN_TOP(0x0)));
  return iVar1;
}

/* ref: FID_conflict__iswalpha_00c6e033 */
GEN_LIB GEN_NOFRAME int F_00c6e033(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e033u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  return iVar1;
}

/* ref: FID_conflict__iswalpha_00c6e049 */
GEN_LIB GEN_NOFRAME int F_00c6e049(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e049u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  return iVar1;
}

/* ref: FID_conflict___iswupper_l_00c6e05f */
GEN_LIB GEN_NOFRAME int F_00c6e05f(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e05fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,1);
  return iVar1;
}

/* ref: FID_conflict___iswupper_l_00c6e072 */
GEN_LIB GEN_NOFRAME int F_00c6e072(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e072u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,1);
  return iVar1;
}

/* ref: FID_conflict__iswlower_00c6e085 */
GEN_LIB GEN_NOFRAME int F_00c6e085(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e085u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,2);
  return iVar1;
}

/* ref: FID_conflict__iswlower_00c6e098 */
GEN_LIB GEN_NOFRAME int F_00c6e098(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e098u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,2);
  return iVar1;
}

/* ref: FID_conflict___iswdigit_l_00c6e0ab */
GEN_LIB GEN_NOFRAME int F_00c6e0ab(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e0abu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,4);
  return iVar1;
}

/* ref: FID_conflict___iswdigit_l_00c6e0be */
GEN_LIB GEN_NOFRAME int F_00c6e0be(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e0beu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,4);
  return iVar1;
}

/* ref: FID_conflict___iswxdigit_l_00c6e0d1 */
GEN_LIB GEN_NOFRAME int F_00c6e0d1(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e0d1u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x80);
  return iVar1;
}

/* ref: FID_conflict___iswxdigit_l_00c6e0e7 */
GEN_LIB GEN_NOFRAME int F_00c6e0e7(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e0e7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x80);
  return iVar1;
}

/* ref: FID_conflict___iswspace_l_00c6e0fd */
GEN_LIB GEN_NOFRAME int F_00c6e0fd(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e0fdu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,8);
  return iVar1;
}

/* ref: FID_conflict___iswspace_l_00c6e110 */
GEN_LIB GEN_NOFRAME int F_00c6e110(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,8);
  return iVar1;
}

/* ref: FID_conflict__iswpunct_00c6e123 */
GEN_LIB GEN_NOFRAME int F_00c6e123(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e123u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x10);
  return iVar1;
}

/* ref: FID_conflict__iswpunct_00c6e136 */
GEN_LIB GEN_NOFRAME int F_00c6e136(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e136u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x10);
  return iVar1;
}

/* ref: FID_conflict__iswalnum_00c6e149 */
GEN_LIB GEN_NOFRAME int F_00c6e149(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e149u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  return iVar1;
}

/* ref: FID_conflict__iswalnum_00c6e15f */
GEN_LIB GEN_NOFRAME int F_00c6e15f(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e15fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  return iVar1;
}

/* ref: FID_conflict__iswprint_00c6e175 */
GEN_LIB GEN_NOFRAME int F_00c6e175(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e175u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x157);
  return iVar1;
}

/* ref: FID_conflict__iswprint_00c6e18b */
GEN_LIB GEN_NOFRAME int F_00c6e18b(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e18bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x157);
  return iVar1;
}

/* ref: FID_conflict___iswgraph_l_00c6e1a1 */
GEN_LIB GEN_NOFRAME int F_00c6e1a1(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e1a1u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x117);
  return iVar1;
}

/* ref: FID_conflict___iswgraph_l_00c6e1b7 */
GEN_LIB GEN_NOFRAME int F_00c6e1b7(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e1b7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x117);
  return iVar1;
}

/* ref: FID_conflict__iswcntrl_00c6e1cd */
GEN_LIB GEN_NOFRAME int F_00c6e1cd(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e1cdu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x20);
  return iVar1;
}

/* ref: FID_conflict__iswcntrl_00c6e1e0 */
GEN_LIB GEN_NOFRAME int F_00c6e1e0(GEN_P(ushort _C, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x20);
  return iVar1;
}

/* ref: FUN_00c6e1f3 */
GEN_LIB GEN_NOFRAME uint F_00c6e1f3(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e1f3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return (uint)((ushort)param_1 < 0x80);
}

/* ref: FID_conflict___iswcsym_l_00c6e207 */
GEN_LIB GEN_NOFRAME int F_00c6e207(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e207u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict___iswcsym_l_00c6e22d */
GEN_LIB GEN_NOFRAME int F_00c6e22d(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e22du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x107);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict____iswcsymf_00c6e253 */
GEN_LIB GEN_NOFRAME int F_00c6e253(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e253u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict____iswcsymf_00c6e279 */
GEN_LIB GEN_NOFRAME int F_00c6e279(GEN_P(ushort _C, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e279u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort _C = (ushort)gen_a0;)
  int iVar1;
  
  iVar1 = F_00c7db09(_C,0x103);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c6e2a0 */
GEN_LIB GEN_FRAME float10 F_00c6e2a0(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc6e2a0u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  double in_xmm7;
  float10 fVar1;
  
  in_xmm7 = (double)in_st0;
  fVar1 = F_00c6e2be(in_xmm7,(uint)(ulonglong)gen_d2bits(in_xmm7),
                       (int)((ulonglong)gen_d2bits(in_xmm7) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c6e2be */
GEN_LIB GEN_NOFRAME float10 F_00c6e2be(double gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc6e2beu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, gen_a2);
  double in_xmm7 = (double)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = gen_bits2d((ulonglong)gen_d2bits(in_xmm7) & *(ulonglong *)&REFG(undefined, 0x1125700));
  dVar3 = gen_bits2d((ulonglong)gen_d2bits(in_xmm7) & *(ulonglong *)&REFG(undefined, 0x1125708));
  if (!GEN_ISNAN(dVar2) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1125828))) {
    if (!(*(double *)&REFG(undefined, 0x1125828) <= dVar2)) {
      if ((!GEN_ISNAN(dVar2) && !GEN_ISNAN(*(double *)&REFG(undefined, 0x1125818))) && !(dVar2 < *(double *)&REFG(undefined, 0x1125818))) {
        if (!(*(double *)&REFG(undefined, 0x1125810) <= dVar2)) {
          dVar2 = GEN_X87(dVar2 * dVar2);
          dVar5 = GEN_X87(dVar2 * dVar2);
          dVar3 = GEN_X87((dVar3 * dVar3) * (dVar3 * dVar3));
          return GEN_X87(((float10)GEN_TOD((in_xmm7 -
                          ((((((((*(double *)&REFG(undefined, 0x1125790) * dVar5 + *(double *)&REFG(undefined, 0x1125780)) *
                                 dVar5 + *(double *)&REFG(undefined, 0x1125770)) * dVar5 +
                               *(double *)&REFG(undefined, 0x1125760)) * dVar5 + *(double *)&REFG(undefined, 0x1125750)) * dVar5
                             + *(double *)&REFG(undefined, 0x1125740)) * dVar5 + *(double *)&REFG(undefined, 0x1125730)) * dVar5
                           + *(double *)&REFG(undefined, 0x1125720)) * dVar2 +
                          (((((((*(double *)&REFG(undefined, 0x1125798) * dVar3 + *(double *)&REFG(undefined, 0x1125788)) *
                                dVar3 + *(double *)&REFG(undefined, 0x1125778)) * dVar3 + *(double *)&REFG(undefined, 0x1125768)
                              ) * dVar3 + *(double *)&REFG(undefined, 0x1125758)) * dVar3 +
                            *(double *)&REFG(undefined, 0x1125748)) * dVar3 + *(double *)&REFG(undefined, 0x1125738)) * dVar3 +
                          *(double *)&REFG(undefined, 0x1125728))) * in_xmm7))));
        }
        if ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x1125808))) || dVar2 < *(double *)&REFG(undefined, 0x1125808)) {
          iVar4 = (uint)((ulonglong)gen_d2bits(dVar2 + REFG(double, 0x1125800)) >> 0x2c) - (int)REFG(undefined8, 0x11257e0);
          iVar1 = iVar4 * 3;
          dVar3 = GEN_X87((dVar2 - *(double *)(&REFG(undefined, 0x11267f0) + iVar4 * 0x18)) /
                  (dVar2 * *(double *)(&REFG(undefined, 0x11267f0) + iVar4 * 0x18) + *(double *)&REFG(undefined, 0x11257f8)));
        }
        else {
          iVar1 = 0x300;
          dVar3 = GEN_X87(REFG(double, 0x11257f0) / dVar2);
        }
        dVar5 = GEN_X87(dVar3 * dVar3);
        dVar6 = GEN_X87(dVar5 * dVar5);
        dVar7 = GEN_X87((dVar3 * dVar3) * (dVar3 * dVar3));
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
                                   (ulonglong)gen_d2bits(in_xmm7) ^ (ulonglong)gen_d2bits(dVar2))));
      }
      if (*(double *)&REFG(undefined, 0x1125820) <= dVar2) {
        dVar2 = GEN_X87(dVar2 * dVar2);
        dVar5 = GEN_X87(dVar2 * dVar2);
        dVar3 = GEN_X87((dVar3 * dVar3) * (dVar3 * dVar3));
        return GEN_X87(((float10)GEN_TOD((in_xmm7 -
                        ((((*(double *)&REFG(undefined, 0x11257d0) * dVar5 + *(double *)&REFG(undefined, 0x11257c0)) * dVar5 +
                          *(double *)&REFG(undefined, 0x11257b0)) * dVar5 + *(double *)&REFG(undefined, 0x11257a0)) * dVar2 +
                        (((*(double *)&REFG(undefined, 0x11257d8) * dVar3 + *(double *)&REFG(undefined, 0x11257c8)) * dVar3 +
                         *(double *)&REFG(undefined, 0x11257b8)) * dVar3 + *(double *)&REFG(undefined, 0x11257a8))) * in_xmm7))));
      }
      if ((GEN_ISNAN(dVar2) || GEN_ISNAN(*(double *)&REFG(undefined, 0x11257e8))) || dVar2 == *(double *)&REFG(undefined, 0x11257e8)) {
        return (float10)*(double *)&(*(uint *)&gen_args[0]);
      }
      if (!(*(double *)&REFG(undefined, 0x1125830) <= dVar2)) {
        return GEN_X87((float10)(*(double *)&REFG(undefined, 0x1125838) * *(double *)&REFG(undefined, 0x1125838)) +
               (float10)*(double *)&(*(uint *)&gen_args[0]));
      }
      return GEN_X87((float10)*(double *)&REFG(undefined, 0x1125838) * (float10)*(double *)&REFG(undefined, 0x1125838) +
             (float10)*(double *)&(*(uint *)&gen_args[0]));
    }
    if (!GEN_ISNAN(gen_bits2d((ulonglong)gen_d2bits(dVar2) & (ulonglong)gen_d2bits(REFG(double, 0x11256f0)))) &&
        !GEN_ISNAN(REFG(double, 0x11256f0))) {
      return GEN_X87((float10)*(double *)&REFG(undefined, 0x1125838) +
             (float10)*(double *)(&REFG(undefined, 0x1125710) + (int)(((*(int *)&gen_args[1]) >> 0x1f) * -8)));
    }
  }
  F_00c6bf0e(&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]),0x3eb);
  return (float10)*(double *)&(*(uint *)&gen_args[0]);
}

/* ref: __alloca_probe_16 */
GEN_LIB GEN_NOFRAME uint F_00c6e590(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 4 - in_eax & 0xf;
  return in_eax + uVar1 | -(uint)CARRY4(in_eax,uVar1);
}

/* ref: __alloca_probe_8 */
GEN_LIB GEN_NOFRAME uint F_00c6e5a6(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6e5a6u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 4 - in_eax & 7;
  return in_eax + uVar1 | -(uint)CARRY4(in_eax,uVar1);
}

/* ref: FUN_00c6e5bc */
GEN_LIB GEN_NOFRAME uint F_00c6e5bc(void)
{
  GEN_ENTER(0xc6e5bcu, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x34, 12);
  undefined * _File;
  int iVar1;
  int iVar2;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6778);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc6e5c8;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6778;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(uint *)(gen_frame + 0x14)) = 0;
  F_00c5aa4f(1);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  for (iVar2 = 3; (*(int *)(gen_frame + 0x10)) = iVar2, iVar2 < REFG(int, 0x15e52c0); iVar2 = iVar2 + 1) {
    if (*((int *)GEN_TOP((REFG(int, 0x15e42a8) + iVar2 * 4))) != 0) {
      _File = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + iVar2 * 4)));
      if (((*(int *)(((char *)(_File) + 12))) & 0x83) != 0) {
        iVar1 = F_00c49312(_File);
        if (iVar1 != -1) {
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
        }
      }
      if (0x13 < iVar2) {
        gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(*((int *)GEN_TOP((REFG(int, 0x15e42a8) + iVar2 * 4))) + 0x20));
        F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + iVar2 * 4))));
        *((undefined4 *)GEN_TOP((REFG(int, 0x15e42a8) + iVar2 * 4))) = 0;
      }
    }
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c6e64f();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00c6e64f */
GEN_LIB GEN_NOFRAME uint F_00c6e64f(void)
{
  GEN_ENTER(0xc6e64fu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __getbuf */
GEN_LIB GEN_NOFRAME unsigned int F_00c6e658(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e658u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
  pcVar1 = F_00c54c2e(0x1000);
  (*(char * PTR32 *)(((char *)(_File) + 8))) = pcVar1;
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
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
GEN_LIB GEN_NOFRAME int F_00c6e6a1(unsigned int gen_a0)
{
  GEN_ENTER(0xc6e6a1u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
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
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6798);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc6e6ad;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6798;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  if ((*(int *)&gen_args[0]) == -2) {
    piVar1 = F_00c51f85();
    *piVar1 = 9;
  }
  else {
    if ((-1 < (*(int *)&gen_args[0])) && ((uint)(*(int *)&gen_args[0]) < REFG(undefined4, 0x15e4190))) {
      iVar2 = (*(int *)&gen_args[0]) >> 5;
      iVar6 = ((*(int *)&gen_args[0]) & 0x1fU) * 0x40;
      if ((*((byte *)GEN_TOP((iVar6 + 4 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2)]))) & 1) != 0) {
        F_00c6d817((*(int *)&gen_args[0]));
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
        if ((*((byte *)GEN_TOP((iVar6 + 4 + (&REFG(undefined4, 0x15e41a0))[(int)(iVar2)]))) & 1) != 0) {
          hFile = (HANDLE)F_00c6d7ae(_FileHandle_00);
          BVar3 = gen_imp_FlushFileBuffers(hFile);
          if (BVar3 == 0) {
            DVar4 = gen_imp_GetLastError();
            (*(DWORD *)(gen_frame + 0x14)) = DVar4;
          }
          else {
            (*(DWORD *)(gen_frame + 0x14)) = 0;
          }
          if ((*(DWORD *)(gen_frame + 0x14)) == 0) goto LAB_00c6e75a;
          puVar5 = F_00c51f98();
          *puVar5 = (*(DWORD *)(gen_frame + 0x14));
        }
        piVar1 = F_00c51f85();
        *piVar1 = 9;
        (*(DWORD *)(gen_frame + 0x14)) = 0xffffffff;
LAB_00c6e75a: ;
        (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
        F_00c6e772(_FileHandle_00);
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return (*(DWORD *)(gen_frame + 0x14));
      }
    }
    piVar1 = F_00c51f85();
    *piVar1 = 9;
    F_00c4c305();
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return -1;
}

/* ref: FUN_00c6e76f */
GEN_LIB GEN_NOFRAME unsigned int F_00c6e76f(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e76fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp + 8))));
  return;
}

/* ref: FUN_00c6e772 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6e772(GEN_P(int in_ebx, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e772u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebx = (int)gen_a0;)
  F_00c6d8b6(in_ebx);
  return;
}

/* ref: __ftelli64_nolock */
GEN_LIB GEN_NOFRAME longlong F_00c6e77a(GEN_P(undefined * _File, unsigned int gen_a0))
{
  GEN_ENTER(0xc6e77au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * _File = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x11018, 8);
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
  
  (*(uint *)(gen_frame + 0x11010)) = 0xc6e789;
  (*(uint *)(gen_frame + 0x11010)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar2 = F_00c5d07b(_File);
  if ((*(int *)(((char *)(_File) + 4))) < 0) {
    (*(int *)(((char *)(_File) + 4))) = 0;
  }
  (*(longlong *)(gen_frame + 0x10000)) = F_00c6de26(uVar2,0,0,1);
  iVar10 = (int)((ulonglong)(*(longlong *)(gen_frame + 0x10000)) >> 0x20);
  pcVar3 = ((char *)GEN_TOP((uint)(*(longlong *)(gen_frame + 0x10000))));
  if ((iVar10 == 0 || (*(longlong *)(gen_frame + 0x10000)) < 0) && ((*(longlong *)(gen_frame + 0x10000)) < 0)) {
    return -1;
  }
  piVar7 = &REFG(undefined4, 0x15e41a0) + ((int)uVar2 >> 5);
  iVar12 = (uVar2 & 0x1f) * 0x40;
  iVar4 = *piVar7 + iVar12;
  bVar9 = (char)(*((char *)GEN_TOP((iVar4 + 0x24))) * '\x02') >> 1;
  uVar1 = (*(int *)(((char *)(_File) + 12)));
  ((byte *)(gen_frame + 0x1000f))[0] = bVar9;
  if ((uVar1 & 0x108) == 0) {
    return (*(longlong *)(gen_frame + 0x10000)) - (*(int *)(((char *)(_File) + 4)));
  }
  pcVar14 = (*(char * PTR32 *)((char *)(_File)));
  uVar1 = (*(int *)(((char *)(_File) + 12)));
  uVar13 = (int)pcVar14 - (int)(*(char * PTR32 *)(((char *)(_File) + 8)));
  (*(DWORD *)(gen_frame + 0x10008)) = uVar13;
  if ((uVar1 & 3) == 0) {
    if (-1 < (char)uVar1) {
      piVar7 = F_00c51f85();
      *piVar7 = 0x16;
      return -1;
    }
  }
  else {
    if ((bVar9 == 1) && (*((int *)GEN_TOP((iVar4 + 0x30))) != 0)) {
      uVar13 = uVar13 >> 1;
      if ((*(int *)(((char *)(_File) + 4))) == 0) {
        return (*(longlong *)(gen_frame + 0x10000));
      }
      lVar16 = F_00c6de26(uVar2,*((undefined4 *)GEN_TOP((iVar4 + 0x28))),*((undefined4 *)GEN_TOP((iVar4 + 0x2c))),0);
      iVar4 = *piVar7;
      if ((int)lVar16 != *((int *)GEN_TOP((iVar4 + 0x28 + iVar12)))) {
        return -1;
      }
      if ((int)((ulonglong)lVar16 >> 0x20) != *((int *)GEN_TOP((iVar4 + 0x2c + iVar12)))) {
        return -1;
      }
      BVar5 = gen_imp_ReadFile(*((HANDLE *)GEN_TOP((iVar4 + iVar12))),((byte *)(gen_frame + 0x1000f)) + 1,0x1000,&(*(DWORD *)(gen_frame + 0x10008)),
                       (GEN_LPANY)0x0);
      if (BVar5 == 0) {
        return -1;
      }
      lVar17 = F_00c6de26(uVar2,pcVar3,iVar10,0);
      if (((int)((ulonglong)lVar17 >> 0x20) == 0 || lVar17 < 0) && (lVar17 < 0)) {
        return -1;
      }
      if ((*(DWORD *)(gen_frame + 0x10008)) < uVar13) {
        return -1;
      }
      pbVar6 = ((byte *)(gen_frame + 0x1000f)) + 1;
      if (uVar13 != 0) {
        do {
          uVar13 = uVar13 - 1;
          if (((byte *)(gen_frame + 0x1000f)) + (*(DWORD *)(gen_frame + 0x10008)) + 1 <= pbVar6) break;
          if (*pbVar6 == 0xd) {
            if ((pbVar6 < ((byte *)(gen_frame + 0x1000f)) + (*(DWORD *)(gen_frame + 0x10008))) && (pbVar6[1] == 10)) {
              pbVar6 = pbVar6 + 1;
            }
          }
          else {
            pbVar6 = pbVar6 + (char)(&REFG(undefined, 0x134ba38))[(int)(*pbVar6)];
          }
          pbVar6 = pbVar6 + 1;
        } while (uVar13 != 0);
      }
      return lVar16 + (ulonglong)(uint)((int)pbVar6 - (int)(((byte *)(gen_frame + 0x1000f)) + 1));
    }
    if ((*((byte *)GEN_TOP((iVar4 + 4))) & 0x80) != 0) {
      for (pcVar11 = (*(char * PTR32 *)(((char *)(_File) + 8))); pcVar11 < pcVar14; pcVar11 = pcVar11 + 1) {
        if (*pcVar11 == '\n') {
          (*(DWORD *)(gen_frame + 0x10008)) = (*(DWORD *)(gen_frame + 0x10008)) + 1;
        }
      }
    }
  }
  if ((*(longlong *)(gen_frame + 0x10000)) == 0) {
    return (ulonglong)(*(DWORD *)(gen_frame + 0x10008));
  }
  if (((*(int *)(((char *)(_File) + 12))) & 1) != 0) {
    if ((*(int *)(((char *)(_File) + 4))) == 0) {
      (*(DWORD *)(gen_frame + 0x10008)) = 0;
    }
    else {
      pcVar14 = pcVar14 + ((*(int *)(((char *)(_File) + 4))) - (int)(*(char * PTR32 *)(((char *)(_File) + 8))));
      if ((*((byte *)GEN_TOP((iVar4 + 4))) & 0x80) != 0) {
        lVar16 = F_00c6de26(uVar2,0,0,2);
        if (lVar16 == (*(longlong *)(gen_frame + 0x10000))) {
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
          if (((int)((ulonglong)lVar16 >> 0x20) == 0 || lVar16 < 0) && (lVar16 < 0)) {
            return -1;
          }
          if (((((char *)GEN_TOP(0x200)) < pcVar14) || (((*(int *)(((char *)(_File) + 12))) & 8U) == 0)) ||
             (pcVar14 = ((char *)GEN_TOP(0x200)), ((*(int *)(((char *)(_File) + 12))) & 0x400U) != 0)) {
            pcVar14 = ((char *)GEN_TOP((*(int *)(((char *)(_File) + 24)))));
          }
          bVar15 = (*((byte *)GEN_TOP((*piVar7 + 4 + iVar12))) & 4) == 0;
        }
        if (!bVar15) {
          pcVar14 = pcVar14 + 1;
        }
      }
      if (((byte *)(gen_frame + 0x1000f))[0] == 1) {
        pcVar14 = ((char *)GEN_TOP(((uint)((int)(uintptr_t)pcVar14) >> 1)));
      }
      (*(longlong *)(gen_frame + 0x10000)) = CONCAT44(iVar10 - (uint)(pcVar3 < pcVar14),(int)pcVar3 - (int)pcVar14);
    }
  }
  if (((byte *)(gen_frame + 0x1000f))[0] == 1) {
    (*(DWORD *)(gen_frame + 0x10008)) = (*(DWORD *)(gen_frame + 0x10008)) >> 1;
  }
  return (longlong)
         CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10000)) + 4)) + (uint)CARRY4((*(DWORD *)(gen_frame + 0x10008)),(uint)(*(longlong *)(gen_frame + 0x10000))),
                  (*(DWORD *)(gen_frame + 0x10008)) + (uint)(*(longlong *)(gen_frame + 0x10000)));
}

/* ref: __ftelli64 */
GEN_LIB GEN_NOFRAME longlong F_00c6eac4(unsigned int gen_a0)
{
  GEN_ENTER(0xc6eac4u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f67b8);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc6ead0;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f67b8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (longlong)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar3 = 0xffffffff;
    uVar2 = 0xffffffff;
  }
  else {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
    lVar4 = F_00c6e77a((*(undefined * PTR32 *)&gen_args[0]));
    (*(longlong *)(gen_frame + 0x10)) = lVar4;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c6eb27((gen_frame + 0x30));
    uVar2 = (undefined4)(*(longlong *)(gen_frame + 0x10));
    uVar3 = (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x10)) + 4));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (longlong)CONCAT44(uVar3,uVar2);
}

/* ref: FUN_00c6eb27 */
GEN_LIB GEN_NOFRAME uint F_00c6eb27(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6eb27u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 8))));
  return extraout_EAX;
}

/* ref: __set_exp */
GEN_LIB GEN_NOFRAME float10 F_00c6eb31(double gen_a0, unsigned int gen_a1)
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

/* ref: Global::__get_exp */
GEN_LIB GEN_NOFRAME uint F_00c6eb5e(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eb5eu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (int)(short)(((*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 2)) >> 4 & 0x7ff) - 0x3fe);
}

/* ref: __add_exp */
GEN_LIB GEN_NOFRAME float10 F_00c6eb77(double gen_a0, unsigned int gen_a1)
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
GEN_LIB GEN_NOFRAME float10 F_00c6eba5(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6eba5u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  double local_c;
  
  local_c = gen_bits2d(CONCAT26((short)(*(undefined4 *)&gen_args[2]) << 4 | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x800f,
                                (int6)(ulonglong)gen_d2bits((*(double *)&gen_args[0]))));
  return (float10)local_c;
}

/* ref: __sptype */
GEN_LIB GEN_NOFRAME uint F_00c6ebcd(unsigned int gen_a0, unsigned int gen_a1)
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

/* ref: Global::__decomp */
GEN_LIB GEN_NOFRAME float10 F_00c6ec33(double gen_a0, unsigned int gen_a1)
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
        iVar4 = iVar4 - 1;
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
GEN_LIB GEN_NOFRAME unsigned int F_00c6ecf6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
GEN_LIB GEN_NOFRAME unsigned int F_00c6efd2(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc6efd2u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_00c6ecf6(param_1,param_2,param_3,param_4,param_5,param_6,0);
  return;
}

/* ref: __raise_excf */
GEN_LIB GEN_NOFRAME unsigned int F_00c6eff5(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc6eff5u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  F_00c6ecf6(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}

/* ref: __handle_exc */
GEN_LIB GEN_NOFRAME byte F_00c6f018(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(double * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc6f018u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x18, 8);
  double dVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  (*(uint *)(gen_frame + 0x10)) = uVar5;
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
      fVar7 = F_00c6ec33(*param_2,&(*(int *)(gen_frame + 0xc)));
      dVar1 = (double)fVar7;
      (*(uint *)(gen_frame + 0x0)) = (uint)(ulonglong)gen_d2bits(dVar1);
      (*(byte *)(gen_frame + 0x4)) = (byte)((ulonglong)gen_d2bits(dVar1) >> 0x20);
      (*(undefined1 *)(gen_frame + 0x5)) = (undefined1)((ulonglong)gen_d2bits(dVar1) >> 0x28);
      (*(ushort *)(gen_frame + 0x6)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      iVar4 = (*(int *)(gen_frame + 0xc)) - 0x600;
      if (iVar4 < -0x432) {
        dVar1 = GEN_X87(dVar1 * *(double *)&REFG(undefined, 0x108bec8));
        bVar6 = bVar3;
LAB_00c6f1ba: ;
        (*(uint *)(gen_frame + 0x0)) = (uint)(ulonglong)gen_d2bits(dVar1);
        (*(byte *)(gen_frame + 0x4)) = (byte)((ulonglong)gen_d2bits(dVar1) >> 0x20);
        (*(undefined1 *)(gen_frame + 0x5)) = (undefined1)((ulonglong)gen_d2bits(dVar1) >> 0x28);
        (*(ushort *)(gen_frame + 0x6)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      }
      else {
        (*(ushort *)(gen_frame + 0x6)) = (*(ushort *)(gen_frame + 0x6)) & 0xf | 0x10;
        if (iVar4 < -0x3fd) {
          iVar4 = -0x3fd - iVar4;
          do {
            if ((((*(uint *)(gen_frame + 0x0)) & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) >> 1;
            if (((*(byte *)(gen_frame + 0x4)) & 1) != 0) {
              (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x80000000;
            }
            uVar5 = CONCAT22((*(ushort *)(gen_frame + 0x6)),CONCAT11((*(undefined1 *)(gen_frame + 0x5)),(*(byte *)(gen_frame + 0x4)))) >> 1;
            (*(byte *)(gen_frame + 0x4)) = (byte)uVar5;
            (*(undefined1 *)(gen_frame + 0x5)) = (undefined1)(uVar5 >> 8);
            (*(ushort *)(gen_frame + 0x6)) = (*(ushort *)(gen_frame + 0x6)) >> 1;
            iVar4 = iVar4 - 1;
          } while (iVar4 != 0);
        }
        if (dVar1 <= 0.0 && (!GEN_ISNAN(dVar1) && dVar1 != 0.0)) {
          dVar1 = -gen_bits2d(CONCAT26((*(ushort *)(gen_frame + 0x6)),CONCAT15((*(undefined1 *)(gen_frame + 0x5)),CONCAT14((*(byte *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x0))))));
          goto LAB_00c6f1ba;
        }
      }
      *param_2 = gen_bits2d(CONCAT26((*(ushort *)(gen_frame + 0x6)),CONCAT15((*(undefined1 *)(gen_frame + 0x5)),CONCAT14((*(byte *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x0))))));
      bVar3 = bVar6;
    }
    if (bVar3) {
      F_00c6f5c9(0x10);
    }
    uVar5 = (*(uint *)(gen_frame + 0x10)) & 0xfffffffd;
    (*(uint *)(gen_frame + 0x10)) = uVar5;
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
GEN_LIB GEN_NOFRAME unsigned int F_00c6f1fc(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f1fcu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  
  if (param_1 == 1) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x22;
    return;
  }
  return;
}

/* ref: __get_fname */
GEN_LIB GEN_NOFRAME uint F_00c6f229(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f229u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x134bcb8))[(int)(iVar1 * 2)] == param_1) {
      return *((uint *)GEN_TOP((iVar1 * 8 + 0x134bcbc)));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  return 0;
}

/* ref: __errcode */
GEN_LIB GEN_NOFRAME uint F_00c6f24f(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f24fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  uint uStack_8;
  
  if ((param_1 & 0x20) == 0) {
    if ((param_1 & 8) != 0) {
      return 1;
    }
    if ((param_1 & 4) == 0) {
      if ((param_1 & 1) == 0) {
        return (param_1 & 2) * 2;
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
GEN_LIB GEN_NOFRAME float10 F_00c6f283(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(uint param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xc6f283u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(uint param_7 = (uint)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_FRAME_DECL(0x24, 12);
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x134bcb8))[(int)(iVar1 * 2)] == param_2) {
      iVar1 = *((int *)GEN_TOP((iVar1 * 8 + 0x134bcbc)));
      goto LAB_00c6f2a1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  iVar1 = 0;
LAB_00c6f2a1: ;
  (*(int *)(gen_frame + 0x4)) = iVar1;
  if (iVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    (*(undefined4 *)(gen_frame + 0xc)) = param_4;
    (*(undefined4 *)(gen_frame + 0x10)) = param_5;
    (*(undefined4 *)(gen_frame + 0x14)) = param_6;
    (*(uint *)(gen_frame + 0x18)) = param_7;
    (*(undefined4 *)(gen_frame + 0x0)) = param_1;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_8;
    F_00c6f59e(param_9,0xffff);
    uVar2 = F_00c7db7d(&(*(undefined4 *)(gen_frame + 0x0)));
    if (uVar2 == 0) {
      F_00c6f1fc(param_1);
    }
    return ((float10)GEN_TOD(gen_bits2d(CONCAT44((*(undefined4 *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x18))))));
  }
  F_00c6f59e(param_9,0xffff);
  F_00c6f1fc(param_1);
  return ((float10)GEN_TOD(gen_bits2d(CONCAT44(param_8,param_7))));
}

/* ref: __handle_qnan1 */
GEN_LIB GEN_NOFRAME float10 F_00c6f323(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc6f323u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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
GEN_LIB GEN_NOFRAME float10 F_00c6f378(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(double param_2, double gen_a1), GEN_P(double param_3, double gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc6f378u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), (unsigned int)gen_trace_d(gen_a2));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(double param_2 = (double)gen_a1;)
  GEN_PIN(double param_3 = (double)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  double dVar1;
  int * piVar2;
  float10 fVar3;
  
  dVar1 = GEN_X87(param_2 + param_3);
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
GEN_LIB GEN_NOFRAME float10 F_00c6f3d9(unsigned int gen_a0, unsigned int gen_a1, double gen_a2, double gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc6f3d9u, gen_a0, gen_a1, (unsigned int)gen_trace_d(gen_a2), (unsigned int)(gen_trace_d(gen_a2) >> 32));
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[4], &gen_a3, sizeof gen_a3);
  gen_args[6] = gen_a4;
  GEN_FRAME_DECL(0x90, 0);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  bVar1 = F_00c6f018((*(undefined4 *)&gen_args[0]),&(*(double *)&gen_args[4]),(*(undefined4 *)&gen_args[6]));
  if ((int)CONCAT31(extraout_var,bVar1) == 0) {
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) & 0xfffffffe;
    F_00c6ecf6(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(double *)&gen_args[2]),&(*(double *)&gen_args[4]),0);
  }
  uVar2 = F_00c6f24f((char)(*(undefined4 *)&gen_args[0]));
  if ((REFG(int, 0x134c1bc) == 0) && (uVar2 != 0)) {
    fVar3 = F_00c6f283(uVar2,(*(undefined4 *)&gen_args[1]),(int)(ulonglong)gen_d2bits((*(double *)&gen_args[2])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[2])) >> 0x20),0,0,
                       (uint)(ulonglong)gen_d2bits((*(double *)&gen_args[4])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[4])) >> 0x20),(*(undefined4 *)&gen_args[6]));
  }
  else {
    F_00c6f1fc(uVar2);
    F_00c6f59e((*(undefined4 *)&gen_args[6]),0xffff);
    fVar3 = (float10)(*(double *)&gen_args[4]);
  }
  return fVar3;
}

/* ref: __except2 */
GEN_LIB GEN_NOFRAME float10 F_00c6f4a3(unsigned int gen_a0, unsigned int gen_a1, double gen_a2, double gen_a3, double gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc6f4a3u, gen_a0, gen_a1, (unsigned int)gen_trace_d(gen_a2), (unsigned int)(gen_trace_d(gen_a2) >> 32));
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[4], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[6], &gen_a4, sizeof gen_a4);
  gen_args[8] = gen_a5;
  GEN_FRAME_DECL(0x90, 0);
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  float10 fVar3;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  bVar1 = F_00c6f018((*(undefined4 *)&gen_args[0]),&(*(double *)&gen_args[6]),(*(undefined4 *)&gen_args[8]));
  if ((int)CONCAT31(extraout_var,bVar1) == 0) {
    (*(double *)(gen_frame + 0x30)) = (*(double *)&gen_args[4]);
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) & 0xffffffe3 | 3;
    F_00c6ecf6(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(double *)&gen_args[2]),&(*(double *)&gen_args[6]),0);
  }
  uVar2 = F_00c6f24f((char)(*(undefined4 *)&gen_args[0]));
  if ((REFG(int, 0x134c1bc) == 0) && (uVar2 != 0)) {
    fVar3 = F_00c6f283(uVar2,(*(undefined4 *)&gen_args[1]),(int)(ulonglong)gen_d2bits((*(double *)&gen_args[2])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[2])) >> 0x20),
                       (int)(ulonglong)gen_d2bits((*(double *)&gen_args[4])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[4])) >> 0x20),
                       (uint)(ulonglong)gen_d2bits((*(double *)&gen_args[6])),
                       (int)((ulonglong)gen_d2bits((*(double *)&gen_args[6])) >> 0x20),(*(undefined4 *)&gen_args[8]));
  }
  else {
    F_00c6f1fc(uVar2);
    F_00c6f59e((*(undefined4 *)&gen_args[8]),0xffff);
    fVar3 = (float10)(*(double *)&gen_args[6]);
  }
  return fVar3;
}

/* ref: __statfp */
GEN_LIB GEN_NOFRAME byte F_00c6f57d(void)
{
  GEN_ENTER(0xc6f57du, 0u, 0u, 0u, 0u);
}

/* ref: __clrfp */
GEN_LIB GEN_NOFRAME uint F_00c6f58d(void)
{
  GEN_ENTER(0xc6f58du, 0u, 0u, 0u, 0u);
  return (int)gen_fpusw(1);
}

/* ref: __ctrlfp */
GEN_LIB GEN_NOFRAME uint F_00c6f59e(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6f59eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  gen_set_x87_cw((unsigned short)~(ushort)param_2 & gen_x87_cw | (ushort)param_1 & (ushort)param_2);
  return (int)(short)gen_x87_cw;
}

/* ref: Global::__set_statfp */
GEN_LIB GEN_NOFRAME unsigned int F_00c6f5c9(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f5c9u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  byte bVar1;
  volatile double local_c;
  
  bVar1 = (byte)param_1;
  if (((byte)param_1 & 1) != 0) {
    param_1 = (int)ROUND(*(float10 *)&REFG(undefined, 0x134bda0));
  }
  if ((bVar1 & 8) != 0) {
    local_c = (double)*(float10 *)&REFG(undefined, 0x134bda0);
  }
  if ((bVar1 & 0x10) != 0) {
    local_c = (double)*(float10 *)&REFG(undefined, 0x134bdac);
  }
  return;
}

/* ref: ___get_fpsr_sse2 */
GEN_LIB GEN_NOFRAME uint F_00c6f621(void)
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
GEN_LIB GEN_NOFRAME uint F_00c6f63f(unsigned int gen_a0)
{
  GEN_ENTER(0xc6f63fu, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x38, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f67d8);
  (*(uint *)(gen_frame + 0x24)) = 0xc6f64b;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f67d8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x4));
  if (REFG(int, 0x15e42a0) != 0) {
    if ((((*(uint *)&gen_args[0]) & 0x40) == 0) || (REFG(int, 0x134bdb8) == 0)) {
      MXCSR = (*(uint *)&gen_args[0]) & 0xffffffbf;
    }
    else {
      (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
      MXCSR = (*(uint *)&gen_args[0]);
      (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0xc6f6b0;
  return 0;
}

/* ref: FUN_00c6f66c */
GEN_LIB GEN_NOFRAME uint F_00c6f66c(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f66cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  if ((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x14))))) != -0x3ffffffb) &&
     (*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x14))))) != -0x3fffffe3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c6f688 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6f688(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f688u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  REFG(undefined4, 0x134bdb8) = 0;
  *((uint *)GEN_TOP((in_ebp + 8))) = *((uint *)GEN_TOP((in_ebp + 8))) & 0xffffffbf;
  MXCSR = *((undefined4 *)GEN_TOP((in_ebp + 8)));
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc6f6b0;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return;
}

/* ref: FUN_00c6f6b1 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6f6b1(void)
{
  GEN_ENTER(0xc6f6b1u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x15e42a0) != 0) {
    MXCSR = MXCSR & 0xffffffc0;
  }
  return;
}

/* ref: ___ctrlfp_sse2 */
GEN_LIB GEN_NOFRAME uint F_00c6f6f9(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6f6f9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x15e42a0) != 0) {
    uVar1 = F_00c6f621();
    F_00c6f63f((~param_2 | 0xffff807f) & uVar1 | param_1 & param_2);
  }
  return uVar1;
}

/* ref: ___set_statfp_sse2 */
GEN_LIB GEN_NOFRAME uint F_00c6f730(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c6f621();
  uVar1 = F_00c6f63f(uVar1 | param_1 & 0x3f);
  return uVar1;
}

/* ref: FID_conflict:_vprintf_helper */
GEN_LIB GEN_NOFRAME uint F_00c6f74b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc6f74bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x48, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined * _File;
  uint uVar1;
  int * piVar2;
  int _Flag;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f67f8);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc6f757;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f67f8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  uVar1 = F_00c50860();
  _File = ((undefined *)GEN_TOP((uVar1 + 0x20)));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = _File;
  if ((*(int *)&gen_args[1]) == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    uVar1 = 0xffffffff;
  }
  else {
    F_00c50937(_File);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
    _Flag = F_00c5df50(_File);
    uVar1 = (((code *)GEN_TOP((*(gen_code32 *)&gen_args[0]))))(_File,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    (*(uint *)(gen_frame + 0x10)) = uVar1;
    F_00c5dfec(_Flag,_File);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c6f7c8(_File);
    uVar1 = (*(uint *)(gen_frame + 0x10));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar1;
}

/* ref: FUN_00c6f7c5 */
GEN_LIB GEN_NOFRAME uint F_00c6f7c5(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f7c5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp - 0x1c))));
  return extraout_EAX;
}

/* ref: FUN_00c6f7c8 */
GEN_LIB GEN_NOFRAME uint F_00c6f7c8(GEN_P(undefined * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f7c8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * in_esi = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FID_conflict___vwprintf_s_l_00c6f7d0 */
GEN_LIB GEN_NOFRAME int F_00c6f7d0(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc6f7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc56a1d)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vwprintf_s_l_00c6f7ed */
GEN_LIB GEN_NOFRAME int F_00c6f7ed(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc6f7edu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5784c)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict___vwprintf_s_l_00c6f80a */
GEN_LIB GEN_NOFRAME int F_00c6f80a(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _Locale, unsigned int gen_a1), GEN_P(undefined * _ArgList, unsigned int gen_a2))
{
  GEN_ENTER(0xc6f80au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5867b)),_Format,_Locale,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vprintf_s_00c6f827 */
GEN_LIB GEN_NOFRAME int F_00c6f827(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc6f827u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc56a1d)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vprintf_s_00c6f843 */
GEN_LIB GEN_NOFRAME int F_00c6f843(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc6f843u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5784c)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: FID_conflict__vprintf_s_00c6f85f */
GEN_LIB GEN_NOFRAME int F_00c6f85f(GEN_P(wchar_t * _Format, unsigned int gen_a0), GEN_P(undefined * _ArgList, unsigned int gen_a1))
{
  GEN_ENTER(0xc6f85fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * _ArgList = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c6f74b(((code *)REFP(0xc5867b)),_Format,0,_ArgList);
  return uVar1;
}

/* ref: __modf_default */
GEN_LIB GEN_NOFRAME float10 F_00c6f87b(double gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6f87bu, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), gen_a1, 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[2] = gen_a1;
  GEN_FRAME_DECL(0xc, 4);
  double dVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  
  uVar2 = F_00c6f59e(0,0);
  F_00c6f59e(REFG(undefined4, 0x134bdbc),0xffff);
  if (((*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x7ff0) == 0x7ff0) {
    *(*(double * PTR32 *)&gen_args[2]) = *(double *)&REFG(undefined, 0x134bc98);
    uVar3 = F_00c6ebcd((int)(ulonglong)gen_d2bits((*(double *)&gen_args[0])),
                     (int)((ulonglong)gen_d2bits((*(double *)&gen_args[0])) >> 0x20));
    if (0 < (int)uVar3) {
      if ((int)uVar3 < 3) {
        *(*(double * PTR32 *)&gen_args[2]) = (*(double *)&gen_args[0]);
        (*(double *)(gen_frame + 0x0)) = F_00c5124d(0.0,(*(double *)&gen_args[0]));
        F_00c6f59e(uVar2,0xffff);
        goto LAB_00c6f988;
      }
      if (uVar3 == 3) {
        *(*(double * PTR32 *)&gen_args[2]) = (*(double *)&gen_args[0]);
        fVar4 = F_00c6f323(0x1c,(*(double *)&gen_args[0]),uVar2);
        return fVar4;
      }
    }
    dVar1 = GEN_X87((*(double *)&gen_args[0]) + REFG(double, 0x1088130));
    *(*(double * PTR32 *)&gen_args[2]) = dVar1;
    fVar4 = F_00c6f3d9(8,0x1c,(*(double *)&gen_args[0]),dVar1,uVar2);
  }
  else {
    fVar4 = F_00c7d6ab((*(double *)&gen_args[0]));
    *(*(double * PTR32 *)&gen_args[2]) = (double)fVar4;
    dVar1 = GEN_X87((double)((float10)(*(double *)&gen_args[0]) - fVar4));
    (*(double *)(gen_frame + 0x0)) = dVar1;
    if (GEN_ISNAN(dVar1) != (GEN_ISNAN(dVar1) || dVar1 == 0.0)) {
      (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x0)) + 6)) = (ushort)((ulonglong)gen_d2bits(dVar1) >> 0x30);
      (*(double *)(gen_frame + 0x0)) = gen_bits2d(CONCAT26((*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x0)) + 6)) | (*(undefined2 *)((char *)&(*(double *)&gen_args[0]) + 6)) & 0x8000,
                                    (int6)(ulonglong)gen_d2bits(dVar1)));
    }
    F_00c6f59e(uVar2,0xffff);
LAB_00c6f988: ;
    fVar4 = (float10)(*(double *)(gen_frame + 0x0));
  }
  return fVar4;
}

/* ref: FUN_00c6f990 */
GEN_LIB GEN_NOFRAME uint F_00c6f990(void)
{
  GEN_ENTER(0xc6f990u, 0u, 0u, 0u, 0u);
  return 0x134be70;
}

/* ref: FUN_00c6f996 */
GEN_LIB GEN_NOFRAME uint F_00c6f996(void)
{
  GEN_ENTER(0xc6f996u, 0u, 0u, 0u, 0u);
  return 0x134bdc0;
}

/* ref: __global_unwind2 */
GEN_LIB GEN_FRAME unsigned int F_00c6f9a0(GEN_P(PVOID param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc6f9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(PVOID param_1 = (PVOID)gen_a0;)
  gen_imp_RtlUnwind(param_1,(PVOID)0xc6f9b8,(GEN_LPANY)0x0,(PVOID)0x0);
  return;
}

/* ref: FUN_00c6f9c0 */
GEN_LIB GEN_NOFRAME uint F_00c6f9c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc6f9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  
  uVar1 = 1;
  if ((*((uint *)GEN_TOP((param_1 + 4))) & 6) != 0) {
    F_00c6fa05(*((undefined4 *)GEN_TOP((param_5 + 0x24))),*((undefined4 *)GEN_TOP((param_5 + 0x28))));
    *param_4 = param_2;
    uVar1 = 3;
  }
  return uVar1;
}

/* ref: __local_unwind2 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6fa05(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc6fa05u, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x30, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(int volatile *)(gen_frame + 0x10)) = (*(int *)&gen_args[0]);
  (*(undefined4 volatile *)(gen_frame + 0xc)) = 0xfffffffe;
  (*(gen_code32 *)(gen_frame + 0x8)) = ((code *)REFP(0xc6f9c0));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined * PTR32 *)(gen_frame + 0x4));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x4));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x4)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  while( true ) {
    iVar1 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 8)));
    uVar2 = *((uint *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc)));
    if ((uVar2 == 0xffffffff) || (((*(uint *)&gen_args[1]) != 0xffffffff && (uVar2 <= (*(uint *)&gen_args[1]))))) break;
    uVar3 = *((undefined4 *)GEN_TOP((iVar1 + uVar2 * 0xc)));
    (*(undefined4 volatile *)(gen_frame + 0xc)) = uVar3;
    *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0xc))) = uVar3;
    if (*((int *)GEN_TOP((iVar1 + 4 + uVar2 * 0xc))) == 0) {
      F_00c6fab5(*((undefined4 *)GEN_TOP((iVar1 + 8 + uVar2 * 0xc))),0x101);
      F_00c6fad4(*((undefined4 *)GEN_TOP((iVar1 + 8 + uVar2 * 0xc))));
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x4));
  return 0;
}

/* ref: __NLG_Notify1 */
GEN_LIB GEN_NOFRAME uint F_00c6faac(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(undefined4 in_ecx, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc6faacu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 cap_EBP = 0;
  
  REFG(undefined4, 0x134be88) = in_ecx;
  REFG(undefined4, 0x134be84) = in_eax;
  REFG(undefined4, 0x134be8c) = cap_EBP;
  return in_eax;
}

/* ref: __NLG_Notify */
GEN_LIB GEN_NOFRAME unsigned int F_00c6fab5(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6fab5u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined4 cap_EBP = 0;
  
  REFG(undefined4, 0x134be88) = param_2;
  REFG(undefined4, 0x134be84) = in_eax;
  REFG(undefined4, 0x134be8c) = cap_EBP;
  return 0;
}

/* ref: FUN_00c6fad4 */
GEN_LIB GEN_NOFRAME uint F_00c6fad4(GEN_P(code * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc6fad4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(code * in_eax = (code *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = (*in_eax)();
  return uVar1;
}

/* ref: __rt_probe_read4@4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00c6fad7(unsigned int gen_a0)
{
  GEN_ENTER(0xc6fad7u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x3c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6818);
  (*(uint *)(gen_frame + 0x28)) = 0xc6fae3;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6818;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x4));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(undefined4 *)(gen_frame + 0x0)) = 0xc6fb1f;
  return 1;
}

/* ref: FUN_00c6faf5 */
GEN_LIB GEN_NOFRAME uint F_00c6faf5(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc6faf5u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  return (uint)(*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((in_ebp - 0x14))))) == -0x3ffffffb);
}

/* ref: FUN_00c6fb09 */
GEN_LIB GEN_NOFRAME uint F_00c6fb09(GEN_P(int in_ebp, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6fb09u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP((in_ebp - 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  uVar1 = *((uint *)GEN_TOP((in_ebp - 0x1c)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc6fb1f;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return uVar1;
}

/* ref: strncnt_00c6fb22 */
GEN_LIB GEN_NOFRAME int F_00c6fb22(GEN_P(char * in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc6fb22u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = param_2;
  for (; (iVar1 != 0 && (*in_eax != '\0')); in_eax = in_eax + 1) {
    iVar1 = iVar1 - 1;
  }
  return (param_2 - (iVar1 - 1)) - 1;
}

/* ref: __crtCompareStringA_stat */
GEN_LIB GEN_NOFRAME int GEN_FASTCALL F_00c6fb40(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(ulong param_2, unsigned int gen_a1), GEN_P(ulong param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(char * param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc6fb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_2 = (ulong)gen_a1;)
  GEN_PIN(ulong param_3 = (ulong)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(char * param_6 = (char *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_FRAME_DECL(0x10034, 12);
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
  
  (*(uint *)(gen_frame + 0x1002c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x38);
  (*(byte * PTR32 *)(gen_frame + 0x1000c)) = ((byte *)GEN_TOP(param_3));
  pcVar3 = ((char *)GEN_TOP(param_3));
  pcVar9 = param_4;
  if ((int)param_4 < 1) {
    if ((int)param_4 < -1) {
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 0;
    }
  }
  else {
    do {
      pcVar9 = pcVar9 - 1;
      if (*pcVar3 == '\0') goto LAB_00c6fb77;
      pcVar3 = pcVar3 + 1;
    } while (pcVar9 != ((char *)GEN_TOP(0x0)));
    pcVar9 = ((char *)GEN_TOP(0xffffffff));
LAB_00c6fb77: ;
    param_4 = param_4 + (-1 - (int)pcVar9);
  }
  pbVar4 = in_EDX;
  iVar10 = param_5;
  if (param_5 < 1) {
    if (param_5 < -1) {
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 0;
    }
  }
  else {
    do {
      iVar10 = iVar10 - 1;
      if (*pbVar4 == 0) goto LAB_00c6fb9a;
      pbVar4 = pbVar4 + 1;
    } while (iVar10 != 0);
    iVar10 = -1;
LAB_00c6fb9a: ;
    param_5 = param_5 + (-1 - iVar10);
  }
  (*(int *)(gen_frame + 0x10008)) = 0;
  if (param_6 == ((char *)GEN_TOP(0x0))) {
    param_6 = *((char * PTR32 *)GEN_TOP((*in_ECX + 4)));
  }
  (*(byte * PTR32 *)(gen_frame + 0x10010)) = in_EDX;
  if ((param_4 == ((char *)GEN_TOP(0x0))) || (param_5 == 0)) {
    if (param_4 == ((char *)GEN_TOP(param_5))) {
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 2;
    }
    if (1 < param_5) {
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 1;
    }
    if (1 < (int)param_4) {
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 3;
    }
    BVar5 = gen_imp_GetCPInfo((UINT)param_6,((undefined *)(gen_frame + 0x10018)));
    if (BVar5 == 0) {
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 0;
    }
    if (0 < (int)param_4) {
      if ((*(UINT *)((char *)((undefined *)(gen_frame + 0x10018)))) < 2) {
        (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
        return 3;
      }
      pBVar6 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x10018)) + 6)));
      bVar2 = (*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x10018)) + 6) + (0) * 1)))));
      while( true ) {
        if (bVar2 == 0) {
          (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
          return 3;
        }
        if (pBVar6[1] == 0) break;
        if ((*pBVar6 <= *(*(byte * PTR32 *)(gen_frame + 0x1000c))) && (*(*(byte * PTR32 *)(gen_frame + 0x1000c)) <= pBVar6[1])) {
          (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
          return 2;
        }
        pBVar6 = pBVar6 + 2;
        bVar2 = *pBVar6;
      }
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 3;
    }
    if (0 < param_5) {
      if ((*(UINT *)((char *)((undefined *)(gen_frame + 0x10018)))) < 2) {
        (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
        return 1;
      }
      pBVar6 = ((BYTE *)(((char *)((undefined *)(gen_frame + 0x10018)) + 6)));
      bVar2 = (*((BYTE *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x10018)) + 6) + (0) * 1)))));
      while( true ) {
        if (bVar2 == 0) {
          (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
          return 1;
        }
        if (pBVar6[1] == 0) break;
        if ((*pBVar6 <= *(*(byte * PTR32 *)(gen_frame + 0x10010))) && (*(*(byte * PTR32 *)(gen_frame + 0x10010)) <= pBVar6[1])) {
          (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
          return 2;
        }
        pBVar6 = pBVar6 + 2;
        bVar2 = *pBVar6;
      }
      (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
      return 1;
    }
  }
  uVar7 = gen_imp_MultiByteToWideChar(param_6,9,(*(byte * PTR32 *)(gen_frame + 0x1000c)),param_4,0,0);
  (*(uint *)(gen_frame + 0x10004)) = uVar7;
  if (uVar7 == 0) {
    (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
    return 0;
  }
  if (((int)uVar7 < 1) || (0xffffffe0 / uVar7 < 2)) {
    (*(GEN_LPANY *)(gen_frame + 0x10014)) = (GEN_LPANY)0x0;
  }
  else {
    uVar1 = uVar7 * 2 + 8;
    if (uVar1 < 0x401) {
      puVar8 = ((undefined4 *)GEN_TOP((gen_frame + 0x0)));
      *puVar8 = 0xcccc;
      pWVar11 = (GEN_LPANY)(gen_frame + 0x0);
      if (1) {
LAB_00c6fcd2: ;
        pWVar11 = (GEN_LPANY)(puVar8 + 2);
      }
    }
    else {
      puVar8 = F_00c51787(uVar1);
      pWVar11 = (GEN_LPANY)0x0;
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0xdddd;
        goto LAB_00c6fcd2;
      }
    }
    (*(GEN_LPANY *)(gen_frame + 0x10014)) = pWVar11;
  }
  if ((*(GEN_LPANY *)(gen_frame + 0x10014)) == (GEN_LPANY)0x0) {
    (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
    return 0;
  }
  iVar10 = gen_imp_MultiByteToWideChar(param_6,1,(*(byte * PTR32 *)(gen_frame + 0x1000c)),param_4,(*(GEN_LPANY *)(gen_frame + 0x10014)),uVar7);
  if ((iVar10 == 0) || (uVar7 = gen_imp_MultiByteToWideChar(param_6,9,(*(byte * PTR32 *)(gen_frame + 0x10010)),param_5,0,0), uVar7 == 0))
  goto LAB_00c6fd90;
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
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0xdddd;
        goto LAB_00c6fd52;
      }
    }
  }
  if (pWVar11 != (GEN_LPANY)0x0) {
    iVar10 = gen_imp_MultiByteToWideChar(param_6,1,(*(byte * PTR32 *)(gen_frame + 0x10010)),param_5,pWVar11,uVar7);
    if (iVar10 != 0) {
      iVar10 = gen_imp_CompareStringW((LCID)param_1,param_2,(*(GEN_LPANY *)(gen_frame + 0x10014)),(*(uint *)(gen_frame + 0x10004)),pWVar11,uVar7);
      (*(int *)(gen_frame + 0x10008)) = iVar10;
    }
    F_00c4f78f(pWVar11);
  }
LAB_00c6fd90: ;
  F_00c4f78f((*(GEN_LPANY *)(gen_frame + 0x10014)));
  (*(undefined4 *)(gen_frame + 0x10000)) = 0xc6fdac;
  return (*(int *)(gen_frame + 0x10008));
}

/* ref: ___crtCompareStringA */
GEN_LIB GEN_NOFRAME int F_00c6fdae(GEN_P(undefined * _Plocinfo, unsigned int gen_a0), GEN_P(LPCWSTR _LocaleName, unsigned int gen_a1), GEN_P(DWORD _DwCmpFlags, unsigned int gen_a2), GEN_P(LPCSTR _LpString1, unsigned int gen_a3), GEN_P(int _CchCount1, unsigned int gen_a4), GEN_P(LPCSTR _LpString2, unsigned int gen_a5), GEN_P(int _CchCount2, unsigned int gen_a6), GEN_P(int _Code_page, unsigned int gen_a7))
{
  GEN_ENTER(0xc6fdaeu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCWSTR _LocaleName = (LPCWSTR)gen_a1;)
  GEN_PIN(DWORD _DwCmpFlags = (DWORD)gen_a2;)
  GEN_PIN(LPCSTR _LpString1 = (LPCSTR)gen_a3;)
  GEN_PIN(int _CchCount1 = (int)gen_a4;)
  GEN_PIN(LPCSTR _LpString2 = (LPCSTR)gen_a5;)
  GEN_PIN(int _CchCount2 = (int)gen_a6;)
  GEN_PIN(int _Code_page = (int)gen_a7;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Plocinfo);
  iVar1 = F_00c6fb40((undefined *)_LocaleName,_DwCmpFlags,(ulong)_LpString1,
                     ((char *)GEN_TOP(_CchCount1)),_CchCount2,((char *)GEN_TOP(_Code_page)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)));
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

/* ref: FUN_00c6fe64 */
GEN_LIB GEN_NOFRAME unsigned int F_00c6fe64(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(float10 in_st0, double gen_a1))
{
  GEN_ENTER(0xc6fe64u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(float10 in_st0 = (float10)gen_a1;)
  F_00c5ed93((undefined1)in_ecx,*(float10 *)&REFG(undefined, 0x111ad00));
  return;
}

/* ref: FUN_00c6fe71 */
GEN_LIB GEN_NOFRAME float10 F_00c6fe71(GEN_P(float10 in_st0, double gen_a0))
{
  GEN_ENTER(0xc6fe71u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  GEN_PIN(float10 in_st0 = (float10)gen_a0;)
  return *(float10 *)&REFG(undefined, 0x111ad00);
}

/* ref: FUN_00c6fedb */
GEN_LIB GEN_NOFRAME float10 F_00c6fedb(GEN_P(undefined4 in_ebx, unsigned int gen_a0))
{
  GEN_ENTER(0xc6fedbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebx = (undefined4)gen_a0;)
  float10 in_ST0 = 0;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)1;
  fVar1 = in_ST0;
  if ((char)((uint)in_ebx >> 8) == '\0') {
    fVar1 = -((float10)1 + in_ST0);
    fVar2 = in_ST0;
  }
  return GEN_X87(fVar2 / fVar1);
}

/* ref: __spawnvpe */
GEN_LIB GEN_NOFRAME int F_00c6feec(GEN_P(int _Mode, unsigned int gen_a0), GEN_P(char * _Filename, unsigned int gen_a1), GEN_P(char * PTR32 * _ArgList, unsigned int gen_a2), GEN_P(char * PTR32 * _Env, unsigned int gen_a3))
{
  GEN_ENTER(0xc6feecu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int _Mode = (int)gen_a0;)
  GEN_PIN(char * _Filename = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * PTR32 * _ArgList = (char * PTR32 *)(uintptr_t)gen_a2;)
  GEN_PIN(char * PTR32 * _Env = (char * PTR32 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x10, 0);
  uchar uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  uchar * puVar5;
  int eVar6;
  char * pcVar7;
  gen_size32 sVar8;
  gen_size32 sVar9;
  ulong * puVar10;
  uchar * puVar11;
  uchar * _Str;
  
  _Str = ((uchar *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)GEN_TOP(0x0));
  if ((_Filename == ((char *)GEN_TOP(0x0))) || (*_Filename == '\0')) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    iVar4 = -1;
  }
  else if (((_ArgList == ((char * PTR32 *)GEN_TOP(0x0))) || (*_ArgList == ((char *)GEN_TOP(0x0)))) || (**_ArgList == '\0')) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    iVar4 = -1;
  }
  else {
    piVar3 = F_00c51f85();
    iVar2 = *piVar3;
    piVar3 = F_00c51f85();
    *piVar3 = 0;
    (*(int *)(gen_frame + 0x0)) = F_00c701ca(_Mode,_Filename,_ArgList,_Env);
    if ((((*(int *)(gen_frame + 0x0)) == -1) && (piVar3 = F_00c51f85(), *piVar3 == 2)) &&
       (puVar5 = F_00c7e576((uchar *)_Filename,0x2f), puVar5 == ((uchar *)GEN_TOP(0x0)))) {
      eVar6 = F_00c4b6eb(&(*(char * PTR32 *)(gen_frame + 0x8)),((gen_size32 *)GEN_TOP(0x0)),((char *)REFP(0x1118c18)));
      if (eVar6 == 0) {
        if (((*(char * PTR32 *)(gen_frame + 0x8)) != ((char *)GEN_TOP(0x0))) && (_Str = F_00c54c73(0x104,1), _Str != ((uchar *)GEN_TOP(0x0)))) {
          pcVar7 = F_00c71169((*(char * PTR32 *)(gen_frame + 0x8)),_Str,0x103);
          while ((pcVar7 != ((char *)GEN_TOP(0x0)) && (*_Str != '\0'))) {
            sVar8 = F_00c552f0((char *)_Str);
            uVar1 = _Str[sVar8 - 1];
            if (uVar1 == '\\') {
              puVar5 = F_00c7075f(_Str,0x5c);
              if (_Str + (sVar8 - 1) != puVar5) {
                F_00c473c8(_Str,0x104,&REFG(undefined, 0x1118c14));
              }
            }
            else if ((uVar1 != '/') && (eVar6 = F_00c473c8(_Str,0x104,&REFG(undefined, 0x1118c14)), eVar6 != 0))
            goto LAB_00c6ffc1;
            sVar8 = F_00c552f0((char *)_Str);
            sVar9 = F_00c552f0(_Filename);
            if (0x103 < sVar8 + sVar9) break;
            eVar6 = F_00c473c8(_Str,0x104,_Filename);
            if (eVar6 != 0) goto LAB_00c6ffc1;
            piVar3 = F_00c51f85();
            *piVar3 = 0;
            (*(int *)(gen_frame + 0x0)) = F_00c701ca(_Mode,(char *)_Str,_ArgList,_Env);
            if ((*(int *)(gen_frame + 0x0)) != -1) break;
            piVar3 = F_00c51f85();
            if ((*piVar3 != 2) && (puVar10 = F_00c51f98(), *puVar10 != 0x15)) {
              puVar5 = F_00c7e576(_Str,0x5c);
              if ((_Str != puVar5) && (puVar5 = F_00c7e576(_Str,0x2f), _Str != puVar5)) break;
              puVar5 = _Str + 1;
              puVar11 = F_00c7e576(puVar5,0x5c);
              if ((puVar5 != puVar11) && (puVar11 = F_00c7e576(puVar5,0x2f), puVar5 != puVar11))
              break;
            }
            pcVar7 = F_00c71169(pcVar7,_Str,0x103);
          }
        }
      }
      else if (eVar6 == 0x16) {
LAB_00c6ffc1: ;
                    
        F_00c4c299(0,0,0,0,0);
      }
    }
    piVar3 = F_00c51f85();
    if (*piVar3 == 0) {
      piVar3 = F_00c51f85();
      *piVar3 = iVar2;
    }
    if (_Str != ((uchar *)GEN_TOP(0x0))) {
      F_00c4c68f(_Str);
    }
    iVar4 = (*(int *)(gen_frame + 0x0));
    if ((*(char * PTR32 *)(gen_frame + 0x8)) != ((char *)GEN_TOP(0x0))) {
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return iVar4;
}

/* ref: FUN_00c70158 */
GEN_LIB GEN_NOFRAME uint F_00c70158(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(char * PTR32 * param_3, unsigned int gen_a2), GEN_P(char * PTR32 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc70158u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * PTR32 * param_3 = (char * PTR32 *)(uintptr_t)gen_a2;)
  GEN_PIN(char * PTR32 * param_4 = (char * PTR32 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xc, 4);
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 == ((char *)GEN_TOP(0x0))) || (param_3 == ((char * PTR32 *)GEN_TOP(0x0)))) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    iVar2 = F_00c7e791(param_3,param_4,&(*(char * PTR32 *)(gen_frame + 0x4)),&(*(char * PTR32 *)(gen_frame + 0x0)),param_2);
    if (iVar2 != -1) {
      uVar3 = F_00c7e58d(param_1,param_2,(*(char * PTR32 *)(gen_frame + 0x4)),(*(char * PTR32 *)(gen_frame + 0x0)));
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x4)));
      F_00c4c68f((*(char * PTR32 *)(gen_frame + 0x0)));
      return uVar3;
    }
  }
  return 0xffffffff;
}

/* ref: __spawnve */
GEN_LIB GEN_NOFRAME int F_00c701ca(GEN_P(int _Mode, unsigned int gen_a0), GEN_P(char * _Filename, unsigned int gen_a1), GEN_P(char * PTR32 * _ArgList, unsigned int gen_a2), GEN_P(char * PTR32 * _Env, unsigned int gen_a3))
{
  GEN_ENTER(0xc701cau, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int _Mode = (int)gen_a0;)
  GEN_PIN(char * _Filename = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * PTR32 * _ArgList = (char * PTR32 *)(uintptr_t)gen_a2;)
  GEN_PIN(char * PTR32 * _Env = (char * PTR32 *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  uchar * puVar3;
  uchar * puVar4;
  gen_size32 sVar5;
  int eVar6;
  char * _Filename_00;
  uint uVar7;
  gen_size32 sVar8;
  uint local_10;
  undefined * PTR32 * local_c;
  char * local_8;
  
  local_8 = _Filename;
  if ((((_Filename == ((char *)GEN_TOP(0x0))) || (*_Filename == '\0')) || (_ArgList == ((char * PTR32 *)GEN_TOP(0x0)))) ||
     ((*_ArgList == ((char *)GEN_TOP(0x0)) || (**_ArgList == '\0')))) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    return -1;
  }
  puVar3 = F_00c7075f((uchar *)_Filename,0x5c);
  puVar4 = F_00c7075f((uchar *)_Filename,0x2f);
  if (puVar4 == ((uchar *)GEN_TOP(0x0))) {
    if ((puVar3 != ((uchar *)GEN_TOP(0x0))) ||
       (puVar3 = F_00c7e576((uchar *)_Filename,0x3a), puVar3 != ((uchar *)GEN_TOP(0x0)))) goto LAB_00c70299;
    sVar5 = F_00c552f0(_Filename);
    sVar5 = sVar5 + 3;
    local_8 = F_00c54c73(sVar5,1);
    if (local_8 != ((char *)GEN_TOP(0x0))) {
      eVar6 = F_00c49908(local_8,sVar5,&REFG(undefined, 0x1125c7c));
      if ((eVar6 != 0) || (eVar6 = F_00c473c8(local_8,sVar5,_Filename), eVar6 != 0))
      goto LAB_00c7028a;
      puVar3 = (uchar *)(local_8 + 2);
      goto LAB_00c70299;
    }
LAB_00c702f9: ;
    uVar7 = 0xffffffff;
  }
  else {
    if ((puVar3 == ((uchar *)GEN_TOP(0x0))) || (puVar3 < puVar4)) {
      puVar3 = puVar4;
    }
LAB_00c70299: ;
    local_10 = 0xffffffff;
    puVar3 = F_00c7075f(puVar3,0x2e);
    if (puVar3 == ((uchar *)GEN_TOP(0x0))) {
      sVar5 = F_00c552f0(local_8);
      sVar5 = sVar5 + 5;
      _Filename_00 = F_00c54c73(sVar5,1);
      if (_Filename_00 == ((char *)GEN_TOP(0x0))) goto LAB_00c702f9;
      eVar6 = F_00c49908(_Filename_00,sVar5,local_8);
      if (eVar6 != 0) {
LAB_00c7028a: ;
                    
        F_00c4c299(0,0,0,0,0);
      }
      sVar8 = F_00c552f0(local_8);
      piVar2 = F_00c51f85();
      iVar1 = *piVar2;
      local_c = &REFG(undefined * PTR32, 0x134be9c);
      do {
        eVar6 = F_00c49908(_Filename_00 + sVar8,_Filename_00 + (sVar5 - (int)(_Filename_00 + sVar8)),
                          *local_c);
        if (eVar6 != 0) goto LAB_00c7028a;
        eVar6 = F_00c703b3(_Filename_00,0);
        if (eVar6 == 0) {
          piVar2 = F_00c51f85();
          *piVar2 = iVar1;
          local_10 = F_00c70158(_Mode,_Filename_00,_ArgList,_Env);
          break;
        }
        local_c = local_c - 1;
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
GEN_LIB GEN_NOFRAME int F_00c703b3(GEN_P(char * _Filename, unsigned int gen_a0), GEN_P(int _AccessMode, unsigned int gen_a1))
{
  GEN_ENTER(0xc703b3u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * _Filename = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int _AccessMode = (int)gen_a1;)
  ulong * puVar1;
  int * piVar2;
  DWORD DVar3;
  int iVar4;
  
  if ((_Filename == ((char *)GEN_TOP(0x0))) || ((_AccessMode & 0xfffffff9U) != 0)) {
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
GEN_LIB GEN_NOFRAME int F_00c70432(GEN_P(wchar_t * _Filename, unsigned int gen_a0), GEN_P(int _AccessMode, unsigned int gen_a1))
{
  GEN_ENTER(0xc70432u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(wchar_t * _Filename = (wchar_t *)(uintptr_t)gen_a0;)
  GEN_PIN(int _AccessMode = (int)gen_a1;)
  int eVar1;
  
  eVar1 = F_00c703b3((char *)_Filename,_AccessMode);
  return -(uint)(eVar1 != 0);
}

/* ref: xtoa_s */
GEN_LIB GEN_NOFRAME uint F_00c7044a(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(char * in_ecx, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc7044au, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(char * in_ecx = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  ulonglong uVar1;
  char * pcVar2;
  int * piVar3;
  uint * puVar4;
  char * pcVar5;
  char cVar6;
  uint uVar7;
  char * pcVar8;
  uint uStack_14;
  
  if (in_ecx == ((char *)GEN_TOP(0x0))) {
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
          pcVar5 = pcVar5 - 1;
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
GEN_LIB GEN_NOFRAME int F_00c70504(GEN_P(int _Value, unsigned int gen_a0), GEN_P(char * _DstBuf, unsigned int gen_a1), GEN_P(gen_size32 _Size, unsigned int gen_a2), GEN_P(int _Radix, unsigned int gen_a3))
{
  GEN_ENTER(0xc70504u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int _Value = (int)gen_a0;)
  GEN_PIN(char * _DstBuf = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a2;)
  GEN_PIN(int _Radix = (int)gen_a3;)
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
GEN_LIB GEN_NOFRAME int F_00c7052e(GEN_P(long _Val, unsigned int gen_a0), GEN_P(char * _DstBuf, unsigned int gen_a1), GEN_P(gen_size32 _Size, unsigned int gen_a2), GEN_P(int _Radix, unsigned int gen_a3))
{
  GEN_ENTER(0xc7052eu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(long _Val = (long)gen_a0;)
  GEN_PIN(char * _DstBuf = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a2;)
  GEN_PIN(int _Radix = (int)gen_a3;)
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
GEN_LIB GEN_NOFRAME int F_00c70555(GEN_P(ulong _Val, unsigned int gen_a0), GEN_P(char * _DstBuf, unsigned int gen_a1), GEN_P(gen_size32 _Size, unsigned int gen_a2), GEN_P(int _Radix, unsigned int gen_a3))
{
  GEN_ENTER(0xc70555u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ulong _Val = (ulong)gen_a0;)
  GEN_PIN(char * _DstBuf = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a2;)
  GEN_PIN(int _Radix = (int)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00c7044a(_Val,_DstBuf,_Size,_Radix,0);
  return uVar1;
}

/* ref: x64toa_s */
GEN_LIB GEN_NOFRAME uint F_00c7056f(GEN_P(char * in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(char * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc7056fu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * in_edi = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(char * param_6 = (char *)(uintptr_t)gen_a5;)
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
  
  if ((in_edi == ((char *)GEN_TOP(0x0))) || (param_4 == 0)) {
LAB_00c7057e: ;
    puVar4 = (uint *)F_00c51f85();
    uVar11 = 0x16;
  }
  else {
    *in_edi = '\0';
    if ((param_6 != ((char *)GEN_TOP(0x0))) + 1 < param_4) {
      if (param_5 - 2 < 0x23) {
        bVar10 = param_6 != ((char *)GEN_TOP(0x0));
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
            pcVar9 = pcVar9 - 1;
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
GEN_LIB GEN_NOFRAME int F_00c7065b(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc7065bu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
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
GEN_LIB GEN_NOFRAME int F_00c70690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc70690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c7056f(param_3,param_1,param_2,param_4,param_5,0);
  return uVar1;
}

/* ref: __mbsrchr_l */
GEN_LIB GEN_NOFRAME uchar * F_00c706b5(GEN_P(uchar * _Str, unsigned int gen_a0), GEN_P(uint _Ch, unsigned int gen_a1), GEN_P(undefined * _Locale, unsigned int gen_a2))
{
  GEN_ENTER(0xc706b5u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uchar * _Str = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uint _Ch = (uint)gen_a1;)
  GEN_PIN(undefined * _Locale = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  byte * pbVar4;
  byte * pbVar5;
  byte bVar6;
  byte * pbVar7;
  bool bVar8;
  
  pbVar7 = ((byte *)GEN_TOP(0x0));
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Locale);
  if (_Str == ((uchar *)GEN_TOP(0x0))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    pbVar7 = ((byte *)GEN_TOP(0x0));
  }
  else {
    pbVar5 = _Str;
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) + 8))) == 0) {
      pbVar7 = (byte *)F_00c51220((char *)_Str,_Ch);
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
    else {
      do {
        bVar6 = *pbVar5;
        if ((*((byte *)GEN_TOP((bVar6 + 0x1d + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) & 4) == 0) {
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
            bVar8 = pbVar7 == ((byte *)GEN_TOP(0x0));
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
      if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
      }
    }
  }
  return pbVar7;
}

/* ref: __mbsrchr */
GEN_LIB GEN_NOFRAME uchar * F_00c7075f(GEN_P(uchar * _Str, unsigned int gen_a0), GEN_P(uint _Ch, unsigned int gen_a1))
{
  GEN_ENTER(0xc7075fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uchar * _Str = (uchar *)(uintptr_t)gen_a0;)
  GEN_PIN(uint _Ch = (uint)gen_a1;)
  uchar * puVar1;
  
  puVar1 = F_00c706b5(_Str,_Ch,((undefined *)GEN_TOP(0x0)));
  return puVar1;
}

/* ref: __rmtmp */
GEN_LIB GEN_NOFRAME int F_00c70776(void)
{
  GEN_ENTER(0xc70776u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x34, 12);
  int * piVar1;
  undefined * _File;
  undefined * _File_00;
  int _Index;
  
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f6838);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc70782;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f6838;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  (*(int *)(gen_frame + 0x14)) = 0;
  F_00c5aa4f(1);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  for (_Index = 0; (*(int *)(gen_frame + 0x10)) = _Index, _Index < REFG(int, 0x15e52c0); _Index = _Index + 1) {
    piVar1 = ((int *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4)));
    if ((*piVar1 != 0) && (_File = ((undefined *)GEN_TOP(*piVar1)), (*((byte *)GEN_TOP(((int)_File + 0xc))) & 0x83) != 0)) {
      F_00c50978(_Index,_File);
      (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x1));
      _File_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + _Index * 4)));
      if ((((*(int *)(((char *)(_File_00) + 12))) & 0x83) != 0) && ((*(char * PTR32 *)(((char *)(_File_00) + 28))) != ((char *)GEN_TOP(0x0)))) {
        F_00c492a5(_File_00);
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
      }
      (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
      F_00c707f0(_Index);
    }
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  F_00c70816();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (*(int *)(gen_frame + 0x14));
}

/* ref: FUN_00c707eb */
GEN_LIB GEN_NOFRAME uint F_00c707eb(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc707ebu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509e6(*((int *)GEN_TOP((in_ebp - 0x20))),*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + *((int *)GEN_TOP((in_ebp - 0x20))) * 4))));
  return extraout_EAX;
}

/* ref: FUN_00c707f0 */
GEN_LIB GEN_NOFRAME uint F_00c707f0(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc707f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509e6(in_esi,*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15e42a8) + in_esi * 4))));
  return extraout_EAX;
}

/* ref: FUN_00c70816 */
GEN_LIB GEN_NOFRAME uint F_00c70816(void)
{
  GEN_ENTER(0xc70816u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(1);
  return uVar1;
}

/* ref: __strdup */
GEN_LIB GEN_NOFRAME char * F_00c7081f(GEN_P(char * _Src, unsigned int gen_a0))
{
  GEN_ENTER(0xc7081fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * _Src = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  gen_size32 sVar2;
  int eVar3;
  
  if (_Src == ((char *)GEN_TOP(0x0))) {
    pcVar1 = ((char *)GEN_TOP(0x0));
  }
  else {
    sVar2 = F_00c552f0(_Src);
    pcVar1 = F_00c51787(sVar2 + 1);
    if (pcVar1 == ((char *)GEN_TOP(0x0))) {
      pcVar1 = ((char *)GEN_TOP(0x0));
    }
    else {
      eVar3 = F_00c49908(pcVar1,sVar2 + 1,_Src);
      if (eVar3 != 0) {
                    
        F_00c4c299(0,0,0,0,0);
      }
    }
  }
  return pcVar1;
}

/* ref: FUN_00c70871 */
GEN_LIB GEN_NOFRAME uint F_00c70871(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(LPCSTR param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xc70871u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(LPCSTR param_3 = (LPCSTR)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL(0x34, 12);
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
  int iVar14;
  bool bVar15;
  longlong lVar16;
  int iVar17;
  
  bVar15 = (param_4 & 0x80) == 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(byte *)(gen_frame + 0x2e)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x0)))) = 0xc;
  (*(LPVOID *)(((char *)((undefined *)(gen_frame + 0x0)) + 4))) = (LPVOID)0x0;
  if (bVar15) {
    (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = 1;
    (*(byte *)(gen_frame + 0x2f)) = 0;
  }
  else {
    (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = 0;
    (*(byte *)(gen_frame + 0x2f)) = 0x10;
  }
  (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x0)) + 8))) = (BOOL)bVar15;
  eVar4 = F_00c6dc89((int *)&(*(uint *)(gen_frame + 0xc)));
  if (eVar4 != 0) {
                    
    F_00c4c299(0,0,0,0,0);
  }
  if (((param_4 & 0x8000) == 0) && (((param_4 & 0x74000) != 0 || ((*(uint *)(gen_frame + 0xc)) != 0x8000)))) {
    (*(byte *)(gen_frame + 0x2f)) = (*(byte *)(gen_frame + 0x2f)) | 0x80;
  }
  uVar5 = param_4 & 3;
  if (uVar5 == 0) {
    (*(uint *)(gen_frame + 0x24)) = 0x80000000;
  }
  else {
    if (uVar5 == 1) {
      if (((param_4 & 8) == 0) || ((param_4 & 0x70000) == 0)) {
        (*(uint *)(gen_frame + 0x24)) = 0x40000000;
        goto LAB_00c70933;
      }
    }
    else if (uVar5 != 2) goto LAB_00c708f3;
    (*(uint *)(gen_frame + 0x24)) = 0xc0000000;
  }
LAB_00c70933: ;
  if (param_5 == 0x10) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
  }
  else if (param_5 == 0x20) {
    (*(uint *)(gen_frame + 0x1c)) = 1;
  }
  else if (param_5 == 0x30) {
    (*(uint *)(gen_frame + 0x1c)) = 2;
  }
  else if (param_5 == 0x40) {
    (*(uint *)(gen_frame + 0x1c)) = 3;
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
    (*(uint *)(gen_frame + 0x1c)) = (uint)((*(uint *)(gen_frame + 0x24)) == 0x80000000);
  }
  uVar5 = param_4 & 0x700;
  if (uVar5 < 0x401) {
    if ((uVar5 == 0x400) || (uVar5 == 0)) {
      (*(uint *)(gen_frame + 0x18)) = 3;
    }
    else if (uVar5 == 0x100) {
      (*(uint *)(gen_frame + 0x18)) = 4;
    }
    else {
      if (uVar5 == 0x200) goto LAB_00c709f5;
      if (uVar5 != 0x300) goto LAB_00c709d5;
      (*(uint *)(gen_frame + 0x18)) = 2;
    }
  }
  else {
    if (uVar5 != 0x500) {
      if (uVar5 == 0x600) {
LAB_00c709f5: ;
        (*(uint *)(gen_frame + 0x18)) = 5;
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
    (*(uint *)(gen_frame + 0x18)) = 1;
  }
LAB_00c70a05: ;
  (*(uint *)(gen_frame + 0x20)) = 0x80;
  if (((param_4 & 0x100) != 0) && (-1 < (char)(~(byte)REFG(undefined4, 0x15d6830) & (byte)param_6))) {
    (*(uint *)(gen_frame + 0x20)) = 1;
  }
  if ((param_4 & 0x40) != 0) {
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) | 0x4000000;
    (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) | 0x10000;
    (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) | 4;
  }
  if ((param_4 & 0x1000) != 0) {
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) | 0x100;
  }
  if ((param_4 & 0x20) == 0) {
    if ((param_4 & 0x10) != 0) {
      (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) | 0x10000000;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) | 0x8000000;
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
  pvVar9 = gen_imp_CreateFileA(param_3,(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x1c)),((undefined *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x20)),0);
  (*(HANDLE *)(gen_frame + 0x10)) = pvVar9;
  if (pvVar9 == (HANDLE)0xffffffff) {
    if ((((*(uint *)(gen_frame + 0x24)) & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      uVar5 = (*(uint *)(gen_frame + 0x24)) & 0x7fffffff;
      (*(uint *)(gen_frame + 0x24)) = uVar5;
      pvVar9 = gen_imp_CreateFileA(param_3,uVar5,(*(uint *)(gen_frame + 0x1c)),((undefined *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x20)),0);
      (*(HANDLE *)(gen_frame + 0x10)) = pvVar9;
      if (pvVar9 != (HANDLE)0xffffffff) goto LAB_00c70b2d;
    }
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
    DVar10 = gen_imp_GetLastError();
    F_00c51fab(DVar10);
    goto LAB_00c70b1e;
  }
LAB_00c70b2d: ;
  DVar10 = gen_imp_GetFileType((*(HANDLE *)(gen_frame + 0x10)));
  if (DVar10 == 0) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 & 0xfe;
    DVar10 = gen_imp_GetLastError();
    F_00c51fab(DVar10);
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x10)));
    if (DVar10 == 0) {
      piVar7 = F_00c51f85();
      *piVar7 = 0xd;
    }
    goto LAB_00c70b1e;
  }
  if (DVar10 == 2) {
    (*(byte *)(gen_frame + 0x2f)) = (*(byte *)(gen_frame + 0x2f)) | 0x40;
  }
  else if (DVar10 == 3) {
    (*(byte *)(gen_frame + 0x2f)) = (*(byte *)(gen_frame + 0x2f)) | 8;
  }
  F_00c6d6a7(*in_eax,(int)(*(HANDLE *)(gen_frame + 0x10)));
  bVar3 = (*(byte *)(gen_frame + 0x2f));
  bVar13 = (*(byte *)(gen_frame + 0x2f)) | 1;
  *((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 4 + (*in_eax & 0x1f) * 0x40))) = bVar13;
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 & 0x80;
  (*(byte *)(gen_frame + 0x2d)) = bVar13;
  bVar2 = (*(byte *)(gen_frame + 0x2f)) & 0x48;
  (*(byte *)(gen_frame + 0x2d)) = bVar2;
  (*(byte *)(gen_frame + 0x2f)) = bVar13;
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
      (*(char *)(gen_frame + 0x2c)) = '\0';
      iVar14 = F_00c5d0a1(uVar5,&(*(char *)(gen_frame + 0x2c)),1);
      if ((((iVar14 != 0) || ((*(char *)(gen_frame + 0x2c)) != '\x1a')) ||
          (iVar14 = F_00c4e152(*in_eax,lVar11,lVar11 >> 0x1f), iVar14 != -1)) &&
         (lVar11 = F_00c650fc(*in_eax,0,0), lVar11 != -1)) goto LAB_00c70c61;
    }
LAB_00c70c12: ;
    F_00c4dff2(*in_eax);
    goto LAB_00c70b1e;
  }
LAB_00c70c61: ;
  if (((*(byte *)(gen_frame + 0x2f)) & 0x80) != 0) {
    if ((param_4 & 0x74000) == 0) {
      if (((*(uint *)(gen_frame + 0xc)) & 0x74000) == 0) {
        param_4 = param_4 | 0x4000;
      }
      else {
        param_4 = param_4 | (*(uint *)(gen_frame + 0xc)) & 0x74000;
      }
    }
    uVar5 = param_4 & 0x74000;
    if (uVar5 == 0x4000) {
      (*(byte *)(gen_frame + 0x2e)) = 0;
    }
    else if ((uVar5 == 0x10000) || (uVar5 == 0x14000)) {
      if ((param_4 & 0x301) == 0x301) goto LAB_00c70cd0;
    }
    else if ((uVar5 == 0x20000) || (uVar5 == 0x24000)) {
LAB_00c70cd0: ;
      (*(byte *)(gen_frame + 0x2e)) = 2;
    }
    else if ((uVar5 == 0x40000) || (uVar5 == 0x44000)) {
      (*(byte *)(gen_frame + 0x2e)) = 1;
    }
    if (((param_4 & 0x70000) != 0) && ((*(uint *)(gen_frame + 0x14)) = 0, ((*(byte *)(gen_frame + 0x2f)) & 0x40) == 0)) {
      uVar5 = (*(uint *)(gen_frame + 0x24)) & 0xc0000000;
      if (uVar5 == 0x40000000) {
        if ((*(uint *)(gen_frame + 0x18)) == 0) goto LAB_00c70e93;
        if (2 < (*(uint *)(gen_frame + 0x18))) {
          if ((*(uint *)(gen_frame + 0x18)) < 5) {
            lVar16 = F_00c6dda1(*in_eax,0,0,2);
            if (lVar16 == 0) goto LAB_00c70d38;
            lVar16 = F_00c6dda1(*in_eax,0,0,0);
            uVar5 = (uint)lVar16 & (uint)((ulonglong)lVar16 >> 0x20);
            goto LAB_00c70dfd;
          }
LAB_00c70d2f: ;
          if ((*(uint *)(gen_frame + 0x18)) != 5) goto LAB_00c70e93;
        }
LAB_00c70d38: ;
        iVar14 = 0;
        if ((*(byte *)(gen_frame + 0x2e)) == 1) {
          (*(uint *)(gen_frame + 0x14)) = 0xbfbbef;
          iVar17 = 3;
        }
        else {
          if ((*(byte *)(gen_frame + 0x2e)) != 2) goto LAB_00c70e93;
          (*(uint *)(gen_frame + 0x14)) = 0xfeff;
          iVar17 = 2;
        }
        do {
          iVar12 = F_00c5de4b(*in_eax,((undefined *)GEN_TOP(((int)&(*(uint *)(gen_frame + 0x14)) + iVar14))),iVar17 - iVar14);
          if (iVar12 == -1) goto LAB_00c70c12;
          iVar14 = iVar14 + iVar12;
        } while (iVar14 < iVar17);
      }
      else {
        if (uVar5 != 0x80000000) {
          if ((uVar5 == 0xc0000000) && ((*(uint *)(gen_frame + 0x18)) != 0)) {
            if (2 < (*(uint *)(gen_frame + 0x18))) {
              if (4 < (*(uint *)(gen_frame + 0x18))) goto LAB_00c70d2f;
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
        iVar14 = F_00c5d0a1(*in_eax,&(*(uint *)(gen_frame + 0x14)),3);
        if (iVar14 == -1) goto LAB_00c70c12;
        if (iVar14 == 2) {
LAB_00c70e0a: ;
          if (((*(uint *)(gen_frame + 0x14)) & 0xffff) == 0xfffe) {
            F_00c4dff2(*in_eax);
            piVar7 = F_00c51f85();
            *piVar7 = 0x16;
            (*(uint *)(gen_frame + 0x28)) = 0x16;
            return 0x16;
          }
          if (((*(uint *)(gen_frame + 0x14)) & 0xffff) == 0xfeff) {
            lVar11 = F_00c650fc(*in_eax,2,0);
            if (lVar11 == -1) goto LAB_00c70c12;
            (*(byte *)(gen_frame + 0x2e)) = 2;
            goto LAB_00c70e93;
          }
        }
        else if (iVar14 == 3) {
          if ((*(uint *)(gen_frame + 0x14)) == 0xbfbbef) {
            (*(byte *)(gen_frame + 0x2e)) = 1;
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
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 ^ (*pbVar1 ^ (*(byte *)(gen_frame + 0x2e))) & 0x7f;
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 0x24 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = (char)(param_4 >> 0x10) << 7 | *pbVar1 & 0x7f;
  if (((*(byte *)(gen_frame + 0x2d)) == 0) && ((param_4 & 8) != 0)) {
    pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 4 + (*in_eax & 0x1f) * 0x40)));
    *pbVar1 = *pbVar1 | 0x20;
  }
  if (((*(uint *)(gen_frame + 0x24)) & 0xc0000000) != 0xc0000000) {
    return (*(uint *)(gen_frame + 0x28));
  }
  if ((param_4 & 1) == 0) {
    return (*(uint *)(gen_frame + 0x28));
  }
  gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x10)));
  pvVar9 = gen_imp_CreateFileA(param_3,(*(uint *)(gen_frame + 0x24)) & 0x7fffffff,(*(uint *)(gen_frame + 0x1c)),((undefined *)(gen_frame + 0x0)),3,(*(uint *)(gen_frame + 0x20)),(HANDLE)0x0);
  if (pvVar9 != (HANDLE)0xffffffff) {
    *((HANDLE *)GEN_TOP(((*in_eax & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)]))) = pvVar9;
    return (*(uint *)(gen_frame + 0x28));
  }
  DVar10 = gen_imp_GetLastError();
  F_00c51fab(DVar10);
  pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_eax >> 5)] + 4 + (*in_eax & 0x1f) * 0x40)));
  *pbVar1 = *pbVar1 & 0xfe;
  F_00c6d728(*in_eax);
LAB_00c70b1e: ;
  puVar8 = (uint *)F_00c51f85();
  (*(uint *)(gen_frame + 0x28)) = *puVar8;
  return *puVar8;
}

/* ref: FUN_00c71017 */
GEN_LIB GEN_NOFRAME unsigned int F_00c71017(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc71017u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  byte * pbVar1;
  
  if (*((int *)GEN_TOP((in_ebp - 0x20))) != 0) {
    if (*((int *)GEN_TOP((in_ebp - 0x24))) != 0) {
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(*((int *)GEN_TOP((in_ebp - 0x1c))) >> 5)] + 4 +
                       (*((uint *)GEN_TOP((in_ebp - 0x1c))) & 0x1f) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    F_00c6d8b6(*((int *)GEN_TOP((in_ebp - 0x1c))));
  }
  return;
}

/* ref: FID_conflict___sopen_helper_00c71053 */
GEN_LIB GEN_NOFRAME int F_00c71053(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc71053u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x54, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x34)) = 0x14;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = &REFG(undefined, 0x12f6880);
  (*(uint volatile *)(gen_frame + 0x2c)) = 0xc7105f;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ 0x12f6880;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x24)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((((*(int * PTR32 *)&gen_args[4]) == ((int *)GEN_TOP(0x0))) || (*(*(int * PTR32 *)&gen_args[4]) = -1, (*(char * PTR32 *)&gen_args[0]) == ((char *)GEN_TOP(0x0)))) ||
     (((*(int *)&gen_args[5]) != 0 && (((*(int *)&gen_args[3]) & 0xfffffe7fU) != 0)))) {
    piVar1 = F_00c51f85();
    uVar2 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
    uVar2 = F_00c70871((*(int * PTR32 *)&gen_args[4]),&(*(undefined4 *)(gen_frame + 0x18)),(*(char * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(int *)&gen_args[2]),(*(int *)&gen_args[3]));
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c710e9(piVar1,0,(gen_frame + 0x34));
    uVar2 = (*(uint *)(gen_frame + 0x14));
    if ((*(uint *)(gen_frame + 0x14)) != 0) {
      *piVar1 = -1;
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
  return uVar2;
}

/* ref: FUN_00c710e4 */
GEN_LIB GEN_NOFRAME unsigned int F_00c710e4(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc710e4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  byte * pbVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar2 = *((uint * PTR32 *)GEN_TOP((in_ebp + 0x18)));
  if (*((int *)GEN_TOP((in_ebp - 0x1c))) != 0) {
    if (*((int *)GEN_TOP((in_ebp - 0x20))) != 0) {
      uVar3 = *puVar2;
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)uVar3 >> 5)] + 4 + (uVar3 & 0x1f) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    F_00c6d8b6(*puVar2);
  }
  return;
}

/* ref: FUN_00c710e9 */
GEN_LIB GEN_NOFRAME unsigned int F_00c710e9(GEN_P(uint * in_esi, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(int in_ebp, unsigned int gen_a2))
{
  GEN_ENTER(0xc710e9u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * in_esi = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(int in_ebp = (int)gen_a2;)
  byte * pbVar1;
  
  if (*((int *)GEN_TOP((in_ebp - 0x1c))) != in_edi) {
    if (*((int *)GEN_TOP((in_ebp - 0x20))) != in_edi) {
      pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((int)*in_esi >> 5)] + 4 + (*in_esi & 0x1f) * 0x40)));
      *pbVar1 = *pbVar1 & 0xfe;
    }
    F_00c6d8b6(*in_esi);
  }
  return;
}

/* ref: FID_conflict___sopen_00c71117 */
GEN_LIB GEN_NOFRAME int F_00c71117(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc71117u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Filename = (wchar_t *)(uintptr_t)gen_a0;
  int _OpenFlag = (int)gen_a1;
  int _ShareFlag = (int)gen_a2;
  GEN_FRAME_DECL(0x8, 8);
  int eVar1;
  
  (*(int *)(gen_frame + 0x0)) = -1;
  eVar1 = F_00c71053((char *)_Filename,_OpenFlag,_ShareFlag,(*(int *)&gen_args[3]),&(*(int *)(gen_frame + 0x0)),0);
  if (eVar1 != 0) {
    return -1;
  }
  return (*(int *)(gen_frame + 0x0));
}

/* ref: __sopen_s */
GEN_LIB GEN_NOFRAME int F_00c71149(GEN_P(int * _FileHandle, unsigned int gen_a0), GEN_P(char * _Filename, unsigned int gen_a1), GEN_P(int _OpenFlag, unsigned int gen_a2), GEN_P(int _ShareFlag, unsigned int gen_a3), GEN_P(int _PermissionMode, unsigned int gen_a4))
{
  GEN_ENTER(0xc71149u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * _FileHandle = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char * _Filename = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int _OpenFlag = (int)gen_a2;)
  GEN_PIN(int _ShareFlag = (int)gen_a3;)
  GEN_PIN(int _PermissionMode = (int)gen_a4;)
  int eVar1;
  
  eVar1 = F_00c71053(_Filename,_OpenFlag,_ShareFlag,_PermissionMode,_FileHandle,1);
  return eVar1;
}

/* ref: __getpath */
GEN_LIB GEN_NOFRAME char * F_00c71169(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc71169u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  char cVar1;
  int * piVar2;
  char * pcVar3;
  char * pcVar4;
  
  for (; *param_1 == ';'; param_1 = param_1 + 1) {
  }
  param_3 = param_3 - 1;
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
          param_3 = param_3 - 1;
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
        param_3 = param_3 - 1;
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
GEN_LIB GEN_NOFRAME undefined * F_00c711fe(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc711feu, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x38, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
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
  
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f68a0);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc7120a;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f68a0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  if ((*(char * PTR32 *)&gen_args[1]) != ((char *)GEN_TOP(0x0))) {
    if ((*(int *)&gen_args[0]) == -2) {
      piVar2 = F_00c51f85();
      *piVar2 = 9;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
      return ((undefined *)GEN_TOP(0x0));
    }
    if ((((*(int *)&gen_args[0]) < 0) || (REFG(undefined4, 0x15e4190) <= (uint)(*(int *)&gen_args[0]))) ||
       (uVar7 = 1, pcVar3 = (*(char * PTR32 *)&gen_args[1]),
       (*((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)((*(int *)&gen_args[0]) >> 5)] + 4 + ((*(int *)&gen_args[0]) & 0x1fU) * 0x40))) & 1) == 0))
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
    (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(0x0));
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
      if ((*(char * PTR32 *)&gen_args[1]) == ((char *)GEN_TOP(0x0))) {
        (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(0x1));
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
    if (in_esi == ((undefined *)GEN_TOP(0x0))) {
      piVar2 = F_00c51f85();
      *piVar2 = 0x18;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
      return ((undefined *)GEN_TOP(0x0));
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    *(int *)&REFG(undefined, 0x15d687c) = *(int *)&REFG(undefined, 0x15d687c) + 1;
    (*(int *)(((char *)(in_esi) + 12))) = uVar5;
    (*(int *)(((char *)(in_esi) + 16))) = (*(int *)&gen_args[0]);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c7136c(in_esi);
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
    return in_esi;
  }
LAB_00c71218: ;
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
LAB_00c71223: ;
  F_00c4c305();
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return ((undefined *)GEN_TOP(0x0));
}

/* ref: FUN_00c71369 */
GEN_LIB GEN_NOFRAME uint F_00c71369(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc71369u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(*((undefined * PTR32 *)GEN_TOP((in_ebp + 0xc))));
  return extraout_EAX;
}

/* ref: FUN_00c7136c */
GEN_LIB GEN_NOFRAME uint F_00c7136c(GEN_P(undefined * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc7136cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * in_esi = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: __pipe */
GEN_LIB GEN_NOFRAME int F_00c71374(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc71374u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_FRAME_DECL(0x60, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x54);
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
  
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x2c;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = &REFG(undefined, 0x12f68c0);
  (*(uint volatile *)(gen_frame + 0x44)) = 0xc71380;
  (*(gen_code32 *)(gen_frame + 0x40)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ 0x12f68c0;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x3c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x3c)))))) { return (int)(uintptr_t)gen_eh_resume(); }
  (*(int *)(gen_frame + 0x30)) = 0;
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    puVar2 = F_00c51f98();
    *puVar2 = 0;
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
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
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    return -1;
  }
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x10)))) = 0xc;
  (*(LPVOID *)(((char *)((undefined *)(gen_frame + 0x10)) + 4))) = (LPVOID)0x0;
  (*(BOOL *)(((char *)((undefined *)(gen_frame + 0x10)) + 8))) = (uint)(((*(int *)&gen_args[2]) & 0x80U) == 0);
  BVar4 = gen_imp_CreatePipe(&(*(HANDLE *)(gen_frame + 0x20)),&(*(HANDLE *)(gen_frame + 0x1c)),((undefined *)(gen_frame + 0x10)),(*(uint *)&gen_args[1]));
  if (BVar4 == 0) {
    DVar5 = gen_imp_GetLastError();
    F_00c51fab(DVar5);
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    return -1;
  }
  in_edi = F_00c6d8dd();
  (*(uint *)(gen_frame + 0x2c)) = in_edi;
  if (in_edi != 0xffffffff) {
    (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0x0));
    iVar6 = (int)in_edi >> 5;
    piVar3 = &REFG(undefined4, 0x15e41a0) + iVar6;
    iVar7 = (in_edi & 0x1f) * 0x40;
    *((undefined1 *)GEN_TOP((*piVar3 + 4 + iVar7))) = 0x89;
    pbVar1 = ((byte *)GEN_TOP((*piVar3 + 0x24 + iVar7)));
    *pbVar1 = *pbVar1 & 0x80;
    pbVar1 = ((byte *)GEN_TOP((*piVar3 + 0x24 + iVar7)));
    *pbVar1 = *pbVar1 & 0x7f;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c71593(in_edi);
    in_esi = F_00c6d8dd();
    (*(uint *)(gen_frame + 0x24)) = in_esi;
    if (in_esi != 0xffffffff) {
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0x1));
      iVar7 = (int)in_esi >> 5;
      piVar3 = &REFG(undefined4, 0x15e41a0) + iVar7;
      iVar8 = (in_esi & 0x1f) * 0x40;
      *((undefined1 *)GEN_TOP((iVar8 + 4 + *piVar3))) = 0x89;
      pbVar1 = ((byte *)GEN_TOP((iVar8 + 0x24 + *piVar3)));
      *pbVar1 = *pbVar1 & 0x80;
      pbVar1 = ((byte *)GEN_TOP((iVar8 + 0x24 + *piVar3)));
      *pbVar1 = *pbVar1 & 0x7f;
      (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
      F_00c715a3(in_esi);
      eVar9 = F_00c6dc89(&(*(int *)(gen_frame + 0x28)));
      if (eVar9 != 0) {
                    
        F_00c4c299(0,0,0,0,0);
      }
      if ((((*(int *)&gen_args[2]) & 0x8000U) != 0) || ((((*(int *)&gen_args[2]) & 0x4000U) == 0 && ((*(int *)(gen_frame + 0x28)) == 0x8000)))) {
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar6)] + 4 + (in_edi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 & 0x7f;
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar7)] + 4 + (in_esi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 & 0x7f;
      }
      if (((*(int *)&gen_args[2]) & 0x80U) != 0) {
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar6)] + 4 + (in_edi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 | 0x10;
        pbVar1 = ((byte *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar7)] + 4 + (in_esi & 0x1f) * 0x40)));
        *pbVar1 = *pbVar1 | 0x10;
      }
      F_00c6d6a7(in_edi,(int)(*(HANDLE *)(gen_frame + 0x20)));
      F_00c6d6a7(in_esi,(int)(*(HANDLE *)(gen_frame + 0x1c)));
      goto LAB_00c715de;
    }
    *((undefined1 *)GEN_TOP(((&REFG(undefined4, 0x15e41a0))[(int)(iVar6)] + 4 + (in_edi & 0x1f) * 0x40))) = 0;
  }
  (*(int *)(gen_frame + 0x30)) = 1;
  in_esi = (*(uint *)(gen_frame + 0x24));
LAB_00c715de: ;
  if ((*(int *)(gen_frame + 0x30)) != 0) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x18;
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x20)));
    gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x1c)));
    puVar2 = F_00c51f98();
    *puVar2 = 0;
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
    return -1;
  }
  *(*(int * PTR32 *)&gen_args[0]) = in_edi;
  (*(int * PTR32 *)&gen_args[0])[1] = in_esi;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00c7158e */
GEN_LIB GEN_NOFRAME unsigned int F_00c7158e(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7158eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  F_00c6d8b6(*((int *)GEN_TOP((in_ebp - 0x20))));
  return;
}

/* ref: FUN_00c71593 */
GEN_LIB GEN_NOFRAME unsigned int F_00c71593(GEN_P(int in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xc71593u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  F_00c6d8b6(in_edi);
  return;
}

/* ref: FUN_00c7159b */
GEN_LIB GEN_NOFRAME unsigned int F_00c7159b(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7159bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ebp - 0x28))) != -1) {
    F_00c6d8b6(*((int *)GEN_TOP((in_ebp - 0x28))));
  }
  return;
}

/* ref: FUN_00c715a3 */
GEN_LIB GEN_NOFRAME unsigned int F_00c715a3(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xc715a3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  if (in_esi != -1) {
    F_00c6d8b6(in_esi);
  }
  return;
}

/* ref: __cwait */
GEN_LIB GEN_NOFRAME int F_00c7161a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
      *(*(int * PTR32 *)&gen_args[0]) = (*(int *)&gen_args[1]);
    }
  }
  return iVar5;
}

/* ref: write_char_00c716ab */
GEN_LIB GEN_NOFRAME uint F_00c716ab(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc716abu, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: write_multi_char_00c716da */
GEN_LIB GEN_NOFRAME uint F_00c716da(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc716dau, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar1 = ((int *)GEN_TOP(F_00c716ab(param_4,in_eax,param_2)));
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c71701 */
GEN_LIB GEN_NOFRAME uint F_00c71701(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ebx, unsigned int gen_a1), GEN_P(uint * in_edi, unsigned int gen_a2), GEN_P(ushort * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc71701u, gen_a0, gen_a1, gen_a2, gen_a3);
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
GEN_LIB GEN_NOFRAME uint F_00c71768(GEN_P(int param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(wchar_t * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc71768u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x474, 12);
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
  
  (*(uint *)(gen_frame + 0x46c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x470);
  (*(int *)(gen_frame + 0x44)) = param_1;
  (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = param_4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x68)) = 0;
  (*(uint *)(gen_frame + 0x48)) = 0;
  (*(uint *)(gen_frame + 0x64)) = 0;
  (*(int *)(gen_frame + 0x4c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x40)) = 0;
  F_00c483ca(((undefined *)(gen_frame + 0x24)) GEN_EDX_ARG,param_3);
  piVar6 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar6;
  if ((param_1 == 0) || (param_2 == ((ushort *)GEN_TOP(0x0)))) {
LAB_00c717de: ;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar1 = *param_2;
    (*(uint *)(gen_frame + 0x50)) = (uint)uVar1;
    (*(uint *)(gen_frame + 0x58)) = 0;
    (*(gen_size32 *)(gen_frame + 0x5c)) = 0;
    (*(uint *)(gen_frame + 0x34)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = ((wchar_t *)GEN_TOP(0x0));
    pwVar16 = param_4;
    puVar14 = param_2;
    if (uVar1 != 0) {
      do {
        puVar17 = puVar14 + 1;
        (*(ushort * PTR32 *)(gen_frame + 0x10)) = puVar17;
        if ((int)(*(uint *)(gen_frame + 0x58)) < 0) break;
        sVar4 = (short)(*(uint *)(gen_frame + 0x50));
        if ((ushort)(sVar4 - 0x20U) < 0x59) {
          uVar7 = (byte)(&REFG(undefined, 0x1119ec8))[(int)((*(uint *)(gen_frame + 0x50)))] & 0xf;
        }
        else {
          uVar7 = 0;
        }
        uVar7 = (uint)((byte)(&REFG(undefined, 0x1119ee8))[(int)((*(uint *)(gen_frame + 0x34)) + uVar7 * 9)] >> 4);
        (*(uint *)(gen_frame + 0x34)) = uVar7;
        if (uVar7 == 8) goto LAB_00c717de;
        pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x54));
        puVar17 = (*(ushort * PTR32 *)(gen_frame + 0x10));
        switch((unsigned int)(uintptr_t)(uVar7)) {
        case 0: ;
switchD_00c71898_caseD_0: ;
          (*(int *)(gen_frame + 0x40)) = 1;
          F_00c716ab((*(int *)(gen_frame + 0x44)),&(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x50)));
          pwVar15 = pwVar16;
          break;
        case 1: ;
          (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0x20)) = 0;
          (*(uint *)(gen_frame + 0x48)) = 0;
          (*(int *)(gen_frame + 0x4c)) = 0;
          (*(uint *)(gen_frame + 0x68)) = 0;
          (*(int *)(gen_frame + 0x40)) = 0;
          pwVar15 = pwVar16;
          break;
        case 2: ;
          if ((*(uint *)(gen_frame + 0x50)) == 0x20) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 2;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x50)) == 0x23) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x80;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x50)) == 0x2b) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 1;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x50)) == 0x2d) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 4;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x50)) == 0x30) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 8;
            pwVar15 = pwVar16;
          }
          break;
        case 3: ;
          if (sVar4 == 0x2a) {
            uVar7 = *(uint *)pwVar16;
            pwVar15 = pwVar16 + 2;
            (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar15;
            (*(uint *)(gen_frame + 0x48)) = uVar7;
            if ((int)uVar7 < 0) {
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 4;
              (*(uint *)(gen_frame + 0x48)) = -uVar7;
            }
          }
          else {
            (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) * 10 - 0x30 + (*(uint *)(gen_frame + 0x50));
            pwVar15 = pwVar16;
          }
          break;
        case 4: ;
          (*(uint *)(gen_frame + 0x64)) = 0;
          pwVar15 = pwVar16;
          break;
        case 5: ;
          if (sVar4 == 0x2a) {
            pwVar15 = pwVar16 + 2;
            (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar15;
            (*(uint *)(gen_frame + 0x64)) = *(uint *)pwVar16;
            if ((int)*(uint *)pwVar16 < 0) {
              (*(uint *)(gen_frame + 0x64)) = 0xffffffff;
            }
          }
          else {
            (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) * 10 - 0x30 + (*(uint *)(gen_frame + 0x50));
            pwVar15 = pwVar16;
          }
          break;
        case 6: ;
          if ((*(uint *)(gen_frame + 0x50)) == 0x49) {
            uVar1 = *puVar17;
            if ((uVar1 == 0x36) && (puVar14[2] == 0x34)) {
              puVar17 = puVar14 + 3;
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x8000;
              pwVar15 = pwVar16;
            }
            else if ((uVar1 == 0x33) && (puVar14[2] == 0x32)) {
              puVar17 = puVar14 + 3;
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) & 0xffff7fff;
              pwVar15 = pwVar16;
            }
            else {
              pwVar15 = pwVar16;
              if (((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
                  ((uVar1 != 0x75 && (uVar1 != 0x78)))) && (uVar1 != 0x58)) {
                (*(uint *)(gen_frame + 0x34)) = 0;
                goto switchD_00c71898_caseD_0;
              }
            }
          }
          else if ((*(uint *)(gen_frame + 0x50)) == 0x68) {
            (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x20;
            pwVar15 = pwVar16;
          }
          else if ((*(uint *)(gen_frame + 0x50)) == 0x6c) {
            if (*puVar17 == 0x6c) {
              puVar17 = puVar14 + 2;
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x1000;
              pwVar15 = pwVar16;
            }
            else {
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x10;
              pwVar15 = pwVar16;
            }
          }
          else {
            pwVar15 = pwVar16;
            if ((*(uint *)(gen_frame + 0x50)) == 0x77) {
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x800;
            }
          }
          break;
        case 7: ;
          if ((*(uint *)(gen_frame + 0x50)) < 0x65) {
            if ((*(uint *)(gen_frame + 0x50)) == 100) {
LAB_00c71d92: ;
              (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x40;
LAB_00c71d99: ;
              (*(uint *)(gen_frame + 0x50)) = 10;
LAB_00c71da3: ;
              if ((((*(uint *)(gen_frame + 0x68)) & 0x8000) == 0) && (((*(uint *)(gen_frame + 0x68)) & 0x1000) == 0)) {
                pwVar15 = pwVar16 + 2;
                if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
                  uVar7 = *(uint *)pwVar16;
                  if (((*(uint *)(gen_frame + 0x68)) & 0x40) == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = (int)uVar7 >> 0x1f;
                  }
                  goto LAB_00c71f95;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar15;
                if (((*(uint *)(gen_frame + 0x68)) & 0x40) == 0) {
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
                (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar15;
              }
              if (((((*(uint *)(gen_frame + 0x68)) & 0x40) != 0) && ((int)uVar13 < 1)) && ((int)uVar13 < 0)) {
                bVar18 = uVar7 != 0;
                uVar7 = -uVar7;
                uVar13 = -(uVar13 + bVar18);
                (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x100;
              }
              if (((*(uint *)(gen_frame + 0x68)) & 0x9000) == 0) {
                uVar13 = 0;
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
              if (uVar7 == 0 && uVar13 == 0) {
                (*(int *)(gen_frame + 0x4c)) = 0;
              }
              pwVar16 = &(*(undefined2 *)(gen_frame + 0x26b));
              uVar5 = CONCAT44(uVar13,uVar7);
              while ((uVar7 = (*(uint *)(gen_frame + 0x64)), (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x64)) - 1, 0 < (int)uVar7 || (uVar5 != 0)))
              {
                uVar7 = (int)(uVar5 % (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x50))) + 0x30;
                bVar12 = (byte)uVar7;
                if (0x39 < uVar7) {
                  bVar12 = bVar12 + (char)(*(undefined4 *)(gen_frame + 0x1c));
                }
                *(byte *)pwVar16 = bVar12;
                pwVar16 = ((wchar_t *)GEN_TOP(((int)pwVar16 - 1)));
                uVar5 = uVar5 / (ulonglong)(longlong)(int)(*(uint *)(gen_frame + 0x50));
              }
              sVar8 = (int)&(*(undefined2 *)(gen_frame + 0x26b)) - (int)pwVar16;
              (*(gen_size32 *)(gen_frame + 0x5c)) = sVar8;
              (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)GEN_TOP(((int)pwVar16 + 1)));
              if ((((*(uint *)(gen_frame + 0x68)) & 0x200) != 0) &&
                 ((sVar8 == 0 || (*((byte *)GEN_TOP(((int)pwVar16 + 1))) != 0x30)))) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16;
                (*(gen_size32 *)(gen_frame + 0x5c)) = (int)&(*(undefined2 *)(gen_frame + 0x26b)) - (int)pwVar16 + 1;
                *(byte *)pwVar16 = 0x30;
              }
            }
            else {
              if ((*(uint *)(gen_frame + 0x50)) < 0x54) {
                if ((*(uint *)(gen_frame + 0x50)) == 0x53) {
                  if (((*(uint *)(gen_frame + 0x68)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x20;
                  }
                  goto LAB_00c71b70;
                }
                if ((*(uint *)(gen_frame + 0x50)) != 0x41) {
                  if ((*(uint *)(gen_frame + 0x50)) == 0x43) {
                    if (((*(uint *)(gen_frame + 0x68)) & 0x830) == 0) {
                      (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x20;
                    }
                    goto LAB_00c71c1a;
                  }
                  if (((*(uint *)(gen_frame + 0x50)) != 0x45) && ((*(uint *)(gen_frame + 0x50)) != 0x47)) goto LAB_00c720d4;
                }
                (*(undefined4 *)(gen_frame + 0x8)) = 1;
                (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) + 0x20;
LAB_00c71b06: ;
                (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x40;
                pwVar15 = ((wchar_t *)(gen_frame + 0x6c));
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar15;
                (*(gen_size32 *)(gen_frame + 0x5c)) = 0x200;
                if ((int)(*(uint *)(gen_frame + 0x64)) < 0) {
                  (*(uint *)(gen_frame + 0x64)) = 6;
                }
                else if ((*(uint *)(gen_frame + 0x64)) == 0) {
                  if ((short)(*(uint *)(gen_frame + 0x50)) == 0x67) {
                    (*(uint *)(gen_frame + 0x64)) = 1;
                  }
                }
                else {
                  if (0x200 < (int)(*(uint *)(gen_frame + 0x64))) {
                    (*(uint *)(gen_frame + 0x64)) = 0x200;
                  }
                  if (0xa3 < (int)(*(uint *)(gen_frame + 0x64))) {
                    sVar8 = (*(uint *)(gen_frame + 0x64)) + 0x15d;
                    pwVar9 = F_00c54c2e(sVar8);
                    (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = pwVar9;
                    if (pwVar9 == ((wchar_t *)GEN_TOP(0x0))) {
                      (*(uint *)(gen_frame + 0x64)) = 0xa3;
                    }
                    else {
                      (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar9;
                      (*(gen_size32 *)(gen_frame + 0x5c)) = sVar8;
                      pwVar15 = pwVar9;
                    }
                  }
                }
                (*(uint *)(gen_frame + 0x0)) = *(uint *)pwVar16;
                (*(uint *)(gen_frame + 0x4)) = *(uint *)(pwVar16 + 2);
                p_Var22 = ((undefined *)(gen_frame + 0x24));
                iVar10 = (int)(char)(*(uint *)(gen_frame + 0x50));
                (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar16 + 4;
                puVar19 = &(*(uint *)(gen_frame + 0x0));
                pwVar16 = pwVar15;
                sVar8 = (*(gen_size32 *)(gen_frame + 0x5c));
                uVar20 = (*(undefined4 *)(gen_frame + 0x8));
                uVar7 = (*(uint *)(gen_frame + 0x64));
                pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
                (*pcVar11)(puVar19,pwVar16,sVar8,iVar10,uVar7,uVar20,p_Var22);
                uVar7 = (*(uint *)(gen_frame + 0x68)) & 0x80;
                if ((uVar7 != 0) && ((*(uint *)(gen_frame + 0x64)) == 0)) {
                  p_Var22 = ((undefined *)(gen_frame + 0x24));
                  pwVar16 = pwVar15;
                  pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                  (*pcVar11)(pwVar16,p_Var22);
                }
                if (((short)(*(uint *)(gen_frame + 0x50)) == 0x67) && (uVar7 == 0)) {
                  p_Var22 = ((undefined *)(gen_frame + 0x24));
                  pwVar16 = pwVar15;
                  pcVar11 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                  (*pcVar11)(pwVar16,p_Var22);
                }
                if ((byte)*pwVar15 == 0x2d) {
                  (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x100;
                  pwVar15 = ((wchar_t *)GEN_TOP(((int)pwVar15 + 1)));
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar15;
                }
              }
              else {
                if ((*(uint *)(gen_frame + 0x50)) == 0x58) goto LAB_00c71ee0;
                if ((*(uint *)(gen_frame + 0x50)) != 0x5a) {
                  if ((*(uint *)(gen_frame + 0x50)) == 0x61) goto LAB_00c71b06;
                  if ((*(uint *)(gen_frame + 0x50)) != 99) goto LAB_00c720d4;
LAB_00c71c1a: ;
                  wVar2 = *pwVar16;
                  (*(int *)(gen_frame + 0x40)) = 1;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar16 + 2;
                  (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)wVar2;
                  if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
                    ((wchar_t *)(gen_frame + 0x6c))[0] = wVar2;
                  }
                  else {
                    ((char *)(gen_frame + 0x38))[0] = (char)wVar2;
                    ((char *)(gen_frame + 0x38))[1] = 0;
                    iVar10 = F_00c7b204(((wchar_t *)(gen_frame + 0x6c)),((char *)(gen_frame + 0x38)),
                                        (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x24)))) + 160) + (3) * 4))))),
                                        &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                    if (iVar10 < 0) {
                      (*(int *)(gen_frame + 0x20)) = 1;
                    }
                  }
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = ((wchar_t *)(gen_frame + 0x6c));
                  (*(gen_size32 *)(gen_frame + 0x5c)) = 1;
                  goto LAB_00c720d4;
                }
                psVar3 = *(short * PTR32 *)pwVar16;
                (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar16 + 2;
                if ((psVar3 != ((short *)GEN_TOP(0x0))) && (*(wchar_t * PTR32 *)(psVar3 + 2) != ((wchar_t *)GEN_TOP(0x0)))) {
                  sVar8 = (gen_size32)*psVar3;
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = *(wchar_t * PTR32 *)(psVar3 + 2);
                  if (((*(uint *)(gen_frame + 0x68)) & 0x800) != 0) {
                    iVar10 = sVar8 - ((int)sVar8 >> 0x1f);
                    (*(int *)(gen_frame + 0x40)) = 1;
                    goto LAB_00c720cc;
                  }
                  (*(int *)(gen_frame + 0x40)) = 0;
                  goto LAB_00c720ce;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                pwVar15 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
              }
              sVar8 = F_00c552f0((char *)pwVar15);
LAB_00c720ce: ;
              (*(gen_size32 *)(gen_frame + 0x5c)) = sVar8;
            }
LAB_00c720d4: ;
            if ((*(int *)(gen_frame + 0x20)) == 0) {
              if (((*(uint *)(gen_frame + 0x68)) & 0x40) != 0) {
                if (((*(uint *)(gen_frame + 0x68)) & 0x100) == 0) {
                  if (((*(uint *)(gen_frame + 0x68)) & 1) == 0) {
                    if (((*(uint *)(gen_frame + 0x68)) & 2) == 0) goto LAB_00c72116;
                    uVar21 = 0x20;
                  }
                  else {
                    uVar21 = 0x2b;
                  }
                }
                else {
                  uVar21 = 0x2d;
                }
                (*(undefined2 *)(gen_frame + 0x3c)) = uVar21;
                (*(int *)(gen_frame + 0x4c)) = 1;
              }
LAB_00c72116: ;
              uVar7 = ((*(uint *)(gen_frame + 0x48)) - (*(gen_size32 *)(gen_frame + 0x5c))) - (*(int *)(gen_frame + 0x4c));
              (*(uint *)(gen_frame + 0x50)) = uVar7;
              if (((*(uint *)(gen_frame + 0x68)) & 0xc) == 0) {
                do {
                  if ((int)uVar7 < 1) break;
                  uVar7 = uVar7 - 1;
                  F_00c716ab((*(int *)(gen_frame + 0x44)),&(*(uint *)(gen_frame + 0x58)),0x20);
                } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
              }
              iVar10 = (*(int *)(gen_frame + 0x44));
              F_00c71701(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x44)),(*(int * PTR32 *)(gen_frame + 0xc)),&(*(undefined2 *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x4c)));
              if ((((*(uint *)(gen_frame + 0x68)) & 8) != 0) && (uVar7 = (*(uint *)(gen_frame + 0x50)), ((*(uint *)(gen_frame + 0x68)) & 4) == 0)) {
                do {
                  if ((int)uVar7 < 1) break;
                  uVar7 = uVar7 - 1;
                  F_00c716ab(iVar10,&(*(uint *)(gen_frame + 0x58)),0x30);
                } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
              }
              if (((*(int *)(gen_frame + 0x40)) == 0) && (sVar8 = (*(gen_size32 *)(gen_frame + 0x5c)), pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x60)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x5c))))
              {
                do {
                  sVar8 = sVar8 - 1;
                  iVar10 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x14)),(char *)pwVar16,
                                      (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x24)))) + 160) + (3) * 4))))),
                                      &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                  if (iVar10 < 1) {
                    (*(uint *)(gen_frame + 0x58)) = 0xffffffff;
                    break;
                  }
                  F_00c716ab((*(int *)(gen_frame + 0x44)),&(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x14)));
                  pwVar16 = ((wchar_t *)GEN_TOP(((int)pwVar16 + iVar10)));
                } while (0 < (int)sVar8);
              }
              else {
                F_00c71701(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x44)),(*(int * PTR32 *)(gen_frame + 0xc)),(*(wchar_t * PTR32 *)(gen_frame + 0x60)),(*(gen_size32 *)(gen_frame + 0x5c)));
              }
              if ((-1 < (int)(*(uint *)(gen_frame + 0x58))) && (uVar7 = (*(uint *)(gen_frame + 0x50)), ((*(uint *)(gen_frame + 0x68)) & 4) != 0)) {
                do {
                  if ((int)uVar7 < 1) break;
                  uVar7 = uVar7 - 1;
                  F_00c716ab((*(int *)(gen_frame + 0x44)),&(*(uint *)(gen_frame + 0x58)),0x20);
                } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
              }
            }
          }
          else {
            if (0x70 < (*(uint *)(gen_frame + 0x50))) {
              if ((*(uint *)(gen_frame + 0x50)) == 0x73) {
LAB_00c71b70: ;
                uVar7 = (*(uint *)(gen_frame + 0x64));
                if ((*(uint *)(gen_frame + 0x64)) == 0xffffffff) {
                  uVar7 = 0x7fffffff;
                }
                (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar16 + 2;
                pwVar16 = *(wchar_t * PTR32 *)pwVar16;
                (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = pwVar16;
                if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
                  if (pwVar16 == ((wchar_t *)GEN_TOP(0x0))) {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
                  }
                  (*(int *)(gen_frame + 0x40)) = 1;
                  for (pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x60)); (uVar7 != 0 && (uVar7 = uVar7 - 1, *pwVar16 != L'\0'));
                      pwVar16 = pwVar16 + 1) {
                  }
                  iVar10 = (int)pwVar16 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x60));
LAB_00c720cc: ;
                  (*(int *)(gen_frame + 0x40)) = 1;
                  sVar8 = iVar10 >> 1;
                  goto LAB_00c720ce;
                }
                if (pwVar16 == ((wchar_t *)GEN_TOP(0x0))) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x60)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                }
                (*(gen_size32 *)(gen_frame + 0x5c)) = 0;
                pwVar16 = (*(wchar_t * PTR32 *)(gen_frame + 0x60));
                if (0 < (int)uVar7) {
                  do {
                    if ((byte)*pwVar16 == 0) break;
                    iVar10 = F_00c6dfe8((uint)(byte)*pwVar16,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x24)))));
                    if (iVar10 != 0) {
                      pwVar16 = ((wchar_t *)GEN_TOP(((int)pwVar16 + 1)));
                    }
                    pwVar16 = ((wchar_t *)GEN_TOP(((int)pwVar16 + 1)));
                    sVar8 = (*(gen_size32 *)(gen_frame + 0x5c)) + 1;
                    (*(gen_size32 *)(gen_frame + 0x5c)) = sVar8;
                  } while ((int)sVar8 < (int)uVar7);
                }
                goto LAB_00c720d4;
              }
              if ((*(uint *)(gen_frame + 0x50)) == 0x75) goto LAB_00c71d99;
              if ((*(uint *)(gen_frame + 0x50)) != 0x78) goto LAB_00c720d4;
              (*(undefined4 *)(gen_frame + 0x1c)) = 0x27;
LAB_00c71f10: ;
              (*(uint *)(gen_frame + 0x50)) = 0x10;
              if (((*(uint *)(gen_frame + 0x68)) & 0x80) != 0) {
                (*(undefined2 *)(gen_frame + 0x3c)) = 0x30;
                (*(short *)(gen_frame + 0x3e)) = (short)(*(undefined4 *)(gen_frame + 0x1c)) + 0x51;
                (*(int *)(gen_frame + 0x4c)) = 2;
              }
              goto LAB_00c71da3;
            }
            if ((*(uint *)(gen_frame + 0x50)) == 0x70) {
              (*(uint *)(gen_frame + 0x64)) = 8;
LAB_00c71ee0: ;
              (*(undefined4 *)(gen_frame + 0x1c)) = 7;
              goto LAB_00c71f10;
            }
            if ((*(uint *)(gen_frame + 0x50)) < 0x65) goto LAB_00c720d4;
            if ((*(uint *)(gen_frame + 0x50)) < 0x68) goto LAB_00c71b06;
            if ((*(uint *)(gen_frame + 0x50)) == 0x69) goto LAB_00c71d92;
            if ((*(uint *)(gen_frame + 0x50)) != 0x6e) {
              if ((*(uint *)(gen_frame + 0x50)) != 0x6f) goto LAB_00c720d4;
              (*(uint *)(gen_frame + 0x50)) = 8;
              if (((*(uint *)(gen_frame + 0x68)) & 0x80) != 0) {
                (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x68)) | 0x200;
              }
              goto LAB_00c71da3;
            }
            (*(wchar_t * PTR32 *)(gen_frame + 0x54)) = pwVar16 + 2;
            puVar19 = *(uint * PTR32 *)pwVar16;
            uVar7 = F_00c51967();
            if (uVar7 == 0) goto LAB_00c717de;
            if (((*(uint *)(gen_frame + 0x68)) & 0x20) == 0) {
              *puVar19 = (*(uint *)(gen_frame + 0x58));
            }
            else {
              *(undefined2 *)puVar19 = (undefined2)(*(uint *)(gen_frame + 0x58));
            }
            (*(int *)(gen_frame + 0x20)) = 1;
          }
          pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x54));
          puVar17 = (*(ushort * PTR32 *)(gen_frame + 0x10));
          if ((*(wchar_t * PTR32 *)(gen_frame + 0x18)) != ((wchar_t *)GEN_TOP(0x0))) {
            F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x18)));
            (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = ((wchar_t *)GEN_TOP(0x0));
            pwVar15 = (*(wchar_t * PTR32 *)(gen_frame + 0x54));
            puVar17 = (*(ushort * PTR32 *)(gen_frame + 0x10));
          }
        }
        (*(uint *)(gen_frame + 0x50)) = (uint)*puVar17;
        pwVar16 = pwVar15;
        puVar14 = puVar17;
      } while (*puVar17 != 0);
      if (((*(uint *)(gen_frame + 0x34)) != 0) && ((*(uint *)(gen_frame + 0x34)) != 7)) goto LAB_00c717de;
    }
    uVar7 = (*(uint *)(gen_frame + 0x58));
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x24)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x24)) + 8))) + 112))))) & 0xfffffffd;
    }
  }
  return uVar7;
}

/* ref: __validate_param_reuseW */
GEN_LIB GEN_NOFRAME uint F_00c72328(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc72328u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
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
GEN_LIB GEN_NOFRAME uint F_00c72473(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int * in_esi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc72473u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: write_multi_char_00c724a2 */
GEN_LIB GEN_NOFRAME uint F_00c724a2(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc724a2u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    piVar1 = ((int *)GEN_TOP(F_00c72473(param_4,in_eax,param_2)));
  } while (*in_eax != -1);
  return (uint)piVar1;
}

/* ref: FUN_00c724c9 */
GEN_LIB GEN_NOFRAME uint F_00c724c9(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(int in_ebx, unsigned int gen_a1), GEN_P(uint * in_edi, unsigned int gen_a2), GEN_P(ushort * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc724c9u, gen_a0, gen_a1, gen_a2, gen_a3);
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
GEN_LIB GEN_NOFRAME uint F_00c72530(GEN_P(int param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(wchar_t * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc72530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(wchar_t * param_4 = (wchar_t *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xad0, 0);
  ushort uVar1;
  wchar_t wVar2;
  int iVar3;
  short sVar4;
  ulonglong uVar5;
  int * piVar6;
  uint uVar7;
  long lVar8;
  short * psVar9;
  gen_size32 sVar10;
  wchar_t * pwVar11;
  code * pcVar12;
  byte bVar13;
  uint uVar14;
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
  F_00c483ca(((undefined *)(gen_frame + 0x5c)) GEN_EDX_ARG,param_3);
  (*(int *)(gen_frame + 0x78)) = -1;
  (*(short * PTR32 *)(gen_frame + 0x38)) = ((short *)GEN_TOP(0x0));
  piVar6 = F_00c51f85();
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
  if ((param_1 == 0) || (param_2 == ((ushort *)GEN_TOP(0x0)))) {
LAB_00c725a7: ;
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x5c)) + 12))) != false) {
      (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) & 0xfffffffd;
    }
    return 0xffffffff;
  }
  (*(uint *)(gen_frame + 0x58)) = 0;
  (*(int *)(gen_frame + 0x70)) = 0;
LAB_00c725e8: ;
  if (((*(int *)(gen_frame + 0x70)) != 1) || ((*(int *)(gen_frame + 0x78)) != 0)) {
    uVar14 = (uint)*param_2;
    (*(uint *)(gen_frame + 0x3c)) = 0xffffffff;
    (*(uint *)(gen_frame + 0x54)) = 0xffffffff;
    (*(int *)(gen_frame + 0x78)) = -1;
    (*(gen_size32 *)(gen_frame + 0x44)) = 0;
    (*(uint *)(gen_frame + 0x20)) = 0;
    (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = ((wchar_t *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x48)) = 0;
    (*(uint *)(gen_frame + 0x7c)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x50)) = param_2;
    (*(uint *)(gen_frame + 0x74)) = uVar14;
    puVar15 = param_2;
    if (*param_2 != 0) {
LAB_00c72650: ;
      puVar15 = puVar15 + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15;
      (*(uint *)(gen_frame + 0x74)) = uVar14;
      if ((int)(*(uint *)(gen_frame + 0x58)) < 0) goto LAB_00c73713;
      sVar4 = (short)uVar14;
      if ((ushort)(sVar4 - 0x20U) < 0x59) {
        uVar7 = (byte)(&REFG(undefined, 0x1119ec8))[(int)(uVar14)] & 0xf;
      }
      else {
        uVar7 = 0;
      }
      bVar13 = (&REFG(undefined, 0x1119ee8))[(int)((*(uint *)(gen_frame + 0x20)) + uVar7 * 9)];
      uVar7 = (uint)(bVar13 >> 4);
      (*(uint *)(gen_frame + 0x20)) = uVar7;
      if (uVar7 != 1) {
        if (uVar7 == 8) goto LAB_00c725a7;
        if (uVar7 < 8) goto LAB_00c72777;
        goto LAB_00c736fb;
      }
      if (*puVar15 != 0x25) {
        if ((*(int *)(gen_frame + 0x78)) == -1) {
          lVar8 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
          if ((lVar8 < 1) || (*(*(short * PTR32 *)(gen_frame + 0x38)) != 0x24)) {
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
        lVar8 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
        uVar7 = lVar8 - 1;
        puVar15 = (ushort *)((*(short * PTR32 *)(gen_frame + 0x38)) + 1);
        (*(uint *)(gen_frame + 0x54)) = uVar7;
        (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15;
        if ((*(int *)(gen_frame + 0x70)) == 0) {
          if ((((int)uVar7 < 0) || (*(*(short * PTR32 *)(gen_frame + 0x38)) != 0x24)) || (99 < (int)uVar7)) goto LAB_00c725a7;
          if ((int)(*(uint *)(gen_frame + 0x3c)) < (int)uVar7) {
            (*(uint *)(gen_frame + 0x3c)) = uVar7;
          }
        }
      }
LAB_00c72777: ;
      pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x80));
                    
                    
      switch((unsigned int)(uintptr_t)(bVar13 >> 4)) {
      case 0: ;
        if ((((*(int *)(gen_frame + 0x70)) != 0) || ((*(int *)(gen_frame + 0x78)) != 1)) && (((*(int *)(gen_frame + 0x70)) != 1 || ((*(int *)(gen_frame + 0x78)) != -1)))) {
LAB_00c72ad5: ;
          (*(int *)(gen_frame + 0x30)) = 1;
          F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),uVar14);
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
        if (uVar14 == 0x20) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 2;
        }
        else if (uVar14 == 0x23) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x80;
        }
        else if (uVar14 == 0x2b) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 1;
        }
        else if (uVar14 == 0x2d) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 4;
        }
        else if (uVar14 == 0x30) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 8;
        }
        break;
      case 3: ;
        if (sVar4 == 0x2a) {
          if ((*(int *)(gen_frame + 0x78)) == 0) {
            (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
            uVar14 = *(uint *)pwVar17;
          }
          else {
            lVar8 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
            uVar14 = lVar8 - 1;
            (*(ushort * PTR32 *)(gen_frame + 0x50)) = (ushort *)((*(short * PTR32 *)(gen_frame + 0x38)) + 1);
            if ((*(int *)(gen_frame + 0x70)) == 0) {
LAB_00c728af: ;
              if ((((int)uVar14 < 0) || (*(*(short * PTR32 *)(gen_frame + 0x38)) != 0x24)) || (99 < (int)(*(uint *)(gen_frame + 0x54))))
              goto LAB_00c725a7;
              if ((int)(*(uint *)(gen_frame + 0x3c)) < (int)uVar14) {
                (*(uint *)(gen_frame + 0x3c)) = uVar14;
              }
              piVar6 = ((int *)(gen_frame + 0x488)) + uVar14 * 4;
              if (*piVar6 == 0) {
                *piVar6 = 1;
                *(undefined2 *)(((uint *)(gen_frame + 0x490)) + uVar14 * 4) = 0x2a;
LAB_00c729d9: ;
                ((uint *)(gen_frame + 0x490))[(int)(uVar14 * 4 + 1)] = (*(uint *)(gen_frame + 0x84));
                break;
              }
              uVar14 = 0x2a;
              uVar20 = 1;
LAB_00c72ee5: ;
              uVar14 = F_00c72328(piVar6,uVar20,uVar14,(*(uint *)(gen_frame + 0x84)));
              if (uVar14 == 0) goto LAB_00c725a7;
              break;
            }
            uVar14 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)(uVar14 * 4 - 1)]));
          }
          (*(uint *)(gen_frame + 0x48)) = uVar14;
          if ((int)uVar14 < 0) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 4;
            (*(uint *)(gen_frame + 0x48)) = -uVar14;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x48)) = (*(uint *)(gen_frame + 0x48)) * 10 - 0x30 + uVar14;
        }
        break;
      case 4: ;
        (*(uint *)(gen_frame + 0x7c)) = 0;
        break;
      case 5: ;
        if (sVar4 == 0x2a) {
          if ((*(int *)(gen_frame + 0x78)) == 0) {
            (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
            uVar14 = *(uint *)pwVar17;
          }
          else {
            lVar8 = F_00c7ecef(puVar15,&(*(short * PTR32 *)(gen_frame + 0x38)),10);
            uVar14 = lVar8 - 1;
            (*(ushort * PTR32 *)(gen_frame + 0x50)) = (ushort *)((*(short * PTR32 *)(gen_frame + 0x38)) + 1);
            if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c728af;
            uVar14 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)(uVar14 * 4 - 1)]));
          }
          (*(uint *)(gen_frame + 0x7c)) = uVar14;
          if ((int)uVar14 < 0) {
            (*(uint *)(gen_frame + 0x7c)) = 0xffffffff;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) * 10 - 0x30 + uVar14;
        }
        break;
      case 6: ;
        if (uVar14 == 0x49) {
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
        else if (uVar14 == 0x68) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x20;
        }
        else if (uVar14 == 0x6c) {
          if (*puVar15 == 0x6c) {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x1000;
            (*(ushort * PTR32 *)(gen_frame + 0x50)) = puVar15 + 1;
          }
          else {
            (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x10;
          }
        }
        else if (uVar14 == 0x77) {
          (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x800;
        }
        break;
      case 7: ;
        if (uVar14 < 0x65) {
          if (uVar14 == 100) {
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
                    uVar14 = (*(uint *)(gen_frame + 0x74));
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
                    uVar14 = *(uint *)pwVar17;
                  }
                  else {
                    if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                    if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c7326e;
                    uVar14 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
                  }
                  uVar7 = 0;
                  goto LAB_00c732f5;
                }
                if ((*(int *)(gen_frame + 0x78)) == 0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                  uVar14 = *(uint *)pwVar17;
                }
                else {
                  if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                  if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c7326e;
                  uVar14 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
                }
              }
              else if (((*(uint *)(gen_frame + 0x84)) & 0x40) == 0) {
                if ((*(int *)(gen_frame + 0x78)) == 0) {
                  (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                  uVar14 = (uint)(ushort)*pwVar17;
                }
                else {
                  if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                  if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c7326e;
                  uVar14 = (uint)*((ushort *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
                }
              }
              else if ((*(int *)(gen_frame + 0x78)) == 0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                uVar14 = (uint)*pwVar17;
              }
              else {
                if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                if ((*(int *)(gen_frame + 0x70)) == 0) {
LAB_00c7326e: ;
                  piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                  uVar14 = (*(uint *)(gen_frame + 0x74));
                  if (*piVar6 != 0) goto LAB_00c73289;
                  *piVar6 = 1;
                  goto LAB_00c73342;
                }
                uVar14 = (uint)*((short *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
              }
              uVar7 = (int)uVar14 >> 0x1f;
            }
            else if ((*(int *)(gen_frame + 0x78)) == 0) {
LAB_00c72ec2: ;
              (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 4;
              uVar14 = *(uint *)pwVar17;
              uVar7 = *(uint *)(pwVar17 + 2);
            }
            else {
              if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
              if ((*(int *)(gen_frame + 0x70)) == 0) {
                piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                if (*piVar6 != 0) {
                  uVar20 = 3;
                  uVar14 = (*(uint *)(gen_frame + 0x74));
LAB_00c7328b: ;
                  uVar14 = F_00c72328(piVar6,uVar20,uVar14,(*(uint *)(gen_frame + 0x84)));
                  if (uVar14 != 0) goto LAB_00c73514;
                  goto LAB_00c725a7;
                }
                *piVar6 = 3;
LAB_00c73342: ;
                *(short *)(((uint *)(gen_frame + 0x490)) + (*(uint *)(gen_frame + 0x54)) * 4) = (short)(*(uint *)(gen_frame + 0x74));
                ((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 + 1)] = (*(uint *)(gen_frame + 0x84));
                goto LAB_00c73514;
              }
LAB_00c73184: ;
              uVar14 = *((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
              uVar7 = (((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)])))[1];
            }
LAB_00c732f5: ;
            if (((((*(uint *)(gen_frame + 0x84)) & 0x40) != 0) && ((int)uVar7 < 1)) && ((int)uVar7 < 0)) {
              bVar19 = uVar14 != 0;
              uVar14 = -uVar14;
              uVar7 = -(uVar7 + bVar19);
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x100;
            }
            if (((*(uint *)(gen_frame + 0x84)) & 0x9000) == 0) {
              uVar7 = 0;
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
            if (uVar14 == 0 && uVar7 == 0) {
              (*(int *)(gen_frame + 0x34)) = 0;
            }
            pwVar17 = &(*(undefined2 *)(gen_frame + 0x287));
            uVar5 = CONCAT44(uVar7,uVar14);
            while ((uVar14 = (*(uint *)(gen_frame + 0x7c)), (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x7c)) - 1, 0 < (int)uVar14 || (uVar5 != 0)))
            {
              uVar14 = (int)(uVar5 % (ulonglong)(longlong)(int)(*(gen_size32 *)(gen_frame + 0x4c))) + 0x30;
              bVar13 = (byte)uVar14;
              (*(gen_size32 *)(gen_frame + 0x44)) = 0;
              if (0x39 < uVar14) {
                bVar13 = bVar13 + (char)(*(undefined4 *)(gen_frame + 0x1c));
              }
              *(byte *)pwVar17 = bVar13;
              pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 - 1)));
              uVar5 = uVar5 / (ulonglong)(longlong)(int)(*(gen_size32 *)(gen_frame + 0x4c));
            }
            sVar10 = (int)&(*(undefined2 *)(gen_frame + 0x287)) - (int)pwVar17;
            (*(gen_size32 *)(gen_frame + 0x44)) = sVar10;
            (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = ((wchar_t *)GEN_TOP(((int)pwVar17 + 1)));
            if ((((*(uint *)(gen_frame + 0x84)) & 0x200) != 0) &&
               ((sVar10 == 0 || (*((byte *)GEN_TOP(((int)pwVar17 + 1))) != 0x30)))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
              (*(gen_size32 *)(gen_frame + 0x44)) = (int)&(*(undefined2 *)(gen_frame + 0x287)) - (int)pwVar17 + 1;
              *(byte *)pwVar17 = 0x30;
            }
          }
          else {
            if (uVar14 < 0x54) {
              if (uVar14 == 0x53) {
                if (((*(uint *)(gen_frame + 0x84)) & 0x830) == 0) {
                  (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x20;
                }
                goto LAB_00c72bc7;
              }
              if (uVar14 != 0x41) {
                if (uVar14 == 0x43) {
                  if (((*(uint *)(gen_frame + 0x84)) & 0x830) == 0) {
                    (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x20;
                  }
                  goto LAB_00c72c1c;
                }
                if ((uVar14 != 0x45) && (uVar14 != 0x47)) goto LAB_00c73514;
              }
              uVar14 = uVar14 + 0x20;
              (*(undefined4 *)(gen_frame + 0xc)) = 1;
              (*(uint *)(gen_frame + 0x74)) = uVar14;
LAB_00c72b4e: ;
              (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x40;
              if (((*(int *)(gen_frame + 0x78)) == 1) && ((*(int *)(gen_frame + 0x70)) == 0)) {
                if ((*(uint *)(gen_frame + 0x54)) < 100) {
                  piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
                  if (*piVar6 != 0) {
                    uVar20 = 7;
                    goto LAB_00c72ee5;
                  }
                  *piVar6 = 7;
                  *(short *)(((uint *)(gen_frame + 0x490)) + (*(uint *)(gen_frame + 0x54)) * 4) = (short)uVar14;
                  uVar14 = (*(uint *)(gen_frame + 0x54));
                  goto LAB_00c729d9;
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
                if ((short)uVar14 == 0x67) {
                  (*(uint *)(gen_frame + 0x7c)) = 1;
                }
              }
              else {
                if (0x200 < (int)(*(uint *)(gen_frame + 0x7c))) {
                  (*(uint *)(gen_frame + 0x7c)) = 0x200;
                }
                uVar14 = (*(uint *)(gen_frame + 0x74));
                if (0xa3 < (int)(*(uint *)(gen_frame + 0x7c))) {
                  sVar10 = (*(uint *)(gen_frame + 0x7c)) + 0x15d;
                  pwVar11 = F_00c54c2e(sVar10);
                  (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = pwVar11;
                  uVar14 = (*(uint *)(gen_frame + 0x74));
                  if (pwVar11 == ((wchar_t *)GEN_TOP(0x0))) {
                    (*(uint *)(gen_frame + 0x7c)) = 0xa3;
                  }
                  else {
                    (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar11;
                    (*(gen_size32 *)(gen_frame + 0x4c)) = sVar10;
                    pwVar17 = pwVar11;
                  }
                }
              }
              pwVar11 = (*(wchar_t * PTR32 *)(gen_frame + 0x80));
              if ((*(int *)(gen_frame + 0x78)) == 0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 4;
                (*(uint *)(gen_frame + 0x0)) = *(uint *)pwVar11;
                uVar7 = *(uint *)(pwVar11 + 2);
              }
              else {
                if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                puVar16 = ((uint *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
                (*(uint *)(gen_frame + 0x0)) = *puVar16;
                uVar7 = puVar16[1];
              }
              (*(uint *)(gen_frame + 0x4)) = uVar7;
              p_Var22 = ((undefined *)(gen_frame + 0x5c));
              iVar18 = (int)(char)uVar14;
              puVar16 = &(*(uint *)(gen_frame + 0x0));
              pwVar11 = pwVar17;
              sVar10 = (*(gen_size32 *)(gen_frame + 0x4c));
              uVar20 = (*(undefined4 *)(gen_frame + 0xc));
              uVar14 = (*(uint *)(gen_frame + 0x7c));
              pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b138));
              (*pcVar12)(puVar16,pwVar11,sVar10,iVar18,uVar14,uVar20,p_Var22);
              uVar14 = (*(uint *)(gen_frame + 0x84)) & 0x80;
              if ((uVar14 != 0) && ((*(uint *)(gen_frame + 0x7c)) == 0)) {
                p_Var22 = ((undefined *)(gen_frame + 0x5c));
                pwVar11 = pwVar17;
                pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b144));
                (*pcVar12)(pwVar11,p_Var22);
              }
              if (((short)(*(uint *)(gen_frame + 0x74)) == 0x67) && (uVar14 == 0)) {
                p_Var22 = ((undefined *)(gen_frame + 0x5c));
                pwVar11 = pwVar17;
                pcVar12 = gen_imp_DecodePointer(REFG(undefined * PTR32, 0x134b140));
                (*pcVar12)(pwVar11,p_Var22);
              }
              if ((byte)*pwVar17 == 0x2d) {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x100;
                pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + 1)));
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
              }
LAB_00c72da2: ;
              sVar10 = F_00c552f0((char *)pwVar17);
              goto LAB_00c7350e;
            }
            if (uVar14 == 0x58) goto LAB_00c7308d;
            if (uVar14 == 0x5a) {
              if ((*(int *)(gen_frame + 0x78)) == 0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                psVar9 = *(short * PTR32 *)pwVar17;
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
                psVar9 = *((short * PTR32 *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
              }
              if ((psVar9 == ((short *)GEN_TOP(0x0))) || (*(wchar_t * PTR32 *)(psVar9 + 2) == ((wchar_t *)GEN_TOP(0x0)))) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                pwVar17 = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
                goto LAB_00c72da2;
              }
              sVar10 = (gen_size32)*psVar9;
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = *(wchar_t * PTR32 *)(psVar9 + 2);
              if (((*(uint *)(gen_frame + 0x84)) & 0x800) == 0) {
                (*(int *)(gen_frame + 0x30)) = 0;
                goto LAB_00c7350e;
              }
              iVar18 = sVar10 - ((int)sVar10 >> 0x1f);
              (*(int *)(gen_frame + 0x30)) = 1;
              goto LAB_00c7350c;
            }
            if (uVar14 == 0x61) goto LAB_00c72b4e;
            if (uVar14 != 99) goto LAB_00c73514;
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
              wVar2 = *((wchar_t *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
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
        else if (uVar14 < 0x71) {
          if (uVar14 == 0x70) {
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
          if (100 < uVar14) {
            if (uVar14 < 0x68) goto LAB_00c72b4e;
            if (uVar14 == 0x69) goto LAB_00c72e92;
            if (uVar14 == 0x6e) {
              if ((*(int *)(gen_frame + 0x78)) == 0) {
                (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
                puVar16 = *(uint * PTR32 *)pwVar17;
              }
              else {
                if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
                if ((*(int *)(gen_frame + 0x70)) == 0) goto LAB_00c72d2b;
                puVar16 = *((uint * PTR32 *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
              }
              uVar14 = F_00c51967();
              if (uVar14 == 0) goto LAB_00c725a7;
              if (((*(uint *)(gen_frame + 0x84)) & 0x20) == 0) {
                *puVar16 = (*(uint *)(gen_frame + 0x58));
              }
              else {
                *(undefined2 *)puVar16 = (undefined2)(*(uint *)(gen_frame + 0x58));
              }
              (*(int *)(gen_frame + 0x14)) = 1;
            }
            else if (uVar14 == 0x6f) {
              (*(gen_size32 *)(gen_frame + 0x4c)) = 8;
              if ((char)(*(uint *)(gen_frame + 0x84)) < '\0') {
                (*(uint *)(gen_frame + 0x84)) = (*(uint *)(gen_frame + 0x84)) | 0x200;
              }
              goto LAB_00c72ea9;
            }
          }
        }
        else {
          if (uVar14 != 0x73) {
            if (uVar14 == 0x75) goto LAB_00c72e99;
            if (uVar14 != 0x78) goto LAB_00c73514;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0x27;
            goto LAB_00c730bd;
          }
LAB_00c72bc7: ;
          uVar14 = (*(uint *)(gen_frame + 0x7c));
          if ((*(uint *)(gen_frame + 0x7c)) == 0xffffffff) {
            uVar14 = 0x7fffffff;
          }
          if ((*(int *)(gen_frame + 0x78)) == 0) {
            (*(wchar_t * PTR32 *)(gen_frame + 0x80)) = (*(wchar_t * PTR32 *)(gen_frame + 0x80)) + 2;
            pwVar17 = *(wchar_t * PTR32 *)pwVar17;
          }
          else {
            if (99 < (*(uint *)(gen_frame + 0x54))) goto LAB_00c725a7;
            if ((*(int *)(gen_frame + 0x70)) == 0) {
              piVar6 = ((int *)(gen_frame + 0x488)) + (*(uint *)(gen_frame + 0x54)) * 4;
              uVar14 = (*(uint *)(gen_frame + 0x74));
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
            pwVar17 = *((wchar_t * PTR32 *)GEN_TOP(((uint *)(gen_frame + 0x490))[(int)((*(uint *)(gen_frame + 0x54)) * 4 - 1)]));
          }
          (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = pwVar17;
          if (((*(uint *)(gen_frame + 0x84)) & 0x20) == 0) {
            if (pwVar17 == ((wchar_t *)GEN_TOP(0x0))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b14c);
            }
            (*(int *)(gen_frame + 0x30)) = 1;
            for (pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)); (uVar14 != 0 && (uVar14 = uVar14 - 1, *pwVar17 != L'\0'));
                pwVar17 = pwVar17 + 1) {
            }
            iVar18 = (int)pwVar17 - (int)(*(wchar_t * PTR32 *)(gen_frame + 0x6c));
LAB_00c7350c: ;
            (*(int *)(gen_frame + 0x30)) = 1;
            sVar10 = iVar18 >> 1;
LAB_00c7350e: ;
            (*(gen_size32 *)(gen_frame + 0x44)) = sVar10;
          }
          else {
            if (pwVar17 == ((wchar_t *)GEN_TOP(0x0))) {
              (*(wchar_t * PTR32 *)(gen_frame + 0x6c)) = (wchar_t *)REFG(undefined * PTR32, 0x134b148);
            }
            (*(gen_size32 *)(gen_frame + 0x44)) = 0;
            pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c));
            if (0 < (int)uVar14) {
              do {
                if ((byte)*pwVar17 == 0) break;
                iVar18 = F_00c6dfe8((uint)(byte)*pwVar17,&(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x5c)))));
                if (iVar18 != 0) {
                  pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + 1)));
                }
                pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + 1)));
                sVar10 = (*(gen_size32 *)(gen_frame + 0x44)) + 1;
                (*(gen_size32 *)(gen_frame + 0x44)) = sVar10;
              } while ((int)sVar10 < (int)uVar14);
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
            sVar10 = ((*(uint *)(gen_frame + 0x48)) - (*(gen_size32 *)(gen_frame + 0x44))) - (*(int *)(gen_frame + 0x34));
            (*(gen_size32 *)(gen_frame + 0x4c)) = sVar10;
            if (((*(uint *)(gen_frame + 0x84)) & 0xc) == 0) {
              do {
                if ((int)sVar10 < 1) break;
                sVar10 = sVar10 - 1;
                F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),0x20);
              } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
            }
            iVar18 = (*(int *)(gen_frame + 0x2c));
            F_00c724c9(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x2c)),(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined2 *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x34)));
            if ((((*(uint *)(gen_frame + 0x84)) & 8) != 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x4c)), ((*(uint *)(gen_frame + 0x84)) & 4) == 0)) {
              do {
                if ((int)sVar10 < 1) break;
                sVar10 = sVar10 - 1;
                F_00c72473(iVar18,&(*(uint *)(gen_frame + 0x58)),0x30);
              } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
            }
            if (((*(int *)(gen_frame + 0x30)) == 0) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x44)), pwVar17 = (*(wchar_t * PTR32 *)(gen_frame + 0x6c)), 0 < (int)(*(gen_size32 *)(gen_frame + 0x44)))) {
              do {
                sVar10 = sVar10 - 1;
                uVar14 = F_00c7b204((wchar_t *)&(*(uint *)(gen_frame + 0x10)),(char *)pwVar17,
                                    (gen_size32)(*((wchar_t * PTR32 *)GEN_TOP(((((char *)(*(undefined * PTR32 *)((char *)((undefined *)(gen_frame + 0x5c)))) + 160) + (3) * 4))))),
                                    &(*(undefined (*)[8])((char *)((undefined *)(gen_frame + 0x5c)))));
                (*(uint *)(gen_frame + 0x74)) = uVar14;
                if ((int)uVar14 < 1) {
                  (*(uint *)(gen_frame + 0x58)) = 0xffffffff;
                  break;
                }
                F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x10)));
                pwVar17 = ((wchar_t *)GEN_TOP(((int)pwVar17 + (*(uint *)(gen_frame + 0x74)))));
              } while (0 < (int)sVar10);
            }
            else {
              F_00c724c9(&(*(uint *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x2c)),(*(int * PTR32 *)(gen_frame + 0x8)),(*(wchar_t * PTR32 *)(gen_frame + 0x6c)),(*(gen_size32 *)(gen_frame + 0x44)));
            }
            if ((-1 < (int)(*(uint *)(gen_frame + 0x58))) && (sVar10 = (*(gen_size32 *)(gen_frame + 0x4c)), ((*(uint *)(gen_frame + 0x84)) & 4) != 0)) {
              do {
                if ((int)sVar10 < 1) break;
                sVar10 = sVar10 - 1;
                F_00c72473((*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x58)),0x20);
              } while ((*(uint *)(gen_frame + 0x58)) != 0xffffffff);
            }
          }
          if ((*(wchar_t * PTR32 *)(gen_frame + 0x18)) != ((wchar_t *)GEN_TOP(0x0))) {
            F_00c4c68f((*(wchar_t * PTR32 *)(gen_frame + 0x18)));
            (*(wchar_t * PTR32 *)(gen_frame + 0x18)) = ((wchar_t *)GEN_TOP(0x0));
          }
        }
      }
LAB_00c736fb: ;
      uVar14 = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x50));
      (*(uint *)(gen_frame + 0x74)) = uVar14;
      puVar15 = (*(ushort * PTR32 *)(gen_frame + 0x50));
      if (*(*(ushort * PTR32 *)(gen_frame + 0x50)) == 0) goto LAB_00c73713;
      goto LAB_00c72650;
    }
    goto LAB_00c737a0;
  }
  goto LAB_00c737bc;
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
  if (1 < iVar18) {
LAB_00c737bc: ;
    if ((*(bool *)(((char *)((undefined *)(gen_frame + 0x5c)) + 12))) == false) {
      return (*(uint *)(gen_frame + 0x58));
    }
    (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) = (*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)((undefined *)(gen_frame + 0x5c)) + 8))) + 112))))) & 0xfffffffd;
    return (*(uint *)(gen_frame + 0x58));
  }
  goto LAB_00c725e8;
}

/* ref: __calloc_impl */
GEN_LIB GEN_NOFRAME uint F_00c73804(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc73804u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
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
      if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
        return 0;
      }
      *param_3 = 0xc;
      return 0;
    }
    iVar3 = F_00c5b165(dwBytes);
  } while (iVar3 != 0);
  if (param_3 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_3 = 0xc;
  }
  return 0;
}

/* ref: __recalloc */
GEN_LIB GEN_NOFRAME undefined * F_00c73886(GEN_P(undefined * _Memory, unsigned int gen_a0), GEN_P(gen_size32 _Count, unsigned int gen_a1), GEN_P(gen_size32 _Size, unsigned int gen_a2))
{
  GEN_ENTER(0xc73886u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * _Memory = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 _Count = (gen_size32)gen_a1;)
  GEN_PIN(gen_size32 _Size = (gen_size32)gen_a2;)
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 sVar4;
  
  sVar4 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    uVar3 = _Count * _Size;
    if (_Memory != ((undefined *)GEN_TOP(0x0))) {
      sVar4 = F_00c5b8b9(_Memory);
    }
    pvVar2 = F_00c52171(_Memory,uVar3);
    if ((pvVar2 != ((undefined *)GEN_TOP(0x0))) && (sVar4 < uVar3)) {
      F_00c48350(((undefined *)GEN_TOP((sVar4 + (int)pvVar2))),0,uVar3 - sVar4);
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    pvVar2 = ((undefined *)GEN_TOP(0x0));
  }
  return pvVar2;
}

/* ref: FUN_00c738f4 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c738f4(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc738f4u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  F_00c54322(this GEN_EDX_FWD,(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  return (uint)this;
}

/* ref: FUN_00c73912 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c73912(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc73912u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  F_00c5437e(this GEN_EDX_FWD);
  return;
}

/* ref: std::bad_exception::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c7391d(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7391du, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  F_00c5437e(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: ___TypeMatch */
GEN_LIB GEN_NOFRAME uint F_00c73944(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc73944u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*((char *)GEN_TOP((iVar1 + 8))) == '\0')) {
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
      iVar1 = F_00c556e0(((char *)GEN_TOP((iVar1 + 8))),((char *)GEN_TOP((*(int *)(param_2 + 4) + 8))));
      if (iVar1 == 0) goto LAB_00c7397b;
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: ___FrameUnwindFilter */
GEN_LIB GEN_NOFRAME uint F_00c739a3(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc739a3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * p_Var2;
  
  iVar1 = *((int *)GEN_TOP(*param_1));
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    p_Var2 = F_00c5b37a();
    if (0 < (*(int *)(((char *)(p_Var2) + 144)))) {
      p_Var2 = F_00c5b37a();
      (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) - 1;
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
GEN_LIB GEN_NOFRAME uint F_00c739f2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc739f2u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x48, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int in_esi;
  int iVar1;
  int iVar2;
  undefined * p_Var3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (*(int *)&gen_args[2]);
  iVar1 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x30)) = 0x10;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = &REFG(undefined, 0x12f68e8);
  (*(uint volatile *)(gen_frame + 0x28)) = 0xc739fe;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ 0x12f68e8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if (*((int *)GEN_TOP(((*(int *)&gen_args[2]) + 4))) < 0x81) {
    iVar5 = (int)*((char *)GEN_TOP(((*(int *)&gen_args[0]) + 8)));
  }
  else {
    iVar5 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 8)));
  }
  (*(int *)(gen_frame + 0x14)) = iVar5;
  p_Var3 = F_00c5b37a();
  (*(int *)(((char *)(p_Var3) + 144))) = (*(int *)(((char *)(p_Var3) + 144))) + 1;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
  while( true ) {
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
    if (iVar5 == (*(int *)&gen_args[3])) {
      (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0xfffffffe));
      uVar4 = F_00c73ab4();
      if (iVar5 != (*(int *)&gen_args[3])) {
                    
        F_00c5aace();
      }
      *((int *)GEN_TOP((iVar1 + 8))) = iVar5;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return uVar4;
    }
    if ((iVar5 < 0) || (*((int *)GEN_TOP((iVar2 + 4))) <= iVar5)) break;
    in_esi = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + iVar5 * 8)));
    (*(int *)(gen_frame + 0x10)) = in_esi;
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x1));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4 + iVar5 * 8))) != 0) {
      *((int *)GEN_TOP((iVar1 + 8))) = in_esi;
      F_00c74b20(in_esi,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4 + iVar5 * 8))),iVar1,0x103)
      ;
    }
    (*(undefined * PTR32 volatile *)(gen_frame + 0x2c)) = ((undefined *)GEN_TOP(0x0));
    (*(int *)(gen_frame + 0x14)) = in_esi;
    iVar5 = in_esi;
  }
                    
  F_00c5aace();
}

/* ref: FUN_00c73a70 */
GEN_LIB GEN_NOFRAME uint F_00c73a70(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c739a3(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: FUN_00c73a7a */
GEN_LIB GEN_NOFRAME uint F_00c73a7a(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73a7au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  int iVar1;
  int in_esi;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *((int *)GEN_TOP((in_ebp - 0x18)));
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0;
  iVar3 = *((int *)GEN_TOP((in_ebp + 0x10)));
  iVar4 = *((int *)GEN_TOP((in_ebp + 8)));
  iVar6 = *((int *)GEN_TOP((in_ebp - 0x20)));
  while( true ) {
    *((int *)GEN_TOP((in_ebp - 0x1c))) = iVar6;
    if (iVar6 == *((int *)GEN_TOP((in_ebp + 0x14)))) {
      *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
      *((undefined4 *)GEN_TOP((iVar2 - 4))) = 0xc73a9b;
      uVar5 = F_00c73ab4();
      if (iVar6 != *((int *)GEN_TOP((in_ebp + 0x14)))) {
                    
        *((undefined4 *)GEN_TOP((iVar2 - 4))) = 0xc73aa5;
        F_00c5aace();
      }
      *((int *)GEN_TOP((iVar4 + 8))) = iVar6;
      *((undefined4 *)GEN_TOP((iVar2 - 4))) = 0xc73aad;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
      return uVar5;
    }
    if ((iVar6 < 0) || (*((int *)GEN_TOP((iVar3 + 4))) <= iVar6)) break;
    iVar1 = *((int *)GEN_TOP((iVar3 + 8)));
    in_esi = *((int *)GEN_TOP((iVar1 + iVar6 * 8)));
    *((int *)GEN_TOP((in_ebp - 0x20))) = in_esi;
    *((undefined4 *)GEN_TOP((in_ebp - 4))) = 1;
    if (*((int *)GEN_TOP((iVar1 + 4 + iVar6 * 8))) != 0) {
      *((int *)GEN_TOP((iVar4 + 8))) = in_esi;
      *((undefined4 *)GEN_TOP((iVar2 - 4))) = 0x103;
      *((int *)GEN_TOP((iVar2 - 8))) = iVar4;
      *((undefined4 *)GEN_TOP((iVar2 - 0xc))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 8))) + 4 + iVar6 * 8)));
      *((undefined4 *)GEN_TOP((iVar2 - 0x10))) = 0xc73a6a;
      F_00c74b20(in_esi,*((undefined4 *)GEN_TOP((iVar2 - 0xc))),*((undefined4 *)GEN_TOP((iVar2 - 8))),
                 *((undefined4 *)GEN_TOP((iVar2 - 4))));
    }
    *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0;
    iVar6 = in_esi;
  }
                    
  *((undefined4 *)GEN_TOP((iVar2 - 4))) = 0xc73a3c;
  F_00c5aace();
}

/* ref: FUN_00c73aae */
GEN_LIB GEN_NOFRAME uint F_00c73aae(GEN_P(undefined4 in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73aaeu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ebp = (undefined4)gen_a0;)
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if (0 < (*(int *)(((char *)(p_Var1) + 144)))) {
    p_Var1 = F_00c5b37a();
    (*(int *)(((char *)(p_Var1) + 144))) = (*(int *)(((char *)(p_Var1) + 144))) - 1;
  }
  return (uint)p_Var1;
}

/* ref: FUN_00c73ab4 */
GEN_LIB GEN_NOFRAME uint F_00c73ab4(void)
{
  GEN_ENTER(0xc73ab4u, 0u, 0u, 0u, 0u);
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if (0 < (*(int *)(((char *)(p_Var1) + 144)))) {
    p_Var1 = F_00c5b37a();
    (*(int *)(((char *)(p_Var1) + 144))) = (*(int *)(((char *)(p_Var1) + 144))) - 1;
  }
  return (uint)p_Var1;
}

/* ref: Global::?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z */
GEN_LIB GEN_NOFRAME uint F_00c73ace(GEN_P(int * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xc73aceu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * p_Var3;
  
  piVar1 = ((int *)GEN_TOP(*in_eax));
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
GEN_LIB GEN_NOFRAME uint F_00c73b13(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc73b13u, gen_a0, gen_a1, 0u, 0u);
  GEN_FRAME_DECL(0x38, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f6910);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc73b1f;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f6910;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if (((((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) && (*(*(int * PTR32 *)&gen_args[0]) == -0x1f928c9d)) && (in_EAX = 0, (*(int * PTR32 *)&gen_args[0])[7] != 0)) &&
     (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[7] + 4))), in_EAX = 0, pvVar1 != ((undefined *)GEN_TOP(0x0)))) {
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
    F_00c54d91(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[6])),pvVar1);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
    in_EAX = extraout_EAX;
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return in_EAX;
}

/* ref: FUN_00c73b56 */
GEN_LIB GEN_NOFRAME byte F_00c73b56(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73b56u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ebp + 0xc))) != '\0';
}

/* ref: FUN_00c73b5f */
GEN_LIB GEN_NOFRAME unsigned int F_00c73b5f(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73b5fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
                    
  *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = &REFG(undefined, 0xc73b67);
  F_00c5aa82();
}

/* ref: ___AdjustPointer */
GEN_LIB GEN_NOFRAME uint F_00c73b68(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc73b68u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    uVar1 = uVar1 + *((int *)GEN_TOP((*((int *)GEN_TOP((param_2[1] + param_1))) + param_2[2]))) + param_2[1];
  }
  return uVar1;
}

/* ref: ___CxxRegisterExceptionObject */
GEN_LIB GEN_NOFRAME int F_00c73ba2(GEN_P(undefined * exception, unsigned int gen_a0), GEN_P(undefined * storage, unsigned int gen_a1))
{
  GEN_ENTER(0xc73ba2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * exception = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * storage = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * p_Var2;
  int * piVar3;
  
  if ((exception == ((undefined *)GEN_TOP(0x0))) || (piVar3 = *(int * PTR32 *)exception, piVar3 == ((int *)GEN_TOP(0x0)))) {
    *((undefined4 *)GEN_TOP(((int)storage + 8))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)storage + 0xc))) = 0xffffffff;
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
    *((undefined * PTR32 *)GEN_TOP(((int)storage + 8))) = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
    p_Var2 = F_00c5b37a();
    *((undefined * PTR32 *)GEN_TOP(((int)storage + 0xc))) = (*(void * PTR32 *)(((char *)(p_Var2) + 140)));
    p_Var2 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var2) + 136))) = piVar3;
  }
  p_Var2 = F_00c5b37a();
  (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) - 1;
  p_Var2 = F_00c5b37a();
  if ((*(int *)(((char *)(p_Var2) + 144))) < 0) {
    p_Var2 = F_00c5b37a();
    (*(int *)(((char *)(p_Var2) + 144))) = 0;
  }
  return 1;
}

/* ref: ___CxxDetectRethrow */
GEN_LIB GEN_NOFRAME int F_00c73c58(GEN_P(undefined * exception, unsigned int gen_a0))
{
  GEN_ENTER(0xc73c58u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * exception = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * p_Var3;
  
  if (((((exception != ((undefined *)GEN_TOP(0x0))) && (piVar1 = *(int * PTR32 *)exception, *piVar1 == -0x1f928c9d)) &&
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
GEN_LIB GEN_NOFRAME unsigned int F_00c73ca9(GEN_P(undefined * storage, unsigned int gen_a0), GEN_P(int rethrow, unsigned int gen_a1))
{
  GEN_ENTER(0xc73ca9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * storage = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int rethrow = (int)gen_a1;)
  undefined * p_Var1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*((int *)GEN_TOP(((int)storage + 8))) != -1) {
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
      (*(int *)(((char *)(p_Var1) + 144))) = (*(int *)(((char *)(p_Var1) + 144))) - 1;
    }
    p_Var1 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var1) + 136))) = *((undefined * PTR32 *)GEN_TOP(((int)storage + 8)));
    p_Var1 = F_00c5b37a();
    (*(void * PTR32 *)(((char *)(p_Var1) + 140))) = *((undefined * PTR32 *)GEN_TOP(((int)storage + 0xc)));
    return;
  }
  return;
}

/* ref: FUN_00c73e03 */
GEN_LIB GEN_NOFRAME uint F_00c73e03(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73e03u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c739a3(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: FUN_00c73e0d */
GEN_LIB GEN_NOFRAME unsigned int F_00c73e0d(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73e0du, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc73e1c;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return;
}

/* ref: FUN_00c73e36 */
GEN_LIB GEN_NOFRAME uint F_00c73e36(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73e36u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c739a3(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: FUN_00c73e40 */
GEN_LIB GEN_NOFRAME unsigned int F_00c73e40(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc73e4f;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return;
}

/* ref: FUN_00c73e68 */
GEN_LIB GEN_NOFRAME uint F_00c73e68(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73e68u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c739a3(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: FUN_00c73e72 */
GEN_LIB GEN_NOFRAME unsigned int F_00c73e72(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73e72u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc73e81;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return;
}

/* ref: FUN_00c73ea3 */
GEN_LIB GEN_NOFRAME uint F_00c73ea3(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73ea3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c739a3(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: FUN_00c73ead */
GEN_LIB GEN_NOFRAME unsigned int F_00c73ead(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73eadu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc73ebc;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
  return;
}

/* ref: Global::?IsInExceptionSpec@@YAEPAUEHExceptionRecord@@PBU_s_ESTypeList@@@Z */
GEN_LIB GEN_NOFRAME byte F_00c73ebd(GEN_P(int * in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc73ebdu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  int local_10;
  int local_c;
  byte local_5;
  
  if (in_edi == ((int *)GEN_TOP(0x0))) {
                    
    F_00c5aace();
  }
  local_5 = 0;
  local_10 = 0;
  if (0 < *in_edi) {
    local_c = 0;
    do {
      piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x1c))) + 0xc)));
      for (iVar2 = *piVar3; piVar3 = piVar3 + 1, 0 < iVar2; iVar2 = iVar2 - 1) {
        uVar1 = F_00c73944(in_edi[1] + local_c,*piVar3,*((undefined4 *)GEN_TOP((param_2 + 0x1c))));
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

/* ref: Global::?CallUnexpected@@YAXPBU_s_ESTypeList@@@Z */
GEN_LIB GEN_NOFRAME unsigned int F_00c73f33(unsigned int gen_a0)
{
  GEN_ENTER(0xc73f33u, gen_a0, 0u, 0u, 0u);
  GEN_FRAME_DECL(0xc, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x8);
  gen_args[0] = gen_a0;
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var1) + 148))) != ((undefined *)GEN_TOP(0x0))) {
                    
    F_00c5aace();
  }
                    
  F_00c5aabb();
}

/* ref: Catch_All@00c73f64 */
GEN_LIB GEN_NOFRAME unsigned int F_00c73f64(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc73f64u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  undefined * p_Var1;
  
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 148))) = *((undefined * PTR32 *)GEN_TOP((in_ebp + 8)));
                    
  F_00c4d67d(0,0);
}

/* ref: _is_exception_typeof */
GEN_LIB GEN_NOFRAME int F_00c73fae(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc73faeu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_LPANY pEVar1;
  ULONG_PTR UVar2;
  char * _Str2;
  char * _Str1;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  if (param_2 == ((undefined *)GEN_TOP(0x0))) {
                    
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
        _Str2 = ((char *)GEN_TOP((*((int *)GEN_TOP((*piVar4 + 4))) + 8)));
        _Str1 = ((char *)GEN_TOP(F_00c46990(param_1 GEN_EDX_ARG)));
        iVar3 = F_00c556e0(_Str1,_Str2);
        if (iVar3 == 0) break;
        iVar5 = iVar5 - 1;
      }
      return 1;
    }
                    
    F_00c5aace();
  }
                    
  F_00c5aace();
}

/* ref: CallCatchBlock */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c74034(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc74034u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x70, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x54);
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
  undefined4 in_ECX = 0;
  
  in_edi = (*(undefined * PTR32 *)&gen_args[1]);
  in_esi = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x2c;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = &REFG(undefined, 0x12f6a08);
  (*(uint volatile *)(gen_frame + 0x44)) = 0xc74040;
  (*(gen_code32 *)(gen_frame + 0x40)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ 0x12f6a08;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x34)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x3c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x3c)))))) { return (undefined *)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) - 4)));
  uVar1 = F_00c550d7(((undefined1 *)(gen_frame + 0x10)),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  p_Var2 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
  p_Var2 = F_00c5b37a();
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(void * PTR32 *)(((char *)(p_Var2) + 140)));
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 136))) = in_esi;
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 140))) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(0x1));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0x1));
  pvVar3 = F_00c5517c(in_esi,in_edi,(*(undefined * PTR32 *)&gen_args[3]),in_ECX,(*(undefined * PTR32 *)&gen_args[4]),(*(int *)&gen_args[5]));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = pvVar3;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 volatile *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(0x0));
  F_00c7415a(in_esi,in_edi,(gen_frame + 0x4c));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  return (*(undefined * PTR32 *)(gen_frame + 0x30));
}

/* ref: FUN_00c740c4 */
GEN_LIB GEN_NOFRAME uint F_00c740c4(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc740c4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00c73ace(*((undefined4 *)GEN_TOP((in_ebp - 0x14))));
  return uVar1;
}

/* ref: FUN_00c740cd */
GEN_LIB GEN_NOFRAME uint F_00c740cd(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc740cdu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
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
  
  iVar1 = *((int *)GEN_TOP((in_ebp - 0x18)));
  *((undefined4 *)GEN_TOP((iVar1 - 4))) = 0xc740d5;
  p_Var6 = F_00c5b37a();
  (*((wchar_t *)GEN_TOP((((((char *)(p_Var6) + 156) + 290) + (0x27) * 2))))) = L'\0';
  (*((wchar_t *)GEN_TOP((((((char *)(p_Var6) + 156) + 290) + (0x28) * 2))))) = L'\0';
  iVar2 = *((int *)GEN_TOP((in_ebp + 0x14)));
  in_edi = *((int *)GEN_TOP((in_ebp + 0xc)));
  if (*((int *)GEN_TOP((iVar2 + 4))) < 0x81) {
    iVar8 = (int)*((char *)GEN_TOP((in_edi + 8)));
  }
  else {
    iVar8 = *((int *)GEN_TOP((in_edi + 8)));
  }
  iVar3 = *((int *)GEN_TOP((iVar2 + 0x10)));
  *((undefined4 *)GEN_TOP((in_ebp - 0x20))) = 0;
  do {
    if (*((uint *)GEN_TOP((iVar2 + 0xc))) <= *((uint *)GEN_TOP((in_ebp - 0x20)))) {
LAB_00c7411b: ;
      *((int *)GEN_TOP((iVar1 - 4))) = iVar8;
      *((int *)GEN_TOP((iVar1 - 8))) = iVar2;
      *((undefined4 *)GEN_TOP((iVar1 - 0xc))) = 0;
      *((int *)GEN_TOP((iVar1 - 0x10))) = in_edi;
      *((undefined4 *)GEN_TOP((iVar1 - 0x14))) = 0xc74125;
      F_00c739f2(*((undefined4 *)GEN_TOP((iVar1 - 0x10))),*((undefined4 *)GEN_TOP((iVar1 - 0xc))),
                 *((undefined4 *)GEN_TOP((iVar1 - 8))),*((undefined4 *)GEN_TOP((iVar1 - 4))));
      *((undefined4 *)GEN_TOP((in_ebp - 0x1c))) = 0;
      *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0;
      in_esi = *((undefined4 *)GEN_TOP((in_ebp + 8)));
      *((undefined4 *)GEN_TOP((in_ebp - 4))) = 0xfffffffe;
      *((undefined4 *)GEN_TOP((in_ebp + 0x10))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 - 4))) = 0xc74146;
      F_00c7415a(in_esi,in_edi,in_ebp);
      uVar5 = *((uint *)GEN_TOP((in_ebp - 0x1c)));
      *((undefined4 *)GEN_TOP((iVar1 - 4))) = 0xc7414e;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x10)));
      return uVar5;
    }
    iVar7 = *((uint *)GEN_TOP((in_ebp - 0x20))) * 0x14;
    iVar4 = *((int *)GEN_TOP((iVar7 + 4 + iVar3)));
    if ((iVar4 < iVar8) && (iVar8 <= *((int *)GEN_TOP((iVar7 + 8 + iVar3))))) {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 8 + iVar4 * 8)));
      goto LAB_00c7411b;
    }
    *((int *)GEN_TOP((in_ebp - 0x20))) = *((int *)GEN_TOP((in_ebp - 0x20))) + 1;
  } while( true );
}

/* ref: FUN_00c74154 */
GEN_LIB GEN_NOFRAME uint F_00c74154(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc74154u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
  int * piVar1;
  undefined * p_Var2;
  uint uVar3;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((in_ebp + 8)));
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp + 0xc))) - 4))) = *((undefined4 *)GEN_TOP((in_ebp - 0x24)));
  F_00c5512a(*((undefined4 *)GEN_TOP((in_ebp - 0x28))));
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 136))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x2c)));
  p_Var2 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var2) + 140))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x30)));
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
      ((p_Var2 = ((undefined *)GEN_TOP(piVar1[5])), p_Var2 == ((undefined *)GEN_TOP(0x19930520)) ||
       ((p_Var2 == ((undefined *)GEN_TOP(0x19930521)) || (p_Var2 == ((undefined *)GEN_TOP(0x19930522)))))))) &&
     ((*((int *)GEN_TOP((in_ebp - 0x34))) == 0 && (*((int *)GEN_TOP((in_ebp - 0x1c))) != 0)))) {
    uVar3 = F_00c55103(piVar1[6]);
    p_Var2 = ((undefined *)GEN_TOP(0x0));
    if (uVar3 != 0) {
      p_Var2 = ((undefined *)GEN_TOP(F_00c73b13(piVar1,*((undefined4 *)GEN_TOP((in_ebp + 0x10))))));
    }
  }
  return (uint)p_Var2;
}

/* ref: FUN_00c7415a */
GEN_LIB GEN_NOFRAME uint F_00c7415a(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1), GEN_P(int in_ebp, unsigned int gen_a2))
{
  GEN_ENTER(0xc7415au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  GEN_PIN(int in_ebp = (int)gen_a2;)
  undefined * p_Var1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP((in_edi - 4))) = *((undefined4 *)GEN_TOP((in_ebp - 0x24)));
  F_00c5512a(*((undefined4 *)GEN_TOP((in_ebp - 0x28))));
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 136))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x2c)));
  p_Var1 = F_00c5b37a();
  (*(void * PTR32 *)(((char *)(p_Var1) + 140))) = *((undefined * PTR32 *)GEN_TOP((in_ebp - 0x30)));
  if ((((*in_esi == -0x1f928c9d) && (in_esi[4] == 3)) &&
      ((p_Var1 = ((undefined *)GEN_TOP(in_esi[5])), p_Var1 == ((undefined *)GEN_TOP(0x19930520)) ||
       ((p_Var1 == ((undefined *)GEN_TOP(0x19930521)) || (p_Var1 == ((undefined *)GEN_TOP(0x19930522)))))))) &&
     ((*((int *)GEN_TOP((in_ebp - 0x34))) == 0 && (*((int *)GEN_TOP((in_ebp - 0x1c))) != 0)))) {
    uVar2 = F_00c55103(in_esi[6]);
    p_Var1 = ((undefined *)GEN_TOP(0x0));
    if (uVar2 != 0) {
      p_Var1 = ((undefined *)GEN_TOP(F_00c73b13(in_esi,*((undefined4 *)GEN_TOP((in_ebp + 0x10))))));
    }
  }
  return (uint)p_Var1;
}

/* ref: ___BuildCatchObjectHelper */
GEN_LIB GEN_NOFRAME uint F_00c741d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc741d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x44, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
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
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f6a30);
  (*(uint volatile *)(gen_frame + 0x24)) = 0xc741dc;
  (*(gen_code32 *)(gen_frame + 0x20)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ 0x12f6a30;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*(uint *)(gen_frame + 0x10)) = 0;
  if ((((*(uint * PTR32 *)&gen_args[2])[1] == 0) || (*((char *)GEN_TOP(((*(uint * PTR32 *)&gen_args[2])[1] + 8))) == '\0')) ||
     (((*(uint * PTR32 *)&gen_args[2])[2] == 0 && ((*(*(uint * PTR32 *)&gen_args[2]) & 0x80000000) == 0)))) {
    return 0;
  }
  puVar6 = (*(uint * PTR32 *)&gen_args[1]);
  if (-1 < (int)*(*(uint * PTR32 *)&gen_args[2])) {
    puVar6 = ((uint *)GEN_TOP(((*(uint * PTR32 *)&gen_args[2])[2] + 0xc + (int)(*(uint * PTR32 *)&gen_args[1]))));
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x1c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x1c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(*(uint * PTR32 *)&gen_args[2]) & 8) == 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18)));
    if ((*(*(byte * PTR32 *)&gen_args[3]) & 1) == 0) {
      if (*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 0x18))) == 0) {
        iVar5 = F_00c7ed57(pvVar1,1);
        if ((iVar5 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0))
        {
          uVar7 = *(undefined4 *)(pbVar2 + 0x14);
          uVar4 = F_00c73b68(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))),pbVar2 + 8);
          F_00c46e20(puVar6,uVar4,uVar7);
          (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          return (*(uint *)(gen_frame + 0x10));
        }
      }
      else {
        iVar5 = F_00c7ed57(pvVar1,1);
        if (((iVar5 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0))
           && (uVar4 = F_00c7ed7b(*(undefined4 *)(pbVar2 + 0x18)),
              uVar4 != 0)) {
          uVar4 = ((*pbVar2 & 4) != 0) + 1;
          (*(uint *)(gen_frame + 0x10)) = uVar4;
          (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          return uVar4;
        }
      }
    }
    else {
      iVar5 = F_00c7ed57(pvVar1,1);
      if ((iVar5 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0)) {
        F_00c46e20(puVar6,*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))),*(undefined4 *)(pbVar2 + 0x14));
        if (*(int *)(pbVar2 + 0x14) != 4) {
          (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          return (*(uint *)(gen_frame + 0x10));
        }
        uVar4 = *puVar6;
        if (uVar4 == 0) {
          (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
          return (*(uint *)(gen_frame + 0x10));
        }
        goto LAB_00c74255;
      }
    }
  }
  else {
    iVar3 = F_00c7ed57(*((undefined * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))),1);
    if ((iVar3 != 0) && (uVar4 = F_00c7ed69(puVar6,1), uVar4 != 0)) {
      uVar4 = *((uint *)GEN_TOP((iVar5 + 0x18)));
      *puVar6 = uVar4;
      pbVar2 = (*(byte * PTR32 *)&gen_args[3]);
LAB_00c74255: ;
      uVar4 = F_00c73b68(uVar4,pbVar2 + 8);
      *puVar6 = uVar4;
      (*(undefined * PTR32 volatile *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0xfffffffe));
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      return (*(uint *)(gen_frame + 0x10));
    }
  }
                    
  F_00c5aace();
}

/* ref: FUN_00c7433b */
GEN_LIB GEN_NOFRAME uint F_00c7433b(void)
{
  GEN_ENTER(0xc7433bu, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c7433f */
GEN_LIB GEN_NOFRAME unsigned int F_00c7433f(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc7433fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
                    
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = 0xc74347;
  F_00c5aa82();
}

/* ref: ___BuildCatchObject */
GEN_LIB GEN_NOFRAME uint F_00c7434f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc7434fu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0x40, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x30);
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
  (*(undefined4 *)(gen_frame + 0x28)) = 8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = &REFG(undefined, 0x12f6a50);
  (*(uint volatile *)(gen_frame + 0x20)) = 0xc7435b;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ 0x12f6a50;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28);
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x18));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x18)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  iVar4 = (*(int *)&gen_args[1]);
  if ((*(*(uint * PTR32 *)&gen_args[2]) & 0x80000000) == 0) {
    iVar4 = (*(uint * PTR32 *)&gen_args[2])[2] + 0xc + (*(int *)&gen_args[1]);
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0x0));
  uVar3 = F_00c741d0((*(int *)&gen_args[0]),(*(int *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[2]),(*(int *)&gen_args[3]));
  if (uVar3 == 1) {
    F_00c73b68(*((undefined4 *)GEN_TOP((iVar1 + 0x18))),iVar2 + 8);
    uVar3 = F_00c54d98(iVar4,*((undefined4 *)GEN_TOP((iVar2 + 0x18))));
  }
  else {
    uVar3 = uVar3 - 2;
    if (uVar3 == 0) {
      F_00c73b68(*((undefined4 *)GEN_TOP((iVar1 + 0x18))),iVar2 + 8);
      uVar3 = F_00c54d9f(iVar4,*((undefined4 *)GEN_TOP((iVar2 + 0x18))));
    }
  }
  (*(undefined * PTR32 volatile *)(gen_frame + 0x24)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
  return uVar3;
}

/* ref: FUN_00c743d4 */
GEN_LIB GEN_NOFRAME uint F_00c743d4(void)
{
  GEN_ENTER(0xc743d4u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c743d8 */
GEN_LIB GEN_NOFRAME unsigned int F_00c743d8(GEN_P(int in_ebp, unsigned int gen_a0))
{
  GEN_ENTER(0xc743d8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ebp = (int)gen_a0;)
                    
  *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((in_ebp - 0x18))) - 4))) = &REFG(undefined, 0xc743e0);
  F_00c5aa82();
}

/* ref: ___CxxExceptionFilter */
GEN_LIB GEN_NOFRAME int F_00c743e1(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc743e1u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  undefined * p_Var2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  piVar5 = *(int * PTR32 *)param_1;
  if (((param_2 == ((undefined *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)param_2 + 8))) == '\0')) &&
     ((iVar6 = *piVar5, iVar6 == -0x1fbcb0b3 || ((iVar6 == -0x1fbcbcae || ((param_3 & 0x40U) == 0)))
      ))) {
    if ((((iVar6 != -0x1f928c9d) || (piVar5[4] != 3)) ||
        (((iVar6 = piVar5[5], iVar6 != 0x19930520 &&
          ((iVar6 != 0x19930521 && (iVar6 != 0x19930522)))) || (piVar5[7] != 0)))) ||
       (p_Var2 = F_00c5b37a(), (*(void * PTR32 *)(((char *)(p_Var2) + 136))) != ((undefined *)GEN_TOP(0x0)))) {
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
      if ((*(void * PTR32 *)(((char *)(p_Var2) + 136))) == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      p_Var2 = F_00c5b37a();
      piVar5 = (*(void * PTR32 *)(((char *)(p_Var2) + 136)));
    }
    piVar4 = *((int * PTR32 *)GEN_TOP((piVar5[7] + 0xc)));
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = param_2;
    iVar6 = *piVar4;
    (*(uint *)(gen_frame + 0x0)) = param_3 | 0x80000000;
    for (; piVar4 = piVar4 + 1, 0 < iVar6; iVar6 = iVar6 - 1) {
      iVar1 = *piVar4;
      uVar3 = F_00c73944(&(*(uint *)(gen_frame + 0x0)),iVar1,piVar5[7]);
      if (uVar3 != 0) {
        p_Var2 = F_00c5b37a();
        (*(int *)(((char *)(p_Var2) + 144))) = (*(int *)(((char *)(p_Var2) + 144))) + 1;
        if (param_4 == ((undefined *)GEN_TOP(0x0))) {
          return 1;
        }
        F_00c7434f(piVar5,param_4,&(*(uint *)(gen_frame + 0x0)),iVar1);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: CatchIt */
GEN_LIB GEN_NOFRAME uint F_00c7452f(GEN_P(undefined4 in_ebx, unsigned int gen_a0), GEN_P(undefined * in_esi, unsigned int gen_a1), GEN_P(undefined4 * in_edi, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7), GEN_P(undefined * param_9, unsigned int gen_a8), GEN_P(undefined * param_10, unsigned int gen_a9))
{
  GEN_ENTER(0xc7452fu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_ebx = (undefined4)gen_a0;)
  GEN_PIN(undefined * in_esi = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  GEN_PIN(undefined * param_9 = (undefined *)(uintptr_t)gen_a8;)
  GEN_PIN(undefined * param_10 = (undefined *)(uintptr_t)gen_a9;)
  undefined * pvVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  undefined * pEVar3;
  
  if (param_8 != 0) {
    F_00c7434f(param_4,in_esi,in_ebx,param_8);
  }
  pEVar3 = param_10;
  if (param_10 == ((undefined *)GEN_TOP(0x0))) {
    pEVar3 = in_esi;
  }
  F_00c54da6(pEVar3,param_4);
  pEVar3 = in_esi;
  F_00c739f2(in_esi,param_6,param_7,*in_edi);
  *(int *)(in_esi + 8) = in_edi[1] + 1;
  pvVar1 = F_00c74034(param_4 GEN_EDX_ARG,in_esi,param_5,param_7,param_9,0x100,(ulong)pEVar3);
  uVar2 = 0;
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    F_00c54d5f(pvVar1,in_esi);
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FindHandlerForForeignException */
GEN_LIB GEN_NOFRAME unsigned int F_00c7459d(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(undefined * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc7459du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(undefined * param_8 = (undefined *)(uintptr_t)gen_a7;)
  GEN_FRAME_DECL(0x10, 0);
  undefined * in_ebx;
  uint uVar1;
  undefined * pTVar2;
  undefined * p_Var3;
  undefined * pvVar4;
  int iVar5;
  undefined * p_Var6;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    p_Var3 = F_00c5b37a();
    if ((*(void * PTR32 *)(((char *)(p_Var3) + 128))) != ((undefined *)GEN_TOP(0x0))) {
      p_Var3 = F_00c5b37a();
      pvVar4 = ((undefined *)GEN_TOP(F_00c5b18d()));
      if (((((*(void * PTR32 *)(((char *)(p_Var3) + 128))) != pvVar4) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar5 = F_00c54eee(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
         iVar5 != 0)) {
        return;
      }
    }
    if ((*(uint *)(((char *)(param_5) + 12))) == 0) {
                    
      F_00c5aace();
    }
    p_Var6 = F_00c55064(param_5,param_7,param_6,&(*(uint *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x0)));
    if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x0))) {
      (*(int * PTR32 *)(gen_frame + 0x4)) = &(*(int *)(((char *)(p_Var6) + 12)));
      do {
        if (((*(int *)((char *)(((*(int * PTR32 *)(gen_frame + 0x4)) - 3)))) <= param_6) && (param_6 <= (*(int * PTR32 *)(gen_frame + 0x4))[-2])
           ) {
          pTVar2 = (*((undefined * PTR32 *)GEN_TOP((((((char *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x4))[1]))) + (*(*(int * PTR32 *)(gen_frame + 0x4)) - 1) * 16) + 4)))));
          if (((pTVar2 == ((undefined *)GEN_TOP(0x0))) || (*(char *)&(*(void * PTR32 *)(((char *)(pTVar2) + (1) * 8))) == '\0')) &&
             (in_ebx = ((undefined *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x4))[1])) + *(*(int * PTR32 *)(gen_frame + 0x4)) - 1, ((*(uint *)((char *)(in_ebx))) & 0x40) == 0))
          {
            F_00c7452f(in_ebx,param_2,(undefined *)((*(int * PTR32 *)(gen_frame + 0x4)) - 3),param_1,param_3,param_4,
                    param_5,0,param_7,param_8);
          }
        }
        uVar1 = (*(uint *)(gen_frame + 0x8)) + 1;
        (*(uint *)(gen_frame + 0x8)) = uVar1;
        (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x4)) + 5;
      } while (uVar1 < (*(uint *)(gen_frame + 0x0)));
    }
  }
  return;
}

/* ref: FindHandler */
GEN_LIB GEN_NOFRAME unsigned int F_00c746a4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
  GEN_FRAME_DECL(0x38, 8);
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
  
  (*(char *)(gen_frame + 0x33)) = '\0';
  if ((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[4])) + 4))))) < 0x81) {
    iVar6 = (int)(char)(*(undefined * PTR32 *)&gen_args[1])[8];
  }
  else {
    iVar6 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[1]) + 8)));
  }
  (*(int *)(gen_frame + 0x2c)) = iVar6;
  if ((iVar6 < -1) || ((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[4])) + 4))))) <= iVar6)) {
                    
    F_00c5aace();
  }
  pEVar9 = (*(undefined * PTR32 *)&gen_args[0]);
  if (*(int *)(*(undefined * PTR32 *)&gen_args[0]) == -0x1f928c9d) {
    if (((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 3) &&
        (((iVar6 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))), iVar6 == 0x19930520 || (iVar6 == 0x19930521)) ||
         (iVar6 == 0x19930522)))) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == 0)) {
      p_Var3 = F_00c5b37a();
      if ((*(void * PTR32 *)(((char *)(p_Var3) + 136))) == ((undefined *)GEN_TOP(0x0))) {
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
      if ((*(void * PTR32 *)(((char *)(p_Var3) + 148))) != ((undefined *)GEN_TOP(0x0))) {
        p_Var3 = F_00c5b37a();
        piVar8 = (*(void * PTR32 *)(((char *)(p_Var3) + 148)));
        p_Var3 = F_00c5b37a();
        iVar6 = 0;
        (*(void * PTR32 *)(((char *)(p_Var3) + 148))) = ((undefined *)GEN_TOP(0x0));
        bVar1 = F_00c73ebd(piVar8,(*(undefined * PTR32 *)&gen_args[0]));
        pEVar9 = (*(undefined * PTR32 *)&gen_args[0]);
        if (bVar1 == 0) {
          iVar7 = 0;
          if (0 < *piVar8) {
            do {
              bVar2 = F_00c4692b
                                (*((undefined * PTR32 *)GEN_TOP((iVar7 + 4 + piVar8[1]))) GEN_EDX_ARG,
                                 &(*(undefined (*)[8])REFP(0x134bea8)));
              if (bVar2) {
                F_00c73b13((*(undefined * PTR32 *)&gen_args[0]),1);
                (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)((char *)REFP(0x1125c90));
                F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(char * PTR32 *)&(*(undefined * PTR32 *)&gen_args[0]));
                ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
                    
                F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f6a6c));
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
         (p_Var4 = F_00c55064((*(undefined * PTR32 *)&gen_args[4]),(*(int *)&gen_args[6]),(*(int *)(gen_frame + 0x2c)),&(*(uint *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x14))),
         (*(uint *)(gen_frame + 0x24)) < (*(uint *)(gen_frame + 0x14)))) {
        ppHVar10 = &(*(undefined * PTR32 *)(((char *)(p_Var4) + 16)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppHVar10;
        do {
          (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)(ppHVar10 - 4);
          if (((*(int *)((char *)((ppHVar10 - 4)))) <= (*(int *)(gen_frame + 0x2c))) &&
             ((*(int *)(gen_frame + 0x2c)) <= (int)ppHVar10[-3])) {
            (*(undefined * PTR32 *)(gen_frame + 0x28)) = *ppHVar10;
            (*(int *)(gen_frame + 0x1c)) = (int)ppHVar10[-1];
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppHVar10;
            while (0 < (*(int *)(gen_frame + 0x1c))) {
              piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)(pEVar9 + 0x1c) + 0xc)));
              (*(int *)(gen_frame + 0x20)) = *piVar8;
              while (0 < (*(int *)(gen_frame + 0x20))) {
                piVar8 = piVar8 + 1;
                iVar6 = *(int *)(pEVar9 + 0x1c);
                iVar7 = *piVar8;
                (*(int *)(gen_frame + 0x10)) = iVar7;
                uVar5 = F_00c73944((*(undefined * PTR32 *)(gen_frame + 0x28)),iVar7,iVar6);
                if (uVar5 != 0) {
                  (*(char *)(gen_frame + 0x33)) = '\x01';
                  F_00c7452f((*(undefined * PTR32 *)(gen_frame + 0x28)),(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0xc)),pEVar9,(*(undefined * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[4]),(*(int *)(gen_frame + 0x10)),(*(int *)&gen_args[6]),
                          (*(undefined * PTR32 *)&gen_args[7]));
                  pEVar9 = (*(undefined * PTR32 *)&gen_args[0]);
                  ppHVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18));
                  goto LAB_00c74921;
                }
                (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) - 1;
              }
              (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) - 1;
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + (1) * 16;
            }
          }
LAB_00c74921: ;
          uVar5 = (*(uint *)(gen_frame + 0x24)) + 1;
          (*(uint *)(gen_frame + 0x24)) = uVar5;
          ppHVar10 = ppHVar10 + 5;
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = ppHVar10;
          p_Var11 = (*(undefined * PTR32 *)&gen_args[4]);
        } while (uVar5 < (*(uint *)(gen_frame + 0x14)));
      }
      if ((*(uchar *)&gen_args[5]) != '\0') {
        F_00c73b13(pEVar9,1);
      }
      if (((((*(char *)(gen_frame + 0x33)) == '\0') && (0x19930520 < ((*(uint *)((char *)(p_Var11))) & 0x1fffffff))) &&
          ((*(undefined * PTR32 *)(((char *)(p_Var11) + 28))) != ((undefined *)GEN_TOP(0x0)))) &&
         (bVar1 = F_00c73ebd((*(undefined * PTR32 *)(((char *)(p_Var11) + 28))),pEVar9), bVar1 == 0)) {
        F_00c5b37a();
        F_00c5b37a();
        p_Var3 = F_00c5b37a();
        (*(void * PTR32 *)(((char *)(p_Var3) + 136))) = pEVar9;
        p_Var3 = F_00c5b37a();
        (*(void * PTR32 *)(((char *)(p_Var3) + 140))) = (*(undefined * PTR32 *)&gen_args[2]);
        pEVar12 = (*(undefined * PTR32 *)&gen_args[7]);
        if ((*(undefined * PTR32 *)&gen_args[7]) == ((undefined *)GEN_TOP(0x0))) {
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
    F_00c7459d(pEVar9,(*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[4]),(*(int *)(gen_frame + 0x2c)),(*(int *)&gen_args[6]),(*(undefined * PTR32 *)&gen_args[7]));
  }
LAB_00c74a01: ;
  p_Var3 = F_00c5b37a();
  if ((*(void * PTR32 *)(((char *)(p_Var3) + 148))) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
                    
  F_00c5aace();
}

/* ref: FUN_00c74a19 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c74a19(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc74a19u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_00c5442a(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1125c88));
  return (uint)this;
}

/* ref: ___InternalCxxFrameHandler */
GEN_LIB GEN_NOFRAME uint F_00c74a36(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xc74a36u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
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
          ((*(undefined * PTR32 *)(((char *)(param_5) + 28))) != ((undefined *)GEN_TOP(0x0)))))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)(param_1 + 0x10) && (0x19930522 < *(uint *)(param_1 + 0x14))) &&
            (*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 8))) != ((code *)GEN_TOP(0x0)))))) {
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 8))))
                            (param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,
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

/* ref: Constructor */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c74b72(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc74b72u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[4] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return 0;
}

/* ref: Destructor */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c74b91(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc74b91u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    while (*((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 8))), *((int *)GEN_TOP(((int)this + 8))) != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 8))) = **((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      ((code *)*((gen_code32 *)GEN_TOP(((int)this + 4))))(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
    }
  }
  return;
}

/* ref: UnDecorator::getNumberOfDimensions */
GEN_LIB GEN_NOFRAME int F_00c74bb9(void)
{
  GEN_ENTER(0xc74bb9u, 0u, 0u, 0u, 0u);
  int iVar1;
  char cVar2;
  
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar2 != '\0') {
    if (('/' < cVar2) && (cVar2 < ':')) {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      return cVar2 - 0x2f;
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
      iVar1 = cVar2 - 0x41 + iVar1 * 0x10;
      cVar2 = *REFG(char * PTR32, 0x15d75d8);
      goto LAB_00c74c04;
    }
  }
  return 0;
}

/* ref: UnDecorator::getTypeEncoding */
GEN_LIB GEN_NOFRAME int F_00c74c1b(void)
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
          REFG(char * PTR32, 0x15d75d8) = pcVar4 + cVar1 - 0x2d;
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

/* ref: UnDecorator::UScore */
GEN_LIB GEN_NOFRAME char * F_00c751d3(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc751d3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char * pcVar1;
  
  pcVar1 = (&REFG(undefined * PTR32, 0x1126238))[(int)(param_1)];
  if ((~REFG(undefined4, 0x15d75e8) & 1) == 0) {
    pcVar1 = pcVar1 + 2;
  }
  return pcVar1;
}

/* ref: _HeapManager::getMemory */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c751f2(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc751f2u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
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
      puVar2 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,0x1004,1);
      if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar2 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        *puVar2 = 0;
      }
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (*(undefined4 * PTR32 *)(this + 0xc) == ((undefined4 *)GEN_TOP(0x0))) {
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
    pvVar1 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) - uVar3;
LAB_00c75269: ;
    pvVar1 = ((undefined *)GEN_TOP((*(int *)(this + 0xc) + 4 + *(int *)(this + 0x10))));
  }
  return pvVar1;
}

/* ref: FUN_00c7528b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c7528b(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc7528bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: DName::operator|= */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c7538a(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc7538au, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (((char)(*(uint *)(((char *)(this) + 4))) != '\x03') && ('\x01' < *((char *)GEN_TOP((param_1 + 4))))) {
    *(char *)&(*(uint *)(((char *)(this) + 4))) = *((char *)GEN_TOP((param_1 + 4)));
  }
  return this;
}

/* ref: FUN_00c753a9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c753a9(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc753a9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c753d9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c753d9(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc753d9u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11263c8));
  *(undefined1 *)(in_ecx + 1) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c753f0 */
GEN_LIB GEN_NOFRAME uint F_00c753f0(void)
{
  GEN_ENTER(0xc753f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00c753f4 */
GEN_LIB GEN_NOFRAME undefined1 F_00c753f4(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc753f4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((undefined1 *)GEN_TOP((param_1 + 4)));
}

/* ref: Global::?getString@charNode@@UBEPADPAD0@Z */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c753f8(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc753f8u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  undefined1 * puVar1;
  
  puVar1 = param_2;
  if (param_2 < param_3) {
    *param_2 = *((undefined1 *)GEN_TOP((in_ecx + 4)));
    puVar1 = param_2 + 1;
  }
  return (uint)puVar1;
}

/* ref: pDNameNode::pDNameNode */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c7540f(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc7540fu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11263d4));
  iVar1 = param_1;
  if ((param_1 != 0) && ((*((char *)GEN_TOP((param_1 + 4))) == '\x02' || (*((char *)GEN_TOP((param_1 + 4))) == '\x03'))))
  {
    iVar1 = 0;
  }
  *(int *)(this + 4) = iVar1;
  return (uint)this;
}

/* ref: Global::?length@pDNameNode@@UBEHXZ */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75439(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc75439u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  undefined4 * puVar1;
  uint uVar2;
  
  if ((*((int * PTR32 *)GEN_TOP(((int)this + 4))) != ((int *)GEN_TOP(0x0))) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 4))))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD);
    return uVar2;
  }
  return 0;
}

/* ref: Global::?getLastChar@pDNameNode@@UBEDXZ */
GEN_LIB GEN_NOFRAME undefined4 F_00c7544f(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7544fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  undefined4 uVar2;
  
  if ((*((int * PTR32 *)GEN_TOP((param_1 + 4))) != ((int *)GEN_TOP(0x0))) &&
     (piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP((param_1 + 4))))), piVar1 != ((int *)GEN_TOP(0x0)))) {
                    
                    
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))();
    return uVar2;
  }
  return 0;
}

/* ref: pDNameNode::getString */
GEN_LIB GEN_NOFRAME char * GEN_THISCALL F_00c75466(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xc75466u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  char * pcVar2;
  
  if ((*(int * PTR32 *)(this + 4) != ((int *)GEN_TOP(0x0))) &&
     (piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 4))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD,param_1,param_2)));
    return pcVar2;
  }
  return param_1;
}

/* ref: DNameStatusNode::DNameStatusNode */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75487(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75487u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)(this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11263e0));
  *(uint *)(this + 8) = (-(uint)(param_1 != 1) & 0xfffffffc) + 4;
  return (uint)this;
}

/* ref: FUN_00c754ac */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c754ac(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc754acu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Global::?getLastChar@DNameStatusNode@@UBEDXZ */
GEN_LIB GEN_NOFRAME byte F_00c754b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc754b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (*((int *)GEN_TOP((param_1 + 4))) != 1) - 1U & 0x20;
}

/* ref: DNameStatusNode::make */
GEN_LIB GEN_NOFRAME undefined * F_00c754bc(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc754bcu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((*(uint *)&REFG(undefined, 0x15d7624) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7624) = *(uint *)&REFG(undefined, 0x15d7624) | 1;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x15d75f4) = (*(undefined * PTR32 (*)[3])REFP(0x11263e0));
    *(undefined4 *)&REFG(undefined, 0x15d75f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15d75fc) = 0;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x15d7600) = (*(undefined * PTR32 (*)[3])REFP(0x11263e0));
    *(undefined4 *)&REFG(undefined, 0x15d7604) = 1;
    *(undefined4 *)&REFG(undefined, 0x15d7608) = 4;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x15d760c) = (*(undefined * PTR32 (*)[3])REFP(0x11263e0));
    *(undefined4 *)&REFG(undefined, 0x15d7610) = 2;
    *(undefined4 *)&REFG(undefined, 0x15d7614) = 0;
    *(undefined * PTR32 * PTR32 *)&REFG(undefined * PTR32 * PTR32, 0x15d7618) = (*(undefined * PTR32 (*)[3])REFP(0x11263e0));
    *(undefined4 *)&REFG(undefined, 0x15d761c) = 3;
    *(undefined4 *)&REFG(undefined, 0x15d7620) = 0;
  }
  if (param_1 < 4) {
    return (undefined *)(&REFG(undefined * PTR32 * PTR32, 0x15d75f4) + param_1 * 0xc);
  }
  return (undefined *)&REFG(undefined * PTR32 * PTR32, 0x15d7618);
}

/* ref: pairNode::pairNode */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75542(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc75542u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  in_ecx[3] = 0xffffffff;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11263ec));
  in_ecx[2] = param_3;
  return (uint)in_ecx;
}

/* ref: Global::?length@pairNode@@UBEHXZ */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75563(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc75563u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) < 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))))))(*((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG);
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2 + uVar3;
  }
  return *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: Global::?getLastChar@pairNode@@UBEDXZ */
GEN_LIB GEN_NOFRAME unsigned int F_00c7558e(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7558eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  
  cVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 4))))();
  if (cVar1 == '\0') {
                    
                    
    return (uint)(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 4))))());
  }
  return 0;
}

/* ref: pairNode::getString */
GEN_LIB GEN_NOFRAME char * GEN_THISCALL F_00c755aa(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc755aau, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1,param_2)));
  if (pcVar1 < param_2) {
    pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 8))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,pcVar1,param_2)));
  }
  return pcVar1;
}

/* ref: und_strncmp */
GEN_LIB GEN_NOFRAME uint GEN_FASTCALL F_00c755fa(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc755fau, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    param_3 = param_3 - 1;
    if (((param_3 == 0) || (*param_1 == 0)) || (*param_1 != *param_2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

/* ref: UnDecorator::UnDecorator */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c75624(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xc75624u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  REFG(undefined4, 0x15d75dc) = param_2;
  REFG(undefined4, 0x15d75d8) = param_2;
  if (param_1 == 0) {
    REFG(int, 0x15d75e0) = 0;
    REFG(undefined4, 0x15d75e4) = 0;
  }
  else {
    REFG(undefined4, 0x15d75e4) = param_3;
    REFG(int, 0x15d75e0) = param_1;
  }
  REFG(undefined4, 0x15d75d0) = this + 0x2c;
  REFG(undefined4, 0x15d75e8) = param_5;
  REFG(undefined4, 0x15d75cc) = this;
  REFG(undefined4, 0x15d75ec) = param_4;
  REFG(undefined1, 0x15d75f0) = 0;
  return 0;
}

/* ref: UnDecorator::getDataIndirectType_00c75693 */
GEN_LIB GEN_NOFRAME uint F_00c75693(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc75693u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffff0000;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffff0000;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_00c79512(param_1,&(*(undefined4 *)(gen_frame + 0x0)),&REFG(undefined1, 0x107fc63),&(*(undefined4 *)(gen_frame + 0x8)),0);
  return param_1;
}

/* ref: UnDecorator::getThisType */
GEN_LIB GEN_NOFRAME uint F_00c756cc(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc756ccu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) & 0xffff0000;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffff0000;
  F_00c79512(param_1,&(*(undefined4 *)(gen_frame + 0x0)),&REFG(undefined1, 0x107fc63),&(*(undefined4 *)(gen_frame + 0x8)),1);
  return param_1;
}

/* ref: operator_new */
GEN_LIB GEN_NOFRAME undefined * F_00c75706(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc75706u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,param_1,param_3);
  return pvVar1;
}

/* ref: getStringHelper */
GEN_LIB GEN_NOFRAME char * F_00c7571d(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc7571du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return param_1 + iVar3;
}

/* ref: DName::DName_00c75754 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75754(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75754u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  undefined * pDVar1;
  
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  }
  else {
    this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_FWD,8,0);
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      pDVar1 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      pDVar1 = ((undefined *)GEN_TOP(F_00c7540f(this_00 GEN_EDX_ARG,param_1)));
    }
    (*(undefined * PTR32 *)((char *)(this))) = pDVar1;
    *(byte *)&(*(uint *)(((char *)(this) + 4))) = (pDVar1 != ((undefined *)GEN_TOP(0x0))) - 1U & 3;
  }
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  return this;
}

/* ref: DName::DName_00c757a7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c757a7(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc757a7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined * pDVar2;
  
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  iVar1 = param_1;
  if ((param_1 != 2) && (param_1 != 3)) {
    iVar1 = 0;
  }
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  *(char *)&(*(uint *)(((char *)(this) + 4))) = (char)iVar1;
  if (param_1 == 1) {
    pDVar2 = F_00c754bc(1);
    (*(undefined * PTR32 *)((char *)(this))) = (undefined *)pDVar2;
    if (pDVar2 == ((undefined *)GEN_TOP(0x0))) {
      *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
    }
  }
  return (uint)this;
}

/* ref: DName::getString */
GEN_LIB GEN_NOFRAME char * GEN_THISCALL F_00c757ec(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc757ecu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * pDVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  
  pDVar1 = (*(undefined * PTR32 *)((char *)(this)));
  pcVar3 = param_1;
  if (pDVar1 == ((undefined *)GEN_TOP(0x0))) {
    if (param_1 != ((char *)GEN_TOP(0x0))) {
      *param_1 = '\0';
    }
  }
  else {
    uVar2 = param_2;
    if (param_1 == ((char *)GEN_TOP(0x0))) {
      uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)pDVar1)))(pDVar1);
      uVar2 = uVar2 + 1;
      pcVar3 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,uVar2,0);
      if (pcVar3 == ((char *)GEN_TOP(0x0))) {
        return ((char *)GEN_TOP(0x0));
      }
    }
    pDVar1 = (*(undefined * PTR32 *)((char *)(this)));
    pcVar4 = pcVar3;
    if (pDVar1 != ((undefined *)GEN_TOP(0x0))) {
      pcVar4 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pDVar1 + 8))))(pDVar1 GEN_EDX_ARG,pcVar3,pcVar3 + (uVar2 - 1))));
    }
    *pcVar4 = '\0';
  }
  return pcVar3;
}

/* ref: DName::append */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c7584b(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc7584bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pDVar1;
  undefined * pDVar2;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    pDVar2 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_FWD,0x10,0);
    if (pDVar2 == ((undefined *)GEN_TOP(0x0))) {
      pDVar2 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      pDVar1 = (*(undefined * PTR32 *)((char *)(this)));
      *(undefined4 *)(pDVar2 + 0xc) = 0xffffffff;
      *(undefined * PTR32 * PTR32 *)pDVar2 = (*(undefined * PTR32 (*)[3])REFP(0x11263ec));
      *(undefined * PTR32 *)(pDVar2 + 4) = pDVar1;
      *(undefined * PTR32 *)(pDVar2 + 8) = param_1;
    }
    (*(undefined * PTR32 *)((char *)(this))) = pDVar2;
    if (pDVar2 != ((undefined *)GEN_TOP(0x0))) {
      return;
    }
  }
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
  return;
}

/* ref: DName::operator=_00c75893 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75893(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75893u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  undefined * pDVar1;
  
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_FWD,8,0);
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      pDVar1 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      pDVar1 = ((undefined *)GEN_TOP(F_00c7540f(this_00 GEN_EDX_ARG,param_1)));
    }
    (*(undefined * PTR32 *)((char *)(this))) = pDVar1;
    if (pDVar1 != ((undefined *)GEN_TOP(0x0))) {
      return this;
    }
  }
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
  return this;
}

/* ref: DName::operator=_00c758e0 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c758e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc758e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pDVar1;
  
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  *(char *)&(*(uint *)(((char *)(this) + 4))) = (char)param_1;
  if (param_1 == 1) {
    pDVar1 = F_00c754bc(1);
    (*(undefined * PTR32 *)((char *)(this))) = (undefined *)pDVar1;
    if (pDVar1 == ((undefined *)GEN_TOP(0x0))) {
      *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
    }
  }
  else {
    (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  }
  return this;
}

/* ref: Replicator::operator+= */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75917(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75917u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if ((*(int *)this != 9) && ((*(undefined * PTR32 *)((char *)(param_1))) != ((undefined *)GEN_TOP(0x0)))) {
    puVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_FWD,8,0);
    if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar1 = (*(undefined * PTR32 *)((char *)(param_1)));
      puVar1[1] = (*(uint *)(((char *)(param_1) + 4)));
    }
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *(int *)this = *(int *)this + 1;
      *(undefined4 * PTR32 *)(this + *(int *)((int)(uintptr_t)this) * 4 + 4) = puVar1;
    }
  }
  return this;
}

/* ref: Replicator::operator[] */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75961(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75961u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined4 * puVar1;
  
  if (param_2 < 10) {
    if ((*(int *)this == -1) || (*(int *)this < (int)param_2)) {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    }
    else {
      puVar1 = *(undefined4 * PTR32 *)(this + param_2 * 4 + 4);
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar1));
      (*(uint *)(((char *)(param_1) + 4))) = puVar1[1];
    }
  }
  else {
    F_00c757a7(param_1 GEN_EDX_FWD,3);
  }
  return (uint)param_1;
}

/* ref: pcharNode::pcharNode */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c759b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc759b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 * puVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11263f8));
  if ((param_2 == 0) || (param_1 == ((char *)GEN_TOP(0x0)))) {
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    puVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_FWD,param_2,0);
    *(undefined1 * PTR32 *)(this + 4) = puVar1;
    *(int *)(this + 8) = param_2;
    if ((puVar1 != ((undefined1 *)GEN_TOP(0x0))) && (param_2 != 0)) {
      iVar2 = (int)param_1 - (int)puVar1;
      iVar3 = param_2;
      do {
        *puVar1 = puVar1[iVar2];
        puVar1 = puVar1 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  return this;
}

/* ref: FUN_00c75a07 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75a07(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xc75a07u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Global::?getLastChar@pcharNode@@UBEDXZ */
GEN_LIB GEN_NOFRAME undefined4 F_00c75a0b(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc75a0bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) - 1 + iVar1))));
  }
  return 0;
}

/* ref: pcharNode::getString */
GEN_LIB GEN_NOFRAME char * GEN_THISCALL F_00c75a1d(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75a1du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  char * pcVar1;
  
  pcVar1 = F_00c7571d(param_1,param_2,*(char * PTR32 *)(this + 4),*(int *)(this + 8));
  return pcVar1;
}

/* ref: DNameStatusNode::getString */
GEN_LIB GEN_NOFRAME char * GEN_THISCALL F_00c75a3a(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75a3au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  char * pcVar1;
  
  pcVar1 = param_1;
  if (*(int *)(this + 4) == 1) {
    pcVar1 = F_00c7571d(param_1,param_2,((char *)REFP(0x1126404)),4);
  }
  return pcVar1;
}

/* ref: UnDecorator::getReturnType */
GEN_LIB GEN_NOFRAME uint F_00c75a63(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc75a63u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  if (*REFG(char * PTR32, 0x15d75d8) == '@') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c75754(param_1 GEN_EDX_ARG,param_2);
  }
  else {
    F_00c7a3ef(param_1,param_2);
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getStorageConvention */
GEN_LIB GEN_NOFRAME uint F_00c75a94(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc75a94u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  F_00c75693(param_1);
  return param_1;
}

/* ref: DName::operator+=_00c75aa7 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75aa7(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75aa7u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * pDVar1;
  
  if ((char)(*(uint *)(((char *)(this) + 4))) < '\x02') {
    if ((((*(undefined * PTR32 *)((char *)(this))) == ((undefined *)GEN_TOP(0x0))) || (param_1 == 2)) || (param_1 == 3)) {
      F_00c758e0(this GEN_EDX_FWD,param_1);
    }
    else if (param_1 != 0) {
      pDVar1 = F_00c754bc(param_1);
      F_00c7584b(this GEN_EDX_ARG,(undefined *)pDVar1);
    }
  }
  return this;
}

/* ref: DName::doPchar */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00c75ae9(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75ae9u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined1 DVar1;
  undefined * this_00;
  undefined * pDVar2;
  
  if ((*(undefined * PTR32 *)((char *)(this))) != ((undefined *)GEN_TOP(0x0))) {
    (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
    (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
    return;
  }
  if ((param_1 == ((char *)GEN_TOP(0x0))) || (param_2 == 0)) {
    *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 2;
    return;
  }
  if (param_2 == 0) goto LAB_00c75b5b;
  if (param_2 == 1) {
    pDVar2 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_FWD,8,0);
    if (pDVar2 == ((undefined *)GEN_TOP(0x0))) goto LAB_00c75b53;
    DVar1 = (undefined1)*param_1;
    *(undefined * PTR32 * PTR32 *)pDVar2 = (*(undefined * PTR32 (*)[3])REFP(0x11263c8));
    pDVar2[4] = DVar1;
  }
  else {
    this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,0xc,0);
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
LAB_00c75b53: ;
      pDVar2 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      pDVar2 = (undefined *)F_00c759b0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
  }
  (*(undefined * PTR32 *)((char *)(this))) = pDVar2;
  if (pDVar2 != ((undefined *)GEN_TOP(0x0))) {
    return;
  }
LAB_00c75b5b: ;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 3;
  return;
}

/* ref: DName::DName_00c75b6c */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75b6c(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc75b6cu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  if ((*(char *)&gen_args[0]) != '\0') {
    F_00c75ae9(this GEN_EDX_FWD,&(*(char *)&gen_args[0]),1);
  }
  return this;
}

/* ref: DName::DName_00c75b99 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75b99(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75b99u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  if ((param_1 != ((char *)GEN_TOP(0x0))) && (iVar1 = 0, *param_1 != '\0')) {
    do {
      iVar1 = iVar1 + 1;
    } while (param_1[iVar1] != '\0');
    if (iVar1 != 0) {
      F_00c75ae9(this GEN_EDX_FWD,param_1,iVar1);
    }
  }
  return this;
}

/* ref: DName::DName_00c75bd6 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75bd6(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * PTR32 * param_1, unsigned int gen_a1), GEN_P(char param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75bd6u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * PTR32 * param_1 = (char * PTR32 *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_2 = (char)gen_a2;)
  byte bVar1;
  char cVar2;
  char * pcVar3;
  byte * pbVar4;
  int iVar5;
  
  iVar5 = 0;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  pcVar3 = *param_1;
  if (pcVar3 == ((char *)GEN_TOP(0x0))) {
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
    F_00c75ae9(this GEN_EDX_FWD,pcVar3,iVar5);
    cVar2 = **param_1;
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
      if (cVar2 == param_2) {
        return this;
      }
      (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
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
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75c95(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75c95u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x24, 12);
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  byte * pbVar4;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  ((byte *)(gen_frame + 0x0))[0x1c] = (char)uVar3;
  ((byte *)(gen_frame + 0x0))[0x1d] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0x0))[0x1e] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x1f] = (char)(uVar3 >> 0x18);
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  pbVar4 = ((byte *)(gen_frame + 0x0)) + 0x18;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  uVar2 = CONCAT44(param_2,param_1);
  do {
    pbVar4 = pbVar4 - 1;
    uVar1 = uVar2 / 10;
    ((byte *)(gen_frame + 0x0))[0] = 0;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
    *pbVar4 = (char)(uVar2 % 10) + 0x30;
    uVar2 = uVar1;
  } while (uVar1 != 0);
  F_00c75ae9(this GEN_EDX_FWD,(char *)pbVar4,(int)(((byte *)(gen_frame + 0x0)) + (0x18 - (int)pbVar4)));
  return (uint)this;
}

/* ref: DName::DName_00c75d03 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75d03(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75d03u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL(0x28, 8);
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  ((byte *)(gen_frame + 0x0))[0x20] = (char)uVar3;
  ((byte *)(gen_frame + 0x0))[0x21] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0x0))[0x22] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0x0))[0x23] = (char)(uVar3 >> 0x18);
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  iVar4 = param_2;
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    ((byte *)(gen_frame + 0x0))[7] = 1;
    iVar4 = -(param_2 + (uint)bVar7);
  }
  pbVar6 = ((byte *)(gen_frame + 0x0)) + 0x1d;
  uVar2 = CONCAT44(iVar4,param_1);
  do {
    pbVar5 = pbVar6;
    pbVar6 = pbVar5 - 1;
    uVar1 = uVar2 / 10;
    *pbVar6 = (char)(uVar2 % 10) + 0x30;
    ((byte *)(gen_frame + 0x0))[0] = 0;
    ((byte *)(gen_frame + 0x0))[1] = 0;
    ((byte *)(gen_frame + 0x0))[2] = 0;
    ((byte *)(gen_frame + 0x0))[3] = 0;
    uVar2 = uVar1;
  } while (uVar1 != 0);
  if (((byte *)(gen_frame + 0x0))[7] != 0) {
    pbVar6 = pbVar5 - 2;
    *pbVar6 = 0x2d;
  }
  F_00c75ae9(this GEN_EDX_FWD,(char *)pbVar6,(int)(((byte *)(gen_frame + 0x0)) + (0x1d - (int)pbVar6)));
  return (uint)this;
}

/* ref: DName::operator+_00c75d9e */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75d9e(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75d9eu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c75aa7(param_1 GEN_EDX_FWD,param_2);
  return (uint)param_1;
}

/* ref: DName::operator+=_00c75dc2 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75dc2(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75dc2u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * pDVar1;
  
  if ((char)(*(uint *)(((char *)(this) + 4))) < '\x02') {
    pDVar1 = (*(undefined * PTR32 *)((char *)(param_1)));
    if (pDVar1 == ((undefined *)GEN_TOP(0x0))) {
      F_00c75aa7(this GEN_EDX_FWD,(int)(char)(*(uint *)(((char *)(param_1) + 4))));
    }
    else if ((*(undefined * PTR32 *)((char *)(this))) == ((undefined *)GEN_TOP(0x0))) {
      (*(undefined * PTR32 *)((char *)(this))) = pDVar1;
      (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(param_1) + 4)));
    }
    else {
      F_00c7584b(this GEN_EDX_ARG,pDVar1);
    }
  }
  return this;
}

/* ref: DName::operator+=_00c75e05 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75e05(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75e05u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  char cVar1;
  undefined * this_00;
  undefined * pDVar2;
  
  if (((char)(*(uint *)(((char *)(this) + 4))) < '\x02') && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    if ((*(undefined * PTR32 *)((char *)(this))) == ((undefined *)GEN_TOP(0x0))) {
      F_00c75893(this GEN_EDX_FWD,param_1);
    }
    else {
      cVar1 = (char)(*(uint *)(((char *)(param_1) + 4)));
      if ((cVar1 == '\0') || (cVar1 == '\x01')) {
        this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,8,0);
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          pDVar2 = ((undefined *)GEN_TOP(0x0));
        }
        else {
          pDVar2 = ((undefined *)GEN_TOP(F_00c7540f(this_00 GEN_EDX_ARG,param_1)));
        }
        F_00c7584b(this GEN_EDX_ARG,pDVar2);
      }
      else {
        F_00c75aa7(this GEN_EDX_ARG,(int)cVar1);
      }
    }
  }
  return this;
}

/* ref: DName::operator=_00c75e6c */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75e6c(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc75e6cu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  if ((*(char *)&gen_args[0]) != '\0') {
    F_00c75ae9(this GEN_EDX_FWD,&(*(char *)&gen_args[0]),1);
  }
  return this;
}

/* ref: DName::operator=_00c75e99 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c75e99(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc75e99u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  
  *(undefined1 *)&(*(uint *)(((char *)(this) + 4))) = 0;
  (*(uint *)(((char *)(this) + 4))) = (*(uint *)(((char *)(this) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(this))) = ((undefined *)GEN_TOP(0x0));
  iVar2 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = iVar2 + 1;
    cVar1 = param_1[iVar2];
  }
  F_00c75ae9(this GEN_EDX_FWD,param_1,iVar2);
  return this;
}

/* ref: UnDecorator::getCallingConvention */
GEN_LIB GEN_NOFRAME uint F_00c75ece(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc75eceu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  uint uVar1;
  char * pcVar2;
  uint in_ECX = 0;
  int TVar3;
  
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c757a7(param_1 GEN_EDX_ARG,1);
    return (uint)param_1;
  }
  uVar1 = (int)*REFG(char * PTR32, 0x15d75d8) - 0x41;
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if (0xe < uVar1) {
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = in_ECX & 0xffff0002 | 2;
  if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) != 0) {
    uVar1 = uVar1 & 0xfffffffe;
    if (uVar1 == 0) {
      TVar3 = 1;
    }
    else if (uVar1 == 2) {
      TVar3 = 2;
    }
    else if (uVar1 == 4) {
      TVar3 = 4;
    }
    else if (uVar1 == 6) {
      TVar3 = 3;
    }
    else if (uVar1 == 8) {
      TVar3 = 5;
    }
    else if (uVar1 == 0xc) {
      TVar3 = 6;
    }
    else {
      if (uVar1 != 0xe) goto LAB_00c75f64;
      TVar3 = 7;
    }
    pcVar2 = F_00c751d3(TVar3);
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar2);
  }
LAB_00c75f64: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0)))));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4)));
  return (uint)param_1;
}

/* ref: UnDecorator::getVCallThunkType */
GEN_LIB GEN_NOFRAME uint F_00c75f96(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc75f96u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c757a7(param_1 GEN_EDX_ARG,1);
  }
  else {
    if (*REFG(char * PTR32, 0x15d75d8) != 'A') {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c75b99(param_1 GEN_EDX_ARG,((char *)REFP(0x112640c)));
  }
  return (uint)param_1;
}

/* ref: DName::operator+_00c75fe1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c75fe1(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc75fe1u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c75dc2(param_1 GEN_EDX_FWD,param_2);
  return (uint)param_1;
}

/* ref: DName::operator+_00c76005 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c76005(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc76005u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c75e05(param_1 GEN_EDX_FWD,param_2);
  return (uint)param_1;
}

/* ref: DName::operator+=_00c76029 */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c76029(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc76029u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_1 = (char)gen_a1;)
  undefined * pDVar1;
  
  if (((char)(*(uint *)(((char *)(this) + 4))) < '\x02') && (param_1 != '\0')) {
    if ((*(undefined * PTR32 *)((char *)(this))) == ((undefined *)GEN_TOP(0x0))) {
      F_00c75e6c(this GEN_EDX_FWD,param_1);
    }
    else {
      pDVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,8,0);
      if (pDVar1 == ((undefined *)GEN_TOP(0x0))) {
        pDVar1 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        *(undefined * PTR32 * PTR32 *)pDVar1 = (*(undefined * PTR32 (*)[3])REFP(0x11263c8));
        pDVar1[4] = (undefined1)param_1;
      }
      F_00c7584b(this GEN_EDX_ARG,pDVar1);
    }
  }
  return this;
}

/* ref: DName::operator+=_00c7607b */
GEN_LIB GEN_NOFRAME undefined * GEN_THISCALL F_00c7607b(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xc7607bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  undefined * this_00;
  undefined * pDVar2;
  int iVar3;
  
  if ((((char)(*(uint *)(((char *)(this) + 4))) < '\x02') && (param_1 != ((char *)GEN_TOP(0x0)))) && (*param_1 != '\0')) {
    if ((*(undefined * PTR32 *)((char *)(this))) == ((undefined *)GEN_TOP(0x0))) {
      F_00c75e99(this GEN_EDX_FWD,param_1);
    }
    else {
      this_00 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,0xc,0);
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        pDVar2 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        iVar3 = 0;
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          iVar3 = iVar3 + 1;
          cVar1 = param_1[iVar3];
        }
        pDVar2 = (undefined *)F_00c759b0(this_00 GEN_EDX_ARG,param_1,iVar3);
      }
      F_00c7584b(this GEN_EDX_ARG,pDVar2);
    }
  }
  return this;
}

/* ref: UnDecorator::getArgumentList */
GEN_LIB GEN_NOFRAME uint F_00c760df(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc760dfu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x20, 0);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pDVar4;
  
  *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 0;
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
  (*(int *)(gen_frame + 0x18)) = 1;
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
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
      F_00c76029(param_1 GEN_EDX_ARG,',');
    }
    else {
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    pcVar2 = REFG(char * PTR32, 0x15d75d8);
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') break;
    uVar3 = (int)*REFG(char * PTR32, 0x15d75d8) - 0x30;
    if (uVar3 < 10) {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      pDVar4 = ((undefined *)GEN_TOP(F_00c75961(REFG(undefined4, 0x15d75cc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3)));
      F_00c75dc2(param_1 GEN_EDX_ARG,pDVar4);
    }
    else {
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) & 0xffff0000;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      F_00c7a23e(&(*(undefined8 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x10)));
      if ((1 < (int)REFG(char * PTR32, 0x15d75d8) - (int)pcVar2) && (*((int *)GEN_TOP(REFG(undefined4, 0x15d75cc))) != 9)) {
        F_00c75917(REFG(undefined4, 0x15d75cc) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x8)));
      }
      F_00c75dc2(param_1 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x8)));
      if (REFG(char * PTR32, 0x15d75d8) == pcVar2) {
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
        *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
        (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
      }
    }
    cVar1 = (char)(*(uint *)(((char *)(param_1) + 4)));
  }
  F_00c75aa7(param_1 GEN_EDX_ARG,1);
  return (uint)param_1;
}

/* ref: UnDecorator::getVdispMapType */
GEN_LIB GEN_NOFRAME uint F_00c761e5(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc761e5u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc, 4);
  undefined * pDVar1;
  
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*param_2));
  (*(uint *)(((char *)(param_1) + 4))) = param_2[1];
  F_00c7607b(param_1 GEN_EDX_ARG,((char *)REFP(0x1126414)));
  pDVar1 = ((undefined *)GEN_TOP(F_00c78e7c(((undefined1 *)(gen_frame + 0x0)))));
  F_00c75dc2(param_1 GEN_EDX_ARG,pDVar1);
  F_00c76029(param_1 GEN_EDX_ARG,'}');
  if (*REFG(char * PTR32, 0x15d75d8) == '@') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  }
  return (uint)param_1;
}

/* ref: operator+_00c76239 */
GEN_LIB GEN_NOFRAME uint F_00c76239(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc76239u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  undefined * this;
  uint uVar1;
  
  uVar1 = param_1;
  this = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,(char)param_2);
  F_00c75fe1(this GEN_EDX_ARG,uVar1,param_3);
  return param_1;
}

/* ref: operator+_00c7625d */
GEN_LIB GEN_NOFRAME uint F_00c7625d(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7625du, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  undefined * this;
  uint uVar1;
  
  uVar1 = param_1;
  this = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2)));
  F_00c75fe1(this GEN_EDX_ARG,uVar1,param_3);
  return param_1;
}

/* ref: operator+_00c76281 */
GEN_LIB GEN_NOFRAME uint F_00c76281(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc76281u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  undefined * this;
  uint uVar1;
  
  uVar1 = param_1;
  this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  F_00c75fe1(this GEN_EDX_ARG,uVar1,param_3);
  return param_1;
}

/* ref: DName::operator+_00c762a5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c762a5(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc762a5u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c76029(param_1 GEN_EDX_FWD,(char)param_2);
  return (uint)param_1;
}

/* ref: DName::operator+_00c762c9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00c762c9(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xc762c9u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)(this)));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(this) + 4)));
  F_00c7607b(param_1 GEN_EDX_FWD,param_2);
  return (uint)param_1;
}

/* ref: UnDecorator::getDimension */
GEN_LIB GEN_NOFRAME uint F_00c762ed(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc762edu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  pcVar7 = ((char *)GEN_TOP(0x0));
  if (*REFG(char * PTR32, 0x15d75d8) == 'Q') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    pcVar7 = ((char *)REFP(0x112641c));
  }
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar2 == '\0') {
    F_00c757a7(param_1 GEN_EDX_ARG,1);
    return (uint)param_1;
  }
  if (('/' < cVar2) && (cVar2 < ':')) {
    iVar3 = *REFG(char * PTR32, 0x15d75d8) - 0x2f;
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (pcVar7 == ((char *)GEN_TOP(0x0))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00c75c95(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar3,iVar3 >> 0x1f)));
    }
    else {
      uVar4 = F_00c75c95(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar3,iVar3 >> 0x1f);
      puVar5 = ((undefined4 *)GEN_TOP(F_00c76281(((undefined1 *)(gen_frame + 0x8)),pcVar7,uVar4)));
    }
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar5));
    (*(uint *)(((char *)(param_1) + 4))) = puVar5[1];
    return (uint)param_1;
  }
  uVar4 = 0;
  iVar3 = 0;
  while (cVar2 != '@') {
    if (cVar2 == '\0') {
      F_00c757a7(param_1 GEN_EDX_ARG,1);
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
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  if (param_2 == '\0') {
    if (pcVar7 == ((char *)GEN_TOP(0x0))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00c75c95(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar4,iVar3)));
      goto LAB_00c7641f;
    }
    uVar4 = F_00c75c95(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4,iVar3);
  }
  else {
    if (pcVar7 == ((char *)GEN_TOP(0x0))) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00c75d03(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar4,iVar3)));
      goto LAB_00c7641f;
    }
    uVar4 = F_00c75d03(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4,iVar3);
  }
  puVar5 = ((undefined4 *)GEN_TOP(F_00c76281(((undefined1 *)(gen_frame + 0x8)),pcVar7,uVar4)));
LAB_00c7641f: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar5));
  (*(uint *)(((char *)(param_1) + 4))) = puVar5[1];
  return (uint)param_1;
}

/* ref: UnDecorator::getEnumType */
GEN_LIB GEN_NOFRAME uint F_00c76433(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc76433u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x1c, 4);
  char cVar1;
  undefined * this;
  undefined * pDVar2;
  uint uVar3;
  undefined * PTR32 * ppDVar4;
  char * pcVar5;
  undefined * pDVar6;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) & 0xffff0000;
  if (cVar1 == '\0') {
    F_00c757a7(param_1 GEN_EDX_ARG,1);
    return (uint)param_1;
  }
  switch((unsigned int)(uintptr_t)(cVar1)) {
  case '0': ;
  case '1': ;
    pcVar5 = ((char *)REFP(0x1126460));
    break;
  case '2': ;
  case '3': ;
    pcVar5 = ((char *)REFP(0x1126458));
    break;
  case '4': ;
    goto switchD_00c76460_caseD_34;
  case '5': ;
    pcVar5 = ((char *)REFP(0x1126450));
    break;
  case '6': ;
  case '7': ;
    pcVar5 = ((char *)REFP(0x1126448));
    break;
  default: ;
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  F_00c75e99(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,pcVar5);
switchD_00c76460_caseD_34: ;
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) ||
     (pDVar2 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))), uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))), cVar1 == '7')) {
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x10));
    ppDVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x112643c)));
    F_00c75fe1(this GEN_EDX_ARG,ppDVar4,pDVar6);
    pDVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    uVar3 = (*(uint *)(gen_frame + 0xc));
  }
  (*(undefined * PTR32 *)((char *)(param_1))) = pDVar2;
  (*(uint *)(((char *)(param_1) + 4))) = uVar3;
  return (uint)param_1;
}

/* ref: UnDecorator::getArgumentTypes */
GEN_LIB GEN_NOFRAME uint F_00c7651f(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7651fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  char cVar1;
  char * pcVar2;
  undefined4 * puVar3;
  
  if (*REFG(char * PTR32, 0x15d75d8) == 'X') {
    pcVar2 = ((char *)REFP(0x1126468));
  }
  else {
    if (*REFG(char * PTR32, 0x15d75d8) != 'Z') {
      F_00c760df(&(*(undefined8 *)(gen_frame + 0x8)));
      if (((char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) == '\0') && (cVar1 = *REFG(char * PTR32, 0x15d75d8), cVar1 != '\0')) {
        if (cVar1 != '@') {
          if (cVar1 == 'Z') {
            REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
            pcVar2 = ((char *)REFP(0x112648c));
            if ((~(REFG(undefined4, 0x15d75e8) >> 0x12) & 1) == 0) {
              pcVar2 = ((char *)REFP(0x1126480));
            }
            puVar3 = ((undefined4 *)GEN_TOP(F_00c762c9(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),pcVar2)));
            (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar3));
            (*(uint *)(((char *)(param_1) + 4))) = puVar3[1];
            return (uint)param_1;
          }
          (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
          (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
          *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
          return (uint)param_1;
        }
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      }
      (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      return (uint)param_1;
    }
    pcVar2 = ((char *)REFP(0x112647c));
    if ((~(REFG(undefined4, 0x15d75e8) >> 0x12) & 1) == 0) {
      pcVar2 = ((char *)REFP(0x1126470));
    }
  }
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  F_00c75b99(param_1 GEN_EDX_ARG,pcVar2);
  return (uint)param_1;
}

/* ref: UnDecorator::getThrowTypes */
GEN_LIB GEN_NOFRAME uint F_00c765ff(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc765ffu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x1c, 4);
  uint uVar1;
  undefined * pDVar2;
  undefined * pDVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  
  puVar5 = param_1;
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    uVar6 = 0x29;
    pDVar3 = &(*(undefined8 *)(gen_frame + 0x0));
    uVar4 = 1;
    pDVar2 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1126494)));
    pDVar3 = ((undefined *)GEN_TOP(F_00c75d9e(pDVar2 GEN_EDX_ARG,pDVar3,uVar4)));
  }
  else {
    if (*REFG(char * PTR32, 0x15d75d8) == 'Z') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      *param_1 = 0;
      param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) & 0xffff0000;
      return (uint)param_1;
    }
    uVar1 = F_00c7651f(&(*(undefined8 *)(gen_frame + 0x8)));
    pDVar3 = &(*(undefined8 *)(gen_frame + 0x10));
    pDVar2 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126494)));
    F_00c75fe1(pDVar2 GEN_EDX_ARG,pDVar3,uVar1);
    uVar6 = 0x29;
    pDVar3 = &(*(undefined8 *)(gen_frame + 0x10));
  }
  F_00c762a5(pDVar3 GEN_EDX_ARG,puVar5,uVar6);
  return (uint)param_1;
}

/* ref: UnDecorator::getExtendedDataIndirectType */
GEN_LIB GEN_NOFRAME uint F_00c76689(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc76689u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL(0x28, 8);
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined * puVar7;
  undefined * pDVar8;
  
  iVar3 = (int)REFG(char * PTR32, 0x15d75d8);
  uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar5;
  pDVar8 = ((undefined *)GEN_TOP(0x0));
  REFG(char * PTR32, 0x15d75d8) = ((char *)GEN_TOP(((int)REFG(char * PTR32, 0x15d75d8) + 1)));
  iVar4 = (int)*REFG(char * PTR32, 0x15d75d8);
  if (iVar4 == 0x41) {
    if (param_4 == 0) {
      puVar7 = &REFG(undefined, 0x1126168);
      if (*((char *)GEN_TOP(*param_2)) != '&') {
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
        ((char *)(gen_frame + 0x20))[0] = '>';
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
        F_00c75ae9(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)(gen_frame + 0x20)),1);
        goto LAB_00c7683b;
      }
    }
    else {
      if (iVar4 == 0x43) {
        *param_2 = &REFG(undefined, 0x1126168);
        goto LAB_00c7683b;
      }
      if ((*REFG(char * PTR32, 0x15d75d8) == '\0') || (cVar2 = *((char *)GEN_TOP((iVar3 + 2))), cVar2 == '\0')) {
        F_00c757a7(param_1 GEN_EDX_ARG,1);
        return (uint)param_1;
      }
      if (param_4 == 0) {
        REFG(char * PTR32, 0x15d75d8) = ((char *)GEN_TOP((iVar3 + 3)));
        uVar1 = cVar2 - 0x30 + (iVar4 - 0x30) * 0x10;
        if (1 < uVar1) {
          ((char *)(gen_frame + 0x20))[0] = ',';
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
          F_00c75ae9(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)(gen_frame + 0x20)),1);
          uVar5 = F_00c75c95(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar1,0);
          puVar6 = ((undefined4 *)GEN_TOP(F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar5)));
          pDVar8 = ((undefined *)GEN_TOP(*puVar6));
          uVar5 = puVar6[1];
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = pDVar8;
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = uVar5;
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,'>');
        cVar2 = *REFG(char * PTR32, 0x15d75d8);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
        if (cVar2 == '$') {
          REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
        }
        else {
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,'^');
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
        if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
          F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
        }
        else {
          REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
        }
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) | 0x4000;
        return (uint)param_1;
      }
    }
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
  }
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
  return (uint)param_1;
}

/* ref: UnDecorator::getArrayType */
GEN_LIB GEN_NOFRAME uint F_00c76851(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc76851u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x3c, 4);
  uint uVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppDVar3;
  undefined * pDVar4;
  undefined * pDVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    if ((*(undefined * PTR32 *)((char *)(param_2))) != ((undefined *)GEN_TOP(0x0))) {
      pDVar5 = &(*(undefined8 *)(gen_frame + 0x10));
      pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,'(');
      F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar5,param_2);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,((char *)REFP(0x112649c)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
      F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4)));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,']');
      pDVar5 = &(*(undefined8 *)(gen_frame + 0x30));
      goto LAB_00c76a36;
    }
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x0));
    ppDVar3 = ((undefined * PTR32 *)(gen_frame + 0x8));
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
  }
  else {
    uVar1 = F_00c74bb9();
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = uVar1;
    if ((int)uVar1 < 0) {
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = 0;
    }
    if ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) != 0) {
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = ((undefined *)GEN_TOP(0x0));
      if (((*(uint *)(((char *)(param_2) + 4))) & 0x800) != 0) {
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,((char *)REFP(0x1126194)));
      }
      while (((uVar1 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))), (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) < '\x02' &&
              ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) - 1, uVar1 != 0)) && (*REFG(char * PTR32, 0x15d75d8) != '\0'))) {
        uVar1 = F_00c762ed(((undefined * PTR32 *)(gen_frame + 0x8)),0);
        ppDVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x18));
        pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,'[');
        F_00c75fe1(pDVar5 GEN_EDX_ARG,ppDVar3,uVar1);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(gen_frame + 0x1c));
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,']');
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x20)));
      }
      if ((*(undefined * PTR32 *)((char *)(param_2))) != ((undefined *)GEN_TOP(0x0))) {
        if (((*(uint *)(((char *)(param_2) + 4))) & 0x800) == 0) {
          ppDVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x18));
          pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,'(');
          F_00c75fe1(pDVar5 GEN_EDX_ARG,ppDVar3,param_2);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)(gen_frame + 0x18));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(gen_frame + 0x1c));
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,')');
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4)));
          F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x28)));
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
          uVar1 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
        }
        else {
          puVar2 = ((undefined4 *)GEN_TOP(F_00c75fe1(param_2 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x0)),&(*(undefined8 *)(gen_frame + 0x28)))));
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = ((undefined *)GEN_TOP(*puVar2));
          uVar1 = puVar2[1];
        }
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = uVar1;
      }
      F_00c7a23e(&(*(undefined8 *)(gen_frame + 0x10)),&(*(undefined8 *)(gen_frame + 0x28)));
      *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) | 0x800;
      return (uint)param_1;
    }
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x10));
    ppDVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x18));
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x20));
  }
  uVar7 = 0x5d;
  uVar6 = 1;
  pDVar4 = (undefined *)F_00c75b6c(pDVar4 GEN_EDX_ARG,'[');
  pDVar4 = ((undefined *)GEN_TOP(F_00c75d9e(pDVar4 GEN_EDX_ARG,ppDVar3,uVar6)));
  pDVar5 = ((undefined *)GEN_TOP(F_00c762a5(pDVar4 GEN_EDX_ARG,pDVar5,uVar7)));
LAB_00c76a36: ;
  F_00c79e7b(param_1,pDVar5);
  return (uint)param_1;
}

/* ref: UnDecorator::getLexicalFrame */
GEN_LIB GEN_NOFRAME uint F_00c76a47(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc76a47u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x1c, 4);
  uint uVar1;
  undefined * this;
  undefined * pDVar2;
  
  uVar1 = F_00c762ed(((undefined1 *)(gen_frame + 0x8)),0);
  pDVar2 = &(*(undefined8 *)(gen_frame + 0x10));
  this = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,'`');
  F_00c75fe1(this GEN_EDX_ARG,pDVar2,uVar1);
  F_00c762a5(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_1,0x27);
  return param_1;
}

/* ref: UnDecorator::getDisplacement */
GEN_LIB GEN_NOFRAME uint F_00c76a84(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc76a84u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  F_00c762ed(param_1,1);
  return param_1;
}

/* ref: FID_conflict_getGuardNumber_00c76a9a */
GEN_LIB GEN_NOFRAME uint F_00c76a9a(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc76a9au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  F_00c762ed(param_1,0);
  return param_1;
}

/* ref: FID_conflict_getGuardNumber_00c76ab0 */
GEN_LIB GEN_NOFRAME uint F_00c76ab0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc76ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  F_00c762ed(param_1,0);
  return param_1;
}

/* ref: UnDecorator::getVfTableType */
GEN_LIB GEN_NOFRAME uint F_00c76ac6(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc76ac6u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x24, 12);
  char cVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pDVar4;
  undefined * this;
  undefined * PTR32 * ppDVar5;
  char * pcVar6;
  
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*param_2));
  uVar3 = param_2[1];
  (*(uint *)(((char *)(param_1) + 4))) = uVar3;
  cVar1 = (char)uVar3;
  if (cVar1 < '\x02') {
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      if (cVar1 < '\x02') {
        ppDVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
        pDVar4 = param_1;
        this = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
        F_00c75fe1(this GEN_EDX_ARG,ppDVar5,pDVar4);
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(gen_frame + 0x14));
      }
    }
    else {
      F_00c75693(&(*(undefined * PTR32 *)(gen_frame + 0x10)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(gen_frame + 0x14));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,' ');
      puVar2 = ((undefined4 *)GEN_TOP(F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),param_1)));
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar2));
      uVar3 = puVar2[1];
      (*(uint *)(((char *)(param_1) + 4))) = uVar3;
      if ((char)uVar3 < '\x02') {
        if (*REFG(char * PTR32, 0x15d75d8) != '@') {
          pcVar6 = ((char *)REFP(0x1126414));
          do {
            F_00c7607b(param_1 GEN_EDX_ARG,pcVar6);
            do {
              if ((('\x01' < (char)(*(uint *)(((char *)(param_1) + 4)))) || (*REFG(char * PTR32, 0x15d75d8) == '\0')) ||
                 (*REFG(char * PTR32, 0x15d75d8) == '@')) {
                if ((char)(*(uint *)(((char *)(param_1) + 4))) < '\x02') {
                  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
                    F_00c75aa7(param_1 GEN_EDX_ARG,1);
                  }
                  F_00c76029(param_1 GEN_EDX_ARG,'}');
                }
LAB_00c76be9: ;
                if (*REFG(char * PTR32, 0x15d75d8) != '@') {
                  return (uint)param_1;
                }
                goto LAB_00c76bf3;
              }
              uVar3 = F_00c78e7c(((undefined1 *)(gen_frame + 0x8)));
              ppDVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
              pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,'`');
              F_00c75fe1(pDVar4 GEN_EDX_ARG,ppDVar5,uVar3);
              (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
              (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(gen_frame + 0x14));
              F_00c76029(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,'\'');
              F_00c75dc2(param_1 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x18)));
              if (*REFG(char * PTR32, 0x15d75d8) == '@') {
                REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
              }
              if ('\x01' < (char)(*(uint *)(((char *)(param_1) + 4)))) goto LAB_00c76be9;
            } while (*REFG(char * PTR32, 0x15d75d8) == '@');
            pcVar6 = ((char *)REFP(0x11264a0));
          } while( true );
        }
LAB_00c76bf3: ;
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      }
    }
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getStringEncoding */
GEN_LIB GEN_NOFRAME uint F_00c76c25(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc76c25u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x14, 12);
  char * pcVar1;
  char cVar2;
  
  F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2);
  pcVar1 = REFG(char * PTR32, 0x15d75d8);
  cVar2 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if ((cVar2 != '@') || (cVar2 = *REFG(char * PTR32, 0x15d75d8), REFG(char * PTR32, 0x15d75d8) = pcVar1 + 2, cVar2 != '_')) {
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  REFG(char * PTR32, 0x15d75d8) = pcVar1 + 3;
  F_00c762ed(((undefined1 *)(gen_frame + 0x0)),0);
  F_00c762ed(((undefined1 *)(gen_frame + 0x0)),0);
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
      (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      return (uint)param_1;
    }
  }
  REFG(char * PTR32, 0x15d75d8) = pcVar1 - 1;
  F_00c757a7(param_1 GEN_EDX_ARG,1);
  return (uint)param_1;
}

/* ref: UnDecorator::getSignedDimension */
GEN_LIB GEN_NOFRAME uint F_00c76cd8(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc76cd8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  uint uVar1;
  
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c757a7(param_1 GEN_EDX_ARG,1);
  }
  else if (*REFG(char * PTR32, 0x15d75d8) == '?') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    uVar1 = F_00c762ed(((undefined1 *)(gen_frame + 0x0)),0);
    F_00c76239(param_1,0x2d,uVar1);
  }
  else {
    F_00c762ed(param_1,0);
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getTemplateConstant */
GEN_LIB GEN_NOFRAME uint F_00c76d2a(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc76d2au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xcc, 4);
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
  (*(uint *)(gen_frame + 0xc4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc8);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if (cVar1 < 'E') {
    if (cVar1 != 'D') {
      if (cVar1 == '\0') {
LAB_00c76e73: ;
        REFG(char * PTR32, 0x15d75d8) = pcVar2;
        F_00c757a7(param_1 GEN_EDX_ARG,1);
        return (uint)param_1;
      }
      if (cVar1 == '0') {
        F_00c76cd8(param_1);
        return (uint)param_1;
      }
      pDVar7 = param_1;
      if (cVar1 != '1') {
        if (cVar1 == '2') {
          F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x48)));
          F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x40)));
          pcVar2 = REFG(char * PTR32, 0x15d75d8);
          if (('\x01' < (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4)))) || ('\x01' < (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))))) goto LAB_00c76e73;
          pcVar2 = F_00c757ec(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,&(*(char *)(gen_frame + 0x51)),100);
          if (pcVar2 != ((char *)GEN_TOP(0x0))) {
            (*(char *)(gen_frame + 0x50)) = (*(char *)(gen_frame + 0x51));
            if ((*(char *)(gen_frame + 0x51)) == '-') {
              (*(char *)(gen_frame + 0x51)) = (*(char *)(gen_frame + 0x52));
              (*(char *)(gen_frame + 0x52)) = '.';
            }
            else {
              (*(char *)(gen_frame + 0x51)) = '.';
            }
            pDVar4 = &(*(undefined8 *)(gen_frame + 0x40));
            uVar9 = 0x65;
            puVar8 = ((undefined1 *)(gen_frame + 0x28));
            pDVar3 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(char *)(gen_frame + 0x50)));
            pDVar3 = ((undefined *)GEN_TOP(F_00c762a5(pDVar3 GEN_EDX_ARG,puVar8,uVar9)));
            goto LAB_00c76e14;
          }
        }
        goto LAB_00c76dc0;
      }
      if (*REFG(char * PTR32, 0x15d75d8) != '@') {
        pDVar4 = ((undefined *)GEN_TOP(F_00c78c0e(((undefined1 *)(gen_frame + 0x0)))));
        pDVar3 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,((char *)REFP(0x1126170)));
LAB_00c76e14: ;
        F_00c75fe1(pDVar3 GEN_EDX_ARG,pDVar7,pDVar4);
        return (uint)param_1;
      }
      REFG(char * PTR32, 0x15d75d8) = pcVar2 + 2;
      pcVar2 = ((char *)REFP(0x11264bc));
      goto LAB_00c76e35;
    }
LAB_00c76ed9: ;
    F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x48)));
    if ((REFG(undefined4, 0x15d75e8) & 0x4000) != 0) {
      F_00c757ec(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,((char *)(gen_frame + 0xb4)),0x10);
      pcVar2 = ((char *)(gen_frame + 0xb4));
      lVar5 = F_00c4c71d(pcVar2);
      uVar6 = ((code *)REFG(gen_code32, 0x15d75ec))(lVar5);
      if (uVar6 != 0) {
LAB_00c76e35: ;
        F_00c75b99(param_1 GEN_EDX_ARG,pcVar2);
        return (uint)param_1;
      }
    }
    pDVar7 = &(*(undefined8 *)(gen_frame + 0x48));
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x40));
    if (cVar1 == 'D') {
      pcVar2 = ((char *)REFP(0x11264a8));
    }
    else {
      pcVar2 = ((char *)REFP(0x112641c));
    }
    pDVar3 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0xbc)) GEN_EDX_ARG,pcVar2);
    F_00c75fe1(pDVar3 GEN_EDX_ARG,pDVar4,pDVar7);
    F_00c762c9(&(*(undefined8 *)(gen_frame + 0x40)) GEN_EDX_ARG,param_1,&REFG(undefined, 0x11264a4));
    return (uint)param_1;
  }
  if (cVar1 == 'E') {
    F_00c78c0e(param_1);
    return (uint)param_1;
  }
  if (cVar1 < 'F') {
LAB_00c76dc0: ;
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  if ('J' < cVar1) {
    if (cVar1 != 'Q') {
      if (cVar1 == 'R') {
        F_00c77a54(&(*(undefined8 *)(gen_frame + 0x40)),0,0);
        F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x48)));
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40)))));
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4)));
        return (uint)param_1;
      }
      goto LAB_00c76dc0;
    }
    goto LAB_00c76ed9;
  }
  F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,'{');
  if (('G' < cVar1) && (cVar1 < 'K')) {
    pDVar7 = ((undefined *)GEN_TOP(F_00c78c0e(((undefined1 *)(gen_frame + 0x18)))));
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,pDVar7);
    F_00c76029(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,',');
  }
  if (cVar1 == 'F') {
LAB_00c76fbf: ;
    pDVar7 = ((undefined *)GEN_TOP(F_00c76cd8(((undefined1 *)(gen_frame + 0x20)))));
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,pDVar7);
    F_00c76029(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,',');
  }
  else {
    if (cVar1 == 'G') {
LAB_00c76f9f: ;
      pDVar7 = ((undefined *)GEN_TOP(F_00c76cd8(((undefined1 *)(gen_frame + 0x30)))));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,pDVar7);
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,',');
      goto LAB_00c76fbf;
    }
    if (cVar1 != 'H') {
      if (cVar1 == 'I') goto LAB_00c76fbf;
      if (cVar1 != 'J') goto LAB_00c76ff5;
      goto LAB_00c76f9f;
    }
  }
  pDVar7 = ((undefined *)GEN_TOP(F_00c76cd8(((undefined1 *)(gen_frame + 0x10)))));
  F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,pDVar7);
LAB_00c76ff5: ;
  F_00c762a5(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,param_1,0x7d);
  return (uint)param_1;
}

/* ref: UnDecorator::getPtrRefDataType */
GEN_LIB GEN_NOFRAME uint F_00c7701a(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc7701au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL(0x1c, 4);
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
      F_00c76281(param_1,((char *)REFP(0x11264e0)),param_2);
      return (uint)param_1;
    }
    F_00c75b99(param_1 GEN_EDX_ARG,((char *)REFP(0x1126468)));
    return (uint)param_1;
  }
  if (*REFG(char * PTR32, 0x15d75d8) == 'Y') {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c76851(param_1,param_2);
    return (uint)param_1;
  }
  F_00c79e7b(&(*(undefined * PTR32 *)(gen_frame + 0x10)),param_2);
  if ((param_2[1] & 0x4000U) == 0) {
    uVar1 = (*(uint *)(gen_frame + 0x14));
    pDVar2 = (*(undefined * PTR32 *)(gen_frame + 0x10));
    if ((param_2[1] & 0x2000U) == 0) goto LAB_00c770e2;
    pcVar3 = ((char *)REFP(0x11264c4));
  }
  else {
    pcVar3 = ((char *)REFP(0x11264d4));
  }
  ppDVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  ppDVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar3);
  F_00c75fe1(this GEN_EDX_ARG,ppDVar4,ppDVar5);
  uVar1 = (*(uint *)(gen_frame + 0xc));
  pDVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
LAB_00c770e2: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = pDVar2;
  (*(uint *)(((char *)(param_1) + 4))) = uVar1;
  return (uint)param_1;
}

/* ref: UnDecorator::getVbTableType */
GEN_LIB GEN_NOFRAME uint F_00c77101(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc77101u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00c76ac6(param_1,param_2);
  return param_1;
}

/* ref: UnDecorator::getOperatorName */
GEN_LIB GEN_NOFRAME uint F_00c77327(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined1 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc77327u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x94, 12);
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
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) & 0xffff0000;
  uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x80))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x80))) + 4))) = uVar5;
  bVar2 = false;
  pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88))))) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) = ((undefined *)GEN_TOP(0x0));
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
          pcVar11 = *((char * PTR32 *)GEN_TOP((((char *)REFP(0x1126214)) + REFG(char * PTR32, 0x15d75d8)[1] * 4)));
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
LAB_00c7754c: ;
          F_00c75b99(param_1 GEN_EDX_ARG,pcVar11);
          return (uint)param_1;
        }
        if (cVar1 < ':') {
          if (cVar1 == '9') {
            pcVar11 = REFG(char * PTR32, 0x15d75d8) + 1;
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            F_00c75b99(&(*(undefined8 *)(gen_frame + 0x70)) GEN_EDX_ARG,*((char * PTR32 *)GEN_TOP(("__based(" + *pcVar11 * 4 + 8))));
            uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x70))) + 4))) | 0x8000;
LAB_00c77582: ;
            (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x70)))));
            goto LAB_00c773d0;
          }
          if (cVar1 == '\0') {
LAB_00c774cb: ;
            pcVar3 = pcVar3 - 1;
LAB_00c774d1: ;
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            F_00c757a7(param_1 GEN_EDX_ARG,1);
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
            pcVar11 = ((char *)REFP(0x11264ec));
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
LAB_00c775b6: ;
            F_00c76c25(&(*(undefined8 *)(gen_frame + 0x70)),pcVar11,uVar13);
            uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x70))) + 4))) | 0x1000;
            goto LAB_00c77582;
          }
        }
        else if ('@' < cVar1) {
          if (cVar1 < 'C') goto LAB_00c778aa;
          if (cVar1 == 'C') {
            uVar13 = 1;
            pcVar11 = ((char *)REFP(0x11260c8));
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
          F_00c75e99(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,*(char * PTR32 *)(((char *)REFP(0x1126214)) + *pcVar11 * 4));
          piVar7 = ((int *)GEN_TOP(F_00c77327((undefined *)((undefined1 *)(gen_frame + 0x20)),0,((undefined1 *)GEN_TOP(0x0)))));
          pDVar10 = ((undefined *)GEN_TOP(*piVar7));
          uVar5 = piVar7[1];
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) = pDVar10;
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x80))) + 4))) = uVar5;
          if ((pDVar10 == ((undefined *)GEN_TOP(0x0))) || (pcVar3 = REFG(char * PTR32, 0x15d75d8), (uVar5 & 0x400) == 0)) {
LAB_00c777d6: ;
            pDVar9 = &(*(undefined8 *)(gen_frame + 0x88));
LAB_00c777d9: ;
            F_00c75fe1(pDVar9 GEN_EDX_ARG,param_1,&(*(undefined8 *)(gen_frame + 0x80)));
            return (uint)param_1;
          }
        }
        else {
          pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88)))));
          if (cVar1 == 'Q') goto LAB_00c773c8;
          if (cVar1 == 'R') {
            pcVar11 = REFG(char * PTR32, 0x15d75d8) + 1;
            REFG(char * PTR32, 0x15d75d8) = pcVar3;
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,*(char * PTR32 *)(((char *)REFP(0x1126214)) + *pcVar11 * 4));
            if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
              F_00c75d9e(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,param_1,1);
              return (uint)param_1;
            }
            uVar5 = (int)*REFG(char * PTR32, 0x15d75d8) - 0x30;
            pcVar3 = REFG(char * PTR32, 0x15d75d8);
            if ((-1 < (int)uVar5) && (uVar5 < 5)) {
              F_00c75e99(&(*(undefined8 *)(gen_frame + 0x80)) GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x11263a8))[(int)(uVar5)]);
              pcVar3 = REFG(char * PTR32, 0x15d75d8);
              iVar8 = (int)*REFG(char * PTR32, 0x15d75d8);
              REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
              if (iVar8 == 0x30) {
                F_00c7a3ef(&(*(undefined8 *)(gen_frame + 0x68)),0);
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x78))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x68)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x78))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x68))) + 4)));
                F_00c76029(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,' ');
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x70))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x78)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x70))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x78))) + 4)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x88)));
                pDVar9 = &(*(undefined8 *)(gen_frame + 0x70));
                goto LAB_00c777d9;
              }
              if (iVar8 == 0x31) {
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x78))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x78))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x80)));
                uVar13 = 0x2c;
                puVar12 = ((undefined1 *)(gen_frame + 0x48));
                pDVar9 = ((undefined *)GEN_TOP(F_00c76cd8(((undefined1 *)(gen_frame + 0x58)))));
                pDVar9 = ((undefined *)GEN_TOP(F_00c762a5(pDVar9 GEN_EDX_ARG,puVar12,uVar13)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,pDVar9);
                uVar13 = 0x2c;
                puVar12 = ((undefined1 *)(gen_frame + 0x38));
                pDVar9 = ((undefined *)GEN_TOP(F_00c76cd8(((undefined1 *)(gen_frame + 0x18)))));
                pDVar9 = ((undefined *)GEN_TOP(F_00c762a5(pDVar9 GEN_EDX_ARG,puVar12,uVar13)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,pDVar9);
                uVar13 = 0x2c;
                puVar12 = ((undefined1 *)(gen_frame + 0x28));
                pDVar9 = ((undefined *)GEN_TOP(F_00c76cd8(((undefined1 *)(gen_frame + 0x50)))));
                pDVar9 = ((undefined *)GEN_TOP(F_00c762a5(pDVar9 GEN_EDX_ARG,puVar12,uVar13)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,pDVar9);
                uVar13 = 0x29;
                puVar12 = ((undefined1 *)(gen_frame + 0x40));
                pDVar9 = ((undefined *)GEN_TOP(F_00c762ed(((undefined1 *)(gen_frame + 0x30)),0)));
                pDVar9 = ((undefined *)GEN_TOP(F_00c762a5(pDVar9 GEN_EDX_ARG,puVar12,uVar13)));
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,pDVar9);
                F_00c762a5(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,param_1,0x27);
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
          pcVar11 = *((char * PTR32 *)GEN_TOP((((char *)REFP(0x1126214)) + REFG(char * PTR32, 0x15d75d8)[1] * 4)));
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
LAB_00c77390: ;
          F_00c75e99(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,pcVar11);
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
                  F_00c75b99(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x1126278))[(int)(*pcVar11)]);
                  if (*REFG(char * PTR32, 0x15d75d8) == '?') {
                    pDVar9 = ((undefined *)GEN_TOP(F_00c78c0e(((undefined1 *)(gen_frame + 0x10)))));
                    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,pDVar9);
                    if (*REFG(char * PTR32, 0x15d75d8) == '@') {
                      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
                    }
                  }
                  else {
                    pDVar9 = ((undefined *)GEN_TOP(F_00c77e6e(&(*(undefined8 *)(gen_frame + 0x60)))));
                    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,pDVar9);
                  }
                  F_00c7607b(&(*(undefined8 *)(gen_frame + 0x78)) GEN_EDX_ARG,((char *)REFP(0x11264e8)));
                  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x78)))));
                  uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x78))) + 4)));
                  goto LAB_00c773d0;
                }
                if ('J' < cVar1) goto LAB_00c777c1;
              }
              pcVar11 = (&REFG(undefined * PTR32, 0x1126278))[(int)(REFG(char * PTR32, 0x15d75d8)[2])];
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
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,*(char * PTR32 *)(&REFG(undefined, 0x1126184) + cVar1 * 4));
    if (bVar2) {
      pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88)))));
      pcVar3 = REFG(char * PTR32, 0x15d75d8);
      if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88))))) != ((undefined *)GEN_TOP(0x0))) {
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) | 0x200;
      }
    }
    else {
LAB_00c77398: ;
      pDVar10 = ((undefined *)GEN_TOP(0x0));
      pcVar3 = REFG(char * PTR32, 0x15d75d8);
      if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88))))) != ((undefined *)GEN_TOP(0x0))) {
        pDVar9 = &(*(undefined8 *)(gen_frame + 0x88));
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x68));
        pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x60)) GEN_EDX_ARG,((char *)REFP(0x1126188)));
        F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x68)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x68))) + 4)));
        pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88)))));
        pcVar3 = REFG(char * PTR32, 0x15d75d8);
      }
    }
LAB_00c773c8: ;
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    (*(undefined * PTR32 *)((char *)(param_1))) = pDVar10;
    uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4)));
LAB_00c773d0: ;
    (*(uint *)(((char *)(param_1) + 4))) = uVar5;
  }
  else {
    if (cVar1 == '\0') goto LAB_00c774cb;
    if ('/' < cVar1) {
      if (cVar1 < '2') {
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) = ((undefined *)GEN_TOP(0x0));
        if (param_2 == '\0') {
LAB_00c7745e: ;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          piVar7 = ((int *)GEN_TOP(F_00c77a54(((undefined1 *)(gen_frame + 0x0)),0,0)));
          pDVar10 = ((undefined *)GEN_TOP(*piVar7));
          uVar5 = piVar7[1];
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88))))) = pDVar10;
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) = uVar5;
          REFG(char * PTR32, 0x15d75d8) = pcVar3;
          if ((pDVar10 != ((undefined *)GEN_TOP(0x0))) && (pcVar3[-1] == '1')) {
            pDVar9 = &(*(undefined8 *)(gen_frame + 0x88));
            pDVar6 = &(*(undefined8 *)(gen_frame + 0x70));
            pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x68)) GEN_EDX_ARG,'~');
            F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9);
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x70)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x88))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x70))) + 4)));
          }
          pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88)))));
          pcVar3 = REFG(char * PTR32, 0x15d75d8);
          if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) != ((undefined *)GEN_TOP(0x0))) {
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x80)));
            pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x88)))));
            pcVar3 = REFG(char * PTR32, 0x15d75d8);
          }
          goto LAB_00c773c8;
        }
        REFG(char * PTR32, 0x15d75d8) = pcVar3;
        uVar5 = F_00c77118(((undefined1 *)(gen_frame + 0x8)));
        pDVar9 = &(*(undefined8 *)(gen_frame + 0x68));
        pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x70)) GEN_EDX_ARG,'<');
        F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar9,uVar5);
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x80)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x68)));
        if (((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) != ((undefined *)GEN_TOP(0x0))) &&
           (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) + 4))))((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80))))) GEN_EDX_ARG), (char)uVar5 == '>')) {
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x80)) GEN_EDX_ARG,' ');
        }
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x80)) GEN_EDX_ARG,'>');
        if (param_3 != ((undefined1 *)GEN_TOP(0x0))) {
          *param_3 = 1;
        }
        if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
          pcVar3 = REFG(char * PTR32, 0x15d75d8) + 1;
          goto LAB_00c7745e;
        }
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x80)))));
        uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x80))) + 4)));
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
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getTemplateName */
GEN_LIB GEN_NOFRAME uint F_00c778fd(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc778fdu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL(0xac, 4);
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
    ((undefined4 *)(gen_frame + 0x58))[0] = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x2c))[0] = 0xffffffff;
    ((undefined4 *)(gen_frame + 0x0))[0] = 0xffffffff;
    REFG(undefined4 * PTR32, 0x15d75cc) = ((undefined4 *)(gen_frame + 0x58));
    REFG(undefined4 * PTR32, 0x15d75d0) = ((undefined4 *)(gen_frame + 0x2c));
    REFG(undefined4 * PTR32, 0x15d75d4) = ((undefined4 *)(gen_frame + 0x0));
    cVar1 = REFG(char * PTR32, 0x15d75d8)[2];
    (*(char *)(gen_frame + 0xa7)) = '\0';
    if (cVar1 == '?') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 3;
      piVar6 = ((int *)GEN_TOP(F_00c77327(&(*(undefined8 *)(gen_frame + 0x94)),1,&(*(char *)(gen_frame + 0xa7)))));
    }
    else {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 2;
      piVar6 = ((int *)GEN_TOP(F_00c77a54(&(*(undefined8 *)(gen_frame + 0x94)),1,1)));
    }
    pDVar2 = ((undefined *)GEN_TOP(*piVar6));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x9c))) + 4))) = piVar6[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x9c))))) = pDVar2;
    if (pDVar2 == ((undefined *)GEN_TOP(0x0))) {
      REFG(undefined1, 0x15d75f0) = 1;
    }
    if ((*(char *)(gen_frame + 0xa7)) == '\0') {
      uVar7 = F_00c77118(((undefined1 *)(gen_frame + 0x8c)));
      pDVar8 = &(*(undefined8 *)(gen_frame + 0x94));
      this = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x84)) GEN_EDX_ARG,'<');
      F_00c75fe1(this GEN_EDX_ARG,pDVar8,uVar7);
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x9c)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x94)));
      if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x9c))))) != ((undefined *)GEN_TOP(0x0))) {
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x9c))))) + 4))))((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x9c))))) GEN_EDX_ARG);
        if ((char)uVar7 == '>') {
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x9c)) GEN_EDX_ARG,' ');
        }
      }
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x9c)) GEN_EDX_ARG,'>');
      if ((param_2 != '\0') && (*REFG(char * PTR32, 0x15d75d8) != '\0')) {
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      }
    }
    REFG(undefined4 * PTR32, 0x15d75cc) = ((undefined4 *)GEN_TOP(uVar3));
    REFG(undefined4 * PTR32, 0x15d75d0) = ((undefined4 *)GEN_TOP(uVar4));
    *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x9c)))));
    REFG(undefined4 * PTR32, 0x15d75d4) = ((undefined4 *)GEN_TOP(uVar5));
    param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x9c))) + 4)));
    return (uint)param_1;
  }
  param_1[1] = param_1[1] & 0xffff00ff;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 2;
  return (uint)param_1;
}

/* ref: UnDecorator::getZName */
GEN_LIB GEN_NOFRAME uint F_00c77a54(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc77a54u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL(0x38, 8);
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
  
  (*(uint *)(gen_frame + 0x30)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  uVar2 = (int)cVar1 - 0x30;
  if (uVar2 < 10) {
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    F_00c75961(REFG(undefined4, 0x15d75d0) GEN_EDX_ARG,param_1,uVar2);
    return (uint)param_1;
  }
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
  if (cVar1 == '?') {
    puVar3 = ((undefined4 *)GEN_TOP(F_00c778fd(&(*(undefined * PTR32 *)(gen_frame + 0x8)),0)));
    pcVar6 = REFG(char * PTR32, 0x15d75d8);
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = puVar3[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(*puVar3));
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (cVar1 != '@') {
      REFG(char * PTR32, 0x15d75d8) = pcVar6;
      F_00c758e0(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*pcVar6 != '\0') + 1);
    }
  }
  else {
    pcVar4 = ((char *)REFP(0x1126518));
    pcVar8 = ((char *)REFP(0x1126518));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = 0x12;
    pcVar6 = REFG(char * PTR32, 0x15d75d8);
    do {
      if ((*pcVar6 == '\0') || (*pcVar6 != *pcVar8)) break;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
      uVar2 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) - 1;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = uVar2;
    } while (uVar2 != 0);
    if (*pcVar6 == *pcVar8) {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 0x13;
    }
    else {
      pcVar4 = ((char *)REFP(0x1126508));
      pcVar8 = ((char *)REFP(0x1126508));
      iVar7 = 0xc;
      pcVar6 = REFG(char * PTR32, 0x15d75d8);
      do {
        if ((*pcVar6 == '\0') || (*pcVar6 != *pcVar8)) break;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
        iVar7 = iVar7 - 1;
      } while (iVar7 != 0);
      if (*pcVar6 != *pcVar8) {
        if ((param_3 == '\0') || (*REFG(char * PTR32, 0x15d75d8) != '@')) {
          puVar3 = (undefined4 *)F_00c75bd6(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(char * PTR32, 0x15d75d8),'@');
          uVar2 = puVar3[1];
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(*puVar3));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar2;
        }
        else {
          REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) & 0xffff0000;
        }
        goto LAB_00c77c33;
      }
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 0xd;
    }
    F_00c76cd8(&(*(undefined8 *)(gen_frame + 0x10)));
    if ((REFG(undefined4, 0x15d75e8) & 0x4000) != 0) {
      F_00c757ec(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)(gen_frame + 0x20)),0x10);
      lVar5 = F_00c4c71d(((char *)(gen_frame + 0x20)));
      pcVar6 = ((char *)GEN_TOP(((code *)REFG(gen_code32, 0x15d75ec))(lVar5)));
      if (pcVar6 != ((char *)GEN_TOP(0x0))) {
        F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,pcVar6);
        goto LAB_00c77c33;
      }
    }
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x1126504)));
    pDVar10 = &(*(undefined8 *)(gen_frame + 0x10));
    ppDVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar4);
    F_00c75fe1(this GEN_EDX_ARG,ppDVar9,pDVar10);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)(gen_frame + 0x8));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(gen_frame + 0xc));
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11264a4)));
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
  }
LAB_00c77c33: ;
  if ((param_2 != '\0') && (*((int *)GEN_TOP(REFG(undefined4, 0x15d75d0))) != 9)) {
    F_00c75917(REFG(undefined4, 0x15d75d0) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x18)));
  }
  *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
  param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
  return (uint)param_1;
}

/* ref: UnDecorator::getScopedName */
GEN_LIB GEN_NOFRAME uint F_00c77c6a(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc77c6au, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x1c, 4);
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
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
  puVar2 = ((undefined4 *)GEN_TOP(F_00c77a54(&(*(undefined8 *)(gen_frame + 0x10)),1,0)));
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar2));
  uVar1 = puVar2[1];
  (*(uint *)(((char *)(param_1) + 4))) = uVar1;
  if (((char)uVar1 == '\0') && (*REFG(char * PTR32, 0x15d75d8) != '\0')) {
    if (*REFG(char * PTR32, 0x15d75d8) == '@') goto LAB_00c77cee;
    pDVar8 = &(*(undefined8 *)(gen_frame + 0x10));
    puVar7 = &REFG(undefined, 0x112652c);
    puVar5 = ((undefined1 *)(gen_frame + 0x8));
    pDVar4 = param_1;
    pDVar3 = ((undefined *)GEN_TOP(F_00c78e7c(((undefined1 *)(gen_frame + 0x0)))));
    pDVar3 = ((undefined *)GEN_TOP(F_00c762c9(pDVar3 GEN_EDX_ARG,puVar5,puVar7)));
    puVar2 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar3 GEN_EDX_ARG,pDVar8,pDVar4)));
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar2));
    (*(uint *)(((char *)(param_1) + 4))) = puVar2[1];
  }
  if (*REFG(char * PTR32, 0x15d75d8) != '@') {
    if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
      return (uint)param_1;
    }
    if ((*(undefined * PTR32 *)((char *)(param_1))) == ((undefined *)GEN_TOP(0x0))) {
      F_00c758e0(param_1 GEN_EDX_ARG,1);
      return (uint)param_1;
    }
    puVar5 = ((undefined1 *)(gen_frame + 0x0));
    puVar7 = &REFG(undefined, 0x112652c);
    puVar6 = ((undefined1 *)(gen_frame + 0x8));
    pDVar8 = param_1;
    pDVar4 = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,1)));
    pDVar4 = ((undefined *)GEN_TOP(F_00c762c9(pDVar4 GEN_EDX_ARG,puVar6,puVar7)));
    puVar2 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,puVar5,pDVar8)));
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar2));
    (*(uint *)(((char *)(param_1) + 4))) = puVar2[1];
    return (uint)param_1;
  }
LAB_00c77cee: ;
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  return (uint)param_1;
}

/* ref: UnDecorator::getECSUName */
GEN_LIB GEN_NOFRAME uint F_00c77d4b(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc77d4bu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  F_00c77c6a(param_1);
  return param_1;
}

/* ref: UnDecorator::getECSUDataType */
GEN_LIB GEN_NOFRAME uint F_00c77d5e(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc77d5eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x24, 12);
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
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  if (cVar1 == '\0') {
    REFG(char * PTR32, 0x15d75d8) = pcVar5;
    F_00c75b99(param_1 GEN_EDX_ARG,((char *)REFP(0x1126531)));
    return (uint)param_1;
  }
  if (cVar1 == 'T') {
    pcVar5 = ((char *)REFP(0x1126540));
  }
  else if (cVar1 == 'U') {
    pcVar5 = ((char *)REFP(0x1126548));
  }
  else if (cVar1 == 'V') {
    pcVar5 = ((char *)REFP(0x1126550));
  }
  else {
    if (cVar1 == 'W') {
      uVar3 = F_00c76433(((undefined1 *)(gen_frame + 0x8)));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
      this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126558)));
      F_00c75fe1(this GEN_EDX_ARG,pDVar4,uVar3);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      goto LAB_00c77e17;
    }
    if (cVar1 == 'X') {
      pcVar5 = ((char *)REFP(0x1126560));
    }
    else {
      uVar2 = uVar3;
      if (cVar1 != 'Y') goto LAB_00c77e17;
      pcVar5 = ((char *)REFP(0x112656c));
    }
  }
  F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,pcVar5);
  uVar2 = uVar3;
LAB_00c77e17: ;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) & 0xffff0000;
  if (uVar2 != 0) {
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
  }
  F_00c77c6a(&(*(undefined8 *)(gen_frame + 0x18)));
  F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x18)));
  (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
  return (uint)param_1;
}

/* ref: UnDecorator::getSymbolName */
GEN_LIB GEN_NOFRAME uint F_00c77e6e(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc77e6eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c77eb8(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc77eb8u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x14, 12);
  char cVar1;
  char * pcVar2;
  undefined * pDVar3;
  
  pcVar2 = F_00c751d3(0);
  F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,pcVar2);
  if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
    F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
  }
  else {
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (cVar1 == '0') {
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1126468)));
    }
    else if (cVar1 == '2') {
      pDVar3 = ((undefined *)GEN_TOP(F_00c77c6a(((undefined1 *)(gen_frame + 0x0)))));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,pDVar3);
    }
    else if (cVar1 == '5') {
      param_1[1] = param_1[1] & 0xffff00ff;
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 2;
      return (uint)param_1;
    }
  }
  F_00c7607b(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x112657c)));
  *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
  param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
  return (uint)param_1;
}

/* ref: UnDecorator::composeDeclaration */
GEN_LIB GEN_NOFRAME uint F_00c77f54(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc77f54u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x5c, 4);
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
  
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) & 0xffff0000;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = ((undefined *)GEN_TOP(0x0));
  uVar1 = F_00c74c1b();
  if (((*(undefined * PTR32 *)((char *)(param_2))) == ((undefined *)GEN_TOP(0x0))) || ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) = 1, ((*(uint *)(((char *)(param_2) + 4))) & 0x200) == 0)) {
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) = 0;
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
  (*(uint *)(gen_frame + 0x54)) = uVar1;
  (*(uint *)(gen_frame + 0x54)) = uVar1 & 0x8000;
  if ((uVar1 & 0x8000) == 0) {
LAB_00c78646: ;
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,param_2);
    if ((*(uint *)(gen_frame + 0x54)) == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        F_00c76ac6(param_1,&(*(undefined8 *)(gen_frame + 0x38)));
        return (uint)param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        F_00c762ed(&(*(undefined8 *)(gen_frame + 0x20)),0);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4)));
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,'{');
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x20)));
        F_00c762c9(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_1,&REFG(undefined, 0x1126680));
        return (uint)param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        F_00c761e5(param_1,&(*(undefined8 *)(gen_frame + 0x38)));
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
    if ((uVar3 == 0) || ((uVar1 & 0x1b00) != 0x1000 || (*(uint *)(gen_frame + 0x54)) == 0)) {
      if ((*(uint *)(gen_frame + 0x54)) == 0) {
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
      if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1100 && (*(uint *)(gen_frame + 0x54)) != 0)) {
        pcVar11 = ((char *)REFP(0x1126600));
        goto LAB_00c7880b;
      }
      if ((*(uint *)(gen_frame + 0x54)) == 0) {
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
      if ((uVar3 != 0) && ((uVar1 & 0x1b00) == 0x1200 && (*(uint *)(gen_frame + 0x54)) != 0)) {
        pcVar11 = ((char *)REFP(0x11265d0));
        goto LAB_00c7880b;
      }
      if ((*(uint *)(gen_frame + 0x54)) == 0) {
        pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38)))));
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_00c78bfe;
        goto LAB_00c7882a;
      }
LAB_00c78830: ;
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar11 = ((char *)REFP(0x1126634));
LAB_00c7880b: ;
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,pcVar11);
LAB_00c7882a: ;
      if ((*(uint *)(gen_frame + 0x54)) != 0) goto LAB_00c78830;
      uVar3 = uVar1 & 0x6000;
    }
    if (uVar3 == 0) {
      uVar3 = uVar1 & 0x400;
    }
    else {
      uVar3 = uVar1 & 0x1000;
    }
    if ((uVar3 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || (*(uint *)(gen_frame + 0x54)) == 0 && ((uVar1 & 0x1b00) != 0x1200 || (*(uint *)(gen_frame + 0x54)) == 0))
       )) {
      puVar7 = ((undefined4 *)GEN_TOP(F_00c7a4be(&(*(undefined8 *)(gen_frame + 0x0)),&(*(undefined8 *)(gen_frame + 0x38)))));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = ((undefined *)GEN_TOP(*puVar7));
      uVar3 = puVar7[1];
    }
    else {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x38));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
      pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10919e8)));
      F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
      uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
LAB_00c78204: ;
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = uVar3;
LAB_00c788d6: ;
    if ((*(uint *)(gen_frame + 0x54)) == 0) {
      uVar3 = uVar1 & 0x6000;
    }
    else {
      uVar3 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar3 == 0) {
      if ((~(REFG(undefined4, 0x15d75e8) >> 9) & 1) != 0) {
        if ((*(uint *)(gen_frame + 0x54)) == 0) {
          uVar3 = uVar1 & 0x6000;
        }
        else {
          uVar3 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar3 == 0) && ((*(uint *)(gen_frame + 0x54)) == 0 || (uVar1 & 0x700) == 0x200)) {
          pDVar6 = &(*(undefined8 *)(gen_frame + 0x38));
          pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
          pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11265c8)));
          F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
        }
        if ((*(uint *)(gen_frame + 0x54)) == 0) {
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
          if ((*(uint *)(gen_frame + 0x54)) == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x500)) {
            if ((*(uint *)(gen_frame + 0x54)) == 0) {
              uVar3 = uVar1 & 0x6000;
            }
            else {
              uVar3 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar3 != 0) || ((uVar1 & 0x700) != 0x600)) {
              if ((*(uint *)(gen_frame + 0x54)) == 0) {
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
          if ((*(uint *)(gen_frame + 0x54)) == 0) goto LAB_00c78995;
          uVar3 = (uVar1 & 0x1800) - 0x800;
          goto LAB_00c7899c;
        }
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x38));
        pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
        pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x11265bc)));
        F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      }
LAB_00c78a5b: ;
      if ((~(REFG(undefined4, 0x15d75e8) >> 7) & 1) != 0) {
        if ((*(uint *)(gen_frame + 0x54)) == 0) {
          uVar3 = uVar1 & 0x6000;
        }
        else {
          uVar3 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar3 == 0) {
          if ((*(uint *)(gen_frame + 0x54)) == 0) {
            bVar10 = (uVar1 & 0x1800) == 0x800;
          }
          else {
            bVar10 = ((byte)uVar1 & 0xc0) == 0x40;
          }
          if (!bVar10) goto LAB_00c78abd;
          pcVar11 = ((char *)REFP(0x11265b0));
LAB_00c78b54: ;
          pDVar5 = &(*(undefined8 *)(gen_frame + 0x38));
          pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
          pDVar6 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar11);
          F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar4,pDVar5);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
        }
        else {
LAB_00c78abd: ;
          if ((*(uint *)(gen_frame + 0x54)) == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar3 == 0) {
            if ((*(uint *)(gen_frame + 0x54)) == 0) {
              bVar10 = (uVar1 & 0x1800) == 0x1000;
            }
            else {
              bVar10 = ((byte)uVar1 & 0xc0) == 0x80;
            }
            if (bVar10) {
              pcVar11 = ((char *)REFP(0x11265a4));
              goto LAB_00c78b54;
            }
          }
          if ((*(uint *)(gen_frame + 0x54)) == 0) {
            uVar3 = uVar1 & 0x6000;
          }
          else {
            uVar3 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar3 == 0) {
            if ((*(uint *)(gen_frame + 0x54)) == 0) {
              uVar3 = uVar1 & 0x1800;
            }
            else {
              uVar3 = uVar1 & 0xc0;
            }
            if (uVar3 == 0) {
              pcVar11 = ((char *)REFP(0x1126598));
              goto LAB_00c78b54;
            }
          }
        }
      }
    }
    if ((*(uint *)(gen_frame + 0x54)) == 0) {
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
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x38));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
      pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x112658c)));
      F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
    }
    pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38)))));
    if ((uVar1 & 0x10000) != 0) {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x38));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
      pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126580)));
      F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
    }
  }
  else {
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = uVar1;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = uVar1 & 0x1800;
    uVar3 = (uint)((uVar1 & 0x1800) == 0x800);
    (*(uint *)(gen_frame + 0x50)) = uVar3;
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
        uVar3 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x10)));
        F_00c7538a(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar3);
      }
      else {
        uVar3 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x18)));
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x10));
        pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,' ');
        F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,uVar3);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      }
    }
    if ((*(uint *)(gen_frame + 0x50)) == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if ((uVar3 != 0) && ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) == 0x1800)) {
      F_00c762ed(&(*(undefined8 *)(gen_frame + 0x10)),0);
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x10));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x18));
      pDVar5 = ((undefined *)GEN_TOP(F_00c762a5(param_2 GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x20)),0x7b)));
      pDVar6 = ((undefined *)GEN_TOP(F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,pDVar6);
      F_00c75f96(&(*(undefined8 *)(gen_frame + 0x10)));
      if ((REFG(undefined4, 0x15d75e8) & 0x1000) == 0) {
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x10));
        pDVar4 = &(*(undefined8 *)(gen_frame + 0x18));
        pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,',');
        F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1126684)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
      }
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,((char *)REFP(0x1126680)));
      F_00c75ece(&(*(undefined8 *)(gen_frame + 0x10)));
      if ((((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) || ((~(REFG(undefined4, 0x15d75e8) >> 4) & 1) == 0)) ||
         ((REFG(undefined4, 0x15d75e8) & 0x1000) != 0)) goto LAB_00c788d6;
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x10));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x18));
      pDVar5 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,' ');
      F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,' ');
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x38)));
      uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      goto LAB_00c78204;
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) & 0xffff0000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) & 0xffff0000;
    (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) & 0xffff0000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) & 0xffff0000;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)(gen_frame + 0x30)) = ((undefined *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = ((undefined *)GEN_TOP(0x0));
    if ((*(uint *)(gen_frame + 0x50)) == 0) {
      uVar3 = uVar1 & 0x1000;
    }
    else {
      uVar3 = uVar1 & 0x400;
    }
    if (uVar3 != 0) {
      if ((*(uint *)(gen_frame + 0x50)) != 0) {
        if ((uVar1 & 0x700) == 0x600) {
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x20)),1);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x20)),1);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x20)),1);
        }
        else {
          if (((*(uint *)(gen_frame + 0x50)) == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00c782c1;
          F_00c762ed(&(*(undefined8 *)(gen_frame + 0x20)),1);
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
      }
LAB_00c782c1: ;
      F_00c762ed(&(*(undefined8 *)(gen_frame + 0x20)),1);
      (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
      (*(uint *)(gen_frame + 0x34)) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
    }
    if (((*(uint *)(gen_frame + 0x50)) != 0) && (((*(uint *)(gen_frame + 0x50)) == 0 || ((uVar1 & 0x700) != 0x200)))) {
      if (((byte)REFG(undefined4, 0x15d75e8) & 0x60) == 0x60) {
        uVar3 = F_00c756cc(&(*(undefined8 *)(gen_frame + 0x20)));
        F_00c7538a(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar3);
      }
      else {
        puVar7 = ((undefined4 *)GEN_TOP(F_00c756cc(&(*(undefined8 *)(gen_frame + 0x20)))));
        uVar3 = puVar7[1];
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = ((undefined *)GEN_TOP(*puVar7));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = uVar3;
      }
    }
    if (((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) || ((~(REFG(undefined4, 0x15d75e8) >> 4) & 1) == 0)) {
      uVar3 = F_00c75ece(&(*(undefined8 *)(gen_frame + 0x8)));
      F_00c7538a(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar3);
    }
    else {
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x38));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x20));
      pDVar5 = ((undefined *)GEN_TOP(F_00c75ece(&(*(undefined8 *)(gen_frame + 0x8)))));
      puVar7 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = ((undefined *)GEN_TOP(*puVar7));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = puVar7[1];
    }
    if ((*(undefined * PTR32 *)((char *)(param_2))) != ((undefined *)GEN_TOP(0x0))) {
      if (((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) == ((undefined *)GEN_TOP(0x0))) || ((REFG(undefined4, 0x15d75e8) & 0x1000) != 0)) {
        uVar3 = (*(uint *)(((char *)(param_2) + 4)));
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)(param_2)));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = uVar3;
      }
      else {
        pDVar6 = &(*(undefined8 *)(gen_frame + 0x20));
        pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,' ');
        F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,param_2);
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x20)));
      }
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) & 0xffff0000;
    puVar7 = ((undefined4 *)GEN_TOP(0x0));
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = ((undefined *)GEN_TOP(0x0));
    if ((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) == 0) {
      puVar8 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,8,0);
      puVar7 = ((undefined4 *)GEN_TOP(0x0));
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar8 = 0;
        *(undefined1 *)(puVar8 + 1) = 0;
        puVar8[1] = puVar8[1] & 0xffff00ff;
        puVar7 = puVar8;
      }
      puVar8 = ((undefined4 *)GEN_TOP(F_00c75a63(&(*(undefined8 *)(gen_frame + 0x0)),puVar7)));
      uVar3 = puVar8[1];
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = ((undefined *)GEN_TOP(*puVar8));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = uVar3;
LAB_00c7844d: ;
      uVar3 = (*(uint *)(gen_frame + 0x50));
      if ((*(uint *)(gen_frame + 0x50)) == 0) {
        uVar2 = uVar1 & 0x1000;
      }
      else {
        uVar2 = uVar1 & 0x400;
      }
      if (uVar2 != 0) {
        if ((*(uint *)(gen_frame + 0x50)) == 0) {
LAB_00c7854c: ;
          F_00c7607b(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,((char *)REFP(0x1126658)));
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            pDVar6 = &(*(undefined8 *)(gen_frame + 0x18));
            pDVar4 = &(*(undefined8 *)(gen_frame + 0x40));
            pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126670)));
            F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,',');
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,',');
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x48)));
          }
          else {
            if (((*(uint *)(gen_frame + 0x50)) == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00c7854c;
            pDVar6 = &(*(undefined8 *)(gen_frame + 0x48));
            pDVar4 = &(*(undefined8 *)(gen_frame + 0x18));
            pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126664)));
            F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar4,pDVar6);
          }
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,',');
          F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
        }
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(gen_frame + 0x34));
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x1126684)));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
      }
      uVar2 = F_00c7651f(&(*(undefined8 *)(gen_frame + 0x0)));
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x18));
      pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,'(');
      F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,uVar2);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
      F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,')');
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
      if ((uVar3 != 0) && ((uVar1 & 0x700) != 0x200)) {
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x28)));
      }
      if ((~(REFG(undefined4, 0x15d75e8) >> 8) & 1) == 0) {
        uVar3 = F_00c765ff(&(*(undefined8 *)(gen_frame + 0x0)));
        F_00c7538a(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,uVar3);
      }
      else {
        pDVar6 = ((undefined *)GEN_TOP(F_00c765ff(&(*(undefined8 *)(gen_frame + 0x0)))));
        F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,pDVar6);
      }
      if (((~(REFG(undefined4, 0x15d75e8) >> 2) & 1) != 0) && (puVar7 != ((undefined4 *)GEN_TOP(0x0)))) {
        *puVar7 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38)))));
        puVar7[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4)));
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
      }
      goto LAB_00c788d6;
    }
    uVar3 = F_00c75a63(&(*(undefined8 *)(gen_frame + 0x8)),0);
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x40));
    pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x10919e8)));
    F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,uVar3);
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x40)));
    pDVar9 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38)))));
    if ((REFG(undefined4, 0x15d75e8) & 0x1000) == 0) goto LAB_00c7844d;
  }
LAB_00c78bfe: ;
  *param_1 = pDVar9;
  uVar1 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4)));
LAB_00c78c06: ;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: UnDecorator::getDecoratedName */
GEN_LIB GEN_NOFRAME uint F_00c78c0e(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc78c0eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x28, 8);
  char cVar1;
  char * pcVar2;
  int * piVar3;
  uint uVar4;
  undefined * pDVar5;
  uint uVar6;
  
  if ((REFG(undefined4, 0x15d75e8) & 0x2000) != 0) {
    REFG(undefined4, 0x15d75e8) = REFG(undefined4, 0x15d75e8) & 0xffffdfff;
    F_00c7a3ef(&(*(undefined8 *)(gen_frame + 0x0)),0);
    REFG(undefined4, 0x15d75e8) = REFG(undefined4, 0x15d75e8) | 0x2000;
LAB_00c78c43: ;
    (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0)))));
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4)));
    return (uint)param_1;
  }
  if (*REFG(char * PTR32, 0x15d75d8) != '?') {
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      F_00c757a7(param_1 GEN_EDX_ARG,1);
      return (uint)param_1;
    }
    goto LAB_00c78e0c;
  }
  pcVar2 = REFG(char * PTR32, 0x15d75d8) + 1;
  if ((*pcVar2 == '?') && (REFG(char * PTR32, 0x15d75d8)[2] == '?')) {
    REFG(char * PTR32, 0x15d75d8) = pcVar2;
    F_00c78c0e(&(*(undefined8 *)(gen_frame + 0x0)));
    for (; *REFG(char * PTR32, 0x15d75d8) != '\0'; REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1) {
    }
    goto LAB_00c78c43;
  }
  REFG(char * PTR32, 0x15d75d8) = pcVar2;
  F_00c77e6e(&(*(undefined8 *)(gen_frame + 0x18)));
  uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
  pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
  if (((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) == ((undefined *)GEN_TOP(0x0))) || (((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0x200) == 0)) {
    (*(int *)(gen_frame + 0x20)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x20)) = 1;
  }
  uVar6 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) >> 0xf;
  if ('\x01' < (char)(*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)))) goto LAB_00c78cc6;
  if (((*REFG(char * PTR32, 0x15d75d8) != '\0') && (*REFG(char * PTR32, 0x15d75d8) != '@')) &&
     (F_00c78e7c(&(*(undefined8 *)(gen_frame + 0x10))), (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) != ((undefined *)GEN_TOP(0x0)))) {
    if (REFG(char, 0x15d75f0) == '\0') {
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4)));
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x112652c)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x18)));
      uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
    }
    else {
      REFG(char, 0x15d75f0) = '\0';
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = pDVar5;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = uVar4;
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x10)));
      cVar1 = *REFG(char * PTR32, 0x15d75d8);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      if (cVar1 == '@') goto LAB_00c78dc7;
      piVar3 = ((int *)GEN_TOP(F_00c78e7c(&(*(undefined8 *)(gen_frame + 0x0)))));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(*piVar3));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = piVar3[1];
      uVar4 = piVar3[1];
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = ((undefined *)GEN_TOP(*piVar3));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = uVar4;
      F_00c7607b(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x112652c)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x18)));
      uVar4 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4)));
      pDVar5 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0)))));
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar4;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = pDVar5;
  }
LAB_00c78dc7: ;
  if (((*(int *)(gen_frame + 0x20)) != 0) && (pDVar5 != ((undefined *)GEN_TOP(0x0)))) {
    uVar4 = uVar4 | 0x200;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar4;
  }
  if ((uVar6 & 1) != 0) {
    uVar4 = uVar4 | 0x8000;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar4;
  }
  if ((pDVar5 != ((undefined *)GEN_TOP(0x0))) && ((uVar4 & 0x1000) == 0)) {
    if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
      if (*REFG(char * PTR32, 0x15d75d8) != '@') {
LAB_00c78e0c: ;
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
        (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
        *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
        return (uint)param_1;
      }
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    }
    if ((((REFG(undefined4, 0x15d75e8) & 0x1000) == 0) || ((*(int *)(gen_frame + 0x20)) != 0)) || ((uVar4 & 0x8000) != 0)) {
      F_00c77f54(param_1,&(*(undefined8 *)(gen_frame + 0x18)));
      return (uint)param_1;
    }
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0))))) = ((undefined *)GEN_TOP(0x0));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4))) & 0xffff0000;
    F_00c77f54(&(*(undefined8 *)(gen_frame + 0x8)),&(*(undefined8 *)(gen_frame + 0x0)));
  }
LAB_00c78cc6: ;
  (*(undefined * PTR32 *)((char *)(param_1))) = pDVar5;
  (*(uint *)(((char *)(param_1) + 4))) = uVar4;
  return (uint)param_1;
}

/* ref: UnDecorator::getScope */
GEN_LIB GEN_NOFRAME uint F_00c78e7c(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc78e7cu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xbc, 4);
  char cVar1;
  bool bVar2;
  char * pcVar3;
  undefined * pDVar4;
  uint uVar5;
  undefined * pDVar6;
  undefined4 * puVar7;
  char * pcVar8;
  undefined1 * puVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined * puVar12;
  undefined * PTR32 * ppDVar13;
  undefined * pDVar14;
  
  *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 0;
  (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
  (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
  bVar2 = false;
LAB_00c790ca: ;
  do {
    while( true ) {
      if ((((char)(*(uint *)(((char *)(param_1) + 4))) != '\0') || (*REFG(char * PTR32, 0x15d75d8) == '\0')) || (*REFG(char * PTR32, 0x15d75d8) == '@')) {
        if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
          if ((*(undefined * PTR32 *)((char *)(param_1))) == ((undefined *)GEN_TOP(0x0))) {
            F_00c758e0(param_1 GEN_EDX_ARG,1);
          }
          else {
            pDVar14 = &(*(undefined8 *)(gen_frame + 0x78));
            puVar12 = &REFG(undefined, 0x112652c);
            puVar10 = ((undefined1 *)(gen_frame + 0x70));
            pDVar4 = param_1;
            pDVar6 = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x80)) GEN_EDX_ARG,1)));
            pDVar6 = ((undefined *)GEN_TOP(F_00c762c9(pDVar6 GEN_EDX_ARG,puVar10,puVar12)));
            puVar7 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar14,pDVar4)));
            (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar7));
            (*(uint *)(((char *)(param_1) + 4))) = puVar7[1];
          }
        }
        else if (*REFG(char * PTR32, 0x15d75d8) != '@') {
          (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
          *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
          (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
        }
        return (uint)param_1;
      }
      if ((REFG(char, 0x15d75f0) != '\0') && (REFG(char, 0x15d75f1) == '\0')) {
        return (uint)param_1;
      }
      if ((*(undefined * PTR32 *)((char *)(param_1))) != ((undefined *)GEN_TOP(0x0))) {
        ppDVar13 = &(*(undefined * PTR32 *)(gen_frame + 0x98));
        pDVar14 = param_1;
        pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,((char *)REFP(0x112652c)));
        F_00c75fe1(pDVar4 GEN_EDX_ARG,ppDVar13,pDVar14);
        (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)(gen_frame + 0x98));
        (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(gen_frame + 0x9c));
        if (bVar2) {
          ppDVar13 = &(*(undefined * PTR32 *)(gen_frame + 0x90));
          pDVar14 = param_1;
          pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,'[');
          F_00c75fe1(pDVar4 GEN_EDX_ARG,ppDVar13,pDVar14);
          (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)(gen_frame + 0x90));
          (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(gen_frame + 0x94));
          bVar2 = false;
        }
      }
      pcVar3 = REFG(char * PTR32, 0x15d75d8);
      pDVar14 = param_1;
      if (*REFG(char * PTR32, 0x15d75d8) == '?') break;
      puVar10 = ((undefined1 *)(gen_frame + 0x70));
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x78));
LAB_00c790ad: ;
      pDVar4 = ((undefined *)GEN_TOP(F_00c77a54(pDVar4,1,0)));
LAB_00c790bb: ;
      puVar7 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,puVar10,pDVar14)));
LAB_00c790c0: ;
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar7));
      (*(uint *)(((char *)(param_1) + 4))) = puVar7[1];
    }
    pcVar8 = REFG(char * PTR32, 0x15d75d8) + 1;
    REFG(char * PTR32, 0x15d75d8) = pcVar8;
    cVar1 = *pcVar8;
    if (cVar1 == '$') {
      puVar10 = ((undefined1 *)(gen_frame + 0x30));
      REFG(char * PTR32, 0x15d75d8) = pcVar3;
      pDVar4 = &(*(undefined8 *)(gen_frame + 0x80));
      goto LAB_00c790ad;
    }
    if (cVar1 != '%') {
      if (cVar1 != '?') {
        if (cVar1 == 'A') goto LAB_00c79048;
        if (cVar1 != 'I') {
          puVar10 = ((undefined1 *)(gen_frame + 0x10));
          pDVar4 = ((undefined *)GEN_TOP(F_00c76a47(((undefined1 *)(gen_frame + 0x0)),puVar10,param_1)));
          goto LAB_00c790bb;
        }
        puVar10 = ((undefined1 *)(gen_frame + 0x58));
        uVar11 = 0x5d;
        puVar9 = ((undefined1 *)(gen_frame + 0x68));
        REFG(char * PTR32, 0x15d75d8) = pcVar3 + 2;
        pDVar4 = ((undefined *)GEN_TOP(F_00c77a54(((undefined1 *)(gen_frame + 0x48)),1,0)));
        pDVar4 = ((undefined *)GEN_TOP(F_00c762a5(pDVar4 GEN_EDX_ARG,puVar9,uVar11)));
        puVar7 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,puVar10,pDVar14)));
        bVar2 = true;
        goto LAB_00c790c0;
      }
      if ((pcVar3[2] != '_') || (pcVar3[3] != '?')) {
        uVar5 = F_00c78c0e(((undefined1 *)(gen_frame + 0x18)));
        ppDVar13 = &(*(undefined * PTR32 *)(gen_frame + 0xa0));
        pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x60)) GEN_EDX_ARG,'`');
        F_00c75fe1(pDVar4 GEN_EDX_ARG,ppDVar13,uVar5);
        (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0xb0))))) = (*(undefined * PTR32 *)(gen_frame + 0xa0));
        (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0xb0))) + 4))) = (*(uint *)(gen_frame + 0xa4));
        F_00c76029(&(*(undefined8 *)(gen_frame + 0xb0)) GEN_EDX_ARG,'\'');
        puVar10 = ((undefined1 *)(gen_frame + 0x50));
        pDVar4 = &(*(undefined8 *)(gen_frame + 0xb0));
        goto LAB_00c790bb;
      }
      REFG(char * PTR32, 0x15d75d8) = pcVar3 + 2;
      puVar10 = ((undefined1 *)(gen_frame + 0x8));
      pDVar4 = ((undefined *)GEN_TOP(F_00c77327(((undefined1 *)(gen_frame + 0x38)),0,0)));
      puVar7 = ((undefined4 *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,puVar10,pDVar14)));
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(*puVar7));
      (*(uint *)(((char *)(param_1) + 4))) = puVar7[1];
      if (*REFG(char * PTR32, 0x15d75d8) == '@') {
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      }
      goto LAB_00c790ca;
    }
LAB_00c79048: ;
    F_00c75bd6(&(*(undefined8 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(char * PTR32, 0x15d75d8),'@');
    ppDVar13 = &(*(undefined * PTR32 *)(gen_frame + 0xa8));
    pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x40)) GEN_EDX_ARG,((char *)REFP(0x11264ec)));
    F_00c75fe1(pDVar4 GEN_EDX_ARG,ppDVar13,pDVar14);
    (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)(gen_frame + 0xa8));
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(gen_frame + 0xac));
    if (*((int *)GEN_TOP(REFG(undefined4, 0x15d75d0))) != 9) {
      F_00c75917(REFG(undefined4, 0x15d75d0) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x88)));
    }
  } while( true );
}

/* ref: UnDecorator::getFunctionIndirectType */
GEN_LIB GEN_NOFRAME uint F_00c79133(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc79133u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x3c, 4);
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
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
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
      iVar2 = cVar1 - 0x44;
      bVar11 = uVar10 == 7;
LAB_00c791ca: ;
      if (bVar11 || bVar12 != iVar2 < 0) goto LAB_00c791cf;
    }
  }
  else {
    REFG(char * PTR32, 0x15d75d8) = pcVar3;
    if (-1 < (int)uVar10) {
      bVar12 = SBORROW4(uVar10,3);
      iVar2 = cVar1 - 0x39;
      bVar11 = uVar10 == 3;
      goto LAB_00c791ca;
    }
  }
  uVar10 = 0xffffffff;
LAB_00c791cf: ;
  if (uVar10 == 0xffffffff) {
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
    (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
    *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
    return (uint)param_1;
  }
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) & 0xffff0000;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = ((undefined *)GEN_TOP(*param_2));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = param_2[1];
  if ((uVar10 & 2) != 0) {
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x30));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x20));
    pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x112652c)));
    F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x30));
      pDVar6 = &(*(undefined8 *)(gen_frame + 0x18));
      pDVar4 = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
      F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
    }
    else {
      uVar5 = F_00c78e7c(&(*(undefined8 *)(gen_frame + 0x8)));
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x18));
      pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,' ');
      F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar9,uVar5);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x30)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
      uVar5 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
    }
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = uVar5;
    if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x30));
      pDVar6 = param_1;
      pDVar4 = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
      F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9);
      return (uint)param_1;
    }
    if (*REFG(char * PTR32, 0x15d75d8) != '@') {
      (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(((char *)(param_1) + 4))) & 0xffff00ff;
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
      *(undefined1 *)&(*(uint *)(((char *)(param_1) + 4))) = 2;
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if (((byte)REFG(undefined4, 0x15d75e8) & 0x60) == 0x60) {
      uVar5 = F_00c756cc(&(*(undefined8 *)(gen_frame + 0x0)));
      F_00c7538a(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar5);
    }
    else {
      puVar7 = ((undefined4 *)GEN_TOP(F_00c756cc(&(*(undefined8 *)(gen_frame + 0x0)))));
      uVar5 = puVar7[1];
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = ((undefined *)GEN_TOP(*puVar7));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = uVar5;
    }
  }
  if ((uVar10 & 4) != 0) {
    if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) {
      uVar5 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x0)));
      F_00c7538a(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,uVar5);
    }
    else {
      uVar5 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x0)));
      pDVar9 = &(*(undefined8 *)(gen_frame + 0x18));
      pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,' ');
      F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar9,uVar5);
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x30)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
    }
  }
  if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) {
    uVar5 = F_00c75ece(&(*(undefined8 *)(gen_frame + 0x0)));
    F_00c7538a(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,uVar5);
  }
  else {
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x30));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x0));
    pDVar4 = ((undefined *)GEN_TOP(F_00c75ece(&(*(undefined8 *)(gen_frame + 0x8)))));
    piVar8 = ((int *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9)));
    uVar5 = piVar8[1];
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = ((undefined *)GEN_TOP(*piVar8));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = uVar5;
  }
  if (*param_2 != 0) {
    pDVar9 = &(*(undefined8 *)(gen_frame + 0x30));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x18));
    pDVar4 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,'(');
    F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar6,pDVar9);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
    F_00c76029(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,')');
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4)));
  }
  piVar8 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,8,0);
  if (piVar8 == ((int *)GEN_TOP(0x0))) {
    piVar8 = ((int *)GEN_TOP(0x0));
  }
  else {
    *(undefined1 *)(piVar8 + 1) = 0;
    piVar8[1] = piVar8[1] & 0xffff00ff;
    *piVar8 = 0;
  }
  F_00c75a63(&(*(undefined * PTR32 *)(gen_frame + 0x10)),piVar8);
  uVar5 = F_00c7651f(&(*(undefined8 *)(gen_frame + 0x0)));
  pDVar9 = &(*(undefined8 *)(gen_frame + 0x18));
  pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,'(');
  F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar9,uVar5);
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x20))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x20))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
  F_00c76029(&(*(undefined8 *)(gen_frame + 0x20)) GEN_EDX_ARG,')');
  F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x20)));
  if ((((byte)REFG(undefined4, 0x15d75e8) & 0x60) != 0x60) && ((uVar10 & 2) != 0)) {
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x28)));
  }
  if ((~(REFG(undefined4, 0x15d75e8) >> 8) & 1) == 0) {
    uVar10 = F_00c765ff(&(*(undefined8 *)(gen_frame + 0x0)));
    F_00c7538a(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,uVar10);
  }
  else {
    pDVar9 = ((undefined *)GEN_TOP(F_00c765ff(&(*(undefined8 *)(gen_frame + 0x0)))));
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,pDVar9);
  }
  if (piVar8 == ((int *)GEN_TOP(0x0))) {
    F_00c757a7(param_1 GEN_EDX_ARG,3);
  }
  else {
    *piVar8 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30)))));
    piVar8[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4)));
    (*(undefined * PTR32 *)((char *)(param_1))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
    (*(uint *)(((char *)(param_1) + 4))) = (*(uint *)(gen_frame + 0x14));
  }
  return (uint)param_1;
}

/* ref: UnDecorator::getDataIndirectType_00c79512 */
GEN_LIB GEN_NOFRAME uint F_00c79512(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc79512u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL(0x58, 8);
  char cVar1;
  char * pcVar2;
  undefined4 * puVar3;
  undefined * pDVar4;
  int * piVar5;
  uint uVar6;
  undefined * pDVar7;
  undefined * pDVar8;
  uint uVar9;
  undefined * pDVar10;
  int TVar11;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
  pDVar10 = ((undefined *)GEN_TOP(0x0));
  (*(char *)(gen_frame + 0x53)) = '\0';
  if (cVar1 == '\0') {
    if ((*(int *)&gen_args[4]) == 0) {
      if (*(*(int * PTR32 *)&gen_args[1]) == 0) {
        piVar5 = (*(int * PTR32 *)&gen_args[3]);
        if (*(*(int * PTR32 *)&gen_args[3]) == 0) goto LAB_00c79a9f;
      }
      else {
        piVar5 = (*(int * PTR32 *)&gen_args[1]);
        if ((((*(int * PTR32 *)&gen_args[1])[1] & 0x100U) == 0) && (*(*(int * PTR32 *)&gen_args[3]) != 0)) {
          pDVar8 = &(*(undefined8 *)(gen_frame + 0x18));
          piVar5 = (*(int * PTR32 *)&gen_args[3]);
          pDVar7 = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
          F_00c75fe1(pDVar7 GEN_EDX_ARG,pDVar8,piVar5);
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,' ');
          F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
          return (uint)(*(undefined * PTR32 *)&gen_args[0]);
        }
      }
      F_00c7625d((*(undefined * PTR32 *)&gen_args[0]),1,piVar5);
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
LAB_00c79a9f: ;
    F_00c757a7((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1);
    return (uint)(*(undefined * PTR32 *)&gen_args[0]);
  }
  if ((cVar1 != '$') ||
     (F_00c76689(&(*(undefined8 *)(gen_frame + 0x28)),&(*(char * PTR32 *)&gen_args[2]),&(*(char *)(gen_frame + 0x53)),(*(int *)&gen_args[4])),
     (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) == ((undefined *)GEN_TOP(0x0)))) {
    cVar1 = *REFG(char * PTR32, 0x15d75d8);
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) & 0xffff0000;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = ((undefined *)GEN_TOP(0x0));
    uVar9 = (int)cVar1 - (((cVar1 < 'A') - 1 & 0x2b) + 0x16);
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) & 0xffff0000;
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40))))) = ((undefined *)GEN_TOP(0x0));
    do {
      pcVar2 = (*(char * PTR32 *)&gen_args[2]);
      if (uVar9 == 4) {
        if (((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) != 0) && ((~(REFG(undefined4, 0x15d75e8) >> 0x11) & 1) != 0)) {
          if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40))))) == ((undefined *)GEN_TOP(0x0))) {
            TVar11 = 8;
LAB_00c796ab: ;
            pcVar2 = F_00c751d3(TVar11);
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x40)) GEN_EDX_ARG,pcVar2);
          }
          else {
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,' ');
            pcVar2 = F_00c751d3(8);
            pDVar8 = &(*(undefined8 *)(gen_frame + 0x0));
            pDVar7 = &(*(undefined8 *)(gen_frame + 0x48));
LAB_00c79696: ;
            puVar3 = ((undefined4 *)GEN_TOP(F_00c762c9(pDVar7 GEN_EDX_ARG,pDVar8,pcVar2)));
            uVar9 = puVar3[1];
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40))))) = ((undefined *)GEN_TOP(*puVar3));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4))) = uVar9;
          }
        }
      }
      else if (uVar9 == 5) {
        if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) != 0) {
          if (pDVar10 == ((undefined *)GEN_TOP(0x0))) {
            pcVar2 = F_00c751d3(10);
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x38)) GEN_EDX_ARG,pcVar2);
            pDVar10 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38)))));
          }
          else {
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = pDVar10;
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,' ');
            pcVar2 = F_00c751d3(10);
            piVar5 = ((int *)GEN_TOP(F_00c762c9(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),pcVar2)));
            pDVar10 = ((undefined *)GEN_TOP(*piVar5));
            uVar9 = piVar5[1];
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x38))))) = pDVar10;
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4))) = uVar9;
          }
        }
      }
      else {
        if (uVar9 != 8) {
          if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
            REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
          }
          if (0x1f < uVar9) goto LAB_00c797e2;
          F_00c75b99(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(char * PTR32 *)&gen_args[2]));
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = ((undefined *)GEN_TOP(0x0));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
          F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x48)));
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4)));
          if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40))))) != ((undefined *)GEN_TOP(0x0))) {
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,' ');
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4)));
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x40)));
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4)));
          }
          if (pDVar10 != ((undefined *)GEN_TOP(0x0))) {
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = pDVar10;
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x38))) + 4)));
            F_00c76029(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,' ');
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4)));
            F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x30)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x48)));
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x30)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x30))) + 4)));
          }
          if ((uVar9 & 0x10) != 0) {
            if ((*(int *)&gen_args[4]) != 0) goto LAB_00c797e2;
            if (*pcVar2 == '\0') {
              if (*REFG(char * PTR32, 0x15d75d8) != '\0') {
                uVar6 = F_00c78e7c(&(*(undefined8 *)(gen_frame + 0x0)));
                F_00c7538a(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar6);
                goto LAB_00c79892;
              }
            }
            else {
              pDVar8 = &(*(undefined8 *)(gen_frame + 0x48));
              pDVar7 = &(*(undefined8 *)(gen_frame + 0x18));
              pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x112652c)));
              F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar7,pDVar8);
              (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
              (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
              pDVar8 = &(*(undefined8 *)(gen_frame + 0x48));
              if (*REFG(char * PTR32, 0x15d75d8) == '\0') {
                pDVar7 = &(*(undefined8 *)(gen_frame + 0x18));
                pDVar4 = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
                F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar7,pDVar8);
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
                uVar6 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
              }
              else {
                pDVar7 = &(*(undefined8 *)(gen_frame + 0x0));
                pDVar4 = ((undefined *)GEN_TOP(F_00c78e7c(((undefined1 *)(gen_frame + 0x8)))));
                piVar5 = ((int *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar7,pDVar8)));
                uVar6 = piVar5[1];
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = ((undefined *)GEN_TOP(*piVar5));
              }
              (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = uVar6;
LAB_00c79892: ;
              cVar1 = *REFG(char * PTR32, 0x15d75d8);
              if (cVar1 != '\0') {
                REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
                if (cVar1 != '@') goto LAB_00c797e2;
                goto LAB_00c798b7;
              }
            }
            F_00c75aa7(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,1);
          }
LAB_00c798b7: ;
          if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) == 0) {
            if (((byte)uVar9 & 0xc) == 0xc) {
              uVar6 = F_00c77eb8(&(*(undefined8 *)(gen_frame + 0x0)));
              F_00c7538a(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,uVar6);
            }
          }
          else if (((byte)uVar9 & 0xc) == 0xc) {
            if ((*(int *)&gen_args[4]) != 0) {
LAB_00c797e2: ;
              (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) & 0xffff00ff;
              (*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[0])))) = ((undefined *)GEN_TOP(0x0));
              *(undefined1 *)&(*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = 2;
              return (uint)(*(undefined * PTR32 *)&gen_args[0]);
            }
            pDVar8 = &(*(undefined8 *)(gen_frame + 0x48));
            pDVar7 = &(*(undefined8 *)(gen_frame + 0x0));
            pDVar4 = ((undefined *)GEN_TOP(F_00c77eb8(((undefined1 *)(gen_frame + 0x8)))));
            piVar5 = ((int *)GEN_TOP(F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar7,pDVar8)));
            uVar6 = piVar5[1];
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = ((undefined *)GEN_TOP(*piVar5));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = uVar6;
          }
          if ((uVar9 & 2) != 0) {
            pDVar8 = &(*(undefined8 *)(gen_frame + 0x48));
            pDVar7 = &(*(undefined8 *)(gen_frame + 0x18));
            pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126690)));
            F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar7,pDVar8);
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
          }
          if ((uVar9 & 1) != 0) {
            pDVar8 = &(*(undefined8 *)(gen_frame + 0x48));
            pDVar7 = &(*(undefined8 *)(gen_frame + 0x18));
            pDVar4 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x1126688)));
            F_00c75fe1(pDVar4 GEN_EDX_ARG,pDVar7,pDVar8);
            (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
            (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
          }
          if ((*(int *)&gen_args[4]) == 0) {
            if (*(*(int * PTR32 *)&gen_args[1]) == 0) {
              piVar5 = (*(int * PTR32 *)&gen_args[3]);
              if (*(*(int * PTR32 *)&gen_args[3]) != 0) {
LAB_00c799f0: ;
                pDVar8 = &(*(undefined8 *)(gen_frame + 0x18));
                pDVar7 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,' ');
                F_00c75fe1(pDVar7 GEN_EDX_ARG,pDVar8,piVar5);
                pDVar8 = &(*(undefined8 *)(gen_frame + 0x18));
                goto LAB_00c79a08;
              }
            }
            else {
              uVar9 = (*(int * PTR32 *)&gen_args[1])[1];
              if (((uVar9 & 0x100) == 0) && (*(*(int * PTR32 *)&gen_args[3]) != 0)) {
                pDVar8 = &(*(undefined8 *)(gen_frame + 0x18));
                piVar5 = (*(int * PTR32 *)&gen_args[3]);
                pDVar7 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,' ');
                F_00c75fe1(pDVar7 GEN_EDX_ARG,pDVar8,piVar5);
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
                F_00c76029(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,' ');
                pDVar8 = ((undefined *)GEN_TOP(F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),(*(int * PTR32 *)&gen_args[1]))));
LAB_00c79a08: ;
                F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x48)) GEN_EDX_ARG,pDVar8);
              }
              else {
                piVar5 = (*(int * PTR32 *)&gen_args[1]);
                if ((uVar9 & 0x800) == 0) goto LAB_00c799f0;
                (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48))))) = ((undefined *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
                (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) = uVar9;
              }
            }
          }
          uVar9 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) | 0x100;
          if ((*(char *)(gen_frame + 0x53)) != '\0') {
            uVar9 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x48))) + 4))) | 0x2100;
          }
          (*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[0])))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x48)))));
          goto LAB_00c79564;
        }
        if ((~(REFG(undefined4, 0x15d75e8) >> 1) & 1) != 0) {
          if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40))))) == ((undefined *)GEN_TOP(0x0))) {
            TVar11 = 9;
            goto LAB_00c796ab;
          }
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x40)))));
          (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x40))) + 4)));
          F_00c76029(&(*(undefined8 *)(gen_frame + 0x28)) GEN_EDX_ARG,' ');
          pcVar2 = F_00c751d3(9);
          pDVar8 = &(*(undefined8 *)(gen_frame + 0x10));
          pDVar7 = &(*(undefined8 *)(gen_frame + 0x28));
          goto LAB_00c79696;
        }
      }
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      if ((*REFG(char * PTR32, 0x15d75d8) == '$') &&
         (F_00c76689(&(*(undefined * PTR32 *)(gen_frame + 0x20)),&(*(char * PTR32 *)&gen_args[2]),&(*(char *)(gen_frame + 0x53)),(*(int *)&gen_args[4])),
         (*(undefined * PTR32 *)(gen_frame + 0x20)) != ((undefined *)GEN_TOP(0x0)))) goto LAB_00c7970d;
      uVar9 = (int)*REFG(char * PTR32, 0x15d75d8) - (((*REFG(char * PTR32, 0x15d75d8) < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  (*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[0])))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x28)))));
  uVar9 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x28))) + 4)));
  goto LAB_00c79564;
LAB_00c7970d: ;
  (*(undefined * PTR32 *)((char *)((*(undefined * PTR32 *)&gen_args[0])))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  uVar9 = (*(uint *)(gen_frame + 0x24));
LAB_00c79564: ;
  (*((uint *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 4))))) = uVar9;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: UnDecorator::operator_char* */
GEN_LIB GEN_NOFRAME char * F_00c79ab1(GEN_P(undefined * this, unsigned int gen_a0))
{
  GEN_ENTER(0xc79ab1u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x24, 12);
  char cVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  char * pcVar4;
  undefined * pDVar5;
  char * pcVar6;
  undefined * PTR32 * ppDVar7;
  
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
  pDVar5 = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
  uVar2 = (*(uint *)(gen_frame + 0x14)) & 0xffff0000;
  if (REFG(char * PTR32, 0x15d75dc) != ((char *)GEN_TOP(0x0))) {
    if (*REFG(char * PTR32, 0x15d75dc) == '?') {
      if (REFG(char * PTR32, 0x15d75dc)[1] == '@') {
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 2;
        uVar2 = F_00c78c0e(((undefined1 *)(gen_frame + 0x8)));
        ppDVar7 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
        this_00 = (undefined *)F_00c75b99(((undefined *)GEN_TOP((gen_frame + 0x0))) GEN_EDX_ARG,((char *)REFP(0x112669c)));
        F_00c75fe1(this_00 GEN_EDX_ARG,ppDVar7,uVar2);
        uVar2 = (*(uint *)(gen_frame + 0x14));
        pDVar5 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        goto LAB_00c79b46;
      }
      if (REFG(char * PTR32, 0x15d75dc)[1] == '$') {
        puVar3 = ((undefined4 *)GEN_TOP(F_00c778fd((gen_frame + 0x0),0)));
        pDVar5 = ((undefined *)GEN_TOP(*puVar3));
        uVar2 = puVar3[1];
        if ((char)uVar2 != '\x02') goto LAB_00c79b46;
        REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75dc);
      }
    }
    puVar3 = ((undefined4 *)GEN_TOP(F_00c78c0e((gen_frame + 0x0))));
    pDVar5 = ((undefined *)GEN_TOP(*puVar3));
    uVar2 = puVar3[1];
  }
LAB_00c79b46: ;
  if ((char)uVar2 == '\x03') {
    return ((char *)GEN_TOP(0x0));
  }
  if (((char)uVar2 == '\x02') || (((REFG(undefined4, 0x15d75e8) & 0x1000) == 0 && (*REFG(char * PTR32, 0x15d75d8) != '\0')))) {
    F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,REFG(char * PTR32, 0x15d75dc));
  }
  else {
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = pDVar5;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar2;
  }
  if (REFG(char * PTR32, 0x15d75e0) == ((char *)GEN_TOP(0x0))) {
    uVar2 = 0;
    if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))))))((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))));
    }
    REFG(undefined4, 0x15d75e4) = ((undefined *)GEN_TOP((uVar2 + 1)));
    REFG(char * PTR32, 0x15d75e0) = ((char *)GEN_TOP(((code *)REFG(gen_code32, 0x15d75b8))(uVar2 + 8 & 0xfffffff8)));
    if (REFG(char * PTR32, 0x15d75e0) == ((char *)GEN_TOP(0x0))) {
      return ((char *)GEN_TOP(0x0));
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = REFG(undefined4, 0x15d75e4);
  F_00c757ec(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,REFG(char * PTR32, 0x15d75e0),(int)REFG(undefined4, 0x15d75e4));
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
GEN_LIB GEN_NOFRAME uint F_00c79bf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc79bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  if (cVar1 == '\0') {
    F_00c757a7(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4);
    if ((*(undefined * PTR32 *)((char *)(param_2))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
    }
    if ((*(undefined * PTR32 *)((char *)(param_3))) != ((undefined *)GEN_TOP(0x0))) {
      if ((*(undefined * PTR32 *)((char *)(param_2))) != ((undefined *)GEN_TOP(0x0))) {
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,' ');
      }
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3);
    }
    *param_1 = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x0)))));
    param_1[1] = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x0))) + 4)));
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    F_00c79512(&(*(undefined8 *)(gen_frame + 0x0)),param_3,param_4,param_2,0);
    F_00c7701a(param_1,&(*(undefined8 *)(gen_frame + 0x0)),(uint)(*param_4 == '*'));
  }
  else {
    F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4);
    if (((*(undefined * PTR32 *)((char *)(param_2))) != ((undefined *)GEN_TOP(0x0))) &&
       (((*(undefined * PTR32 *)((char *)(param_3))) == ((undefined *)GEN_TOP(0x0)) || (((*(uint *)(((char *)(param_3) + 4))) & 0x100) == 0)))) {
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
    }
    if ((*(undefined * PTR32 *)((char *)(param_3))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3);
    }
    F_00c79133(param_1,&(*(undefined8 *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FID_conflict_getPointerType_00c79ce9 */
GEN_LIB GEN_NOFRAME uint F_00c79ce9(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc79ce9u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00c79bf0(param_1,param_2,param_3,&REFG(undefined, 0x111869c));
  return param_1;
}

/* ref: FID_conflict_getPointerType_00c79d09 */
GEN_LIB GEN_NOFRAME uint F_00c79d09(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xc79d09u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00c79bf0(param_1,param_2,param_3,&REFG(undefined1, 0x107fc63));
  return param_1;
}

/* ref: UnDecorator::getReferenceType */
GEN_LIB GEN_NOFRAME uint F_00c79d29(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xc79d29u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  F_00c79bf0(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: ___unDName */
GEN_LIB GEN_NOFRAME uint F_00c79d47(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc79d47u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_FRAME_DECL(0xa4, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x8c);
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
  (*(undefined4 *)(gen_frame + 0x84)) = 100;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x80)) = &REFG(undefined, 0x12f6aa8);
  (*(uint volatile *)(gen_frame + 0x7c)) = 0xc79d53;
  (*(gen_code32 *)(gen_frame + 0x78)) = ((code *)REFP(0xc4d860));
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint volatile *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ 0x12f6aa8;
  (*(undefined * PTR32 volatile *)(gen_frame + 0x80)) = ((undefined *)GEN_TOP(0xfffffffe));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84);
  (*(undefined1 * PTR32 *)(gen_frame + 0x6c)) = (undefined1 *)&(*(uint *)(gen_frame + 0x0));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x74));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x74)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if (((*(int *)&gen_args[3]) != 0) && (iVar2 = F_00c5a98d(5), iVar2 != 0)) {
    F_00c5aa4f(5);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x80)) = ((undefined *)GEN_TOP(0x0));
    REFG(int, 0x15d75b8) = iVar1;
    *(undefined4 *)&REFG(undefined, 0x15d75bc) = (*(undefined4 *)&gen_args[4]);
    *(undefined4 *)&REFG(undefined, 0x15d75c8) = 0;
    *(undefined4 *)&REFG(undefined, 0x15d75c0) = 0;
    *(undefined4 *)&REFG(undefined, 0x15d75c4) = 0;
    F_00c75624(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),0,(*(uint *)&gen_args[5]) & 0xffff);
    pcVar3 = F_00c79ab1(((undefined1 *)(gen_frame + 0x10)));
    (*(char * PTR32 *)(gen_frame + 0x68)) = pcVar3;
    F_00c74b91(&REFG(int, 0x15d75b8) GEN_EDX_ARG);
    (*(undefined * PTR32 volatile *)(gen_frame + 0x80)) = ((undefined *)GEN_TOP(0xfffffffe));
    F_00c79dd8();
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x74));
    return (uint)(*(char * PTR32 *)(gen_frame + 0x68));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x74));
  return 0;
}

/* ref: FUN_00c79dd8 */
GEN_LIB GEN_NOFRAME uint F_00c79dd8(void)
{
  GEN_ENTER(0xc79dd8u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(5);
  return uVar1;
}

/* ref: FUN_00c79e72 */
GEN_LIB GEN_NOFRAME uint F_00c79e72(void)
{
  GEN_ENTER(0xc79e72u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(5);
  return uVar1;
}

/* ref: UnDecorator::getBasicDataType */
GEN_LIB GEN_NOFRAME uint F_00c79e7b(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc79e7bu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x28, 8);
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
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
  uVar8 = (uint)bVar1;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
  uVar7 = 0xffffffff;
  (*(byte *)(gen_frame + 0x23)) = 0;
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
        pcVar9 = ((char *)REFP(0x1126740));
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
        pcVar9 = ((char *)REFP(0x112672c));
      }
      goto LAB_00c7a0c5;
    }
LAB_00c7a0eb: ;
    F_00c7607b(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x11266cc)));
LAB_00c7a0f8: ;
    if (uVar7 != 0xffffffff) {
LAB_00c7a058: ;
      pDVar2 = ((undefined *)GEN_TOP(*param_2));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = ((undefined *)GEN_TOP(0x0));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = pDVar2;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = param_2[1];
      if (uVar7 != 0xfffffffe) {
        if (*param_2 == 0) {
          if ((uVar7 & 1) == 0) {
            if ((uVar7 & 2) != 0) {
              F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x11266a4)));
            }
          }
          else {
            F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x11266bc)));
            if ((uVar7 & 2) != 0) {
              F_00c7607b(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x11266b0)));
            }
          }
        }
        F_00c79bf0(param_1,&(*(undefined8 *)(gen_frame + 0x18)),&(*(undefined8 *)(gen_frame + 0x10)),&REFG(undefined, 0x111869c));
        return (uint)param_1;
      }
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = param_2[1] | 0x800;
      F_00c79bf0(&(*(undefined8 *)(gen_frame + 0x8)),&(*(undefined8 *)(gen_frame + 0x18)),&(*(undefined8 *)(gen_frame + 0x10)),&REFG(undefined1, 0x107fc63));
      if (((*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) & 0x800) == 0) {
        F_00c7607b(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x1126194)));
      }
      *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
      uVar7 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
      goto LAB_00c7a1a5;
    }
  }
  else {
    if (uVar8 == 0x4f) {
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,((char *)REFP(0x1126448)));
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
      (*(byte *)(gen_frame + 0x23)) = bVar1;
      uVar7 = (uint)bVar1;
      if (uVar7 < 0x4e) {
        if (uVar7 < 0x4c) {
          if (uVar7 < 0x48) {
            if (uVar7 < 0x46) {
              if (uVar7 == 0) {
                REFG(byte * PTR32, 0x15d75d8) = pbVar3 + 1;
                F_00c758e0(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,1);
                goto LAB_00c7a101;
              }
              if (uVar7 == 0x24) {
                uVar7 = F_00c79e7b((int *)&(*(undefined8 *)(gen_frame + 0x8)),param_2);
                F_00c76281(param_1,((char *)REFP(0x112671c)),uVar7);
                return (uint)param_1;
              }
              if (1 < uVar7 - 0x44) goto LAB_00c7a040;
              pcVar9 = ((char *)REFP(0x1126724));
            }
            else {
              pcVar9 = ((char *)REFP(0x1126714));
            }
          }
          else if (uVar7 < 0x48) {
LAB_00c7a040: ;
            pcVar9 = ((char *)REFP(0x11266f0));
          }
          else if (uVar7 < 0x4a) {
            pcVar9 = ((char *)REFP(0x1126704));
          }
          else {
            if (0x4b < uVar7) goto LAB_00c7a040;
            pcVar9 = ((char *)REFP(0x112670c));
          }
        }
        else {
          pcVar9 = ((char *)REFP(0x11266f8));
        }
LAB_00c7a0c5: ;
        F_00c75e99(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,pcVar9);
        goto LAB_00c7a101;
      }
      if (uVar7 == 0x4e) {
        pcVar9 = &REFG(undefined, 0x11266d4);
        goto LAB_00c7a0c5;
      }
      if (uVar7 != 0x4f) {
        if (uVar7 == 0x52) {
          pcVar9 = ((char *)REFP(0x11266dc));
        }
        else {
          if (uVar7 != 0x57) {
            if (1 < uVar7 - 0x58) goto LAB_00c7a040;
            pDVar5 = &(*(undefined8 *)(gen_frame + 0x10));
            goto LAB_00c7a013;
          }
          pcVar9 = ((char *)REFP(0x11266e8));
        }
        goto LAB_00c7a0c5;
      }
      uVar7 = 0xfffffffe;
      goto LAB_00c7a058;
    }
switchD_00c79ed1_caseD_4c: ;
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x0));
LAB_00c7a013: ;
    REFG(byte * PTR32, 0x15d75d8) = REFG(byte * PTR32, 0x15d75d8) - 1;
    piVar4 = ((int *)GEN_TOP(F_00c77d5e(pDVar5)));
    uVar7 = piVar4[1];
    pDVar2 = ((undefined *)GEN_TOP(*piVar4));
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = pDVar2;
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = uVar7;
    if (pDVar2 == ((undefined *)GEN_TOP(0x0))) {
      *param_1 = 0;
      param_1[1] = uVar7;
      return (uint)param_1;
    }
  }
LAB_00c7a101: ;
  if (uVar8 == 0x43) {
    pcVar9 = ((char *)REFP(0x11266c4));
LAB_00c7a155: ;
    pDVar10 = &(*(undefined8 *)(gen_frame + 0x18));
    pDVar6 = &(*(undefined8 *)(gen_frame + 0x8));
    pDVar5 = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar9);
    F_00c75fe1(pDVar5 GEN_EDX_ARG,pDVar6,pDVar10);
    (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18))))) = (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8)))));
    (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4)));
  }
  else if (((((uVar8 == 0x45) || (uVar8 == 0x47)) || (uVar8 == 0x49)) || (uVar8 == 0x4b)) ||
          ((uVar8 == 0x5f &&
           ((((*(byte *)(gen_frame + 0x23)) == 0x45 || ((*(byte *)(gen_frame + 0x23)) == 0x47)) ||
            (((*(byte *)(gen_frame + 0x23)) == 0x49 || (((*(byte *)(gen_frame + 0x23)) == 0x4b || ((*(byte *)(gen_frame + 0x23)) == 0x4d)))))))))) {
    pcVar9 = ((char *)REFP(0x112643c));
    goto LAB_00c7a155;
  }
  if (*param_2 != 0) {
    pDVar5 = &(*(undefined8 *)(gen_frame + 0x8));
    pDVar6 = (undefined *)F_00c75b6c(&(*(undefined8 *)(gen_frame + 0x0)) GEN_EDX_ARG,' ');
    F_00c75fe1(pDVar6 GEN_EDX_ARG,pDVar5,param_2);
    F_00c75dc2(&(*(undefined8 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x8)));
  }
  *param_1 = (int)(*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x18)))));
  uVar7 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x18))) + 4)));
LAB_00c7a1a5: ;
  param_1[1] = uVar7;
  return (uint)param_1;
}

/* ref: UnDecorator::getPrimaryDataType */
GEN_LIB GEN_NOFRAME uint F_00c7a23e(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7a23eu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined * puVar4;
  
  pcVar2 = REFG(char * PTR32, 0x15d75d8);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  uVar3 = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) & 0xffff0000;
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = uVar3;
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(0x0));
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
      (*(undefined * PTR32 *)((char *)(param_1))) = ((undefined *)GEN_TOP(0x0));
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
          (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(0x0));
          uVar3 = F_00c79512(((undefined1 *)(gen_frame + 0x0)),param_2,&REFG(undefined1, 0x107fc63),&(*(undefined8 *)(gen_frame + 0x10)),0);
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
          F_00c75b99(param_1 GEN_EDX_ARG,((char *)REFP(0x1126750)));
          return (uint)param_1;
        }
        goto LAB_00c7a2e8;
      }
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11266a4)));
      if (*param_2 != 0) {
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,' ');
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
      F_00c75e99(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((char *)REFP(0x11266a4)));
      if (*param_2 != 0) {
        F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,' ');
      }
    }
    puVar4 = &REFG(undefined, 0x1126170);
  }
  uVar3 = param_2[1];
  REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
  (*(int *)(gen_frame + 0x8)) = *param_2;
  (*(uint *)(gen_frame + 0xc)) = uVar3 | 0x100;
  F_00c79bf0(param_1,&(*(undefined8 *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0x8)),puVar4);
  return (uint)param_1;
}

/* ref: UnDecorator::getDataType */
GEN_LIB GEN_NOFRAME uint F_00c7a3ef(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7a3efu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  char cVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined * pDVar3;
  undefined * pDVar4;
  
  F_00c75754(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,param_2);
  cVar1 = *REFG(char * PTR32, 0x15d75d8);
  pDVar3 = param_1;
  if (cVar1 == '\0') {
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
    this = ((undefined *)GEN_TOP(F_00c757a7(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,1)));
  }
  else {
    if (cVar1 == '?') {
      REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) = (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x8))) + 4))) & 0xffff0000;
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x8))))) = ((undefined *)GEN_TOP(0x0));
      puVar2 = ((undefined4 *)GEN_TOP(F_00c79512(((undefined1 *)(gen_frame + 0x0)),&(*(undefined8 *)(gen_frame + 0x10)),&REFG(undefined1, 0x107fc63),&(*(undefined8 *)(gen_frame + 0x8)),0)));
      (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = ((undefined *)GEN_TOP(*puVar2));
      (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = puVar2[1];
      F_00c7a23e(param_1,&(*(undefined8 *)(gen_frame + 0x10)));
      return (uint)param_1;
    }
    if (cVar1 != 'X') {
      F_00c7a23e(param_1,&(*(undefined8 *)(gen_frame + 0x10)));
      return (uint)param_1;
    }
    REFG(char * PTR32, 0x15d75d8) = REFG(char * PTR32, 0x15d75d8) + 1;
    if ((*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) == ((undefined *)GEN_TOP(0x0))) {
      F_00c75b99(param_1 GEN_EDX_ARG,((char *)REFP(0x1126468)));
      return (uint)param_1;
    }
    pDVar4 = &(*(undefined8 *)(gen_frame + 0x10));
    this = (undefined *)F_00c75b99(&(*(undefined8 *)(gen_frame + 0x8)) GEN_EDX_ARG,((char *)REFP(0x11264e0)));
  }
  F_00c75fe1(this GEN_EDX_ARG,pDVar3,pDVar4);
  return (uint)param_1;
}

/* ref: UnDecorator::getExternalDataType */
GEN_LIB GEN_NOFRAME uint F_00c7a4be(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xc7a4beu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = F_00c751f2((undefined *)&REFG(undefined4, 0x15d75b8) GEN_EDX_ARG,8,0);
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[1] = puVar1[1] & 0xffff00ff;
  }
  F_00c7a3ef(param_1,puVar1);
  F_00c75693(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 *)((char *)&((*(undefined8 *)(gen_frame + 0x10))))) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(uint *)(((char *)&((*(undefined8 *)(gen_frame + 0x10))) + 4))) = (*(uint *)(gen_frame + 0xc));
  F_00c76029(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,' ');
  puVar2 = ((undefined4 *)GEN_TOP(F_00c75fe1(&(*(undefined8 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_2)));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}

/* ref: ___crtMessageBoxW */
GEN_LIB GEN_NOFRAME int F_00c7a537(GEN_P(LPCWSTR _LpText, unsigned int gen_a0), GEN_P(LPCWSTR _LpCaption, unsigned int gen_a1), GEN_P(UINT _UType, unsigned int gen_a2))
{
  GEN_ENTER(0xc7a537u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(LPCWSTR _LpText = (LPCWSTR)gen_a0;)
  GEN_PIN(LPCWSTR _LpCaption = (LPCWSTR)gen_a1;)
  GEN_PIN(UINT _UType = (UINT)gen_a2;)
  GEN_FRAME_DECL(0x28, 8);
  PVOID pvVar1;
  HMODULE pHVar2;
  FARPROC pFVar3;
  code * pcVar4;
  code * pcVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x20)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24);
  (*(LPCWSTR *)(gen_frame + 0x4)) = _LpText;
  (*(LPCWSTR *)(gen_frame + 0x8)) = _LpCaption;
  pvVar1 = (PVOID)F_00c5b18d();
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(PVOID *)(gen_frame + 0xc)) = pvVar1;
  if (REFG(undefined4, 0x15d7628) == (PVOID)0x0) {
    pHVar2 = gen_imp_LoadLibraryW((LPCWSTR)(*(undefined * PTR32 (*)[2])REFP(0x11267c4)));
    if (pHVar2 == (HMODULE)0x0) {
      return 0;
    }
    pFVar3 = gen_imp_GetProcAddress(pHVar2,((char *)REFP(0x11267b8)));
    if (pFVar3 == (FARPROC)0x0) {
      return 0;
    }
    REFG(undefined4, 0x15d7628) = gen_imp_EncodePointer(pFVar3);
    pFVar3 = gen_imp_GetProcAddress(pHVar2,((char *)REFP(0x11267a8)));
    REFG(undefined4, 0x15d762c) = gen_imp_EncodePointer(pFVar3);
    pFVar3 = gen_imp_GetProcAddress(pHVar2,((char *)REFP(0x1126794)));
    REFG(undefined4, 0x15d7630) = gen_imp_EncodePointer(pFVar3);
    pFVar3 = gen_imp_GetProcAddress(pHVar2,((char *)REFP(0x1126778)));
    REFG(undefined4, 0x15d7638) = gen_imp_EncodePointer(pFVar3);
    if (REFG(undefined4, 0x15d7638) != (PVOID)0x0) {
      pFVar3 = gen_imp_GetProcAddress(pHVar2,((char *)REFP(0x1126760)));
      REFG(undefined4, 0x15d7634) = gen_imp_EncodePointer(pFVar3);
    }
  }
  if ((REFG(undefined4, 0x15d7634) != (*(PVOID *)(gen_frame + 0xc))) && (REFG(undefined4, 0x15d7638) != (*(PVOID *)(gen_frame + 0xc)))) {
    pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7634));
    pcVar5 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7638));
    if (((pcVar4 != ((code *)GEN_TOP(0x0))) && (pcVar5 != ((code *)GEN_TOP(0x0)))) &&
       (((uVar6 = (*pcVar4)(), uVar6 == 0 ||
         (uVar6 = (*pcVar5)(uVar6,1,((undefined1 *)(gen_frame + 0x14)),0xc,((undefined1 *)(gen_frame + 0x0))), uVar6 == 0)) || (((*(byte *)(gen_frame + 0x1c)) & 1) == 0))))
    {
      _UType = _UType | 0x200000;
      goto LAB_00c7a676;
    }
  }
  if ((REFG(undefined4, 0x15d762c) != (*(PVOID *)(gen_frame + 0xc))) && (pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d762c)), pcVar4 != ((code *)GEN_TOP(0x0)))) {
    uVar6 = (*pcVar4)();
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    if ((uVar6 != 0) &&
       ((REFG(undefined4, 0x15d7630) != (*(PVOID *)(gen_frame + 0xc)) && (pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7630)), pcVar4 != ((code *)GEN_TOP(0x0)))))
       ) {
      uVar6 = (*pcVar4)((*(uint *)(gen_frame + 0x10)));
      (*(uint *)(gen_frame + 0x10)) = uVar6;
    }
  }
LAB_00c7a676: ;
  pcVar4 = gen_imp_DecodePointer(REFG(undefined4, 0x15d7628));
  if (pcVar4 == ((code *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar6 = (*pcVar4)((*(uint *)(gen_frame + 0x10)),(*(LPCWSTR *)(gen_frame + 0x4)),(*(LPCWSTR *)(gen_frame + 0x8)),_UType);
  return uVar6;
}

/* ref: __set_error_mode */
GEN_LIB GEN_NOFRAME int F_00c7a6a3(GEN_P(int _Mode, unsigned int gen_a0))
{
  GEN_ENTER(0xc7a6a3u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int _Mode = (int)gen_a0;)
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
GEN_LIB GEN_NOFRAME uint F_00c7a6e2(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xc7a6e2u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x134ab80) = param_1;
  return param_1;
}

/* ref: __crtGetLocaleInfoA_stat */
GEN_LIB GEN_NOFRAME int F_00c7a6f1(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(ulong param_2, unsigned int gen_a1), GEN_P(ulong param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xc7a6f1u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ulong param_2 = (ulong)gen_a1;)
  GEN_PIN(ulong param_3 = (ulong)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL(0x10010, 0);
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
        if (0) {
          (*((undefined4 *)GEN_TOP((gen_frame + 0x0)))) = 0xc7a7c9;
          return 0;
        }
        lpWideCharStr = (LPCWSTR)((int)(gen_frame + 0x0) - uVar1);
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
      (*((undefined4 *)GEN_TOP((gen_frame + 0x0)))) = 0xc7a7c9;
      return iVar3;
    }
  }
  (*((undefined4 *)GEN_TOP((gen_frame + 0x0)))) = 0xc7a7c9;
  return 0;
}

/* ref: ___crtGetLocaleInfoA */
GEN_LIB GEN_NOFRAME int F_00c7a7cb(GEN_P(undefined * _Plocinfo, unsigned int gen_a0), GEN_P(LPCWSTR _LocaleName, unsigned int gen_a1), GEN_P(ulong _LCType, unsigned int gen_a2), GEN_P(LPSTR _LpLCData, unsigned int gen_a3), GEN_P(int _CchData, unsigned int gen_a4))
{
  GEN_ENTER(0xc7a7cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCWSTR _LocaleName = (LPCWSTR)gen_a1;)
  GEN_PIN(ulong _LCType = (ulong)gen_a2;)
  GEN_PIN(LPSTR _LpLCData = (LPSTR)gen_a3;)
  GEN_PIN(int _CchData = (int)gen_a4;)
  GEN_FRAME_DECL(0x14, 12);
  int iVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,_Plocinfo);
  iVar1 = F_00c7a6f1((undefined *)((byte *)(gen_frame + 0x0)),(ulong)_LocaleName,_LCType,_LpLCData,_CchData);
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return iVar1;
}

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
  undefined2 in_stack_0000000a;
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

