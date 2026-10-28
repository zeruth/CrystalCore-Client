#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00a08730 */
GEN_FRAME uint F_00a08730(unsigned int gen_a0)
{
  GEN_ENTER(0xa08730u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  undefined4 in_ECX = 0;
  uint uVar2;
  
  uVar2 = REFG(int, 0x14a24ac) * 0x84 + REFG(int, 0x14a24a8);
  uVar1 = F_00a08f90(REFG(int, 0x14a24a8),uVar2,&(*(undefined4 *)&gen_args[0]),in_ECX,0);
  if (uVar1 == uVar2) {
    uVar1 = uVar2 - 0x84;
  }
  return uVar1;
}

/* ref: FUN_00a08770 */
GEN_FRAME float10 F_00a08770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa08770u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = REFG(int, 0x14a24ac) * 0x84 + REFG(int, 0x14a24a8);
  (*(uint *)(gen_frame + 0x8)) = param_1;
  uVar1 = F_00a08f90(REFG(int, 0x14a24a8),uVar2,&(*(uint *)(gen_frame + 0x8)),param_1,0);
  if (uVar1 == uVar2) {
    uVar1 = uVar2 - 0x84;
  }
  if (uVar1 != 0) {
    fVar3 = F_00a08610(uVar1 GEN_EDX_ARG,param_2);
    return (float10)(float)fVar3;
  }
  return ((float10)GEN_TOD(gen_bits2f(param_1)));
}

/* ref: FUN_00a087e0 */
GEN_FRAME unsigned int F_00a087e0(void)
{
  GEN_ENTER(0xa087e0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  uint local_14;
  int local_8;
  
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,"PhysicsWind");
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
  if (0 < (int)uVar2) {
    uVar3 = F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 0x84 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 0x84),0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      iVar6 = uVar2 - 1;
      if (-1 < iVar6) {
        iVar5 = uVar3 + 8;
        do {
          F_00bc0ae0(iVar5 GEN_EDX_ARG);
          iVar5 = iVar5 + 0x84;
          iVar6 = iVar6 - 1;
        } while (-1 < iVar6);
      }
    }
    iVar6 = 0;
    REFG(undefined4, 0x14a24a8) = uVar3;
    REFG(undefined4, 0x14a24ac) = uVar2;
    if (0 < (int)uVar2) {
      local_8 = 0;
      do {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,iVar6)));
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        iVar5 = *(int *)(uVar3 + 4);
        piVar4 = (int *)(local_8 + REFG(undefined4, 0x14a24a8));
        *piVar4 = iVar6;
        piVar4[1] = iVar5;
        F_00bc0af0(piVar4 + 2 GEN_EDX_ARG,*(float *)(iVar5 + 0x14));
        piVar4[7] = *(int *)(iVar5 + 8);
        piVar4[8] = 0;
        iVar5 = 8;
        piVar4 = piVar4 + 0xb;
        do {
          uVar3 = F_00c4f2dd();
          piVar4[-2] = (int)gen_fl2bits((float)((float10)(int)uVar3 /
                                               (float10)*(double *)&REFG(undefined, 0x10920e0)));
          local_14 = F_00c4f2dd();
          *piVar4 = 0;
          iVar5 = iVar5 - 1;
          piVar4[-1] = (int)gen_fl2bits((float)((float10)(int)local_14 /
                                               (float10)*(double *)&REFG(undefined, 0x10920e0)));
          piVar4 = piVar4 + 3;
        } while (iVar5 != 0);
        local_8 = local_8 + 0x84;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar2);
    }
    iVar6 = REFG(undefined4, 0x14a24a8) + REFG(undefined4, 0x14a24ac) * 0x84;
    F_00a09c80(REFG(undefined4, 0x14a24a8),iVar6,(int)(iVar6 - REFG(undefined4, 0x14a24a8)) / 0x84,local_14);
  }
  return;
}

/* ref: FUN_00a08960 */
GEN_FRAME uint GEN_THISCALL F_00a08960(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa08960u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float * pfVar2;
  int iVar3;
  
  *param_1 = param_2;
  param_1[1] = 0.0;
  iVar3 = 8;
  pfVar2 = param_1 + 4;
  do {
    uVar1 = F_00c4f2dd();
    pfVar2[-2] = (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
    uVar1 = F_00c4f2dd();
    *pfVar2 = 0.0;
    iVar3 = iVar3 - 1;
    pfVar2[-1] = (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
    pfVar2 = pfVar2 + 3;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00a089c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a089c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xa089c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *param_1;
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) {
    fVar6 = F_00bc0c10((float)((float10)param_1[1] / (float10)fVar1));
    fVar7 = (float10)(float)fVar6;
    fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
    fVar6 = (float10)1;
    param_1[4] = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * ((float10)param_1[3] - (float10)param_1[2]) +
                                         (float10)param_1[2]))) * fVar8 - fVar6)));
    param_1[7] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[5] +
                                         fVar7 * ((float10)param_1[6] - (float10)param_1[5])))) *
                         fVar8 - fVar6)));
    param_1[10] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[8] +
                                          fVar7 * ((float10)param_1[9] - (float10)param_1[8])))) *
                          fVar8 - fVar6)));
    param_1[0xd] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[0xb] +
                                           fVar7 * ((float10)param_1[0xc] - (float10)param_1[0xb]))))
                           * fVar8 - fVar6)));
    param_1[0x10] =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[0xe] +
                                 fVar7 * ((float10)param_1[0xf] - (float10)param_1[0xe])))) * fVar8 -
                fVar6)));
    param_1[0x13] =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[0x11] +
                                 fVar7 * ((float10)param_1[0x12] - (float10)param_1[0x11])))) * fVar8
                - fVar6)));
    param_1[0x16] =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[0x14] +
                                 fVar7 * ((float10)param_1[0x15] - (float10)param_1[0x14])))) * fVar8
                - fVar6)));
    param_1[0x19] =
         ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_1[0x17] +
                                 ((float10)param_1[0x18] - (float10)param_1[0x17]) * fVar7))) * fVar8
                - fVar6)));
    fVar1 = (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070) + (float10)param_1[1]);
    param_1[1] = fVar1;
    if ((float10)*param_1 <= (float10)fVar1) {
      iVar4 = 8;
      pfVar2 = param_1;
      do {
        pfVar5 = pfVar2 + 3;
        pfVar2[2] = *pfVar5;
        uVar3 = F_00c4f2dd();
        iVar4 = iVar4 - 1;
        *pfVar5 = (float)((float10)(int)uVar3 / (float10)*(double *)&REFG(undefined, 0x10920e0));
        pfVar2 = pfVar5;
      } while (iVar4 != 0);
      if ((float10)*param_1 <= (float10)param_1[1]) {
        do {
          param_1[1] = (float)((float10)param_1[1] - (float10)*param_1);
        } while ((!GEN_ISNAN((float10)param_1[1]) && !GEN_ISNAN((float10)*param_1)) &&
                 !((float10)param_1[1] < (float10)*param_1));
      }
    }
  }
  return;
}

/* ref: FUN_00a08ba0 */
GEN_FRAME float10 GEN_THISCALL F_00a08ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa08ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x10 + param_2 * 0xc);
}

/* ref: FUN_00a08bd0 */
GEN_FRAME uint F_00a08bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa08bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a08bf0 */
GEN_FRAME uint F_00a08bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa08bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a08c00 */
GEN_FRAME byte GEN_STDCALL F_00a08c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa08c00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (((float10)GEN_TOD(**(float * PTR32 *)(param_1 + 4))) < ((float10)GEN_TOD(**(float * PTR32 *)(param_2 + 4)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00a08c50 */
GEN_FRAME uint F_00a08c50(unsigned int gen_a0)
{
  GEN_ENTER(0xa08c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a08c60 */
GEN_FRAME uint F_00a08c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa08c60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1) / 0x84;
  return (uint)param_3;
}

/* ref: FUN_00a08c90 */
GEN_FRAME uint F_00a08c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa08c90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 0x84;
  return (uint)param_1;
}

/* ref: FUN_00a08cb0 */
GEN_FRAME uint F_00a08cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa08cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a08cc0 */
GEN_FRAME uint GEN_THISCALL F_00a08cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa08cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a08ce0 */
GEN_FRAME uint F_00a08ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xa08ce0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a08cf0 */
GEN_FRAME unsigned int F_00a08cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa08cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 fVar7;
  
  iVar1 = param_2;
  while (param_3 < iVar1) {
    iVar3 = (iVar1 - 1) / 2;
    iVar4 = iVar3 * 0x84;
    fVar7 = ((float10)GEN_TOD(**(float * PTR32 *)(iVar4 + 4 + param_1)));
    if ((!GEN_ISNAN((float10)*(float *)param_4[1]) && !GEN_ISNAN(fVar7)) &&
        !((float10)*(float *)param_4[1] <= fVar7)) break;
    puVar5 = (undefined4 *)(iVar4 + param_1);
    puVar6 = (undefined4 *)(iVar1 * 0x84 + param_1);
    for (iVar2 = 0x21; iVar1 = iVar3, iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar5 = param_4;
  puVar6 = (undefined4 *)(iVar1 * 0x84 + param_1);
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return 0;
}

/* ref: FUN_00a08d70 */
GEN_FRAME byte F_00a08d70(void)
{
  GEN_ENTER(0xa08d70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a08d80 */
GEN_FRAME uint F_00a08d80(unsigned int gen_a0)
{
  GEN_ENTER(0xa08d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a08d90 */
GEN_FRAME uint F_00a08d90(unsigned int gen_a0)
{
  GEN_ENTER(0xa08d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a08da0 */
GEN_FRAME uint F_00a08da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa08da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1) / 0x84;
  return (uint)param_3;
}

/* ref: FUN_00a08dd0 */
GEN_FRAME uint F_00a08dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa08dd0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 0x84;
  return (uint)param_1;
}

/* ref: FUN_00a08df0 */
GEN_FRAME uint GEN_THISCALL F_00a08df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa08df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a08e10 */
GEN_FRAME uint F_00a08e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa08e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  puVar3 = param_2;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a08e50 */
GEN_FRAME unsigned int F_00a08e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa08e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = param_2;
  while( true ) {
    iVar2 = iVar5 * 2 + 2;
    if (param_3 <= iVar2) break;
    if (!(((float10)GEN_TOD(**(float * PTR32 *)(iVar2 * 0x84 + 4 + param_1))) <
         ((float10)GEN_TOD(**(float * PTR32 *)(iVar2 * 0x84 - 0x80 + param_1))))) {
      iVar2 = iVar5 * 2 + 1;
    }
    puVar3 = (undefined4 *)(iVar2 * 0x84 + param_1);
    puVar4 = (undefined4 *)(iVar5 * 0x84 + param_1);
    for (iVar1 = 0x21; iVar5 = iVar2, iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (iVar2 == param_3) {
    puVar3 = (undefined4 *)(param_3 * 0x84 - 0x84 + param_1);
    puVar4 = (undefined4 *)(iVar5 * 0x84 + param_1);
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar5 = param_3 - 1;
  }
  F_00a08cf0(param_1,iVar5,param_2,param_4,param_5);
  return;
}

/* ref: FUN_00a08f00 */
GEN_FRAME unsigned int F_00a08f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa08f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar3 = param_2;
  puVar1 = param_3;
  while (param_1 != puVar3) {
    puVar3 = puVar3 - 0x21;
    puVar1 = puVar1 - 0x21;
    puVar4 = puVar3;
    puVar5 = puVar1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00a08f40 */
GEN_FRAME unsigned int F_00a08f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa08f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = param_3;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00a08e50(param_1,0,(param_2 - (int)param_1) / 0x84,param_4,param_5);
  return;
}

/* ref: FUN_00a08f90 */
GEN_FRAME uint F_00a08f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa08f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(param_2 - param_1) / 0x84;
  uVar3 = param_1;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if ((float10)*param_3 < ((float10)GEN_TOD(**(float * PTR32 *)(iVar1 * 0x84 + 4 + uVar3)))) {
        uVar3 = iVar1 * 0x84 + 0x84 + uVar3;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return uVar3;
}

/* ref: FUN_00a09000 */
GEN_FRAME uint F_00a09000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa09000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0x8));
  puVar3 = param_2;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00a09040 */
GEN_FRAME unsigned int F_00a09040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa09040u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  iVar1 = (param_2 - param_1) / 0x84;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    iVar5 = iVar2 * 2 + 2;
    puVar6 = (undefined4 *)(iVar2 * 0x84 + param_1);
    do {
      iVar2 = iVar2 - 1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar6 - 0x21;
      puVar6 = puVar6 - 0x21;
      puVar7 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      (*(int *)(gen_frame + 0x88)) = iVar5 - 2;
      iVar3 = iVar2;
      for (iVar5 = iVar5 - 2; iVar5 < iVar1; iVar5 = iVar5 * 2 + 2) {
        if (!(((float10)GEN_TOD(**(float * PTR32 *)(iVar5 * 0x84 + 4 + param_1))) <
             ((float10)GEN_TOD(**(float * PTR32 *)(iVar5 * 0x84 - 0x80 + param_1))))) {
          iVar5 = iVar5 - 1;
        }
        puVar6 = (undefined4 *)(iVar5 * 0x84 + param_1);
        puVar7 = (undefined4 *)(iVar3 * 0x84 + param_1);
        for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = iVar5;
      }
      if (iVar5 == iVar1) {
        puVar6 = (undefined4 *)(iVar1 * 0x84 - 0x84 + param_1);
        puVar7 = (undefined4 *)(iVar3 * 0x84 + param_1);
        for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        iVar3 = iVar1 - 1;
      }
      F_00a08cf0(param_1,iVar3,iVar2,((undefined4 *)(gen_frame + 0x0)),param_3);
      iVar5 = (*(int *)(gen_frame + 0x88));
      puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x84));
    } while (0 < iVar2);
  }
  return;
}

/* ref: FUN_00a09150 */
GEN_FRAME uint F_00a09150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa09150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float * pfVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (!((float10)*(float *)param_2[1] < (float10)*(float *)param_1[1])) {
    puVar3 = param_2;
    puVar4 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1;
    puVar4 = param_2;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
    puVar4 = param_1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  if (!((float10)*(float *)param_3[1] < (float10)*(float *)param_2[1])) {
    puVar3 = param_3;
    puVar4 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_2;
    puVar4 = param_3;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
    puVar4 = param_2;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  pfVar1 = (float *)param_2[1];
  if (!((float10)*pfVar1 < (float10)*(float *)param_1[1])) {
    puVar3 = param_2;
    puVar4 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = param_1;
    puVar4 = param_2;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = ((undefined4 *)(gen_frame + 0x8));
    puVar4 = param_1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)pfVar1;
}

/* ref: FUN_00a09220 */
GEN_FRAME unsigned int F_00a09220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar3 = param_2;
  puVar1 = param_3;
  while (param_1 != puVar3) {
    puVar3 = puVar3 - 0x21;
    puVar1 = puVar1 - 0x21;
    puVar4 = puVar3;
    puVar5 = puVar1;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00a09260 */
GEN_FRAME unsigned int F_00a09260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(param_2 - 0x84);
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1;
  puVar3 = (undefined4 *)(param_2 - 0x84);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00a08e50(param_1,0,((param_2 - (int)param_1) - 0x84) / 0x84,((undefined4 *)(gen_frame + 0x8)),param_3);
  return;
}

/* ref: FUN_00a092d0 */
GEN_FRAME uint F_00a092d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa092d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a08f90(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_00a092f0 */
GEN_FRAME unsigned int F_00a092f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa092f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < (param_2 - param_1) / 0x84) {
    F_00a09040(param_1,param_2,param_3,0,0);
  }
  return;
}

/* ref: FUN_00a09330 */
GEN_FRAME uint F_00a09330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa09330u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (param_3 - param_1) / 0x84;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 0x84 + param_1;
    F_00a09150(param_1,iVar1,iVar2 * 0x108 + param_1,param_4);
    F_00a09150(param_2 + iVar2 * -0x84,param_2,iVar2 * 0x84 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -0x84;
    F_00a09150(param_3 + iVar2 * -0x108,iVar3,param_3,param_4);
    uVar4 = F_00a09150(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_00a09150(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00a093e0 */
GEN_FRAME unsigned int F_00a093e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa093e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float * PTR32 * ppfVar7;
  
  if (param_1 != param_2) {
    puVar4 = param_1 + 0x21;
    (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = puVar4;
    while (puVar4 != param_2) {
      puVar5 = puVar4;
      ppfVar7 = ((float * PTR32 *)(gen_frame + 0x4));
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = puVar4;
      for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
        *ppfVar7 = (float *)*puVar5;
        puVar5 = puVar5 + 1;
        ppfVar7 = ppfVar7 + 1;
      }
      puVar3 = puVar4;
      puVar5 = puVar4;
      if ((GEN_ISNAN((float10)*(float *)param_1[1]) || GEN_ISNAN(((float10)GEN_TOD(*((float * PTR32 *)(gen_frame + 0x4))[1])))) ||
          (float10)*(float *)param_1[1] <= ((float10)GEN_TOD(*((float * PTR32 *)(gen_frame + 0x4))[1]))) {
        while (puVar3 = param_1, param_1 != puVar5) {
          puVar1 = puVar5 - 0x21;
          puVar6 = puVar1;
          puVar3 = puVar5;
          for (iVar2 = 0x21; puVar5 = puVar1, iVar2 != 0; iVar2 = iVar2 - 1) {
            *puVar3 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar3 = puVar3 + 1;
          }
        }
      }
      else {
        while (puVar5 = puVar3 - 0x21, puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x88)),
              !(((float10)GEN_TOD(*((float * PTR32 *)(gen_frame + 0x4))[1])) < (float10)*(float *)puVar3[-0x20])) {
          puVar4 = puVar5;
          puVar6 = puVar3;
          for (iVar2 = 0x21; puVar3 = puVar5, iVar2 != 0; iVar2 = iVar2 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
      puVar4 = puVar4 + 0x21;
      ppfVar7 = ((float * PTR32 *)(gen_frame + 0x4));
      for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar3 = *ppfVar7;
        ppfVar7 = ppfVar7 + 1;
        puVar3 = puVar3 + 1;
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x88)) = puVar4;
    }
  }
  return 0;
}

/* ref: FUN_00a094c0 */
GEN_FRAME unsigned int F_00a094c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa094c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(param_2 - 0x84);
  puVar3 = ((undefined4 *)(gen_frame + 0x8));
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_1;
  puVar3 = (undefined4 *)(param_2 - 0x84);
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00a08e50(param_1,0,((param_2 - (int)param_1) - 0x84) / 0x84,((undefined4 *)(gen_frame + 0x8)),param_3);
  return;
}

/* ref: FUN_00a09530 */
GEN_FRAME uint F_00a09530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa09530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x3c0];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  float10 fVar8;
  float10 fVar9;
  
  puVar5 = param_2 + (((int)param_3 - (int)param_2) / 0x108) * 0x21;
  F_00a09330(param_2,puVar5,param_3 - 0x21,param_4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar5 + 0x21;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)) = puVar5;
  if (param_2 < puVar5) {
    do {
      (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar5[-0x20];
      (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)puVar5[1])));
      fVar8 = (float10)*(float *)puVar5[-0x20];
      fVar9 = (float10)*(float *)puVar5[1];
      if ((!(fVar8 < fVar9)) || (!(fVar9 < fVar8))) break;
      puVar5 = puVar5 - 0x21;
    } while (param_2 < puVar5);
    (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)) = puVar5;
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) < param_3) {
    if (3 < ((int)param_3 + (0x83 - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8)))) / 0x84) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)puVar5[1])));
      fVar8 = (float10)*(float *)puVar5[1];
      do {
        (*(float *)(gen_frame + 0x3b4)) = *(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[1];
        fVar9 = (float10)*(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[1];
        if ((!(fVar9 < fVar8)) || (!(fVar8 < fVar9))) goto LAB_00a096e8;
        (*(float *)(gen_frame + 0x3b4)) = *(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[0x22];
        fVar9 = (float10)*(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[0x22];
        if ((!(fVar9 < fVar8)) || (!(fVar8 < fVar9))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) + 0x21;
          goto LAB_00a096e8;
        }
        (*(float *)(gen_frame + 0x3b4)) = *(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[0x43];
        fVar9 = (float10)*(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[0x43];
        if ((!(fVar9 < fVar8)) || (!(fVar8 < fVar9))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) + 0x42;
          goto LAB_00a096e8;
        }
        (*(float *)(gen_frame + 0x3b4)) = *(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[100];
        fVar9 = (float10)*(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[100];
        if ((!(fVar9 < fVar8)) || (!(fVar8 < fVar9))) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) + 99;
          goto LAB_00a096e8;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) + 0x84;
      } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) < (int)(param_3 - 99));
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) < param_3) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)puVar5[1])));
      fVar8 = (float10)*(float *)puVar5[1];
      do {
        (*(float *)(gen_frame + 0x3b4)) = *(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[1];
        fVar9 = (float10)*(float *)(*(undefined4 * PTR32 *)(gen_frame + 0x3b8))[1];
        if ((!(fVar9 < fVar8)) || (!(fVar8 < fVar9))) break;
        (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) + 0x21;
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) < param_3);
LAB_00a096e8: ;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) = puVar5;
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)) = puVar5;
LAB_00a096f2: ;
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0));
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
  if (puVar3 < param_3) {
    if (3 < ((int)param_3 + (0x83 - (int)puVar3)) / 0x84) {
      do {
        (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar5[1];
        (*(float *)(gen_frame + 0x3a8)) = *(float *)puVar3[1];
        fVar8 = (float10)*(float *)puVar5[1];
        fVar9 = (float10)*(float *)puVar3[1];
        if (fVar8 < fVar9) {
          puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac));
          puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
          if (!(fVar9 < fVar8)) goto joined_r0x00a0998b;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2 + 0x21;
          puVar5 = puVar2;
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar5 = puVar3;
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          puVar6 = puVar3;
          for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar5[1];
        (*(float *)(gen_frame + 0x3a8)) = *(float *)puVar3[0x22];
        fVar8 = (float10)*(float *)puVar5[1];
        fVar9 = (float10)*(float *)puVar3[0x22];
        if (fVar8 < fVar9) {
          if (!(fVar9 < fVar8)) {
            puVar3 = puVar3 + 0x21;
            puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac));
            puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
            goto joined_r0x00a0998b;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2 + 0x21;
          puVar5 = puVar2;
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar5 = puVar3 + 0x21;
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          puVar6 = puVar3 + 0x21;
          for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar5[1];
        (*(float *)(gen_frame + 0x3a8)) = *(float *)puVar3[0x43];
        fVar8 = (float10)*(float *)puVar5[1];
        fVar9 = (float10)*(float *)puVar3[0x43];
        if (fVar8 < fVar9) {
          if (!(fVar9 < fVar8)) {
            puVar3 = puVar3 + 0x42;
            puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac));
            puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
            goto joined_r0x00a0998b;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2 + 0x21;
          puVar5 = puVar2;
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar5 = puVar3 + 0x42;
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          puVar6 = puVar3 + 0x42;
          for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar5[1];
        (*(float *)(gen_frame + 0x3a8)) = *(float *)puVar3[100];
        fVar8 = (float10)*(float *)puVar5[1];
        fVar9 = (float10)*(float *)puVar3[100];
        if (fVar8 < fVar9) {
          if (!(fVar9 < fVar8)) {
            puVar3 = puVar3 + 99;
            puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac));
            puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
            goto joined_r0x00a0998b;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2 + 0x21;
          puVar5 = puVar2;
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar4 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar5 = puVar3 + 99;
          for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar2 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar2 = puVar2 + 1;
          }
          puVar4 = ((undefined4 *)(gen_frame + 0x324));
          puVar6 = puVar3 + 99;
          for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        puVar3 = puVar3 + 0x84;
      } while ((int)puVar3 < (int)(param_3 - 99));
    }
    for (; puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)), puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar3 < param_3; puVar3 = puVar3 + 0x21) {
      (*(float *)(gen_frame + 0x3a8)) = *(float *)puVar5[1];
      (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar3[1];
      fVar8 = (float10)*(float *)puVar5[1];
      fVar9 = (float10)*(float *)puVar3[1];
      if (fVar8 < fVar9) {
        if (!(fVar9 < fVar8)) break;
        (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2 + 0x21;
        puVar5 = puVar2;
        puVar4 = ((undefined4 *)(gen_frame + 0x324));
        for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar5 = puVar3;
        for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar4 = ((undefined4 *)(gen_frame + 0x324));
        puVar6 = puVar3;
        for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
joined_r0x00a0998b: ;
  do {
    (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar6;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) <= param_2) break;
    puVar7 = puVar4 - 0x21;
    (*(float *)(gen_frame + 0x3a8)) = *(float *)puVar4[-0x20];
    (*(float *)(gen_frame + 0x3b4)) = *(float *)puVar5[1];
    fVar8 = (float10)*(float *)puVar4[-0x20];
    fVar9 = (float10)*(float *)puVar5[1];
    if (fVar8 < fVar9) {
      if (!(fVar9 < fVar8)) break;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)) = puVar5 - 0x21;
      puVar5 = puVar5 - 0x21;
      puVar2 = ((undefined4 *)(gen_frame + 0x90));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar5 = puVar7;
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar4 = ((undefined4 *)(gen_frame + 0x90));
      puVar6 = puVar7;
      for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) - 0x21;
    puVar4 = puVar7;
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
  } while( true );
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) == param_2) {
    if (puVar3 == param_3) {
      *param_1 = puVar5;
      param_1[1] = puVar2;
      return (uint)param_1;
    }
    if (puVar2 != puVar3) {
      puVar2 = ((undefined4 *)(gen_frame + 0x198));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar5 = puVar6;
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar4 = ((undefined4 *)(gen_frame + 0x198));
      puVar7 = puVar6;
      for (iVar1 = 0x21; puVar2 = puVar6, puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)), iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2 + 0x21;
    (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)) = puVar5 + 0x21;
    puVar2 = puVar5;
    puVar4 = ((undefined4 *)(gen_frame + 0x2a0));
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar2 = puVar3;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar5 = ((undefined4 *)(gen_frame + 0x2a0));
    puVar2 = puVar3;
    for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar2 + 1;
    }
    puVar3 = puVar3 + 0x21;
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
  }
  else {
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) - 0x21;
    (*(undefined4 * PTR32 *)(gen_frame + 0x3ac)) = puVar4;
    if (puVar3 == param_3) {
      puVar5 = puVar5 - 0x21;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3b0)) = puVar5;
      if (puVar4 != puVar5) {
        puVar2 = ((undefined4 *)(gen_frame + 0x21c));
        for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
        puVar2 = puVar5;
        puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3ac));
        for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        puVar4 = ((undefined4 *)(gen_frame + 0x21c));
        puVar6 = puVar5;
        for (iVar1 = 0x21; puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)), iVar1 != 0; iVar1 = iVar1 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      puVar2 = puVar2 - 0x21;
      (*(undefined4 * PTR32 *)(gen_frame + 0x3b8)) = puVar2;
      puVar4 = ((undefined4 *)(gen_frame + 0x114));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar2;
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b0));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar5 = ((undefined4 *)(gen_frame + 0x114));
      puVar4 = puVar2;
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      puVar5 = puVar3;
      puVar2 = ((undefined4 *)(gen_frame + 0xc));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar5 = puVar4;
      puVar2 = puVar3;
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar2 = puVar2 + 1;
      }
      puVar5 = ((undefined4 *)(gen_frame + 0xc));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = puVar3 + 0x21;
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x3b8));
    }
  }
  goto LAB_00a096f2;
}

/* ref: FUN_00a09b80 */
GEN_FRAME unsigned int F_00a09b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a093e0(param_1,param_2,param_3,0);
  return;
}

/* ref: FUN_00a09ba0 */
GEN_FRAME unsigned int F_00a09ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (1 < (param_2 - (int)param_1) / 0x84) {
    puVar2 = (undefined4 *)(param_2 - 0x84);
    param_2 = param_2 - (int)param_1;
    do {
      puVar3 = puVar2;
      puVar4 = ((undefined4 *)(gen_frame + 0x8));
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1;
      puVar4 = puVar2;
      for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      F_00a08e50(param_1,0,(param_2 - 0x84) / 0x84,((undefined4 *)(gen_frame + 0x8)),param_3);
      puVar2 = puVar2 - 0x21;
      param_2 = (int)puVar2 + (0x84 - (int)param_1);
    } while (1 < param_2 / 0x84);
  }
  return 0;
}

/* ref: FUN_00a09c60 */
GEN_FRAME unsigned int F_00a09c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a09ba0(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00a09c80 */
GEN_FRAME unsigned int F_00a09c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa09c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 / 0x84;
    if (iVar1 < 0x21) {
LAB_00a09d55: ;
      if (1 < iVar1) {
        F_00a093e0(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (1 < (iVar4 - iVar2) / 0x84) {
          F_00a09040(iVar2,iVar4,param_4,0,0);
        }
        F_00a09ba0(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_00a09d55;
    }
    F_00a09530(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if (((*(int *)(gen_frame + 0x4)) - iVar2) / 0x84 < (iVar4 - (*(int *)(gen_frame + 0x8))) / 0x84) {
      F_00a09c80(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00a09c80((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_00a09dc0 */
GEN_FRAME unsigned int F_00a09dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a09c80(param_1,param_2,(param_2 - param_1) / 0x84,param_3);
  return;
}

/* ref: FUN_00a09e00 */
GEN_NOFRAME uint F_00a09e00(void)
{
  GEN_ENTER(0xa09e00u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (REFG(int, 0x14a24b0) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a24b0));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a24b0) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a24b4) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a09e30 */
GEN_FRAME uint F_00a09e30(unsigned int gen_a0)
{
  GEN_ENTER(0xa09e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(REFG(int, 0x14a24b0) + param_1 * 4);
}

/* ref: FUN_00a09e50 */
GEN_NOFRAME uint F_00a09e50(void)
{
  GEN_ENTER(0xa09e50u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar1 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,"PhysicsOffGroup");
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    uVar3 = F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 4),0,0);
    iVar5 = 0;
    REFG(undefined4, 0x14a24b0) = uVar3;
    *(uint *)&REFG(undefined, 0x14a24b4) = uVar2;
    if (0 < (int)uVar2) {
      do {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,iVar5)));
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        *(undefined4 *)(REFG(undefined4, 0x14a24b0) + iVar5 * 4) = *(undefined4 *)(uVar3 + 4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_00a09ed0 */
GEN_NOFRAME uint F_00a09ed0(void)
{
  GEN_ENTER(0xa09ed0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (REFG(int, 0x14a24b8) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a24b8));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a24b8) = 0;
  }
  REFG(undefined4, 0x14a24bc) = 0;
  REFG(undefined4, 0x14a24c0) = 0;
  REFG(undefined4, 0x14a24c4) = 0;
  return uVar1;
}

/* ref: FUN_00a09f00 */
GEN_FRAME uint F_00a09f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa09f00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((REFG(int, 0x14a24bc) +
                  (uint)*(byte *)(REFG(int, 0x14a24c4) * param_1 + REFG(int, 0x14a24c0) + param_2) * 4)));
}

/* ref: FUN_00a09f30 */
GEN_FRAME uint F_00a09f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09f30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x14a24bc) +
                  (uint)*(byte *)(REFG(int, 0x14a24c4) * param_1 + REFG(int, 0x14a24c0) + param_2) * 4)));
  if (iVar1 != 0) {
    return (uint)*(byte *)(iVar1 + 2 + param_3);
  }
  return 0;
}

/* ref: FUN_00a09f70 */
GEN_FRAME uint F_00a09f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa09f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a0a270(param_1);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(uVar2 + 4);
  }
  uVar3 = F_00a0a270(param_2);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*(byte *)(uVar3 + 4);
  }
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x14a24bc) + (uint)*(byte *)(REFG(int, 0x14a24c4) * uVar2 + REFG(int, 0x14a24c0) + uVar3) * 4)));
  if (iVar1 != 0) {
    return (uint)*(byte *)(iVar1 + 2 + param_3);
  }
  return 0;
}

/* ref: FUN_00a09fe0 */
GEN_FRAME uint F_00a09fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa09fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x14a24bc) + (uint)*(byte *)(REFG(int, 0x14a24c0) + REFG(int, 0x14a24c4) * 2 + param_1) * 4)));
  if (iVar1 != 0) {
    return (uint)*(byte *)(iVar1 + 2 + param_2);
  }
  return 0;
}

/* ref: FUN_00a0a020 */
GEN_FRAME unsigned int F_00a0a020(void)
{
  GEN_ENTER(0xa0a020u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  char * pcVar9;
  char * pcVar10;
  int iVar11;
  int iVar12;
  
  piVar3 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,"MotionTimelineBlendTable");
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG);
  iVar11 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  REFG(int, 0x14a24c4) = 0;
  if (0 < (int)uVar4) {
    do {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,iVar11)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG);
      pbVar2 = *(byte * PTR32 *)(uVar6 + 4);
      bVar1 = pbVar2[1];
      (*(int *)(gen_frame + 0x4)) = bVar1 + 1;
      piVar5 = &(*(int *)(gen_frame + 0x4));
      if ((int)(bVar1 + 1) <= REFG(int, 0x14a24c4)) {
        piVar5 = &REFG(int, 0x14a24c4);
      }
      iVar12 = *piVar5;
      REFG(int, 0x14a24c4) = iVar12;
      bVar1 = *pbVar2;
      (*(int *)(gen_frame + 0x4)) = bVar1 + 1;
      piVar5 = &(*(int *)(gen_frame + 0x4));
      if ((int)(bVar1 + 1) <= iVar12) {
        piVar5 = &REFG(int, 0x14a24c4);
      }
      iVar12 = *piVar5;
      REFG(int, 0x14a24c4) = iVar12;
      if (((((pbVar2[5] != 0 || pbVar2[4] != 0) || pbVar2[3] != 0) || pbVar2[2] != 0) ||
          pbVar2[1] != 0) || *pbVar2 != 0) {
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)uVar4);
    if (0 < (int)uVar4) {
      iVar11 = (*(int *)(gen_frame + 0x8)) * 4;
      REFG(undefined4, 0x14a24b8) = F_00406bb0(iVar12 * iVar12 + iVar11,0,0);
      REFG(char * PTR32, 0x14a24c0) = (char *)(REFG(undefined4, 0x14a24b8) + iVar11);
      REFG(undefined4, 0x14a24bc) = REFG(undefined4, 0x14a24b8);
      F_00c48350(REFG(char * PTR32, 0x14a24c0),0xff,REFG(int, 0x14a24c4) * REFG(int, 0x14a24c4));
      iVar11 = 0;
      iVar12 = 0;
      do {
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,iVar12)));
        uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG);
        pbVar2 = *(byte * PTR32 *)(uVar6 + 4);
        if (((((pbVar2[5] != 0 || pbVar2[4] != 0) || pbVar2[3] != 0) || pbVar2[2] != 0) ||
            pbVar2[1] != 0) || *pbVar2 != 0) {
          *(byte * PTR32 *)(REFG(undefined4, 0x14a24bc) + iVar11 * 4) = pbVar2;
          REFG(char * PTR32, 0x14a24c0)[(uint)*pbVar2 + (uint)pbVar2[1] * REFG(int, 0x14a24c4)] = (char)iVar11;
          iVar11 = iVar11 + 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)uVar4);
      iVar12 = 0;
      iVar11 = REFG(int, 0x14a24c4);
      pcVar10 = REFG(char * PTR32, 0x14a24c0);
      if (0 < REFG(int, 0x14a24c4)) {
        do {
          iVar7 = 0;
          if (0 < iVar11) {
            do {
              pcVar9 = pcVar10 + iVar11 * iVar12;
              if (pcVar9[iVar7] == -1) {
                cVar8 = pcVar10[iVar7];
                if ((cVar8 == -1) && (cVar8 = *pcVar9, cVar8 == -1)) {
                  cVar8 = *pcVar10;
                }
                pcVar9[iVar7] = cVar8;
                iVar11 = REFG(int, 0x14a24c4);
                pcVar10 = REFG(char * PTR32, 0x14a24c0);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar11);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar11);
      }
    }
  }
  return 0;
}

/* ref: FUN_00a0a1d0 */
GEN_FRAME uint F_00a0a1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a1d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a1e0 */
GEN_FRAME uint F_00a0a1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,param_3,param_2 - (int)param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00a0a200 */
GEN_FRAME uint F_00a0a200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,*param_3,param_2 - (int)param_1);
  return (uint)pvVar1;
}

/* ref: FUN_00a0a220 */
GEN_FRAME uint GEN_STDCALL F_00a0a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a220u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*(uint *)(param_1 + 4) < *(uint *)(param_2 + 4));
}

/* ref: FUN_00a0a240 */
GEN_NOFRAME uint F_00a0a240(void)
{
  GEN_ENTER(0xa0a240u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (REFG(int, 0x14a24c8) != 0) {
    uVar2 = F_00406b30(REFG(int, 0x14a24c8));
    uVar1 = (uint)uVar2;
    REFG(int, 0x14a24c8) = 0;
    REFG(undefined4, 0x14a24cc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a0a270 */
GEN_FRAME uint F_00a0a270(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a270u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  uint * puVar6;
  bool bVar7;
  
  if ((param_1 == (byte *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar2 = F_00a1b270(param_1);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  F_00a0aad0(&(*(uint * PTR32 *)(gen_frame + 0xc)),REFG(int, 0x14a24c8),REFG(int, 0x14a24c8) + REFG(int, 0x14a24cc) * 8,&(*(undefined4 *)(gen_frame + 0x14)),param_1,0);
  iVar3 = (int)(*(uint * PTR32 *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0xc))) >> 3;
  if (iVar3 == 0) {
    return 0;
  }
  puVar6 = (*(uint * PTR32 *)(gen_frame + 0xc));
  if (iVar3 < 2) {
    return *(*(uint * PTR32 *)(gen_frame + 0xc));
  }
  do {
    if (puVar6 == (*(uint * PTR32 *)(gen_frame + 0x10))) {
      return 0;
    }
    pbVar4 = ((byte *)GEN_TOP(((*(uint *)*puVar6 & 0xffffff) + (int)*puVar6)));
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00a0a310: ;
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00a0a315;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00a0a310;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00a0a315: ;
    if (iVar3 == 0) {
      return *puVar6;
    }
    puVar6 = puVar6 + 2;
  } while( true );
}

/* ref: FUN_00a0a350 */
GEN_FRAME unsigned int F_00a0a350(void)
{
  GEN_ENTER(0xa0a350u, 0u, 0u, 0u, 0u);
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  piVar2 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_ARG,"MotionTimeline");
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    iVar8 = 0;
    if (0 < (int)uVar3) {
      do {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,iVar8)));
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        if (*((char *)GEN_TOP(((**(uint * PTR32 *)(uVar5 + 4) & 0xffffff) + (int)*(uint * PTR32 *)(uVar5 + 4)))) != '\0') {
          uVar7 = uVar7 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar3);
    }
    REFG(undefined4, 0x14a24c8) = F_00406bb0(-(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar7 * 8),0,0);
    iVar8 = 0;
    REFG(undefined4, 0x14a24cc) = uVar7;
    if (0 < (int)uVar3) {
      local_8 = 0;
      do {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2 GEN_EDX_ARG,iVar8)));
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        puVar1 = *(uint * PTR32 *)(uVar7 + 4);
        pcVar6 = ((char *)GEN_TOP(((*puVar1 & 0xffffff) + (int)puVar1)));
        if (*pcVar6 != '\0') {
          piVar4 = (int *)(local_8 + REFG(undefined4, 0x14a24c8));
          *piVar4 = (int)puVar1;
          uVar7 = F_00a1b270(pcVar6);
          local_8 = local_8 + 8;
          piVar4[1] = uVar7;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar3);
    }
    iVar8 = REFG(undefined4, 0x14a24c8) + REFG(undefined4, 0x14a24cc) * 8;
    F_00a0aff0(REFG(undefined4, 0x14a24c8),iVar8,(int)(iVar8 - REFG(undefined4, 0x14a24c8)) >> 3,uVar3);
  }
  return;
}

/* ref: FUN_00a0a470 */
GEN_FRAME uint F_00a0a470(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a480 */
GEN_FRAME uint F_00a0a480(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a4a0 */
GEN_FRAME uint F_00a0a4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a0a4b0 */
GEN_FRAME uint F_00a0a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a4b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a4c0 */
GEN_FRAME uint GEN_THISCALL F_00a0a4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a0a4e0 */
GEN_FRAME uint F_00a0a4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a4f0 */
GEN_FRAME uint GEN_THISCALL F_00a0a4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a0a520 */
GEN_FRAME uint F_00a0a520(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a530 */
GEN_FRAME uint F_00a0a530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a530u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1 >> 3);
  return (uint)param_3;
}

/* ref: FUN_00a0a550 */
GEN_FRAME uint F_00a0a550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a550u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00a0a570 */
GEN_FRAME uint F_00a0a570(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a580 */
GEN_FRAME uint F_00a0a580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0a580u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while ((param_3 < iVar2 &&
         (iVar3 = (iVar2 - 1) / 2, *(uint *)(param_1 + 4 + iVar3 * 8) < param_4[1]))) {
    *(undefined4 *)(param_1 + iVar2 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar2 = iVar3;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 8) = uVar1;
  *(uint *)(param_1 + 4 + iVar2 * 8) = param_4[1];
  return uVar1;
}

/* ref: FUN_00a0a5e0 */
GEN_FRAME byte F_00a0a5e0(void)
{
  GEN_ENTER(0xa0a5e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a0a5f0 */
GEN_FRAME uint F_00a0a5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0a5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0a610 */
GEN_FRAME uint GEN_THISCALL F_00a0a610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00a0a630 */
GEN_FRAME uint GEN_THISCALL F_00a0a630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00a0a650 */
GEN_FRAME uint GEN_THISCALL F_00a0a650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a0a670 */
GEN_FRAME uint F_00a0a670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a670u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  *param_3 = *param_3 + (param_2 - param_1 >> 3);
  return (uint)param_3;
}

/* ref: FUN_00a0a690 */
GEN_FRAME uint F_00a0a690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a690u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = *param_1 + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00a0a6b0 */
GEN_FRAME uint F_00a0a6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0a6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(param_2 - param_1) >> 3;
  uVar3 = param_1;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(uVar3 + 4 + iVar1 * 8) < *(uint *)(param_3 + 4)) {
        uVar3 = uVar3 + 8 + iVar1 * 8;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return uVar3;
}

/* ref: FUN_00a0a700 */
GEN_FRAME uint F_00a0a700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0a700u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)(param_2 - param_1) >> 3;
  uVar3 = param_1;
  if (0 < iVar2) {
    do {
      iVar1 = iVar2 / 2;
      if (*(uint *)(uVar3 + 4 + iVar1 * 8) <= *(uint *)(param_3 + 4)) {
        uVar3 = uVar3 + 8 + iVar1 * 8;
        iVar1 = iVar2 + (-1 - iVar1);
      }
      iVar2 = iVar1;
    } while (0 < iVar1);
  }
  return uVar3;
}

/* ref: FUN_00a0a750 */
GEN_FRAME uint F_00a0a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a0a780 */
GEN_FRAME uint F_00a0a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0a780u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if (*(uint *)(param_1 + 4 + iVar3 * 8) < *(uint *)(param_1 - 4 + iVar3 * 8)) {
      iVar3 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 - 8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 - 4 + param_3 * 8);
    iVar1 = param_3 - 1;
  }
  while ((param_2 < iVar1 &&
         (iVar3 = (iVar1 - 1) / 2, *(uint *)(param_1 + 4 + iVar3 * 8) < param_4[1]))) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar1 = iVar3;
  }
  uVar2 = *param_4;
  *(uint *)(param_1 + iVar1 * 8) = uVar2;
  *(uint *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return uVar2;
}

/* ref: FUN_00a0a820 */
GEN_FRAME unsigned int F_00a0a820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0a820u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_00a0a850 */
GEN_FRAME uint F_00a0a850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0a850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_00a0a780(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00a0a890 */
GEN_FRAME uint F_00a0a890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0a890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a0a6b0(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_00a0a8b0 */
GEN_FRAME uint F_00a0a8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0a8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a0a700(param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_00a0a8d0 */
GEN_FRAME uint F_00a0a8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0a8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00a0a900 */
GEN_FRAME unsigned int F_00a0a900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0a900u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar4 = param_2 - param_1 >> 3;
  iVar9 = iVar4 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar9) {
    iVar5 = iVar9 * 2 + 2;
    iVar8 = param_1 + iVar9 * 8;
    do {
      uVar2 = *(undefined4 *)(iVar8 - 8);
      uVar3 = *(uint *)(iVar8 - 4);
      iVar5 = iVar5 - 2;
      iVar9 = iVar9 - 1;
      iVar7 = iVar5;
      iVar1 = iVar9;
      while (iVar6 = iVar7, iVar6 < iVar4) {
        if (*(uint *)(param_1 + 4 + iVar6 * 8) < *(uint *)(param_1 - 4 + iVar6 * 8)) {
          iVar6 = iVar6 - 1;
        }
        *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar6 * 8);
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar6 * 8);
        iVar1 = iVar6;
        iVar7 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar4) {
        *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 - 8 + iVar4 * 8);
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 - 4 + iVar4 * 8);
        iVar1 = iVar4 - 1;
      }
      while ((iVar9 < iVar1 &&
             (iVar7 = (iVar1 - 1) / 2, *(uint *)(param_1 + 4 + iVar7 * 8) < uVar3))) {
        *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar7 * 8);
        *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar7 * 8);
        iVar1 = iVar7;
      }
      *(undefined4 *)(param_1 + iVar1 * 8) = uVar2;
      *(uint *)(param_1 + 4 + iVar1 * 8) = uVar3;
      iVar8 = iVar8 - 8;
    } while (0 < iVar9);
  }
  return 0;
}

/* ref: FUN_00a0a9e0 */
GEN_FRAME unsigned int F_00a0a9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0a9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((uint)param_2[1] < (uint)param_1[1]) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  if ((uint)param_3[1] < (uint)param_2[1]) {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  if ((uint)param_2[1] < (uint)param_1[1]) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return 0;
}

/* ref: FUN_00a0aa50 */
GEN_FRAME unsigned int F_00a0aa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0aa50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_00a0aa80 */
GEN_FRAME uint F_00a0aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0aa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 - 8);
  *(undefined4 *)(param_2 - 8) = *param_1;
  *(undefined4 *)(param_2 - 4) = param_1[1];
  uVar1 = F_00a0a780(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_00a0aad0 */
GEN_FRAME uint F_00a0aad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa0aad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (int)(param_3 - param_2) >> 3;
  uVar4 = param_2;
  if (0 < iVar5) {
    do {
      iVar2 = iVar5 / 2;
      uVar3 = *(uint *)(uVar4 + 4 + iVar2 * 8);
      iVar1 = uVar4 + iVar2 * 8;
      if (uVar3 < *(uint *)(param_4 + 4)) {
        uVar4 = iVar1 + 8;
        iVar2 = iVar5 + (-1 - iVar2);
      }
      else if (uVar3 <= *(uint *)(param_4 + 4)) {
        uVar3 = F_00a0a700(iVar1 + 8,uVar4 + iVar5 * 8,param_4,param_5,0);
        uVar4 = F_00a0a6b0(uVar4,iVar1,param_4,param_5,0);
        *param_1 = uVar4;
        param_1[1] = uVar3;
        return (uint)param_1;
      }
      iVar5 = iVar2;
    } while (0 < iVar2);
  }
  *param_1 = uVar4;
  param_1[1] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_00a0ab60 */
GEN_FRAME unsigned int F_00a0ab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0ab60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
    F_00a0a900(param_1,param_2,param_3,0,0);
  }
  return;
}

/* ref: FUN_00a0ab90 */
GEN_FRAME unsigned int F_00a0ab90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0ab90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 3;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 8 + param_1;
    F_00a0a9e0(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    F_00a0a9e0(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -8;
    F_00a0a9e0(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    F_00a0a9e0(iVar1,param_2,iVar3,param_4);
    return;
  }
  F_00a0a9e0(param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00a0ac30 */
GEN_FRAME unsigned int F_00a0ac30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0ac30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = puVar5 + 2, puVar5 != param_2) {
      uVar2 = puVar5[1];
      uVar3 = *puVar5;
      puVar4 = puVar5;
      if (uVar2 < (uint)param_1[1]) {
        for (; param_1 != puVar4; puVar4 = puVar4 - 2) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
        }
        *param_1 = uVar3;
        param_1[1] = uVar2;
      }
      else {
        uVar1 = puVar5[-1];
        while (uVar2 < uVar1) {
          *puVar4 = puVar4[-2];
          puVar4[1] = puVar4[-1];
          uVar1 = puVar4[-3];
          puVar4 = puVar4 - 2;
        }
        *puVar4 = uVar3;
        puVar4[1] = uVar2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a0acc0 */
GEN_FRAME uint F_00a0acc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0acc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 - 4);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 - 8);
  *(undefined4 *)(param_2 - 8) = *param_1;
  *(undefined4 *)(param_2 - 4) = param_1[1];
  uVar1 = F_00a0a780(param_1,0,(param_2 - (int)param_1) - 8 >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
  return uVar1;
}

/* ref: FUN_00a0ad10 */
GEN_FRAME uint F_00a0ad10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0ad10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00a0aad0(&(*(undefined4 *)(gen_frame + 0x4)),param_2,param_3,param_4,param_5,0);
  *param_1 = (*(undefined4 *)(gen_frame + 0x4));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x8));
  return (uint)param_1;
}

/* ref: FUN_00a0ad50 */
GEN_FRAME uint F_00a0ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  undefined4 * local_8;
  
  local_8 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1) * 2;
  F_00a0ab90(param_2,local_8,param_3 - 2,param_4);
  puVar9 = local_8 + 2;
  for (; ((param_2 < local_8 &&
          (uVar1 = local_8[-1], uVar2 = local_8[1], uVar1 > uVar2 || uVar2 == uVar1)) &&
         (uVar1 <= uVar2)); local_8 = local_8 - 2) {
  }
  puVar10 = puVar9;
  puVar11 = local_8;
  puVar5 = local_8;
  if (puVar9 < param_3) {
    uVar1 = local_8[1];
    do {
      uVar2 = puVar9[1];
      puVar10 = puVar9;
      if ((uVar1 >= uVar2 && uVar1 != uVar2) || (uVar1 < uVar2)) break;
      puVar9 = puVar9 + 2;
      puVar10 = puVar9;
    } while (puVar9 < param_3);
  }
joined_r0x00a0adca: ;
  do {
    puVar7 = puVar11;
    if (param_3 <= puVar9) {
joined_r0x00a0ae0c: ;
      while (param_2 < puVar11) {
        puVar8 = puVar7 - 2;
        puVar6 = puVar5;
        if ((uint)puVar5[1] <= (uint)puVar7[-1]) {
          puVar11 = local_8;
          if ((uint)puVar5[1] < (uint)puVar7[-1]) break;
          uVar3 = puVar5[-1];
          uVar4 = puVar5[-2];
          puVar6 = puVar5 - 2;
          *puVar6 = *puVar8;
          puVar5[-1] = puVar7[-1];
          *puVar8 = uVar4;
          puVar7[-1] = uVar3;
        }
        puVar11 = local_8 - 2;
        puVar5 = puVar6;
        puVar7 = puVar8;
        local_8 = puVar11;
      }
      if (puVar11 == param_2) {
        if (puVar9 == param_3) {
          param_1[1] = puVar10;
          *param_1 = puVar5;
          return (uint)param_1;
        }
        if (puVar10 != puVar9) {
          uVar3 = puVar5[1];
          uVar4 = *puVar5;
          *puVar5 = *puVar10;
          puVar5[1] = puVar10[1];
          *puVar10 = uVar4;
          puVar10[1] = uVar3;
        }
        uVar3 = *puVar5;
        uVar4 = puVar5[1];
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        *puVar9 = uVar3;
        puVar9[1] = uVar4;
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
        puVar5 = puVar5 + 2;
      }
      else {
        local_8 = puVar11 - 2;
        if (puVar9 == param_3) {
          puVar7 = puVar5 - 2;
          if (local_8 != puVar7) {
            uVar3 = puVar11[-1];
            uVar4 = *local_8;
            *local_8 = *puVar7;
            puVar11[-1] = puVar5[-1];
            *puVar7 = uVar4;
            puVar5[-1] = uVar3;
          }
          uVar3 = puVar5[-1];
          uVar4 = *puVar7;
          puVar11 = puVar10 - 2;
          *puVar7 = *puVar11;
          puVar5[-1] = puVar10[-1];
          *puVar11 = uVar4;
          puVar10[-1] = uVar3;
          puVar10 = puVar11;
          puVar11 = local_8;
          puVar5 = puVar7;
        }
        else {
          uVar3 = puVar9[1];
          uVar4 = *puVar9;
          *puVar9 = *local_8;
          puVar9[1] = puVar11[-1];
          *local_8 = uVar4;
          puVar11[-1] = uVar3;
          puVar9 = puVar9 + 2;
          puVar11 = local_8;
        }
      }
      goto joined_r0x00a0adca;
    }
    if ((uint)puVar9[1] <= (uint)puVar5[1]) {
      if ((uint)puVar9[1] < (uint)puVar5[1]) goto joined_r0x00a0ae0c;
      uVar3 = *puVar10;
      uVar4 = puVar10[1];
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      *puVar9 = uVar3;
      puVar10 = puVar10 + 2;
      puVar9[1] = uVar4;
    }
    puVar9 = puVar9 + 2;
  } while( true );
}

/* ref: FUN_00a0af40 */
GEN_FRAME unsigned int F_00a0af40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0af40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a0ac30(param_1,param_2,param_3,0);
  return;
}

/* ref: FUN_00a0af60 */
GEN_FRAME unsigned int F_00a0af60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0af60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 - 8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      *puVar3 = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      puVar3[1] = param_1[1];
      F_00a0a780(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      puVar3 = puVar3 - 2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_00a0afd0 */
GEN_FRAME unsigned int F_00a0afd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0afd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a0af60(param_1,param_2,param_3);
  return;
}

/* ref: FUN_00a0aff0 */
GEN_FRAME unsigned int F_00a0aff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0aff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_00a0b082: ;
      if (1 < iVar1) {
        F_00a0ac30(iVar2,iVar4,param_4,0);
      }
      return;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_00a0a900(iVar2,iVar4,param_4,0,0);
        }
        F_00a0af60(iVar2,iVar4,param_4);
        return;
      }
      goto LAB_00a0b082;
    }
    F_00a0ad50(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_00a0aff0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00a0aff0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_00a0b0e0 */
GEN_FRAME unsigned int F_00a0b0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0b0e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00a0aff0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return;
}

/* ref: Client::System::Animation::IAnimationTreeLeafListener::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Animation::IAnimationTreeLeafListener::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0b130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: Client::System::Animation::IAnimationTreeLeafListener::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0b140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::System::Animation::IAnimationTreeLeafListener::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Animation::IAnimationTreeLeafListener::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Animation::IAnimationTreeLeafListener::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a0b170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a0b1d0 */
GEN_FRAME ushort GEN_THISCALL F_00a0b1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = *(ushort *)(in_ecx + 0x12) | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::Graphics::Scene::IDemihumanListener::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::IDemihumanListener::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::IDemihumanListener::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::IDemihumanListener::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a0b220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e1c10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a0b250 */
GEN_NOFRAME uint F_00a0b250(void)
{
  GEN_ENTER(0xa0b250u, 0u, 0u, 0u, 0u);
  uint uVar1;
  byte bVar2;
  
  uVar1 = F_00a0a270(REFG(undefined * PTR32, 0x13335ec));
  *(undefined4 *)&REFG(undefined, 0x14a24d0) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24d4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24d8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24dc) = 0;
  *(ushort *)&REFG(undefined, 0x14a24e2) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24e8) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24ec) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24f4) = 0;
  *(undefined4 *)&REFG(undefined, 0x14a24f8) = 0;
  if (uVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(uVar1 + 4);
  }
  *(undefined4 *)&REFG(undefined, 0x14a24e4) = CONCAT22(0xff00,(ushort)bVar2 << 8);
  *(undefined * PTR32 *)&REFG(undefined, 0x14a24f0) = REFG(undefined * PTR32, 0x13335ec);
  if ((uVar1 == 0) || (*(char *)(uVar1 + 6) != '\0')) {
    *(ushort *)&REFG(undefined, 0x14a24e2) = 0x40;
  }
  if ((uVar1 == 0) || (*(char *)(uVar1 + 7) != '\0')) {
    uVar1 = 0x80;
    *(ushort *)&REFG(undefined, 0x14a24e2) = *(ushort *)&REFG(undefined, 0x14a24e2) | 0x80;
  }
  *(undefined2 *)&REFG(undefined, 0x14a24e0) = 0;
  return uVar1;
}

/* ref: FUN_00a0b300 */
GEN_FRAME uint F_00a0b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a03fc0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a0b310 */
GEN_FRAME uint F_00a0b310(unsigned int gen_a0)
{
  GEN_ENTER(0xa0b310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00a04480(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a0b330 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00a0b330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return;
}

/* ref: Client::System::Animation::ChocoboWingController::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00a0b340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  return 0;
}

/* ref: FUN_00a0b350 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
    F_00bba6a0(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG,(int)this - 4);
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return;
}

/* ref: FUN_00a0b390 */
GEN_FRAME unsigned int GEN_THISCALL F_00a0b390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  if ((*(int *)((int)this + 0x10) != 1) && (iVar1 = *(int *)((int)this + 4), iVar1 != 0)) {
    uVar2 = F_00691f00(param_1 GEN_EDX_FWD,REFG(undefined * PTR32, 0x13335ec));
    if (uVar2 != 0) {
      this_00 = (undefined *)F_00bc15a0((undefined *)(iVar1 + 0x408) GEN_EDX_ARG,&REFG(undefined, 0x14a24d0),
                                     *(undefined4 *)((int)this + 4));
      *(undefined * PTR32 *)((int)this + 8) = this_00;
      if (this_00 != (undefined *)0x0) {
        F_00bba650(this_00 GEN_EDX_ARG,(int)this - 4);
        *(undefined4 *)((int)this + 0x10) = 1;
      }
    }
  }
  return;
}

/* ref: FUN_00a0b3f0 */
GEN_FRAME uint GEN_THISCALL F_00a0b3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0b3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10e1c10));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1c38));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10e1c24));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (param_2 != 0) {
    *(undefined4 * PTR32 *)(param_2 + 0x788) = (undefined4 *)((int)this + 4);
  }
  return (uint)this;
}

/* ref: FUN_00a0b440 */
GEN_NOFRAME uint GEN_THISCALL F_00a0b440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0b440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1c38));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10e1c24));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
    F_00bba6a0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,this);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 != 0) {
    *(undefined4 *)(uVar2 + 0x788) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[4])REFP(0x10e1c10));
  return uVar2;
}

/* ref: FUN_00a0b4a0 */
GEN_FRAME uint GEN_THISCALL F_00a0b4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b4a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(int *)(in_ecx + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x788))) = 0;
  }
  *(uint *)(in_ecx + 0x10) = param_2;
  *(int *)(param_2 + 0x788) = in_ecx + 4;
  return param_2;
}

/* ref: FUN_00a0b4d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a0b4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x788) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a0b510 */
GEN_FRAME uint GEN_THISCALL F_00a0b510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x788) = param_2;
  return param_2;
}

/* ref: FUN_00a0b520 */
GEN_NOFRAME uint GEN_THISCALL F_00a0b520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a0b530((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Animation::ChocoboWingController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a0b530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a0b440(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a0b580 */
GEN_NOFRAME uint GEN_THISCALL F_00a0b580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0b580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  int iVar2;
  
  if (*(uint *)(in_ecx + 0x78) != 0) {
    return *(uint *)(in_ecx + 0x78);
  }
  iVar2 = *(int *)(in_ecx + 0x6c);
  if (iVar2 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    iVar2 = *(int *)(in_ecx + 0x6c);
    if (iVar2 == 0) goto LAB_00a0b5b7;
  }
  uVar1 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(in_ecx + 0x78) = uVar1;
  F_00b595f0(uVar1);
LAB_00a0b5b7: ;
  return *(uint *)(in_ecx + 0x78);
}

/* ref: FUN_00a0b5c0 */
GEN_FRAME uint GEN_THISCALL F_00a0b5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a0b5d0 */
GEN_FRAME byte GEN_THISCALL F_00a0b5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bba6d0(param_1 GEN_EDX_FWD,*(undefined4 *)this);
  return bVar1;
}

/* ref: FUN_00a0b5f0 */
GEN_NOFRAME uint F_00a0b5f0(void)
{
  GEN_ENTER(0xa0b5f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a0a270(REFG(undefined * PTR32, 0x13336a8));
  if (uVar1 != 0) {
    *(undefined2 *)&REFG(undefined, 0x14a25cc) = 0;
    *(undefined2 *)&REFG(undefined, 0x14a25ce) = 0;
    *(undefined2 *)&REFG(undefined, 0x14a25d0) = 0;
    *(ushort *)&REFG(undefined, 0x14a25d2) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a25c0) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a25c4) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a25c8) = 0;
    REFG(undefined4, 0x14a25d7) = 0xff;
    *(undefined4 *)&REFG(undefined, 0x14a25d8) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a25dc) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a25e4) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a25e8) = 0;
    REFG(undefined4, 0x14a25d4) = 1;
    *(ushort *)&REFG(undefined1, 0x14a25d5) = (ushort)*(byte *)(uVar1 + 4);
    *(undefined * PTR32 *)&REFG(undefined, 0x14a25e0) = REFG(undefined * PTR32, 0x13336a8);
    if (*(char *)(uVar1 + 6) != '\0') {
      *(ushort *)&REFG(undefined, 0x14a25d2) = 0x40;
    }
    if (*(char *)(uVar1 + 7) != '\0') {
      uVar1 = 0x80;
      *(ushort *)&REFG(undefined, 0x14a25d2) = *(ushort *)&REFG(undefined, 0x14a25d2) | 0x80;
    }
  }
  return uVar1;
}

/* ref: FUN_00a0b6b0 */
GEN_FRAME uint F_00a0b6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0b6b0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    this = (undefined *)F_00bbafd0(param_1 GEN_EDX_ARG);
    if (this != (undefined *)0x0) {
      uVar1 = F_00691f00(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x13336a8));
      if (uVar1 != 0) {
        uVar1 = F_00a03f70();
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a0b6f0 */
GEN_FRAME uint F_00a0b6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0b6f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00a04420(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a0b710 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a0b710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0b710u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(char *)(in_ecx + 5) = *(char *)(in_ecx + 5) + '\x01';
  return;
}

/* ref: FUN_00a0b720 */
GEN_NOFRAME byte GEN_THISCALL F_00a0b720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0b720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4) & 1;
}

/* ref: FUN_00a0b730 */
GEN_FRAME byte GEN_THISCALL F_00a0b730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  
  if (param_2 == 2) {
    *(char *)(in_ecx + 8) = *(char *)(in_ecx + 8) + '\x01';
    *(char *)(in_ecx + 9) = *(char *)(in_ecx + 9) + '\x01';
    return 1;
  }
  pcVar1 = (char *)(param_2 + 8 + in_ecx);
  *pcVar1 = *pcVar1 + '\x01';
  return (byte)param_2;
}

/* ref: FUN_00a0b750 */
GEN_FRAME uint F_00a0b750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0b750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    return 0;
  }
  this = *(undefined * PTR32 *)(iVar1 + 0x70);
  if (this != (undefined *)0x0) goto LAB_00a0b78c;
  iVar3 = *(int *)(iVar1 + 0x6c);
  if (iVar3 == 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
    }
    iVar3 = *(int *)(iVar1 + 0x6c);
    if (iVar3 != 0) goto LAB_00a0b783;
  }
  else {
LAB_00a0b783: ;
    *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar3 + 4);
  }
  this = *(undefined * PTR32 *)(iVar1 + 0x70);
LAB_00a0b78c: ;
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = F_00bc3440(this GEN_EDX_ARG,4,param_2,0);
  }
  return uVar2;
}

/* ref: FUN_00a0b7b0 */
GEN_FRAME byte GEN_THISCALL F_00a0b7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0b7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte local_8;
  
  iVar1 = *(char *)((int)this + 5) - 1;
  if (0 < iVar1) {
    local_8 = (byte)iVar1;
    *(byte *)((int)this + 5) = local_8;
    return local_8;
  }
  *(undefined1 *)((int)this + 5) = 0;
  return 0xf4;
}

/* ref: FUN_00a0b7f0 */
GEN_FRAME uint GEN_THISCALL F_00a0b7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0b7f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = (*(int *)&gen_args[2]);
  iVar2 = (*(int *)&gen_args[1]);
  (*(int *)&gen_args[1]) = 0;
  puVar4 = &(*(int *)&gen_args[2]);
  if (iVar2 == 2) {
    iVar2 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) + (*(int *)&gen_args[2]);
    (*(int *)&gen_args[2]) = iVar2;
    if (iVar2 < 1) {
      puVar4 = &(*(int *)&gen_args[1]);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = *(undefined1 *)puVar4;
    iVar3 = *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) + iVar3;
    (*(int *)&gen_args[2]) = iVar3;
    (*(int *)&gen_args[1]) = 0;
    puVar4 = &(*(int *)&gen_args[2]);
    if (iVar3 < 1) {
      puVar4 = &(*(int *)&gen_args[1]);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = *(undefined1 *)puVar4;
    return (uint)puVar4;
  }
  iVar3 = *((char *)GEN_TOP((iVar2 + 6 + (int)(*(undefined * PTR32 *)&gen_args[0])))) + (*(int *)&gen_args[2]);
  (*(int *)&gen_args[2]) = iVar3;
  if (iVar3 < 1) {
    puVar4 = &(*(int *)&gen_args[1]);
  }
  uVar1 = *(undefined1 *)puVar4;
  *((undefined1 *)GEN_TOP((iVar2 + 6 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = uVar1;
  return CONCAT31((int3)((uint)iVar3 >> 8),uVar1);
}

/* ref: FUN_00a0b860 */
GEN_FRAME uint F_00a0b860(unsigned int gen_a0)
{
  GEN_ENTER(0xa0b860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  byte bVar1;
  undefined4 * puVar2;
  
  puVar2 = &REFG(undefined4, 0x14a2580);
  do {
    this = (undefined *)*puVar2;
    if (this != (undefined *)0x0) {
      bVar1 = F_00bba6d0(this GEN_EDX_ARG,param_1);
      if (bVar1 != 0) {
        return (uint)this;
      }
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14a25c0);
  return 0;
}

/* ref: FUN_00a0b8a0 */
GEN_FRAME uint F_00a0b8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0b8a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = &REFG(undefined4, 0x14a2500);
  do {
    this = (undefined *)*puVar2;
    if ((this != (undefined *)0x0) && (bVar1 = F_00bba6d0(this GEN_EDX_ARG,param_3), bVar1 != 0)) {
      if (param_2 <= (int)uVar3) {
        return uVar3;
      }
      *(undefined * PTR32 *)(param_1 + uVar3 * 4) = this;
      uVar3 = uVar3 + 1;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14a2580);
  return uVar3;
}

/* ref: FUN_00a0b8f0 */
GEN_NOFRAME uint GEN_THISCALL F_00a0b8f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0b8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1c64));
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 10) = 0xff;
  F_00c48350((undefined *)((int)this + 6),0,(int)this + (8 - ((int)this + 6)));
  F_00c48350((undefined *)((int)this + 8),0,(int)this + (10 - ((int)this + 8)));
  return (uint)this;
}

/* ref: FUN_00a0b930 */
GEN_FRAME uint GEN_THISCALL F_00a0b930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0b930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00a0b7f0(this GEN_EDX_FWD,param_3,1);
  return uVar1;
}

/* ref: FUN_00a0b950 */
GEN_FRAME uint GEN_THISCALL F_00a0b950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0b950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  if ((*(byte *)((int)this + 4) & 1) == 0) goto LAB_00a0b9a8;
  this_00 = *(undefined * PTR32 *)(param_2 + 0x78);
  if (this_00 == (undefined *)0x0) {
    iVar2 = *(int *)(param_2 + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        *(undefined4 *)(param_2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 4) + 4)));
      }
      iVar2 = *(int *)(param_2 + 0x6c);
      if (iVar2 != 0) goto LAB_00a0b986;
    }
    else {
LAB_00a0b986: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(param_2 + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    this_00 = *(undefined * PTR32 *)(param_2 + 0x78);
  }
  if (this_00 != (undefined *)0x0) {
    F_00bc5190(this_00 GEN_EDX_ARG,0,param_3);
  }
LAB_00a0b9a8: ;
  uVar3 = F_00a0b7f0(this GEN_EDX_ARG,param_3,0xffffffff);
  return uVar3;
}

/* ref: FUN_00a0b9e0 */
GEN_FRAME uint F_00a0b9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0b9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = F_00bc14b0(param_3 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x8)),8);
  uVar5 = 0;
  (*(uint *)(gen_frame + 0x48)) = uVar1;
  for (puVar2 = param_1; puVar2 != param_1 + param_2; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  iVar4 = 0;
  if (0 < (int)uVar1) {
    do {
      if (param_4 < 0) {
        uVar1 = F_00b63c30((undefined *)((undefined4 *)(gen_frame + 0x8))[(int)(iVar4)] GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)),8);
      }
      else {
        uVar1 = F_00b63c60((undefined *)((undefined4 *)(gen_frame + 0x8))[(int)(iVar4)] GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x28)),8,param_4);
      }
      iVar3 = 0;
      if (0 < (int)uVar1) {
        do {
          if ((int)uVar5 < param_2) {
            param_1[uVar5] = ((undefined4 *)(gen_frame + 0x28))[(int)(iVar3)];
            uVar5 = uVar5 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x48)));
  }
  return uVar5;
}

/* ref: FUN_00a0ba80 */
GEN_FRAME unsigned int F_00a0ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0ba80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  for (piVar1 = param_2; (piVar1 != param_2 + param_3 && (*piVar1 != param_1)); piVar1 = piVar1 + 1)
  {
  }
  if ((piVar1 == param_2 + param_3) && (iVar2 = 0, 0 < param_3)) {
    while (param_2[iVar2] != 0) {
      iVar2 = iVar2 + 1;
      if (param_3 <= iVar2) {
        return 0;
      }
    }
    param_2[iVar2] = param_1;
  }
  return 0;
}

/* ref: FUN_00a0bad0 */
GEN_FRAME unsigned int F_00a0bad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0bad0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  
  piVar1 = param_2 + param_3;
  piVar2 = param_2;
  if (param_2 != piVar1) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      *piVar2 = 0;
    }
  }
  return 0;
}

/* ref: FUN_00a0bb00 */
GEN_FRAME uint F_00a0bb00(unsigned int gen_a0)
{
  GEN_ENTER(0xa0bb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = &REFG(undefined4, 0x14a2580);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != (int *)&REFG(undefined, 0x14a25c0)) {
        return (uint)piVar1;
      }
      break;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&REFG(undefined, 0x14a25c0));
  uVar2 = 0;
  do {
    if ((&REFG(undefined4, 0x14a2580))[(int)(uVar2)] == 0) {
      (&REFG(undefined4, 0x14a2580))[(int)(uVar2)] = param_1;
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  return uVar2;
}

/* ref: FUN_00a0bb50 */
GEN_FRAME unsigned int F_00a0bb50(unsigned int gen_a0)
{
  GEN_ENTER(0xa0bb50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14a2580);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != (int *)&REFG(undefined, 0x14a25c0)) {
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&REFG(undefined, 0x14a25c0));
  return 0;
}

/* ref: FUN_00a0bb80 */
GEN_FRAME unsigned int F_00a0bb80(unsigned int gen_a0)
{
  GEN_ENTER(0xa0bb80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = &REFG(undefined4, 0x14a2500);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14a2580)) {
        return 0;
      }
      break;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14a2580));
  iVar2 = 0;
  do {
    if ((&REFG(undefined4, 0x14a2500))[(int)(iVar2)] == 0) {
      (&REFG(undefined4, 0x14a2500))[(int)(iVar2)] = param_1;
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return 0;
}

/* ref: FUN_00a0bbd0 */
GEN_FRAME unsigned int F_00a0bbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0bbd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14a2500);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14a2580)) {
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14a2580));
  return 0;
}

/* ref: FUN_00a0bc00 */
GEN_FRAME uint GEN_THISCALL F_00a0bc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0bc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * this_00;
  undefined * this_01;
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1c64));
  puVar2 = &REFG(undefined4, 0x14a2580);
  do {
    this_00 = (int *)*puVar2;
    if ((this_00 != (int *)0x0) && (bVar1 = F_00bba6d0(this_00 GEN_EDX_FWD,this), bVar1 != 0)) {
      if (this_00 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
        F_00bba6a0(this_00 GEN_EDX_ARG,this);
        puVar2 = &REFG(undefined4, 0x14a2580);
        goto LAB_00a0bc55;
      }
      break;
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x14a25c0);
  goto LAB_00a0bc72;
  while (puVar2 = puVar2 + 1, puVar2 != (undefined4 *)&REFG(undefined, 0x14a25c0)) {
LAB_00a0bc55: ;
    if ((int *)*puVar2 == this_00) {
      if (puVar2 != (undefined4 *)&REFG(undefined, 0x14a25c0)) {
        *puVar2 = 0;
      }
      break;
    }
  }
LAB_00a0bc72: ;
  puVar2 = (undefined4 *)F_00a0b8a0(((undefined4 *)(gen_frame + 0x8)),8,this);
  iVar3 = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar2;
  if (0 < (int)puVar2) {
    do {
      this_01 = (undefined *)((undefined4 *)(gen_frame + 0x8))[(int)(iVar3)];
      F_00bba6a0(this_01 GEN_EDX_ARG,this);
      puVar2 = &REFG(undefined4, 0x14a2500);
      do {
        if ((undefined *)*puVar2 == this_01) {
          if (puVar2 != &REFG(undefined4, 0x14a2580)) {
            *puVar2 = 0;
          }
          break;
        }
        puVar2 = puVar2 + 1;
      } while (puVar2 != &REFG(undefined4, 0x14a2580));
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  return (uint)puVar2;
}

/* ref: FUN_00a0bce0 */
GEN_FRAME byte GEN_THISCALL F_00a0bce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0bce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  code * pcVar2;
  undefined * this_00;
  byte bVar3;
  undefined4 * in_EAX = 0;
  int * this_01;
  undefined4 * puVar4;
  undefined * this_02;
  int iVar5;
  undefined4 * PTR32 * ppuVar6;
  int iVar7;
  int iVar8;
  
  if ((*(byte *)((int)this + 4) & 1) != 0) {
    this_01 = (int *)F_00a0b860(this);
    if (this_01 != (int *)0x0) {
      puVar4 = (undefined4 *)F_00a09fe0((uint)REFG(undefined1, 0x14a25d5),0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar4;
      pcVar2 = *(gen_code32 *)(*this_01 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(int)puVar4)));
      (*pcVar2)(this_01);
      F_00bba6a0(this_01 GEN_EDX_ARG,this);
      F_00a0bb50(this_01);
      *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0xfe;
    }
    in_EAX = (undefined4 *)F_00a0b8a0(((undefined4 *)(gen_frame + 0x4)),8,this);
    iVar8 = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = in_EAX;
    if (0 < (int)in_EAX) {
      do {
        this_00 = (undefined *)((undefined4 *)(gen_frame + 0x4))[(int)(iVar8)];
        F_00bba1b0(this_00 GEN_EDX_ARG);
        iVar5 = *(int *)((int)this_00 + 0x1c);
        if (iVar5 != 0) {
          this_02 = *(undefined * PTR32 *)(iVar5 + 0x70);
          if (this_02 == (undefined *)0x0) {
            iVar7 = *(int *)(iVar5 + 0x6c);
            if (iVar7 == 0) {
              if (*(int *)(iVar5 + 4) != 0) {
                *(undefined4 *)(iVar5 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 4) + 4)));
              }
              iVar7 = *(int *)(iVar5 + 0x6c);
              if (iVar7 != 0) goto LAB_00a0bd98;
            }
            else {
LAB_00a0bd98: ;
              *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(iVar7 + 4);
            }
            this_02 = *(undefined * PTR32 *)(iVar5 + 0x70);
          }
          if (this_02 != (undefined *)0x0) {
            F_00bc3440(this_02 GEN_EDX_ARG,4,0,0);
          }
        }
        F_00bba6a0(this_00 GEN_EDX_ARG,this);
        in_EAX = &REFG(undefined4, 0x14a2500);
        do {
          if ((undefined *)*in_EAX == this_00) {
            if (in_EAX != &REFG(undefined4, 0x14a2580)) {
              *in_EAX = 0;
            }
            break;
          }
          in_EAX = in_EAX + 1;
        } while (in_EAX != &REFG(undefined4, 0x14a2580));
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
    }
  }
  bVar3 = (byte)in_EAX;
  if (param_3 != (undefined *)0x0) {
    iVar8 = 0;
    do {
      if ('\0' < *(char *)((int)this + iVar8 + 6)) {
        F_00bc5190(param_3 GEN_EDX_ARG,0,iVar8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    iVar8 = 0;
    do {
      cVar1 = *(char *)((int)this + iVar8 + 8);
      if ('\0' < cVar1) {
        iVar5 = -(int)cVar1;
        if (iVar8 == 2) {
          puVar4 = ((undefined4 *)GEN_TOP((*(char *)((int)this + 6) + iVar5)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
          if ((int)puVar4 < 1) {
            ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
          }
          *(undefined1 *)((int)this + 6) = *(undefined1 *)ppuVar6;
          puVar4 = ((undefined4 *)GEN_TOP((*(char *)((int)this + 7) + iVar5)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
          if ((int)puVar4 < 1) {
            ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
          }
          *(undefined1 *)((int)this + 7) = *(undefined1 *)ppuVar6;
        }
        else {
          puVar4 = ((undefined4 *)GEN_TOP((*(char *)((int)this + iVar8 + 6) + iVar5)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
          if ((int)puVar4 < 1) {
            ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x28));
          }
          *(undefined1 *)((int)this + iVar8 + 6) = *(undefined1 *)ppuVar6;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
        *(undefined1 *)((int)this + iVar8 + 8) = 0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    bVar3 = *(byte *)((int)this + 10);
    if (-1 < (char)bVar3) {
      bVar3 = F_00bc4050(param_3 GEN_EDX_ARG,0,(int)(char)bVar3,1);
      *(undefined1 *)((int)this + 10) = 0xff;
    }
  }
  return bVar3;
}

/* ref: FUN_00a0beb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a0beb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0beb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  
  if ((*(byte *)((int)this + 4) & 1) != 0) {
    return;
  }
  iVar2 = param_3;
  if (param_3 != 0) goto LAB_00a0bf06;
  iVar2 = *(int *)(param_2 + 0x78);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_2 + 0x6c);
    if (iVar2 == 0) {
      if (*(int *)(param_2 + 4) != 0) {
        *(undefined4 *)(param_2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 4) + 4)));
      }
      iVar2 = *(int *)(param_2 + 0x6c);
      if (iVar2 != 0) goto LAB_00a0beed;
    }
    else {
LAB_00a0beed: ;
      uVar1 = *(undefined4 *)(iVar2 + 0x20);
      *(undefined4 *)(param_2 + 0x78) = uVar1;
      F_00b595f0(uVar1);
    }
    iVar2 = *(int *)(param_2 + 0x78);
  }
  if (iVar2 == 0) {
    return;
  }
LAB_00a0bf06: ;
  this_00 = (undefined *)F_00bc15a0(param_1 GEN_EDX_ARG,&REFG(undefined, 0x14a25c0),iVar2);
  if (this_00 != (undefined *)0x0) {
    F_00bba650(this_00 GEN_EDX_ARG,this);
    F_00a0bb00(this_00);
    *(byte *)((int)this + 4) = *(byte *)((int)this + 4) | 1;
  }
  return;
}

/* ref: Client::System::Animation::AutoShakeController::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00a0bf40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0bf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = &REFG(undefined4, 0x14a2580);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != (int *)&REFG(undefined, 0x14a25c0)) {
        piVar1 = &REFG(undefined4, 0x14a2580);
        do {
          if (*piVar1 == param_1) {
            if (piVar1 != (int *)&REFG(undefined, 0x14a25c0)) {
              *piVar1 = 0;
            }
            this[4] = (undefined1)((byte)this[4] & 0xfe);
            return 0;
          }
          piVar1 = piVar1 + 1;
        } while (piVar1 != (int *)&REFG(undefined, 0x14a25c0));
        this[4] = (undefined1)((byte)this[4] & 0xfe);
        return 0;
      }
      break;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&REFG(undefined, 0x14a25c0));
  piVar1 = &REFG(undefined4, 0x14a2500);
  do {
    if (*piVar1 == param_1) {
      if (piVar1 != &REFG(undefined4, 0x14a2580)) {
        *piVar1 = 0;
      }
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != &REFG(undefined4, 0x14a2580));
  return 0;
}

/* ref: FUN_00a0bfc0 */
GEN_FRAME byte GEN_THISCALL F_00a0bfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0bfc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if ((*(byte *)((int)this + 4) & 2) != 0) {
    bVar1 = *(byte *)((int)this + 4) & 0xfd;
    *(byte *)((int)this + 4) = bVar1;
    return bVar1;
  }
  bVar1 = F_00a0bce0(this GEN_EDX_FWD,param_1,0,param_2);
  return bVar1;
}

/* ref: FUN_00a0bff0 */
GEN_FRAME byte GEN_THISCALL F_00a0bff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0bff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 4);
  if ((bVar1 & 4) != 0) {
    if ((bVar1 & 2) != 0) {
      *(byte *)((int)this + 4) = bVar1 & 0xfd;
      *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0xfb;
      return bVar1 & 0xfd;
    }
    bVar1 = F_00a0bce0(this GEN_EDX_FWD,param_1,0,param_2);
    *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0xfb;
  }
  return bVar1;
}

/* ref: FUN_00a0c030 */
GEN_FRAME byte GEN_THISCALL F_00a0c030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0c030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  undefined * this_01;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((*(byte *)((int)this + 4) & 1) != 0) {
    return 0;
  }
  if (param_2 == (undefined *)0x0) {
    if (param_3 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0xffffffff;
      F_00a0beb0(this GEN_EDX_FWD,param_1,0,param_3);
    }
  }
  else {
    uVar2 = F_0054d950(param_2 GEN_EDX_ARG);
    uVar4 = *(undefined4 *)(uVar2 + 0x94);
    F_00a0beb0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,param_1,param_2,param_3);
  }
  uVar2 = F_00a0b9e0(((undefined4 *)(gen_frame + 0x8)),8,param_1,uVar4);
  if ((uVar2 != 0) && (iVar5 = 0, 0 < (int)uVar2)) {
    do {
      this_00 = (undefined *)((undefined4 *)(gen_frame + 0x8))[(int)(iVar5)];
      F_00bba650(this_00 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x28)));
      F_00bba180(this_00 GEN_EDX_ARG);
      iVar1 = *(int *)((int)this_00 + 0x1c);
      if (iVar1 != 0) {
        this_01 = *(undefined * PTR32 *)(iVar1 + 0x70);
        if (this_01 == (undefined *)0x0) {
          iVar3 = *(int *)(iVar1 + 0x6c);
          if (iVar3 == 0) {
            if (*(int *)(iVar1 + 4) != 0) {
              *(undefined4 *)(iVar1 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 4)));
            }
            iVar3 = *(int *)(iVar1 + 0x6c);
            if (iVar3 != 0) goto LAB_00a0c0e9;
          }
          else {
LAB_00a0c0e9: ;
            *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(iVar3 + 4);
          }
          this_01 = *(undefined * PTR32 *)(iVar1 + 0x70);
        }
        if (this_01 != (undefined *)0x0) {
          F_00bc3440(this_01 GEN_EDX_ARG,4,1,0);
        }
      }
      F_00a0bb80(this_00);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar2);
  }
  if (param_3 != (undefined *)0x0) goto LAB_00a0c165;
  if (param_2 == (undefined *)0x0) {
    return 1;
  }
  param_3 = *(undefined * PTR32 *)((int)param_2 + 0x78);
  if (param_3 == (undefined *)0x0) {
    iVar5 = *(int *)((int)param_2 + 0x6c);
    if (iVar5 == 0) {
      if (*(int *)((int)param_2 + 4) != 0) {
        *(undefined4 *)((int)param_2 + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)param_2 + 4) + 4)));
      }
      iVar5 = *(int *)((int)param_2 + 0x6c);
      if (iVar5 != 0) goto LAB_00a0c144;
    }
    else {
LAB_00a0c144: ;
      uVar4 = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)((int)param_2 + 0x78) = uVar4;
      F_00b595f0(uVar4);
    }
    param_3 = *(undefined * PTR32 *)((int)param_2 + 0x78);
  }
  if (param_3 == (undefined *)0x0) {
    return 1;
  }
LAB_00a0c165: ;
  iVar5 = 0;
  do {
    if ('\0' < *(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + iVar5 + 6)) {
      F_00bc5190(param_3 GEN_EDX_ARG,1,iVar5);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return 1;
}

/* ref: FUN_00a0c1a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00a0c1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0c1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (((*(byte *)((int)this + 4) & 2) != 0) && (*(char *)((int)this + 5) == '\0')) {
    F_00a0c030(this GEN_EDX_FWD,param_1,0,param_2);
    *(byte *)((int)this + 4) = *(byte *)((int)this + 4) & 0xfd;
  }
  return;
}

/* ref: FUN_00a0c1d0 */
GEN_FRAME uint GEN_THISCALL F_00a0c1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 uVar3;
  
  bVar1 = *(byte *)((int)this + 4);
  uVar3 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar3,bVar1);
  if ((bVar1 & 1) == 0) {
    if ('\0' < *(char *)((int)this + 5)) {
      uVar2 = CONCAT31(uVar3,bVar1) | 2;
      *(char *)((int)this + 4) = (char)uVar2;
      return uVar2;
    }
    bVar1 = F_00a0c030(this GEN_EDX_FWD,param_1,0,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a0c200 */
GEN_FRAME uint GEN_THISCALL F_00a0c200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  bVar1 = *(byte *)((int)this + 4);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) == 0) {
    *(byte *)((int)this + 4) = bVar1 | 4;
    bVar1 = F_00a0c030(this GEN_EDX_FWD,param_1,param_2,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a0c230 */
GEN_FRAME uint F_00a0c230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c230u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      this = *(undefined * PTR32 *)(param_1 + iVar2 * 4);
      if ((this != (undefined *)0x0) && (bVar1 = F_00bba6d0(this GEN_EDX_ARG,param_3), bVar1 != 0)) {
        return (uint)this;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00a0c270 */
GEN_FRAME uint F_00a0c270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa0c270u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (param_4 < 1) {
    return 0;
  }
  do {
    this = *(undefined * PTR32 *)(param_3 + iVar2 * 4);
    if ((this != (undefined *)0x0) && (bVar1 = F_00bba6d0(this GEN_EDX_ARG,param_5), bVar1 != 0)) {
      if (param_2 <= (int)uVar3) {
        return uVar3;
      }
      *(undefined * PTR32 *)(param_1 + uVar3 * 4) = this;
      uVar3 = uVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_4);
  return uVar3;
}

/* ref: FUN_00a0c2c0 */
GEN_FRAME uint F_00a0c2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0c2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a0c2d0 */
GEN_FRAME unsigned int F_00a0c2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c2d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a0c2f0 */
GEN_FRAME uint F_00a0c2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a0c300 */
GEN_FRAME unsigned int F_00a0c300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00a0c320 */
GEN_FRAME unsigned int F_00a0c320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c320u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a0c340 */
GEN_FRAME unsigned int F_00a0c340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c340u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a0c360 */
GEN_FRAME unsigned int F_00a0c360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00a0c380 */
GEN_FRAME unsigned int F_00a0c380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c380u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00a0c3a0 */
GEN_FRAME unsigned int F_00a0c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: Client::System::Animation::AutoShakeController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a0c3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a0bc00(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a0c3f0 */
GEN_FRAME uint F_00a0c3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0c3f0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    this = (undefined *)F_00bbafd0(param_1 GEN_EDX_ARG);
    if (this != (undefined *)0x0) {
      uVar1 = F_00691f00(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x13336e8));
      if (uVar1 != 0) {
        uVar1 = F_00a03f20();
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00a0c430 */
GEN_FRAME uint F_00a0c430(unsigned int gen_a0)
{
  GEN_ENTER(0xa0c430u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00a043c0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a0c450 */
GEN_FRAME uint GEN_THISCALL F_00a0c450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if ((char)param_2 == '\x01') {
    *(byte *)(in_ecx + 6) = *(byte *)(in_ecx + 6) | 1;
    return uVar1;
  }
  *(byte *)(in_ecx + 6) = *(byte *)(in_ecx + 6) & 0xfe;
  return uVar1;
}

/* ref: FUN_00a0c470 */
GEN_FRAME uint F_00a0c470(unsigned int gen_a0)
{
  GEN_ENTER(0xa0c470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 0x10) {
    REFG(int, 0x14a2668) = REFG(int, 0x14a2668) - 1;
    (&REFG(undefined4, 0x14a25f0))[(int)(param_1)] = 0;
  }
  return param_1;
}

/* ref: FUN_00a0c490 */
GEN_FRAME uint F_00a0c490(unsigned int gen_a0)
{
  GEN_ENTER(0xa0c490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 0x10) {
    return (&REFG(undefined4, 0x14a25f0))[(int)(param_1)];
  }
  return 0;
}

/* ref: FUN_00a0c4b0 */
GEN_NOFRAME uint F_00a0c4b0(void)
{
  GEN_ENTER(0xa0c4b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00a0a270(REFG(undefined * PTR32, 0x13336e8));
  if (uVar1 != 0) {
    *(undefined2 *)&REFG(undefined, 0x14a2648) = 0;
    *(undefined2 *)&REFG(undefined, 0x14a264a) = 0;
    *(undefined2 *)&REFG(undefined, 0x14a264c) = 1;
    *(undefined4 *)&REFG(undefined, 0x14a263c) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2640) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2644) = 0;
    *(undefined2 *)&REFG(undefined, 0x14a2652) = 0xff00;
    *(undefined4 *)&REFG(undefined, 0x14a2654) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2658) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2660) = 0;
    *(undefined4 *)&REFG(undefined, 0x14a2664) = 0;
    *(uint *)&REFG(undefined, 0x14a264e) = (uint)*(byte *)(uVar1 + 4) << 0x18;
    *(undefined * PTR32 *)&REFG(undefined, 0x14a265c) = REFG(undefined * PTR32, 0x13336e8);
    if (*(char *)(uVar1 + 6) != '\0') {
      *(uint *)&REFG(undefined, 0x14a264e) = CONCAT22(REFG(undefined4, 0x14a264e),0x40);
    }
    if (*(char *)(uVar1 + 7) != '\0') {
      uVar1 = 0x80;
      *(uint *)&REFG(undefined, 0x14a264e) = *(uint *)&REFG(undefined, 0x14a264e) | 0x80;
    }
  }
  *(undefined4 *)&REFG(undefined, 0x14a2630) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2630), REFG(float, 0x1087f04));
  *(undefined4 *)&REFG(undefined, 0x14a2634) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14a2634), REFG(float, 0x10e1c88));
  REFG(undefined4, 0x14a2638) = 10;
  return uVar1;
}

/* ref: FUN_00a0c590 */
GEN_FRAME uint GEN_THISCALL F_00a0c590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0c590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1c90));
  *(undefined2 *)((int)this + 4) = 0xff;
  *(undefined1 *)((int)this + 6) = 1;
  uVar1 = F_00c4f2dd();
  *(float *)((int)this + 8) =
       ((float)GEN_TOF((((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0)) *
               ((float10)*(float *)&REFG(undefined, 0x14a2634) - (float10)*(float *)&REFG(undefined, 0x14a2630)) +
              (float10)*(float *)&REFG(undefined, 0x14a2630))));
  return (uint)this;
}

/* ref: FUN_00a0c5e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a0c5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0c5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint uVar1;
  
  uVar1 = (uint)*(char *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1c90));
  if (uVar1 < 0x10) {
    this_00 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a25f0))[(int)(uVar1)]));
    if (this_00 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(this_00 GEN_EDX_ARG,this);
      uVar1 = (uint)*(char *)((int)this + 4);
      if (uVar1 < 0x10) {
        REFG(int, 0x14a2668) = REFG(int, 0x14a2668) - 1;
        (&REFG(undefined4, 0x14a25f0))[(int)(uVar1)] = 0;
      }
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1bf4));
  return uVar1;
}

/* ref: FUN_00a0c640 */
GEN_FRAME uint GEN_THISCALL F_00a0c640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa0c640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)*(char *)((int)this + 4);
  if ((uVar1 < 0x10) && (this_00 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a25f0))[(int)(uVar1)])), this_00 != (int *)0x0)) {
    uVar2 = F_00bba290(this_00 GEN_EDX_FWD);
    uVar1 = 0;
    if (uVar2 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xc))(this_00 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
      F_00bba6a0(this_00 GEN_EDX_ARG,this);
      if ((uint)(int)*(char *)((int)this + 4) < 0x10) {
        REFG(int, 0x14a2668) = REFG(int, 0x14a2668) - 1;
        (&REFG(undefined4, 0x14a25f0))[(int)(*(char *)((int)this + 4))] = 0;
      }
      *(undefined2 *)((int)this + 4) = 0xff;
      uVar1 = F_00c4f2dd();
      *(float *)((int)this + 8) =
           ((float)GEN_TOF((((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0)) *
                   ((float10)*(float *)&REFG(undefined, 0x14a2634) - (float10)*(float *)&REFG(undefined, 0x14a2630)) +
                  (float10)*(float *)&REFG(undefined, 0x14a2630))));
    }
  }
  return uVar1;
}

/* ref: Client::System::Animation::BlinkController::vf1 */
GEN_FRAME uint GEN_THISCALL F_00a0c6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((uint)(int)(char)this[4] < 0x10) {
    REFG(int, 0x14a2668) = REFG(int, 0x14a2668) - 1;
    (&REFG(undefined4, 0x14a25f0))[(int)((char)this[4])] = 0;
  }
  *(undefined2 *)(this + 4) = 0xff;
  uVar1 = F_00c4f2dd();
  *(float *)(this + 8) =
       ((float)GEN_TOF((((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0)) *
               ((float10)*(float *)&REFG(undefined, 0x14a2634) - (float10)*(float *)&REFG(undefined, 0x14a2630)) +
              (float10)*(float *)&REFG(undefined, 0x14a2630))));
  return uVar1;
}

/* ref: FUN_00a0c730 */
GEN_FRAME byte F_00a0c730(unsigned int gen_a0)
{
  GEN_ENTER(0xa0c730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = &REFG(undefined4, 0x14a25f0);
  do {
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 1;
  } while (piVar2 != (int *)&REFG(undefined, 0x14a2630));
  iVar1 = -1;
  if (piVar2 == (int *)&REFG(undefined, 0x14a2630)) {
    iVar1 = 0;
    while ((&REFG(undefined4, 0x14a25f0))[(int)(iVar1)] != 0) {
      iVar1 = iVar1 + 1;
      if (0xf < iVar1) {
        return 0xff;
      }
    }
    REFG(int, 0x14a2668) = REFG(int, 0x14a2668) + 1;
    (&REFG(undefined4, 0x14a25f0))[(int)(iVar1)] = param_1;
  }
  return (byte)iVar1;
}

/* ref: FUN_00a0c790 */
GEN_FRAME unsigned int GEN_THISCALL F_00a0c790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xa0c790u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  int * this;
  
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    if (*(float *)(param_1 + 8) <= 0.0) {
      if ((((REFG(int, 0x14a2668) < REFG(int, 0x14a2638)) && (param_3 != (undefined *)0x0)) &&
          (uVar2 = F_00bbafd0(param_3 GEN_EDX_FWD), uVar2 != 0)) &&
         ((*(char *)(uVar2 + 0x65) == '\x03' &&
          (this = (int *)F_00bc15a0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x14a263c),param_3), this != (int *)0x0)))) {
        bVar1 = F_00a0c730(this);
        *(byte *)(param_1 + 4) = bVar1;
        if ((char)bVar1 < '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*this + 0xc))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0));
        }
        else {
          F_00bba650(this GEN_EDX_ARG,param_1);
          *(undefined1 *)(param_1 + 5) = 1;
        }
      }
      uVar2 = F_00c4f2dd();
      *(float *)(param_1 + 8) =
           ((float)GEN_TOF((((float10)(int)uVar2 / (float10)*(double *)&REFG(undefined, 0x10920e0)) *
                   ((float10)*(float *)&REFG(undefined, 0x14a2634) - (float10)*(float *)&REFG(undefined, 0x14a2630)) +
                  (float10)*(float *)&REFG(undefined, 0x14a2630))));
      return;
    }
    *(float *)(param_1 + 8) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 8) -
                (float10)param_4 / (float10)*(double *)&REFG(undefined, 0x1088070))));
  }
  return;
}

/* ref: FUN_00a0c870 */
GEN_FRAME uint GEN_THISCALL F_00a0c870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xa0c870u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1333724))[(int)(*(char *)(param_1 + 5))])))
                    (param_1,param_2,param_3,(undefined4)gen_fl2bits(param_4));
  return uVar1;
}

/* ref: FUN_00a0c8a0 */
GEN_FRAME uint F_00a0c8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c8a0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  piVar1 = param_2;
  if (*param_1 <= *param_2) {
    piVar1 = param_1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00a0c8c0 */
GEN_FRAME unsigned int F_00a0c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: Client::System::Animation::BlinkController::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a0c8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a0c5e0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a0c930 */
GEN_FRAME float10 F_00a0c930(float gen_a0)
{
  GEN_ENTER(0xa0c930u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00a0c950 */
GEN_FRAME uint F_00a0c950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c950u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_0042b630(in_esi GEN_EDX_ARG);
  F_0042d080(in_esi GEN_EDX_ARG,param_2);
  return (uint)in_esi;
}

/* ref: FUN_00a0c970 */
GEN_FRAME uint F_00a0c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0c970u, gen_a0, gen_a1, 0u, 0u);
  BSTR in_esi = (BSTR)gen_a0;
  undefined * in_edi = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20010];
  uint uVar1;
  UINT cchWideChar;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  cchWideChar = gen_imp_SysStringLen(in_esi);
  uVar2 = gen_imp_WideCharToMultiByte(0,0,in_esi,cchWideChar,((CHAR *)(gen_frame + 0x10008)),0xfffe,(LPCSTR)0x0,(LPBOOL)0x0);
  if ((uVar2 == 0) || (0xfffe < uVar2)) {
    ((CHAR *)(gen_frame + 0x10008))[0] = '\0';
  }
  else {
    ((CHAR *)(gen_frame + 0x10008))[(int)(uVar2)] = '\0';
  }
  F_0042b630(in_edi GEN_EDX_ARG);
  F_0042d080(in_edi GEN_EDX_ARG,((CHAR *)(gen_frame + 0x10008)));
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return (uint)in_edi;
}

/* ref: FUN_00a0c9f0 */
GEN_FRAME byte F_00a0c9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa0c9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  longlong lVar1;
  LPCSTR pCVar2;
  LPWSTR pWVar3;
  int iVar4;
  LPWSTR pWVar5;
  int iVar6;
  
  iVar6 = 0;
  pWVar5 = (LPWSTR)0x0;
  iVar4 = -1;
  pCVar2 = (LPCSTR)F_0042a990(param_1 GEN_EDX_ARG);
  iVar4 = gen_imp_MultiByteToWideChar(0xfde9,0,pCVar2,iVar4,pWVar5,iVar6);
  lVar1 = (ulonglong)(iVar4 + 1) * 2;
  pWVar3 = (LPWSTR)F_00406a50(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  iVar6 = -1;
  pWVar5 = pWVar3;
  pCVar2 = (LPCSTR)F_0042a990(param_1 GEN_EDX_ARG);
  gen_imp_MultiByteToWideChar(0xfde9,0,pCVar2,iVar6,pWVar5,iVar4);
  iVar4 = gen_imp_WideCharToMultiByte(0,0,pWVar3,0xffffffff,0,0,0,0);
  *param_2 = iVar4;
  if (param_3 == 0) {
    F_00406b30(pWVar3);
    return *param_2 != 0;
  }
  iVar4 = gen_imp_WideCharToMultiByte(0,0,pWVar3,0xffffffff,param_3,iVar4,0,0);
  *param_2 = iVar4;
  F_00406b30(pWVar3);
  return *param_2 != 0;
}

/* ref: FUN_00a0cab0 */
GEN_FRAME uint GEN_STDCALL F_00a0cab0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0cab0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,"SYSTEM_UNKNOWN",REFG(undefined4, 0x108cc50));
  ((char *)(gen_frame + 0x78))[0] = '\0';
  F_00c48350(((char *)(gen_frame + 0x78)) + 1,0,0x3f);
  (*(int *)(gen_frame + 0xc)) = -0x7ffffffe;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x10)) = 3;
  do {
    if ((*(int *)(gen_frame + 0xc)) == 0) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_basic_info(0)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 1) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Version_info(1)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 2) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_cache_tlb_info(2)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 3) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_serial_info(3)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 4) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Deterministic_Cache_Parameters_info(4)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 5) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_MONITOR_MWAIT_Features_info(5)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 6) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Thermal_Power_Management_info(6)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 7) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Extended_Feature_Enumeration_info(7)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 9) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Direct_Cache_Access_info(9)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 10) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Architectural_Performance_Monitoring_info(10)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 0xb) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Extended_Topology_info(0xb)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 0xd) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Processor_Extended_States_info(0xd)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == 0xf) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_Quality_of_Service_info(0xf)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == -0x7ffffffe) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_brand_part1_info(0x80000002)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == -0x7ffffffd) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_brand_part2_info(0x80000003)));
    }
    else if ((*(int *)(gen_frame + 0xc)) == -0x7ffffffc) {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid_brand_part3_info(0x80000004)));
    }
    else {
      puVar2 = ((undefined4 *)GEN_TOP(cpuid((*(int *)(gen_frame + 0xc)))));
    }
    uVar6 = puVar2[1];
    uVar5 = puVar2[2];
    uVar4 = puVar2[3];
    ((undefined4 *)(gen_frame + 0x68))[0] = *puVar2;
    ((undefined4 *)(gen_frame + 0x68))[1] = uVar6;
    ((undefined4 *)(gen_frame + 0x68))[2] = uVar4;
    ((undefined4 *)(gen_frame + 0x68))[3] = uVar5;
    uVar7 = 0;
    do {
      uVar4 = ((undefined4 *)(gen_frame + 0x68))[(int)(uVar7)];
      ((char *)(gen_frame + 0x78))[(int)((*(int *)(gen_frame + 0x8)) + 1)] = (char)((uint)uVar4 >> 8);
      ((char *)(gen_frame + 0x78))[(int)((*(int *)(gen_frame + 0x8)))] = (char)uVar4;
      ((char *)(gen_frame + 0x78))[(int)((*(int *)(gen_frame + 0x8)) + 2)] = (char)((uint)uVar4 >> 0x10);
      ((char *)(gen_frame + 0x78))[(int)((*(int *)(gen_frame + 0x8)) + 3)] = (char)((uint)uVar4 >> 0x18);
      uVar7 = uVar7 + 1;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 4;
    } while (uVar7 < 4);
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) - 1;
  } while ((*(int *)(gen_frame + 0x10)) != 0);
  pcVar3 = ((char *)(gen_frame + 0x78));
  uVar7 = 0;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != ((char *)(gen_frame + 0x78)) + 1) {
    do {
      if (((char *)(gen_frame + 0x78))[(int)(uVar7)] != ' ') break;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)pcVar3 - (int)(((char *)(gen_frame + 0x78)) + 1)));
  }
  F_0042b630(param_1 GEN_EDX_ARG);
  F_0042d080(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x78)) + uVar7);
  F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a0cbe0 */
GEN_FRAME uint GEN_STDCALL F_00a0cbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0cbe0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  char cVar1;
  BOOL BVar2;
  HMODULE pHVar3;
  FARPROC pFVar4;
  int iVar5;
  CHAR * pCVar6;
  undefined * this;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = param_1;
  F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,"SYSTEM_UNKNOWN",REFG(undefined4, 0x108cc50));
  (*(DWORD *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_00c48350(&(*(_OSVERSIONINFOA *)(gen_frame + 0x38)),0,0x9c);
  (*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwOSVersionInfoSize = 0x9c;
  BVar2 = gen_imp_GetVersionExA(&(*(_OSVERSIONINFOA *)(gen_frame + 0x38)));
  if (BVar2 == 0) {
    F_0042cbc0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
    F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac) GEN_EDX_ARG);
    return (uint)param_1;
  }
  pcVar7 = "GetNativeSystemInfo";
  pHVar3 = gen_imp_GetModuleHandleA("kernel32.dll");
  pFVar4 = gen_imp_GetProcAddress(pHVar3,pcVar7);
  if (pFVar4 == (FARPROC)0x0) {
    gen_imp_GetSystemInfo((GEN_LPANY)&(*(undefined (*)[4])((char *)&((*(undefined4 *)(gen_frame + 0xc))))));
  }
  else {
    ((code *)pFVar4)(&(*(undefined4 *)(gen_frame + 0xc)));
  }
  this = param_1;
  if (((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwPlatformId != 2) || ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion < 5)) goto LAB_00a0d0b2;
  F_0042e430(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,"Microsoft ");
  if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion == 6) {
    if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMinorVersion == 0) {
      if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 2)) == '\x01') {
        pcVar7 = "Windows Vista ";
      }
      else {
        pcVar7 = "Windows Server 2008 ";
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
    }
    if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMinorVersion == 1) {
      if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 2)) == '\x01') {
        pcVar7 = "Windows 7 ";
      }
      else {
        pcVar7 = "Windows Server 2008 R2 ";
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
    }
    pcVar7 = "GetProductInfo";
    pHVar3 = gen_imp_GetModuleHandleA("kernel32.dll");
    pFVar4 = gen_imp_GetProcAddress(pHVar3,pcVar7);
    ((code *)pFVar4)((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion,(*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMinorVersion,0,0,&(*(undefined4 *)(gen_frame + 0x34)));
    switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0x34)))) {
    case 1: ;
      pcVar7 = "Ultimate Edition";
      break;
    case 2: ;
      pcVar7 = "Home Basic Edition";
      break;
    case 3: ;
      pcVar7 = "Home Premium Edition";
      break;
    case 4: ;
      pcVar7 = "Enterprise Edition";
      break;
    default: ;
      goto switchD_00a0cda5_caseD_5;
    case 6: ;
      pcVar7 = "Business Edition";
      break;
    case 7: ;
      pcVar7 = "Standard Edition";
      break;
    case 8: ;
      pcVar7 = "Datacenter Edition";
      break;
    case 9: ;
      pcVar7 = "Small Business Server";
      break;
    case 10: ;
      pcVar7 = "Enterprise Edition";
      break;
    case 0xb: ;
      pcVar7 = "Starter Edition";
      break;
    case 0xc: ;
      pcVar7 = "Datacenter Edition (core installation)";
      break;
    case 0xd: ;
      pcVar7 = "Standard Edition (core installation)";
      break;
    case 0xe: ;
      pcVar7 = "Enterprise Edition (core installation)";
      break;
    case 0xf: ;
      pcVar7 = "Enterprise Edition for Itanium-based Systems";
      break;
    case 0x11: ;
      pcVar7 = "Web Server Edition";
      break;
    case 0x12: ;
      pcVar7 = "Cluster Server Edition";
      break;
    case 0x19: ;
      pcVar7 = "Small Business Server Premium Edition";
    }
    F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
  }
switchD_00a0cda5_caseD_5: ;
  if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion == 5) {
    if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMinorVersion == 2) {
      iVar5 = gen_imp_GetSystemMetrics(0x59);
      if (iVar5 == 0) {
        if ((short)(*(uint *)(gen_frame + 0xd0)) == 0x2000) {
          pcVar7 = "Windows Storage Server 2003 ";
        }
        else if ((short)(*(uint *)(gen_frame + 0xd0)) == -0x8000) {
          pcVar7 = "Windows Home Server ";
        }
        else if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 2)) == '\x01') && ((*(WORD *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) == 9)) {
          pcVar7 = "Windows XP Professional x64 Edition ";
        }
        else {
          pcVar7 = "Windows Server 2003 ";
        }
      }
      else {
        pcVar7 = "Windows Server 2003 R2 ";
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
      if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 2)) != '\x01') {
        if ((*(WORD *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) == 6) {
          if ((char)(*(uint *)(gen_frame + 0xd0)) < '\0') {
            pcVar7 = "Datacenter Edition for Itanium-based Systems";
          }
          else {
            if (((*(uint *)(gen_frame + 0xd0)) & 2) == 0) goto LAB_00a0cf59;
            pcVar7 = "Enterprise Edition for Itanium-based Systems";
          }
        }
        else if ((*(WORD *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) == 9) {
          if ((char)(*(uint *)(gen_frame + 0xd0)) < '\0') {
            pcVar7 = "Datacenter x64 Edition";
          }
          else if (((*(uint *)(gen_frame + 0xd0)) & 2) == 0) {
            pcVar7 = "Standard x64 Edition";
          }
          else {
            pcVar7 = "Enterprise x64 Edition";
          }
        }
        else if (((*(uint *)(gen_frame + 0xd0)) & 0x4000) == 0) {
          if ((char)(*(uint *)(gen_frame + 0xd0)) < '\0') {
            pcVar7 = "Datacenter Edition";
          }
          else if (((*(uint *)(gen_frame + 0xd0)) & 2) == 0) {
            if (((*(uint *)(gen_frame + 0xd0)) & 0x400) == 0) {
              pcVar7 = "Standard Edition";
            }
            else {
              pcVar7 = "Web Edition";
            }
          }
          else {
            pcVar7 = "Enterprise Edition";
          }
        }
        else {
          pcVar7 = "Compute Cluster Edition";
        }
        F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
      }
LAB_00a0cf59: ;
      if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion != 5) goto LAB_00a0cffc;
    }
    if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMinorVersion == 1) {
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,"Windows XP ");
      if (((*(uint *)(gen_frame + 0xd0)) & 0x200) == 0) {
        pcVar7 = "Professional";
      }
      else {
        pcVar7 = "Home Edition";
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
      if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion != 5) goto LAB_00a0cffc;
    }
    if ((*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMinorVersion == 0) {
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,"Windows 2000 ");
      if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xd0)) + 2)) == '\x01') {
        pcVar7 = "Professional";
      }
      else if ((char)(*(uint *)(gen_frame + 0xd0)) < '\0') {
        pcVar7 = "Datacenter Server";
      }
      else if (((*(uint *)(gen_frame + 0xd0)) & 2) == 0) {
        pcVar7 = "Server";
      }
      else {
        pcVar7 = "Advanced Server";
      }
      F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
    }
  }
LAB_00a0cffc: ;
  pCVar6 = (*(_OSVERSIONINFOA *)(gen_frame + 0x38)).szCSDVersion;
  do {
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  if (pCVar6 != (*(_OSVERSIONINFOA *)(gen_frame + 0x38)).szCSDVersion + 1) {
    F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,&REFG(undefined, 0x10e3274));
    F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,(*(_OSVERSIONINFOA *)(gen_frame + 0x38)).szCSDVersion);
  }
  if (5 < (*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwMajorVersion) {
    if ((*(WORD *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) == 9) {
      pcVar7 = " 64bit";
    }
    else {
      if ((*(WORD *)((char *)&((*(undefined4 *)(gen_frame + 0xc))))) != 0) goto LAB_00a0d063;
      pcVar7 = " 32bit";
    }
    F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,pcVar7);
  }
LAB_00a0d063: ;
  (*(undefined1 *)(gen_frame + 0x128)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x129)),0,0x7f);
  F_00c472af(&(*(undefined1 *)(gen_frame + 0x128)),0x80," (build %d)",(*(_OSVERSIONINFOA *)(gen_frame + 0x38)).dwBuildNumber);
  F_0042e370(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x128)));
  this = (*(undefined * PTR32 *)(gen_frame + 0x30));
LAB_00a0d0b2: ;
  F_0042cbc0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xd4)));
  F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00a0d150 */
GEN_FRAME uint GEN_STDCALL F_00a0d150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0d150u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char * _Format;
  double dVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(DWORD *)((char *)((undefined *)(gen_frame + 0x4)))) = 0x40;
  F_00c48350(&(*(DWORD *)(((char *)((undefined *)(gen_frame + 0x4)) + 4))),0,0x3c);
  gen_imp_GlobalMemoryStatusEx(((undefined *)(gen_frame + 0x4)));
  (*(char *)(gen_frame + 0x44)) = '\0';
  F_00c48350(((undefined1 *)(gen_frame + 0x45)),0,99);
  if (param_2 == 0) {
    dVar1 = ((double)GEN_TOD(((float10)*(double *)&REFG(undefined, 0x10ac178) *
                    ((-(float10)(longlong)
                                (((ulonglong)(*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 4)))) & 0x80000000) << 0x20) +
                     ((float10)GEN_TOD((CONCAT44((*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 4)))),(*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 8))) + 0))))) &
                              0x7fffffffffffffff)))) * (float10)*(double *)&REFG(undefined, 0x10ac178)))));
    _Format = "%.3lfMB";
  }
  else if (param_2 == 1) {
    dVar1 = ((double)GEN_TOD(((float10)*(double *)&REFG(undefined, 0x10ac178) *
                    ((-(float10)(longlong)
                                (((ulonglong)(*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 40))) + 4)))) & 0x80000000) << 0x20) +
                     ((float10)GEN_TOD((CONCAT44((*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 40))) + 4)))),
                                        (*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 40))) + 0))))) & 0x7fffffffffffffff)))) *
                    (float10)*(double *)&REFG(undefined, 0x10ac178)))));
    _Format = "%.3lfMB";
  }
  else {
    if (param_2 != 2) goto LAB_00a0d2cb;
    dVar1 = ((double)GEN_TOD(((float10)*(double *)&REFG(undefined, 0x10ac178) *
                    ((-(float10)(longlong)
                                (((ulonglong)(*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 24))) + 4)))) & 0x80000000) << 0x20)
                     + ((float10)GEN_TOD((CONCAT44((*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 24))) + 4)))),
                                          (*((undefined4 *)GEN_TOP(((char *)&(*(DWORDLONG *)(((char *)((undefined *)(gen_frame + 0x4)) + 24))) + 0))))) & 0x7fffffffffffffff)))) *
                    (float10)*(double *)&REFG(undefined, 0x10ac178)))));
    _Format = "%.3lfMB";
  }
  F_00c472af(&(*(char *)(gen_frame + 0x44)),100,_Format,GEN_LO32((undefined8)gen_d2bits(dVar1)),GEN_HI32((undefined8)gen_d2bits(dVar1)));
LAB_00a0d2cb: ;
  F_0042cc20(param_1 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x44)),REFG(undefined4, 0x108cc50));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00a0d3b0 */
GEN_FRAME uint F_00a0d3b0(void)
{
  GEN_ENTER(0xa0d3b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x620];
  bool bVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  int iVar8;
  undefined * this;
  
  (*(uint *)(gen_frame + 0x618)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x61c);
  hModule = gen_imp_LoadLibraryA("d3d9.dll");
  uVar5 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar3 = gen_imp_GetProcAddress(hModule,"Direct3DCreate9");
    if (pFVar3 != (FARPROC)0x0) {
      piVar4 = ((int *)GEN_TOP(((code *)pFVar3)(0x20)));
      if (piVar4 != (int *)0x0) {
        (*(uint *)(gen_frame + 0x8)) = 0;
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
        if (uVar5 != 0) {
          do {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),0,((undefined1 *)(gen_frame + 0x10)));
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x38))(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),1,((undefined1 *)(gen_frame + 0x45c)));
            this = REFG(void * PTR32, 0x14a28e4);
            if (REFG(void * PTR32, 0x14a28e4) != REFG(void * PTR32, 0x14a28e8)) {
              do {
                bVar2 = F_0042b6a0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x410)));
                if (bVar2 != 0) {
                  F_00c472af(((undefined1 *)(gen_frame + 0x5b4)),100,"%u.%u",(*(uint *)(gen_frame + 0x520)) >> 8 & 0xff,(*(uint *)(gen_frame + 0x520)) & 0xff);
                  F_0042e430((undefined *)((int)this + 0x4ec) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5b4)));
                  F_00c472af(((undefined1 *)(gen_frame + 0x5b4)),100,"%u.%u",(*(uint *)(gen_frame + 0x528)) >> 8 & 0xff,(*(uint *)(gen_frame + 0x528)) & 0xff);
                  F_0042e430((undefined *)((int)this + 0x498) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5b4)));
                  ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x58c)));
                  iVar6 = 0x15;
                  iVar8 = 0;
                  bVar1 = false;
                  (*(undefined4 *)(gen_frame + 0x59c)) = 0x15;
                  ((int *)(gen_frame + 0x5a0))[0] = 0x74;
                  ((int *)(gen_frame + 0x5a0))[1] = 0x71;
                  ((int *)(gen_frame + 0x5a0))[2] = 0x72;
                  ((int *)(gen_frame + 0x5a0))[3] = 0x6f;
                  ((int *)(gen_frame + 0x5a0))[4] = 0;
                  do {
                    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))
                                      (piVar4 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)),1,(*(undefined4 *)(gen_frame + 0x598)),0x100000,3,iVar6);
                    if (-1 < (int)uVar5) {
                      bVar1 = true;
                    }
                    iVar6 = ((int *)(gen_frame + 0x5a0))[(int)(iVar8)];
                    iVar8 = iVar8 + 1;
                  } while (iVar6 != 0);
                  pcVar7 = "SYSTEM_SUPPORT";
                  if (!bVar1) {
                    pcVar7 = "SYSTEM_NO_SUPPORT";
                  }
                  F_0042e430((undefined *)((int)this + 0x540) GEN_EDX_ARG,pcVar7);
                }
                this = (undefined *)((int)this + 0x594);
              } while (this != REFG(void * PTR32, 0x14a28e8));
            }
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
          } while ((*(uint *)(gen_frame + 0x8)) < uVar5);
        }
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
    }
    uVar5 = gen_imp_FreeLibrary(hModule);
  }
  F_00c47745((*(uint *)(gen_frame + 0x618)) ^ (uint)(uint)(gen_frame + 0x61c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00a0d5d0 */
GEN_FRAME uint F_00a0d5d0(void)
{
  GEN_ENTER(0xa0d5d0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x250];
  double dVar1;
  byte bVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  uint uVar4;
  int iVar5;
  undefined * this;
  int iVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  hModule = gen_imp_LoadLibraryA("dxgi.dll");
  uVar4 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar3 = gen_imp_GetProcAddress(hModule,"CreateDXGIFactory");
    ((code *)pFVar3)(&REFG(undefined, 0x10e3750),&(*(int * PTR32 *)(gen_frame + 0x4)));
    (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
    iVar5 = 0;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0xc)));
    while (-1 < (int)uVar4) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      iVar5 = iVar5 + 1;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,&(*(int * PTR32 *)(gen_frame + 0x8)));
      if (-1 < (int)uVar4) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          (*(undefined2 *)(gen_frame + 0x188)) = 0x5c;
          F_00c48350(((undefined1 *)(gen_frame + 0x18a)),0,0x3e);
          (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
          (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
          (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
          (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x188)));
          if ((-1 < (int)uVar4) && (this = REFG(void * PTR32, 0x14a28e4), REFG(void * PTR32, 0x14a28e4) != REFG(void * PTR32, 0x14a28e8))) {
            do {
              F_0042e170(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x188)));
              bVar2 = F_0042b660(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
              F_0042c880(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG);
              if (bVar2 != 0) {
                (*(undefined2 *)(gen_frame + 0x64)) = 0x124;
                F_00c48350(((undefined1 *)(gen_frame + 0x66)),0,0xfe);
                (*(undefined4 *)(gen_frame + 0x164)) = 0;
                (*(undefined4 *)(gen_frame + 0x168)) = 0;
                (*(undefined4 *)(gen_frame + 0x16c)) = 0;
                (*(undefined4 *)(gen_frame + 0x170)) = 0;
                (*(int *)(gen_frame + 0x174)) = 0;
                (*(undefined4 *)(gen_frame + 0x178)) = 0;
                (*(int *)(gen_frame + 0x17c)) = 0;
                (*(undefined4 *)(gen_frame + 0x180)) = 0;
                (*(undefined4 *)(gen_frame + 0x184)) = 0;
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x20))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x64)));
                if (-1 < (int)uVar4) {
                  fVar7 = (float10)(*(int *)(gen_frame + 0x174));
                  if ((*(int *)(gen_frame + 0x174)) < 0) {
                    fVar7 = fVar7 + (float10)*(double *)&REFG(double, 0x10b8de8);
                  }
                  dVar1 = ((double)GEN_TOD(((float10)*(double *)&REFG(undefined, 0x10ac178) *
                                  (fVar7 * (float10)*(double *)&REFG(undefined, 0x10ac178)))));
                  F_00c472af(((undefined1 *)(gen_frame + 0x1e4)),100,"%.3lf MB",(int)(ulonglong)gen_d2bits(dVar1),
                             (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
                  F_0042e430((undefined *)((int)this + 0x1f8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1e4)));
                  fVar7 = (float10)(*(int *)(gen_frame + 0x17c));
                  if ((*(int *)(gen_frame + 0x17c)) < 0) {
                    fVar7 = fVar7 + (float10)*(double *)&REFG(double, 0x10b8de8);
                  }
                  dVar1 = ((double)GEN_TOD(((float10)*(double *)&REFG(undefined, 0x10ac178) *
                                  (fVar7 * (float10)*(double *)&REFG(undefined, 0x10ac178)))));
                  F_00c472af(((undefined1 *)(gen_frame + 0x1e4)),100,"%.3lf MB",(int)(ulonglong)gen_d2bits(dVar1),
                             (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
                  F_0042e430((undefined *)((int)this + 0x24c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1e4)));
                }
              }
              this = (undefined *)((int)this + 0x594);
            } while (this != REFG(void * PTR32, 0x14a28e8));
          }
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
          uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar6,&(*(int * PTR32 *)(gen_frame + 0x8)));
        } while (-1 < (int)uVar4);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 8))((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,iVar5,&(*(int * PTR32 *)(gen_frame + 0xc)));
    }
    uVar4 = gen_imp_FreeLibrary(hModule);
  }
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00a0d8c0 */
GEN_FRAME uint GEN_STDCALL F_00a0d8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa0d8c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * pvVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_1;
  gen_imp_GetSystemInfo(&(*(_SYSTEM_INFO *)(gen_frame + 0x0)));
  iVar6 = 0;
  (*(DWORD *)(gen_frame + 0x3c)) = (*(_SYSTEM_INFO *)(gen_frame + 0x0)).dwNumberOfProcessors;
  if ((*(_SYSTEM_INFO *)(gen_frame + 0x0)).dwNumberOfProcessors == 0) {
    (*(DWORD *)(gen_frame + 0x3c)) = 1;
  }
  iVar5 = 0;
  (*(int *)(gen_frame + 0x40)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  hModule = gen_imp_GetModuleHandleA("kernel32");
  pFVar2 = gen_imp_GetProcAddress(hModule,"GetLogicalProcessorInformation");
  if (pFVar2 != (FARPROC)0x0) {
    (*(uint *)(gen_frame + 0x38)) = 0;
    ((code *)pFVar2)(0,&(*(uint *)(gen_frame + 0x38)));
    if (0x17 < (*(uint *)(gen_frame + 0x38))) {
      F_00a19070(&(*(int *)(gen_frame + 0x24)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)) / 0x18);
      iVar5 = (*(int *)(gen_frame + 0x24));
      uVar3 = ((code *)pFVar2)((*(int *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x38)));
      iVar6 = (*(int *)(gen_frame + 0x2c));
      if ((uVar3 != 0) && (iVar4 = iVar5, iVar5 != (*(int *)(gen_frame + 0x28)))) {
        do {
          if (*(int *)(iVar4 + 4) == 0) {
            (*(int *)(gen_frame + 0x40)) = (*(int *)(gen_frame + 0x40)) + 1;
          }
          iVar4 = iVar4 + 0x18;
        } while (iVar4 != (*(int *)(gen_frame + 0x28)));
        if ((*(int *)(gen_frame + 0x40)) != 0) {
          F_00c472af(((undefined1 *)(gen_frame + 0x44)),100,"%s %u  %s %u","SYSTEM_CORE_LOGIC",(*(DWORD *)(gen_frame + 0x3c)),"SYSTEM_CORE_PHYSICS",
                     (*(int *)(gen_frame + 0x40)));
          iVar6 = (*(int *)(gen_frame + 0x2c));
          goto LAB_00a0d9e1;
        }
      }
    }
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x44)),100,&REFG(undefined, 0x10e3320),"SYSTEM_CORE_LOGIC",(*(DWORD *)(gen_frame + 0x3c)),"SYSTEM_CORE_PHYSICS");
LAB_00a0d9e1: ;
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  F_0042cc20((*(undefined * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)),REFG(undefined4, 0x108cc50));
  if (iVar5 != 0) {
    F_00429760(iVar5,((iVar6 - iVar5) / 0x18) * 0x18,400);
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)pvVar1;
}

/* ref: FUN_00a0da40 */
GEN_FRAME uint GEN_STDCALL F_00a0da40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0da40u, gen_a0, gen_a1, 0u, 0u);
  HWND param_1 = (HWND)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  byte bVar1;
  BOOL BVar2;
  HWND pHVar3;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  BVar2 = gen_imp_IsWindowVisible(param_1);
  if (BVar2 != 0) {
    BVar2 = gen_imp_IsWindowEnabled(param_1);
    if (BVar2 != 0) {
      pHVar3 = gen_imp_GetParent(param_1);
      if (pHVar3 == (HWND)0x0) {
        (*(CHAR *)(gen_frame + 0xb0)) = '\0';
        F_00c48350(((undefined1 *)(gen_frame + 0xb1)),0,0x103);
        gen_imp_GetClassNameA(param_1,&(*(CHAR *)(gen_frame + 0xb0)),0x104);
        F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,&(*(CHAR *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
        bVar1 = F_0042b740(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,"Shell_TrayWnd");
        if (bVar1 != 0) {
          bVar1 = F_0042b740(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,"Progman");
          if (bVar1 != 0) {
            (*(CHAR *)(gen_frame + 0x1b4)) = '\0';
            F_00c48350(((undefined1 *)(gen_frame + 0x1b5)),0,0x103);
            gen_imp_GetWindowTextA(param_1,&(*(CHAR *)(gen_frame + 0x1b4)),0x104);
            if ((*(CHAR *)(gen_frame + 0x1b4)) != '\0') {
              F_0042b630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
              F_0042d080(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(CHAR *)(gen_frame + 0x1b4)));
              F_00a19120(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
              F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
            }
          }
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a0db90 */
GEN_FRAME uint GEN_THISCALL F_00a0db90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0db90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0xc)) = 0;
  F_0096abe0(&(*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_FWD,0x40);
  pvVar3 = (undefined *)((int)this + 0x20c);
  F_0042e430(pvVar3 GEN_EDX_ARG,"\n\n-=-=-=-=-=-=- Application Information -=-=-=-=-=-=-\n\n");
  gen_imp_EnumWindows(((code *)REFP(0xa0da40)),(LPARAM)&(*(undefined * PTR32 *)(gen_frame + 0x4)));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (*(undefined * PTR32 *)(gen_frame + 0x8))) {
    do {
      F_0042e360(pvVar3 GEN_EDX_ARG,pvVar2);
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,&REFG(undefined, 0x10e3398),REFG(undefined4, 0x108cc50));
      F_0042e360(pvVar3 GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
      pvVar2 = (undefined *)((int)pvVar2 + 0x54);
    } while (pvVar2 != (*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    for (; pvVar2 != pvVar3; pvVar2 = (undefined *)((int)pvVar2 + 0x54)) {
      F_0042c880(pvVar2 GEN_EDX_ARG);
    }
    uVar4 = F_00429760((*(undefined * PTR32 *)(gen_frame + 0x4)),(((*(int *)(gen_frame + 0xc)) - (int)(*(undefined * PTR32 *)(gen_frame + 0x4))) / 0x54) * 0x54,400);
    pvVar3 = (undefined *)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return (uint)pvVar3;
}

/* ref: FUN_00a0dc80 */
GEN_FRAME uint GEN_THISCALL F_00a0dc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0dc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x330];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  undefined * pvVar7;
  LSTATUS LVar8;
  DWORD dwIndex;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 * puVar15;
  HKEY * ppHVar16;
  CHAR * pCVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x328)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x32c);
  F_0042e430((undefined *)((int)this + 0x260) GEN_EDX_FWD,"\n\n-=-=-=-=-=-=- Install Information -=-=-=-=-=-=-\n\n"
              );
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x10)) = 0;
  F_0096abe0(&(*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,0x40);
  uVar5 = gen_imp_RegCreateKeyExA(0x80000002,REFG(undefined * PTR32, 0x1333a10),0,0,0,0x20019,0
                          ,&(*(HKEY *)(gen_frame + 0x1c)),0);
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  if (uVar5 == 0) {
    dwIndex = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x1333a10),REFG(undefined4, 0x108cc50));
    (*(CHAR *)(gen_frame + 0x224)) = '\0';
    F_00c48350(((undefined1 *)(gen_frame + 0x225)),0,0x103);
    (*(DWORD *)(gen_frame + 0x20)) = 0x104;
    iVar6 = gen_imp_RegEnumKeyExA((*(HKEY *)(gen_frame + 0x1c)),0,&(*(CHAR *)(gen_frame + 0x224)),&(*(DWORD *)(gen_frame + 0x20)),(LPDWORD)0x0,(LPSTR)0x0,(LPDWORD)0x0,
                          (GEN_LPANY)0x0);
    while (iVar6 == 0) {
      pCVar17 = &(*(CHAR *)(gen_frame + 0x224));
      puVar15 = ((undefined1 *)(gen_frame + 0x78));
      dwIndex = dwIndex + 1;
      pvVar7 = (undefined *)F_0042cdb0(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xcc)),&REFG(undefined, 0x10e3404));
      F_0042cdb0(pvVar7 GEN_EDX_ARG,puVar15,pCVar17);
      F_0042c880(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
      uVar18 = 0;
      ppHVar16 = &(*(HKEY *)(gen_frame + 0x18));
      uVar14 = 0;
      uVar13 = 0x20019;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar5 = F_0042a990(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
      LVar8 = gen_imp_RegCreateKeyExA(0x80000002,uVar5,uVar10,uVar11,uVar12,uVar13,uVar14,ppHVar16,uVar18);
      if (LVar8 == 0) {
        (*(BYTE *)(gen_frame + 0x120)) = '\0';
        F_00c48350(((undefined1 *)(gen_frame + 0x121)),0,0x103);
        (*(DWORD *)(gen_frame + 0x4)) = 0;
        (*(DWORD *)(gen_frame + 0x20)) = 0x104;
        LVar8 = gen_imp_RegQueryValueExA((*(HKEY *)(gen_frame + 0x18)),"DisplayName",(LPDWORD)0x0,&(*(DWORD *)(gen_frame + 0x4)),&(*(BYTE *)(gen_frame + 0x120)),
                                 &(*(DWORD *)(gen_frame + 0x20)));
        if (LVar8 == 0) {
          uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG,&(*(BYTE *)(gen_frame + 0x120)),REFG(undefined4, 0x108cc50));
          F_00a19120(&(*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar5);
          F_0042c880(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
        }
        gen_imp_RegCloseKey((*(HKEY *)(gen_frame + 0x18)));
      }
      (*(DWORD *)(gen_frame + 0x20)) = 0x104;
      F_0042c880(((undefined1 *)(gen_frame + 0x78)) GEN_EDX_ARG);
      iVar6 = gen_imp_RegEnumKeyExA((*(HKEY *)(gen_frame + 0x1c)),dwIndex,&(*(CHAR *)(gen_frame + 0x224)),&(*(DWORD *)(gen_frame + 0x20)),(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(GEN_LPANY)0x0);
    }
    gen_imp_RegCloseKey((*(HKEY *)(gen_frame + 0x1c)));
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0x24)) GEN_EDX_ARG);
    uVar5 = (uint)uVar9;
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  }
  for (; pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0xc)), pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8)), pvVar7 != (*(undefined * PTR32 *)(gen_frame + 0xc));
      pvVar7 = (undefined *)((int)pvVar7 + 0x54)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar4;
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar1;
    uVar5 = F_0042cdb0(pvVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xcc)),&REFG(undefined, 0x10e3414));
    F_0042e360((undefined *)((int)this + 0x260) GEN_EDX_ARG,uVar5);
    uVar9 = F_0042c880(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
    uVar5 = (uint)uVar9;
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar3;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar1;
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    for (; (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar4, pvVar7 != pvVar3; pvVar7 = (undefined *)((int)pvVar7 + 0x54)) {
      F_0042c880(pvVar7 GEN_EDX_ARG);
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    uVar9 = F_00429760(pvVar2,(((*(int *)(gen_frame + 0x10)) - (int)pvVar2) / 0x54) * 0x54,400);
    uVar5 = (uint)uVar9;
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar4;
  F_00c47745((*(uint *)(gen_frame + 0x328)) ^ (uint)(uint)(gen_frame + 0x32c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00a0df50 */
GEN_FRAME uint GEN_THISCALL F_00a0df50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0df50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  double dVar1;
  DWORD DVar2;
  UINT UVar3;
  uint uVar4;
  undefined1 * this_00;
  float10 fVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  DVar2 = gen_imp_GetLogicalDrives();
  (*(DWORD *)(gen_frame + 0x48)) = DVar2;
  (*(uint *)(gen_frame + 0x44)) = 0x41;
  do {
    if (((*(DWORD *)(gen_frame + 0x48)) & 1) == 0) goto LAB_00a0e1ee;
    *(undefined4 *)&(*(CHAR *)(gen_frame + 0x200)) = 0x5c3a41;
    (*(CHAR *)(gen_frame + 0x200)) = (CHAR)(*(uint *)(gen_frame + 0x44));
    *(undefined4 *)&(*(CHAR *)(gen_frame + 0x200)) = CONCAT31(0x5c3a,(CHAR)(*(uint *)(gen_frame + 0x44)));
    (*(undefined4 *)(gen_frame + 0x204)) = 0;
    UVar3 = gen_imp_GetDriveTypeA(&(*(CHAR *)(gen_frame + 0x200)));
    if (UVar3 == 1) goto LAB_00a0e1ee;
    F_0042b630(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0xf4)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x148)) GEN_EDX_ARG);
    F_0042e430(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG,&(*(CHAR *)(gen_frame + 0x200)));
    if (((UVar3 != 3) && (UVar3 != 4)) && (UVar3 != 6)) goto LAB_00a0e1c2;
    switch((unsigned int)(uintptr_t)(UVar3)) {
    case 0: ;
      pcVar6 = "SYSTEM_UNKNOWN_DRIVE";
      this_00 = ((undefined1 *)(gen_frame + 0xa0));
      break;
    default: ;
      if ((2 < UVar3) && ((UVar3 < 5 || (UVar3 == 6)))) goto LAB_00a0e096;
      goto LAB_00a0e1ad;
    case 2: ;
      pcVar6 = "SYSTEM_FLOPPYDISK_DRIVE";
      this_00 = ((undefined1 *)(gen_frame + 0xa0));
      break;
    case 3: ;
      F_0042e430(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,"SYSTEM_HARDDISK_DRIVE");
      goto LAB_00a0e096;
    case 4: ;
      F_0042e430(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,"SYSTEM_NETWORK_DRIVE");
      goto LAB_00a0e096;
    case 5: ;
      pcVar6 = "SYSTEM_CDROM_DRIVE";
      this_00 = ((undefined1 *)(gen_frame + 0xa0));
      break;
    case 6: ;
      F_0042e430(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG,"SYSTEM_RAMDISK_DRIVE");
LAB_00a0e096: ;
      gen_imp_GetDiskFreeSpaceExA(&(*(CHAR *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x28)));
      (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x28));
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x2c)) & 0x7fffffff;
      (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x2c)) & 0x80000000;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x24)) & 0x7fffffff;
      (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x20));
      fVar5 = (float10)*(double *)&REFG(undefined, 0x10ac178);
      (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x24)) & 0x80000000;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(double *)(gen_frame + 0x8)) = ((double)GEN_TOD(((((-(float10)(longlong)(((ulonglong)(*(uint *)(gen_frame + 0x2c)) & 0x80000000) << 0x20) +
                             ((float10)GEN_TOD((CONCAT44((*(uint *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x28))) & 0x7fffffffffffffff)))) * fVar5)
                           * fVar5) * fVar5)));
      dVar1 = ((double)GEN_TOD(((((-(float10)(longlong)(((ulonglong)(*(uint *)(gen_frame + 0x24)) & 0x80000000) << 0x20) +
                         ((float10)GEN_TOD((CONCAT44((*(uint *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x20))) & 0x7fffffffffffffff)))) * fVar5) *
                       fVar5) * fVar5)));
      F_00c472af(((char *)(gen_frame + 0x19c)),100,"%s %.3lfGB","SYSTEM_TOTALDISC_SPACE",
                 (int)(ulonglong)gen_d2bits(dVar1),(int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
      F_0042e430(((undefined1 *)(gen_frame + 0xf4)) GEN_EDX_ARG,((char *)(gen_frame + 0x19c)));
      F_00c472af(((char *)(gen_frame + 0x19c)),100,"%s %.3lfGB","SYSTEM_FREEDISC_SPACE",
                 (int)(ulonglong)gen_d2bits((*(double *)(gen_frame + 0x8))),
                 (int)((ulonglong)gen_d2bits((*(double *)(gen_frame + 0x8))) >> 0x20));
      pcVar6 = ((char *)(gen_frame + 0x19c));
      this_00 = ((undefined1 *)(gen_frame + 0x148));
    }
    F_0042e430(this_00 GEN_EDX_ARG,pcVar6);
LAB_00a0e1ad: ;
    F_00a19800((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4c)));
LAB_00a0e1c2: ;
    F_0042c880(((undefined1 *)(gen_frame + 0x148)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xf4)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
LAB_00a0e1ee: ;
    (*(DWORD *)(gen_frame + 0x48)) = (*(DWORD *)(gen_frame + 0x48)) >> 1;
    uVar4 = (*(uint *)(gen_frame + 0x44)) + 1;
    (*(uint *)(gen_frame + 0x44)) = uVar4;
    if (0x5a < (int)uVar4) {
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a0e240 */
GEN_FRAME uint F_00a0e240(void)
{
  GEN_ENTER(0xa0e240u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x900];
  uint uVar1;
  HRESULT HVar2;
  UINT UVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x8f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8fc);
  F_0042aca0(&REFG(undefined4, 0x14a2730) GEN_EDX_ARG);
  F_0042aca0(&REFG(undefined4, 0x14a2788) GEN_EDX_ARG);
  F_0042aca0(&REFG(undefined, 0x14a27e0) GEN_EDX_ARG);
  F_0042aca0(&REFG(undefined, 0x14a2838) GEN_EDX_ARG);
  F_00a186d0(&REFG(undefined4, 0x14a28e4) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)),REFG(undefined4, 0x14a28e4),REFG(undefined4, 0x14a28e8));
  if (REFG(undefined4, 0x14a28f4) != REFG(undefined4, 0x14a28f8)) {
    uVar1 = F_00a155e0(REFG(undefined4, 0x14a28f8),REFG(undefined4, 0x14a28f8),REFG(undefined4, 0x14a28f4),(*(uint *)(gen_frame + 0x24)));
    F_00a16b20(uVar1,REFG(undefined4, 0x14a28f8),&REFG(undefined, 0x14a2900),(*(uint *)(gen_frame + 0x24)));
    REFG(undefined4, 0x14a28f8) = uVar1;
  }
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x34)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  HVar2 = gen_imp_CoInitialize((LPVOID)0x0);
  (*(bool *)(gen_frame + 0x3b)) = HVar2 == 0;
  uVar1 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x10e35c8),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x10e35d8),&(*(int * PTR32 *)(gen_frame + 0x1c)));
  if (-1 < (int)uVar1) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x6f;
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
    if (-1 < (int)uVar1) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x20)));
      if (-1 < (int)uVar1) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[8])REFP(0x10e28c0)),&(*(int * PTR32 *)(gen_frame + 0x34)));
        if (-1 < (int)uVar1) {
          gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[9])REFP(0x10e28e4)),((undefined *)(gen_frame + 0x40)));
          if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
            UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
            if (UVar3 != 0) {
              uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
              F_0042ccf0(&REFG(undefined4, 0x14a2730) GEN_EDX_ARG,uVar1);
              F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
            }
          }
          gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
          gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[9])REFP(0x10e290c)),((undefined *)(gen_frame + 0x40)));
          if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
            UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
            if (UVar3 != 0) {
              uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
              F_0042ccf0(&REFG(undefined4, 0x14a2788) GEN_EDX_ARG,uVar1);
              F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
            }
          }
          gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
          gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e2934)),((undefined *)(gen_frame + 0x40)));
          if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
            UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
            if (UVar3 != 0) {
              uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
              F_0042ccf0(&REFG(undefined, 0x14a27e0) GEN_EDX_ARG,uVar1);
              F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
            }
          }
          gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
          gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[10])REFP(0x10e2950)),((undefined *)(gen_frame + 0x40)));
          if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
            UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
            if (UVar3 != 0) {
              uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
              F_0042ccf0(&REFG(undefined, 0x14a2838) GEN_EDX_ARG,uVar1);
              F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
            }
          }
          gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
          gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[13])REFP(0x10e297c)),((undefined *)(gen_frame + 0x40)));
          if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
            UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
            if (UVar3 != 0) {
              uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
              F_0042ccf0(&REFG(undefined, 0x14a2890) GEN_EDX_ARG,uVar1);
              F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
            }
          }
          gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 8))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        }
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[10])REFP(0x10e29b4)),&(*(int * PTR32 *)(gen_frame + 0x2c)));
        if (-1 < (int)uVar1) {
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)));
          (*(uint *)(gen_frame + 0x30)) = 0;
          if ((*(uint *)(gen_frame + 0x14)) != 0) {
            do {
              uVar1 = (*(uint *)(gen_frame + 0x30));
              uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x830)),100);
              if (-1 < (int)uVar4) {
                F_00a13510(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
                F_0042e430(((undefined1 *)(gen_frame + 0x29c)) GEN_EDX_ARG,"SYSTEM_UNKNOWN");
                (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)0x0;
                uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x830)),&(*(int * PTR32 *)(gen_frame + 0x3c)));
                if (-1 < (int)uVar4) {
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e29f0)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e2a0c)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[5])REFP(0x10e2a28)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0xf8)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[7])REFP(0x10e2a40)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x14c)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e2a60)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x1a0)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[7])REFP(0x10e2a7c)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x1f4)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[4])REFP(0x10e2a9c)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x2f0)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[11])REFP(0x10e2ab0)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x248)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[10])REFP(0x10e2ae0)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x344)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e2b0c)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x398)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[7])REFP(0x10e2b28)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x3ec)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[10])REFP(0x10e2b48)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x440)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[12])REFP(0x10e2b74)),((undefined *)(gen_frame + 0x40)));
                  if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                    UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                    if (UVar3 != 0) {
                      uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                      F_0042ccf0(((undefined1 *)(gen_frame + 0x494)) GEN_EDX_ARG,uVar1);
                      F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                    }
                  }
                  gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                  ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 8))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
                  uVar1 = (*(uint *)(gen_frame + 0x30));
                }
                F_00a19630(&REFG(undefined4, 0x14a28e4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)));
                F_00a135d0(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG);
              }
              (*(uint *)(gen_frame + 0x30)) = uVar1 + 1;
            } while (uVar1 + 1 < (*(uint *)(gen_frame + 0x14)));
          }
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[9])REFP(0x10e2ba8)),&(*(int * PTR32 *)(gen_frame + 0x18)));
          if (-1 < (int)uVar1) {
            uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[9])REFP(0x10e2bd0)),&(*(int * PTR32 *)(gen_frame + 0x28)));
            if (-1 < (int)uVar1) {
              ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)));
              (*(uint *)(gen_frame + 0x30)) = 0;
              if ((*(uint *)(gen_frame + 0x24)) != 0) {
                do {
                  uVar1 = (*(uint *)(gen_frame + 0x30));
                  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x830)),100);
                  if (-1 < (int)uVar4) {
                    F_00a13690(((undefined1 *)(gen_frame + 0x5e4)) GEN_EDX_ARG);
                    (*(int * PTR32 *)(gen_frame + 0x3c)) = (int *)0x0;
                    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x830)),&(*(int * PTR32 *)(gen_frame + 0x3c)));
                    if (-1 < (int)uVar4) {
                      gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e2bf8)),((undefined *)(gen_frame + 0x40)))
                      ;
                      if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                        UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                        if (UVar3 != 0) {
                          uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                          F_0042ccf0(((undefined1 *)(gen_frame + 0x5e4)) GEN_EDX_ARG,uVar1);
                          F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                        }
                      }
                      gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                      gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[7])REFP(0x10e2c14)),((undefined *)(gen_frame + 0x40)))
                      ;
                      if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                        UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                        if (UVar3 != 0) {
                          uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                          F_0042ccf0(((undefined1 *)(gen_frame + 0x638)) GEN_EDX_ARG,uVar1);
                          F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                        }
                      }
                      gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                      gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[6])REFP(0x10e2c34)),((undefined *)(gen_frame + 0x40)))
                      ;
                      if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                        UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                        if (UVar3 != 0) {
                          uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                          F_0042ccf0(((undefined1 *)(gen_frame + 0x68c)) GEN_EDX_ARG,uVar1);
                          F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                        }
                      }
                      gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                      gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[7])REFP(0x10e2c50)),((undefined *)(gen_frame + 0x40)))
                      ;
                      if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                        UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                        if (UVar3 != 0) {
                          uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                          F_0042ccf0(((undefined1 *)(gen_frame + 0x6e0)) GEN_EDX_ARG,uVar1);
                          F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                        }
                      }
                      gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                      gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[12])REFP(0x10e2c70)),((undefined *)(gen_frame + 0x40)))
                      ;
                      if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                        UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                        if (UVar3 != 0) {
                          uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                          F_0042ccf0(((undefined1 *)(gen_frame + 0x734)) GEN_EDX_ARG,uVar1);
                          F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                        }
                      }
                      gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                      gen_imp_VariantInit(((undefined *)(gen_frame + 0x40)));
                      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG,(*(undefined * PTR32 (*)[10])REFP(0x10e2ca4)),((undefined *)(gen_frame + 0x40)))
                      ;
                      if ((-1 < (int)uVar1) && ((*(ushort *)((char *)((undefined *)(gen_frame + 0x40)))) == 8)) {
                        UVar3 = gen_imp_SysStringLen((BSTR)(*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)));
                        if (UVar3 != 0) {
                          uVar1 = F_00a0c970((*(undefined4 *)((char *)((undefined *)(gen_frame + 0x40)) + 8)),((undefined1 *)(gen_frame + 0x7dc)));
                          F_0042ccf0(((undefined1 *)(gen_frame + 0x788)) GEN_EDX_ARG,uVar1);
                          F_0042c880(((undefined1 *)(gen_frame + 0x7dc)) GEN_EDX_ARG);
                        }
                      }
                      gen_imp_VariantClear((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x40)))));
                      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 8))((*(int * PTR32 *)(gen_frame + 0x3c)) GEN_EDX_ARG);
                      uVar1 = (*(uint *)(gen_frame + 0x30));
                    }
                    F_00a196c0(&REFG(undefined4, 0x14a28f4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5e4)));
                    F_00a136d0(((undefined1 *)(gen_frame + 0x5e4)) GEN_EDX_ARG);
                  }
                  (*(uint *)(gen_frame + 0x30)) = uVar1 + 1;
                } while (uVar1 + 1 < (*(uint *)(gen_frame + 0x24)));
              }
              ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 8))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
            }
            ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)) GEN_EDX_ARG);
          }
          ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 8))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
        }
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 8))((*(int * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG);
      }
    }
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1c)) + 8))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
  }
  if ((*(bool *)(gen_frame + 0x3b)) != false) {
    gen_imp_CoUninitialize();
    uVar1 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x8f8)) ^ (uint)(uint)(gen_frame + 0x8fc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a0f100 */
GEN_FRAME uint GEN_STDCALL F_00a0f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa0f100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x570];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x568)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x56c);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)*param_2 + 0xc))((int *)*param_2 GEN_EDX_ARG,param_1 + 4,&(*(int * PTR32 *)(gen_frame + 0x4)),0);
  if (-1 < (int)uVar1) {
    F_0042b630(((undefined1 *)(gen_frame + 0x388)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x3dc)) GEN_EDX_ARG);
    F_0042b630(((undefined1 *)(gen_frame + 0x430)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x4d8)) = 0x2c;
    (*(undefined4 *)(gen_frame + 0x4dc)) = 0;
    (*(undefined4 *)(gen_frame + 0x4e0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4e4)) = 0;
    (*(undefined4 *)(gen_frame + 0x4e8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4ec)) = 0;
    (*(undefined4 *)(gen_frame + 0x4f0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4f4)) = 0;
    (*(undefined4 *)(gen_frame + 0x4f8)) = 0;
    (*(undefined4 *)(gen_frame + 0x4fc)) = 0;
    (*(undefined4 *)(gen_frame + 0x500)) = 0;
    (*(undefined4 *)(gen_frame + 0x144)) = 0x244;
    F_00c48350(&(*(undefined4 *)(gen_frame + 0x148)),0,0x240);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x13c;
    F_00c48350(((undefined1 *)(gen_frame + 0xc)),0,0x138);
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x144)));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4d8)));
    F_0042b630(((undefined1 *)(gen_frame + 0x484)) GEN_EDX_ARG);
    F_0042d080(((undefined1 *)(gen_frame + 0x484)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x16c)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x3dc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x484)));
    F_0042c880(((undefined1 *)(gen_frame + 0x484)) GEN_EDX_ARG);
    F_00c472af(((undefined1 *)(gen_frame + 0x504)),100,"{%08X-%04X-%04X-%02X%02X%02X%02X%02X%02X%02X%02X}",(*(undefined4 *)(gen_frame + 0x148)),
               (uint)(*(ushort *)(gen_frame + 0x14c)),(uint)(*(ushort *)(gen_frame + 0x14e)),(uint)(*(byte *)(gen_frame + 0x150)),(uint)(*(byte *)(gen_frame + 0x151)),(uint)(*(byte *)(gen_frame + 0x152)),
               (uint)(*(byte *)(gen_frame + 0x153)),(uint)(*(byte *)(gen_frame + 0x154)),(uint)(*(byte *)(gen_frame + 0x155)),(uint)(*(byte *)(gen_frame + 0x156)),(uint)(*(byte *)(gen_frame + 0x157)));
    F_0042e430(((undefined1 *)(gen_frame + 0x388)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x504)));
    F_00c472af(((undefined1 *)(gen_frame + 0x504)),100,"%s %u  %s %u  %s %u","SYSTEM_GAMEPAD_AXIS",(*(undefined4 *)(gen_frame + 0x4e4)),
               "SYSTEM_GAMEPAD_BUTTON",(*(undefined4 *)(gen_frame + 0x4e8)),"SYSTEM_GAMEPAD_FOV",(*(undefined4 *)(gen_frame + 0x4ec)));
    F_0042b630(((undefined1 *)(gen_frame + 0x484)) GEN_EDX_ARG);
    F_0042d080(((undefined1 *)(gen_frame + 0x484)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x504)));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x430)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x484)));
    F_0042c880(((undefined1 *)(gen_frame + 0x484)) GEN_EDX_ARG);
    F_00a19750((undefined *)param_2[1] GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x388)));
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 8))((*(int * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x430)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x3dc)) GEN_EDX_ARG);
    F_0042c880(((undefined1 *)(gen_frame + 0x388)) GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x568)) ^ (uint)(uint)(gen_frame + 0x56c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00a0f390 */
GEN_FRAME unsigned int F_00a0f390(void)
{
  GEN_ENTER(0xa0f390u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  HRESULT HVar2;
  HRESULT HVar3;
  HMODULE pHVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  HVar2 = gen_imp_CoInitialize((LPVOID)0x0);
  HVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x10816a4),(GEN_LPANY)0x0,0x17,(undefined *)&REFG(undefined, 0x1081724),&(*(int * PTR32 *)(gen_frame + 0x8)));
  if (-1 < HVar3) {
    iVar1 = *(*(int * PTR32 *)(gen_frame + 0x8));
    uVar6 = 0x800;
    pHVar4 = gen_imp_GetModuleHandleA((LPCSTR)0x0);
    uVar5 = ((code *)*(gen_code32 *)(iVar1 + 0x1c))((*(int * PTR32 *)(gen_frame + 0x8)),pHVar4,uVar6);
    if (-1 < (int)uVar5) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (*(int * PTR32 *)(gen_frame + 0x8));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &REFG(undefined4, 0x14a2904);
      ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,0,((code *)REFP(0xa0f100)),&(*(int * PTR32 *)(gen_frame + 0x0)),1);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  if (HVar2 == 0) {
    gen_imp_CoUninitialize();
  }
  return 0;
}

/* ref: FUN_00a0f430 */
GEN_NOFRAME unsigned int F_00a0f430(void)
{
  GEN_ENTER(0xa0f430u, 0u, 0u, 0u, 0u);
  F_00a0e240();
  F_00a0f390();
  return;
}

/* ref: FUN_00a0f440 */
GEN_FRAME uint GEN_THISCALL F_00a0f440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa0f440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12230];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 * puVar7;
  undefined1 * puVar8;
  undefined1 * puVar9;
  undefined1 * puVar10;
  undefined * puVar11;
  
  (*(uint *)(gen_frame + 0x12228)) = 0xa0f44d;
  (*(uint *)(gen_frame + 0x12228)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar5 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) != iVar5) {
    uVar1 = F_00a156e0(iVar5,iVar5,*(int *)((int)this + 4),(*(uint *)(gen_frame + 0x10004)));
    F_00485e30(uVar1,*(undefined4 *)((int)this + 8),(int)this + 0x10,(*(uint *)(gen_frame + 0x10004)));
    *(uint *)((int)this + 8) = uVar1;
  }
  if (REFG(undefined4, 0x14a2904) != REFG(undefined4, 0x14a2908)) {
    uVar1 = F_00a15680(REFG(undefined4, 0x14a2908),REFG(undefined4, 0x14a2908),REFG(undefined4, 0x14a2904),(*(uint *)(gen_frame + 0x10004)));
    F_00a17c80(uVar1,REFG(undefined4, 0x14a2908));
    REFG(undefined4, 0x14a2908) = uVar1;
  }
  F_00a0df50(this GEN_EDX_ARG);
  F_00a0d3b0();
  F_00a0d5d0();
  if (*REFG(char * PTR32, 0x14a2730) == '\0') {
    uVar1 = F_00a0cbe0(((undefined1 *)(gen_frame + 0x12180)));
    F_0042ccf0(&REFG(char * PTR32, 0x14a2730) GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
  }
  if (*REFG(char * PTR32, 0x14a2788) == '\0') {
    uVar1 = F_00a0cab0(((undefined1 *)(gen_frame + 0x12180)));
    F_0042ccf0(&REFG(char * PTR32, 0x14a2788) GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
  }
  uVar1 = F_00a0d8c0(((undefined1 *)(gen_frame + 0x12180)));
  F_0042ccf0((undefined *)((int)this + 0x14) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
  uVar1 = F_00a0d150(((undefined1 *)(gen_frame + 0x12180)),0);
  F_0042ccf0((undefined *)((int)this + 0x68) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
  uVar1 = F_00a0d150(((undefined1 *)(gen_frame + 0x12180)),1);
  F_0042ccf0((undefined *)((int)this + 0xbc) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
  uVar1 = F_00a0d150(((undefined1 *)(gen_frame + 0x12180)),2);
  F_0042ccf0((undefined *)((int)this + 0x110) GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
  F_0042e430((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,"\n\n-=-=-=-=-=-=- System Information -=-=-=-=-=-=-\n\n")
  ;
  F_0042b630(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10004)) = 0;
  do {
    switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x10004)))) {
    case 0: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_OS");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x12030)) GEN_EDX_ARG,&REFG(undefined, 0x10e2458),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11070)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11070)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x12030)) GEN_EDX_ARG);
      uVar1 = F_0042a990(&REFG(char * PTR32, 0x14a2730) GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10104)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10104)) GEN_EDX_ARG);
      break;
    case 1: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_CPU");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10f74)) GEN_EDX_ARG,&REFG(undefined, 0x10e2468),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11f88)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11f88)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x10f74)) GEN_EDX_ARG);
      uVar1 = F_0042a990(&REFG(char * PTR32, 0x14a2788) GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11ee0)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11ee0)) GEN_EDX_ARG);
      break;
    case 2: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_CORE_NUM");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11e38)) GEN_EDX_ARG,&REFG(undefined, 0x10e247c),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10794)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10794)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x11e38)) GEN_EDX_ARG);
      uVar1 = F_0042a990((int)this + 0x14 GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10ecc)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10ecc)) GEN_EDX_ARG);
      break;
    case 3: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_BIOS");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x103a4)) GEN_EDX_ARG,&REFG(undefined, 0x10e248c),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11d90)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11d90)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x103a4)) GEN_EDX_ARG);
      uVar1 = F_0042a990(&REFG(undefined, 0x14a27e0) GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11ce8)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11ce8)) GEN_EDX_ARG);
      break;
    case 4: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_LANGAGE");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11c40)) GEN_EDX_ARG,&REFG(undefined, 0x10e24a0),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10e24)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10e24)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x11c40)) GEN_EDX_ARG);
      uVar1 = F_0042a990(&REFG(undefined, 0x14a2838) GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x106ec)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x106ec)) GEN_EDX_ARG);
      break;
    case 5: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_MEMORY");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10d7c)) GEN_EDX_ARG,&REFG(undefined, 0x10e24b4),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11b98)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11b98)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x10d7c)) GEN_EDX_ARG);
      uVar1 = F_0042a990((int)this + 0x68 GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11af0)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11af0)) GEN_EDX_ARG);
      break;
    case 6: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_VIRTUAL_MEMORY");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11a48)) GEN_EDX_ARG,&REFG(undefined, 0x10e24d0),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x101ac)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x101ac)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x11a48)) GEN_EDX_ARG);
      uVar1 = F_0042a990((int)this + 0xbc GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10cd4)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x10cd4)) GEN_EDX_ARG);
      break;
    case 7: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_PAGE_FILE");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10644)) GEN_EDX_ARG,&REFG(undefined, 0x10e24e8),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x119a0)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x119a0)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x10644)) GEN_EDX_ARG);
      uVar1 = F_0042a990((int)this + 0x110 GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x118f8)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x118f8)) GEN_EDX_ARG);
      break;
    case 8: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_STORAGE");
      puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar4 != *(undefined4 * PTR32 *)((int)this + 8)) {
        do {
          F_0042b630(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
          if (*(char *)*puVar4 != '\0') {
            F_0042e360(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,puVar4);
            F_0042e370(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,&REFG(undefined, 0x10e24fc));
          }
          if (*(char *)puVar4[0x15] != '\0') {
            F_0042e360(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,puVar4 + 0x15);
            F_0042e370(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,&REFG(undefined, 0x10e2504));
          }
          if (*(char *)puVar4[0x2a] != '\0') {
            F_0042e360(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,puVar4 + 0x2a);
            F_0042e370(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,&REFG(undefined, 0x10e250c));
          }
          if (*(char *)puVar4[0x3f] != '\0') {
            F_0042e360(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG,puVar4 + 0x3f);
          }
          uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          puVar11 = &REFG(undefined, 0x14a2680);
          puVar10 = ((undefined1 *)(gen_frame + 0x10c2c));
          puVar9 = ((undefined1 *)(gen_frame + 0x121d4));
          puVar8 = ((undefined1 *)(gen_frame + 0x11850));
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10b84)) GEN_EDX_ARG,&REFG(undefined, 0x10e2524),REFG(undefined4, 0x108cc50));
          puVar7 = ((undefined1 *)(gen_frame + 0x102fc));
          pvVar2 = (undefined *)F_0042cc20(((undefined1 *)(gen_frame + 0x117a8)) GEN_EDX_ARG,"SYSTEM_STORAGE",REFG(undefined4, 0x108cc50));
          pvVar2 = (undefined *)F_0042cd30(pvVar2 GEN_EDX_ARG,puVar7,uVar1);
          pvVar2 = (undefined *)F_0042cd30(pvVar2 GEN_EDX_ARG,puVar8,puVar9);
          uVar1 = F_0042cd30(pvVar2 GEN_EDX_ARG,puVar10,puVar11);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10c2c)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x11850)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x102fc)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x117a8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10b84)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x12180)) GEN_EDX_ARG);
          puVar4 = puVar4 + 0x54;
        } while (puVar4 != *(undefined4 * PTR32 *)((int)this + 8));
      }
      break;
    case 9: ;
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_DIRECTX_VERSION");
      uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x1059c)) GEN_EDX_ARG,&REFG(undefined, 0x10e2540),REFG(undefined4, 0x108cc50));
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11700)),uVar1);
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11700)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x1059c)) GEN_EDX_ARG);
      uVar1 = F_0042a990(&REFG(undefined, 0x14a2890) GEN_EDX_ARG);
      F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
      uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11658)),&REFG(undefined, 0x14a2680));
      F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
      F_0042c880(((undefined1 *)(gen_frame + 0x11658)) GEN_EDX_ARG);
      break;
    case 10: ;
      iVar5 = REFG(int, 0x14a28e4);
      if (REFG(int, 0x14a28e4) != REFG(int, 0x14a28e8)) {
        do {
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x115b0)) GEN_EDX_ARG,&REFG(undefined, 0x10e2554),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10adc)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10adc)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x115b0)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x54 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1005c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1005c)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DEVICE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10a34)) GEN_EDX_ARG,&REFG(undefined, 0x10e2570),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11508)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11508)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10a34)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11460)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11460)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_CHIP");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x113b8)) GEN_EDX_ARG,&REFG(undefined, 0x10e258c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x104f4)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x104f4)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x113b8)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0xa8 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1098c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1098c)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_MAKER");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10254)) GEN_EDX_ARG,&REFG(undefined, 0x10e25a8),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11310)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11310)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10254)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0xfc GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11268)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11268)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_VRAM");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x111c0)) GEN_EDX_ARG,&REFG(undefined, 0x10e25c4),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x108e4)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x108e4)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x111c0)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x1f8 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1044c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1044c)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_SHARED_VRAM");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x1083c)) GEN_EDX_ARG,&REFG(undefined, 0x10e25e4),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11118)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11118)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x1083c)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x24c GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1212c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1212c)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DAC");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x12084)) GEN_EDX_ARG,&REFG(undefined, 0x10e25fc),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x120d8)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x120d8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x12084)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x2a0 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11fdc)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11fdc)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DISPLAY_MODE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11e8c)) GEN_EDX_ARG,&REFG(undefined, 0x10e2620),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11f34)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11f34)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x11e8c)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x2f4 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11de4)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11de4)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DRIVER");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11c94)) GEN_EDX_ARG,&REFG(undefined, 0x10e263c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11d3c)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11d3c)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x11c94)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x348 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11bec)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11bec)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DRIVER_VERSION");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11a9c)) GEN_EDX_ARG,&REFG(undefined, 0x10e2660),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11b44)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11b44)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x11a9c)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x39c GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x119f4)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x119f4)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DRIVER_DATE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x118a4)) GEN_EDX_ARG,&REFG(undefined, 0x10e2680),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1194c)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1194c)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x118a4)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x3f0 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x117fc)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x117fc)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_DRIVER_LANGAGE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x116ac)) GEN_EDX_ARG,&REFG(undefined, 0x10e26a4),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11754)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11754)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x116ac)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x444 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11604)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11604)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x498 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1155c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1155c)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_PIXEL_SHADER");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x1140c)) GEN_EDX_ARG,&REFG(undefined, 0x10e26c8),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114b4)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x114b4)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x1140c)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x4ec GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11364)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x11364)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_GRAPHICS_VERTEX_TEXTURE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x11214)) GEN_EDX_ARG,&REFG(undefined, 0x10e26ec),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x112bc)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x112bc)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x11214)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x540 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1116c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x1116c)) GEN_EDX_ARG);
          iVar5 = iVar5 + 0x594;
        } while (iVar5 != REFG(int, 0x14a28e8));
      }
      break;
    case 0xb: ;
      iVar5 = REFG(int, 0x14a28f4);
      if (REFG(int, 0x14a28f4) != REFG(int, 0x14a28f8)) {
        do {
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_SOUND");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10fc8)) GEN_EDX_ARG,&REFG(undefined, 0x10e2700),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110c4)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x110c4)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10fc8)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10f20)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10f20)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_SOUND_DEVICE_ID");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10dd0)) GEN_EDX_ARG,&REFG(undefined, 0x10e271c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10e78)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10e78)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10dd0)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x54 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10d28)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10d28)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_SOUND_DEVICE_NAME");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x10bd8)) GEN_EDX_ARG,&REFG(undefined, 0x10e273c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10c80)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10c80)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10bd8)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0xa8 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10b30)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10b30)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_SOUND_DRIVER_VERSION");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x109e0)) GEN_EDX_ARG,&REFG(undefined, 0x10e275c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10a88)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10a88)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x109e0)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0xfc GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10938)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10938)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_SOUND_DRIVER_LANGAGE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x107e8)) GEN_EDX_ARG,&REFG(undefined, 0x10e277c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10890)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10890)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x107e8)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x150 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10740)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10740)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_SOUND_DRIVER_DATE");
          uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x105f0)) GEN_EDX_ARG,&REFG(undefined, 0x10e279c),REFG(undefined4, 0x108cc50));
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10698)),uVar1);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10698)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x105f0)) GEN_EDX_ARG);
          uVar1 = F_0042a990(iVar5 + 0x1a4 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar1);
          uVar1 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10548)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar1);
          F_0042c880(((undefined1 *)(gen_frame + 0x10548)) GEN_EDX_ARG);
          iVar5 = iVar5 + 0x1f8;
        } while (iVar5 != REFG(int, 0x14a28f8));
      }
      break;
    case 0xc: ;
      uVar1 = REFG(undefined4, 0x14a2904);
      if (REFG(undefined4, 0x14a2904) != REFG(undefined4, 0x14a2908)) {
        do {
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_INPUT");
          uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x103f8)) GEN_EDX_ARG,&REFG(undefined, 0x10e27b0),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x104a0)),uVar3);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x104a0)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x103f8)) GEN_EDX_ARG);
          uVar3 = F_0042a990(uVar1 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar3);
          uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10350)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x10350)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_INPUT_NAME");
          uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x10200)) GEN_EDX_ARG,&REFG(undefined, 0x10e27c8),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x102a8)),uVar3);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x102a8)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10200)) GEN_EDX_ARG);
          uVar3 = F_0042a990(uVar1 + 0x54 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar3);
          uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10158)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x10158)) GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,"SYSTEM_INPUT_REMARKS");
          uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x10008)) GEN_EDX_ARG,&REFG(undefined, 0x10e27e4),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x100b0)),uVar3);
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x100b0)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x10008)) GEN_EDX_ARG);
          uVar3 = F_0042a990(uVar1 + 0xa8 GEN_EDX_ARG);
          F_0042e430(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,uVar3);
          uVar3 = F_0042cd30(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1101c)),&REFG(undefined, 0x14a2680));
          F_0042e360((undefined *)((int)this + 0x1b8) GEN_EDX_ARG,uVar3);
          F_0042c880(((undefined1 *)(gen_frame + 0x1101c)) GEN_EDX_ARG);
          uVar1 = uVar1 + 0xfc;
        } while (uVar1 != REFG(undefined4, 0x14a2908));
      }
    }
    (*(uint *)(gen_frame + 0x10004)) = (*(uint *)(gen_frame + 0x10004)) + 1;
  } while ((*(uint *)(gen_frame + 0x10004)) < 0xd);
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x121d4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x12228)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return (uint)uVar6;
}

/* ref: FUN_00a10b60 */
GEN_FRAME uint GEN_THISCALL F_00a10b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa10b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11490];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  HANDLE hProcess;
  BOOL BVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 * puVar11;
  
  (*(uint *)(gen_frame + 0x11488)) = 0xa10b6d;
  (*(uint *)(gen_frame + 0x11488)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(undefined * PTR32 *)(gen_frame + 0x10020)) = (undefined *)((int)this + 0x2b4);
  F_0042e430((undefined *)((int)this + 0x2b4) GEN_EDX_FWD,
               "\n\n-=-=-=-=-=-=- Proccess Information -=-=-=-=-=-=-\n\n");
  uVar8 = 0;
  (*(undefined4 *)(gen_frame + 0x10018)) = 0;
  piVar4 = (int *)F_004296a0(0x68,0,400);
  (*(int * PTR32 *)(gen_frame + 0x10014)) = piVar4;
  *piVar4 = (int)piVar4;
  piVar4[1] = (int)piVar4;
  piVar4[2] = (int)piVar4;
  *(undefined1 *)(piVar4 + 0x19) = 1;
  *(undefined1 *)((int)piVar4 + 0x65) = 1;
  (*(DWORD *)(gen_frame + 0x10320)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x10324)),0,0xffc);
  (*(DWORD *)(gen_frame + 0x10024)) = 0;
  gen_imp_EnumProcesses(&(*(DWORD *)(gen_frame + 0x10320)),0x1000,&(*(DWORD *)(gen_frame + 0x10024)));
  uVar9 = (*(DWORD *)(gen_frame + 0x10024)) >> 2;
  if (uVar9 != 0) {
    do {
      hProcess = gen_imp_OpenProcess(0x410,0,*(DWORD *)(((undefined1 *)(gen_frame + 0x10324)) + uVar8 * 4 - 4));
      if (hProcess != (HANDLE)0x0) {
        (*(HMODULE *)(gen_frame + 0x10028)) = (HMODULE)0x0;
        (*(DWORD *)(gen_frame + 0x1000c)) = 0;
        (*(CHAR *)(gen_frame + 0x11320)) = '\0';
        F_00c48350(((undefined1 *)(gen_frame + 0x11321)),0,0x103);
        BVar5 = gen_imp_EnumProcessModules(hProcess,&(*(HMODULE *)(gen_frame + 0x10028)),4,&(*(DWORD *)(gen_frame + 0x1000c)));
        if (BVar5 != 0) {
          gen_imp_GetModuleFileNameExA(hProcess,(*(HMODULE *)(gen_frame + 0x10028)),&(*(CHAR *)(gen_frame + 0x11320)),0x104);
          F_0042cc20(((undefined1 *)(gen_frame + 0x102cc)) GEN_EDX_ARG,&(*(CHAR *)(gen_frame + 0x11320)),REFG(undefined4, 0x108cc50));
          puVar6 = (undefined4 *)F_00a19220(((undefined1 *)(gen_frame + 0x10010)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x102cc)));
          *puVar6 = *(undefined4 *)(((undefined1 *)(gen_frame + 0x10324)) + uVar8 * 4 - 4);
          F_0042c880(((undefined1 *)(gen_frame + 0x102cc)) GEN_EDX_ARG);
          gen_imp_CloseHandle(hProcess);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  piVar4 = (int *)*(*(int * PTR32 *)(gen_frame + 0x10014));
  if (piVar4 != (*(int * PTR32 *)(gen_frame + 0x10014))) {
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x11424)),100,&REFG(undefined, 0x10e3450),piVar4[0x18]);
      F_0042cc20(((undefined1 *)(gen_frame + 0x10224)) GEN_EDX_ARG,&REFG(undefined, 0x10e3458),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x10128)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x11424)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x10278)) GEN_EDX_ARG,&REFG(undefined, 0x10e345c),REFG(undefined4, 0x108cc50));
      puVar11 = ((undefined1 *)(gen_frame + 0x10278));
      pvVar7 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x100d4)) GEN_EDX_ARG,piVar4 + 3);
      uVar8 = F_0042e360(pvVar7 GEN_EDX_ARG,puVar11);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x101d0)) GEN_EDX_ARG,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x100d4)) GEN_EDX_ARG);
      puVar11 = ((undefined1 *)(gen_frame + 0x10128));
      pvVar7 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x1002c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x101d0)));
      uVar8 = F_0042e360(pvVar7 GEN_EDX_ARG,puVar11);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x1017c)) GEN_EDX_ARG,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x1002c)) GEN_EDX_ARG);
      puVar11 = ((undefined1 *)(gen_frame + 0x10224));
      pvVar7 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0x10080)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1017c)));
      uVar8 = F_0042e360(pvVar7 GEN_EDX_ARG,puVar11);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x102cc)) GEN_EDX_ARG,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x10080)) GEN_EDX_ARG);
      F_0042e360((*(undefined * PTR32 *)(gen_frame + 0x10020)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x102cc)));
      F_0042c880(((undefined1 *)(gen_frame + 0x102cc)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x1017c)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x101d0)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x10278)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x10128)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x10224)) GEN_EDX_ARG);
      if (*(char *)((int)piVar4 + 0x65) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x65) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x65);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x65);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x65);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x65);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (*(int * PTR32 *)(gen_frame + 0x10014)));
  }
  F_00a18e30(((undefined1 *)(gen_frame + 0x10010)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x10020)),*(*(int * PTR32 *)(gen_frame + 0x10014)),(*(int * PTR32 *)(gen_frame + 0x10014)));
  uVar10 = F_00429760((*(int * PTR32 *)(gen_frame + 0x10014)),0x68,400);
  F_00c47745((*(uint *)(gen_frame + 0x11488)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return (uint)uVar10;
}

/* ref: Client::UI::Shell::ShellCommandWritePcInfo::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00a10ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa10ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x6f0];
  short sVar1;
  double dVar2;
  undefined * puVar3;
  byte bVar4;
  uint uVar5;
  undefined * PTR32 * ppuVar6;
  float * pfVar7;
  int iVar8;
  int * piVar9;
  undefined * PTR32 * ppuVar10;
  uint uVar11;
  undefined * pvVar12;
  undefined1 * this_00;
  uint uVar13;
  undefined * PTR32 * ppuVar14;
  undefined * pSVar15;
  gen_size32 sVar16;
  undefined * PTR32 * ppuVar17;
  
  (*(uint *)(gen_frame + 0x6dc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6e0);
  (*(undefined * PTR32 *)(gen_frame + 0xc0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) = (undefined * PTR32 *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = (undefined * PTR32 *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) = (undefined * PTR32 *)0x0;
  F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_FWD,0x40);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = REFG(undefined * PTR32 * PTR32, 0x1379694);
  uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3460));
  F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined1, 0x14ab071));
  F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  uVar13 = (uint)REFG(undefined1, 0x14ab0d4);
  uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"CLASSJOB");
  F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3474),uVar13);
  F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"LEVEL");
  F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar13,1);
  uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3480),uVar5 & 0xffff);
  F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (undefined * PTR32 *)0x0;
  ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
  ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
  do {
    uVar5 = F_00a3c850(&REFG(undefined, 0x14a4230) GEN_EDX_ARG,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = (undefined * PTR32 *)uVar5;
    ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"EQUIP[%d]",(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
    if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      if (ppuVar14 != (undefined * PTR32 *)0x0) {
        ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a1113a: ;
        F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
      }
    }
    else {
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
      if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a1113a;
    }
    ppuVar14 = ppuVar14 + 0x15;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
    F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
    ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3490),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
    if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      if (ppuVar14 != (undefined * PTR32 *)0x0) {
        ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a111f8: ;
        F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
      }
    }
    else {
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
      if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a111f8;
    }
    ppuVar14 = ppuVar14 + 0x15;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
    F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
    ppuVar6 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = ppuVar6;
  } while ((int)ppuVar6 < 0xe);
  if (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0) {
    ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"TERRITORY_TYPE");
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
    if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      if (ppuVar14 != (undefined * PTR32 *)0x0) {
        ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a112d4: ;
        F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
      }
    }
    else {
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
      if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a112d4;
    }
    ppuVar14 = ppuVar14 + 0x15;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
    F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
    ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e34a4),*(undefined4 *)&REFG(undefined2, 0x1379c78));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
    if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      if (ppuVar14 != (undefined * PTR32 *)0x0) {
        ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a11391: ;
        F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
      }
    }
    else {
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
      ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
      if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a11391;
    }
    ppuVar14 = ppuVar14 + 0x15;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
    F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) != (undefined * PTR32 *)0x0) {
      pfVar7 = (float *)F_00a5feb0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0xb0)) = *pfVar7;
      (*(float *)(gen_frame + 0xb4)) = pfVar7[1];
      (*(float *)(gen_frame + 0xb8)) = pfVar7[2];
      uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"GEN_LPANY");
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"%f,%f,%f",(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0xb0))),
                           (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0xb0))) >> 0x20),
                           (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0xb4))),
                           (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0xb4))) >> 0x20),
                           (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0xb8))),
                           (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0xb8))) >> 0x20));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
  }
  if ((ppuVar14 < ((undefined * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x12fd328) + 1)))) || (&REFG(undefined * PTR32, 0x12fd328) < ppuVar10)) {
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    if (ppuVar14 != (undefined * PTR32 *)0x0) {
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      goto LAB_00a114eb;
    }
  }
  else {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)&REFG(undefined * PTR32, 0x12fd328) - (int)ppuVar10) / 0x54)));
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    if (ppuVar14 != (undefined * PTR32 *)0x0) {
      ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a114eb: ;
      F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
    }
  }
  ppuVar14 = ppuVar14 + 0x15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
  if ((ppuVar14 < ((undefined * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x12fd328) + 1)))) || (&REFG(undefined * PTR32, 0x12fd328) < ppuVar10)) {
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) != (undefined * PTR32 *)0x0) {
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      goto LAB_00a11586;
    }
  }
  else {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)&REFG(undefined * PTR32, 0x12fd328) - (int)ppuVar10) / 0x54)));
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) != (undefined * PTR32 *)0x0) {
      ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a11586: ;
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      F_0042cbc0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) GEN_EDX_ARG,ppuVar6);
    }
  }
  ppuVar14 = ppuVar14 + 0x15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (undefined * PTR32 *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = (undefined * PTR32 *)(uint)REFG(undefined1, 0x1338ad4);
  if ((undefined * PTR32 *)(uint)REFG(undefined1, 0x1338ad4) != (undefined * PTR32 *)0x0) {
    do {
      ppuVar6 = (undefined * PTR32 *)F_00ae0850(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"GEN_LPANY MEMBER[%d]",(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a1167a: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a1167a;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) + 4);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a11736: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a11736;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"ENTITY ID");
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a117ed: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a117ed;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e34e0),*(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a118ad: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a118ad;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = ppuVar6;
    } while ((int)ppuVar6 < (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)));
  }
  if ((ppuVar14 < ((undefined * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x12fd328) + 1)))) || (&REFG(undefined * PTR32, 0x12fd328) < ppuVar10)) {
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    if (ppuVar14 != (undefined * PTR32 *)0x0) {
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      goto LAB_00a1196c;
    }
  }
  else {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)&REFG(undefined * PTR32, 0x12fd328) - (int)ppuVar10) / 0x54)));
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    if (ppuVar14 != (undefined * PTR32 *)0x0) {
      ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a1196c: ;
      F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
    }
  }
  ppuVar14 = ppuVar14 + 0x15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
  if ((ppuVar14 < ((undefined * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x12fd328) + 1)))) || (&REFG(undefined * PTR32, 0x12fd328) < ppuVar10)) {
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) != (undefined * PTR32 *)0x0) {
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      goto LAB_00a11a07;
    }
  }
  else {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)&REFG(undefined * PTR32, 0x12fd328) - (int)ppuVar10) / 0x54)));
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      F_0096ef20(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,1);
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    }
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) != (undefined * PTR32 *)0x0) {
      ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a11a07: ;
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      F_0042cbc0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) GEN_EDX_ARG,ppuVar6);
    }
  }
  ppuVar14 = ppuVar14 + 0x15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
  ppuVar6 = (undefined * PTR32 *)F_00a4ffd0();
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ppuVar6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (undefined * PTR32 *)0x0;
  do {
    sVar1 = *(short *)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8))) * 4 + 0x4ee);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8))) * 4 + 0x4ed;
    if (sVar1 != 0) {
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"QUEST ID");
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a11ba8: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a11ba8;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e34f0),(uint)*(ushort *)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1))
      ;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a11d1a: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a11d1a;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"QUEST SEQUENCE");
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a11e84: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a11e84;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)
                F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3504),(uint)*(byte *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 6));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a11ff6: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a11ff6;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"QUEST FLAGS");
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a12160: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a12160;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar6 = (undefined * PTR32 *)
                F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3514),(uint)*(byte *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 7));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a122d2: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a122d2;
      }
      ppuVar14 = ppuVar14 + 0x15;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = (undefined * PTR32 *)0x0;
      do {
        ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"QUEST VARS[%d]",(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ppuVar6;
        if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
          if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
            iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
            if (iVar8 == -1) goto LAB_00a1266e;
            uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
            uVar13 = iVar8 + 1;
            if (uVar5 < uVar13) {
              if (-(uVar5 >> 1) - 1 < uVar5) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar5 + (uVar5 >> 1);
              }
              if (uVar5 < uVar13) {
                uVar5 = uVar13;
              }
              F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
              ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
              ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
            }
          }
          if (ppuVar14 != (undefined * PTR32 *)0x0) {
            ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a12453: ;
            F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
          }
        }
        else {
          if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
            iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
            if (iVar8 == -1) goto LAB_00a1266e;
            uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
            uVar13 = iVar8 + 1;
            if (uVar5 < uVar13) {
              if (-(uVar5 >> 1) - 1 < uVar5) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar5 + (uVar5 >> 1);
              }
              if (uVar5 < uVar13) {
                uVar5 = uVar13;
              }
              F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
              ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
              ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
            }
          }
          ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0));
          if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a12453;
        }
        ppuVar14 = ppuVar14 + 0x15;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
        F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
        ppuVar6 = (undefined * PTR32 *)
                  F_0042ce40(((undefined1 *)(gen_frame + 0x580)),&REFG(undefined, 0x10e3528),
                               (uint)*((byte *)GEN_TOP(((int)((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) + 2) + (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))))));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ppuVar6;
        if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
          if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
            iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
            if (iVar8 == -1) goto LAB_00a1266e;
            uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
            uVar13 = iVar8 + 1;
            if (uVar5 < uVar13) {
              if (-(uVar5 >> 1) - 1 < uVar5) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar5 + (uVar5 >> 1);
              }
              if (uVar5 < uVar13) {
                uVar5 = uVar13;
              }
              F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
              ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
              ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
            }
          }
          if (ppuVar14 != (undefined * PTR32 *)0x0) {
            ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a125cf: ;
            F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
          }
        }
        else {
          if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
            iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
            if (iVar8 == -1) goto LAB_00a1266e;
            uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
            uVar13 = iVar8 + 1;
            if (uVar5 < uVar13) {
              if (-(uVar5 >> 1) - 1 < uVar5) {
                uVar5 = 0;
              }
              else {
                uVar5 = uVar5 + (uVar5 >> 1);
              }
              if (uVar5 < uVar13) {
                uVar5 = uVar13;
              }
              F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
              ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
              ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
            }
          }
          ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0));
          if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a125cf;
        }
        ppuVar14 = ppuVar14 + 0x15;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
        F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
        ppuVar6 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) + 1);
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
      } while ((int)ppuVar6 < 6);
    }
    iVar8 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) + 1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (undefined * PTR32 *)iVar8;
  } while (iVar8 < 0x1e);
  if ((ppuVar14 < ((undefined * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x12fd328) + 1)))) || (&REFG(undefined * PTR32, 0x12fd328) < ppuVar10)) {
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
      if (iVar8 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
      uVar13 = iVar8 + 1;
      if (uVar5 < uVar13) {
        if (-(uVar5 >> 1) - 1 < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar13) {
          uVar5 = uVar13;
        }
        F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
    }
    if (ppuVar14 != (undefined * PTR32 *)0x0) {
      ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
      goto LAB_00a12762;
    }
  }
  else {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)&REFG(undefined * PTR32, 0x12fd328) - (int)ppuVar10) / 0x54)));
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
      if (iVar8 == -1) {
LAB_00a1266e: ;
                    
        F_00c4579a("vector<T> too long");
      }
      uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
      uVar13 = iVar8 + 1;
      if (uVar5 < uVar13) {
        if (-(uVar5 >> 1) - 1 < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar13) {
          uVar5 = uVar13;
        }
        F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
        ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
    }
    if (ppuVar14 != (undefined * PTR32 *)0x0) {
      ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a12762: ;
      F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
    }
  }
  ppuVar14 = ppuVar14 + 0x15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
  if ((ppuVar14 < ((undefined * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x12fd328) + 1)))) || (&REFG(undefined * PTR32, 0x12fd328) < ppuVar10)) {
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
      if (iVar8 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
      uVar13 = iVar8 + 1;
      if (uVar5 < uVar13) {
        if (-(uVar5 >> 1) - 1 < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar13) {
          uVar5 = uVar13;
        }
        F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
    }
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) == (undefined * PTR32 *)0x0) goto LAB_00a128c5;
    ppuVar6 = &REFG(undefined * PTR32, 0x12fd328);
  }
  else {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)&REFG(undefined * PTR32, 0x12fd328) - (int)ppuVar10) / 0x54)));
    if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
      iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
      if (iVar8 == -1) {
                    
        F_00c4579a("vector<T> too long");
      }
      uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
      uVar13 = iVar8 + 1;
      if (uVar5 < uVar13) {
        if (-(uVar5 >> 1) - 1 < uVar5) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar5 + (uVar5 >> 1);
        }
        if (uVar5 < uVar13) {
          uVar5 = uVar13;
        }
        F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
      }
    }
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
    if ((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) == (undefined * PTR32 *)0x0) goto LAB_00a128c5;
    ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
  }
  ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
  F_0042cbc0((*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) GEN_EDX_ARG,ppuVar6);
LAB_00a128c5: ;
  ppuVar14 = ppuVar14 + 0x15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
  piVar9 = (int *)F_00424750(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (undefined *)piVar9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (undefined * PTR32 *)0x0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = (undefined * PTR32 *)0x0;
LAB_00a1292c: ;
  do {
    ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4));
    ppuVar17 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x2c))((*(undefined * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG);
    ppuVar6 = (undefined * PTR32 *)F_0043b860(uVar5 GEN_EDX_ARG,ppuVar6,ppuVar17);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ppuVar6;
    ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580)),"MACRO[%d][%d]",(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ppuVar6;
    if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
        if (iVar8 == -1) goto LAB_00a1266e;
        uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
        uVar13 = iVar8 + 1;
        if (uVar5 < uVar13) {
          if (-(uVar5 >> 1) - 1 < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar13) {
            uVar5 = uVar13;
          }
          F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
      }
      if (ppuVar14 != (undefined * PTR32 *)0x0) {
        ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a12ab0: ;
        F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
      }
    }
    else {
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
        if (iVar8 == -1) goto LAB_00a1266e;
        uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
        uVar13 = iVar8 + 1;
        if (uVar5 < uVar13) {
          if (-(uVar5 >> 1) - 1 < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar13) {
            uVar5 = uVar13;
          }
          F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
      }
      ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0));
      if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a12ab0;
    }
    ppuVar14 = ppuVar14 + 0x15;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14;
    F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
    ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) + 1;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ppuVar6;
    if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
        if (iVar8 == -1) goto LAB_00a1266e;
        uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
        uVar13 = iVar8 + 1;
        if (uVar5 < uVar13) {
          if (-(uVar5 >> 1) - 1 < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar13) {
            uVar5 = uVar13;
          }
          F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
      }
      if (ppuVar14 != (undefined * PTR32 *)0x0) {
        ppuVar6 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0))) * 0x15;
LAB_00a12c0e: ;
        F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar6);
      }
    }
    else {
      if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
        iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
        if (iVar8 == -1) goto LAB_00a1266e;
        uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
        uVar13 = iVar8 + 1;
        if (uVar5 < uVar13) {
          if (-(uVar5 >> 1) - 1 < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = uVar5 + (uVar5 >> 1);
          }
          if (uVar5 < uVar13) {
            uVar5 = uVar13;
          }
          F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
          ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        }
      }
      ppuVar6 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0));
      if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a12c0e;
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14 + 0x15;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (undefined * PTR32 *)0x0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) + 0x16;
    do {
      ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
      ppuVar6 = (undefined * PTR32 *)F_0042ce40(((undefined1 *)(gen_frame + 0x580))," LINE[%d]",(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)));
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ppuVar6;
      if ((ppuVar6 < ppuVar14) && (ppuVar10 <= ppuVar6)) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP((((int)ppuVar6 - (int)ppuVar10) / 0x54)));
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
            ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
          }
        }
        if (ppuVar14 != (undefined * PTR32 *)0x0) {
          ppuVar10 = ppuVar10 + (int)((int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4))) * 0x15;
LAB_00a12d99: ;
          F_0042cbc0(ppuVar14 GEN_EDX_ARG,ppuVar10);
        }
      }
      else {
        if (ppuVar14 == (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0))) {
          iVar8 = ((int)ppuVar14 - (int)ppuVar10) / 0x54;
          if (iVar8 == -1) goto LAB_00a1266e;
          uVar5 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) - (int)ppuVar10) / 0x54;
          uVar13 = iVar8 + 1;
          if (uVar5 < uVar13) {
            if (-(uVar5 >> 1) - 1 < uVar5) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar5 + (uVar5 >> 1);
            }
            if (uVar5 < uVar13) {
              uVar5 = uVar13;
            }
            F_0096abe0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar5);
            ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
          }
        }
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4));
        if (ppuVar14 != (undefined * PTR32 *)0x0) goto LAB_00a12d99;
      }
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) = ppuVar14 + 0x15;
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0));
      F_00a191a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)));
      iVar8 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) + 1;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc8)) = (undefined * PTR32 *)iVar8;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd0)) = ppuVar10 + 0x15;
      ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
    } while (iVar8 < 0xf);
    ppuVar6 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) + 1);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = ppuVar6;
    ppuVar14 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc));
  } while ((int)ppuVar6 < 100);
  ppuVar6 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = ppuVar6;
  if ((int)ppuVar6 < 1) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xcc)) = (undefined * PTR32 *)0x0;
    goto LAB_00a1292c;
  }
  F_00a191a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
  F_00a191a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
  (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (undefined *)*((gen_size32 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10)));
  uVar5 = 0;
  do {
    uVar13 = F_00414500((*(undefined * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG,uVar5);
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(uVar13 + 0x10))) {
    case 1: ;
      uVar13 = F_0042ce40(((undefined1 *)(gen_frame + 0x500)),*(undefined4 *)(uVar13 + 0xc));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar13);
      F_0042c880(((undefined1 *)(gen_frame + 0x500)) GEN_EDX_ARG);
      F_0042cc20(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG,&REFG(undefined, 0x10e1d6e),REFG(undefined4, 0x108cc50));
      F_00a191a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x580)));
      this_00 = ((undefined1 *)(gen_frame + 0x580));
      break;
    case 2: ;
      uVar11 = F_0042ce40(((undefined1 *)(gen_frame + 0x4a8)),*(undefined4 *)(uVar13 + 0xc));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x4a8)) GEN_EDX_ARG);
      uVar13 = F_0042ce40(((undefined1 *)(gen_frame + 0x450)),&REFG(undefined, 0x10e3548),*(undefined4 *)(uVar13 + 0x14));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar13);
      this_00 = ((undefined1 *)(gen_frame + 0x450));
      break;
    case 3: ;
      uVar11 = F_0042ce40(((undefined1 *)(gen_frame + 0x3f8)),*(undefined4 *)(uVar13 + 0xc));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x3f8)) GEN_EDX_ARG);
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = *(undefined * PTR32 * PTR32 *)(uVar13 + 0x14);
      dVar2 = (double)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 * PTR32 *)(uVar13 + 0x14))));
      uVar13 = F_0042ce40(((undefined1 *)(gen_frame + 0x3a0)),&REFG(undefined, 0x10e354c),(int)(ulonglong)gen_d2bits(dVar2),
                            (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar13);
      this_00 = ((undefined1 *)(gen_frame + 0x3a0));
      break;
    case 4: ;
      uVar11 = F_0042ce40(((undefined1 *)(gen_frame + 0x348)),*(undefined4 *)(uVar13 + 0xc));
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0x348)) GEN_EDX_ARG);
      uVar13 = F_0042a990(*(undefined4 *)(uVar13 + 0x14) GEN_EDX_ARG);
      uVar13 = F_0042ce40(((undefined1 *)(gen_frame + 0x2f0)),&REFG(undefined, 0x10e3550),uVar13);
      F_00a19120(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,uVar13);
      this_00 = ((undefined1 *)(gen_frame + 0x2f0));
      break;
    default: ;
      goto switchD_00a12e5e_default;
    }
    F_0042c880(this_00 GEN_EDX_ARG);
switchD_00a12e5e_default: ;
    pSVar15 = (*(undefined * PTR32 *)(gen_frame + 0xc0));
    uVar5 = uVar5 + 1;
    if (0x1c0 < uVar5) {
      F_00a0f440((*(undefined * PTR32 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
      F_00a0db90(pSVar15 GEN_EDX_ARG);
      F_00a0dc80(pSVar15 GEN_EDX_ARG);
      F_00a10b60(pSVar15 GEN_EDX_ARG);
      F_00a191a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
      F_00a191a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x12fd328));
      pSVar15 = pSVar15 + 0x164;
      F_0042e430(pSVar15 GEN_EDX_ARG,"-=-=-=-=-=-=- Game Information -=-=-=-=-=-=-\n");
      iVar8 = ((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xdc)) - (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8))) / 0x54;
      if (0 < iVar8) {
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ((undefined * PTR32 *)GEN_TOP(((iVar8 - 1U >> 1) + 1)));
        ppuVar10 = (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8));
        do {
          if ((**ppuVar10 == '\0') && (*ppuVar10[0x15] == '\0')) {
            puVar3 = &REFG(undefined, 0x10e3584);
          }
          else {
            F_0042e360(pSVar15 GEN_EDX_ARG,ppuVar10);
            F_0042e370(pSVar15 GEN_EDX_ARG,&REFG(undefined, 0x10e3588));
            F_0042e360(pSVar15 GEN_EDX_ARG,ppuVar10 + 0x15);
            puVar3 = &REFG(undefined, 0x10e358c);
          }
          F_0042e370(pSVar15 GEN_EDX_ARG,puVar3);
          ppuVar10 = ppuVar10 + 0x2a;
          ppuVar14 = (undefined * PTR32 *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) - 1);
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd4)) = ppuVar14;
        } while (ppuVar14 != (undefined * PTR32 *)0x0);
      }
      F_00c4b7c2((__time64_t *)&(*(float *)(gen_frame + 0xb8)));
      F_00c4f4ca(&(*(undefined4 *)(gen_frame + 0x55c)),&(*(float *)(gen_frame + 0xb8)));
      F_00a14000(((undefined1 *)(gen_frame + 0x5d8)),"Game_Info_%04d%02d%02d%02d%02d%02d.txt",(*(int *)(gen_frame + 0x570)) + 0x76c,
                   (*(int *)(gen_frame + 0x56c)) + 1,(*(undefined4 *)(gen_frame + 0x568)),(*(undefined4 *)(gen_frame + 0x564)),(*(undefined4 *)(gen_frame + 0x560)),(*(undefined4 *)(gen_frame + 0x55c)));
      uVar5 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
      F_0042e170(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG,uVar5);
      F_0042a3a0(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x580)),1);
      F_0042c880(((undefined1 *)(gen_frame + 0x580)) GEN_EDX_ARG);
      F_0042a2a0(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG,"\\GameInfo\\");
      F_00c511e6(((undefined1 *)(gen_frame + 0xe8)));
      F_0042a2a0(((undefined1 *)(gen_frame + 0xe8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5d8)));
      F_00a19900(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xe8)),2,0x40,1);
      bVar4 = F_00a0c9f0(pSVar15,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0);
      if (bVar4 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (undefined *)((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1U);
        pvVar12 = (undefined *)F_00406a50((int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1U);
        F_00c48350(pvVar12,0,(gen_size32)(*(undefined * PTR32 *)(gen_frame + 0xbc)));
        bVar4 = F_00a0c9f0(pSVar15,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),pvVar12);
        if (bVar4 != 0) {
          F_00a17dc0(((undefined1 *)(gen_frame + 0x8)),pvVar12);
        }
        F_00406b30(pvVar12);
      }
      bVar4 = F_00a0c9f0((*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x1b8,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0);
      if (bVar4 != 0) {
        sVar16 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1;
        pvVar12 = (undefined *)F_00406a50(sVar16);
        F_00c48350(pvVar12,0,sVar16);
        bVar4 = F_00a0c9f0((*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x1b8,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),pvVar12);
        if (bVar4 != 0) {
          F_00a17dc0(((undefined1 *)(gen_frame + 0x8)),pvVar12);
        }
        F_00406b30(pvVar12);
      }
      bVar4 = F_00a0c9f0((*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x20c,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0);
      if (bVar4 != 0) {
        sVar16 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1;
        pvVar12 = (undefined *)F_00406a50(sVar16);
        F_00c48350(pvVar12,0,sVar16);
        bVar4 = F_00a0c9f0((*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x20c,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),pvVar12);
        if (bVar4 != 0) {
          F_00a17dc0(((undefined1 *)(gen_frame + 0x8)),pvVar12);
        }
        F_00406b30(pvVar12);
      }
      (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x2b4;
      bVar4 = F_00a0c9f0((*(undefined * PTR32 *)(gen_frame + 0xc0)) + 0x2b4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0);
      if (bVar4 != 0) {
        sVar16 = (int)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1;
        pvVar12 = (undefined *)F_00406a50(sVar16);
        F_00c48350(pvVar12,0,sVar16);
        bVar4 = F_00a0c9f0((*(undefined * PTR32 *)(gen_frame + 0xbc)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),pvVar12);
        if (bVar4 != 0) {
          F_00a17dc0(((undefined1 *)(gen_frame + 0x8)),pvVar12);
        }
        F_00406b30(pvVar12);
      }
      F_00a19a40(((undefined * PTR32 * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x68))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x68)));
      F_00429fa0();
      F_00969840(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xd8)) GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x6dc)) ^ (uint)(uint)(gen_frame + 0x6e0) GEN_EDX_ARG);
      return 0;
    }
  } while( true );
}

/* ref: FUN_00a133d0 */
GEN_FRAME uint GEN_THISCALL F_00a133d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa133d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10e36dc));
  return (uint)in_ecx;
}

/* ref: std::codecvt_base::vf1 */
GEN_NOFRAME byte F_00a13410(void)
{
  GEN_ENTER(0xa13410u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: std::codecvt_base::vf2 */
GEN_NOFRAME uint F_00a13420(void)
{
  GEN_ENTER(0xa13420u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: std::codecvt_base::vf3 */
GEN_NOFRAME uint F_00a13430(void)
{
  GEN_ENTER(0xa13430u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: std::codecvt_base::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a13440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::ios_base::width */
GEN_FRAME uint GEN_THISCALL F_00a134b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa134b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x20);
  *(undefined4 *)(this + 0x20) = param_1;
  *(undefined4 *)(this + 0x24) = param_2;
  return uVar1;
}

/* ref: FUN_00a134e0 */
GEN_NOFRAME uint GEN_THISCALL F_00a134e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa134e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xfc GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00a13510 */
GEN_NOFRAME uint GEN_THISCALL F_00a13510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa13510u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xfc GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x150 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x1a4 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x1f8 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x24c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x2a0 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x2f4 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x348 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x39c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x3f0 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x444 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x498 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x4ec GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x540 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00a135d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a135d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa135d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x540) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x4ec) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x498) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x444) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x3f0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x39c) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x348) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x2f4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x2a0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x24c) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1f8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x1a4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x150) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xfc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a13690 */
GEN_NOFRAME uint GEN_THISCALL F_00a13690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa13690u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xfc GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x150 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0x1a4 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00a136d0 */
GEN_NOFRAME uint GEN_THISCALL F_00a136d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa136d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x1a4) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x150) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xfc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a13710 */
GEN_NOFRAME uint GEN_THISCALL F_00a13710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa13710u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xa8 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00a13730 */
GEN_NOFRAME uint GEN_THISCALL F_00a13730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa13730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a13750 */
GEN_FRAME uint GEN_THISCALL F_00a13750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13750u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00a13770 */
GEN_FRAME uint GEN_THISCALL F_00a13770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13770u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a137c0 */
GEN_FRAME uint GEN_THISCALL F_00a137c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa137c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a13810 */
GEN_FRAME uint GEN_THISCALL F_00a13810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13810u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a13860 */
GEN_FRAME uint GEN_THISCALL F_00a13860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13860u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a13970 */
GEN_FRAME uint GEN_THISCALL F_00a13970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13970u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a139e0 */
GEN_FRAME byte GEN_THISCALL F_00a139e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa139e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a13a10 */
GEN_FRAME uint GEN_THISCALL F_00a13a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa13a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_4;
  *(undefined4 *)((int)this + 0x20) = param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(uint *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_6;
  return param_3;
}

/* ref: FUN_00a13ab0 */
GEN_FRAME uint GEN_STDCALL F_00a13ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x594,400);
  return (uint)uVar1;
}

/* ref: FUN_00a13b40 */
GEN_FRAME uint GEN_STDCALL F_00a13b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1f8,400);
  return (uint)uVar1;
}

/* ref: FUN_00a13bd0 */
GEN_FRAME uint GEN_STDCALL F_00a13bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xfc,400);
  return (uint)uVar1;
}

/* ref: FUN_00a13c50 */
GEN_FRAME uint GEN_THISCALL F_00a13c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa13c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a13c70 */
GEN_FRAME uint GEN_THISCALL F_00a13c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa13c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a13c90 */
GEN_FRAME uint GEN_THISCALL F_00a13c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa13c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a13cb0 */
GEN_FRAME uint GEN_THISCALL F_00a13cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa13cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a13d10 */
GEN_FRAME uint GEN_STDCALL F_00a13d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13d10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_00a13d40 */
GEN_FRAME uint GEN_THISCALL F_00a13d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa13d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a13d60 */
GEN_FRAME uint F_00a13d60(unsigned int gen_a0)
{
  GEN_ENTER(0xa13d60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a13d70 */
GEN_FRAME uint F_00a13d70(unsigned int gen_a0)
{
  GEN_ENTER(0xa13d70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a13da0 */
GEN_FRAME uint GEN_STDCALL F_00a13da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x68,400);
  return (uint)uVar1;
}

/* ref: FUN_00a13dc0 */
GEN_FRAME uint GEN_THISCALL F_00a13dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa13dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a13dd0 */
GEN_FRAME uint GEN_STDCALL F_00a13dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13dd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x594,param_2,400);
  return uVar1;
}

/* ref: FUN_00a13e10 */
GEN_FRAME uint GEN_STDCALL F_00a13e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13e10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1f8,param_2,400);
  return uVar1;
}

/* ref: FUN_00a13e50 */
GEN_FRAME uint GEN_STDCALL F_00a13e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xfc,param_2,400);
  return uVar1;
}

/* ref: FUN_00a13e90 */
GEN_FRAME uint GEN_STDCALL F_00a13e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13e90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x150,param_2,400);
  return uVar1;
}

/* ref: FUN_00a13ed0 */
GEN_FRAME uint GEN_STDCALL F_00a13ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13ed0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_00a13f10 */
GEN_FRAME uint GEN_THISCALL F_00a13f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa13f10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00a13f30 */
GEN_FRAME uint F_00a13f30(unsigned int gen_a0)
{
  GEN_ENTER(0xa13f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 100;
}

/* ref: FUN_00a13f40 */
GEN_FRAME uint F_00a13f40(unsigned int gen_a0)
{
  GEN_ENTER(0xa13f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x65;
}

/* ref: FUN_00a13f50 */
GEN_FRAME uint F_00a13f50(unsigned int gen_a0)
{
  GEN_ENTER(0xa13f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a13f60 */
GEN_FRAME uint F_00a13f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa13f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a13f70 */
GEN_FRAME uint F_00a13f70(unsigned int gen_a0)
{
  GEN_ENTER(0xa13f70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x65);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x65);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a13f90 */
GEN_FRAME uint GEN_STDCALL F_00a13f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa13f90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x68,param_2,400);
  return uVar1;
}

/* ref: FUN_00a13fb0 */
GEN_FRAME uint GEN_THISCALL F_00a13fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa13fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a13fd0 */
GEN_FRAME uint F_00a13fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa13fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x65)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x65);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a14000 */
GEN_FRAME uint F_00a14000(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa14000u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c475c9(param_1,0xff,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00a14020 */
GEN_FRAME uint F_00a14020(unsigned int gen_a0)
{
  GEN_ENTER(0xa14020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14030 */
GEN_FRAME uint F_00a14030(unsigned int gen_a0)
{
  GEN_ENTER(0xa14030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14040 */
GEN_FRAME uint F_00a14040(unsigned int gen_a0)
{
  GEN_ENTER(0xa14040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14050 */
GEN_FRAME uint F_00a14050(unsigned int gen_a0)
{
  GEN_ENTER(0xa14050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14060 */
GEN_FRAME uint F_00a14060(unsigned int gen_a0)
{
  GEN_ENTER(0xa14060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14090 */
GEN_FRAME uint GEN_THISCALL F_00a14090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa14090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a140b0 */
GEN_FRAME uint GEN_THISCALL F_00a140b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa140b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  F_0042cbc0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,param_1 + 0xfc);
  F_0042cbc0((undefined *)((int)this + 0x150) GEN_EDX_ARG,param_1 + 0x150);
  F_0042cbc0((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,param_1 + 0x1a4);
  F_0042cbc0((undefined *)((int)this + 0x1f8) GEN_EDX_ARG,param_1 + 0x1f8);
  F_0042cbc0((undefined *)((int)this + 0x24c) GEN_EDX_ARG,param_1 + 0x24c);
  F_0042cbc0((undefined *)((int)this + 0x2a0) GEN_EDX_ARG,param_1 + 0x2a0);
  F_0042cbc0((undefined *)((int)this + 0x2f4) GEN_EDX_ARG,param_1 + 0x2f4);
  F_0042cbc0((undefined *)((int)this + 0x348) GEN_EDX_ARG,param_1 + 0x348);
  F_0042cbc0((undefined *)((int)this + 0x39c) GEN_EDX_ARG,param_1 + 0x39c);
  F_0042cbc0((undefined *)((int)this + 0x3f0) GEN_EDX_ARG,param_1 + 0x3f0);
  F_0042cbc0((undefined *)((int)this + 0x444) GEN_EDX_ARG,param_1 + 0x444);
  F_0042cbc0((undefined *)((int)this + 0x498) GEN_EDX_ARG,param_1 + 0x498);
  F_0042cbc0((undefined *)((int)this + 0x4ec) GEN_EDX_ARG,param_1 + 0x4ec);
  F_0042cbc0((undefined *)((int)this + 0x540) GEN_EDX_ARG,param_1 + 0x540);
  return (uint)this;
}

/* ref: FUN_00a141f0 */
GEN_FRAME uint GEN_THISCALL F_00a141f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa141f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  F_0042cbc0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,param_1 + 0xfc);
  F_0042cbc0((undefined *)((int)this + 0x150) GEN_EDX_ARG,param_1 + 0x150);
  F_0042cbc0((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,param_1 + 0x1a4);
  return (uint)this;
}

/* ref: FUN_00a14260 */
GEN_FRAME uint GEN_THISCALL F_00a14260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  return (uint)this;
}

/* ref: FUN_00a142a0 */
GEN_FRAME uint GEN_THISCALL F_00a142a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa142a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042cbc0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  F_0042cbc0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,param_1 + 0xfc);
  return (uint)this;
}

/* ref: FUN_00a14310 */
GEN_NOFRAME uint GEN_THISCALL F_00a14310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa14310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x65) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x65) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x65) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x65) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x65);
    }
    if (*(char *)(*(int *)this + 0x65) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a14390 */
GEN_FRAME uint F_00a14390(unsigned int gen_a0)
{
  GEN_ENTER(0xa14390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a143a0 */
GEN_FRAME uint F_00a143a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa143a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a143b0 */
GEN_FRAME uint F_00a143b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa143b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a143c0 */
GEN_FRAME uint F_00a143c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa143c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a143d0 */
GEN_FRAME uint F_00a143d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa143d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a143e0 */
GEN_FRAME uint F_00a143e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa143e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a143f0 */
GEN_FRAME uint F_00a143f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa143f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14400 */
GEN_FRAME uint F_00a14400(unsigned int gen_a0)
{
  GEN_ENTER(0xa14400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14420 */
GEN_FRAME byte F_00a14420(void)
{
  GEN_ENTER(0xa14420u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a14430 */
GEN_FRAME uint F_00a14430(unsigned int gen_a0)
{
  GEN_ENTER(0xa14430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14440 */
GEN_FRAME byte F_00a14440(void)
{
  GEN_ENTER(0xa14440u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a14450 */
GEN_FRAME byte F_00a14450(void)
{
  GEN_ENTER(0xa14450u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a14460 */
GEN_FRAME byte F_00a14460(void)
{
  GEN_ENTER(0xa14460u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00a14470 */
GEN_FRAME uint F_00a14470(unsigned int gen_a0)
{
  GEN_ENTER(0xa14470u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14480 */
GEN_FRAME uint GEN_THISCALL F_00a14480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,param_1 + 0xfc);
  F_0042ccf0((undefined *)((int)this + 0x150) GEN_EDX_ARG,param_1 + 0x150);
  F_0042ccf0((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,param_1 + 0x1a4);
  F_0042ccf0((undefined *)((int)this + 0x1f8) GEN_EDX_ARG,param_1 + 0x1f8);
  F_0042ccf0((undefined *)((int)this + 0x24c) GEN_EDX_ARG,param_1 + 0x24c);
  F_0042ccf0((undefined *)((int)this + 0x2a0) GEN_EDX_ARG,param_1 + 0x2a0);
  F_0042ccf0((undefined *)((int)this + 0x2f4) GEN_EDX_ARG,param_1 + 0x2f4);
  F_0042ccf0((undefined *)((int)this + 0x348) GEN_EDX_ARG,param_1 + 0x348);
  F_0042ccf0((undefined *)((int)this + 0x39c) GEN_EDX_ARG,param_1 + 0x39c);
  F_0042ccf0((undefined *)((int)this + 0x3f0) GEN_EDX_ARG,param_1 + 0x3f0);
  F_0042ccf0((undefined *)((int)this + 0x444) GEN_EDX_ARG,param_1 + 0x444);
  F_0042ccf0((undefined *)((int)this + 0x498) GEN_EDX_ARG,param_1 + 0x498);
  F_0042ccf0((undefined *)((int)this + 0x4ec) GEN_EDX_ARG,param_1 + 0x4ec);
  F_0042ccf0((undefined *)((int)this + 0x540) GEN_EDX_ARG,param_1 + 0x540);
  return (uint)this;
}

/* ref: FUN_00a145c0 */
GEN_FRAME uint GEN_THISCALL F_00a145c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa145c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,param_1 + 0xfc);
  F_0042ccf0((undefined *)((int)this + 0x150) GEN_EDX_ARG,param_1 + 0x150);
  F_0042ccf0((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,param_1 + 0x1a4);
  return (uint)this;
}

/* ref: FUN_00a14630 */
GEN_FRAME uint GEN_THISCALL F_00a14630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  return (uint)this;
}

/* ref: FUN_00a14670 */
GEN_FRAME uint GEN_THISCALL F_00a14670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,param_1 + 0xa8);
  F_0042ccf0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,param_1 + 0xfc);
  return (uint)this;
}

/* ref: FUN_00a146f0 */
GEN_FRAME uint F_00a146f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa146f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14700 */
GEN_FRAME uint F_00a14700(unsigned int gen_a0)
{
  GEN_ENTER(0xa14700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14710 */
GEN_FRAME uint F_00a14710(unsigned int gen_a0)
{
  GEN_ENTER(0xa14710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14720 */
GEN_FRAME uint F_00a14720(unsigned int gen_a0)
{
  GEN_ENTER(0xa14720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14730 */
GEN_FRAME uint F_00a14730(unsigned int gen_a0)
{
  GEN_ENTER(0xa14730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14780 */
GEN_FRAME uint F_00a14780(unsigned int gen_a0)
{
  GEN_ENTER(0xa14780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14790 */
GEN_FRAME uint GEN_THISCALL F_00a14790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a147b0 */
GEN_FRAME uint GEN_STDCALL F_00a147b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa147b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  return (uint)param_1;
}

/* ref: FUN_00a14800 */
GEN_FRAME uint GEN_THISCALL F_00a14800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a135d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a14830 */
GEN_FRAME uint GEN_THISCALL F_00a14830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x1a4) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x150) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xfc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  F_0042c880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a14890 */
GEN_FRAME uint GEN_THISCALL F_00a14890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xa8) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  F_0042c880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a148d0 */
GEN_FRAME uint F_00a148d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa148d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a148e0 */
GEN_FRAME uint F_00a148e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa148e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a148f0 */
GEN_FRAME uint F_00a148f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa148f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14900 */
GEN_FRAME uint F_00a14900(unsigned int gen_a0)
{
  GEN_ENTER(0xa14900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14910 */
GEN_FRAME uint F_00a14910(unsigned int gen_a0)
{
  GEN_ENTER(0xa14910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a14990 */
GEN_FRAME uint GEN_THISCALL F_00a14990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  *(*(int * PTR32 *)&gen_args[1]) = iVar1;
  F_00c45bc0((undefined *)&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_FWD,0);
  if (*(int *)(iVar1 + 4) != -1) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  F_00c45be8(&(*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  return (uint)piVar2;
}

/* ref: FUN_00a14a00 */
GEN_FRAME uint GEN_STDCALL F_00a14a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00a14a30 */
GEN_FRAME uint GEN_THISCALL F_00a14a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_00a14a80 */
GEN_FRAME uint GEN_THISCALL F_00a14a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa14a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(byte *)((int)this + param_1) = (byte)param_3;
    return (uint)(byte)param_3;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  pvVar1 = F_00c48350((undefined *)((int)this + param_1),(int)(char)(byte)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_00a14ad0 */
GEN_FRAME uint GEN_THISCALL F_00a14ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14af0 */
GEN_FRAME uint F_00a14af0(unsigned int gen_a0)
{
  GEN_ENTER(0xa14af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = F_004069f0(param_1), uVar1 == 0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00a14bf0 */
GEN_FRAME byte GEN_THISCALL F_00a14bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a14c80 */
GEN_FRAME uint GEN_THISCALL F_00a14c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14c90 */
GEN_FRAME byte GEN_THISCALL F_00a14c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14cb0 */
GEN_FRAME uint GEN_THISCALL F_00a14cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14cc0 */
GEN_FRAME byte GEN_THISCALL F_00a14cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14ce0 */
GEN_FRAME uint GEN_THISCALL F_00a14ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14cf0 */
GEN_FRAME byte GEN_THISCALL F_00a14cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14d10 */
GEN_FRAME uint GEN_THISCALL F_00a14d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14d20 */
GEN_FRAME byte GEN_THISCALL F_00a14d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14d60 */
GEN_FRAME uint GEN_THISCALL F_00a14d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a14d70 */
GEN_FRAME byte GEN_THISCALL F_00a14d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a14da0 */
GEN_FRAME uint F_00a14da0(unsigned int gen_a0)
{
  GEN_ENTER(0xa14da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a14dc0 */
GEN_FRAME uint GEN_THISCALL F_00a14dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa14dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(int *)((int)this + 0x10) = (int)this + 8;
  *(int *)((int)this + 0x20) = (int)this + 0x18;
  *(int *)((int)this + 0x24) = (int)this + 0x1c;
  *(bool *)((int)this + 0x50) = param_2 == 1;
  *(int *)((int)this + 0x30) = (int)this + 0x28;
  *(undefined1 *)((int)this + 0x49) = 0;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xc);
  *(int *)((int)this + 0x34) = (int)this + 0x2c;
  *(undefined4 *)((int)this + 0xc) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x24) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  if (param_1 != 0) {
    *(uint *)((int)this + 0x10) = param_1 + 8;
    *(uint *)((int)this + 0x14) = param_1 + 8;
    *(uint *)((int)this + 0x20) = param_1;
    *(uint *)((int)this + 0x24) = param_1;
    *(uint *)((int)this + 0x30) = param_1 + 4;
    *(uint *)((int)this + 0x34) = param_1 + 4;
  }
  *(uint *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x14a266c);
  *(undefined4 *)((int)this + 0x44) = 0;
  return param_1;
}

/* ref: FUN_00a14e60 */
GEN_FRAME uint GEN_THISCALL F_00a14e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    *(undefined4 *)((int)this + 0x44) = 0;
    return uVar1;
  }
  *(int * PTR32 *)((int)this + 0x44) = param_1;
  uVar1 = F_00479210(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back */
GEN_NOFRAME uint GEN_THISCALL F_00a14ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa14ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * pbVar2;
  
  pbVar2 = this + 0x48;
  if (((undefined *)GEN_TOP(**(uint * PTR32 *)(this + 0x10))) == pbVar2) {
    uVar1 = *(undefined4 *)(this + 0x40);
    **(uint * PTR32 *)(this + 0x10) = *(uint *)(this + 0x3c);
    **(undefined4 * PTR32 *)(this + 0x20) = uVar1;
    pbVar2 = (undefined *)0x0;
    **(undefined4 * PTR32 *)(this + 0x30) = 0;
  }
  return (uint)pbVar2;
}

/* ref: FUN_00a14ee0 */
GEN_FRAME uint GEN_STDCALL F_00a14ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a14f00 */
GEN_FRAME uint GEN_THISCALL F_00a14f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x594;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a14f40 */
GEN_FRAME uint GEN_STDCALL F_00a14f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a14f60 */
GEN_FRAME uint GEN_THISCALL F_00a14f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1f8;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a14fa0 */
GEN_FRAME uint GEN_STDCALL F_00a14fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa14fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a14fc0 */
GEN_FRAME uint GEN_THISCALL F_00a14fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa14fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xfc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a15000 */
GEN_FRAME uint GEN_STDCALL F_00a15000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a15020 */
GEN_FRAME uint GEN_THISCALL F_00a15020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x150;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a15060 */
GEN_FRAME uint GEN_STDCALL F_00a15060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a15080 */
GEN_FRAME uint GEN_THISCALL F_00a15080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_00a150c0 */
GEN_FRAME uint GEN_THISCALL F_00a150c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa150c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x18;
  return (uint)in_ecx;
}

/* ref: FUN_00a150e0 */
GEN_FRAME uint GEN_THISCALL F_00a150e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa150e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a150f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a150f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa150f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x65) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x65) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x65);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x65);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x65);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a15140 */
GEN_FRAME uint GEN_THISCALL F_00a15140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a15180 */
GEN_FRAME uint GEN_THISCALL F_00a15180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x65) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00a151e0 */
GEN_FRAME uint GEN_THISCALL F_00a151e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa151e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x65))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a15240 */
GEN_FRAME unsigned int F_00a15240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a15260 */
GEN_FRAME unsigned int GEN_STDCALL F_00a15260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15260u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a140b0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00a15280 */
GEN_FRAME unsigned int GEN_STDCALL F_00a15280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15280u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00a141f0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00a152a0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a152a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa152a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_0042cbc0((undefined *)((int)param_1 + 0x54) GEN_EDX_ARG,param_2 + 0x54);
    F_0042cbc0((undefined *)((int)param_1 + 0xa8) GEN_EDX_ARG,param_2 + 0xa8);
  }
  return;
}

/* ref: FUN_00a152e0 */
GEN_FRAME unsigned int GEN_STDCALL F_00a152e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa152e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
    F_0042cbc0((undefined *)((int)param_1 + 0x54) GEN_EDX_ARG,param_2 + 0x54);
    F_0042cbc0((undefined *)((int)param_1 + 0xa8) GEN_EDX_ARG,param_2 + 0xa8);
    F_0042cbc0((undefined *)((int)param_1 + 0xfc) GEN_EDX_ARG,param_2 + 0xfc);
  }
  return;
}

/* ref: FUN_00a15340 */
GEN_NOFRAME uint GEN_THISCALL F_00a15340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa15340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a14310(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a15350 */
GEN_FRAME uint GEN_THISCALL F_00a15350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  in_ecx[1] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10e36f0));
  return (uint)in_ecx;
}

/* ref: codecvt_DDH_std::vf4 */
GEN_FRAME uint GEN_THISCALL F_00a15380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa15380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}

/* ref: codecvt_DDH_std::vf5 */
GEN_FRAME uint GEN_THISCALL F_00a153a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa153a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  *param_4 = param_2;
  *param_7 = param_5;
  return 3;
}

/* ref: codecvt_DDH_std::vf6 */
GEN_FRAME uint GEN_THISCALL F_00a153c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa153c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *param_4 = param_2;
  return 3;
}

/* ref: codecvt_DDH_std::vf7 */
GEN_FRAME uint GEN_THISCALL F_00a153e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa153e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  
  uVar1 = param_3 - param_2;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  return uVar1;
}

/* ref: codecvt_DDH_std::vf0 */
GEN_FRAME uint GEN_THISCALL F_00a15400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a15440 */
GEN_NOFRAME uint GEN_THISCALL F_00a15440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa15440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a14310(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a15450 */
GEN_FRAME uint GEN_THISCALL F_00a15450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a15470 */
GEN_FRAME uint F_00a15470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15470u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar2 - 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,iVar2 - 0x54);
      F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,iVar2);
      F_0042ccf0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,iVar2 + 0x54);
      F_0042ccf0((undefined *)((int)this + 0x150) GEN_EDX_ARG,iVar2 + 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,iVar2 + 0xfc);
      F_0042ccf0((undefined *)((int)this + 0x1f8) GEN_EDX_ARG,iVar2 + 0x150);
      F_0042ccf0((undefined *)((int)this + 0x24c) GEN_EDX_ARG,iVar2 + 0x1a4);
      F_0042ccf0((undefined *)((int)this + 0x2a0) GEN_EDX_ARG,iVar2 + 0x1f8);
      F_0042ccf0((undefined *)((int)this + 0x2f4) GEN_EDX_ARG,iVar2 + 0x24c);
      F_0042ccf0((undefined *)((int)this + 0x348) GEN_EDX_ARG,iVar2 + 0x2a0);
      F_0042ccf0((undefined *)((int)this + 0x39c) GEN_EDX_ARG,iVar2 + 0x2f4);
      F_0042ccf0((undefined *)((int)this + 0x3f0) GEN_EDX_ARG,iVar2 + 0x348);
      F_0042ccf0((undefined *)((int)this + 0x444) GEN_EDX_ARG,iVar2 + 0x39c);
      F_0042ccf0((undefined *)((int)this + 0x498) GEN_EDX_ARG,iVar2 + 0x3f0);
      F_0042ccf0((undefined *)((int)this + 0x4ec) GEN_EDX_ARG,iVar2 + 0x444);
      F_0042ccf0((undefined *)((int)this + 0x540) GEN_EDX_ARG,iVar2 + 0x498);
      iVar1 = iVar2 + 0x4ec;
      this = (undefined *)((int)this + 0x594);
      iVar2 = iVar2 + 0x594;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a155e0 */
GEN_FRAME uint F_00a155e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa155e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar2 - 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,iVar2 - 0x54);
      F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,iVar2);
      F_0042ccf0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,iVar2 + 0x54);
      F_0042ccf0((undefined *)((int)this + 0x150) GEN_EDX_ARG,iVar2 + 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x1a4) GEN_EDX_ARG,iVar2 + 0xfc);
      iVar1 = iVar2 + 0x150;
      this = (undefined *)((int)this + 0x1f8);
      iVar2 = iVar2 + 0x1f8;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a15680 */
GEN_FRAME uint F_00a15680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15680u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_0042ccf0(this GEN_EDX_ARG,iVar1);
    F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,iVar1 + 0x54);
    F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,iVar1 + 0xa8);
    iVar1 = iVar1 + 0xfc;
    this = (undefined *)((int)this + 0xfc);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_00a156e0 */
GEN_FRAME uint F_00a156e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa156e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  undefined * this;
  
  if (param_1 != param_2) {
    iVar2 = param_1 + 0xa8;
    this = param_3;
    do {
      F_0042ccf0(this GEN_EDX_ARG,iVar2 - 0xa8);
      F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,iVar2 - 0x54);
      F_0042ccf0((undefined *)((int)this + 0xa8) GEN_EDX_ARG,iVar2);
      F_0042ccf0((undefined *)((int)this + 0xfc) GEN_EDX_ARG,iVar2 + 0x54);
      iVar1 = iVar2 + 0xa8;
      this = (undefined *)((int)this + 0x150);
      iVar2 = iVar2 + 0x150;
    } while (iVar1 != param_2);
    return (uint)this;
  }
  return (uint)param_3;
}

/* ref: FUN_00a15760 */
GEN_FRAME uint F_00a15760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa15760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1[5] = puVar2[5];
    puVar1 = puVar1 + 6;
  }
  return (uint)puVar1;
}

/* ref: FUN_00a157a0 */
GEN_FRAME uint GEN_THISCALL F_00a157a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa157a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a157c0 */
GEN_FRAME uint F_00a157c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa157c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    param_2[5] = param_3[5];
  }
  return (uint)param_2;
}

/* ref: FUN_00a15810 */
GEN_FRAME unsigned int F_00a15810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa15810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 6) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
    }
    puVar1 = puVar1 + 6;
  }
  return 0;
}

/* ref: FUN_00a15860 */
GEN_FRAME uint GEN_STDCALL F_00a15860(unsigned int gen_a0)
{
  GEN_ENTER(0xa15860u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a135d0(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00a15870 */
GEN_FRAME uint GEN_STDCALL F_00a15870(unsigned int gen_a0)
{
  GEN_ENTER(0xa15870u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0x1a4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)param_1 + 0x150) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)param_1 + 0xfc) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)param_1 + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)param_1 + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a158c0 */
GEN_FRAME uint GEN_STDCALL F_00a158c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa158c0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)param_1 + 0xa8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)param_1 + 0x54) GEN_EDX_ARG);
  uVar1 = F_0042c880(param_1 GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00a158f0 */
GEN_FRAME unsigned int F_00a158f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa158f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a140b0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a15910 */
GEN_FRAME unsigned int F_00a15910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00a141f0(param_2 GEN_EDX_ARG,param_3);
  }
  return;
}

/* ref: FUN_00a15930 */
GEN_FRAME unsigned int F_00a15930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54) GEN_EDX_ARG,param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8) GEN_EDX_ARG,param_3 + 0xa8);
  }
  return;
}

/* ref: FUN_00a15970 */
GEN_FRAME unsigned int F_00a15970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2 GEN_EDX_ARG,param_3);
    F_0042cbc0((undefined *)((int)param_2 + 0x54) GEN_EDX_ARG,param_3 + 0x54);
    F_0042cbc0((undefined *)((int)param_2 + 0xa8) GEN_EDX_ARG,param_3 + 0xa8);
    F_0042cbc0((undefined *)((int)param_2 + 0xfc) GEN_EDX_ARG,param_3 + 0xfc);
  }
  return;
}

/* ref: FUN_00a159d0 */
GEN_FRAME uint GEN_THISCALL F_00a159d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa159d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  byte * pbVar2;
  uint uVar3;
  
  if ((**(int * PTR32 *)((int)this + 0x24) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 0x34), 0 < *piVar1)) {
    *piVar1 = *piVar1 - 1;
    pbVar2 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
    **(int * PTR32 *)((int)this + 0x24) = (int)(pbVar2 + 1);
    *pbVar2 = (byte)param_1;
    return (uint)(byte)param_1;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,(uint)(byte)param_1);
  return uVar3;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_00a15a10 */
GEN_FRAME uint GEN_THISCALL F_00a15a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_00a15a30 */
GEN_FRAME uint GEN_THISCALL F_00a15a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a15a50 */
GEN_FRAME uint GEN_STDCALL F_00a15a50(unsigned int gen_a0)
{
  GEN_ENTER(0xa15a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && (uVar1 = F_004069f0(param_1), uVar1 == 0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: FUN_00a15aa0 */
GEN_FRAME uint GEN_THISCALL F_00a15aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15ab0 */
GEN_FRAME uint GEN_THISCALL F_00a15ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15ad0 */
GEN_FRAME uint GEN_THISCALL F_00a15ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15ae0 */
GEN_FRAME uint GEN_THISCALL F_00a15ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15b00 */
GEN_FRAME uint GEN_THISCALL F_00a15b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15b10 */
GEN_FRAME uint GEN_THISCALL F_00a15b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15b20 */
GEN_FRAME uint GEN_THISCALL F_00a15b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15b30 */
GEN_FRAME uint GEN_THISCALL F_00a15b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15b40 */
GEN_FRAME byte GEN_THISCALL F_00a15b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15b60 */
GEN_FRAME byte GEN_THISCALL F_00a15b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15b80 */
GEN_FRAME byte GEN_THISCALL F_00a15b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15ba0 */
GEN_FRAME byte GEN_THISCALL F_00a15ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15bd0 */
GEN_FRAME uint GEN_THISCALL F_00a15bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a15be0 */
GEN_FRAME uint GEN_THISCALL F_00a15be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00a15bf0 */
GEN_FRAME byte GEN_THISCALL F_00a15bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a15c20 */
GEN_FRAME uint GEN_THISCALL F_00a15c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0x18;
  return (uint)param_1;
}

/* ref: FUN_00a15c60 */
GEN_FRAME uint GEN_THISCALL F_00a15c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a15c70 */
GEN_NOFRAME uint GEN_THISCALL F_00a15c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa15c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a150f0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00a15c80 */
GEN_FRAME uint GEN_THISCALL F_00a15c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa15c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x54) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a15ca0 */
GEN_FRAME uint GEN_THISCALL F_00a15ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xa15ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00479880(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x10e3714));
  F_00a14dc0(this GEN_EDX_ARG,param_1,0);
  return (uint)this;
}

/* ref: FUN_00a15cd0 */
GEN_FRAME byte F_00a15cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c48aef(param_2);
  if (iVar1 == -1) {
    return 0;
  }
  *param_1 = (char)iVar1;
  return 1;
}

/* ref: FUN_00a15d00 */
GEN_FRAME byte F_00a15d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c50a15((int)(char)param_1,param_2);
  return iVar1 != -1;
}

/* ref: FUN_00a15d20 */
GEN_FRAME byte F_00a15d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa15d20u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c50cf0((uint)*param_1,param_2);
  return iVar1 != -1;
}

/* ref: Lock */
GEN_NOFRAME unsigned int GEN_THISCALL F_00a15d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa15d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_00c50937(*(undefined * PTR32 *)((int)this + 0x54));
  }
  return;
}

/* ref: Unlock */
GEN_NOFRAME uint GEN_THISCALL F_00a15d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xa15d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_00c509aa(*(undefined * PTR32 *)((int)this + 0x54));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

