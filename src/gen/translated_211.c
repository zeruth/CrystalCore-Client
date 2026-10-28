#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_010538e0 */
GEN_FRAME unsigned int GEN_THISCALL F_010538e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10538e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar1 = param_2;
  if (8 < param_2) {
    iVar1 = 8;
  }
  iVar6 = 0;
  puVar3 = param_1;
  if (3 < iVar1) {
    iVar4 = (iVar1 - 4U >> 2) + 1;
    iVar6 = iVar4 * 4;
    puVar2 = param_1;
    puVar5 = (undefined4 *)((int)this + 8);
    do {
      puVar3 = puVar2 + 8;
      puVar5[-2] = *puVar2;
      iVar4 = iVar4 - 1;
      puVar5[-1] = puVar2[1];
      *puVar5 = puVar2[2];
      puVar5[1] = puVar2[3];
      puVar5[2] = puVar2[4];
      puVar5[3] = puVar2[5];
      puVar5[4] = puVar2[6];
      puVar5[5] = puVar2[7];
      puVar2 = puVar3;
      puVar5 = puVar5 + 8;
    } while (iVar4 != 0);
  }
  while (iVar6 < iVar1) {
    iVar6 = iVar6 + 1;
    *(undefined4 *)((int)this + iVar6 * 8 - 8) = *puVar3;
    *(undefined4 *)((int)this + iVar6 * 8 - 4) = puVar3[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)((int)this + 0x40) = iVar1;
  *(undefined1 *)((int)this + 0x44) = (undefined1)param_3;
  return 0;
}

/* ref: FUN_01053980 */
GEN_FRAME uint GEN_THISCALL F_01053980(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x1053980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_2;
  iVar4 = *(int *)(param_1 + 0x40);
  uVar2 = 0;
  if (0 < iVar4) {
    do {
      fVar8 = (float10)*(float *)(param_1 + uVar2 * 8);
      if (fVar7 <= fVar8 && ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && fVar8 != fVar7)) {
        if (iVar4 == 8) {
          return 0xffffffff;
        }
        if ((int)uVar2 < iVar4) {
          if (3 < (int)(iVar4 - uVar2)) {
            iVar3 = ((iVar4 - uVar2) - 4 >> 2) + 1;
            iVar5 = iVar4 * 8;
            iVar4 = iVar4 + iVar3 * -4;
            puVar1 = (undefined4 *)(param_1 - 8 + iVar5);
            do {
              iVar3 = iVar3 - 1;
              puVar1[2] = *puVar1;
              puVar1[3] = puVar1[1];
              *puVar1 = puVar1[-2];
              puVar1[1] = puVar1[-1];
              puVar1[-2] = puVar1[-4];
              puVar1[-1] = puVar1[-3];
              puVar1[-4] = puVar1[-6];
              puVar1[-3] = puVar1[-5];
              puVar1 = puVar1 - 8;
            } while (iVar3 != 0);
          }
          if ((int)uVar2 < iVar4) {
            iVar5 = iVar4 - uVar2;
            puVar1 = (undefined4 *)(param_1 - 4 + iVar4 * 8);
            do {
              iVar5 = iVar5 - 1;
              puVar1[1] = puVar1[-1];
              puVar1[2] = *puVar1;
              puVar1 = puVar1 - 2;
            } while (iVar5 != 0);
          }
        }
        *(float *)(param_1 + uVar2 * 8) = param_2;
        *(float *)(param_1 + 4 + uVar2 * 8) = param_3;
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        return uVar2;
      }
      fVar8 = (float10)*(float *)(param_1 + uVar2 * 8);
      bVar6 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8);
      if (bVar6 != (bVar6 || fVar7 == fVar8)) {
        *(float *)(param_1 + 4 + uVar2 * 8) = param_3;
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar4);
    if (uVar2 == 8) {
      return 0xffffffff;
    }
  }
  *(float *)(param_1 + uVar2 * 8) = param_2;
  *(float *)(param_1 + 4 + uVar2 * 8) = param_3;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return uVar2;
}

/* ref: FUN_01053a80 */
GEN_FRAME uint GEN_THISCALL F_01053a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x1053a80u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  if (*(int *)(in_ecx + 0x40) <= (int)param_2) {
    return 0xffffffff;
  }
  *(float *)(in_ecx + 4 + param_2 * 8) = param_3;
  return param_2;
}

/* ref: FUN_01053aa0 */
GEN_FRAME uint GEN_THISCALL F_01053aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1053aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((int)param_1 < *(int *)((int)this + 0x40)) {
    if ((int)param_1 < *(int *)((int)this + 0x40) - 1) {
      puVar1 = (undefined4 *)((int)this + param_1 * 8 + 0xc);
      uVar2 = param_1;
      do {
        uVar2 = uVar2 + 1;
        puVar1[-3] = puVar1[-1];
        puVar1[-2] = *puVar1;
        puVar1 = puVar1 + 2;
      } while ((int)uVar2 < *(int *)((int)this + 0x40) - 1);
    }
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) - 1;
    return param_1;
  }
  return 0xffffffff;
}

/* ref: FUN_01053af0 */
GEN_FRAME float10 GEN_THISCALL F_01053af0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x1053af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    return (float10)0;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    fVar5 = (float10)param_2;
    do {
      fVar6 = (float10)*(float *)(param_1 + iVar3 * 8);
      if (!(fVar5 <= fVar6) == (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
        if (iVar3 == 0) {
          return (float10)*(float *)(param_1 + 4);
        }
        fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + iVar3 * 8) -
                                (float10)*(float *)(param_1 - 8 + iVar3 * 8))));
        bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
        if (bVar4 == (bVar4 || (float10)0 == fVar6)) {
          pfVar1 = (float *)(param_1 - 4 + iVar3 * 8);
          return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 - (float10)*(float *)(param_1 - 8 +
                                                                               iVar3 * 8)) / fVar6)))
                                  * (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 4 + iVar3 * 8) -
                                                    (float10)*pfVar1))) + (float10)*pfVar1)));
        }
        return (float10)*(float *)(param_1 + 4 + iVar3 * 8);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return (float10)*(float *)(param_1 - 4 + iVar3 * 8);
}

/* ref: FUN_01053b90 */
GEN_FRAME float10 GEN_STDCALL F_01053b90(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053b90u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_1;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  fVar3 = (float10)REFG(double, 0x1088108);
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar1 * fVar1) * fVar3))) *
                          (float10)*(float *)(param_2 + 0x14) +
                         ((float10)(float)(fVar2 * fVar1 + fVar3) *
                          (float10)*(float *)(param_2 + 0xc) +
                         (float10)((float)GEN_TOF((fVar2 * (fVar2 * fVar3)))) *
                         (float10)*(float *)(param_2 + 4)))));
}

/* ref: FUN_01053c00 */
GEN_FRAME float10 GEN_STDCALL F_01053c00(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053c00u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = ((float)GEN_TOF((((float10)*(float *)param_2 -
                  (float10)*(float *)(param_2 + 8) * (float10)*(double *)&REFG(undefined, 0x1092098)) +
                 (float10)*(float *)(param_2 + 0x10))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)*(float *)param_2)));
  fVar3 = (float10)REFG(float, 0x10947f8);
  fVar4 = (float10)fVar1;
  if (!(fVar3 <= fVar4) != ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3)) || fVar4 == fVar3)) {
    return (float10)REFG(float, 0x10928e4);
  }
  fVar3 = (float10)fVar2;
  return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 -
                                                                fVar4 * (float10)((float)GEN_TOF((((float10)*
                                                  (float *)(param_2 + 8) +
                                                  (float10)*(float *)param_2) -
                                                  (float10)param_1 *
                                                  (float10)*(double *)&REFG(undefined, 0x1092098)))))))))) -
                          (float10)fVar2) / (float10)fVar1)));
}

/* ref: FUN_01053c90 */
GEN_FRAME uint GEN_THISCALL F_01053c90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x1053c90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      fVar6 = (float10)*(float *)(param_1 + uVar3 * 8);
      bVar5 = GEN_ISNAN((float10)param_2) || GEN_ISNAN(fVar6);
      if (bVar5 != (bVar5 || (float10)param_2 == fVar6)) {
        if (iVar1 <= (int)uVar3) {
          return 0xffffffff;
        }
        if ((int)uVar3 < iVar1 - 1) {
          puVar2 = (undefined4 *)(param_1 + 0xc + uVar3 * 8);
          uVar4 = uVar3;
          do {
            uVar4 = uVar4 + 1;
            puVar2[-3] = puVar2[-1];
            puVar2[-2] = *puVar2;
            puVar2 = puVar2 + 2;
          } while ((int)uVar4 < *(int *)(param_1 + 0x40) - 1);
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - 1;
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_01053d00 */
GEN_FRAME float10 GEN_THISCALL F_01053d00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x1053d00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int iVar2;
  float * pfVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = param_1[0x10];
  if (fVar1 == 0.0) {
    return (float10)0;
  }
  iVar2 = 0;
  if (0 < (int)gen_fl2bits(fVar1)) {
    fVar5 = (float10)param_2;
    do {
      if (fVar5 <= (float10)param_1[iVar2 * 2]) {
        if (iVar2 == 0) {
          return (float10)param_1[1];
        }
        if (iVar2 == 1) {
          pfVar3 = param_1;
          if (fVar5 <= ((float10)param_1[2] - (float10)*param_1) * (float10)REFG(double, 0x1088108) +
                       (float10)*param_1) {
LAB_01053de6: ;
            fVar6 = (float10)(float)((float10)param_1[iVar2 * 2] - (float10)param_1[iVar2 * 2 - 2])
            ;
            bVar4 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar6);
            if (bVar4 == (bVar4 || (float10)0 == fVar6)) {
              return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar5 - (float10)param_1[iVar2 * 2 - 2]) /
                                                      fVar6))) *
                                      (float10)(float)((float10)param_1[iVar2 * 2 + 1] -
                                                      (float10)param_1[iVar2 * 2 - 1]) +
                                     (float10)param_1[iVar2 * 2 - 1])));
            }
            return (float10)param_1[iVar2 * 2 + 1];
          }
        }
        else {
          pfVar3 = param_1 + iVar2 * 2 - 2;
          if (fVar5 <= ((float10)param_1[iVar2 * 2] - (float10)*pfVar3) * (float10)REFG(double, 0x1088108) +
                       (float10)*pfVar3) {
            pfVar3 = param_1 + iVar2 * 2 - 4;
          }
          else if (iVar2 == (int)gen_fl2bits(fVar1) - 1) goto LAB_01053de6;
        }
        fVar5 = F_01053c00(param_2,(uint)pfVar3);
        fVar5 = (float10)(float)fVar5;
        bVar4 = GEN_ISNAN((float10)REFG(float, 0x10928e4)) || GEN_ISNAN(fVar5);
        if (bVar4 != (bVar4 || (float10)REFG(float, 0x10928e4) == fVar5)) {
          fVar5 = (float10)((float)GEN_TOF((((((float10)param_2 + (float10)param_2) - (float10)*pfVar3) -
                                   (float10)pfVar3[2]) / ((float10)pfVar3[4] - (float10)*pfVar3))));
        }
        fVar5 = F_01053b90((float)fVar5,pfVar3);
        return (float10)(float)fVar5;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)gen_fl2bits(fVar1));
  }
  return (float10)param_1[iVar2 * 2 - 1];
}

/* ref: FUN_01053e40 */
GEN_FRAME float10 GEN_THISCALL F_01053e40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x1053e40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    fVar1 = F_01053af0(param_1 GEN_EDX_FWD,param_2);
    return fVar1;
  }
  if (*(char *)(param_1 + 0x44) != '\x01') {
    return (float10)0;
  }
  fVar1 = F_01053d00(param_1 GEN_EDX_ARG,param_2);
  return fVar1;
}

/* ref: FUN_01053e80 */
GEN_FRAME unsigned int F_01053e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1053e80u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf4 */
GEN_FRAME uint GEN_THISCALL F_01053ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1053ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc7020(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf3 */
GEN_FRAME uint GEN_THISCALL F_01053ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1053ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc7150(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf2 */
GEN_FRAME uint GEN_THISCALL F_01053ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1053ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc8c90(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf5 */
GEN_FRAME uint GEN_THISCALL F_01053f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1053f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00cc8970(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf6 */
GEN_FRAME uint GEN_THISCALL F_01053f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1053f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cc7310(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_01053f40 */
GEN_FRAME uint GEN_STDCALL F_01053f40(unsigned int gen_a0)
{
  GEN_ENTER(0x1053f40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc73f0(param_1);
  return uVar1;
}

/* ref: FUN_01053fc0 */
GEN_FRAME uint GEN_THISCALL F_01053fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1053fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08b40(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1,param_2,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_01054000 */
GEN_FRAME uint GEN_THISCALL F_01054000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1054000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08c80(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1,param_2,uVar1,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_01054040 */
GEN_FRAME uint GEN_THISCALL F_01054040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x136de60) + 1;
  REFG(undefined4, 0x136de60) = uVar1;
  F_00d08d60(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD,param_1,uVar1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf9 */
GEN_FRAME unsigned int GEN_THISCALL F_01054070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc32f0(param_1);
    F_00cc25e0(param_1);
    F_00cea2f0(param_1);
    F_00cbf830(param_1);
    F_00cc74f0();
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf10 */
GEN_FRAME uint GEN_THISCALL F_010540b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10540b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = F_00427d90();
  iVar1 = (int)uVar2 - *(int *)(this + 0x18);
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc3430(iVar1);
    F_00cc33c0(iVar1);
  }
  *(ulonglong *)(this + 0x18) = uVar2;
  return (uint)(uVar2 >> 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf11 */
GEN_FRAME uint GEN_THISCALL F_010540f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10540f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = F_00427d90();
  iVar1 = (int)uVar2 - *(int *)(this + 0x10);
  if (this[0x2c] != (undefined1)0x0) {
    F_00cc3490(iVar1);
    F_00cbf830(iVar1);
    F_00cc74f0();
  }
  *(ulonglong *)(this + 0x10) = uVar2;
  return (uint)(uVar2 >> 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf28 */
GEN_FRAME uint GEN_THISCALL F_01054140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc52a0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf30 */
GEN_FRAME uint GEN_THISCALL F_01054170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc5d00(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf31 */
GEN_FRAME uint GEN_THISCALL F_01054190(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054190u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfb60(param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_010541b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10541b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf16 */
GEN_FRAME uint GEN_THISCALL F_010541c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10541c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbbd50(param_1 GEN_EDX_FWD,param_2,*(undefined4 *)(this + 4));
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf18 */
GEN_FRAME uint GEN_THISCALL F_010541e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10541e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbe360(param_1 GEN_EDX_FWD,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf17 */
GEN_FRAME uint GEN_THISCALL F_01054200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc6f60(param_2);
  F_00cbe360(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: FUN_01054230 */
GEN_FRAME uint GEN_STDCALL F_01054230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1054230u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_01055cb0(param_1 GEN_EDX_ARG,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf20 */
GEN_FRAME uint GEN_THISCALL F_01054250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfc80(param_2);
  F_00cbb870(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf21 */
GEN_FRAME uint GEN_THISCALL F_01054280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfcb0(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf22 */
GEN_FRAME uint GEN_THISCALL F_010542b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10542b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfce0(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf23 */
GEN_FRAME uint GEN_THISCALL F_010542e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10542e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfd10(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf24 */
GEN_FRAME uint GEN_THISCALL F_01054310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfd40(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf25 */
GEN_FRAME uint GEN_THISCALL F_01054340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cbfd70(param_2);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf26 */
GEN_FRAME uint GEN_THISCALL F_01054370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1054370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cbfe20(param_2,param_3);
  F_00cc6a70(param_1 GEN_EDX_ARG,uVar1);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf19 */
GEN_FRAME uint GEN_THISCALL F_010543a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10543a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbaea0(param_1 GEN_EDX_FWD,param_2);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf27 */
GEN_FRAME byte GEN_THISCALL F_010543c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10543c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00cc6ea0(param_1,param_2,param_3);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf68 */
GEN_NOFRAME uint F_010543e0(void)
{
  GEN_ENTER(0x10543e0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7754);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf33 */
GEN_FRAME uint GEN_THISCALL F_01054400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = F_00cc5520(((undefined4 *)(gen_frame + 0xc)),0x100);
  uVar4 = param_2;
  if (uVar2 < param_2) {
    uVar4 = uVar2;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)((undefined4 *)(gen_frame + 0xc))[(int)(uVar2)] + 0xd0))((int *)((undefined4 *)(gen_frame + 0xc))[(int)(uVar2)] GEN_EDX_ARG);
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(uint *)(param_1 + iVar1) = uVar3;
    } while (uVar2 < uVar4);
  }
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf36 */
GEN_FRAME uint GEN_THISCALL F_01054490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc77f0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf37 */
GEN_FRAME unsigned int GEN_THISCALL F_010544b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10544b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)(this + 4) != 0) {
    F_00d05de0(*(int *)(this + 4) GEN_EDX_FWD,0xffffffff,param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf38 */
GEN_FRAME uint GEN_THISCALL F_010544d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10544d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc84b0(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf41 */
GEN_FRAME uint GEN_THISCALL F_010544f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10544f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cc5440(param_1,param_2);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf42 */
GEN_NOFRAME unsigned int F_01054510(void)
{
  GEN_ENTER(0x1054510u, 0u, 0u, 0u, 0u);
  F_00cc5800();
  F_00cc00e0();
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf43 */
GEN_FRAME uint GEN_THISCALL F_01054520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc8600(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf44 */
GEN_FRAME uint GEN_THISCALL F_01054540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc8690(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf45 */
GEN_FRAME uint GEN_THISCALL F_01054560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1054560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00cc8710(param_1,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf46 */
GEN_NOFRAME uint F_01054580(void)
{
  GEN_ENTER(0x1054580u, 0u, 0u, 0u, 0u);
  return REFG(int, 0x15d86bc) - REFG(int, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf47 */
GEN_NOFRAME uint F_01054590(void)
{
  GEN_ENTER(0x1054590u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d86b8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf48 */
GEN_FRAME unsigned int GEN_THISCALL F_010545a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10545a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cc87b0(param_1);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf49 */
GEN_FRAME byte GEN_THISCALL F_010545c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10545c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cc8800(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf64 */
GEN_FRAME uint GEN_THISCALL F_010545e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10545e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cbf720(param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf65 */
GEN_FRAME byte GEN_THISCALL F_01054600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbf7b0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf63 */
GEN_FRAME byte GEN_THISCALL F_01054620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cc74d0(param_1);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf69 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01054640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1054640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01054660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1054660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x30));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf74 */
GEN_FRAME uint GEN_THISCALL F_01054680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char * pcVar8;
  float10 fVar9;
  double dVar10;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  (*(int *)(gen_frame + 0x10)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0x18)),"--Checker Ver.2--\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Driver]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"updateEnabled= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2c]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"busReverbEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2d]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"soundReverbEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2e]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xdc))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x18)),"PLIIzEnable= %d\n",uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"busPLIIzEnable= %d\n",(uint)(byte)(*(undefined * PTR32 *)(gen_frame + 0x14))[0x2f]);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xe4))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x18)),"StereoDownmixEnable= %d\n",uVar5 & 0xff);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"timerVsyncProcessor= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x20));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"timerMsecProcessor= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"outputChannels= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"volumeCurveType= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 8));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"lastUpdateVSync= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x10),*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x14));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"lastUpdateMsec= %d\n",*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x18),*(int *)((*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x1c));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xb8))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x18)),"RemainingBank= %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0xbc))((*(undefined * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c4720f(((char *)(gen_frame + 0x18)),"UsingBank= %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)REFG(int, 0x15d7754);
  F_00c4720f(((char *)(gen_frame + 0x18)),"BusCount= %d\n",REFG(int, 0x15d7754));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  uVar6 = 0;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if (0 < (int)(*(undefined * PTR32 *)(gen_frame + 0x14))) {
    do {
      F_00cbf720(uVar6);
      F_00cbf770(uVar6);
      fVar9 = F_00cbfef0(uVar6);
      dVar10 = (double)fVar9;
      bVar3 = F_00cbfb10(uVar6);
      F_00cbfad0(uVar6,(uint)bVar3,(int)(ulonglong)gen_d2bits(dVar10),
                   (int)((ulonglong)gen_d2bits(dVar10) >> 0x20));
      F_00cbfbc0(uVar6);
      bVar3 = F_00cbf7b0(uVar6);
      F_00c4720f(((char *)(gen_frame + 0x18)),"Bus[%d] 3D= %d Rev=%d Pause= %d SPause= %d Vol= %f Play= %d/%d \n",uVar6,
               (uint)bVar3);
      pcVar4 = ((char *)(gen_frame + 0x18));
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
      pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) - 1);
      do {
        pcVar8 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar8 != '\0');
      pcVar8 = ((char *)(gen_frame + 0x18));
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar4 = pcVar4 + 4;
      }
      uVar6 = uVar6 + 1;
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar4 = pcVar4 + 1;
      }
    } while ((int)uVar6 < (int)(*(undefined * PTR32 *)(gen_frame + 0x14)));
  }
  F_00d2de20(((undefined1 *)(gen_frame + 0x8)),0);
  F_00cbb9b0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00cbb930(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar5 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  uVar5 = F_00cbb8f0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar5);
  F_00c4720f(((char *)(gen_frame + 0x18)),"Reverb No= %d TempNo= %d Bypass= %d Level= %.3f\n",uVar5);
  iVar2 = (*(int *)(gen_frame + 0x10));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  uVar5 = F_00cc54e0();
  F_00c4720f(((char *)(gen_frame + 0x18)),"SoundCount = %d\n",uVar5);
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 - 1);
  do {
    pcVar8 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = ((char *)(gen_frame + 0x18));
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00cc5940(iVar2);
  F_00ce9e30(iVar2);
  uVar5 = F_00ccb6c0(iVar2);
  F_00cbb890(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf54 */
GEN_FRAME uint GEN_THISCALL F_01054d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00cbfe50();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf55 */
GEN_NOFRAME byte GEN_THISCALL F_01054dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1054dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cbfe50();
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf56 */
GEN_FRAME uint GEN_THISCALL F_01054de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00cbfe60();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,(uint)((char)param_1 == '\0'));
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf57 */
GEN_NOFRAME byte GEN_THISCALL F_01054e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1054e10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cbfe60();
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf60 */
GEN_FRAME uint GEN_THISCALL F_01054e30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1054e30u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  undefined4 uVar3;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x60))(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xc)),0);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x60))(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),1);
  fVar1 = (float10)1;
  if (((float10)param_2 <= fVar1) && (param_2 = (float)fVar1, param_3 == 0)) {
    F_00cc26e0((float)fVar1,0);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
    uVar3 = 1;
  }
  else {
    F_00cc26e0(param_2,param_3);
    F_00cc6b10(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_2,0,param_3);
    F_00cc6ad0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0);
    F_00cc6b10(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,param_2,0,param_3);
    uVar3 = 0;
  }
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,uVar3);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf62 */
GEN_FRAME uint GEN_THISCALL F_01054f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054f00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined1 * puVar4;
  
  iVar1 = *param_1;
  uVar2 = F_00cbfda0();
  puVar4 = ((undefined1 *)(gen_frame + 0x4));
  ((code *)*(gen_code32 *)(iVar1 + 0x60))(param_1);
  fVar3 = F_00cbfdc0(param_2,puVar4,uVar2);
  uVar2 = F_00cbfdf0(param_2);
  F_00cc26e0(fVar3,uVar2);
  F_00cc6b10(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,fVar3,0,uVar2);
  uVar2 = F_00cc6ad0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  F_00cc6ac0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_01054f70 */
GEN_FRAME uint GEN_THISCALL F_01054f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1054f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  *(undefined4 *)((int)this + 4) = 0;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = 0x10000;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined1 *)((int)this + 0x48) = 1;
  F_00cc0dd0(param_1);
  F_00cc8dd0(param_1);
  F_00cc5dc0(param_1);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 4);
  F_00cea4e0(&(*(undefined4 *)(gen_frame + 0x18)));
  if (*(char *)(param_1 + 0x1bc) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    (*(undefined4 *)(gen_frame + 0xc)) = 0x10000;
    (*(char * PTR32 *)(gen_frame + 0x8)) = "CDevSd StreamHandler";
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    F_00ce3d30(&(*(char * PTR32 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 8) = 3;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)((int)this + 0x2c) = 1;
  return (uint)this;
}

/* ref: FUN_01055030 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01055030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b47fc));
  if ((REFG(int, 0x15d8c04) != 0) && (REFG(int, 0x15d8c04) != -0xa0)) {
    F_00ce3b10(1);
    F_00ce3530();
  }
  *(undefined1 *)((int)this + 0x2c) = 0;
  F_00cc5320();
  F_00cc27e0();
  F_00ce9fe0();
  F_00cc6d60();
  F_00cbf410();
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf7 */
GEN_FRAME byte GEN_THISCALL F_01055090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1055090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((char)param_2 != '\0') {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1)));
    F_00cbe4b0(this_00 GEN_EDX_ARG);
    F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  piVar2 = (int *)F_00cc6e00(param_1);
  if (piVar2 == (int *)0x0) {
    if (this[0x48] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  bVar1 = F_00cc2b60(piVar2);
  if ((bVar1 == 0) && ((short)piVar2[8] < 1)) {
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_0105513a;
      }
    }
    bVar1 = F_00cc8a70(param_1);
    if (this[0x48] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return bVar1;
  }
LAB_0105513a: ;
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf8 */
GEN_FRAME byte GEN_THISCALL F_01055170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x30);
  this[0x48] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar2 = (int *)F_00cc6e00(param_1);
  if (piVar2 != (int *)0x0) {
    bVar1 = F_00cc2b60(piVar2);
    if ((bVar1 != 0) || (0 < (short)piVar2[8])) {
LAB_010551ce: ;
      if (this[0x48] != (undefined1)0x0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    if ((*(byte *)(piVar2 + 0x12) & 8) != 0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
      if (uVar3 != 3) {
        bVar1 = F_00ce3460(piVar2[5]);
        if (bVar1 != 0) goto LAB_010551ce;
      }
    }
  }
  if (this[0x48] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 1;
}

/* ref: FUN_01055200 */
GEN_FRAME uint GEN_THISCALL F_01055200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  char * pcVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = this;
  ((byte *)(gen_frame + 0x0))[0x10] = (byte)param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(uint *)(gen_frame + 0x24)) = param_1;
  ((byte *)(gen_frame + 0x0))[0x1c] = (byte)param_7;
  ((byte *)(gen_frame + 0x0))[0x14] = (byte)param_8;
  F_00ccb2c0(((char *)(gen_frame + 0x2c)) GEN_EDX_FWD);
  uVar6 = param_1;
  if ((*(byte *)(param_2 + 4) & 0x80) == 0) {
LAB_010552ac: ;
    puVar2 = (undefined4 *)F_00ce9a60(param_1,param_2);
    if (puVar2 != (undefined4 *)0x0) {
      pcVar8 = ((char *)(gen_frame + 0x2c));
      for (iVar3 = 0x1f; uVar6 = (*(uint *)(gen_frame + 0x24)), iVar3 != 0; iVar3 = iVar3 - 1) {
        *(undefined4 *)pcVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        pcVar8 = pcVar8 + 4;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    if (REFG(char, 0x15d7798) == '\0') goto LAB_010552ac;
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    F_00cca3f0(&REFG(char, 0x15d7798) GEN_EDX_ARG,((char *)(gen_frame + 0x2c)),(uint)*(ushort *)(param_2 + 6));
  }
  uVar4 = (*(uint *)(gen_frame + 0x30));
  bVar1 = (byte)((*(uint *)(gen_frame + 0x30)) >> 0x10);
  if (((*(uint *)(gen_frame + 0x30)) >> 0x10 & 4) == 0) {
    if (((*(uint *)(gen_frame + 0x30)) & 0x80000) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
      iVar3 = *(int *)(uVar6 + 0x10) * 1000;
      (*(int *)(gen_frame + 0x34)) = iVar3;
      iVar3 = iVar3 + 999;
      goto LAB_0105530a;
    }
  }
  else {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 2)) = bVar1 | 2;
    iVar3 = *(int *)(uVar6 + 0x10) * 1000 + (uint)*(ushort *)(param_2 + 0xc);
    (*(int *)(gen_frame + 0x34)) = iVar3;
LAB_0105530a: ;
    (*(uint *)(gen_frame + 0x30)) = uVar4 | 0x20000;
    (*(int *)(gen_frame + 0x38)) = iVar3;
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x2b)) = 0;
  if (((*(undefined2 *)((char *)((char *)(gen_frame + 0x2c)) + 2)) != 0) && (((char *)(gen_frame + 0x2c))[0] != '\0')) {
    uVar4 = F_00cc1e50(((char *)(gen_frame + 0x2c)),param_2,(*(undefined4 *)(gen_frame + 0x20)),param_5,param_6,&(*(undefined1 *)(gen_frame + 0x2b)),0);
    (*(uint *)(gen_frame + 0x24)) = uVar4;
    if ((uVar4 != 0) && (uVar4 - 1 < 5)) {
      if (uVar4 == 1) {
        pcVar8 = ((char *)(gen_frame + 0x3c));
      }
      else {
        pcVar8 = ((char *)(gen_frame + 0x3c)) + (uVar4 * 3 - 6) * 8 + 0x18;
        if (pcVar8 == (char *)0x0) goto LAB_01055390;
      }
      iVar3 = 0;
      do {
        if (pcVar8[iVar3] == '\a') goto LAB_010554a1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 1);
    }
  }
LAB_01055390: ;
  bVar1 = F_00cbf6a0(param_2);
  if ((bVar1 != 0) &&
     (piVar5 = (int *)F_00cc5fc0(uVar6,param_2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))),
     piVar5 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x198))(piVar5 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x9c))(piVar5 GEN_EDX_ARG,param_5,param_6);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xec))(piVar5 GEN_EDX_ARG);
    if ((uVar6 == 2) || (uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xec))(piVar5 GEN_EDX_ARG), uVar6 == 0xc)) {
      *(undefined1 *)(piVar5 + 0x106) = (*(undefined1 *)(gen_frame + 0x2b));
    }
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xa4))(piVar5 GEN_EDX_ARG);
    piVar7 = (int *)F_00cbf660(uVar6);
    if (piVar7 != (int *)0x0) {
      uVar9 = *((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) + 4)));
      iVar3 = *piVar7;
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5 GEN_EDX_ARG);
      uVar6 = F_00cbbd50(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar6,uVar9);
      ((code *)*(gen_code32 *)(iVar3 + 8))(piVar7,uVar6);
      F_00cbbdb0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    F_00ce9cd0(((char *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x24)),piVar5);
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xd0))(piVar5 GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
    return uVar6;
  }
LAB_010554a1: ;
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_010554c0 */
GEN_FRAME uint GEN_THISCALL F_010554c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x10554c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  uint3 uVar8;
  int iVar7;
  code * pcVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30));
  uVar5 = (*(uint *)&gen_args[3]);
  (*(uint *)(gen_frame + 0x50)) = (*(uint *)&gen_args[2]);
  (*(ulonglong *)(gen_frame + 0x18)) = F_00427d90();
  uVar2 = (*(uint *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x34)) = (*(uint *)&gen_args[5]);
  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x50));
  (*(uint *)(gen_frame + 0x2c)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80001;
  (*(uint *)(gen_frame + 0x30)) = (*(uint *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)&gen_args[8]);
  (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)&gen_args[9]);
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x8)),0x38);
  (*(uint *)(gen_frame + 0x58)) = (*(uint *)&gen_args[5]) & 1;
  if (((*(uint *)&gen_args[5]) & 1) == 0) {
    piVar4 = (int *)F_00cc6e60(uVar2);
  }
  else {
    piVar4 = (int *)F_00cc6e00((*(uint *)&gen_args[2]));
  }
  if (piVar4 != (int *)0x0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 4))(piVar4 GEN_EDX_ARG);
    if (uVar5 == 3) {
LAB_0105556b: ;
      piVar4 = (int *)F_00cc5fc0(piVar4,0,(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[10]),0);
      if (piVar4 != (int *)0x0) {
        uVar13 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xd0))(piVar4 GEN_EDX_ARG);
        F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar5,uVar13);
        goto LAB_01055815;
      }
    }
    else if ((*(byte *)(piVar4 + 0x12) & 8) == 0) {
LAB_01055633: ;
      F_00ce11f0(piVar4 GEN_EDX_ARG);
      if ((*(uint *)(gen_frame + 0x58)) == 0) {
        pcVar9 = *(gen_code32 *)(*piVar4 + 0x28);
        uVar5 = (*(uint *)&gen_args[4]);
      }
      else {
        pcVar9 = *(gen_code32 *)(*piVar4 + 0xc);
        uVar5 = (*(uint *)&gen_args[3]);
      }
      uVar5 = (*pcVar9)(piVar4,uVar5);
      (*(uint *)(gen_frame + 0x54)) = uVar5;
      if (uVar5 != 0) {
        if ((*(uint *)(gen_frame + 0x58)) == 0) {
          pcVar9 = *(gen_code32 *)(*piVar4 + 0x2c);
          uVar5 = (*(uint *)&gen_args[4]);
        }
        else {
          pcVar9 = *(gen_code32 *)(*piVar4 + 0x18);
          uVar5 = (*(uint *)&gen_args[3]);
        }
        uVar5 = (*pcVar9)(piVar4,uVar5);
        (*(uint *)(gen_frame + 0x50)) = uVar5;
        if (uVar5 != 0) {
          F_00d2de20(((undefined1 *)(gen_frame + 0x48)),0);
          (*(uint *)(gen_frame + 0x50)) = (uint)*(byte *)((*(uint *)(gen_frame + 0x50)) + 0xd);
          uVar5 = F_00cbb9f0(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
          if (uVar5 != (*(uint *)(gen_frame + 0x50))) {
            F_00cbba10(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x50)));
          }
          F_00cbb890(((undefined1 *)(gen_frame + 0x48)) GEN_EDX_ARG);
        }
        bVar3 = F_00cbf7b0((uint)*(byte *)((*(uint *)(gen_frame + 0x54)) + 1));
        if ((bVar3 == 0) || (((*(uint *)&gen_args[5]) & 0x10) != 0)) {
          if (((*(byte *)(piVar4 + 0x12) & 8) != 0) || (((*(uint *)&gen_args[5]) & 0x10) != 0)) {
            if ((*(uint *)(gen_frame + 0x58)) == 0) {
              pcVar9 = *(gen_code32 *)(*piVar4 + 0x2c);
              uVar5 = (*(uint *)&gen_args[4]);
            }
            else {
              pcVar9 = *(gen_code32 *)(*piVar4 + 0x18);
              uVar5 = (*(uint *)&gen_args[3]);
            }
            uVar5 = (*pcVar9)(piVar4,uVar5);
            fVar12 = (float10)*(float *)(uVar5 + 0x54);
            fVar1 = (float10)0;
            bVar10 = GEN_ISNAN(fVar1) || GEN_ISNAN(fVar12);
            bVar11 = bVar10 || fVar1 == fVar12;
            uVar8 = (uint3)(CONCAT22((short)(uVar5 >> 0x10),
                                     (ushort)!(fVar12 <= fVar1) << 8 | (ushort)bVar10 << 10 |
                                     (ushort)bVar11 << 0xe) >> 8);
            if (bVar10 == bVar11) {
              iVar7 = CONCAT31(uVar8,1);
            }
            else {
              iVar7 = (uint)uVar8 << 8;
            }
            (*(uint *)&gen_args[4]) = F_01055200((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4,(*(uint *)(gen_frame + 0x54)),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),
                                   iVar7);
            F_00ce1230(piVar4 GEN_EDX_ARG);
            F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(uint *)&gen_args[4]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
            goto LAB_01055815;
          }
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[4]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
          }
          (*(uint *)&gen_args[4]) = F_01054000((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]));
        }
        else {
          if ((*(uint *)(gen_frame + 0x58)) == 0) {
            F_00cc6ea0((*(uint *)&gen_args[4]),&(*(uint *)&gen_args[2]),&(*(uint *)&gen_args[3]));
          }
          (*(uint *)&gen_args[4]) = F_01053fc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(uint *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]));
        }
        F_00ce1230(piVar4 GEN_EDX_ARG);
        F_00cbbd50(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(uint *)&gen_args[4]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
        F_00cbc4e0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[7]));
        F_00cbbd90((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)));
        F_00cbbdb0(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
        goto LAB_01055815;
      }
      F_00ce1230(piVar4 GEN_EDX_ARG);
    }
    else if ((*(byte *)(piVar4 + 0x12) & 0x20) == 0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xa0))(piVar4 GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x88))(piVar4 GEN_EDX_ARG);
        if ((char)uVar5 == '\0') goto LAB_0105556b;
        goto LAB_01055633;
      }
    }
    else {
      bVar3 = F_00cc5160(piVar4);
      if (bVar3 != 0) {
        piVar6 = (int *)F_00cc5fc0(piVar4,0,(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[10]),0);
        if (piVar6 != (int *)0x0) {
          piVar4[0x30] = (int)piVar6;
          uVar13 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xd0))(piVar6 GEN_EDX_ARG);
          F_00cbbd50((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar5,uVar13);
          goto LAB_01055815;
        }
      }
    }
  }
  F_00cbbd70((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
LAB_01055815: ;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf12 */
GEN_FRAME uint GEN_THISCALL F_01055830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1055830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_010554c0(this GEN_EDX_FWD,param_1,0,0,param_2,2,param_4,param_3,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf15 */
GEN_FRAME uint GEN_THISCALL F_01055870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x1055870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_010554c0(this GEN_EDX_FWD,param_1,param_2,param_3,0,0x11,0,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf14 */
GEN_FRAME uint GEN_THISCALL F_010558b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x10558b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_010554c0(this GEN_EDX_FWD,param_1,0,0,param_2,0x12,0,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_010558e0 */
GEN_FRAME uint F_010558e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10558e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf13 */
GEN_FRAME uint GEN_THISCALL F_01055980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  F_010554c0(this GEN_EDX_FWD,param_1,param_2,param_3,0,1,param_5,param_4,param_6,param_7,param_8);
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_010559c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10559c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  
  if (*(int *)(this + 4) == 0) {
    piVar1 = (int *)F_00d2cce0();
    if (piVar1 == (int *)0x0) {
      if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
        REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10558e0));
      }
      ((code *)REFG(gen_code32, 0x15d861c))("pLayout","","SoundDriver.cpp",0xb1,
                      "SQEX::CDev::Engine::Sd::Driver::SoundDriver::CreateDefaultLayoutPage");
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x9c))(piVar1 GEN_EDX_ARG,0);
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1 GEN_EDX_ARG,uVar2)));
    *(undefined * PTR32 *)(this + 4) = this_00;
    F_00d05170(this_00 GEN_EDX_ARG,1,1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ISoundDriver::vf0 */
GEN_FRAME uint GEN_THISCALL F_01055a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[75])REFP(0x12b46cc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01055af0 */
GEN_FRAME uint GEN_THISCALL F_01055af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc0) = param_2;
  return param_2;
}

/* ref: FUN_01055b00 */
GEN_FRAME byte GEN_THISCALL F_01055b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x418) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_01055b40 */
GEN_FRAME uint F_01055b40(unsigned int gen_a0)
{
  GEN_ENTER(0x1055b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_01055b50 */
GEN_FRAME uint F_01055b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055b50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_01055b60 */
GEN_FRAME unsigned int GEN_THISCALL F_01055b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x1055b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)((int)this + 0x28) = param_6;
  *(undefined4 *)((int)this + 0x2c) = param_7;
  *(undefined4 *)((int)this + 0x30) = param_8;
  *(undefined4 *)((int)this + 0x34) = param_9;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf66 */
GEN_FRAME uint GEN_THISCALL F_01055bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf67 */
GEN_NOFRAME uint GEN_THISCALL F_01055bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf39 */
GEN_FRAME byte GEN_THISCALL F_01055bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055bd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf50 */
GEN_FRAME byte GEN_THISCALL F_01055be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf51 */
GEN_NOFRAME byte GEN_THISCALL F_01055bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2d);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf52 */
GEN_FRAME byte GEN_THISCALL F_01055c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf53 */
GEN_NOFRAME byte GEN_THISCALL F_01055c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2e);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf58 */
GEN_FRAME byte GEN_THISCALL F_01055c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f) = (byte)param_2;
  return (byte)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf59 */
GEN_NOFRAME byte GEN_THISCALL F_01055c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2f);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf71 */
GEN_NOFRAME uint GEN_THISCALL F_01055c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf72 */
GEN_NOFRAME uint GEN_THISCALL F_01055c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf73 */
GEN_NOFRAME uint GEN_THISCALL F_01055c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundDriver::vf0 */
GEN_FRAME uint GEN_THISCALL F_01055c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_01055030(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01055ca0 */
GEN_FRAME uint GEN_THISCALL F_01055ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_01055cb0 */
GEN_FRAME uint GEN_THISCALL F_01055cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00cbe360(in_ecx GEN_EDX_FWD,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cd0 */
GEN_NOFRAME uint GEN_THISCALL F_01055cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1055cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00cbe380(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  return (uint)in_ecx;
}

/* ref: FUN_01055cf0 */
GEN_FRAME uint GEN_THISCALL F_01055cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  F_00cbe380(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  in_ecx[1] = *(undefined4 *)(param_2 + 4);
  return (uint)in_ecx;
}

/* ref: FUN_01055d30 */
GEN_FRAME uint GEN_THISCALL F_01055d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d30u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_01055d50 */
GEN_FRAME byte F_01055d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1 GEN_EDX_ARG);
  uVar2 = F_00cbe3e0(param_2 GEN_EDX_ARG);
  return uVar1 == uVar2;
}

/* ref: FUN_01055d70 */
GEN_FRAME byte F_01055d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00cbe3e0(param_1 GEN_EDX_ARG);
  uVar2 = F_00cbe3e0(param_2 GEN_EDX_ARG);
  return uVar1 != uVar2;
}

/* ref: FUN_01055d90 */
GEN_FRAME uint GEN_THISCALL F_01055d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x10) = param_1;
  }
  return uVar1;
}

/* ref: FUN_01055dd0 */
GEN_FRAME uint GEN_THISCALL F_01055dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x34))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e00 */
GEN_FRAME uint GEN_THISCALL F_01055e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x38))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e30 */
GEN_FRAME uint GEN_THISCALL F_01055e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x3c))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e60 */
GEN_FRAME uint GEN_THISCALL F_01055e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055e90 */
GEN_FRAME uint GEN_THISCALL F_01055e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055e90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055ec0 */
GEN_NOFRAME uint GEN_THISCALL F_01055ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  while (uVar1 != 0) {
    uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_01055ef0 */
GEN_FRAME uint GEN_THISCALL F_01055ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f20 */
GEN_FRAME uint GEN_THISCALL F_01055f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f50 */
GEN_FRAME uint GEN_THISCALL F_01055f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055f80 */
GEN_FRAME uint GEN_THISCALL F_01055f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055f80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x50))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_01055fb0 */
GEN_FRAME uint GEN_THISCALL F_01055fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1055fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = (int *)F_00cc6e00(*(undefined4 *)((int)this + 4));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x54))
                      (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBankController::vf0 */
GEN_FRAME uint GEN_THISCALL F_01055fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1055fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4974));
  F_00cbe3b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_01056010 */
GEN_FRAME unsigned int F_01056010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1056010u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_01056030 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01056030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  iVar2 = 0;
  do {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x28))));
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    }
    *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x28)))) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x78);
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406810(*(int *)((int)this + 0x28));
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00406810(*(int *)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  return 0;
}

/* ref: FUN_010560d0 */
GEN_FRAME uint GEN_THISCALL F_010560d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x10560d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  
  iVar1 = (int)param_3;
  if (2 < iVar1) {
    iVar1 = 2;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 4) = **(undefined4 * PTR32 *)(param_1 + 0x2c);
    return param_2;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_2 + 4) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 4)));
    return param_2;
  }
  if (iVar1 == 2) {
    *(undefined4 *)(param_2 + 4) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 8)));
    return param_2;
  }
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf1 */
GEN_FRAME uint GEN_THISCALL F_01056130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1056130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_01056140 */
GEN_NOFRAME uint GEN_THISCALL F_01056140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056140u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf2 */
GEN_FRAME uint GEN_THISCALL F_01056150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1056150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_01056160 */
GEN_NOFRAME uint GEN_THISCALL F_01056160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_01056170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: FUN_01056180 */
GEN_FRAME byte GEN_THISCALL F_01056180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x1056180u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  iVar2 = (int)param_4;
  if (2 < iVar2) {
    iVar2 = 2;
  }
  if (iVar2 == 0) {
    uVar3 = **(uint * PTR32 *)(param_1 + 0x2c);
  }
  else if (iVar2 == 1) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2c) + 4)));
  }
  else {
    uVar3 = (*(uint *)(gen_frame + 0xc));
    if (iVar2 == 2) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x2c) + 8)));
    }
  }
  if ((uVar3 != 0xffffffff) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x24) + 0x6c))))
                        (*(int * PTR32 *)(param_1 + 0x24) GEN_EDX_ARG,uVar3,&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x14))), (char)uVar3 != '\0'))
  {
    if (0x1d < *(int *)(param_1 + 0x34)) {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    bVar1 = F_01056c50(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34) * 4))) GEN_EDX_ARG,
                         param_2,param_3,param_4,(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)));
    uVar3 = (uint)bVar1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  bVar1 = (byte)uVar3;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
    bVar1 = extraout_AL;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf6 */
GEN_FRAME byte GEN_THISCALL F_01056260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1056260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x38) = param_1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x20) + 0x30))))(*(int * PTR32 *)(this + 0x20) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  if ((char)uVar2 != '\0') {
    iVar3 = 0;
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) + 0x34))) != -1) {
        bVar1 = F_01057480(*((int *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x8)));
        if (bVar1 != 0) {
          F_010570f0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar3))) GEN_EDX_ARG);
        }
        if (*((char *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) + 0x40))) != '\0') {
          F_01056d30(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)(this + 0x28)))) GEN_EDX_ARG);
        }
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_01056300 */
GEN_FRAME uint GEN_THISCALL F_01056300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1056300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  piVar3 = *(int * PTR32 *)((int)this + 0x28);
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    if (*(int *)(*piVar3 + 0x34) == param_1) break;
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 1;
    uVar2 = 0xffffffff;
  } while ((int)uVar1 < 0x1e);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return uVar2;
}

/* ref: FUN_01056350 */
GEN_FRAME unsigned int GEN_THISCALL F_01056350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1056350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar1 = 0;
  do {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x28))));
    if (*(int *)((int)this_00 + 0x34) != -1) {
      F_010569e0(this_00 GEN_EDX_ARG,param_1,param_2);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x78);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf9 */
GEN_FRAME byte GEN_THISCALL F_010563b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10563b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  byte extraout_AL = 0;
  byte bVar1;
  byte extraout_AL_00 = 0;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 4);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(this + 0x28);
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (*(int *)(*piVar3 + 0x34) == param_1) goto LAB_010563f7;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar4 = -1;
LAB_010563f7: ;
  bVar1 = (byte)iVar2;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  if (iVar4 != -1) {
    bVar1 = F_01056cc0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x28) + iVar4 * 4))) GEN_EDX_ARG);
  }
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL_00;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf8 */
GEN_FRAME byte GEN_THISCALL F_01056430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1056430u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(param_1 + 0x28);
  iVar2 = 0;
  do {
    if (*(int *)(*piVar3 + 0x34) == param_3) goto LAB_0105647a;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar2 = -1;
LAB_0105647a: ;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  if (iVar2 == -1) {
    bVar1 = F_01056180(param_1 GEN_EDX_ARG,param_3,param_4,param_5);
  }
  else {
    bVar1 = F_01057600(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x28) + iVar2 * 4))) GEN_EDX_ARG,param_2,
                         *(undefined4 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_010564e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10564e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[0x1c] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if (0x1e < *(int *)(this + 0x30)) {
    *(undefined4 *)(this + 0x30) = 0;
    uVar1 = F_01056300(this GEN_EDX_ARG,0);
    if (uVar1 != 0xffffffff) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
    }
  }
  uVar1 = *(uint *)(this + 0x30);
  *(uint *)(this + 0x30) = uVar1 + 1;
  if (this[0x1c] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf7 */
GEN_FRAME byte GEN_THISCALL F_01056540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x1056540u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte extraout_AL = 0;
  int iVar2;
  int * piVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar3 = *(int * PTR32 *)(param_1 + 0x28);
  iVar2 = 0;
  do {
    if (*(int *)(*piVar3 + 0x34) == param_3) goto LAB_0105658a;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 0x1e);
  iVar2 = -1;
LAB_0105658a: ;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  if (iVar2 == -1) {
    bVar1 = F_01056180(param_1 GEN_EDX_ARG,param_3,param_4,param_4);
  }
  else {
    bVar1 = F_01057600(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x28) + iVar2 * 4))) GEN_EDX_ARG,param_2,
                         *(undefined4 *)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    bVar1 = extraout_AL;
  }
  return bVar1;
}

/* ref: FUN_010565e0 */
GEN_FRAME uint F_010565e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x10565e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_01056680 */
GEN_NOFRAME uint GEN_THISCALL F_01056680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4bd0));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1248,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *(uint *)((int)this + 0x28) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4a48),&REFG(undefined, 0x12b49ff),"WhizManager.cpp",0x26,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  else {
    iVar3 = 0;
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                  (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x9c,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10)));
      if (this_00 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_01056b90(this_00 GEN_EDX_ARG,this);
      }
      *((uint *)GEN_TOP((iVar3 + *(int *)((int)this + 0x28)))) = uVar2;
      F_01056cc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x28)))) GEN_EDX_ARG);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x78);
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xc,"CDev.Engine.Sd.SoundLayout.Whiz",0,0,0x10);
  *(uint *)((int)this + 0x2c) = uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0x10565e0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x12b4b24),&REFG(undefined, 0x12b4a37),"WhizManager.cpp",0x2e,
                    "SQEX::CDev::Engine::Sd::Whiz::WhizManager::WhizManager");
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  *puVar1 = 0x99;
  puVar1[1] = 0x9a;
  puVar1[2] = 0x9b;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::IWhizManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_01056840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1056840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x12b4ba4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf4 */
GEN_NOFRAME uint F_010568a0(void)
{
  GEN_ENTER(0x10568a0u, 0u, 0u, 0u, 0u);
  return 0x1e;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_010568b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10568b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_01056030(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_010568e0 */
GEN_FRAME float10 F_010568e0(float gen_a0)
{
  GEN_ENTER(0x10568e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_01056940 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01056940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0((int)this + 0x48 GEN_EDX_FWD);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4)));
}

/* ref: FUN_01056960 */
GEN_FRAME byte F_01056960(unsigned int gen_a0)
{
  GEN_ENTER(0x1056960u, gen_a0, 0u, 0u, 0u);
  float * in_esi = (float *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = F_00c51673((double)*in_esi);
  if (iVar1 == 0) {
    iVar1 = F_00c51673((double)in_esi[1]);
    if (iVar1 == 0) {
      iVar1 = F_00c51673((double)in_esi[2]);
      if (iVar1 == 0) {
        iVar1 = F_00c51673((double)in_esi[3]);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_010569e0 */
GEN_FRAME uint GEN_THISCALL F_010569e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10569e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  HGDIOBJ h;
  HGDIOBJ pvVar5;
  undefined * h_00;
  HGDIOBJ pvVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  ulong color;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = param_2;
  h = gen_imp_GetStockObject(5);
  pvVar5 = gen_imp_SelectObject(param_2,h);
  if (*(char *)((int)this + 0x40) == '\0') {
    color = 0x900000;
  }
  else {
    color = 0x90;
  }
  h_00 = gen_imp_CreatePen(0,1,color);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = h_00;
  pvVar6 = gen_imp_SelectObject(param_2,h_00);
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0x28)));
  iVar10 = (*(tagRECT *)(gen_frame + 0x28)).bottom / 2;
  iVar9 = (*(tagRECT *)(gen_frame + 0x28)).right / 2;
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 - 300,iVar10 - 300,iVar9 + 300,iVar10 + 300);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 - 0x96,iVar10 - 0x96,iVar9 + 0x96,iVar10 + 0x96);
  piVar7 = (int *)F_01056160(*(undefined4 *)((int)this + 0x44) GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7 GEN_EDX_ARG,((byte *)(gen_frame + 0x4)) + 0x14);
  fVar1 = *(float *)((int)this + 0x20);
  fVar2 = *(float *)((int)this + 0x28);
  uVar3 = *(undefined4 *)((int)this + 0x2c);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (undefined4)gen_fl2bits(fVar2);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = *(undefined4 *)((int)this + 0x24);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = uVar3;
  fVar11 = (float10)fVar2 - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)))));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = (undefined4)gen_fl2bits((float)fVar11);
  iVar9 = (int)((float10)fVar1 - ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)))))) * 5 + iVar9;
  iVar10 = (int)fVar11 * 5 + iVar10;
  iVar4 = (int)*(float *)((int)this + 0x84);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 + iVar4 * -5,iVar10 + iVar4 * -5,iVar4 * 5 + iVar9,
          iVar4 * 5 + iVar10);
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16));
  iVar4 = (int)*(float *)((int)this + 0x80);
  gen_imp_Ellipse((HDC)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)),iVar9 + iVar4 * -5,iVar10 + iVar4 * -5,iVar4 * 5 + iVar9,
          iVar4 * 5 + iVar10);
  gen_imp_SelectObject(uVar3,pvVar6);
  gen_imp_SelectObject(uVar3,pvVar5);
  gen_imp_DeleteObject((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
  uVar8 = gen_imp_DeleteObject(h);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_01056b90 */
GEN_FRAME uint GEN_THISCALL F_01056b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1056b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = param_1;
  F_00cbbd70((int)this + 0x48 GEN_EDX_ARG);
  fVar1 = (float10)0;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(float *)((int)this + 0x88) = (float)fVar1;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(float *)((int)this + 0x98) = (float)(float10)1;
  uVar2 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00cbbdc0((undefined *)((int)this + 0x48) GEN_EDX_ARG,uVar2);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  fVar1 = (float10)0;
  *(float *)((int)this + 0x58) = (float)fVar1;
  *(float *)((int)this + 0x5c) = (float)fVar1;
  *(float *)((int)this + 0x60) = (float)fVar1;
  *(float *)((int)this + 100) = (float)fVar1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(float *)((int)this + 0x68) = (float)fVar1;
  *(float *)((int)this + 0x6c) = (float)fVar1;
  *(float *)((int)this + 0x70) = (float)fVar1;
  *(float *)((int)this + 0x74) = (float)fVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return (uint)this;
}

/* ref: FUN_01056c50 */
GEN_FRAME byte GEN_THISCALL F_01056c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x1056c50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *(float *)(param_1 + 0x80) = param_3;
  *(float *)(param_1 + 0x84) = param_4;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(float *)(param_1 + 0x88) = (float)(float10)0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x90) = param_5;
  *(undefined4 *)(param_1 + 0x94) = param_6;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  }
  return 1;
}

/* ref: FUN_01056cc0 */
GEN_NOFRAME byte GEN_THISCALL F_01056cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  fVar1 = (float10)0;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(float *)((int)this + 0x88) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(float *)((int)this + 0x98) = (float)(float10)1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0xffffffff;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  }
  return 1;
}

/* ref: FUN_01056d30 */
GEN_NOFRAME byte GEN_THISCALL F_01056d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1056d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  undefined4 in_ecx;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * this_00;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x38)) = lpCriticalSection;
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(char *)((int)this + 0x40) != '\0') {
    bVar2 = F_00cbc040((undefined *)((int)this + 0x48) GEN_EDX_ARG);
    if (bVar2 == 0) {
      *(undefined1 *)((int)this + 0x40) = 0;
    }
    else {
      fVar7 = (float10)0;
      in_ecx = *(undefined4 *)((int)this + 0x44);
      (*(float *)(gen_frame + 0x5c)) = (float)fVar7;
      (*(undefined4 *)(gen_frame + 0x68)) = 0;
      (*(float *)(gen_frame + 0x60)) = (float)fVar7;
      (*(float *)(gen_frame + 0x64)) = (float)fVar7;
      piVar3 = (int *)F_01056160(in_ecx GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x4c)));
      if ((char)uVar4 != '\0') {
        bVar2 = F_01056960(&(*(float *)(gen_frame + 0x4c)));
        if (bVar2 != 0) {
          fVar7 = (float10)0;
          (*(undefined4 *)(gen_frame + 0x68)) = 0;
          (*(float *)(gen_frame + 0x60)) = (float)fVar7;
          (*(float *)(gen_frame + 0x64)) = (float)fVar7;
          fVar8 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) - (float10)(*(float *)(gen_frame + 0x4c)))));
          (*(float *)(gen_frame + 0x44)) = fVar8;
          fVar9 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) - (float10)(*(float *)(gen_frame + 0x50)))));
          (*(float *)(gen_frame + 0x48)) = fVar9;
          fVar10 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x28) - (float10)(*(float *)(gen_frame + 0x54)))));
          (*(float *)(gen_frame + 0x40)) = fVar10;
          fVar5 = (float10)fVar8;
          fVar6 = (float10)fVar10;
          if (((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) ||
             ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6))) {
            fVar7 = ((float10)GEN_TOD(atan2(fVar5,-fVar6)));
            (*(float *)(gen_frame + 0x3c)) = (float)fVar7;
          }
          else {
            (*(float *)(gen_frame + 0x3c)) = (float)fVar7;
          }
          fVar8 = (float)((float10)fVar8 * (float10)fVar8 + (float10)fVar10 * (float10)fVar10);
          (*(float *)(gen_frame + 0x44)) = fVar8;
          fVar8 = ((float)GEN_TOF(SQRT((float10)fVar8)));
          (*(float *)(gen_frame + 0x44)) = fVar8;
          (*(float *)(gen_frame + 0x40)) = fVar8;
          fVar5 = (float10)fVar9;
          fVar7 = (float10)0;
          fVar6 = (float10)fVar8;
          if (((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) ||
             ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6)) || fVar7 == fVar6))) {
            fVar7 = ((float10)GEN_TOD(atan2(fVar5,fVar6)));
            (*(float *)(gen_frame + 0x48)) = (float)fVar7;
            fVar7 = (float10)(float)fVar7;
          }
          (*(float *)(gen_frame + 0x44)) = (float)fVar7;
          (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)((int)this + 0x48);
          (*(float *)(gen_frame + 0x5c)) = *(float *)((int)this + 0x88);
          uVar4 = F_00cbbff0((undefined *)((int)this + 0x48) GEN_EDX_ARG);
          piVar3 = (int *)F_00d2cce0();
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xa0))(piVar3 GEN_EDX_ARG,0)));
          if ((this_00 != (undefined *)0x0) && (uVar4 = F_00d05480(this_00 GEN_EDX_ARG,uVar4), uVar4 != 0)) {
            F_00cbbd90(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar4 + 8);
            fVar8 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x44)) * (float10)*(double *)&REFG(undefined, 0x1092098)) /
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x48)) = fVar8;
            fVar9 = ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1092098) * (float10)(*(float *)(gen_frame + 0x3c))) /
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x48)) = fVar9;
            F_00cbc9e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,fVar9,fVar8,&(*(float *)(gen_frame + 0x5c)));
            F_00cbbdb0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
          }
          F_00d03460((int)this + 0x58 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4c)));
          F_00d03460((int)this + 0x68 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x4c)));
          fVar8 = (*(float *)(gen_frame + 0x4)) * (*(float *)(gen_frame + 0x4));
          fVar9 = (*(float *)(gen_frame + 0x8)) * (*(float *)(gen_frame + 0x8));
          fVar10 = SQRT((fVar9 + (*(float *)(gen_frame + 0x0)) * (*(float *)(gen_frame + 0x0))) + fVar8);
          (*(float *)(gen_frame + 0x0)) = fVar10;
          (*(float *)(gen_frame + 0x4)) = (fVar9 + fVar8) + fVar8;
          (*(float *)(gen_frame + 0x8)) = (fVar9 + fVar9) + fVar8;
          (*(float *)(gen_frame + 0xc)) = (fVar9 + (*(float *)(gen_frame + 0xc)) * (*(float *)(gen_frame + 0xc))) + fVar8;
          fVar8 = (*(float *)(gen_frame + 0x24)) * (*(float *)(gen_frame + 0x24));
          fVar9 = (*(float *)(gen_frame + 0x28)) * (*(float *)(gen_frame + 0x28));
          fVar11 = SQRT((fVar9 + (*(float *)(gen_frame + 0x20)) * (*(float *)(gen_frame + 0x20))) + fVar8);
          (*(float *)(gen_frame + 0x20)) = fVar11;
          (*(float *)(gen_frame + 0x24)) = (fVar9 + fVar8) + fVar8;
          (*(float *)(gen_frame + 0x28)) = (fVar9 + fVar9) + fVar8;
          (*(float *)(gen_frame + 0x2c)) = (fVar9 + (*(float *)(gen_frame + 0x2c)) * (*(float *)(gen_frame + 0x2c))) + fVar8;
          fVar8 = ((float)GEN_TOF((((float10)fVar10 - (float10)fVar11) / (float10)*(double *)&REFG(undefined, 0x10947f0))));
          (*(float *)(gen_frame + 0x48)) = fVar8;
          fVar8 = ((float)GEN_TOF((((float10)fVar8 + (float10)*(double *)&REFG(undefined, 0x1133e48)) /
                         (float10)*(double *)&REFG(undefined, 0x1133e48))));
          (*(float *)(gen_frame + 0x48)) = fVar8;
          fVar8 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)((int)this + 0x8c)) +
                         (float10)fVar8 * (float10)*(float *)((int)this + 0x8c))));
          (*(float *)(gen_frame + 0x40)) = fVar8;
          fVar5 = (float10)0;
          fVar7 = (float10)fVar8;
          if (fVar7 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar7)) && fVar5 != fVar7)) {
            (*(float *)(gen_frame + 0x40)) = (float)fVar5;
          }
          (*(float *)(gen_frame + 0x48)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
          F_00cbdeb0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x48)));
          if (*(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24))) != '\0') {
            gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x38)));
          }
          F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
          return 1;
        }
        cVar1 = *(char *)&(*(undefined * PTR32 *)(((char *)((*(LPCRITICAL_SECTION *)(gen_frame + 0x38))) + (1) * 24)));
        lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x38));
        goto joined_r0x01056d81;
      }
    }
  }
  cVar1 = *(char *)((int)this + 0x1c);
joined_r0x01056d81: ;
  if (cVar1 != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_01057050 */
GEN_FRAME uint GEN_FASTCALL F_01057050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1057050u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[3];
  fVar2 = param_1[3];
  fVar3 = param_2[1] * param_1[1];
  fVar4 = param_2[2] * param_1[2];
  *param_3 = (fVar4 + *param_2 * *param_1) + fVar3;
  param_3[1] = (fVar4 + fVar3) + fVar3;
  param_3[2] = (fVar4 + fVar4) + fVar3;
  param_3[3] = (fVar4 + fVar1 * fVar2) + fVar3;
  return (uint)param_3;
}

/* ref: FUN_010570f0 */
GEN_FRAME byte GEN_THISCALL F_010570f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10570f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 4);
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(char *)((int)this + 0x40) != '\0') {
    if (*(char *)((int)this + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  piVar2 = (int *)F_01056140(*(undefined4 *)((int)this + 0x44) GEN_EDX_ARG);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  bVar1 = F_00cbc040((undefined *)((int)this + 0x48) GEN_EDX_ARG);
  if (bVar1 == 0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))
                      ((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x90),
                       *(undefined4 *)((int)this + 0x94),(int)this + 0x20,0,0,0,1);
    F_00cbbdc0((undefined *)((int)this + 0x48) GEN_EDX_ARG,uVar3);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00cbd610((undefined *)((int)this + 0x48) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x14)),(int)this + 0x88,(int)this + 0x8c);
    F_00cbc630((undefined *)((int)this + 0x48) GEN_EDX_ARG,1);
    *(undefined1 *)((int)this + 0x40) = 1;
    F_01056d30(this GEN_EDX_ARG);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbdf90((int)this + 0x48 GEN_EDX_ARG,(uint)&(*(int * PTR32 *)(gen_frame + 0x18)),0);
    if (*(char *)((int)this + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057200 */
GEN_NOFRAME double GEN_STDCALL F_01057200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1057200u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return ((double)GEN_TOD(SQRT(((param_1[2] - param_2[2]) * (param_1[2] - param_2[2]) +
                      (*param_1 - *param_2) * (*param_1 - *param_2)) +
                      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]))));
}

/* ref: FUN_010572c0 */
GEN_NOFRAME float GEN_STDCALL F_010572c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10572c0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *param_1 - *param_2;
  fVar5 = param_1[1] - param_2[1];
  fVar6 = param_1[2] - param_2[2];
  fVar8 = param_1[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x3c)) = fVar4;
  (*(float *)(gen_frame + 0x40)) = fVar5;
  (*(float *)(gen_frame + 0x44)) = fVar6;
  (*(float *)(gen_frame + 0x48)) = fVar8;
  fVar4 = *param_3 - *param_2;
  fVar5 = param_3[1] - param_2[1];
  fVar6 = param_3[2] - param_2[2];
  fVar8 = param_3[3] - param_2[3];
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x2c)) = fVar8;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar8;
  pfVar1 = (float *)F_00d034e0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x20)) = *pfVar1;
  (*(float *)(gen_frame + 0x24)) = pfVar1[1];
  fVar4 = pfVar1[3];
  (*(float *)(gen_frame + 0x28)) = pfVar1[2];
  (*(float *)(gen_frame + 0x2c)) = fVar4;
  fVar5 = pfVar1[1] * (*(float *)(gen_frame + 0x40));
  fVar6 = pfVar1[2] * (*(float *)(gen_frame + 0x44));
  fVar9 = (fVar6 + *pfVar1 * (*(float *)(gen_frame + 0x3c))) + fVar5;
  fVar8 = (*(float *)(gen_frame + 0x40)) * (*(float *)(gen_frame + 0x40));
  fVar7 = (*(float *)(gen_frame + 0x44)) * (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x10)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = (fVar6 + fVar5) + fVar5;
  (*(float *)(gen_frame + 0x18)) = (fVar6 + fVar6) + fVar5;
  (*(float *)(gen_frame + 0x1c)) = (fVar6 + fVar4 * (*(float *)(gen_frame + 0x48))) + fVar5;
  fVar2 = (float10)fVar9;
  fVar4 = SQRT((fVar7 + (*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c))) + fVar8);
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x24)) = (fVar7 + fVar8) + fVar8;
  (*(float *)(gen_frame + 0x28)) = (fVar7 + fVar7) + fVar8;
  (*(float *)(gen_frame + 0x2c)) = (fVar7 + (*(float *)(gen_frame + 0x48)) * (*(float *)(gen_frame + 0x48))) + fVar8;
  fVar3 = (float10)fVar4;
  fVar4 = (float)(fVar2 * fVar2 - fVar3 * fVar3);
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(ABS((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  return fVar4;
}

/* ref: FUN_01057440 */
GEN_FRAME float GEN_THISCALL F_01057440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1057440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  
  uVar1 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x7c);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 == 0) {
    return *(float *)((int)this + 0x30);
  }
  dVar4 = F_01057200((int)this + 0x58,(int)this + 0x20);
  return ((float)GEN_TOF((((float10)dVar4 / (float10)iVar2) * (float10)*(double *)&REFG(undefined, 0x10912a8))));
}

/* ref: FUN_01057480 */
GEN_FRAME byte GEN_THISCALL F_01057480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1057480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if ((*(int *)(param_1 + 0x3c) < 2) || (*(char *)(param_1 + 0x40) != '\0')) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar1 = param_1 + 0x20;
  dVar5 = F_01057200(param_2,iVar1);
  fVar3 = (float10)dVar5;
  fVar2 = (float10)*(float *)(param_1 + 0x80) + (float10)*(double *)&REFG(undefined, 0x1088070);
  if (fVar3 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar3)) && fVar2 != fVar3)) {
    if (((*(char *)(param_1 + 0x41) != '\x01') && (*(char *)(param_1 + 0x41) == '\0')) &&
       (fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x98) *
                                (float10)*(double *)&REFG(undefined, 0x10947f0)))),
       !((float10)*(float *)(param_1 + 0x30) <= fVar3) !=
       (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)*(float *)(param_1 + 0x30))))) {
      *(undefined1 *)(param_1 + 0x41) = 1;
LAB_010575c6: ;
      if (*(char *)(param_1 + 0x1c) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x41) == '\0') {
      dVar5 = F_01057200(param_2,param_1 + 0x58);
      dVar6 = F_01057200(param_2,iVar1);
      fVar3 = (float10)(float)dVar5;
      fVar2 = (float10)(float)dVar6;
      fVar4 = (float10)*(double *)&REFG(undefined, 0x10943d8);
      if (((!((float10)((float)GEN_TOF(ABS((float10)(float)(fVar3 - fVar2)))) <= fVar4) !=
            (GEN_ISNAN(fVar4) || GEN_ISNAN((float10)((float)GEN_TOF(ABS((float10)(float)(fVar3 - fVar2))))))) &&
          (fVar4 = fVar4 + (float10)*(float *)(param_1 + 0x84),
          fVar2 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar2)) && fVar4 != fVar2))) &&
         (fVar3 <= fVar4 && ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar3)) && fVar4 != fVar3))) {
        fVar7 = F_010572c0(param_2,iVar1,param_1 + 0x58);
        fVar2 = ((float10)fVar7 - (float10)*(float *)(param_1 + 0x80)) -
                (float10)*(double *)&REFG(undefined, 0x1088070);
        fVar3 = (float10)*(double *)&REFG(undefined, 0x108bec8);
        if ((!(fVar3 <= fVar2) != ((GEN_ISNAN(fVar2) || GEN_ISNAN(fVar3)) || fVar2 == fVar3)) &&
           (fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x98) *
                                    (float10)*(double *)&REFG(undefined, 0x10947f0)))),
           !((float10)*(float *)(param_1 + 0x30) <= fVar3) !=
           (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)*(float *)(param_1 + 0x30))))) goto LAB_010575c6;
      }
    }
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_01057600 */
GEN_FRAME byte GEN_THISCALL F_01057600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1057600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte extraout_AL = 0;
  uint uVar6;
  uint extraout_EAX = 0;
  float fVar7;
  
  *(undefined1 *)((int)this + 0x1c) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  bVar5 = F_01056960(param_1);
  uVar6 = (uint)bVar5;
  if ((bVar5 != 0) && (uVar6 = param_2, param_2 != *(uint *)((int)this + 0x78))) {
    uVar1 = *(undefined4 *)((int)this + 0x24);
    uVar2 = *(undefined4 *)((int)this + 0x28);
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    uVar4 = *(undefined4 *)((int)this + 0x20);
    *(undefined4 *)((int)this + 0x20) = *param_1;
    *(undefined4 *)((int)this + 0x24) = param_1[1];
    *(undefined4 *)((int)this + 0x28) = param_1[2];
    *(undefined4 *)((int)this + 0x2c) = param_1[3];
    bVar5 = F_00cbc040((undefined *)((int)this + 0x48) GEN_EDX_ARG);
    if (bVar5 != 0) {
      F_00cbc4e0((undefined *)((int)this + 0x48) GEN_EDX_ARG,param_1);
    }
    fVar7 = F_00d2e2e0();
    *(float *)((int)this + 0x98) = fVar7;
    if (*(int *)((int)this + 0x38) < 2) {
      *(undefined4 *)((int)this + 0x58) = uVar4;
      *(undefined4 *)((int)this + 0x5c) = uVar1;
      *(undefined4 *)((int)this + 0x60) = uVar2;
      *(undefined4 *)((int)this + 100) = uVar3;
      *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    }
    else {
      *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x58);
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x5c);
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x60);
      *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 100);
      *(undefined4 *)((int)this + 0x58) = uVar4;
      *(undefined4 *)((int)this + 0x5c) = uVar1;
      *(undefined4 *)((int)this + 0x60) = uVar2;
      *(undefined4 *)((int)this + 100) = uVar3;
      *(undefined4 *)((int)this + 0x38) = 2;
    }
    if (*(int *)((int)this + 0x3c) < 1) {
      uVar6 = *(int *)((int)this + 0x3c) + 1;
      *(uint *)((int)this + 0x78) = param_2;
      *(uint *)((int)this + 0x3c) = uVar6;
    }
    else {
      *(undefined4 *)((int)this + 0x3c) = 2;
      *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x78);
      *(uint *)((int)this + 0x78) = param_2;
      fVar7 = F_01057440(this GEN_EDX_ARG);
      *(float *)((int)this + 0x30) = fVar7;
      uVar6 = extraout_EAX;
    }
  }
  bVar5 = (byte)uVar6;
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
    bVar5 = extraout_AL;
  }
  return bVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Whiz::WhizObject::vf0 */
GEN_FRAME uint GEN_THISCALL F_01057720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1057720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x12b4c84));
  F_00cbbdb0(this + 0x48 GEN_EDX_FWD);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_010577a0 */
GEN_FRAME unsigned int F_010577a0(float gen_a0)
{
  GEN_ENTER(0x10577a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return;
}

/* ref: FUN_010577b0 */
GEN_FRAME byte GEN_THISCALL F_010577b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x10577b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX = 0;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(in_ecx[5] - param_2[5]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(in_ecx[4] - param_2[4]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(in_ecx[6] - param_2[6]) < param_3);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(in_ecx[7] - param_2[7]) < param_3);
  uVar3 = gen_movmskps(&(auVar2));
  if (((byte)uVar3 & 7) != 7) {
    return 0;
  }
  fVar7 = *in_ecx * *param_2;
  fVar8 = in_ecx[1] * param_2[1];
  fVar9 = in_ecx[2] * param_2[2];
  fVar10 = in_ecx[3] * param_2[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] -
                             gen_bits2f((uint)gen_fl2bits(fVar5 + fVar6) & *(uint *)&REFG(undefined, 0x1134c84) ^
                                        (uint)gen_fl2bits(param_2[1]))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - gen_bits2f((uint)gen_fl2bits(fVar6 + fVar5) &
                                                  *(uint *)&REFG(undefined, 0x1134c80) ^
                                                  (uint)gen_fl2bits(*param_2))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] -
                             gen_bits2f((uint)gen_fl2bits(fVar8 + fVar7) & *(uint *)&REFG(undefined, 0x1134c88) ^
                                        (uint)gen_fl2bits(param_2[2]))) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)(ABS(in_ecx[3] -
                   gen_bits2f((uint)gen_fl2bits(fVar7 + fVar8) & *(uint *)&REFG(undefined, 0x1134c8c) ^
                              (uint)gen_fl2bits(param_2[3]))) < param_3);
  iVar4 = gen_movmskps(&(auVar1));
  return iVar4 == 0xf;
}

/* ref: FUN_01057830 */
GEN_FRAME unsigned int GEN_THISCALL F_01057830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1057830u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
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
  
  fVar3 = gen_bits2f(*param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0));
  fVar4 = gen_bits2f(param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4));
  fVar5 = gen_bits2f(param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8));
  fVar6 = gen_bits2f(param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc));
  *in_ecx = fVar3;
  in_ecx[1] = fVar4;
  in_ecx[2] = fVar5;
  in_ecx[3] = fVar6;
  fVar9 = gen_bits2f(param_2[4]);
  fVar10 = gen_bits2f(param_2[5]);
  fVar1 = gen_bits2f(param_2[6]);
  fVar2 = gen_bits2f(param_2[7]);
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  in_ecx[4] = fVar7;
  in_ecx[5] = fVar8;
  in_ecx[6] = fVar9;
  in_ecx[7] = fVar10;
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  fVar9 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  fVar10 = gen_bits2f((uint)gen_fl2bits(fVar10) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
  in_ecx[4] = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  in_ecx[5] = fVar8;
  in_ecx[6] = fVar9;
  in_ecx[7] = fVar10;
  return 0;
}

/* ref: FUN_010578d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_010578d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10578d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
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
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar13 = param_1[3];
  fVar12 = *(float *)(param_2 + 2);
  fVar4 = *(float *)((int)param_2 + 0x14);
  fVar5 = *(float *)(param_2 + 3);
  fVar6 = *(float *)((int)param_2 + 0x1c);
  fVar7 = fVar12 * fVar1;
  fVar8 = fVar4 * fVar2;
  fVar9 = fVar5 * fVar3;
  fVar10 = (((fVar8 + fVar7) + fVar9) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar12)
           + (fVar5 * fVar2 - fVar4 * fVar3) * fVar13;
  fVar11 = (((fVar8 + fVar7) + fVar9) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar4)
           + (fVar12 * fVar3 - fVar5 * fVar1) * fVar13;
  fVar12 = (((fVar8 + fVar7) + fVar9) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar5)
           + (fVar4 * fVar1 - fVar12 * fVar2) * fVar13;
  fVar13 = (((fVar8 + fVar7) + fVar9) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar6)
           + (fVar6 * fVar13 - fVar6 * fVar13) * fVar13;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  *(float *)((int)this + 0x10) = (fVar10 + fVar10) + param_1[4];
  *(float *)((int)this + 0x14) = (fVar11 + fVar11) + fVar1;
  *(float *)((int)this + 0x18) = (fVar12 + fVar12) + fVar2;
  *(float *)((int)this + 0x1c) = (fVar13 + fVar13) + fVar3;
  fVar1 = *(float *)((int)param_2 + 0xc);
  local_20 = gen_bits2f((uint)*(undefined8 *)param_1);
  fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_1) >> 0x20));
  fStack_18 = gen_bits2f((uint)*(undefined8 *)(param_1 + 2));
  local_30 = gen_bits2f((uint)*param_2);
  fStack_2c = gen_bits2f((uint)((ulonglong)*param_2 >> 0x20));
  fStack_28 = gen_bits2f((uint)param_2[1]);
  fVar2 = param_1[3];
  *(float *)this =
       ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar2) + local_20 * fVar1;
  *(float *)((int)this + 4) =
       ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar2) + fStack_1c * fVar1;
  *(float *)((int)this + 8) =
       ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar2) + fStack_18 * fVar1;
  *(float *)((int)this + 0xc) =
       fVar1 * fVar2 - ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
  return 0;
}

/* ref: FUN_01059190 */
GEN_FRAME uint GEN_THISCALL F_01059190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  return (uint)param_1;
}

/* ref: FUN_010591b0 */
GEN_FRAME uint GEN_THISCALL F_010591b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10591b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  fVar2 = param_2[2] * param_1[2] + *param_2 * *param_1;
  fVar3 = param_2[3] * param_1[3] + param_2[1] * param_1[1];
  fVar4 = *param_2 * *param_1 + param_2[2] * param_1[2];
  fVar5 = param_2[1] * param_1[1] + param_2[3] * param_1[3];
  uVar6 = (uint)gen_fl2bits(fVar2 + fVar3) & *(uint *)&REFG(undefined, 0x1134c84);
  uVar7 = (uint)gen_fl2bits(fVar5 + fVar4) & *(uint *)&REFG(undefined, 0x1134c88);
  uVar8 = (uint)gen_fl2bits(fVar4 + fVar5) & *(uint *)&REFG(undefined, 0x1134c8c);
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar1 = param_1[3];
  *(uint *)this =
       (uint)gen_fl2bits(fVar3 + fVar2) & *(uint *)&REFG(undefined, 0x1134c80) ^ (uint)gen_fl2bits(*param_1);
  *(uint *)((int)this + 4) = uVar6 ^ (uint)gen_fl2bits(fVar4);
  *(uint *)((int)this + 8) = uVar7 ^ (uint)gen_fl2bits(fVar5);
  *(uint *)((int)this + 0xc) = uVar8 ^ (uint)gen_fl2bits(fVar1);
  return (uint)param_1;
}

/* ref: FUN_010591f0 */
GEN_FRAME byte GEN_THISCALL F_010591f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10591f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 in_EDX = 0;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(*(float *)((int)this + 0x14) - param_1[5]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(*(float *)((int)this + 0x10) - param_1[4]) < *param_2);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(*(float *)((int)this + 0x18) - param_1[6]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(*(float *)((int)this + 0x1c) - param_1[7]) < param_2[3]);
  uVar4 = gen_movmskps(&(auVar2));
  if (((byte)uVar4 & 7) != 7) {
    return 0;
  }
  fVar7 = *(float *)this * *param_1;
  fVar8 = *(float *)((int)this + 4) * param_1[1];
  fVar9 = *(float *)((int)this + 8) * param_1[2];
  fVar10 = *(float *)((int)this + 0xc) * param_1[3];
  fVar5 = fVar9 + fVar7;
  fVar6 = fVar10 + fVar8;
  fVar7 = fVar7 + fVar9;
  fVar8 = fVar8 + fVar10;
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 4) -
                             gen_bits2f((uint)gen_fl2bits(fVar5 + fVar6) & *(uint *)&REFG(undefined, 0x1134c84) ^
                                        (uint)gen_fl2bits(param_1[1]))) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this -
                             gen_bits2f((uint)gen_fl2bits(fVar6 + fVar5) & *(uint *)&REFG(undefined, 0x1134c80) ^
                                        (uint)gen_fl2bits(*param_1))) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 8) -
                             gen_bits2f((uint)gen_fl2bits(fVar8 + fVar7) & *(uint *)&REFG(undefined, 0x1134c88) ^
                                        (uint)gen_fl2bits(param_1[2]))) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)(ABS(*(float *)((int)this + 0xc) -
                   gen_bits2f((uint)gen_fl2bits(fVar7 + fVar8) & *(uint *)&REFG(undefined, 0x1134c8c) ^
                              (uint)gen_fl2bits(param_1[3]))) < param_2[3]);
  iVar3 = gen_movmskps(&(auVar1));
  return iVar3 == 0xf;
}

/* ref: FUN_01059630 */
GEN_FRAME uint GEN_THISCALL F_01059630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_01059650 */
GEN_FRAME uint GEN_THISCALL F_01059650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = (undefined *)*param_1;
  if (this_00 != (undefined *)0x0) {
    F_00d919e0(this_00 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = this_00;
  return (uint)this;
}

/* ref: FUN_01059680 */
GEN_FRAME unsigned int GEN_THISCALL F_01059680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_010596b0 */
GEN_NOFRAME uint GEN_THISCALL F_010596b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x10596b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e4030) + 0x14))))(REFG(int * PTR32, 0x15e4030) GEN_EDX_FWD,*(int *)this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_010596d0 */
GEN_FRAME uint GEN_THISCALL F_010596d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x10596d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  F_00d919e0(param_1 GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_01059700 */
GEN_NOFRAME unsigned int GEN_THISCALL F_01059700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x1059700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_01059720 */
GEN_FRAME uint GEN_THISCALL F_01059720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  if (*(int *)((int)this + 8) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD,param_1);
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_01059750 */
GEN_FRAME uint F_01059750(unsigned int gen_a0)
{
  GEN_ENTER(0x1059750u, gen_a0, 0u, 0u, 0u);
  int * in_edi = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  uint uVar2;
  int iVar3;
  
  ((GEN_TCODE *)*(gen_code32 *)(*in_edi + 0x1c))(in_edi GEN_EDX_ARG,0x40);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_edi + 0x10))(in_edi GEN_EDX_ARG,((char *)(gen_frame + 0xc)),0x40);
  if (uVar2 == 0) {
    return 0;
  }
  do {
    iVar3 = 0;
    if (0 < (int)uVar2) {
      do {
        cVar1 = ((char *)(gen_frame + 0xc))[(int)(iVar3)];
        if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
          ((GEN_TCODE *)*(gen_code32 *)(*in_edi + 0x20))(in_edi GEN_EDX_ARG);
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_edi + 0x14))(in_edi GEN_EDX_ARG,iVar3);
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*in_edi + 0x1c))(in_edi GEN_EDX_ARG,0x40);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_edi + 0x10))(in_edi GEN_EDX_ARG,((char *)(gen_frame + 0xc)),0x40);
    if (uVar2 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_010597e0 */
GEN_FRAME ulonglong F_010597e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10597e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  F_01059750(param_1);
  *param_2 = 0;
  (*(undefined4 *)(gen_frame + 0x104)) = 0;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  iVar6 = 0;
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_ARG,0xff);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x0)),0xff);
  (*(uint *)(gen_frame + 0x100)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
  if (((char *)(gen_frame + 0x0))[0] != '+') {
    if (((char *)(gen_frame + 0x0))[0] != '-') goto LAB_0105984b;
    *param_2 = 1;
  }
  iVar6 = 1;
LAB_0105984b: ;
  uVar5 = (*(undefined4 *)(gen_frame + 0x108));
  if ((((iVar6 + 3 < (int)uVar3) && (((char *)(gen_frame + 0x0))[(int)(iVar6)] == '0')) &&
      ((((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)] == 'x' || (((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)] == 'X')))) &&
     ((((cVar1 = ((char *)(gen_frame + 0x0))[(int)(iVar6 + 2)], '/' < cVar1 && (cVar1 < ':')) ||
       (('`' < cVar1 && (cVar1 < 'g')))) || (('@' < cVar1 && (cVar1 < 'G')))))) {
    param_2 = (undefined1 *)0x10;
    iVar6 = iVar6 + 2;
  }
  else if ((iVar6 + 2 < (int)uVar3) &&
          (((((char *)(gen_frame + 0x0))[(int)(iVar6)] == '0' && ('/' < ((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)])) &&
           (((char *)(gen_frame + 0x0))[(int)(iVar6 + 1)] < ':')))) {
    param_2 = (undefined1 *)0x8;
    iVar6 = iVar6 + 1;
  }
  else {
    param_2 = (undefined1 *)0xa;
  }
  for (; iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
    cVar1 = ((char *)(gen_frame + 0x0))[(int)(iVar6)];
    uVar7 = 0xffffffff;
    if ((cVar1 < '0') || ('9' < cVar1)) {
      if ((cVar1 < 'B') || ('F' < cVar1)) {
        if (('a' < cVar1) && (cVar1 < 'g')) {
          uVar7 = (int)cVar1 - 0x57;
        }
      }
      else {
        uVar7 = (int)cVar1 - 0x37;
      }
    }
    else {
      uVar7 = (int)cVar1 - 0x30;
    }
    if (param_2 <= uVar7) break;
    lVar2 = ZEXT48(param_2) * (longlong)CONCAT44(uVar5,(*(undefined4 *)(gen_frame + 0x104))) + (ulonglong)uVar7;
    uVar4 = (undefined4)lVar2;
    uVar5 = (undefined4)((ulonglong)lVar2 >> 0x20);
    (*(undefined4 *)(gen_frame + 0x104)) = uVar4;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x20))(param_1 GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x14))(param_1 GEN_EDX_ARG,iVar6);
  return CONCAT44(uVar5,(*(undefined4 *)(gen_frame + 0x104)));
}

/* ref: FUN_01059960 */
GEN_FRAME float10 F_01059960(unsigned int gen_a0)
{
  GEN_ENTER(0x1059960u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  
  F_01059750(in_eax);
  iVar3 = 0;
  ((GEN_TCODE *)*(gen_code32 *)(*in_eax + 0x1c))(in_eax GEN_EDX_ARG,0xff);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*in_eax + 0x10))(in_eax GEN_EDX_ARG,((char *)(gen_frame + 0xc)),0xff);
  if ((uVar2 != 0) &&
     ((((('/' < ((char *)(gen_frame + 0xc))[0] && (((char *)(gen_frame + 0xc))[0] < ':')) || (((char *)(gen_frame + 0xc))[0] == '+')) ||
       (((((char *)(gen_frame + 0xc))[0] == '-' || (((char *)(gen_frame + 0xc))[0] == '.')) || (((char *)(gen_frame + 0xc))[0] == ',')))) &&
      (iVar3 = 1, 1 < (int)uVar2)))) {
    do {
      cVar1 = ((char *)(gen_frame + 0xc))[(int)(iVar3)];
      if (((cVar1 < '0') || ('9' < cVar1)) &&
         ((cVar1 != '+' && (((cVar1 != '-' && (cVar1 != 'E')) && (cVar1 != 'e')))))) {
        if (cVar1 != '.') {
          if (cVar1 == ',') goto LAB_010599ff;
          break;
        }
LAB_01059a09: ;
        ((char *)(gen_frame + 0xc))[(int)(iVar3)] = '.';
      }
      else {
LAB_010599ff: ;
        if ((cVar1 == '.') || (cVar1 == ',')) goto LAB_01059a09;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*in_eax + 0x20))(in_eax GEN_EDX_ARG);
  ((GEN_TCODE *)*(gen_code32 *)(*in_eax + 0x14))(in_eax GEN_EDX_ARG,iVar3);
  ((char *)(gen_frame + 0xc))[(int)(iVar3)] = '\0';
  if (iVar3 < 1) {
    return (float10)REFG(float, 0x1090708);
  }
  dVar4 = F_00c52474(((char *)(gen_frame + 0xc)),0);
  return (float10)dVar4;
}

/* ref: FUN_01059a60 */
GEN_FRAME uint GEN_THISCALL F_01059a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  F_01059750(*(undefined4 *)((int)this + 8));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,6);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),6);
  if (3 < (int)uVar1) {
    uVar2 = F_00da0d60(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined1, 0x113bf28),4);
    if ((uVar2 == 0) &&
       ((((uVar1 == 4 || ((*(char *)(gen_frame + 0x8)) == ' ')) || ((*(char *)(gen_frame + 0x8)) == '\t')) ||
        (((*(char *)(gen_frame + 0x8)) == '\r' || ((*(char *)(gen_frame + 0x8)) == '\n')))))) {
      *param_1 = 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,4);
      return (uint)this;
    }
  }
  if (4 < (int)uVar1) {
    uVar2 = F_00da0d60(((undefined1 *)(gen_frame + 0x4)),"false",4);
    if ((uVar2 == 0) &&
       (((uVar1 == 5 || ((*(char *)(gen_frame + 0x9)) == ' ')) ||
        (((*(char *)(gen_frame + 0x9)) == '\t' || (((*(char *)(gen_frame + 0x9)) == '\r' || ((*(char *)(gen_frame + 0x9)) == '\n')))))))) {
      *param_1 = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,5);
      return (uint)this;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_01059b60 */
GEN_FRAME uint GEN_THISCALL F_01059b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD,param_1,1);
  return (uint)this;
}

/* ref: FUN_01059b80 */
GEN_FRAME uint GEN_THISCALL F_01059b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01059960(*(undefined4 *)((int)this + 8));
  *param_1 = (float)fVar1;
  return (uint)this;
}

/* ref: FUN_01059ba0 */
GEN_FRAME uint GEN_THISCALL F_01059ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double * param_1 = (double *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01059960(*(undefined4 *)((int)this + 8));
  *param_1 = (double)fVar1;
  return (uint)this;
}

/* ref: FUN_01059bc0 */
GEN_FRAME uint GEN_THISCALL F_01059bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1059bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_01059750(*(undefined4 *)((int)this + 8));
  uVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = F_00da7260(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      if ((uVar1 == 0xffffffff) || (uVar1 == (int)(char)param_3)) {
        *(undefined1 *)(uVar2 + param_1) = 0;
        return uVar2;
      }
      *(char *)(uVar2 + param_1) = (char)uVar1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_2);
  }
  return 0xffffffff;
}

/* ref: FUN_01059c20 */
GEN_FRAME uint GEN_THISCALL F_01059c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x1059c20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                    (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_01059c30 */
GEN_FRAME uint GEN_THISCALL F_01059c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0xc))))(REFG(int * PTR32, 0x15dffa8) GEN_EDX_FWD,param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_01059c60 */
GEN_FRAME uint GEN_THISCALL F_01059c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(short)uVar1;
    return (uint)this;
  }
  *param_1 = (short)uVar1;
  return (uint)this;
}

/* ref: FUN_01059cb0 */
GEN_FRAME uint GEN_THISCALL F_01059cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(short)uVar1;
    return (uint)this;
  }
  *param_1 = (short)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d00 */
GEN_FRAME uint GEN_THISCALL F_01059d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(int)uVar1;
    return (uint)this;
  }
  *param_1 = (int)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d40 */
GEN_FRAME uint GEN_THISCALL F_01059d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    *param_1 = -(int)uVar1;
    return (uint)this;
  }
  *param_1 = (int)uVar1;
  return (uint)this;
}

/* ref: FUN_01059d80 */
GEN_FRAME uint GEN_THISCALL F_01059d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_1 = uVar1;
  return (uint)this;
}

/* ref: FUN_01059dc0 */
GEN_FRAME uint GEN_THISCALL F_01059dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * param_1 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_010597e0(*(undefined4 *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
  if ((*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_1 = uVar1;
  return (uint)this;
}

/* ref: FUN_01059e00 */
GEN_FRAME uint GEN_THISCALL F_01059e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1059e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar2 = F_00d93630(this_00 GEN_EDX_ARG,param_1,param_2,2);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_01059e60 */
GEN_FRAME uint GEN_THISCALL F_01059e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4cb4));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x18)));
  *(undefined2 *)((int)this_00 + 4) = 0x18;
  uVar2 = F_00db9820(this_00 GEN_EDX_ARG,param_1,2,0);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_01059eb0 */
GEN_FRAME uint GEN_THISCALL F_01059eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  F_00da4850(param_1 GEN_EDX_FWD);
  piVar1 = (int *)F_00da4200(param_1 GEN_EDX_ARG);
  F_01059750(*(undefined4 *)((int)this + 8));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,1);
  uVar2 = F_00da7260(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  while ((((uVar2 != 0xffffffff && (uVar2 != 0x20)) && (uVar2 != 9)) &&
         ((uVar2 != 0xd && (uVar2 != 10))))) {
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,1);
    }
    *(char *)(piVar1[1] + *piVar1) = (char)uVar2;
    piVar1[1] = piVar1[1] + 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x1c))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,1);
    uVar2 = F_00da7260(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x20))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar1,1);
  }
  *(undefined1 *)(piVar1[1] + *piVar1) = 0;
  piVar1[1] = piVar1[1] + 1;
  return (uint)this;
}

/* ref: FUN_01059f90 */
GEN_FRAME uint GEN_THISCALL F_01059f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x1059f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  F_01059eb0(this GEN_EDX_FWD,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00d91520(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)this;
}

/* ref: FUN_0105a020 */
GEN_FRAME uint F_0105a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2 & 0xffff;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = -uVar1;
    *param_2 = (short)uVar1;
    return uVar1 & 0xffff;
  }
  *param_2 = (short)uVar2;
  return uVar1;
}

/* ref: FUN_0105a060 */
GEN_FRAME uint F_0105a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2 & 0xffff;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = -uVar1;
    *param_2 = (short)uVar1;
    return uVar1 & 0xffff;
  }
  *param_2 = (short)uVar2;
  return uVar1;
}

/* ref: FUN_0105a0a0 */
GEN_FRAME uint F_0105a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    *param_2 = -uVar1;
    return -uVar1;
  }
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_0105a0d0 */
GEN_FRAME uint F_0105a0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  uVar1 = (uint)uVar2;
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    *param_2 = -uVar1;
    return -uVar1;
  }
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_0105a100 */
GEN_FRAME uint F_0105a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  uVar1 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_0105a130 */
GEN_FRAME uint F_0105a130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  uVar1 = F_010597e0(param_1,&(*(char *)(gen_frame + 0xb)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    uVar1 = CONCAT44(-((int)(uVar1 >> 0x20) + (uint)((int)uVar1 != 0)),-(int)uVar1);
  }
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_0105a160 */
GEN_FRAME uint F_0105a160(unsigned int gen_a0)
{
  GEN_ENTER(0x105a160u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_0105a190 */
GEN_FRAME uint F_0105a190(unsigned int gen_a0)
{
  GEN_ENTER(0x105a190u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_0105a1c0 */
GEN_FRAME uint F_0105a1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x105a1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkIstream::vf0 */
GEN_FRAME uint GEN_THISCALL F_0105a1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_01059700(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_0105a230 */
GEN_FRAME uint GEN_THISCALL F_0105a230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_0105a270 */
GEN_FRAME uint F_0105a270(void)
{
  GEN_ENTER(0x105a270u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x20)));
  puVar2[1] = 0x10020;
  *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x114c4ec));
  puVar2[2] = "hk_2011.3.1-r1";
  F_00da3de0(puVar2 + 3 GEN_EDX_ARG,0);
  *puVar2 = (*(undefined * PTR32 (*)[11])REFP(0x114c51c));
  return (uint)puVar2;
}

/* ref: FUN_0105a2c0 */
GEN_FRAME uint F_0105a2c0(void)
{
  GEN_ENTER(0x105a2c0u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x20)));
  puVar2[1] = 0x10020;
  *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0(puVar2 + 2 GEN_EDX_ARG,0);
  puVar2[6] = 1;
  puVar2[7] = 1;
  return (uint)puVar2;
}

/* ref: FUN_0105a320 */
GEN_FRAME unsigned int GEN_THISCALL F_0105a320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  if (*param_1 != 0) {
    piVar2 = param_1;
    do {
      iVar1 = *((int *)GEN_TOP(((param_2 - (int)param_1) + (int)piVar2)));
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(*piVar2 + 0x10) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,*(int *)(*piVar2 + 0x10),iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (*piVar2 != 0);
  }
  return;
}

/* ref: hkVtableClassRegistry::vf3 */
GEN_FRAME uint GEN_THISCALL F_0105a360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this + 8 GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_0105a380 */
GEN_FRAME unsigned int GEN_THISCALL F_0105a380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar1) {
    piVar2 = *(int * PTR32 *)(param_1 + 8);
    do {
      if (*piVar2 != -1) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 <= iVar1);
  }
  if (iVar3 <= iVar1) {
    do {
      F_00dbd8b0((undefined *)((int)this + 8) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),
                   *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + iVar3 * 8))),
                   *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4 + iVar3 * 8))));
      iVar1 = *(int *)(param_1 + 0x10);
      iVar3 = iVar3 + 1;
      if (iVar3 <= iVar1) {
        piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 8) + iVar3 * 8)));
        do {
          if (*piVar2 != -1) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 2;
        } while (iVar3 <= iVar1);
      }
    } while (iVar3 <= iVar1);
  }
  return 0;
}

/* ref: FUN_0105a400 */
GEN_NOFRAME uint F_0105a400(void)
{
  GEN_ENTER(0x105a400u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x14)));
  puVar2[1] = 0x10014;
  *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x114c54c));
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0xffffffff;
  return (uint)puVar2;
}

/* ref: FUN_0105a440 */
GEN_FRAME uint GEN_THISCALL F_0105a440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a440u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_0105a450 */
GEN_FRAME uint GEN_THISCALL F_0105a450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_0105a470 */
GEN_FRAME uint GEN_THISCALL F_0105a470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105a470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (0x14 < iVar1) {
    return 0;
  }
  F_00da0e40(((undefined1 *)(gen_frame + 0x4)),*(int *)this,iVar1);
  ((undefined1 *)(gen_frame + 0x4))[(int)(*(int *)((int)this + 4) - *(int *)this)] = 0;
  uVar2 = F_00da0e80(((undefined1 *)(gen_frame + 0x4)),10);
  return uVar2;
}

/* ref: FUN_0105a4c0 */
GEN_FRAME uint F_0105a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105a4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  F_00da0140(param_1 GEN_EDX_ARG,*param_2,param_2[1] - *param_2);
  return (uint)param_1;
}

/* ref: FUN_0105a510 */
GEN_FRAME uint GEN_THISCALL F_0105a510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  uVar1 = F_00da0e60(param_1);
  *(uint *)((int)this + 4) = uVar1 + *(int *)this;
  return uVar1 + *(int *)this;
}

/* ref: FUN_0105a540 */
GEN_FRAME uint GEN_THISCALL F_0105a540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * pcVar1;
  int iVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (char *)*param_2;
  pcVar3 = *(char * PTR32 *)this;
  if (pcVar3 == pcVar1) {
    *param_1 = *(int *)((int)this + 4) == param_2[1];
    return (uint)param_1;
  }
  iVar2 = *(int *)((int)this + 4) - (int)pcVar3;
  if (iVar2 != param_2[1] - (int)pcVar1) {
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    iVar5 = (int)pcVar1 - (int)pcVar3;
    do {
      if (*pcVar3 != pcVar3[iVar5]) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 < iVar2);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105a5b0 */
GEN_FRAME uint GEN_THISCALL F_0105a5b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  char * pcVar2;
  
  pcVar1 = *(char * PTR32 *)this;
  for (pcVar2 = param_2; (pcVar1 < *(char * PTR32 *)((int)this + 4) && (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 1) {
    if (*pcVar1 != *pcVar2) {
      *param_1 = 0;
      return (uint)param_1;
    }
    pcVar1 = pcVar1 + 1;
  }
  if ((pcVar1 == *(char * PTR32 *)((int)this + 4)) && (*pcVar2 == '\0')) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_0105a600 */
GEN_FRAME uint GEN_THISCALL F_0105a600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char * pcVar1;
  char * pcVar2;
  int iVar4;
  char * pcVar5;
  int iVar6;
  int iVar3;
  
  pcVar1 = *(char * PTR32 *)this;
  pcVar5 = (char *)*param_1;
  iVar6 = *(int *)((int)this + 4) - (int)pcVar1;
  iVar4 = param_1[1] - (int)pcVar5;
  iVar3 = iVar6;
  if (iVar4 <= iVar6) {
    iVar3 = iVar4;
  }
  pcVar2 = pcVar1 + iVar3;
  do {
    if (pcVar2 <= pcVar1) {
LAB_0105a637: ;
      if (iVar6 == iVar4) {
        return 0;
      }
      return (uint)(iVar4 <= iVar6) * 2 - 1;
    }
    if (*pcVar1 != *pcVar5) {
      if (pcVar1 < pcVar2) {
        return (uint)(*pcVar5 <= *pcVar1) * 2 - 1;
      }
      goto LAB_0105a637;
    }
    pcVar1 = pcVar1 + 1;
    pcVar5 = pcVar5 + 1;
  } while( true );
}

/* ref: FUN_0105a660 */
GEN_FRAME uint GEN_THISCALL F_0105a660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 0x12);
  *(uint *)((int)this + 4) = param_2;
  *(uint *)this = (uint)uVar1 + param_1;
  return param_2;
}

/* ref: FUN_0105a680 */
GEN_FRAME uint GEN_THISCALL F_0105a680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105a680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = F_00d928d0(param_2 GEN_EDX_FWD,param_3);
  *(uint *)((int)this + 4) = uVar1;
  if (uVar1 != 0) {
    *(uint *)this = (uint)*(ushort *)(uVar1 + 0x12) + param_1;
  }
  return uVar1;
}

/* ref: FUN_0105a6b0 */
GEN_FRAME uint GEN_THISCALL F_0105a6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  
  F_0105a660(this GEN_EDX_FWD,param_1,param_2);
  return ((uint)(uint)(this));
}

/* ref: FUN_0105a6d0 */
GEN_FRAME uint GEN_THISCALL F_0105a6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0105a680(this GEN_EDX_FWD,*param_1,param_1[1],param_2);
  return (uint)this;
}

/* ref: FUN_0105a700 */
GEN_FRAME uint GEN_THISCALL F_0105a700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105a700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0105a680(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_0105a720 */
GEN_FRAME uint GEN_THISCALL F_0105a720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a720u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_0105a740 */
GEN_NOFRAME uint GEN_THISCALL F_0105a740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105a740u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_0105a750 */
GEN_NOFRAME uint GEN_THISCALL F_0105a750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105a750u, gen_a0, 0u, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  return *in_ecx;
}

/* ref: FUN_0105a760 */
GEN_FRAME uint GEN_THISCALL F_0105a760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a770 */
GEN_FRAME uint GEN_THISCALL F_0105a770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a780 */
GEN_FRAME uint GEN_THISCALL F_0105a780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a780u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a790 */
GEN_FRAME uint GEN_THISCALL F_0105a790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0105a7a0 */
GEN_FRAME uint GEN_THISCALL F_0105a7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a7b0 */
GEN_FRAME uint GEN_THISCALL F_0105a7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_0105a7c0 */
GEN_FRAME uint GEN_THISCALL F_0105a7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a7d0 */
GEN_FRAME uint GEN_THISCALL F_0105a7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a7e0 */
GEN_FRAME uint GEN_THISCALL F_0105a7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a7f0 */
GEN_FRAME uint GEN_THISCALL F_0105a7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a7f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a800 */
GEN_FRAME uint GEN_THISCALL F_0105a800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a800u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0105a810 */
GEN_FRAME uint GEN_THISCALL F_0105a810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a810u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_0105a820 */
GEN_FRAME uint GEN_THISCALL F_0105a820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_0105a830 */
GEN_FRAME uint GEN_THISCALL F_0105a830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a830u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0105a840 */
GEN_FRAME uint GEN_THISCALL F_0105a840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a840u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0105a850 */
GEN_FRAME uint GEN_THISCALL F_0105a850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a850u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_0105a860 */
GEN_FRAME uint GEN_THISCALL F_0105a860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a860u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_0105a880 */
GEN_FRAME uint GEN_THISCALL F_0105a880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a880u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_0105a890 */
GEN_FRAME uint GEN_THISCALL F_0105a890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_0105a8b0 */
GEN_FRAME uint GEN_THISCALL F_0105a8b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a8b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a8c0 */
GEN_FRAME uint GEN_THISCALL F_0105a8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a8c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_0105a8e0 */
GEN_FRAME uint GEN_THISCALL F_0105a8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a8e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_0105a8f0 */
GEN_NOFRAME uint GEN_THISCALL F_0105a8f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105a8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0105a900 */
GEN_FRAME uint GEN_THISCALL F_0105a900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da5fc0(*(undefined4 *)((int)this + 4) GEN_EDX_FWD);
  F_0105a700(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1,param_2);
  return (uint)param_1;
}

/* ref: FUN_0105a930 */
GEN_FRAME uint GEN_THISCALL F_0105a930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0105a950 */
GEN_FRAME uint GEN_THISCALL F_0105a950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0105a970 */
GEN_FRAME uint GEN_THISCALL F_0105a970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da5fc0(*(undefined4 *)((int)this + 4) GEN_EDX_FWD);
  F_0105a930(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1);
  return (uint)param_1;
}

/* ref: hkOffsetOnlyStreamWriter::vf4 */
GEN_FRAME uint GEN_THISCALL F_0105a9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)(this + 8) = *(int *)(this + 8) + param_2;
  if (*(int *)(this + 0xc) < *(int *)(this + 8)) {
    *(int *)(this + 0xc) = *(int *)(this + 8);
    return param_2;
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc);
  return param_2;
}

/* ref: hkOffsetOnlyStreamWriter::vf7 */
GEN_FRAME uint GEN_THISCALL F_0105a9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105a9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      *(int *)(this + 8) = *(int *)(this + 8) + param_1;
      goto LAB_0105a9f7;
    }
    if (param_2 != 2) goto LAB_0105a9f7;
    iVar1 = *(int *)(this + 0xc) - param_1;
  }
  *(int *)(this + 8) = iVar1;
LAB_0105a9f7: ;
  if (*(int *)(this + 8) <= *(int *)(this + 0xc)) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc);
    return 0;
  }
  *(int *)(this + 0xc) = *(int *)(this + 8);
  return 0;
}

/* ref: hkOffsetOnlyStreamWriter::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_0105aa20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105aa20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_0105aa30 */
GEN_NOFRAME uint GEN_THISCALL F_0105aa30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105aa30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x12b4d0c));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: hkOffsetOnlyStreamWriter::vf3 */
GEN_FRAME uint GEN_THISCALL F_0105aa50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105aa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkOffsetOnlyStreamWriter::vf6 */
GEN_FRAME uint GEN_THISCALL F_0105aa60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105aa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105aa70 */
GEN_FRAME uint F_0105aa70(unsigned int gen_a0)
{
  GEN_ENTER(0x105aa70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkOffsetOnlyStreamWriter::vf0 */
GEN_FRAME uint GEN_THISCALL F_0105aaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105aaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_0105aaf0 */
GEN_FRAME byte GEN_THISCALL F_0105aaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105aaf0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0105ab00 */
GEN_FRAME ushort GEN_THISCALL F_0105ab00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab00u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = *in_ecx | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0105ab10 */
GEN_FRAME ushort GEN_THISCALL F_0105ab10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab10u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = *in_ecx & (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_0105ab20 */
GEN_FRAME uint GEN_THISCALL F_0105ab20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105ab20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_0105ab30 */
GEN_FRAME byte GEN_THISCALL F_0105ab30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0105ab40 */
GEN_FRAME byte GEN_THISCALL F_0105ab40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ab40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0105ab50 */
GEN_FRAME uint F_0105ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x105ab50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((*(char *)(param_1 + 0xc) == '\x14') && (*(char *)(param_1 + 0xd) == '\x02')) {
    *(undefined2 *)(param_1 + 0xc) = 0x1d;
  }
  return param_1;
}

/* ref: FUN_0105ab70 */
GEN_FRAME unsigned int F_0105ab70(unsigned int gen_a0)
{
  GEN_ENTER(0x105ab70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (*(char *)(param_1 + 0xc) == '\x13') {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x400;
  }
  if ((*(char *)(param_1 + 0xc) == '\x18') || (*(char *)(param_1 + 0xc) == '\x1f')) {
    if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfff7;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xffef;
    }
    if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xffdf;
    }
  }
  return 0;
}

/* ref: FUN_0105abe0 */
GEN_FRAME uint F_0105abe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105abe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint in_ecx;
  int iVar3;
  
  uVar1 = F_00dbd970(param_2 GEN_EDX_ARG,param_1,0);
  in_ecx = param_1;
  while( true ) {
    if ((param_3 & uVar1) != 0) {
      return uVar1;
    }
    F_00dbd8b0(param_2 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),in_ecx,uVar1 | param_3);
    uVar1 = F_00d92850(in_ecx GEN_EDX_ARG);
    if (0 < (int)uVar1) {
      iVar3 = 0;
      do {
        uVar1 = F_00d92860(in_ecx GEN_EDX_ARG,iVar3);
        uVar2 = F_00da5fd0(uVar1 GEN_EDX_ARG);
        if (uVar2 != 0) {
          F_0105abe0(uVar2,param_2,param_3,param_4);
        }
        (*param_4)(uVar1);
        iVar3 = iVar3 + 1;
        uVar1 = F_00d92850(in_ecx GEN_EDX_ARG);
      } while (iVar3 < (int)uVar1);
    }
    uVar1 = F_00d92630(in_ecx GEN_EDX_ARG);
    if (uVar1 == 0) break;
    in_ecx = F_00d92630(in_ecx GEN_EDX_ARG);
    uVar1 = F_00dbd970(param_2 GEN_EDX_ARG,in_ecx,0);
  }
  return 0;
}

/* ref: FUN_0105ac90 */
GEN_FRAME uint F_0105ac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ac90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint in_ecx;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  
  uVar2 = F_00dbd970(param_2 GEN_EDX_ARG,param_1,0);
  in_ecx = param_1;
  while( true ) {
    if ((uVar2 & 1) != 0) {
      return uVar2;
    }
    F_00dbd8b0(param_2 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),in_ecx,uVar2 | 1);
    uVar2 = F_00d928d0(&REFG(undefined, 0x15e4034) GEN_EDX_ARG,"hasVtable");
    uVar4 = (uint)*(ushort *)(uVar2 + 0x12);
    uVar3 = F_00d92630(in_ecx GEN_EDX_ARG);
    uVar2 = in_ecx;
    while (uVar3 != 0) {
      *(undefined4 *)(uVar2 + uVar4) = 0;
      uVar2 = F_00d92630(uVar2 GEN_EDX_ARG);
      uVar3 = F_00d92630(uVar2 GEN_EDX_ARG);
    }
    if (*(char *)(uVar2 + uVar4) != '\0') {
      uVar3 = F_00d928d0(&REFG(undefined, 0x15e4034) GEN_EDX_ARG,"numImplementedInterfaces");
      piVar1 = ((int *)GEN_TOP((*(ushort *)(uVar3 + 0x12) + uVar2)));
      *piVar1 = *piVar1 + 1;
    }
    *(undefined4 *)(uVar2 + uVar4) = 0;
    iVar5 = 0;
    uVar2 = F_00d92850(in_ecx GEN_EDX_ARG);
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92860(in_ecx GEN_EDX_ARG,iVar5);
        if (*(int *)(uVar2 + 4) != 0) {
          pvVar6 = param_2;
          uVar2 = F_00da5fc0(uVar2 GEN_EDX_ARG);
          F_0105ac90(uVar2,pvVar6);
        }
        iVar5 = iVar5 + 1;
        uVar2 = F_00d92850(in_ecx GEN_EDX_ARG);
      } while (iVar5 < (int)uVar2);
    }
    uVar2 = F_00d92630(in_ecx GEN_EDX_ARG);
    if (uVar2 == 0) break;
    in_ecx = F_00d92630(in_ecx GEN_EDX_ARG);
    uVar2 = F_00dbd970(param_2 GEN_EDX_ARG,in_ecx,0);
  }
  return 0;
}

/* ref: FUN_0105ad90 */
GEN_NOFRAME uint F_0105ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined * in_edi = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00dbd970(in_edi GEN_EDX_ARG,in_eax,0);
  if ((uVar1 & 4) == 0) {
    F_00dbd8b0(in_edi GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),in_eax,uVar1 | 4);
    pcVar3 = "hkpConstraintInstance";
    uVar1 = F_00d92610(in_eax GEN_EDX_ARG);
    uVar1 = F_00da0d20(uVar1,pcVar3);
    if (uVar1 == 0) {
      uVar2 = F_00d92860(in_eax GEN_EDX_ARG,2);
      uVar1 = F_00d92800(&REFG(undefined, 0x15da2a0) GEN_EDX_ARG,4);
      uVar1 = (uint)*(ushort *)(uVar1 + 0x12);
      *(undefined1 *)(uVar1 + uVar2) = 0x19;
    }
  }
  return uVar1;
}

/* ref: FUN_0105adf0 */
GEN_FRAME unsigned int F_0105adf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105adf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_3 == 1) {
    F_0105ac90(param_1,param_2);
    F_0105ad90(param_1,param_2);
  }
  else if (3 < param_3) goto LAB_0105ae2d;
  F_0105abe0(param_1,param_2,2,((code *)REFP(0x105ab50)));
LAB_0105ae2d: ;
  if (param_3 < 5) {
    F_0105abe0(param_1,param_2,8,((code *)REFP(0x105ab70)));
  }
  return;
}

/* ref: FUN_0105ae50 */
GEN_FRAME uint F_0105ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105ae50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  for (; iVar1 != 0; iVar1 = param_1[iVar1]) {
    F_0105adf0(iVar1,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
    iVar1 = iVar3 + 1;
    iVar3 = iVar3 + 1;
  }
  uVar2 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar2;
}

/* ref: FUN_0105aec0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105aec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105aec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
            (*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG,param_1,param_2 * param_3);
  if (*(char *)((int)this + 0xc) != '\0') {
    if (param_2 == 2) {
      puVar2 = param_1;
      iVar3 = param_3;
      if (0 < param_3) {
        do {
          uVar1 = *puVar2;
          *puVar2 = puVar2[1];
          puVar2[1] = uVar1;
          puVar2 = puVar2 + 2;
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
      }
    }
    else if (param_2 == 4) {
      if (0 < param_3) {
        puVar2 = param_1 + 2;
        iVar3 = param_3;
        do {
          uVar1 = puVar2[-2];
          puVar2[-2] = puVar2[1];
          puVar2[1] = uVar1;
          uVar1 = puVar2[-1];
          puVar2[-1] = *puVar2;
          *puVar2 = uVar1;
          puVar2 = puVar2 + 4;
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
        return 0;
      }
    }
    else if ((param_2 == 8) && (0 < param_3)) {
      puVar2 = param_1 + 6;
      iVar3 = param_3;
      do {
        uVar1 = puVar2[-6];
        puVar2[-6] = puVar2[1];
        puVar2[1] = uVar1;
        uVar1 = puVar2[-5];
        puVar2[-5] = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar2[-4];
        puVar2[-4] = puVar2[-1];
        puVar2[-1] = uVar1;
        uVar1 = puVar2[-3];
        puVar2[-3] = puVar2[-2];
        puVar2[-2] = uVar1;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_0105afb0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105afb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105afb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD,param_1,param_2));
}

/* ref: FUN_0105afc0 */
GEN_FRAME uint GEN_THISCALL F_0105afc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105afc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_0105aff0 */
GEN_FRAME uint GEN_THISCALL F_0105aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d919e0(param_1 GEN_EDX_FWD);
  uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  return uVar1;
}

/* ref: FUN_0105b020 */
GEN_FRAME uint GEN_THISCALL F_0105b020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  F_00d919e0(param_1 GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0105b050 */
GEN_FRAME uint GEN_THISCALL F_0105b050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0xc))))(REFG(int * PTR32, 0x15dffa8) GEN_EDX_FWD,param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_0105b090 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105b090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105b090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_0105b0b0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105b0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b0b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = (*(uint *)&gen_args[2]);
  iVar2 = 0;
  if (0 < (int)(*(uint *)&gen_args[2])) {
    do {
      F_0105aec0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(uint *)&gen_args[2]),4,1);
      *(double *)((*(int *)&gen_args[1]) + iVar2 * 8) = ((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return;
}

/* ref: FUN_0105b0f0 */
GEN_FRAME uint GEN_THISCALL F_0105b0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105b0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x12b4d40));
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_3;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar2 = F_00d93630(this_00 GEN_EDX_ARG,param_1,param_2,2);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_0105b150 */
GEN_FRAME uint F_0105b150(unsigned int gen_a0)
{
  GEN_ENTER(0x105b150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkIArchive::vf0 */
GEN_FRAME uint GEN_THISCALL F_0105b180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_0105b090(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_0105b1c0 */
GEN_FRAME uint F_0105b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b1c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(int *)&gen_args[0]) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_0105b1e0 */
GEN_FRAME uint F_0105b1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105b1f0 */
GEN_FRAME byte F_0105b1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != -1;
}

/* ref: FUN_0105b200 */
GEN_FRAME byte F_0105b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 == param_2;
}

/* ref: FUN_0105b210 */
GEN_FRAME uint F_0105b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b220 */
GEN_FRAME uint F_0105b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b280 */
GEN_FRAME uint F_0105b280(unsigned int gen_a0)
{
  GEN_ENTER(0x105b280u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_0105b2a0 */
GEN_FRAME uint F_0105b2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b2b0 */
GEN_FRAME uint F_0105b2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b310 */
GEN_FRAME uint F_0105b310(unsigned int gen_a0)
{
  GEN_ENTER(0x105b310u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_0105b330 */
GEN_FRAME uint F_0105b330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b340 */
GEN_FRAME uint F_0105b340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105b340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0105b3a0 */
GEN_FRAME uint F_0105b3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b3a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_0105b3c0 */
GEN_FRAME uint GEN_THISCALL F_0105b3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b3c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_0105b3d0 */
GEN_FRAME uint GEN_THISCALL F_0105b3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_0105b400 */
GEN_FRAME uint GEN_THISCALL F_0105b400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0105b430 */
GEN_FRAME uint F_0105b430(unsigned int gen_a0)
{
  GEN_ENTER(0x105b430u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 4;
}

/* ref: FUN_0105b450 */
GEN_FRAME unsigned int GEN_THISCALL F_0105b450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(uint *)((int)this + 8) = uVar2 - 1;
  iVar1 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_0105b490 */
GEN_FRAME int GEN_THISCALL F_0105b490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = 0;
  iVar2 = *(int *)(iVar1 + uVar4 * 8);
  while (iVar2 != -1) {
    if ((iVar2 == param_1) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

/* ref: FUN_0105b4e0 */
GEN_FRAME int GEN_THISCALL F_0105b4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = 0;
  iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  while (iVar1 != -1) {
    if (iVar1 == param_1) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return iVar2;
}

/* ref: FUN_0105b540 */
GEN_FRAME uint GEN_THISCALL F_0105b540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_0105b550 */
GEN_FRAME uint GEN_THISCALL F_0105b550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_0105b560 */
GEN_FRAME uint GEN_THISCALL F_0105b560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_0105b580 */
GEN_FRAME uint GEN_THISCALL F_0105b580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = (int *)(*(int *)this + uVar2 * 8);
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_0105b5d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105b5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 8);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0105b600 */
GEN_FRAME uint GEN_THISCALL F_0105b600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b600u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_0105b620 */
GEN_FRAME unsigned int GEN_THISCALL F_0105b620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105b8f0(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105b680 */
GEN_FRAME uint GEN_THISCALL F_0105b680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar3 = param_1 * -0x61c8864f & uVar1;
  iVar2 = *(int *)(*(int *)this + uVar3 * 8);
  while( true ) {
    if (iVar2 == -1) {
      return uVar1 + 1;
    }
    if (iVar2 == param_1) break;
    uVar3 = uVar3 + 1 & uVar1;
    iVar2 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return uVar3;
}

/* ref: FUN_0105b6c0 */
GEN_FRAME uint GEN_THISCALL F_0105b6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)this;
  uVar4 = param_1 * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(int *)(iVar2 + uVar4 * 8) == param_1) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_2))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

/* ref: FUN_0105b700 */
GEN_FRAME uint GEN_THISCALL F_0105b700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (iVar2 == -1) {
      return param_2;
    }
    if (iVar2 == param_1) break;
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  return *(uint *)(iVar1 + 4 + uVar3 * 8);
}

/* ref: FUN_0105b750 */
GEN_FRAME uint GEN_THISCALL F_0105b750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105b750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b680(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_2 = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105b780 */
GEN_FRAME unsigned int GEN_THISCALL F_0105b780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  *(undefined4 *)(*(int *)this + param_1 * 8) = 0xffffffff;
  uVar5 = *(uint *)((int)this + 8);
  iVar1 = *(int *)this;
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  uVar6 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = *(int *)(iVar1 + uVar3 * 8) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + uVar6 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar6 * 8) = *(undefined4 *)(*(int *)this + 4 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + uVar3 * 8) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return 0;
}

/* ref: FUN_0105b830 */
GEN_FRAME uint GEN_THISCALL F_0105b830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      iVar3 = *(int *)(iVar2 + iVar6 * 8);
      if (iVar3 != -1) {
        uVar5 = iVar3 * -0x61c8864f & uVar1;
        iVar4 = *(int *)(iVar2 + uVar5 * 8);
        while (iVar4 != iVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          iVar4 = *(int *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105b870 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105b870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105b870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105b8a0 */
GEN_FRAME uint GEN_THISCALL F_0105b8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0105b8d0 */
GEN_FRAME uint F_0105b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x105b8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 4;
}

/* ref: FUN_0105b8f0 */
GEN_FRAME uint GEN_THISCALL F_0105b8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 8);
  if (uVar4 == 0) {
    return 1;
  }
  *(uint *)this = uVar4;
  iVar5 = 0;
  if (0 < param_1) {
    do {
      *(undefined4 *)(*(int *)this + iVar5 * 8) = 0xffffffff;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  *(int *)((int)this + 8) = param_1 - 1;
  iVar5 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(iVar2 + iVar5 * 8);
      if (iVar3 != -1) {
        F_0105b620(this GEN_EDX_ARG,iVar3,*(undefined4 *)(iVar2 + 4 + iVar5 * 8));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar2,iVar6 * 8);
  }
  return 0;
}

/* ref: FUN_0105b9e0 */
GEN_FRAME uint GEN_THISCALL F_0105b9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105b9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(*(int *)this + param_1 * 0x10);
}

/* ref: FUN_0105ba00 */
GEN_FRAME uint GEN_THISCALL F_0105ba00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(*(int *)this + 8 + param_1 * 0x10);
}

/* ref: FUN_0105ba20 */
GEN_FRAME uint GEN_THISCALL F_0105ba20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = param_3;
  return param_1 * 2;
}

/* ref: FUN_0105ba40 */
GEN_FRAME uint GEN_THISCALL F_0105ba40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105ba40u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_0105ba70 */
GEN_FRAME uint GEN_THISCALL F_0105ba70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ba70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0105baa0 */
GEN_FRAME uint F_0105baa0(unsigned int gen_a0)
{
  GEN_ENTER(0x105baa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 4;
  if (4 < param_1) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1);
  }
  return iVar1 << 5;
}

/* ref: FUN_0105bac0 */
GEN_FRAME uint F_0105bac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_0105bae0 */
GEN_FRAME uint F_0105bae0(unsigned int gen_a0)
{
  GEN_ENTER(0x105bae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105baf0 */
GEN_FRAME uint F_0105baf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105baf0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[2]);
}

/* ref: FUN_0105bb10 */
GEN_FRAME uint F_0105bb10(unsigned int gen_a0)
{
  GEN_ENTER(0x105bb10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_0105bb30 */
GEN_FRAME uint F_0105bb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x105bb30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (((*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1])) != 0xffffffff) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0105bb50 */
GEN_FRAME uint F_0105bb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105bb50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_1 == param_3) && ((*(int *)&gen_a1) == param_4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0105bb70 */
GEN_FRAME uint GEN_THISCALL F_0105bb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bb90 */
GEN_FRAME uint GEN_THISCALL F_0105bb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b680(this GEN_EDX_FWD,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105bbb0 */
GEN_FRAME uint GEN_THISCALL F_0105bbb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bbd0 */
GEN_FRAME uint GEN_THISCALL F_0105bbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_0105bbf0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105bbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bbf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(uint *)((int)this + 8) = uVar2 - 1;
  iVar1 = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_0105bc30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105bc30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105bc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,*(int *)((int)this + 8) * 8 + 8);
  }
  return;
}

/* ref: FUN_0105bc60 */
GEN_FRAME int GEN_THISCALL F_0105bc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bc60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = 0;
  uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  while (uVar2 != 0xffffffff) {
    if ((uVar2 == param_1) && (*(int *)(iVar1 + 4 + uVar4 * 8) == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 8);
  }
  return iVar3;
}

/* ref: FUN_0105bcb0 */
GEN_FRAME int GEN_THISCALL F_0105bcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = 0;
  uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
  while (uVar1 != 0xffffffff) {
    if (uVar1 == param_1) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 8);
  }
  return iVar2;
}

/* ref: FUN_0105bcf0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105bcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105bf90(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105bd60 */
GEN_FRAME uint GEN_THISCALL F_0105bd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
  uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return uVar1 + 1;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & uVar1;
    uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
  }
  return uVar3;
}

/* ref: FUN_0105bda0 */
GEN_FRAME uint GEN_THISCALL F_0105bda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
  iVar3 = *(int *)(iVar2 + uVar4 * 8);
  while( true ) {
    if (iVar3 == -1) {
      return uVar1 + 1;
    }
    if ((*(uint *)(iVar2 + uVar4 * 8) == param_1) && (*(int *)(iVar2 + 4 + uVar4 * 8) == param_2))
    break;
    uVar4 = uVar4 + 1 & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 8);
  }
  return uVar4;
}

/* ref: FUN_0105bde0 */
GEN_FRAME uint GEN_THISCALL F_0105bde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105bde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return param_2;
    }
    if (uVar2 == param_1) break;
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar3 * 8);
  }
  return *(uint *)(iVar1 + 4 + uVar3 * 8);
}

/* ref: FUN_0105be30 */
GEN_FRAME uint GEN_THISCALL F_0105be30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105be30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bd60(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_2 = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105be60 */
GEN_FRAME unsigned int GEN_THISCALL F_0105be60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105be60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  *(undefined4 *)(*(int *)this + param_1 * 8) = 0xffffffff;
  iVar1 = *(int *)this;
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  uVar6 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = (*(uint *)(iVar1 + uVar3 * 8) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + uVar6 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar6 * 8) = *(undefined4 *)(*(int *)this + 4 + uVar3 * 8);
      *(undefined4 *)(*(int *)this + uVar3 * 8) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 8);
  }
  return 0;
}

/* ref: FUN_0105bf10 */
GEN_FRAME uint GEN_THISCALL F_0105bf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      uVar3 = *(uint *)(iVar2 + iVar6 * 8);
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105bf60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105bf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105bf60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return 0;
}

/* ref: FUN_0105bf90 */
GEN_FRAME uint GEN_THISCALL F_0105bf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105bf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 8);
  if (uVar4 == 0) {
    return 1;
  }
  *(uint *)this = uVar4;
  iVar5 = 0;
  if (0 < param_1) {
    do {
      *(undefined4 *)(*(int *)this + iVar5 * 8) = 0xffffffff;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
  }
  *(int *)((int)this + 8) = param_1 - 1;
  iVar5 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(iVar2 + iVar5 * 8);
      if (iVar3 != -1) {
        F_0105bcf0(this GEN_EDX_ARG,iVar3,*(undefined4 *)(iVar2 + 4 + iVar5 * 8));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar2,iVar6 * 8);
  }
  return 0;
}

/* ref: FUN_0105c050 */
GEN_FRAME uint GEN_THISCALL F_0105c050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 * 8);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 - 1;
  F_0105b870(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0105c120 */
GEN_FRAME uint GEN_THISCALL F_0105c120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = *(int *)this;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(int *)(iVar3 + iVar2) == param_1) {
      F_0105b780(this GEN_EDX_FWD,uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & *(uint *)((int)this + 8);
    }
    iVar3 = *(int *)this;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

/* ref: FUN_0105c1a0 */
GEN_FRAME uint GEN_THISCALL F_0105c1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) &&
     (uVar3 = F_0105b8f0(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2), uVar3 != 0)) {
    return 1;
  }
  iVar1 = *(int *)this;
  uVar3 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105c220 */
GEN_FRAME unsigned int GEN_THISCALL F_0105c220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105b8f0(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = param_1 * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(int *)(iVar1 + uVar2 * 8) != param_1) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(int *)(iVar1 + uVar2 * 8) == param_1) {
        return 0;
      }
    }
    *(int *)(iVar1 + uVar2 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_0105c290 */
GEN_FRAME uint GEN_THISCALL F_0105c290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105b6c0(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105b780(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c2d0 */
GEN_FRAME uint GEN_THISCALL F_0105c2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105b680(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105b780(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c300 */
GEN_FRAME uint GEN_THISCALL F_0105c300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105b8f0(this GEN_EDX_FWD,iVar1);
  return uVar2;
}

/* ref: FUN_0105c330 */
GEN_FRAME unsigned int GEN_THISCALL F_0105c330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar3 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar3 + 4 + iVar1) = 0xffffffff;
      iVar3 = iVar3 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_0105c370 */
GEN_FRAME uint GEN_THISCALL F_0105c370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  iVar1 = *(int *)this;
  local_8 = 0;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    iVar3 = uVar4 * 0x10;
    uVar2 = *(uint *)(iVar3 + 4 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & uVar2) == 0xffffffff) break;
    if ((((*(uint *)(iVar3 + iVar1) == param_1) && (uVar2 == param_2)) &&
        (*(int *)(iVar3 + iVar1 + 8) == param_3)) && (*(int *)(iVar3 + iVar1 + 0xc) == param_4)) {
      local_8 = local_8 + 1;
    }
    uVar4 = uVar4 + 1;
  }
  return local_8;
}

/* ref: FUN_0105c3e0 */
GEN_FRAME uint GEN_THISCALL F_0105c3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f;
  local_8 = 0;
  while( true ) {
    uVar3 = uVar3 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_1) && (uVar2 == param_2)) {
      local_8 = local_8 + 1;
    }
    uVar3 = uVar3 + 1;
  }
  return local_8;
}

/* ref: FUN_0105c470 */
GEN_FRAME uint GEN_THISCALL F_0105c470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105c470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      puVar3 = (uint *)(uVar2 * 0x10 + *(int *)this);
      do {
        if ((*puVar3 & puVar3[1]) == 0xffffffff) {
          return iVar1 + 1;
        }
        if ((*puVar3 == param_2) && (puVar3[1] == param_3)) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 4;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_0105c4d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105c4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint * puVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    puVar2 = (uint *)(iVar1 * 0x10 + *(int *)this);
    do {
      if ((*puVar2 & puVar2[1]) != 0xffffffff) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0105c500 */
GEN_FRAME uint GEN_THISCALL F_0105c500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_0105c860(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & *(uint *)((int)this + 8),
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_1;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_2;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_4;
  return uVar2 * 2;
}

/* ref: FUN_0105c580 */
GEN_FRAME uint GEN_THISCALL F_0105c580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar3 = uVar3 & *(uint *)((int)this + 8);
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) {
      return *(uint *)((int)this + 8) + 1;
    }
    if ((uVar1 == param_1) && (uVar2 == param_2)) break;
    uVar3 = uVar3 + 1;
  }
  return uVar3;
}

/* ref: FUN_0105c5d0 */
GEN_FRAME uint GEN_THISCALL F_0105c5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar2 = uVar2 & *(uint *)((int)this + 8);
    iVar3 = uVar2 * 0x10;
    puVar4 = (uint *)(iVar3 + iVar1);
    if ((*(uint *)(iVar3 + iVar1) & *(uint *)(iVar3 + 4 + iVar1)) == 0xffffffff) {
      return *(uint *)((int)this + 8) + 1;
    }
    if ((((*puVar4 == param_1) && (puVar4[1] == param_2)) && (puVar4[2] == param_3)) &&
       (puVar4[3] == param_4)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_0105c630 */
GEN_FRAME uint GEN_THISCALL F_0105c630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105c630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 & uVar3) == 0xffffffff) {
      return param_3;
    }
    if ((uVar2 == param_1) && (uVar3 == param_2)) break;
    uVar4 = uVar4 + 1;
  }
  return *(uint *)(iVar1 + 8 + uVar4 * 0x10);
}

/* ref: FUN_0105c690 */
GEN_FRAME uint GEN_THISCALL F_0105c690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105c690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_0105c580(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar2 <= *(int *)((int)this + 8)) {
    iVar1 = *(int *)this;
    *param_3 = *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c6d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105c6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)this;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = 0xffffffff;
  uVar4 = *(uint *)((int)this + 8);
  uVar3 = param_1;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*(uint *)(*(int *)this + uVar3 * 0x10) & *(uint *)(*(int *)this + 4 + uVar3 * 0x10)) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_1 + 1 & uVar4;
  while( true ) {
    iVar1 = *(int *)this;
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((*(uint *)(iVar1 + uVar4 * 0x10) & uVar2) == 0xffffffff) break;
    uVar5 = (*(uint *)(iVar1 + uVar4 * 0x10) >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
    if ((((uVar4 < uVar3) || (uVar5 <= param_1)) &&
        ((param_1 <= uVar4 || ((uVar5 <= param_1 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_1 || (uVar3 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_1 * 0x10) = *(undefined4 *)(iVar1 + uVar4 * 0x10);
      *(uint *)(iVar1 + 4 + param_1 * 0x10) = uVar2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10);
      *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10);
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + uVar4 * 0x10) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 0x10) = 0xffffffff;
      param_1 = uVar4;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
  }
  return 0;
}

/* ref: FUN_0105c7b0 */
GEN_FRAME uint GEN_THISCALL F_0105c7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_c;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_0105c830 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105c830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) + 1;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return;
}

/* ref: FUN_0105c860 */
GEN_FRAME uint GEN_THISCALL F_0105c860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105c860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  
  puVar1 = *(uint * PTR32 *)this;
  uVar2 = *(uint *)((int)this + 4);
  iVar7 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 << 4);
  if (uVar4 != 0) {
    *(uint *)this = uVar4;
    if (0 < param_1) {
      iVar5 = 0;
      iVar6 = param_1;
      do {
        iVar3 = *(int *)this;
        *(undefined4 *)(iVar5 + iVar3) = 0xffffffff;
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = param_1 - 1;
    puVar8 = puVar1;
    param_1 = iVar7;
    if (0 < iVar7) {
      do {
        if ((*puVar8 & puVar8[1]) != 0xffffffff) {
          F_0105c500(this GEN_EDX_ARG,*puVar8,puVar8[1],puVar8[2],puVar8[3]);
        }
        iVar6 = param_1 - 1;
        puVar8 = puVar8 + 4;
        param_1 = iVar6;
      } while (iVar6 != 0);
    }
    if ((uVar2 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar7 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_0105c940 */
GEN_FRAME uint F_0105c940(unsigned int gen_a0)
{
  GEN_ENTER(0x105c940u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0105c960 */
GEN_FRAME unsigned int F_0105c960(unsigned int gen_a0)
{
  GEN_ENTER(0x105c960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_0105c990 */
GEN_FRAME uint GEN_THISCALL F_0105c990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105c990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bd60(this GEN_EDX_FWD,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105c9b0 */
GEN_FRAME uint F_0105c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x105c9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0105c9d0 */
GEN_FRAME unsigned int F_0105c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x105c9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_0105ca00 */
GEN_FRAME uint F_0105ca00(unsigned int gen_a0)
{
  GEN_ENTER(0x105ca00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_0105ca20 */
GEN_FRAME unsigned int F_0105ca20(unsigned int gen_a0)
{
  GEN_ENTER(0x105ca20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_0105ca50 */
GEN_FRAME uint GEN_THISCALL F_0105ca50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0105c580(this GEN_EDX_FWD,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_0105ca80 */
GEN_FRAME uint GEN_THISCALL F_0105ca80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ca80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 * 8);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 - 1;
  F_0105bf60(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0105cae0 */
GEN_NOFRAME uint GEN_THISCALL F_0105cae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x105cae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),0x80);
  *(uint *)this = uVar1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xf;
  if (uVar1 != 0) {
    F_0105bf60(this GEN_EDX_ARG);
  }
  return (uint)this;
}

/* ref: FUN_0105cb20 */
GEN_FRAME uint GEN_THISCALL F_0105cb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = *(int *)this;
  iVar2 = uVar4 * 8;
  local_8 = 0;
  uVar1 = uVar4;
  if (*(int *)(iVar2 + iVar3) == -1) {
    return 0;
  }
  do {
    if (*(uint *)(iVar3 + iVar2) == param_1) {
      F_0105be60(this GEN_EDX_FWD,uVar1);
      local_8 = local_8 + 1;
      uVar1 = uVar4;
    }
    else {
      uVar1 = uVar1 + 1 & *(uint *)((int)this + 8);
    }
    iVar3 = *(int *)this;
    iVar2 = uVar1 * 8;
  } while (*(int *)(iVar3 + uVar1 * 8) != -1);
  return local_8;
}

/* ref: FUN_0105cba0 */
GEN_FRAME uint GEN_THISCALL F_0105cba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) &&
     (uVar3 = F_0105bf90(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2), uVar3 != 0)) {
    return 1;
  }
  iVar1 = *(int *)this;
  uVar3 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar3 * 8) = param_1;
  *(undefined4 *)(*(int *)this + 4 + uVar3 * 8) = param_2;
  return 0;
}

/* ref: FUN_0105cc20 */
GEN_FRAME unsigned int GEN_THISCALL F_0105cc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105bf90(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(uint *)(iVar1 + uVar2 * 8) != param_1) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(uint *)(iVar1 + uVar2 * 8) == param_1) {
        return 0;
      }
    }
    *(uint *)(iVar1 + uVar2 * 8) = param_1;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_2;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_0105cc90 */
GEN_FRAME uint GEN_THISCALL F_0105cc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105bda0(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105be60(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105ccd0 */
GEN_FRAME uint GEN_THISCALL F_0105ccd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105ccd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105bd60(this GEN_EDX_FWD,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105be60(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cd00 */
GEN_FRAME uint GEN_THISCALL F_0105cd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105cd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105bf90(this GEN_EDX_FWD,iVar1);
  return uVar2;
}

/* ref: FUN_0105cd30 */
GEN_FRAME uint GEN_THISCALL F_0105cd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 4;
  *(undefined4 *)((int)this + 4) = 0;
  if (4 < param_1 * 3) {
    do {
      iVar2 = iVar2 * 2;
    } while (iVar2 < param_1 * 3);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),iVar2 << 4);
  *(uint *)this = uVar1;
  *(int *)((int)this + 8) = iVar2 - 1;
  F_0105c830(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0105cdd0 */
GEN_FRAME uint GEN_THISCALL F_0105cdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = (param_1 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  local_8 = 0;
  uVar3 = uVar4;
  while( true ) {
    uVar1 = *(uint *)(*(int *)this + uVar3 * 0x10);
    uVar2 = *(uint *)(*(int *)this + 4 + uVar3 * 0x10);
    if ((uVar1 & uVar2) == 0xffffffff) break;
    if ((uVar1 == param_1) && (uVar2 == param_2)) {
      F_0105c6d0(this GEN_EDX_FWD,uVar3);
      local_8 = local_8 + 1;
      uVar3 = uVar4;
    }
    else {
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
    }
  }
  return local_8;
}

/* ref: FUN_0105ce30 */
GEN_FRAME uint GEN_THISCALL F_0105ce30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105ce30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar2 = F_0105c860(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
    if (uVar2 != 0) {
      return 1;
    }
  }
  iVar1 = *(int *)this;
  uVar2 = (param_1 >> 4) * -0x61c8864f;
  while (uVar2 = uVar2 & *(uint *)((int)this + 8),
        (*(uint *)(iVar1 + uVar2 * 0x10) & *(uint *)(iVar1 + 4 + uVar2 * 0x10)) != 0xffffffff) {
    uVar2 = uVar2 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(uint *)(iVar1 + uVar2 * 0x10) = param_1;
  *(undefined4 *)(iVar1 + 4 + uVar2 * 0x10) = param_2;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_4;
  return 0;
}

/* ref: FUN_0105cec0 */
GEN_FRAME unsigned int GEN_THISCALL F_0105cec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105cec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2 + 2) {
    F_0105c860(this GEN_EDX_FWD,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_1 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 == param_1) && (uVar3 == param_2)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *(uint *)(iVar1 + uVar4 * 0x10) = param_1;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_3;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_0105cf40 */
GEN_FRAME uint GEN_THISCALL F_0105cf40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x105cf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_0105c5d0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105c6d0(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cf80 */
GEN_FRAME uint GEN_THISCALL F_0105cf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x105cf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105c580(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_0105c6d0(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_0105cfc0 */
GEN_FRAME uint GEN_THISCALL F_0105cfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x105cfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 4;
  if (4 < param_1 * 3) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 3);
  }
  uVar2 = F_0105c860(this GEN_EDX_FWD,iVar1);
  return uVar2;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105cff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105cff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf11 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0105d080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x105d080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

