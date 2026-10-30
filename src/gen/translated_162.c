#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce5900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  F_00cf3b1e(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce5930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce5930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134d818));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce5960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x30))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x32))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x36))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x3a))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x3e))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce59d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  float * pfVar1;
  ushort uVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  
  iVar6 = param_1;
  if (param_3[1] == 1) {
    if (param_6 == 0) {
      uVar2 = *((ushort *)GEN_TOP((param_1 + 0x34)));
      if (*((ushort *)GEN_TOP((param_1 + 0x22))) <= *((ushort *)GEN_TOP((param_1 + 0x34)))) {
        uVar2 = *((ushort *)GEN_TOP((param_1 + 0x22)));
      }
      iVar4 = *param_3;
      iVar6 = *param_5;
      param_6 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(iVar6,iVar4,(uint)uVar2 * 4);
          iVar6 = iVar6 + (uint)*((ushort *)GEN_TOP((param_1 + 0x34))) * 4;
          param_6 = param_6 + 1;
          iVar4 = iVar4 + (uint)*((ushort *)GEN_TOP((param_1 + 0x22))) * 4;
        } while (param_6 < (uint)param_3[2]);
      }
    }
    else {
      uVar2 = *((ushort *)GEN_TOP((param_1 + 0x34)));
      pfVar5 = ((float *)GEN_TOP(*param_5));
      pfVar8 = ((float *)GEN_TOP(*param_3));
      pfVar3 = pfVar5 + 1;
      param_1 = 0;
      if (uVar2 == 2) {
        if (param_3[2] != 0) {
          do {
            *pfVar5 = (float)(float10)0;
            *pfVar3 = (float)(float10)0;
            iVar4 = 0;
            pfVar7 = pfVar8;
            if (*((short *)GEN_TOP((iVar6 + 0x22))) != 0) {
              do {
                pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
                iVar4 = iVar4 + 1;
                pfVar8 = pfVar7 + 1;
                *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
                *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7
                                 + (float10)*pfVar3)));
                pfVar7 = pfVar8;
              } while (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar6 + 0x22))));
            }
            param_1 = param_1 + 1;
            pfVar5 = pfVar5 + 2;
            pfVar3 = pfVar3 + 2;
          } while (param_1 < (uint)param_3[2]);
        }
      }
      else if (param_3[2] != 0) {
        do {
          *pfVar5 = (float)(float10)0;
          iVar4 = 0;
          *pfVar3 = (float)(float10)0;
          pfVar7 = pfVar8;
          if (*((short *)GEN_TOP((iVar6 + 0x22))) != 0) {
            do {
              pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
              iVar4 = iVar4 + 1;
              pfVar8 = pfVar7 + 1;
              *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
              *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7 +
                               (float10)*pfVar3)));
              pfVar7 = pfVar8;
            } while (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar6 + 0x22))));
          }
          F_00c48350(pfVar5 + 2,0,(uint)uVar2 * 4 - 8);
          pfVar5 = pfVar5 + *((ushort *)GEN_TOP((iVar6 + 0x34)));
          param_1 = param_1 + 1;
          pfVar3 = pfVar5 + 1;
        } while (param_1 < (uint)param_3[2]);
      }
    }
  }
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return (uint)param_5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce5b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  F_00cf3b1e(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce5b90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce5b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134dc90));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  return (uint)this;
}

/* ref: _AFX_RICHEDIT_STATE::~_AFX_RICHEDIT_STATE */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce5bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (*(int *)(this + 0x48) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x48));
  }
  if (*(int *)(this + 0x4c) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x4c));
  }
  F_00cf3b1e(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce5bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  SIZE_T cb;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x30))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x32))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x36))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x3a))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x3e))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = *(undefined2 *)(puVar1 + 4);
  uVar3 = (uint)(*((int *)GEN_TOP((param_1 + 0x24))) * 10) / 1000;
  *((uint *)GEN_TOP((param_1 + 0x44))) = uVar3;
  if (uVar3 != 0) {
    cb = (*((ushort *)GEN_TOP((param_1 + 0x2e))) >> 3) * uVar3;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *((LPVOID *)GEN_TOP((param_1 + 0x48))) = pvVar2;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *((LPVOID *)GEN_TOP((param_1 + 0x4c))) = pvVar2;
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x48))),0,cb);
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))),0,cb);
  }
  uVar3 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5cb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce5cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  uint local_14;
  
  piVar6 = param_3;
  if (param_3[1] == 1) {
    iVar3 = *param_3;
    iVar9 = *param_5;
    uVar7 = (uint)(*((ushort *)GEN_TOP((param_1 + 0x2e))) >> 3);
    iVar11 = uVar7 * 5;
    iVar4 = uVar7 * 6;
    iVar5 = uVar7 * 7;
    if (param_6 == 0) {
      piVar1 = param_3 + 2;
      param_3 = ((int *)GEN_TOP(0x0));
      if (*piVar1 != 0) {
        do {
          F_00c46aa0((uint)*((ushort *)GEN_TOP((param_1 + 0x3e))) * (int)param_3 + iVar9,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x2c))) * (int)param_3 + iVar3,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
          param_3 = ((int *)GEN_TOP(((int)param_3 + 1)));
        } while (param_3 < (uint)piVar6[2]);
      }
    }
    else {
      uVar10 = *((uint *)GEN_TOP((param_1 + 0x44)));
      if (uVar10 == 0) {
        if (param_3[2] != 0) {
          iVar2 = iVar9 + uVar7 * 4;
          uVar7 = 0;
          do {
            iVar8 = *((ushort *)GEN_TOP((param_1 + 0x2c))) * uVar7;
            iVar12 = *((ushort *)GEN_TOP((param_1 + 0x3e))) * uVar7;
            F_00c46aa0(iVar12 + iVar9,iVar8 + iVar3,(uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
            fVar13 = (float10)*((float *)GEN_TOP((iVar4 + iVar3 + iVar8)));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
            fVar15 = (float10)*((float *)GEN_TOP((iVar5 + iVar3 + iVar8)));
            fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
            *((float *)GEN_TOP((iVar2 + iVar12))) =
                 ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar2 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16)));
            *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                 ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                        fVar13 * fVar16)));
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)param_3[2]);
        }
      }
      else {
        param_6 = 0;
        if (uVar10 < (uint)param_3[2]) {
          if (uVar10 != 0) {
            do {
              iVar12 = *((ushort *)GEN_TOP((param_1 + 0x3e))) * param_6;
              F_00c46aa0(iVar12 + iVar9,*((ushort *)GEN_TOP((param_1 + 0x2c))) * param_6 + iVar3,
                         (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
              iVar2 = param_6 * 4;
              param_6 = param_6 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + param_6 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *((float *)GEN_TOP((iVar8 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar8 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_6 < *((uint *)GEN_TOP((param_1 + 0x44))));
          }
          local_14 = 0;
          if (param_3[2] != *((int *)GEN_TOP((param_1 + 0x44)))) {
            iVar2 = iVar9 + uVar7 * 4;
            do {
              iVar8 = local_14 + *((int *)GEN_TOP((param_1 + 0x44)));
              iVar12 = (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))) * iVar8;
              F_00c46aa0(iVar12 + iVar9,(uint)*((ushort *)GEN_TOP((param_1 + 0x2c))) * iVar8 + iVar3,
                         (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
              iVar8 = *((ushort *)GEN_TOP((param_1 + 0x2c))) * local_14;
              local_14 = local_14 + 1;
              fVar13 = (float10)*((float *)GEN_TOP((iVar4 + iVar3 + iVar8)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((iVar5 + iVar3 + iVar8)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *((float *)GEN_TOP((iVar2 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar2 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (local_14 < (uint)(param_3[2] - *((int *)GEN_TOP((param_1 + 0x44)))));
          }
          uVar7 = *((uint *)GEN_TOP((param_1 + 0x44)));
          uVar10 = 0;
          if (uVar7 != 0) {
            do {
              iVar9 = uVar10 - uVar7;
              uVar10 = uVar10 + 1;
              iVar9 = (iVar9 + param_3[2]) * (uint)*((ushort *)GEN_TOP((param_1 + 0x2c)));
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) - 4 + uVar10 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar4 + iVar3 + iVar9)));
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + uVar10 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar5 + iVar3 + iVar9)));
              uVar7 = *((uint *)GEN_TOP((param_1 + 0x44)));
            } while (uVar10 < uVar7);
          }
        }
        else {
          if (param_3[2] != 0) {
            do {
              iVar12 = *((ushort *)GEN_TOP((param_1 + 0x3e))) * param_6;
              F_00c46aa0(iVar12 + iVar9,*((ushort *)GEN_TOP((param_1 + 0x2c))) * param_6 + iVar3,
                         (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
              iVar2 = param_6 * 4;
              param_6 = param_6 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + param_6 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *((float *)GEN_TOP((iVar8 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar8 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_6 < (uint)param_3[2]);
          }
          iVar11 = *((int *)GEN_TOP((param_1 + 0x44))) * uVar7;
          iVar9 = iVar11 - param_3[2] * uVar7;
          F_01051df1(*((int *)GEN_TOP((param_1 + 0x48))),iVar11,*((int *)GEN_TOP((param_1 + 0x48))) - 4 + param_3[2] * 4,
                     iVar9);
          F_01051df1(*((int *)GEN_TOP((param_1 + 0x4c))),iVar11,*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + param_3[2] * 4,
                     iVar9);
          uVar7 = param_3[2];
          param_3 = ((int *)GEN_TOP(0x0));
          if (uVar7 != 0) {
            do {
              iVar11 = (uint)*((ushort *)GEN_TOP((param_1 + 0x2c))) * (int)param_3;
              iVar9 = (*((int *)GEN_TOP((param_1 + 0x44))) - uVar7) + (int)param_3;
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar9 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar4 + iVar3 + iVar11)));
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) + iVar9 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar5 + iVar3 + iVar11)));
              uVar7 = piVar6[2];
              param_3 = ((int *)GEN_TOP(((int)param_3 + 1)));
            } while (param_3 < uVar7);
          }
        }
      }
    }
  }
  param_5[2] = piVar6[2];
  param_5[1] = piVar6[1];
  return (uint)param_5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6130(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce6130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (param_1[0x12] != 0) {
    gen_imp_CoTaskMemFree(param_1[0x12]);
  }
  if (param_1[0x13] != 0) {
    gen_imp_CoTaskMemFree(param_1[0x13]);
  }
  F_00cf3b1e(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6180(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce6180u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    *((int *)GEN_TOP((param_1 + 4))) = param_3;
    uVar1 = F_00cccd90(param_1 + 8 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  F_00cccbd0(param_1 + 8 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf11 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00ce61c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce61c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce61d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xce61d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x30))) = param_3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ce61f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce61f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0x34)));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    iVar3 = *((int *)GEN_TOP((param_1 + 4))) - param_2;
    *((int *)GEN_TOP((param_1 + 4))) = iVar3;
    if (iVar3 < 0) {
      *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 8))))(param_1 + 8,param_2);
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 0x10))))(param_1 + 8);
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x2c))) * (float10)*((float *)GEN_TOP((param_1 + 0x30))) +
                 (float10)((float)GEN_TOF((((float10)1 - (float10)*((float *)GEN_TOP((param_1 + 0x30)))) *
                                 (float10)(float)extraout_ST0))))));
  fVar5 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar2 - (float10)*((float *)GEN_TOP((param_1 + 0x34)))))));
  fVar7 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
    fVar6 = GEN_X87((float10)(float)((float10)(int)param_2 / (float10)*(double *)&REFG(undefined, 0x112fcd0)));
    if (!(fVar5 <= fVar7) || ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
      if (!(fVar5 <= fVar6) != (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
        *((float *)GEN_TOP((param_1 + 0x34))) = ((float)GEN_TOF((fVar6 + (float10)*((float *)GEN_TOP((param_1 + 0x34))))));
        goto LAB_00ce62be;
      }
    }
    else {
      fVar7 = -fVar6;
      if (fVar5 <= fVar7 && ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar5)) && fVar7 != fVar5)) {
        *((float *)GEN_TOP((param_1 + 0x34))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x34))) - fVar6)));
        goto LAB_00ce62be;
      }
    }
    *((float *)GEN_TOP((param_1 + 0x34))) = fVar2;
  }
LAB_00ce62be: ;
  bVar4 = GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x34)))) || GEN_ISNAN((float10)fVar1);
  if (bVar4 != (bVar4 || (float10)*((float *)GEN_TOP((param_1 + 0x34))) == (float10)fVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ce62e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce62e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce62e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  in_ecx[1] = 0;
  F_00cccb10(in_ecx + 2 GEN_EDX_FWD,(float)(float10)1);
  in_ecx[0xb] = (undefined4)gen_fl2bits((float)(float10)1);
  in_ecx[0xc] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[0xd] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce6310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce6310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134e150),(int)this + 0xe4,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce6360(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce6360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0xc0))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0xc4))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 200))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0xcc))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0xd0))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0xd2))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0xd6))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0xda))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0xde))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0xe2))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce63f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce63f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return;
  }
  if (param_6 == 0) {
    F_00c46aa0(*param_5,*param_3,(uint)*((ushort *)GEN_TOP(((int)param_1 + 0xde))) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  pfVar7 = ((float *)GEN_TOP(*param_5));
  pfVar9 = ((float *)GEN_TOP(*param_3));
  uVar5 = (uint)*((ushort *)GEN_TOP(((int)param_1 + 0xc2)));
  pfVar1 = ((float *)GEN_TOP(F_00cf3d40(param_1 GEN_EDX_ARG)));
  param_6 = param_3[2];
  if (0 < param_6) {
    fVar10 = (float10)*pfVar1;
    fVar11 = (float10)pfVar1[1];
    fVar12 = (float10)pfVar1[2];
    fVar13 = (float10)pfVar1[3];
    fVar14 = (float10)pfVar1[4];
    do {
      pfVar1 = ((float *)GEN_TOP(((int)param_1 + 0x40)));
      iVar4 = 0;
      if (3 < uVar5) {
        iVar3 = (uVar5 - 4 >> 2) + 1;
        iVar4 = iVar3 * 4;
        pfVar2 = pfVar1;
        pfVar6 = pfVar7;
        pfVar8 = pfVar9;
        do {
          *pfVar6 = ((float)GEN_TOF(((float10)pfVar2[3] * fVar14 +
                           ((float10)pfVar2[2] * fVar13 +
                           (fVar12 * (float10)pfVar2[1] +
                           ((float10)*pfVar8 * fVar10 + (float10)*pfVar2 * fVar11))))));
          pfVar2[3] = pfVar2[2];
          pfVar2[2] = *pfVar6;
          pfVar2[1] = *pfVar2;
          *pfVar2 = *pfVar8;
          pfVar6[1] = ((float)GEN_TOF(((float10)pfVar2[7] * fVar14 +
                             ((float10)pfVar2[6] * fVar13 +
                             ((float10)pfVar2[5] * fVar12 +
                             (fVar11 * (float10)pfVar2[4] + (float10)pfVar8[1] * fVar10))))));
          pfVar2[7] = pfVar2[6];
          pfVar2[6] = pfVar6[1];
          pfVar2[5] = pfVar2[4];
          pfVar2[4] = pfVar8[1];
          pfVar6[2] = ((float)GEN_TOF((fVar14 * (float10)pfVar2[0xb] +
                             ((float10)pfVar2[10] * fVar13 +
                             (fVar12 * (float10)pfVar2[9] +
                             ((float10)pfVar2[8] * fVar11 + (float10)pfVar8[2] * fVar10))))));
          pfVar2[0xb] = pfVar2[10];
          pfVar2[10] = pfVar6[2];
          pfVar2[9] = pfVar2[8];
          pfVar2[8] = pfVar8[2];
          pfVar7 = pfVar6 + 4;
          pfVar9 = pfVar8 + 4;
          pfVar1 = pfVar2 + 0x10;
          iVar3 = iVar3 - 1;
          pfVar6[3] = ((float)GEN_TOF(((float10)pfVar2[0xf] * fVar14 +
                             ((float10)pfVar2[0xe] * fVar13 +
                             ((float10)pfVar2[0xd] * fVar12 +
                             ((float10)pfVar2[0xc] * fVar11 + (float10)pfVar8[3] * fVar10))))));
          pfVar2[0xf] = pfVar2[0xe];
          pfVar2[0xe] = pfVar6[3];
          pfVar2[0xd] = pfVar2[0xc];
          pfVar2[0xc] = pfVar8[3];
          pfVar2 = pfVar1;
          pfVar6 = pfVar7;
          pfVar8 = pfVar9;
        } while (iVar3 != 0);
      }
      if (iVar4 < (int)uVar5) {
        iVar4 = uVar5 - iVar4;
        pfVar1 = pfVar1 + 2;
        pfVar2 = pfVar7;
        pfVar6 = pfVar9;
        do {
          pfVar7 = pfVar2 + 1;
          pfVar9 = pfVar6 + 1;
          iVar4 = iVar4 - 1;
          *pfVar2 = ((float)GEN_TOF((fVar14 * (float10)pfVar1[1] +
                           ((float10)*pfVar1 * fVar13 +
                           ((float10)pfVar1[-1] * fVar12 +
                           ((float10)*pfVar6 * fVar10 + (float10)pfVar1[-2] * fVar11))))));
          pfVar1[1] = *pfVar1;
          *pfVar1 = *pfVar2;
          pfVar1[-1] = pfVar1[-2];
          pfVar1[-2] = *pfVar6;
          pfVar1 = pfVar1 + 4;
          pfVar2 = pfVar7;
          pfVar6 = pfVar9;
        } while (iVar4 != 0);
      }
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  F_00cf3d90(param_1 GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: FUN_00ce6650 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce6650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)0;
  *((float *)GEN_TOP((in_ecx + 0x40))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x44))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x48))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x4c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x50))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x54))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x58))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x5c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x60))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 100))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x68))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x6c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x70))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x74))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x78))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x7c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x80))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x84))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x88))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x8c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x90))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x94))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x98))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x9c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xa0))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xa4))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xa8))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xac))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xb0))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xb4))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xb8))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xbc))) = (float)fVar1;
  return;
}

/* ref: FUN_00ce66f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce66f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce66f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112fdbc));
  if (uVar1 != 0) {
    if (param_1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x20;
    }
    *param_3 = iVar2;
    gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x1c))));
    return 0;
  }
  uVar1 = F_00ce5800(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce6750 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce6750(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce6750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x1c)))));
}

/* ref: FUN_00ce6770 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce6770(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce6770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00ce67a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce67a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce67a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00ce67b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00ce67b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce67b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  F_00ce6750(param_1 - 0x20);
  return;
}

/* ref: FUN_00ce67c0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00ce67c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce67c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ce66f0(param_1 - 0x20,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce67d0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00ce67d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce67d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ce6770(param_1 - 0x20);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce67e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce67e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  F_00cf3c40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce6810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cca0a0(this GEN_EDX_FWD,REFG(undefined4, 0x112a808),param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  return (uint)this;
}

/* ref: FUN_00ce6850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce6850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  uVar1 = F_00cc9f30(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10 GEN_EDX_ARG,param_1);
    iVar2 = 0;
    if (0 < *(int *)(this + 0xec)) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10);
        uVar1 = F_00cc93f0(*((undefined4 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4))) GEN_EDX_ARG,(float)extraout_ST0)
        ;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xec));
    }
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce68c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce68c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x10 GEN_EDX_FWD,param_2);
    iVar2 = 0;
    uVar1 = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 0xec)))) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))(param_1 + 0x10);
        uVar1 = F_00cc93f0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xe8))) + iVar2 * 4))) GEN_EDX_ARG,
                             (float)extraout_ST0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP((param_1 + 0xec))));
    }
    return uVar1;
  }
  uVar1 = F_00cccd90(param_1 + 0x10 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce6930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce6970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce69c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce69c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce6a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce6a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  F_00cc9f30(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6a40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce6a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x28)));
  }
  else {
    if (param_3 != 1) goto LAB_00ce6a6c;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x2c)));
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00ce6a6c: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  bool bVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6af0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce6af0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 4 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 4 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce6b20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  float10 fVar2;
  
  fVar2 = GEN_X87((float10)param_2 / (float10)*((float *)GEN_TOP((param_1 + 0x4c))));
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x28 GEN_EDX_FWD,(float)fVar2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 0x28 GEN_EDX_ARG,(float)fVar2);
  return 0;
}

/* ref: FUN_00ce6b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce6b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb10(param_1 + 1 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10(param_1 + 10 GEN_EDX_ARG,*(float *)&REFG(undefined, 0x112fe48));
  param_1[0x13] = *(undefined4 *)&REFG(undefined, 0x112fe44);
  if (param_2 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((param_1[1] + 4))))(param_1 + 1,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    ((code *)*((gen_code32 *)GEN_TOP((param_1[10] + 4))))
              (param_1 + 10,
               (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0x14))) /
                                  ((float10)GEN_TOD(gen_bits2f(param_1[0x13]))))))));
  }
  return (uint)param_1;
}

/* ref: FUN_00ce6be0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce6be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134e5e0),(int)this + 100,8,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x7c))),0,0x70800);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce6c40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce6c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = *puVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = puVar2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = puVar2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = puVar2[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x50))) = *(undefined2 *)(puVar2 + 4);
  puVar2 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x52))) = *puVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x56))) = puVar2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x5a))) = puVar2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x5e))) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *((float *)GEN_TOP((param_1 + 0x70880))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x70888))) = (float)fVar3;
  *((undefined2 *)GEN_TOP((param_1 + 0x62))) = uVar1;
  *((float *)GEN_TOP((param_1 + 0x70884))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x70890))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x7088c))) = (float)fVar3;
  *((undefined4 *)GEN_TOP((param_1 + 0x7087c))) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce6cd0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce6cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  float * pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint in_ecx;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  in_ecx = param_1;
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return;
  }
  if (param_6 == ((float *)GEN_TOP(0x0))) {
    F_00c46aa0(*param_5,*param_3,(uint)*((ushort *)GEN_TOP((param_1 + 0x5e))) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  param_6 = ((float *)GEN_TOP(*param_5));
  puVar11 = ((undefined4 *)GEN_TOP(*param_3));
  (*(int *)(gen_frame + 0x1c)) = param_3[2];
  (*(uint *)(gen_frame + 0x40)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
  pfVar5 = ((float *)GEN_TOP(F_00cf3d40(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG)));
  (*(float *)(gen_frame + 0x28)) = pfVar5[1];
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)1 / (float10)pfVar5[1]);
  (*(float *)(gen_frame + 0x30)) = *pfVar5;
  if (0 < (*(int *)(gen_frame + 0x1c))) {
    do {
      fVar15 = (float10)REFG(float, 0x1094808);
      fVar13 = (float10)1;
      fVar17 = (float10)(*(float *)(gen_frame + 0x30));
      fVar16 = (float10)1;
      fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) + (float10)(*(float *)(gen_frame + 0x28)))));
      fVar12 = (float10)fVar2;
      *((float *)GEN_TOP((in_ecx + 0x70880))) = fVar2;
      if (fVar16 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar16)) && fVar12 != fVar16)) {
        *((float *)GEN_TOP((in_ecx + 0x70880))) = (float)(fVar12 - fVar13);
      }
      fVar12 = (float10)*((float *)GEN_TOP((in_ecx + 0x70880)));
      if (!(fVar12 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar12)) || fVar15 == fVar12)) {
        if (*((char *)GEN_TOP((in_ecx + 0x70894))) == '\0') goto LAB_00ce6daf;
      }
      else {
        *((undefined2 *)GEN_TOP((in_ecx + 0x70894))) = 0;
LAB_00ce6daf: ;
        if (!((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) <= fVar15) !=
            (GEN_ISNAN(fVar15) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x70880)))))) {
          if ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 < fVar16 == (fVar17 == fVar16)) {
            *((undefined1 *)GEN_TOP((in_ecx + 0x70894))) = 1;
            *((float *)GEN_TOP((in_ecx + 0x7088c))) = (float)(fVar13 - fVar17);
            *((float *)GEN_TOP((in_ecx + 0x70884))) =
                 ((float)GEN_TOF((-(float10)(float)(fVar13 - fVar17) * (float10)(*(float *)(gen_frame + 0x2c)))));
          }
          else {
            *((undefined1 *)GEN_TOP((in_ecx + 0x70894))) = 1;
            *((float *)GEN_TOP((in_ecx + 0x70884))) = (float)(float10)0;
            *((float *)GEN_TOP((in_ecx + 0x7088c))) = (float)(fVar13 - fVar17);
          }
        }
      }
      if ((*((char *)GEN_TOP((in_ecx + 0x70895))) == '\0') &&
         (!((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) <= (float10)REFG(float, 0x1088138)) !=
          (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x70880))))))) {
        if (fVar17 <= fVar16) {
          *((undefined1 *)GEN_TOP((in_ecx + 0x70895))) = 1;
          *((float *)GEN_TOP((in_ecx + 0x70888))) = (float)(float10)0;
          *((float *)GEN_TOP((in_ecx + 0x70890))) = (float)(fVar13 - fVar17);
        }
        else {
          *((undefined1 *)GEN_TOP((in_ecx + 0x70895))) = 1;
          *((float *)GEN_TOP((in_ecx + 0x70890))) = (float)(fVar13 - fVar17);
          *((float *)GEN_TOP((in_ecx + 0x70888))) =
               ((float)GEN_TOF((-(float10)(float)(fVar13 - fVar17) * (float10)(*(float *)(gen_frame + 0x2c)))));
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70884))) + (float10)*((float *)GEN_TOP((in_ecx + 0x7088c))))))
      ;
      *((float *)GEN_TOP((in_ecx + 0x70884))) = fVar2;
      *((float *)GEN_TOP((in_ecx + 0x70888))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70890))) + (float10)*((float *)GEN_TOP((in_ecx + 0x70888))))));
      dVar4 = (double)fVar2;
      fVar12 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),&(*(double *)(gen_frame + 0x8)));
      (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
      (*(int *)(gen_frame + 0x34)) = *((int *)GEN_TOP((in_ecx + 0x7087c))) + (int)(*(double *)(gen_frame + 0x8)) * -8;
      if ((*(int *)(gen_frame + 0x34)) < 0) {
        (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x1c200;
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x34)) - 8;
      if ((*(int *)(gen_frame + 0x34)) - 8 < 0) {
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x34)) + 0x1c1f8;
      }
      fVar12 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((in_ecx + 0x70888)))),
                            (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((in_ecx + 0x70888)))) >>
                                 0x20),&(*(double *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar12;
      iVar8 = *((int *)GEN_TOP((in_ecx + 0x7087c))) + (int)(*(double *)(gen_frame + 0x0)) * -8;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = iVar8;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1c200;
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = iVar8;
      }
      (*(double *)(gen_frame + 0x20)) = gen_bits2d(CONCAT44(iVar8,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 0))));
      (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((iVar8 - 8)));
      if (iVar8 - 8 < 0) {
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((iVar8 + 0x1c1f8)));
      }
      fVar16 = ((float10)GEN_TOD(fsin(
                             (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) *
                                             (float10)*(double *)&REFG(undefined, 0x112ff48)))))));
      iVar6 = 0;
      fVar15 = (float10)1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x44)))));
      fVar12 = (float10)(float)fVar12;
      fVar16 = GEN_X87((float10)((float)GEN_TOF((((float10)(float)fVar16 + fVar15) * (float10)REFG(double, 0x1088108)))));
      if (3 < (int)(*(uint *)(gen_frame + 0x40))) {
        fVar13 = GEN_X87(fVar15 - fVar17);
        param_1 = in_ecx + 0x80 + iVar8 * 4;
        fVar14 = GEN_X87(fVar15 - fVar16);
        (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)GEN_TOP((in_ecx + 0x80 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x3c))) * 4)));
        dVar4 = GEN_X87((double)(fVar15 - fVar12));
        (*(double *)(gen_frame + 0x10)) = dVar4;
        pfVar5 = ((float *)GEN_TOP((in_ecx + 0x80 + (*(int *)(gen_frame + 0x34)) * 4)));
        pfVar7 = ((float *)GEN_TOP((in_ecx + 0x80 + (*(int *)(gen_frame + 0x38)) * 4)));
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = *puVar11;
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 - 4))) * (float10)dVar4 +
                         (float10)(*(float * PTR32 *)(gen_frame + 0x44))[-1] * fVar12)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)pfVar5[-1] * fVar13 + (float10)pfVar7[-1] * fVar17);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          *param_6 = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x80 + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = puVar11[1];
          fVar2 = (float)((float10)*((float *)GEN_TOP(param_1)) * (float10)dVar4 + fVar12 * (float10)*(*(float * PTR32 *)(gen_frame + 0x44)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)*pfVar5 * fVar13 + fVar17 * (float10)*pfVar7);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          param_6[1] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x84 + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = puVar11[2];
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 4))) * (float10)dVar4 +
                         (float10)(*(float * PTR32 *)(gen_frame + 0x44))[1] * fVar12)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)pfVar5[1] * fVar13 + (float10)pfVar7[1] * fVar17);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          param_6[2] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x88 + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = puVar11[3];
          pfVar10 = (*(float * PTR32 *)(gen_frame + 0x44)) + 2;
          pfVar1 = ((float *)GEN_TOP((param_1 + 8)));
          param_1 = param_1 + 0x10;
          (*(float * PTR32 *)(gen_frame + 0x44)) = (*(float * PTR32 *)(gen_frame + 0x44)) + 4;
          pfVar9 = param_6 + 4;
          iVar6 = iVar6 + 4;
          puVar11 = puVar11 + 4;
          fVar2 = (float)((float10)*pfVar1 * (float10)dVar4 + (float10)*pfVar10 * fVar12);
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)pfVar5[2] * fVar13 + (float10)pfVar7[2] * fVar17);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          param_6[3] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          pfVar5 = pfVar5 + 4;
          pfVar7 = pfVar7 + 4;
          param_6 = pfVar9;
        } while (iVar6 < (int)((*(uint *)(gen_frame + 0x40)) - 3));
      }
      fVar15 = (float10)1;
      if (iVar6 < (int)(*(uint *)(gen_frame + 0x40))) {
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((in_ecx + 0x7c + (iVar6 + (int)(*(float * PTR32 *)(gen_frame + 0x3c))) * 4)));
        (*(double *)(gen_frame + 0x20)) = GEN_X87((double)(fVar15 - fVar16));
        (*(double *)(gen_frame + 0x10)) = GEN_X87((double)(fVar15 - fVar12));
        pfVar5 = ((float *)GEN_TOP((in_ecx + 0x7c + ((*(int *)(gen_frame + 0x34)) + iVar6) * 4)));
        pfVar7 = ((float *)GEN_TOP((in_ecx + 0x7c + (iVar6 + (*(int *)(gen_frame + 0x38))) * 4)));
        param_1 = in_ecx + 0x7c + (iVar6 + iVar8) * 4;
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = *puVar11;
          fVar2 = *(*(float * PTR32 *)(gen_frame + 0x3c));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = (*(float * PTR32 *)(gen_frame + 0x3c)) + 1;
          pfVar10 = param_6 + 1;
          iVar6 = iVar6 + 1;
          puVar11 = puVar11 + 1;
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(param_1)) * (float10)(double)(fVar15 - fVar12) +
                         (float10)fVar2 * fVar12)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)*pfVar5 * (fVar15 - fVar17) + (float10)*pfVar7 * fVar17)));
          (*(float *)(gen_frame + 0x18)) = fVar3;
          *param_6 = ((float)GEN_TOF(((float10)fVar3 * (float10)(double)(fVar15 - fVar16) +
                            (float10)fVar2 * fVar16)));
          pfVar5 = pfVar5 + 1;
          pfVar7 = pfVar7 + 1;
          param_1 = param_1 + 4;
          param_6 = pfVar10;
        } while (iVar6 < (int)(*(uint *)(gen_frame + 0x40)));
      }
      *((int *)GEN_TOP((in_ecx + 0x7087c))) = *((int *)GEN_TOP((in_ecx + 0x7087c))) + 8;
      if (*((int *)GEN_TOP((in_ecx + 0x7087c))) == 0x1c200) {
        *((undefined4 *)GEN_TOP((in_ecx + 0x7087c))) = 0;
      }
      iVar8 = (*(int *)(gen_frame + 0x1c)) - 1;
      (*(int *)(gen_frame + 0x1c)) = iVar8;
    } while (iVar8 != 0);
  }
  F_00cf3d90(in_ecx GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce7270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00cf3c40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce72a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce72a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_3 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_4);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce72f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce72f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  bool bVar2;
  float10 extraout_ST0;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
    F_00cc2690((float)extraout_ST0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7380(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce7380u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST0_00;
  double dVar6;
  
  fVar5 = (float10)1;
  fVar4 = (float10)param_2;
  if (!(fVar5 <= fVar4) || ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) || fVar4 == fVar5)) {
    fVar5 = (float10)0;
    if (fVar4 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && fVar5 != fVar4)) {
      param_2 = (float)fVar5;
    }
  }
  else {
    param_2 = (float)fVar5;
  }
  in_ecx = ((int *)GEN_TOP((param_1 + 4)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar5 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,param_2);
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx);
    uVar1 = F_00cc2690((float)extraout_ST0_00);
    return uVar1;
  }
  uVar1 = F_00cccd90(in_ecx GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7410(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce7410u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x28;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
  fVar4 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar4 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar5) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar4) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 != 0) {
    uVar1 = F_00cccd90(in_ecx GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: FUN_00ce7460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce7460(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10(in_ecx + 10 GEN_EDX_ARG,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce7490(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce7490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x30))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x32))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x36))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x3a))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x3e))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce7500(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce7500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    if (param_3[1] == 1) {
      iVar1 = *param_5;
      iVar2 = *param_3;
      uVar3 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(*((ushort *)GEN_TOP((param_1 + 0x3e))) * uVar3 + iVar1,
                     *((ushort *)GEN_TOP((param_1 + 0x2c))) * uVar3 + iVar2,(uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_3[2]);
      }
      param_5[2] = param_3[2];
      param_5[1] = param_3[1];
    }
    return;
  }
  iVar1 = *param_5;
  if (param_3[1] == 1) {
    F_00ce79c0(param_1 + 0x48,*param_3,(uint)*((ushort *)GEN_TOP((param_1 + 0x34))),
                 (uint)*(ushort *)(param_3 + 2));
  }
  else if ((*((short *)GEN_TOP((param_1 + 0x44))) == 0) && (*((char *)GEN_TOP((param_1 + 0x4e))) == '\0')) {
    F_00ce7a80(param_1 + 0x48,(uint)*((ushort *)GEN_TOP((param_1 + 0x34))),(uint)*(ushort *)(param_5 + 2));
  }
  if (*((ushort *)GEN_TOP((param_1 + 0x5c))) <= *((ushort *)GEN_TOP((param_1 + 0x68)))) {
    do {
      if (0x2000 < (uint)*((ushort *)GEN_TOP((param_1 + 0x74))) + (uint)*((ushort *)GEN_TOP((param_1 + 0x5c)))) break;
      F_00ce7be0(param_1 + 0x48,(uint)*((ushort *)GEN_TOP((param_1 + 0x34))));
    } while (*((ushort *)GEN_TOP((param_1 + 0x5c))) <= *((ushort *)GEN_TOP((param_1 + 0x68))));
  }
  if ((uint)*((ushort *)GEN_TOP((param_1 + 0x74))) < (uint)param_5[2]) {
    param_5[1] = 0;
  }
  else {
    F_00ce7b10(param_1 + 0x48,iVar1,(uint)*((ushort *)GEN_TOP((param_1 + 0x34))),
                 (uint)*(ushort *)(param_5 + 2));
    param_5[1] = 1;
  }
  if ((*((short *)GEN_TOP((param_1 + 0x4a))) != *((short *)GEN_TOP((param_1 + 0x4c)))) &&
     (0xfff < *((ushort *)GEN_TOP((param_1 + 0x68))))) {
    *((undefined1 *)GEN_TOP((param_1 + 0x4e))) = 1;
    return;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x4e))) = 0;
  return;
}

/* ref: FUN_00ce7660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7660(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xce7660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined2 local_8;
  
  local_8 = (undefined2)(gen_x87_cw | 0xc00);
  gen_set_x87_cw((unsigned short)local_8);
  local_8 = (undefined2)(int)TRUNC((float10)*((ushort *)GEN_TOP((param_1 + 0x48))) * (float10)param_2);
  *((undefined2 *)GEN_TOP((param_1 + 0x4a))) = local_8;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_00ce76a0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00ce76a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((ushort *)GEN_TOP((in_ecx + 0x4a)));
}

/* ref: FUN_00ce76c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce76c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((short *)GEN_TOP((in_ecx + 0x44))) = *((short *)GEN_TOP((in_ecx + 0x44))) + 1;
  return;
}

/* ref: FUN_00ce76d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce76d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((short *)GEN_TOP((in_ecx + 0x44))) = *((short *)GEN_TOP((in_ecx + 0x44))) - 1;
  return 0xffff;
}

/* ref: FUN_00ce76e0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce76e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((char *)GEN_TOP((in_ecx + 0x4e))) != '\0') {
    *((undefined1 *)GEN_TOP((in_ecx + 0x4f))) = 0;
    return 0;
  }
  *((undefined1 *)GEN_TOP((in_ecx + 0x4f))) = 1;
  return 1;
}

/* ref: FUN_00ce7700 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce7700(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce7700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  *(undefined2 *)(param_1 + 1) = (undefined2)param_2;
  uVar1 = param_2 & 0xffff;
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = (undefined2)param_3;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  iVar3 = 0;
  *(undefined2 *)(param_1 + 2) = (undefined2)param_4;
  param_2 = 0;
  if (uVar1 != 0) {
    do {
      fVar5 = ((float10)GEN_TOD(fcos(
                            (float10)((float)GEN_TOF(((float10)(int)param_2 *
                                            (float10)(float)(fVar4 / (float10)uVar1)))))));
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *((float *)GEN_TOP((*param_1 - 4 + iVar3 * 4))) =
           (float)((float10)REFG(double, 0x1088108) - (float10)(float)fVar5 * (float10)REFG(double, 0x1088108));
    } while ((int)param_2 < (int)(uint)*(ushort *)(param_1 + 1));
  }
  iVar2 = *(ushort *)(param_1 + 2) - 1;
  if (-1 < iVar2) {
    iVar3 = iVar3 * 4;
    do {
      fVar5 = ((float10)GEN_TOD(fcos(
                            (float10)((float)GEN_TOF(((float10)iVar2 *
                                            (float10)((float)GEN_TOF((fVar4 / (float10)(param_4 & 0xffff))))))))));
      iVar2 = iVar2 - 1;
      *((float *)GEN_TOP((iVar3 + *param_1))) =
           (float)((float10)REFG(double, 0x1088108) - (float10)(float)fVar5 * (float10)REFG(double, 0x1088108));
      iVar3 = iVar3 + 4;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00ce77e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce77e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce77e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * _Dst;
  
  *(undefined2 *)this = 0x960;
  *((undefined4 *)GEN_TOP(((int)this + 2))) = 0x9600960;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0x100;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1e00,((char *)REFP(0x112a0a8)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  F_00ce7700((int)this + 8 GEN_EDX_ARG,0x3c0,0x5a0,0x3c0);
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0xd20;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x40000,((char *)REFP(0x112a0a8)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x40000,((char *)REFP(0x112a0a8)),0,0,0x10)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = _Dst;
  F_00c48350(_Dst,0,0x40000);
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce7900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce7900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x18))));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x24))));
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 8))));
  }
  return uVar1;
}

/* ref: FUN_00ce7940 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce7940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134ea68));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  *((undefined2 *)GEN_TOP(((int)this + 0x44))) = 0;
  F_00ce77e0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ce7970 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce7970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x60))));
  }
  if (*((int *)GEN_TOP(((int)this + 0x6c))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x6c))));
  }
  if (*((int *)GEN_TOP(((int)this + 0x50))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x50))));
  }
  F_00cf3b1e(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ce79c0 */
GEN_LIB GEN_FRAME uint F_00ce79c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce79c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar2 = (*(int *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) + (uint)*((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1e))) * (*(int *)&gen_args[2]) * 4;
  *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) = *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) + (short)(*(uint *)&gen_args[3]);
  iVar4 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1e))) + (*(uint *)&gen_args[3]);
  uVar3 = (ushort)iVar4;
  *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1e))) = uVar3;
  if (uVar3 < 0x2000) {
    uVar7 = F_00c46aa0(iVar1,(*(int *)&gen_args[1]),((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]) * 4);
    return (uint)uVar7;
  }
  uVar5 = iVar4 - 0x2000;
  uVar6 = uVar5 & 0xffff;
  iVar4 = ((*(uint *)&gen_args[3]) & 0xffff) - uVar6;
  F_00c46aa0(iVar1,(*(int *)&gen_args[1]),iVar4 * (*(int *)&gen_args[2]) * 4);
  uVar7 = F_00c46aa0(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))),(*(int *)&gen_args[1]) + iVar4 * (*(int *)&gen_args[2]) * 4,
                     uVar6 * (*(int *)&gen_args[2]) * 4);
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined2)uVar5;
  *((undefined2 *)GEN_TOP((iVar2 + 0x1e))) = (undefined2)(*(int *)&gen_args[0]);
  return (uint)uVar7;
}

/* ref: FUN_00ce7a80 */
GEN_LIB GEN_FRAME uint F_00ce7a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce7a80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = (*(int *)&gen_args[0]);
  pvVar5 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))) + (uint)*((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1e))) * (*(int *)&gen_args[1]) * 4)));
  *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) = *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x20))) + (short)(*(uint *)&gen_args[2]);
  iVar4 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1e))) + (*(uint *)&gen_args[2]);
  iVar1 = (*(int *)&gen_args[1]) * 4;
  uVar3 = (ushort)iVar4;
  *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1e))) = uVar3;
  if (uVar3 < 0x2000) {
    pvVar5 = F_00c48350(pvVar5,0,((*(uint *)&gen_args[2]) & 0xffff) * iVar1);
    return (uint)pvVar5;
  }
  uVar6 = iVar4 - 0x2000;
  uVar7 = uVar6 & 0xffff;
  F_00c48350(pvVar5,0,(((*(uint *)&gen_args[2]) & 0xffff) - uVar7) * iVar1);
  pvVar5 = F_00c48350(*((undefined * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x18))),0,uVar7 * iVar1);
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined2)uVar6;
  *((undefined2 *)GEN_TOP((iVar2 + 0x1e))) = (undefined2)(*(int *)&gen_args[0]);
  return CONCAT22((short)((uint)((int)(uintptr_t)pvVar5) >> 0x10),(undefined2)(*(int *)&gen_args[0]));
}

/* ref: FUN_00ce7b10 */
GEN_LIB GEN_FRAME uint F_00ce7b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce7b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort uVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  gen_size32 sVar6;
  
  pvVar3 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x24))) + (uint)*((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x28))) * (*(int *)&gen_args[2]) * 4)));
  *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x2c))) = *((short *)GEN_TOP(((*(int *)&gen_args[0]) + 0x2c))) - (short)(*(uint *)&gen_args[3]);
  iVar2 = *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x28))) + (*(uint *)&gen_args[3]);
  uVar1 = (ushort)iVar2;
  *((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x28))) = uVar1;
  if (uVar1 < 0x2000) {
    sVar6 = ((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]) * 4;
    F_00c46aa0((*(int *)&gen_args[1]),pvVar3,sVar6);
    pvVar3 = F_00c48350(pvVar3,0,sVar6);
    return (uint)pvVar3;
  }
  uVar4 = iVar2 - 0x2000;
  uVar5 = uVar4 & 0xffff;
  iVar2 = ((*(uint *)&gen_args[3]) & 0xffff) - uVar5;
  sVar6 = iVar2 * (*(int *)&gen_args[2]) * 4;
  F_00c46aa0((*(int *)&gen_args[1]),pvVar3,sVar6);
  F_00c48350(pvVar3,0,sVar6);
  sVar6 = uVar5 * (*(int *)&gen_args[2]) * 4;
  F_00c46aa0((*(int *)&gen_args[1]) + iVar2 * (*(int *)&gen_args[2]) * 4,*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x24))),sVar6)
  ;
  pvVar3 = F_00c48350(*((undefined * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x24))),0,sVar6);
  (*(undefined2 *)((char *)&(*(uint *)&gen_args[3]) + 0)) = (undefined2)uVar4;
  *((undefined2 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x28))) = (undefined2)(*(uint *)&gen_args[3]);
  return (uint)pvVar3;
}

/* ref: FUN_00ce7be0 */
GEN_LIB GEN_FRAME uint F_00ce7be0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce7be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  
  uVar2 = (uint)*((ushort *)GEN_TOP((param_1 + 0xe)));
  uVar5 = (uint)*((ushort *)GEN_TOP((param_1 + 0x10)));
  pfVar4 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x24))) + (uint)*((ushort *)GEN_TOP((param_1 + 0x2a))) * param_2 * 4)));
  pfVar8 = *((float * PTR32 *)GEN_TOP((param_1 + 8)));
  pfVar7 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + (uint)*((ushort *)GEN_TOP((param_1 + 0x1c))) * param_2 * 4)));
  sVar12 = *((short *)GEN_TOP((param_1 + 0x1c)));
  sVar13 = *((short *)GEN_TOP((param_1 + 0x2a)));
  for (uVar9 = (uint)*((ushort *)GEN_TOP((param_1 + 0xc))); uVar9 != 0; uVar9 = uVar9 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)*pfVar6 + (float10)*pfVar3);
        pfVar3[1] = (float)((float10)pfVar6[1] * (float10)*pfVar8 + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] * (float10)*pfVar8 + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] * (float10)*pfVar8 + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)fVar1 + (float10)*pfVar3);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    pfVar8 = pfVar8 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *((float * PTR32 *)GEN_TOP((param_1 + 0x18)));
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *((float * PTR32 *)GEN_TOP((param_1 + 0x24)));
      sVar13 = 0;
    }
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        *pfVar3 = (float)((float10)*pfVar3 + (float10)*pfVar6);
        pfVar3[1] = (float)((float10)pfVar6[1] + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
        *pfVar3 = (float)((float10)*pfVar3 + (float10)fVar1);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *((float * PTR32 *)GEN_TOP((param_1 + 0x18)));
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *((float * PTR32 *)GEN_TOP((param_1 + 0x24)));
      sVar13 = 0;
    }
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)*pfVar6 + (float10)*pfVar3);
        pfVar3[1] = (float)((float10)pfVar6[1] * (float10)*pfVar8 + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] * (float10)*pfVar8 + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] * (float10)*pfVar8 + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)fVar1 + (float10)*pfVar3);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    pfVar8 = pfVar8 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *((float * PTR32 *)GEN_TOP((param_1 + 0x18)));
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *((float * PTR32 *)GEN_TOP((param_1 + 0x24)));
      sVar13 = 0;
    }
  }
  *((short *)GEN_TOP((param_1 + 0x2a))) = *((short *)GEN_TOP((param_1 + 0x2a))) + *((short *)GEN_TOP((param_1 + 4)));
  *((short *)GEN_TOP((param_1 + 0x2c))) = *((short *)GEN_TOP((param_1 + 0x2c))) + *((short *)GEN_TOP((param_1 + 4)));
  *((short *)GEN_TOP((param_1 + 0x1c))) = *((short *)GEN_TOP((param_1 + 0x1c))) + *((short *)GEN_TOP((param_1 + 2)));
  *((short *)GEN_TOP((param_1 + 0x20))) = *((short *)GEN_TOP((param_1 + 0x20))) - *((short *)GEN_TOP((param_1 + 2)));
  if (0x1fff < *((ushort *)GEN_TOP((param_1 + 0x2a)))) {
    *((ushort *)GEN_TOP((param_1 + 0x2a))) = *((ushort *)GEN_TOP((param_1 + 0x2a))) + 0xe000;
  }
  if (0x1fff < *((ushort *)GEN_TOP((param_1 + 0x1c)))) {
    *((ushort *)GEN_TOP((param_1 + 0x1c))) = *((ushort *)GEN_TOP((param_1 + 0x1c))) + 0xe000;
  }
  return 0x2000;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7ea0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce7ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  if (param_1[0x18] != 0) {
    F_00406810(param_1[0x18]);
  }
  if (param_1[0x1b] != 0) {
    F_00406810(param_1[0x1b]);
  }
  if (param_1[0x14] != 0) {
    F_00406810(param_1[0x14]);
  }
  F_00cf3b1e(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7f00(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce7f00u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  code * pcVar2;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x28)));
    break;
  case 1: ;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x30)));
    break;
  case 2: ;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x34)));
    break;
  case 3: ;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x3c)));
    break;
  case 4: ;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x40)));
    break;
  default: ;
    goto switchD_00ce7f0e_default;
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
switchD_00ce7f0e_default: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce7f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * pCVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  pCVar1 = this + 4;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(pCVar1);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)pCVar1 + 8))))(pCVar1 GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  bVar4 = (char)uVar2 != '\0';
  if (bVar4) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0xc))))(this + 0x4c GEN_EDX_ARG);
  bVar5 = (char)uVar2 != '\0';
  if (bVar5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 8))))(this + 0x4c GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0xc))))(this + 0x70 GEN_EDX_ARG);
  bVar6 = (char)uVar2 != '\0';
  if (bVar6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 8))))(this + 0x70 GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 0xc))))(this + 0x94 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 8))))(this + 0x94 GEN_EDX_ARG,param_1);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    return uVar2;
  }
  if (bVar6 || (bVar5 || (bVar4 || bVar3))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8050(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce8050u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  in_ecx = param_1 + 4;
  fVar1 = ((float)GEN_TOF((((float10)1 - (float10)param_2) * (float10)*(double *)&REFG(undefined, 0x1130088))));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
  fVar5 = (float10)fVar1;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 != bVar4) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                    (ushort)bVar4 << 0xe);
  }
  if (param_3 != 0) {
    uVar2 = F_00cccd90(in_ecx GEN_EDX_FWD,fVar1,param_3);
    return uVar2;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,fVar1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce80b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce80b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 4;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
  fVar4 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar4 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar5) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar4) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 != 0) {
    uVar1 = F_00cccd90(in_ecx GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8100(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce8100u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x28;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
  fVar4 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar4 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar5) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar4) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 != 0) {
    uVar1 = F_00cccd90(in_ecx GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8150(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce8150u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  in_ecx = param_1 + 0x4c;
  fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8) -
                 (float10)*(double *)&REFG(undefined, 0x1094568));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
  fVar5 = (float10)fVar1;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 != bVar4) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                    (ushort)bVar4 << 0xe);
  }
  if (param_3 != 0) {
    uVar2 = F_00cccd90(in_ecx GEN_EDX_FWD,fVar1,param_3);
    return uVar2;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,fVar1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce81c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce81c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x4c;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
  fVar4 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar4 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar5) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar4) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 != 0) {
    uVar1 = F_00cccd90(in_ecx GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8210(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce8210u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  uint uVar3;
  int in_ecx;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  double dVar8;
  
  fVar7 = (float10)0;
  fVar6 = (float10)param_2;
  if (!(fVar7 <= fVar6) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7)) {
    fVar7 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10944c0) / (fVar6 * (float10)*((float *)GEN_TOP((param_1 + 0xb8))))))),1)));
    fVar7 = (float10)(float)fVar7;
  }
  fVar1 = (float)fVar7;
  in_ecx = param_1 + 0x70;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x70))) + 0x10))))(in_ecx); dVar8 = extraout_ST0;
  fVar7 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(extraout_ST0);
  bVar5 = bVar4 || fVar7 == extraout_ST0;
  if (bVar4 != bVar5) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar7) << 8 | (ushort)bVar4 << 10 |
                    (ushort)bVar5 << 0xe);
  }
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,fVar1);
    return 0;
  }
  uVar3 = F_00cccd90(in_ecx GEN_EDX_ARG,fVar1,param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce82a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce82a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  uint uVar3;
  int in_ecx;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  double dVar8;
  
  fVar7 = (float10)0;
  fVar6 = (float10)param_2;
  if (!(fVar7 <= fVar6) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7)) {
    fVar7 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar6 * (float10)*((float *)GEN_TOP((param_1 + 0xb8))))))),1)));
    fVar7 = (float10)(float)fVar7;
  }
  fVar1 = (float)fVar7;
  in_ecx = param_1 + 0x94;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x94))) + 0x10))))(in_ecx); dVar8 = extraout_ST0;
  fVar7 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(extraout_ST0);
  bVar5 = bVar4 || fVar7 == extraout_ST0;
  if (bVar4 != bVar5) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar7) << 8 | (ushort)bVar4 << 10 |
                    (ushort)bVar5 << 0xe);
  }
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,fVar1);
    return 0;
  }
  uVar3 = F_00cccd90(in_ecx GEN_EDX_ARG,fVar1,param_3);
  return uVar3;
}

/* ref: FUN_00ce8330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce8330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar5;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  
  fVar1 = REFG(float, 0x10adba0);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb10(param_1 + 1 GEN_EDX_FWD,fVar1);
  F_00cccb10(param_1 + 10 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x13 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x1c GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x25 GEN_EDX_ARG,(float)(float10)0);
  param_1[0x2e] = (undefined4)gen_fl2bits((float)(float10)1);
  if (param_2 != 0) {
    fVar1 = *((float *)GEN_TOP((param_2 + 0x10)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[1] + 0x10))))(param_1 + 1);
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
    if (bVar3 == (bVar3 || fVar4 == extraout_ST0)) {
      F_00cccbd0(param_1 + 1 GEN_EDX_ARG,fVar1);
    }
    fVar1 = *((float *)GEN_TOP((param_2 + 0x14)));
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[10] + 0x10))))(param_1 + 10);
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0_00);
    if (bVar3 == (bVar3 || fVar4 == extraout_ST0_00)) {
      F_00cccbd0(param_1 + 10 GEN_EDX_ARG,fVar1);
    }
    fVar1 = *((float *)GEN_TOP((param_2 + 0x18)));
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x13] + 0x10))))(param_1 + 0x13);
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0_01);
    if (bVar3 == (bVar3 || fVar4 == extraout_ST0_01)) {
      F_00cccbd0(param_1 + 0x13 GEN_EDX_ARG,fVar1);
    }
    fVar4 = (float10)0;
    fVar5 = (float10)*((float *)GEN_TOP((param_2 + 0x1c)));
    if (!(fVar4 <= fVar5) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) {
      fVar4 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10944c0) / (fVar5 * ((float10)GEN_TOD(gen_bits2f(param_1[0x2e]))))))),1)));
      fVar4 = (float10)(float)fVar4;
    }
    extraout_ST0_02 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x1c] + 0x10))))(param_1 + 0x1c);
    fVar5 = (float10)(float)fVar4;
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0_02);
    if (bVar3 == (bVar3 || fVar5 == extraout_ST0_02)) {
      F_00cccbd0(param_1 + 0x1c GEN_EDX_ARG,(float)fVar4);
    }
    fVar4 = (float10)0;
    fVar5 = (float10)*((float *)GEN_TOP((param_2 + 0x20)));
    if (!(fVar4 <= fVar5) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) {
      fVar4 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar5 * ((float10)GEN_TOD(gen_bits2f(param_1[0x2e]))))))),1)));
      fVar4 = (float10)(float)fVar4;
    }
    extraout_ST0_03 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x25] + 0x10))))(param_1 + 0x25);
    fVar5 = (float10)(float)fVar4;
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0_03);
    if (bVar3 == (bVar3 || fVar5 == extraout_ST0_03)) {
      F_00cccbd0(param_1 + 0x25 GEN_EDX_ARG,(float)fVar4);
      return (uint)param_1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00ce8520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce8520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce8520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 * puVar2;
  
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134eee0),(int)this + 100,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20,((char *)REFP(0x112a0a8)),0,0,0x10)));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113009c);
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = puVar2;
  *puVar2 = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 8))) = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0xc))) = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0x18))) = uVar1;
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + 0x1c))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ce85d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce85d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce85d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if (*((int *)GEN_TOP(((int)this + 0xa0))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0xa0))));
  }
  F_00cf3c40(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce8600(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce8600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x50))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x52))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x56))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x5a))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x5e))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x62))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce8670(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce8670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar8;
  float * pfVar9;
  float * pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int local_18;
  float local_c;
  int local_8;
  
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return;
  }
  local_8 = *param_3;
  if (param_6 == 0) {
    F_00c46aa0(*param_5,local_8,(uint)*((ushort *)GEN_TOP(((int)param_1 + 0x5e))) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  local_18 = param_3[2];
  uVar11 = (uint)*((ushort *)GEN_TOP(((int)param_1 + 0x54)));
  iVar13 = *param_5;
  pfVar9 = ((float *)GEN_TOP(F_00cf3d40(param_1 GEN_EDX_ARG)));
  fVar1 = pfVar9[2];
  fVar2 = pfVar9[1];
  fVar3 = *pfVar9;
  fVar4 = pfVar9[3];
  fVar5 = pfVar9[4];
  if (0 < local_18) {
    do {
      fVar14 = (float10)*(double *)&REFG(undefined, 0x1130198);
      iVar12 = 0;
      local_c = (float)(float10)0;
      if (uVar11 != 0) {
        dVar8 = GEN_X87((double)fVar2 - REFG(double, 0x1088130));
        do {
          fVar14 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF((fVar14 + (float10)((float)GEN_TOF(ABS((float10)*((float *)GEN_TOP((local_8 + iVar12 * 4))))))))),2)));
          param_6 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)(float)fVar14 *
                                                              (float10)*(double *)&REFG(undefined, 0x1130188)) -
                                             (float10)fVar3))));
          fVar15 = (float10)0;
          fVar14 = ((float10)GEN_TOD(gen_bits2f(param_6)));
          if (fVar14 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar14)) && fVar15 != fVar14)) {
            param_6 = (uint)gen_fl2bits((float)fVar15);
          }
          fVar14 = (float10)*(double *)&REFG(undefined, 0x1130198);
          fVar15 = GEN_X87((float10)(float)(((float10)GEN_TOD(gen_bits2f(param_6))) + fVar14));
          fVar16 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xa0))) + iVar12 * 4)));
          if (!(fVar15 <= fVar16) == (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15))) {
            pfVar9 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xa0))) + iVar12 * 4)));
            fVar16 = GEN_X87(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xa0))) + iVar12 * 4))) - fVar15) *
                     (float10)fVar5);
          }
          else {
            pfVar9 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xa0))) + iVar12 * 4)));
            fVar16 = GEN_X87(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xa0))) + iVar12 * 4))) - fVar15) *
                     (float10)fVar4);
          }
          *pfVar9 = (float)(fVar16 + fVar15);
          fVar6 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0xa0))) + iVar12 * 4))) - fVar14)
                         * (float10)dVar8)));
          if (iVar12 == 3) {
            fVar14 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)fVar1) * (float10)*(double *)&REFG(undefined, 0x1130190)))),1)));
            *((float *)GEN_TOP((iVar13 + 0xc))) =
                 ((float)GEN_TOF(((float10)(float)fVar14 * (float10)*((float *)GEN_TOP((local_8 + 0xc))))));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x1130198);
          }
          else if (!((float10)local_c <= (float10)fVar6) !=
                   (GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)local_c))) {
            local_c = fVar6;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar11);
      }
      fVar14 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)(float)((float10)local_c + (float10)fVar1) * (float10)*(double *)&REFG(undefined, 0x1130190)))),1)));
      iVar12 = 0;
      fVar14 = (float10)(float)fVar14;
      if (3 < uVar11) {
        pfVar9 = ((float *)GEN_TOP((iVar13 + 4)));
        pfVar10 = ((float *)GEN_TOP((local_8 + 0xc)));
        do {
          if (iVar12 != 3) {
            pfVar9[-1] = (float)((float10)pfVar10[-3] * fVar14);
          }
          if (iVar12 != 2) {
            *pfVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((local_8 - iVar13) + (int)pfVar9))) * fVar14)));
          }
          if (iVar12 != 1) {
            pfVar9[1] = (float)((float10)pfVar10[-1] * fVar14);
          }
          if (iVar12 != 0) {
            pfVar9[2] = (float)((float10)*pfVar10 * fVar14);
          }
          iVar12 = iVar12 + 4;
          pfVar9 = pfVar9 + 4;
          pfVar10 = pfVar10 + 4;
        } while (iVar12 < (int)(uVar11 - 3));
      }
      if (iVar12 < (int)uVar11) {
        pfVar9 = ((float *)GEN_TOP((iVar13 + iVar12 * 4)));
        do {
          if (iVar12 != 3) {
            *pfVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((local_8 - iVar13) + (int)pfVar9))) * fVar14)));
          }
          iVar12 = iVar12 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar12 < (int)uVar11);
      }
      local_8 = local_8 + uVar11 * 4;
      iVar13 = iVar13 + uVar11 * 4;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  F_00cf3d90(param_1 GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: FUN_00ce8930 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00ce8930(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xce8930u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,2)));
  return GEN_X87((float10)(float)((float10)(float)fVar2 * (float10)*(double *)&REFG(undefined, 0x1130188)));
}

/* ref: FUN_00ce8960 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00ce8960(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xce8960u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1130190)),1)));
  return (float10)(float)fVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8990(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce8990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if (param_1[0x28] != 0) {
    F_00406810(param_1[0x28]);
  }
  F_00cf3c40(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf3 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce89e0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce89e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (param_3 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce8a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce8a50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce8a50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 4 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 4 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: FUN_00ce8a80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce8a80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce8a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce8aa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce8aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce8aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134f368),(int)this + 100,4,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130264));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x113024c));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x70))),0,0x20000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce8b00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce8b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = *puVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = puVar2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = puVar2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = puVar2[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x50))) = *(undefined2 *)(puVar2 + 4);
  puVar2 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x52))) = *puVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x56))) = puVar2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x5a))) = puVar2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x5e))) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *((float *)GEN_TOP((param_1 + 0x20074))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x2007c))) = (float)fVar3;
  *((undefined2 *)GEN_TOP((param_1 + 0x62))) = uVar1;
  *((float *)GEN_TOP((param_1 + 0x20078))) = (float)fVar3;
  *((undefined4 *)GEN_TOP((param_1 + 0x20070))) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce8b90(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  undefined4 * puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  uVar10 = param_1;
  if (param_3[1] != 1) {
    param_3 = ((undefined4 *)GEN_TOP(param_3[2]));
    fVar17 = (float10)0;
    *((float *)GEN_TOP((param_1 + 0x20074))) = (float)fVar17;
    uVar10 = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
    if (0 < (int)param_3) {
      do {
        iVar9 = 0;
        if (3 < uVar10) {
          do {
            *((float *)GEN_TOP((param_1 + 0x70 + (*((int *)GEN_TOP((param_1 + 0x20070))) + iVar9) * 4))) = (float)fVar17;
            *((float *)GEN_TOP((param_1 + 0x74 + (*((int *)GEN_TOP((param_1 + 0x20070))) + iVar9) * 4))) = (float)fVar17;
            *((float *)GEN_TOP((param_1 + 0x78 + (*((int *)GEN_TOP((param_1 + 0x20070))) + iVar9) * 4))) = (float)fVar17;
            iVar14 = *((int *)GEN_TOP((param_1 + 0x20070))) + iVar9;
            iVar9 = iVar9 + 4;
            *((float *)GEN_TOP((param_1 + 0x7c + iVar14 * 4))) = (float)fVar17;
          } while (iVar9 < (int)(uVar10 - 3));
        }
        for (; iVar9 < (int)uVar10; iVar9 = iVar9 + 1) {
          *((float *)GEN_TOP((param_1 + 0x70 + (*((int *)GEN_TOP((param_1 + 0x20070))) + iVar9) * 4))) = (float)fVar17;
        }
        *((int *)GEN_TOP((param_1 + 0x20070))) = *((int *)GEN_TOP((param_1 + 0x20070))) + 8;
        if (*((int *)GEN_TOP((param_1 + 0x20070))) == 0x8000) {
          *((undefined4 *)GEN_TOP((param_1 + 0x20070))) = 0;
        }
        param_3 = ((undefined4 *)GEN_TOP(((int)param_3 - 1)));
      } while (param_3 != ((undefined4 *)GEN_TOP(0x0)));
    }
    param_5[1] = 0;
    return (uint)param_5;
  }
  pfVar8 = ((float *)GEN_TOP(F_00cf3d40(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG)));
  pfVar13 = ((float *)GEN_TOP(*param_5));
  puVar15 = ((undefined4 *)GEN_TOP(*param_3));
  if (param_6 != 0) {
    fVar17 = (float10)*pfVar8;
    bVar16 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17);
    if (bVar16 != (bVar16 || (float10)1 == fVar17)) {
      fVar18 = (float10)REFG(float, 0x10920a4);
      fVar21 = (float10)*((float *)GEN_TOP((param_1 + 0x20074)));
      if (fVar21 <= fVar18 && ((!GEN_ISNAN(fVar18) && !GEN_ISNAN(fVar21)) && fVar18 != fVar21))
      goto LAB_00ce90ed;
    }
    (*(uint *)(gen_frame + 0x34)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)1 - fVar17);
    if (0 < (int)param_3[2]) {
      (*(int *)(gen_frame + 0x1c)) = param_3[2];
      do {
        fVar21 = (float10)REFG(float, 0x1094808);
        fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar10 + 0x20074))) + (float10)*(double *)&REFG(undefined, 0x11302a8))));
        fVar17 = (float10)fVar3;
        *((float *)GEN_TOP((uVar10 + 0x20074))) = fVar3;
        if (!(fVar17 <= (float10)1) != (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17))) {
          *((float *)GEN_TOP((uVar10 + 0x20074))) = (float)(fVar17 - (float10)REFG(double, 0x1088130));
        }
        fVar17 = (float10)*((float *)GEN_TOP((uVar10 + 0x20074)));
        if (!(fVar17 <= fVar21) || ((GEN_ISNAN(fVar21) || GEN_ISNAN(fVar17)) || fVar21 == fVar17)) {
          if (*((char *)GEN_TOP((uVar10 + 0x20080))) == '\0') goto LAB_00ce8c83;
        }
        else {
          *((undefined2 *)GEN_TOP((uVar10 + 0x20080))) = 0;
LAB_00ce8c83: ;
          if (!((float10)*((float *)GEN_TOP((uVar10 + 0x20074))) <= fVar21) !=
              (GEN_ISNAN(fVar21) || GEN_ISNAN((float10)*((float *)GEN_TOP((uVar10 + 0x20074)))))) {
            *((float *)GEN_TOP((uVar10 + 0x20078))) = (float)(float10)0;
            *((undefined1 *)GEN_TOP((uVar10 + 0x20080))) = 1;
          }
        }
        if ((*((char *)GEN_TOP((uVar10 + 0x20081))) == '\0') &&
           (!((float10)*((float *)GEN_TOP((uVar10 + 0x20074))) <= (float10)REFG(float, 0x1088138)) !=
            (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*((float *)GEN_TOP((uVar10 + 0x20074))))))) {
          *((float *)GEN_TOP((uVar10 + 0x2007c))) = (float)(float10)0;
          *((undefined1 *)GEN_TOP((uVar10 + 0x20081))) = 1;
        }
        fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar10 + 0x20078))) + (float10)(*(float *)(gen_frame + 0x20)))));
        *((float *)GEN_TOP((uVar10 + 0x20078))) = fVar3;
        *((float *)GEN_TOP((uVar10 + 0x2007c))) =
             ((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar10 + 0x2007c))) + (float10)(*(float *)(gen_frame + 0x20)))));
        dVar5 = (double)fVar3;
        fVar17 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar5),
                              (int)((ulonglong)gen_d2bits(dVar5) >> 0x20),&(*(double *)(gen_frame + 0x8)));
        (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((uVar10 + 0x20070))) + (int)(*(double *)(gen_frame + 0x8)) * -8;
        if ((*(int *)(gen_frame + 0x2c)) < 0) {
          (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x8000;
        }
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x2c)) - 8;
        if ((*(int *)(gen_frame + 0x2c)) - 8 < 0) {
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x2c)) + 0x7ff8;
        }
        fVar21 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((uVar10 + 0x2007c)))),
                              (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((uVar10 + 0x2007c)))) >>
                                   0x20),&(*(double *)(gen_frame + 0x0)));
        (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
        (*(int *)(gen_frame + 0x24)) = *((int *)GEN_TOP((uVar10 + 0x20070))) + (int)(*(double *)(gen_frame + 0x0)) * -8;
        if ((*(int *)(gen_frame + 0x24)) < 0) {
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0x8000;
        }
        (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x24)) - 8)));
        if ((*(int *)(gen_frame + 0x24)) - 8 < 0) {
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 0x7ff8)));
        }
        fVar19 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar10 + 0x20074))) -
                                 (float10)*(double *)&REFG(undefined, 0x1094878)))));
        fVar18 = (float10)1;
        fVar3 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - 
                                                  (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - (
                                                  float10)((float)GEN_TOF(ABS((float10)(float)(fVar19 + 
                                                  fVar19)))))))))))))))))))))));
        (*(float *)(gen_frame + 0x18)) = fVar3;
        fVar19 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((uVar10 + 0x20074))) +
                                 (float10)*(double *)&REFG(undefined, 0x1094878)))));
        fVar18 = (float10)1;
        iVar9 = 0;
        fVar17 = (float10)(float)fVar17;
        fVar21 = (float10)(float)fVar21;
        fVar20 = (float10)fVar3;
        fVar18 = (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((
                                                  fVar18 - (float10)((float)GEN_TOF(ABS((float10)(float)(
                                                  fVar19 + fVar19)))))))))))))))))))))));
        if (3 < (int)(*(uint *)(gen_frame + 0x34))) {
          param_6 = uVar10 + 0x74 + (*(int *)(gen_frame + 0x30)) * 4;
          fVar19 = GEN_X87((float10)1 - fVar21);
          param_1 = uVar10 + 0x74 + (*(int *)(gen_frame + 0x2c)) * 4;
          (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)GEN_TOP((uVar10 + 0x74 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x28))) * 4)));
          dVar5 = GEN_X87((double)((float10)1 - fVar17));
          (*(double *)(gen_frame + 0x10)) = dVar5;
          pfVar8 = ((float *)GEN_TOP((uVar10 + 0x74 + (*(int *)(gen_frame + 0x24)) * 4)));
          pfVar12 = pfVar13;
          do {
            pfVar7 = (*(float * PTR32 *)(gen_frame + 0x38));
            *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = *puVar15;
            fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 - 4))) * (float10)dVar5 +
                           (float10)*((float *)GEN_TOP((param_6 - 4))) * fVar17)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)pfVar8[-1] * fVar19 + (float10)(*(float * PTR32 *)(gen_frame + 0x38))[-1] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            *pfVar12 = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x74 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = puVar15[1];
            fVar3 = (float)((float10)*((float *)GEN_TOP(param_1)) * (float10)dVar5 +
                           (float10)*((float *)GEN_TOP(param_6)) * fVar17);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)*pfVar8 * fVar19 + (float10)*(*(float * PTR32 *)(gen_frame + 0x38)) * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[1] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x78 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = puVar15[2];
            fVar3 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 4))) * (float10)dVar5 +
                           (float10)*((float *)GEN_TOP((param_6 + 4))) * fVar17)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)pfVar8[1] * fVar19 + (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[2] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x7c + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = puVar15[3];
            pfVar1 = ((float *)GEN_TOP((param_6 + 8)));
            pfVar2 = ((float *)GEN_TOP((param_1 + 8)));
            param_1 = param_1 + 0x10;
            param_6 = param_6 + 0x10;
            (*(float * PTR32 *)(gen_frame + 0x38)) = (*(float * PTR32 *)(gen_frame + 0x38)) + 4;
            iVar9 = iVar9 + 4;
            pfVar13 = pfVar12 + 4;
            fVar3 = (float)((float10)*pfVar2 * (float10)dVar5 + (float10)*pfVar1 * fVar17);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            puVar15 = puVar15 + 4;
            fVar4 = (float)((float10)pfVar8[2] * fVar19 + (float10)pfVar7[2] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[3] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            pfVar8 = pfVar8 + 4;
            pfVar12 = pfVar13;
          } while (iVar9 < (int)((*(uint *)(gen_frame + 0x34)) - 3));
        }
        if (iVar9 < (int)(*(uint *)(gen_frame + 0x34))) {
          param_1 = uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x2c))) * 4;
          dVar5 = GEN_X87((double)((float10)1 - fVar17));
          (*(double *)(gen_frame + 0x10)) = dVar5;
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((uVar10 + 0x70 + (iVar9 + (int)(*(float * PTR32 *)(gen_frame + 0x28))) * 4)));
          pfVar8 = ((float *)GEN_TOP((uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x24))) * 4)));
          pfVar12 = pfVar13;
          param_6 = uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x30))) * 4;
          do {
            pfVar1 = (*(float * PTR32 *)(gen_frame + 0x28));
            *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = *puVar15;
            fVar3 = *((float *)GEN_TOP(param_1));
            param_1 = param_1 + 4;
            iVar9 = iVar9 + 1;
            pfVar13 = pfVar12 + 1;
            puVar15 = puVar15 + 1;
            fVar3 = (float)((float10)fVar3 * (float10)dVar5 + fVar17 * (float10)*((float *)GEN_TOP(param_6)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
            fVar4 = ((float)GEN_TOF(((float10)*pfVar8 * ((float10)1 - fVar21) + fVar21 * (float10)*pfVar1)));
            (*(float *)(gen_frame + 0x18)) = fVar4;
            *pfVar12 = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            pfVar8 = pfVar8 + 1;
            pfVar12 = pfVar13;
            param_6 = param_6 + 4;
          } while (iVar9 < (int)(*(uint *)(gen_frame + 0x34)));
        }
        *((int *)GEN_TOP((uVar10 + 0x20070))) = *((int *)GEN_TOP((uVar10 + 0x20070))) + 8;
        if (*((int *)GEN_TOP((uVar10 + 0x20070))) == 0x8000) {
          *((undefined4 *)GEN_TOP((uVar10 + 0x20070))) = 0;
        }
        iVar9 = (*(int *)(gen_frame + 0x1c)) - 1;
        (*(int *)(gen_frame + 0x1c)) = iVar9;
      } while (iVar9 != 0);
    }
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    uVar10 = F_00cf3d90(uVar10 GEN_EDX_ARG);
    return uVar10;
  }
LAB_00ce90ed: ;
  F_00c46aa0(pfVar13,puVar15,(uint)*((ushort *)GEN_TOP((param_1 + 0x5e))) * param_3[2]);
  uVar6 = param_3[2];
  uVar11 = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
  *((float *)GEN_TOP((param_1 + 0x20074))) = (float)(float10)0;
  param_1 = uVar6;
  if (0 < (int)uVar6) {
    do {
      iVar9 = 0;
      if (3 < uVar11) {
        do {
          *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = *puVar15;
          *((undefined4 *)GEN_TOP((uVar10 + 0x74 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = puVar15[1];
          *((undefined4 *)GEN_TOP((uVar10 + 0x78 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = puVar15[2];
          iVar14 = *((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9;
          iVar9 = iVar9 + 4;
          *((undefined4 *)GEN_TOP((uVar10 + 0x7c + iVar14 * 4))) = puVar15[3];
          puVar15 = puVar15 + 4;
        } while (iVar9 < (int)(uVar11 - 3));
      }
      for (; iVar9 < (int)uVar11; iVar9 = iVar9 + 1) {
        *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*((int *)GEN_TOP((uVar10 + 0x20070))) + iVar9) * 4))) = *puVar15;
        puVar15 = puVar15 + 1;
      }
      *((int *)GEN_TOP((uVar10 + 0x20070))) = *((int *)GEN_TOP((uVar10 + 0x20070))) + 8;
      if (*((int *)GEN_TOP((uVar10 + 0x20070))) == 0x8000) {
        *((undefined4 *)GEN_TOP((uVar10 + 0x20070))) = 0;
      }
      uVar6 = param_1 - 1;
      param_1 = uVar6;
    } while (uVar6 != 0);
  }
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  uVar10 = F_00cf3d90(uVar10 GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_00ce9280 */
GEN_LIB GEN_FRAME float10 GEN_STDCALL F_00ce9280(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xce9280u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)1;
  return (float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar1 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar1 - 
                                                  (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar1 - (
                                                  float10)((float)GEN_TOF(ABS((float10)(float)((float10)
                                                  param_1 + (float10)param_1)))))))))))))))))))))));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce92e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce92e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x1130264));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x113024c));
  F_00cf3c40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce9310 */
GEN_LIB GEN_FRAME unsigned int F_00ce9310(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce9330 */
GEN_LIB GEN_FRAME byte F_00ce9330(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (byte)((uint)*((undefined4 *)GEN_TOP((param_1 + 4))) >> 8) & 1;
}

/* ref: FUN_00ce9350 */
GEN_LIB GEN_FRAME byte F_00ce9350(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (byte)(*((uint *)GEN_TOP((param_1 + 4))) >> 10) & 1;
}

/* ref: FUN_00ce9370 */
GEN_LIB GEN_FRAME uint F_00ce9370(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((param_1 + 4))) >> 0xb & 1;
}

/* ref: FUN_00ce9390 */
GEN_LIB GEN_FRAME byte F_00ce9390(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (byte)(*((uint *)GEN_TOP((param_1 + 4))) >> 0xf) & 1;
}

/* ref: FUN_00ce93b0 */
GEN_LIB GEN_FRAME uint F_00ce93b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce93b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 4))) >> 0xd & 1;
}

/* ref: FUN_00ce93d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce93d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce93d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (*(int *)this + (uint)*((byte *)GEN_TOP(((int)this + 4))) * -0x10) - 0x10;
}

/* ref: FUN_00ce93e0 */
GEN_LIB GEN_FRAME uint F_00ce93e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce93e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((param_1 + 0x1c))) & 1) != 0) {
    return *((int *)GEN_TOP((param_1 + 0x24))) + 0x20;
  }
  return 0x20;
}

/* ref: FUN_00ce9400 */
GEN_LIB GEN_FRAME uint F_00ce9400(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((*((byte *)GEN_TOP((param_1 + 0x1c))) & 1) != 0) {
    return param_1 + 0x20;
  }
  return 0;
}

/* ref: FUN_00ce9420 */
GEN_LIB GEN_FRAME uint F_00ce9420(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((param_1 + 0x1f)));
}

/* ref: FUN_00ce9430 */
GEN_LIB_GS GEN_FRAME uint F_00ce9430(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce9430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x11303cc)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x11303ac)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ce94d0 */
GEN_LIB GEN_FRAME uint F_00ce94d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce94d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (param_1 == 1) {
    return 0x10;
  }
  if ((1 < param_1) && (param_1 < 4)) {
    return 0x20;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce9430));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130324)),((char *)REFP(0x1130304)),((char *)REFP(0x11302f8)),0x20,
                  ((char *)REFP(0x11302bc)));
  return 0;
}

/* ref: FUN_00ce9530 */
GEN_LIB GEN_FRAME uint F_00ce9530(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if (param_1 == 1) {
    return 8;
  }
  if ((1 < param_1) && (param_1 < 4)) {
    return 0x10;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce9430));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x11303a4)),((char *)REFP(0x1130384)),((char *)REFP(0x1130378)),0x3f,
                  ((char *)REFP(0x1130330)));
  return 0;
}

/* ref: FUN_00ce9590 */
GEN_LIB GEN_FRAME uint F_00ce9590(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP((param_1 + 4))) >> 8 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    return uVar1 + param_1;
  }
  return 0;
}

/* ref: FUN_00ce95c0 */
GEN_LIB GEN_FRAME uint F_00ce95c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce95c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP((param_1 + 4))) >> 8 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    if (uVar1 + param_1 != 0) {
      return uVar1 + param_1 + 0x10;
    }
  }
  return 0;
}

/* ref: FUN_00ce95f0 */
GEN_LIB GEN_FRAME uint F_00ce95f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce95f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if ((*((uint *)GEN_TOP((param_1 + 4))) >> 10 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    if ((*((uint *)GEN_TOP((param_1 + 4))) >> 8 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if (((int *)GEN_TOP((uVar2 + param_1))) != ((int *)GEN_TOP(0x0))) {
        uVar1 = uVar1 + *((int *)GEN_TOP((uVar2 + param_1)));
      }
    }
    return uVar1 + param_1;
  }
  return 0;
}

/* ref: FUN_00ce9640 */
GEN_LIB GEN_FRAME uint F_00ce9640(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1;
  if ((param_1 != 0) && ((*((uint *)GEN_TOP((param_1 + 4))) >> 0xb & 1) != 0)) {
    uVar2 = F_00ce9530(param_2);
    if ((*((uint *)GEN_TOP((param_1 + 4))) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if (((int *)GEN_TOP((uVar3 + param_1))) != ((int *)GEN_TOP(0x0))) {
        uVar2 = uVar2 + *((int *)GEN_TOP((uVar3 + param_1)));
      }
    }
    param_1 = uVar2;
    if ((*((uint *)GEN_TOP((iVar1 + 4))) >> 10 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((*((uint *)GEN_TOP((iVar1 + 4))) >> 8 & 1) != 0) {
        uVar3 = F_00ce9530(param_2);
        if (((int *)GEN_TOP((uVar3 + iVar1))) != ((int *)GEN_TOP(0x0))) {
          uVar2 = uVar2 + *((int *)GEN_TOP((uVar3 + iVar1)));
        }
      }
      if (((byte *)GEN_TOP((uVar2 + iVar1))) != ((byte *)GEN_TOP(0x0))) {
        param_1 = param_1 + *((byte *)GEN_TOP((uVar2 + iVar1)));
      }
    }
    return param_1 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce96e0 */
GEN_LIB GEN_FRAME uint F_00ce96e0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce96e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((*((uint *)GEN_TOP((param_1 + 4))) >> 0xf & 1) != 0) {
    uVar2 = F_00ce9530(param_2);
    if ((*((uint *)GEN_TOP((param_1 + 4))) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if (((int *)GEN_TOP((uVar3 + param_1))) != ((int *)GEN_TOP(0x0))) {
        uVar2 = uVar2 + *((int *)GEN_TOP((uVar3 + param_1)));
      }
    }
    param_1 = uVar2;
    uVar2 = param_1;
    if ((*((uint *)GEN_TOP((iVar1 + 4))) >> 10 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((*((uint *)GEN_TOP((iVar1 + 4))) >> 8 & 1) != 0) {
        uVar4 = F_00ce9530(param_2);
        if (((int *)GEN_TOP((uVar4 + iVar1))) != ((int *)GEN_TOP(0x0))) {
          uVar3 = uVar3 + *((int *)GEN_TOP((uVar4 + iVar1)));
        }
      }
      if (((byte *)GEN_TOP((uVar3 + iVar1))) != ((byte *)GEN_TOP(0x0))) {
        uVar2 = param_1 + *((byte *)GEN_TOP((uVar3 + iVar1)));
      }
    }
    uVar3 = F_00ce9640(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *((byte *)GEN_TOP((uVar3 + 1)));
    }
    return uVar2 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce9790 */
GEN_LIB GEN_FRAME uint F_00ce9790(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((*((uint *)GEN_TOP((param_1 + 4))) >> 0xd & 1) != 0) {
    uVar2 = F_00ce9530(param_2);
    if ((*((uint *)GEN_TOP((param_1 + 4))) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if (((int *)GEN_TOP((uVar3 + param_1))) != ((int *)GEN_TOP(0x0))) {
        uVar2 = uVar2 + *((int *)GEN_TOP((uVar3 + param_1)));
      }
    }
    param_1 = uVar2;
    uVar2 = param_1;
    if ((*((uint *)GEN_TOP((iVar1 + 4))) >> 10 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((*((uint *)GEN_TOP((iVar1 + 4))) >> 8 & 1) != 0) {
        uVar4 = F_00ce9530(param_2);
        if (((int *)GEN_TOP((uVar4 + iVar1))) != ((int *)GEN_TOP(0x0))) {
          uVar3 = uVar3 + *((int *)GEN_TOP((uVar4 + iVar1)));
        }
      }
      if (((byte *)GEN_TOP((uVar3 + iVar1))) != ((byte *)GEN_TOP(0x0))) {
        uVar2 = param_1 + *((byte *)GEN_TOP((uVar3 + iVar1)));
      }
    }
    uVar3 = F_00ce9640(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *((byte *)GEN_TOP((uVar3 + 1)));
    }
    uVar3 = F_00ce96e0(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *((ushort *)GEN_TOP((uVar3 + 2)));
    }
    return uVar2 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce9850 */
GEN_LIB GEN_FRAME uint F_00ce9850(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = param_1;
  if (param_1[3] == 4) {
    uVar2 = F_00ce9530(param_2);
    iVar4 = uVar2 + (uint)*param_1 * 8;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if (param_1 + uVar2 != ((byte *)GEN_TOP(0x0))) {
        iVar4 = iVar4 + *(int *)(param_1 + uVar2);
      }
    }
    param_1 = ((byte *)GEN_TOP(iVar4));
    iVar4 = (int)param_1;
    if ((*(uint *)(pbVar1 + 4) >> 10 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((*(uint *)(pbVar1 + 4) >> 8 & 1) != 0) {
        uVar3 = F_00ce9530(param_2);
        if (pbVar1 + uVar3 != ((byte *)GEN_TOP(0x0))) {
          uVar2 = uVar2 + *(int *)(pbVar1 + uVar3);
        }
      }
      if (pbVar1 + uVar2 != ((byte *)GEN_TOP(0x0))) {
        iVar4 = (int)param_1 + (uint)pbVar1[uVar2];
      }
    }
    uVar2 = F_00ce9640(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*((byte *)GEN_TOP((uVar2 + 1)));
    }
    uVar2 = F_00ce96e0(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*((ushort *)GEN_TOP((uVar2 + 2)));
    }
    uVar2 = F_00ce9790(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*((ushort *)GEN_TOP((uVar2 + 2)));
    }
    return (uint)(pbVar1 + iVar4);
  }
  return 0;
}

/* ref: FUN_00ce9920 */
GEN_LIB GEN_FRAME uint F_00ce9920(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce9920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  
  if ((*param_1 == 0) || (*param_1 <= param_2)) {
    return 0;
  }
  uVar2 = F_00ce9530(param_3);
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar3 = F_00ce9530(param_3);
    if (param_1 + uVar3 != ((byte *)GEN_TOP(0x0))) {
      uVar2 = uVar2 + *(int *)(param_1 + uVar3);
    }
  }
  pbVar4 = ((byte *)GEN_TOP(F_00ce95f0(param_1,param_3)));
  if (pbVar4 != ((byte *)GEN_TOP(0x0))) {
    uVar2 = uVar2 + *pbVar4;
  }
  uVar3 = F_00ce9640(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *((byte *)GEN_TOP((uVar3 + 1)));
  }
  uVar3 = F_00ce96e0(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *((ushort *)GEN_TOP((uVar3 + 2)));
  }
  uVar3 = F_00ce9790(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *((ushort *)GEN_TOP((uVar3 + 2)));
  }
  bVar1 = param_1[3];
  if (((bVar1 != 2) && (bVar1 != 4)) && (bVar1 != 0xc)) {
    return (uint)(param_1 + (uint)param_2 * 4 + uVar2);
  }
  return (uint)(param_1 + (uint)param_2 * 8 + uVar2);
}

/* ref: FUN_00ce9a00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce9a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((uint *)GEN_TOP((in_ecx + 0x14))) = *((uint *)GEN_TOP((in_ecx + 0x14))) | 8;
    return;
  }
  *((uint *)GEN_TOP((in_ecx + 0x14))) = *((uint *)GEN_TOP((in_ecx + 0x14))) & 0xfffffff7;
  return;
}

/* ref: FUN_00ce9a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce9a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce9a20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x15c))) = param_2;
  *((uint *)GEN_TOP((in_ecx + 0x160))) = param_3;
  return param_3;
}

/* ref: FUN_00ce9a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce9a40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce9a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x58 GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce9a60 */
GEN_LIB GEN_FRAME uint F_00ce9a60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  if ((2 < (uint)param_1[3]) && ((*((byte *)GEN_TOP((param_2 + 4))) & 0x80) == 0)) {
    if ((*(byte *)(param_1 + 0x12) & 8) == 0) {
      iVar2 = param_1[1];
    }
    else {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
      if (uVar1 != 3) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x35) & 2) == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
        return 0;
      }
      iVar2 = param_1[0x26];
    }
    if (iVar2 != 0) {
      return *((int *)GEN_TOP((*((int *)GEN_TOP((*((ushort *)GEN_TOP((iVar2 + 0xe))) + 0x18 + iVar2))) +
                      (uint)*((ushort *)GEN_TOP((param_2 + 6))) * 4 + iVar2))) + iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ce9ad0 */
GEN_LIB GEN_FRAME byte F_00ce9ad0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  if ((param_1 & 0xf0) < 0x51) {
                    
    switch((unsigned int)(uintptr_t)((&REFG(byte, 0xce9b5c))[(int)(param_1 & 0xf0)])) {
    case 0: ;
      return param_3 <= param_2;
    case 1: ;
      return param_3 < param_2;
    case 2: ;
      return param_2 < param_3;
    case 3: ;
      return param_2 <= param_3;
    case 4: ;
      return param_2 == param_3;
    case 5: ;
      return param_2 != param_3;
    }
  }
  return 0;
}

/* ref: FUN_00ce9bb0 */
GEN_LIB GEN_FRAME byte F_00ce9bb0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xce9bb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (0x50 < (param_1 & 0xf0)) {
switchD_00ce9bcb_default: ;
    return 0;
  }
                    
  switch((unsigned int)(uintptr_t)((&REFG(byte, 0xce9c74))[(int)(param_1 & 0xf0)])) {
  case 0: ;
    fVar2 = (float10)param_2;
    fVar3 = (float10)param_3;
    if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      return 1;
    }
    break;
  case 1: ;
    if (!((float10)param_2 <= (float10)param_3) != (GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2)))
    {
      return 1;
    }
    break;
  case 2: ;
    fVar2 = (float10)param_2;
    fVar3 = (float10)param_3;
    if (fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) {
      return 1;
    }
    break;
  case 3: ;
    if ((float10)param_2 <= (float10)param_3) {
      return 1;
    }
    break;
  case 4: ;
    bVar1 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2);
    if (bVar1 != (bVar1 || (float10)param_3 == (float10)param_2)) {
      return 1;
    }
    break;
  case 5: ;
    bVar1 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2);
    if (bVar1 == (bVar1 || (float10)param_3 == (float10)param_2)) {
      return 1;
    }
    break;
  case 6: ;
    goto switchD_00ce9bcb_default;
  }
  return 0;
}

/* ref: FUN_00ce9cd0 */
GEN_LIB GEN_FRAME uint F_00ce9cd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  puVar4 = ((undefined1 *)GEN_TOP(param_2));
  if ((param_2 != 0) && (param_1 != 0)) {
    if ((param_3 != ((int *)GEN_TOP(0x0))) && (param_2 - 1 < 5)) {
      if (param_2 == 1) {
        puVar4 = ((undefined1 *)GEN_TOP((param_1 + 0x10)));
      }
      else {
        puVar4 = ((undefined1 *)GEN_TOP((param_1 - 8 + param_2 * 0x18)));
      }
      if (puVar4 != ((undefined1 *)GEN_TOP(0x0))) {
        switch((unsigned int)(uintptr_t)(*puVar4)) {
        case 1: ;
          uVar2 = *(uint *)(puVar4 + 4);
          param_3[0x57] = (int)gen_fl2bits((float)(float10)1);
          param_3[0x58] = uVar2;
          return uVar2;
        case 2: ;
          uVar2 = F_00cc6660(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4));
          return uVar2;
        case 3: ;
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x54))))(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),0);
          param_3[5] = param_3[5] | 8;
          return uVar2;
        case 5: ;
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x54))))(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),0);
          return uVar2;
        case 10: ;
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x40))))(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),0);
          return uVar2;
        case 0xc: ;
          uVar2 = *(uint *)(puVar4 + 4);
          fVar1 = (float10)*(double *)&REFG(undefined, 0x10928e8);
          uVar3 = F_00cbf660(uVar2 >> 7 & 0x7f);
          puVar4 = ((undefined1 *)GEN_TOP(0x0));
          if (uVar3 != 0) {
            puVar4 = ((undefined1 *)GEN_TOP(F_00cccd90(uVar3 + 0x58 GEN_EDX_ARG,((float)GEN_TOF(((float10)(uVar2 & 0x7f) * fVar1))),uVar2 >> 0xe
                                 )));
          }
        }
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00ce9e10 */
GEN_LIB GEN_FRAME unsigned int F_00ce9e10(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce9e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce9e30 */
GEN_LIB_GS GEN_FRAME uint F_00ce9e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce9e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  F_00c4720f(((char *)(gen_frame + 0x8)),((char *)REFP(0x11304d4)));
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00c4720f(((char *)(gen_frame + 0x8)),((char *)REFP(0x11304e0)));
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; iVar4 = REFG(int, 0x15d8c2c), uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  iVar6 = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  if (0 < iVar4) {
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + REFG(int, 0x15d8c34)))) + 0x98))))
                        (((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + REFG(int, 0x15d8c34)))) GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        F_00c4720f(((char *)(gen_frame + 0x8)),&REFG(undefined, 0x11304ec),iVar6);
        pcVar2 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
        pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
        do {
          pcVar7 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = ((char *)(gen_frame + 0x8));
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar2 = pcVar2 + 4;
        }
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar2 = pcVar2 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x250;
      iVar4 = REFG(int, 0x15d8c2c);
    } while (iVar6 < REFG(int, 0x15d8c2c));
  }
  F_00c4720f(((char *)(gen_frame + 0x8)),((char *)REFP(0x11304f0)),(*(int *)(gen_frame + 0x4)),iVar4);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = ((char *)GEN_TOP((param_1 - 1)));
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return uVar3;
}

/* ref: FUN_00ce9fe0 */
GEN_LIB GEN_NOFRAME uint F_00ce9fe0(void)
{
  GEN_ENTER(0xce9fe0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(undefined4, 0x15d8c2c) = 0;
  if (REFG(undefined4 * PTR32, 0x15d8c34) != ((undefined4 *)GEN_TOP(0x0))) {
    if (REFG(undefined4 * PTR32, 0x15d8c34)[-1] == 0) {
      F_00406b30(REFG(undefined4 * PTR32, 0x15d8c34) - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c34))))(REFG(undefined4 * PTR32, 0x15d8c34) GEN_EDX_ARG,3);
    }
  }
  if (REFG(int, 0x15d8c38) != 0) {
    F_00406810(REFG(int, 0x15d8c38));
  }
  REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
  if (REFG(char, 0x15d8c84) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
  }
  uVar1 = 0;
  if (REFG(int, 0x15d8c70) != 0) {
    uVar1 = F_00406810(REFG(int, 0x15d8c70));
    REFG(int, 0x15d8c70) = 0;
  }
  REFG(undefined4, 0x15d8c74) = 0;
  if (REFG(char, 0x15d8ca0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
    uVar1 = extraout_EAX;
  }
  REFG(int, 0x15d8c38) = 0;
  REFG(undefined4 * PTR32, 0x15d8c34) = ((undefined4 *)GEN_TOP(0x0));
  return uVar1;
}

/* ref: FUN_00cea080 */
GEN_LIB GEN_NOFRAME uint F_00cea080(void)
{
  GEN_ENTER(0xcea080u, 0u, 0u, 0u, 0u);
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8cd8));
  puVar3 = REFG(undefined4 * PTR32, 0x15d8c44);
  if (REFG(int, 0x15d8c30) < REFG(int, 0x15d8c2c)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4)));
    *((undefined4 *)GEN_TOP((REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4))) = 0;
    REFG(int, 0x15d8c30) = REFG(int, 0x15d8c30) + 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_ARG);
    if (REFG(char, 0x15d8cf0) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
    }
    return (uint)piVar1;
  }
  if (REFG(undefined4 * PTR32, 0x15d8c44) != (undefined4 *)&REFG(undefined, 0x15d8ca4)) {
    piVar1 = ((int *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c44)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_ARG);
    uVar2 = puVar3[1];
    *((undefined4 *)GEN_TOP((puVar3[2] + 4))) = uVar2;
    *((undefined4 *)GEN_TOP((puVar3[1] + 8))) = puVar3[2];
    REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
    if (REFG(char, 0x15d8c84) != '\0') {
      gen_imp_EnterCriticalSection(uVar2,&REFG(undefined, 0x15d8c88));
    }
    *puVar3 = REFG(undefined4 * PTR32, 0x15d8c74);
    REFG(undefined4 * PTR32, 0x15d8c74) = puVar3;
    if (REFG(char, 0x15d8ca0) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8c88));
    }
    if (REFG(char, 0x15d8cf0) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8cd8));
    }
    return (uint)piVar1;
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  }
  return 0;
}

/* ref: FUN_00cea180 */
GEN_LIB GEN_FRAME uint F_00cea180(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcea180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  undefined4 * in_ecx;
  uint extraout_EAX = 0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint extraout_EAX_00 = 0;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  uVar1 = extraout_EAX;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x90))))(param_1 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x98))))(param_1 GEN_EDX_ARG);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x9c))))(param_1 GEN_EDX_ARG), (char)uVar2 == '\0')) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00cc67c0(&REFG(undefined4, 0x15d8c70) GEN_EDX_ARG)));
      *puVar3 = param_1;
      in_ecx = puVar3 + 3;
      puVar3[1] = REFG(undefined4 * PTR32, 0x15d8ca8);
      puVar3[2] = &REFG(undefined, 0x15d8ca4);
      if (in_ecx != ((undefined4 *)GEN_TOP(0x0))) {
        F_00cccb10(in_ecx GEN_EDX_ARG,(float)(float10)1);
      }
      uVar1 = F_00cccd90(in_ecx GEN_EDX_ARG,(float)(float10)0,uVar1);
      REFG(undefined4 * PTR32, 0x15d8ca8)[2] = puVar3;
      REFG(undefined4 * PTR32, 0x15d8ca8) = puVar3;
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))(param_1 GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xa0))))(param_1 GEN_EDX_ARG);
      uVar1 = REFG(undefined4, 0x15d8c30) - 1;
      REFG(undefined4, 0x15d8c30) = uVar1;
      *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d8c38) + uVar1 * 4))) = param_1;
    }
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

/* ref: FUN_00cea270 */
GEN_LIB GEN_FRAME byte F_00cea270(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcea270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  puVar2 = REFG(undefined4 * PTR32, 0x15d8ca8);
  if (REFG(undefined4 * PTR32, 0x15d8ca8) != (undefined4 *)&REFG(undefined, 0x15d8c3c)) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar2)) + 0x14))))(((int *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
      if (uVar1 == param_1) {
        if (REFG(char, 0x15d8cf0) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
        }
        return 1;
      }
      puVar2 = ((undefined4 *)GEN_TOP(puVar2[1]));
    } while (puVar2 != (undefined4 *)&REFG(undefined, 0x15d8c3c));
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  }
  return 0;
}

/* ref: FUN_00cea2f0 */
GEN_LIB GEN_FRAME unsigned int F_00cea2f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcea2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 extraout_ST0;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  puVar3 = REFG(undefined4 * PTR32, 0x15d8ca8);
  if (REFG(undefined4 * PTR32, 0x15d8ca8) != (undefined4 *)&REFG(undefined, 0x15d8c3c)) {
    do {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((puVar3[3] + 0xc))))(puVar3 + 3);
      if ((char)uVar2 == '\0') {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x98))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
        if ((char)uVar2 == '\0') {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x40))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x28))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG,param_1);
          puVar4 = ((undefined4 *)GEN_TOP(puVar3[1]));
        }
        else {
          *((undefined4 *)GEN_TOP((puVar3[2] + 4))) = puVar3[1];
          *((undefined4 *)GEN_TOP((puVar3[1] + 8))) = puVar3[2];
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0xa0))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG);
          REFG(int, 0x15d8c30) = REFG(int, 0x15d8c30) - 1;
          *((undefined4 *)GEN_TOP((REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4))) = *puVar3;
          puVar4 = ((undefined4 *)GEN_TOP(puVar3[1]));
          REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
          if (REFG(char, 0x15d8c84) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
          }
          *puVar3 = REFG(undefined4 * PTR32, 0x15d8c74);
          REFG(undefined4 * PTR32, 0x15d8c74) = puVar3;
          if (REFG(char, 0x15d8ca0) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
          }
        }
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((puVar3[3] + 8))))(puVar3 + 3,param_1);
        iVar1 = *((int *)GEN_TOP(*puVar3));
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((puVar3[3] + 0x10))))(puVar3 + 3);
        ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x94))))(*puVar3,(undefined4)gen_fl2bits((float)extraout_ST0));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar3)) + 0x28))))(((int *)GEN_TOP(*puVar3)) GEN_EDX_ARG,param_1);
        puVar4 = ((undefined4 *)GEN_TOP(puVar3[1]));
      }
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)&REFG(undefined, 0x15d8c3c));
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  }
  return 0;
}

/* ref: FUN_00cea440 */
GEN_LIB_GS GEN_FRAME uint F_00cea440(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcea440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1130528)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1130508)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cea4e0 */
GEN_LIB GEN_FRAME uint F_00cea4e0(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcea4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  uint * this;
  
  F_00ce9fe0();
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    REFG(undefined4, 0x15d8c30) = 0;
    REFG(undefined4, 0x15d8c2c) = uVar1;
    if (uVar1 == 0) {
      puVar2 = ((uint *)GEN_TOP(F_00406a50(4)));
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
      uVar3 = -(uint)((int)((ulonglong)uVar1 * 0x250 >> 0x20) != 0) |
              (uint)((ulonglong)uVar1 * 0x250);
      puVar2 = ((uint *)GEN_TOP(F_00cc64a0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,&(*(char * PTR32 *)(gen_frame + 0x0)))));
    }
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      REFG(uint * PTR32, 0x15d8c34) = ((uint *)GEN_TOP(0x0));
      F_00ce9fe0();
      return 0xffffffff;
    }
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
    this = puVar2;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      F_00cf7030(this GEN_EDX_ARG);
      this = this + 0x94;
    }
    REFG(uint * PTR32, 0x15d8c34) = puVar2;
    if (puVar2 != ((uint *)GEN_TOP(0x0))) {
      uVar3 = F_00cc1020(REFG(undefined4, 0x15d8c2c) * 4);
      uVar1 = REFG(undefined4, 0x15d8c2c);
      iVar4 = 0;
      puVar2 = REFG(uint * PTR32, 0x15d8c34);
      REFG(undefined4, 0x15d8c38) = uVar3;
      if (0 < (int)REFG(undefined4, 0x15d8c2c)) {
        do {
          *((uint * PTR32 *)GEN_TOP((uVar3 + iVar4 * 4))) = puVar2;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 0x94;
        } while (iVar4 < (int)uVar1);
      }
      (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
      F_00cc6930(&REFG(undefined4, 0x15d8c70) GEN_EDX_ARG,0x34,uVar1,&(*(char * PTR32 *)(gen_frame + 0x0)),0x10,1);
      F_00c48350(&REFG(undefined, 0x15d8ca4),0,0x34);
      F_00c48350(&REFG(undefined, 0x15d8c3c),0,0x34);
      REFG(undefined * PTR32, 0x15d8ca8) = &REFG(undefined, 0x15d8c3c);
      REFG(undefined * PTR32, 0x15d8c44) = &REFG(undefined, 0x15d8ca4);
      return 0;
    }
  }
  F_00ce9fe0();
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cea670(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcea670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int * this;
  
  if ((param_2 & 2) == 0) {
    F_00cf7ed0(param_1 GEN_EDX_FWD);
    if (((param_2 & 1) != 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
      F_00406810(param_1);
    }
  }
  else {
    piVar1 = param_1 - 1;
    iVar2 = *piVar1;
    this = param_1 + iVar2 * 0x94;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = this - 0x94;
      F_00cf7ed0(this GEN_EDX_ARG);
    }
    param_1 = piVar1;
    if (((param_2 & 1) != 0) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
      F_00406810(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00cea700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cea700(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcea700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  *in_ecx = (float)(float10)0;
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,(float)(float10)0);
  F_00cccb10(in_ecx + 10 GEN_EDX_ARG,(float)(float10)0);
  in_ecx[0x13] = (float)(float10)0;
  in_ecx[0x14] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_00cea740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cea740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcea740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  (*pcVar1)((int)this + 4,(undefined4)gen_fl2bits((float)(float10)0));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))))
                    ((int)this + 0x28,(undefined4)gen_fl2bits((float)(float10)0));
  *((undefined1 *)GEN_TOP(((int)this + 0x26))) = 1;
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)(float10)0;
  *(float *)this = (float)(float10)0;
  return uVar2;
}

/* ref: FUN_00cea780 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cea780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcea780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float local_8;
  
  local_8 = (float)(float10)0;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x50))))) {
  case 0: ;
    local_8 = (float)(float10)0;
    break;
  case 1: ;
    fVar2 = ((float10)GEN_TOD(fsin(
                          (float10)((float)GEN_TOF((((float10)*(float *)this + (float10)*(float *)this) *
                                          (float10)*(double *)&REFG(undefined, 0x1080228)))))));
    local_8 = (float)fVar2;
    break;
  case 2: ;
    fVar3 = (float10)REFG(float, 0x1088068);
    fVar2 = (float10)*(float *)this;
    if (fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) {
LAB_00cea8cd: ;
      local_8 = (float)(float10)1;
      break;
    }
    goto LAB_00cea7e1;
  case 3: ;
    fVar3 = (float10)REFG(float, 0x1094808);
    fVar2 = (float10)*(float *)this;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      fVar3 = (float10)REFG(float, 0x1088138);
      fVar2 = (float10)*(float *)this;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        local_8 = ((float)GEN_TOF((((float10)*(float *)this - (float10)*(double *)&REFG(undefined, 0x10919f0)) *
                          (float10)*(double *)&REFG(undefined, 0x1094788) - (float10)REFG(double, 0x1088130))));
      }
      else {
        local_8 = ((float)GEN_TOF(((float10)1 -
                         ((float10)*(float *)this - (float10)*(double *)&REFG(undefined, 0x1094878)) *
                         (float10)*(double *)&REFG(undefined, 0x1094788))));
      }
    }
    else {
      local_8 = (float)((float10)*(float *)((int)(uintptr_t)this) * (float10)*(double *)&REFG(undefined, 0x1094788));
    }
    break;
  case 4: ;
    fVar3 = (float10)REFG(float, 0x1088068);
    fVar2 = (float10)*(float *)this;
    fVar1 = (float10)*(float *)this;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      local_8 = (float)(fVar1 * (float10)*(double *)&REFG(undefined, 0x1092098) -
                       (float10)*(double *)&REFG(undefined, 0x1092098));
    }
    else {
      local_8 = (float)(fVar1 + fVar1);
    }
    break;
  case 5: ;
    local_8 = F_00a4b7d0();
    break;
  case 6: ;
    fVar2 = ((float10)GEN_TOD(fsin(
                          (float10)((float)GEN_TOF((((float10)*(float *)this + (float10)*(float *)this) *
                                          (float10)*(double *)&REFG(undefined, 0x1080228)))))));
    local_8 = ((float)GEN_TOF(-(float10)(float)fVar2));
    break;
  case 7: ;
    fVar3 = (float10)REFG(float, 0x1088068);
    fVar2 = (float10)*(float *)this;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) goto LAB_00cea8cd;
LAB_00cea7e1: ;
    local_8 = REFG(float, 0x1090708);
    break;
  case 8: ;
    fVar3 = (float10)REFG(float, 0x1094808);
    fVar2 = (float10)*(float *)this;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      fVar3 = (float10)REFG(float, 0x1088138);
      fVar2 = (float10)*(float *)this;
      if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
        local_8 = ((float)GEN_TOF((((float10)*(float *)this - (float10)*(double *)&REFG(undefined, 0x10919f0)) *
                          (float10)*(double *)&REFG(undefined, 0x1094788) + (float10)REFG(double, 0x1088130))));
      }
      else {
        local_8 = ((float)GEN_TOF((((float10)*(float *)this - (float10)*(double *)&REFG(undefined, 0x1094878)) *
                          (float10)*(double *)&REFG(undefined, 0x1094788) - (float10)REFG(double, 0x1088130))));
      }
    }
    else {
      local_8 = (float)((float10)*(float *)((int)(uintptr_t)this) * (float10)*(double *)&REFG(undefined, 0x10944a0));
    }
    break;
  case 9: ;
    fVar3 = (float10)REFG(float, 0x1088068);
    fVar2 = (float10)*(float *)this;
    if (!(fVar2 <= fVar3) || ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      local_8 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) -
                       (float10)*(float *)((int)(uintptr_t)this) * (float10)*(double *)&REFG(undefined, 0x1092098));
    }
    else {
      local_8 = (float)((float10)*(float *)((int)(uintptr_t)this) * (float10)*(double *)&REFG(undefined, 0x10944c0));
    }
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10))))((int)this + 4);
  return GEN_X87((float)(extraout_ST0 * (float10)local_8));
}

/* ref: FUN_00cea9b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cea9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcea9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x50))) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xc))))((int)this + 4);
    if ((char)uVar1 == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 0xc))))((int)this + 0x28);
      if ((char)uVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}

/* ref: FUN_00cea9f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cea9f0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcea9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float10 fVar2;
  uint uVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 fVar5;
  
  if (param_1[0x14] != 0.0) {
    ((code *)*((gen_code32 *)GEN_TOP(((int)gen_fl2bits(param_1[1]) + 8))))(param_1 + 1,param_2);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP(((int)gen_fl2bits(param_1[10]) + 0xc))))(param_1 + 10);
    if ((char)uVar3 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP(((int)gen_fl2bits(param_1[10]) + 8))))(param_1 + 10,param_2);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP(((int)gen_fl2bits(param_1[10]) + 0x10))))(param_1 + 10);
      param_1[0x13] = (float)((float10)1 / extraout_ST0);
    }
    fVar4 = GEN_X87((float10)param_1[0x13] * (float10)(int)param_2 + (float10)*param_1);
    fVar1 = (float)fVar4;
    fVar5 = (float10)fVar1;
    *param_1 = fVar1;
    fVar2 = (float10)1;
    if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar5)) && fVar2 < fVar5 != (fVar2 == fVar5)) {
      *param_1 = (float)(fVar5 - (float10)(int)fVar4);
      return;
    }
  }
  return;
}

/* ref: FUN_00ceaa80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ceaa80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xceaa80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 4 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 4 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: FUN_00ceaab0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ceaab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xceaab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x10))))((int)this + 4));
}

/* ref: FUN_00ceaac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ceaac0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xceaac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)(int)param_2;
  if (param_3 != 0) {
    if ((int)param_2 < 0) {
      fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    uVar1 = F_00cccd90(param_1 + 0x28 GEN_EDX_FWD,(float)fVar2,param_3);
    return uVar1;
  }
  if ((int)param_2 < 0) {
    fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  *((float *)GEN_TOP((param_1 + 0x4c))) = (float)((float10)1 / (float10)(float)fVar2);
  F_00cccbd0(param_1 + 0x28 GEN_EDX_ARG,(float)fVar2);
  return 0;
}

/* ref: FUN_00ceab20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ceab20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xceab20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  uint local_10;
  ushort uStack_c;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 0x10))))((int)this + 0x28);
  uStack_c = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_c);
  local_10 = (uint)(longlong)TRUNC(extraout_ST0);
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  return local_10;
}

/* ref: FUN_00ceab50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ceab50(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xceab50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  int local_c;
  ushort uStack_8;
  
  if (param_1[0x14] != 0.0) {
    fVar1 = (float10)(int)param_2;
    if ((int)param_2 < 0) {
      fVar1 = GEN_X87(fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    fVar1 = GEN_X87((float10)(float)(fVar1 * (float10)param_1[0x13] + (float10)*param_1));
    uStack_8 = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_8);
    local_c = (int)(longlong)TRUNC(fVar1);
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    fVar2 = (float10)local_c;
    if (local_c < 0) {
      fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *param_1 = (float)(fVar1 - fVar2);
  }
  return;
}

/* ref: FUN_00ceabb0 */
GEN_LIB GEN_FRAME float10 F_00ceabb0(GEN_P(float param_1, float gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xceabb0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  double dVar1;
  
  dVar1 = F_00c52a5e((double)param_1,param_2);
  return (float10)(float)dVar1;
}

/* ref: FUN_00ceabd0 */
GEN_LIB GEN_FRAME float10 F_00ceabd0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xceabd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,1)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00ceabf0 */
GEN_LIB GEN_FRAME float10 F_00ceabf0(GEN_P(float param_1, float gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xceabf0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  double dVar1;
  
  dVar1 = F_00c52a5e((double)param_1,param_2);
  return (float10)(float)dVar1;
}

/* ref: FUN_00ceac10 */
GEN_LIB GEN_FRAME float10 F_00ceac10(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xceac10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,2)));
  return (float10)(float)fVar2;
}

/* ref: FUN_00ceac70 */
GEN_LIB GEN_NOFRAME unsigned int F_00ceac70(void)
{
  GEN_ENTER(0xceac70u, 0u, 0u, 0u, 0u);
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = (iVar2 << 0x18) >> 0x1f & 0x4c11db7U ^ iVar2 << 0x19;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    uVar1 = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    (&REFG(undefined4, 0x15d8df8))[(int)(iVar2)] = (int)uVar1 >> 0x1f & 0x4c11db7U ^ uVar1 * 2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return 0;
}

/* ref: FUN_00ceadd0 */
GEN_LIB GEN_NOFRAME unsigned int F_00ceadd0(void)
{
  GEN_ENTER(0xceadd0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = (uVar2 >> 1 ^ uVar2 * 2) & 0x55555555 ^ uVar2 * 2;
    uVar1 = (uVar1 >> 2 ^ uVar1 * 4) & 0x33333333 ^ uVar1 * 4;
    (&REFG(undefined1, 0x15d8cf8))[(int)(uVar2)] = (byte)(uVar1 >> 4) & 0xf ^ (byte)(uVar1 << 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return 0;
}

/* ref: FUN_00ceae50 */
GEN_LIB GEN_FRAME float10 F_00ceae50(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xceae50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)(float)((float10)param_1 * (float10)param_1));
}

/* ref: FUN_00ceae60 */
GEN_LIB GEN_FRAME float10 F_00ceae60(GEN_P(uint in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xceae60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_edx = (uint)gen_a0;)
  float10 fVar1;
  double dVar2;
  
  if ((int)in_edx < 0) {
    fVar1 = -(float10)(in_edx & 0x1fffff);
  }
  else {
    fVar1 = (float10)(in_edx & 0x1fffff);
  }
  dVar2 = F_00c52a5e((double)(float)fVar1,(in_edx >> 0x15 & 0x3ff) - 0x314);
  return (float10)(float)dVar2;
}

/* ref: FUN_00ceaed0 */
GEN_LIB GEN_FRAME uint F_00ceaed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xceaed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  *((int *)GEN_TOP((param_1 + 0x28))) = iVar1 + 4;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c + iVar1 * 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((param_1 + 0x30 + iVar1 * 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((param_1 + 0x34 + iVar1 * 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP((param_1 + 0x38 + iVar1 * 4))) = 0xffffffff;
  return iVar1 + 0x80000000;
}

/* ref: FUN_00ceaf00 */
GEN_LIB GEN_FRAME uint F_00ceaf00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xceaf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 <= *((int *)GEN_TOP((param_1 + 0x28))) - 4U) {
    return (uint)(*((int *)GEN_TOP((param_1 + 0x2c + param_2 * 4))) == -1);
  }
  return 1;
}

/* ref: FUN_00ceaf30 */
GEN_LIB GEN_FRAME unsigned int F_00ceaf30(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(uint in_ecx, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xceaf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(uint in_ecx = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_8;
  
  iVar6 = in_ecx * 0x4000000 + param_4;
  if (8 < in_ecx) {
    iVar3 = *((int *)GEN_TOP((in_eax + 0x28)));
    uVar5 = param_3 & 0xff;
    if ((iVar3 - 4U < uVar5) || (*((int *)GEN_TOP((in_eax + 0x2c + uVar5 * 4))) == -1)) {
      *((int *)GEN_TOP((in_eax + 0x28))) = iVar3 + 4;
      *((undefined4 *)GEN_TOP((in_eax + 0x2c + iVar3 * 4))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((in_eax + 0x30 + iVar3 * 4))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((in_eax + 0x34 + iVar3 * 4))) = 0xffffffff;
      *((undefined4 *)GEN_TOP((in_eax + 0x38 + iVar3 * 4))) = 0xffffffff;
      *((int *)GEN_TOP((in_eax + 0x2c + uVar5 * 4))) = iVar3 + ((int)0x80000000);
    }
    iVar3 = in_ecx - 8;
    iVar7 = in_eax + 0x2c + *((int *)GEN_TOP((in_eax + 0x2c + uVar5 * 4))) * 4;
    uVar5 = param_3 >> 8;
    if (2 < iVar3) {
      local_8 = (in_ecx - 0xb >> 1) + 1;
      iVar3 = iVar3 + local_8 * -2;
      do {
        uVar8 = uVar5 & 3;
        iVar1 = *((int *)GEN_TOP((in_eax + 0x28)));
        uVar4 = (int)(((uVar8 * 4 - 0x2c) - in_eax) + iVar7) >> 2;
        if ((iVar1 - 4U < uVar4) || (*((int *)GEN_TOP((in_eax + 0x2c + uVar4 * 4))) == -1)) {
          *((int *)GEN_TOP((in_eax + 0x28))) = iVar1 + 4;
          *((undefined4 *)GEN_TOP((in_eax + 0x2c + iVar1 * 4))) = 0xffffffff;
          *((undefined4 *)GEN_TOP((in_eax + 0x30 + iVar1 * 4))) = 0xffffffff;
          *((undefined4 *)GEN_TOP((in_eax + 0x34 + iVar1 * 4))) = 0xffffffff;
          *((undefined4 *)GEN_TOP((in_eax + 0x38 + iVar1 * 4))) = 0xffffffff;
          *((int *)GEN_TOP((iVar7 + uVar8 * 4))) = iVar1 + ((int)0x80000000);
        }
        iVar7 = in_eax + 0x2c + *((int *)GEN_TOP((iVar7 + uVar8 * 4))) * 4;
        uVar5 = uVar5 >> 2;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    do {
      *((int *)GEN_TOP((iVar7 + uVar5 * 4))) = iVar6;
      uVar5 = uVar5 + (1 << GEN_SHC((byte)iVar3, (unsigned int)(uintptr_t)iVar3));
    } while (uVar5 < 4);
    return 0;
  }
  iVar3 = 1 << GEN_SHC((byte)in_ecx, (unsigned int)(uintptr_t)in_ecx);
  piVar2 = ((int *)GEN_TOP((in_eax + 0x2c + param_3 * 4)));
  uVar5 = param_3;
  do {
    *piVar2 = iVar6;
    uVar5 = uVar5 + iVar3;
    piVar2 = piVar2 + iVar3;
  } while (uVar5 < 0x100);
  return 0;
}

/* ref: FUN_00ceb070 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ceb070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xceb070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x88, 8, 4);
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x80)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x84));
  F_00c48350(((uint *)(gen_frame + 0x0)),0,0x80);
  iVar13 = 0;
  if (0 < param_2) {
    do {
      if (*((char *)GEN_TOP(((int)this + iVar13))) != -1) break;
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_2);
  }
  if (iVar13 != param_2) {
    *((undefined4 *)GEN_TOP((param_1 + 0x28))) = 0x100;
    F_00c48350(((undefined *)GEN_TOP((param_1 + 0x2c))),0xff,0x400);
    F_00ceaf30(param_1,(uint)*((byte *)GEN_TOP(((int)this + iVar13))),0,iVar13);
    bVar10 = *((byte *)GEN_TOP(((int)this + iVar13)));
    if (bVar10 != 0) {
      bVar9 = 0x1f;
      iVar12 = 1;
      do {
        bVar6 = bVar9 & 0x1f;
        iVar7 = iVar12 + 1;
        bVar9 = bVar9 - 1;
        ((uint *)(gen_frame + 0x0))[(int)(iVar12)] = 1 << bVar6;
        iVar12 = iVar7;
      } while (iVar7 <= (int)(uint)bVar10);
    }
    while (iVar13 = iVar13 + 1, iVar13 < param_2) {
      uVar11 = (uint)*((byte *)GEN_TOP(((int)this + iVar13)));
      if (uVar11 != 0xff) {
        bVar15 = uVar11 == 0;
        uVar14 = uVar11;
        if (!bVar15) {
          do {
            if (((uint *)(gen_frame + 0x0))[(int)(uVar14)] != 0) break;
            uVar14 = uVar14 - 1;
          } while (0 < (int)uVar14);
          bVar15 = uVar14 == 0;
        }
        if (bVar15) {
          return 0;
        }
        uVar5 = ((uint *)(gen_frame + 0x0))[(int)(uVar14)];
        uVar1 = (&REFG(undefined1, 0x15d8cf8))[(int)(uVar5 >> 8 & 0xff)];
        uVar2 = (&REFG(undefined1, 0x15d8cf8))[(int)(uVar5 & 0xff)];
        uVar3 = (&REFG(undefined1, 0x15d8cf8))[(int)(uVar5 >> 0x10 & 0xff)];
        uVar4 = (&REFG(undefined1, 0x15d8cf8))[(int)(uVar5 >> 0x18)];
        ((uint *)(gen_frame + 0x0))[(int)(uVar14)] = 0;
        F_00ceaf30(param_1,uVar11,CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4),iVar13);
        uVar11 = (uint)*((byte *)GEN_TOP(((int)this + iVar13)));
        if ((int)uVar14 < (int)uVar11) {
          iVar12 = 0x20 - uVar11;
          do {
            bVar10 = (byte)iVar12;
            uVar8 = uVar11 - 1;
            iVar12 = iVar12 + 1;
            ((uint *)(gen_frame + 0x0))[(int)(uVar11)] = (1 << GEN_SHC(bVar10, bVar10)) + uVar5;
            uVar11 = uVar8;
          } while ((int)uVar14 < (int)uVar8);
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00ceb260 */
GEN_LIB GEN_NOFRAME uint F_00ceb260(GEN_P(byte * in_edx, unsigned int gen_a0))
{
  GEN_ENTER(0xceb260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * in_edx = (byte *)(uintptr_t)gen_a0;)
  int iVar1;
  byte * pbVar2;
  uint uVar3;
  
  uVar3 = 6;
  pbVar2 = &REFG(undefined1, 0x134fbc0);
  if (*(int *)in_edx == *(int *)&REFG(undefined1, 0x134fbc0)) {
    uVar3 = 2;
    pbVar2 = &REFG(undefined1, 0x134fbc4);
    in_edx = in_edx + 4;
  }
  iVar1 = (uint)*in_edx - (uint)*pbVar2;
  if ((iVar1 == 0) && (iVar1 = (uint)in_edx[1] - (uint)pbVar2[1], iVar1 == 0)) {
    if (uVar3 < 3) {
      return 1;
    }
    iVar1 = (uint)in_edx[2] - (uint)pbVar2[2];
    if (iVar1 == 0) {
      iVar1 = (uint)in_edx[3] - (uint)pbVar2[3];
    }
  }
  return (uint)((iVar1 >> 0x1f | 1U) == 0);
}

/* ref: FUN_00ceb2e0 */
GEN_LIB GEN_FRAME unsigned int GEN_FASTCALL F_00ceb2e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xceb2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  int local_14;
  float * local_10;
  int local_c;
  
  iVar2 = param_3;
  iVar3 = param_3 >> 3;
  local_14 = 0;
  if (0 < param_3 >> 2) {
    local_c = 1;
    pfVar4 = ((float *)GEN_TOP((param_1 + 4)));
    local_10 = param_2;
    do {
      fVar5 = GEN_X87((((float10)local_14 * (float10)*(double *)&REFG(undefined, 0x1094788)) *
              (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)param_3);
      fVar6 = ((float10)GEN_TOD(fcos((float10)(float)fVar5)));
      *local_10 = (float)fVar6;
      fVar5 = ((float10)GEN_TOD(fsin((float10)(float)fVar5)));
      *((float *)GEN_TOP((((int)param_2 - param_1) + (int)pfVar4))) = ((float)GEN_TOF(-(float10)(float)fVar5));
      fVar1 = ((float)GEN_TOF(((((float10)local_c * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)param_3) *
                     (float10)REFG(double, 0x1088108))));
      fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      pfVar4[-1] = (float)((float10)(float)fVar5 * (float10)REFG(double, 0x1088108));
      fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      local_c = local_c + 2;
      local_10 = local_10 + 2;
      local_14 = local_14 + 1;
      *pfVar4 = (float)((float10)(float)fVar5 * (float10)REFG(double, 0x1088108));
      pfVar4 = pfVar4 + 2;
    } while (local_14 < param_3 >> 2);
  }
  if (0 < iVar3) {
    param_3 = 1;
    pfVar4 = param_4;
    do {
      fVar1 = ((float)GEN_TOF(((((float10)param_3 + (float10)param_3) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                     (float10)iVar2)));
      fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      *pfVar4 = (float)fVar5;
      fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      param_3 = param_3 + 2;
      iVar3 = iVar3 - 1;
      pfVar4[1] = ((float)GEN_TOF(-(float10)(float)fVar5));
      pfVar4 = pfVar4 + 2;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00ceb430 */
GEN_LIB GEN_FRAME unsigned int F_00ceb430(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xceb430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  float10 fVar2;
  int local_8;
  
  iVar1 = in_eax >> 1;
  local_8 = 0;
  if (0 < iVar1) {
    do {
      fVar2 = ((float10)GEN_TOD(fsin(
                            (float10)((float)GEN_TOF(((((((float10)local_8 -
                                                (float10)*(double *)&REFG(undefined, 0x108bec8)) +
                                               (float10)REFG(double, 0x1088108)) / (float10)iVar1) *
                                             (float10)REFG(double, 0x1088108)) *
                                            (float10)*(double *)&REFG(undefined, 0x1080228)))))));
      fVar2 = ((float10)GEN_TOD(fsin(
                            (float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar2 *
                                                             (float10)(float)fVar2) *
                                            (float10)*(double *)&REFG(undefined, 0x1094620)))))));
      local_8 = local_8 + 1;
      *((float *)GEN_TOP((param_2 - 4 + local_8 * 4))) = (float)fVar2;
    } while (local_8 < iVar1);
  }
  return 0;
}

/* ref: FUN_00ceb4d0 */
GEN_LIB GEN_FRAME unsigned int F_00ceb4d0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xceb4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0xffffffff;
  iVar1 = 0;
  local_8 = 0x10000;
  if (0 < param_2) {
    do {
      uVar2 = *((ushort *)GEN_TOP((in_esi + iVar1 * 2)));
      uVar3 = (uint)uVar2;
      if (((int)uVar4 < (int)uVar3) && (uVar2 < *((ushort *)GEN_TOP((in_esi + param_2 * 2))))) {
        *param_3 = iVar1;
        uVar2 = *((ushort *)GEN_TOP((in_esi + iVar1 * 2)));
        uVar3 = (uint)uVar2;
        uVar4 = uVar3;
      }
      if ((uVar3 < local_8) && (*((ushort *)GEN_TOP((in_esi + param_2 * 2))) < uVar2)) {
        *param_4 = iVar1;
        local_8 = (uint)*((ushort *)GEN_TOP((in_esi + iVar1 * 2)));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00ceb540 */
GEN_LIB GEN_FRAME uint F_00ceb540(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xceb540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = (uint)(0x200000 / (ulonglong)param_1);
  if ((param_1 & param_1 - 1) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00ceb570 */
GEN_LIB GEN_FRAME uint F_00ceb570(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xceb570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 * puVar5;
  
  puVar5 = *((undefined1 * PTR32 *)GEN_TOP((in_eax + 0x10)));
  uVar1 = *puVar5;
  *((undefined1 * PTR32 *)GEN_TOP((in_eax + 0x10))) = puVar5 + 1;
  uVar2 = puVar5[1];
  *((undefined1 * PTR32 *)GEN_TOP((in_eax + 0x10))) = puVar5 + 2;
  uVar3 = puVar5[2];
  *((undefined1 * PTR32 *)GEN_TOP((in_eax + 0x10))) = puVar5 + 3;
  uVar4 = puVar5[3];
  *((undefined1 * PTR32 *)GEN_TOP((in_eax + 0x10))) = puVar5 + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),uVar2),uVar1);
}

/* ref: FUN_00ceb5c0 */
GEN_LIB GEN_NOFRAME uint F_00ceb5c0(GEN_P(undefined4 in_edx, unsigned int gen_a0), GEN_P(int in_esi, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2))
{
  GEN_ENTER(0xceb5c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a0;)
  GEN_PIN(int in_esi = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  if (*((uint *)GEN_TOP((in_esi + 0x18))) < (uint)(*((int *)GEN_TOP((in_esi + 0x10))) + in_edi)) {
    *((undefined4 *)GEN_TOP((in_esi + 0x34))) = 1;
    return 0;
  }
  F_00c46aa0(in_edx,*((int *)GEN_TOP((in_esi + 0x10))),in_edi);
  *((int *)GEN_TOP((in_esi + 0x10))) = *((int *)GEN_TOP((in_esi + 0x10))) + in_edi;
  return 1;
}

/* ref: FUN_00ceb650 */
GEN_LIB GEN_FRAME uint F_00ceb650(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xceb650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  char * pcVar10;
  uint uVar11;
  int iVar12;
  
  pcVar10 = *((char * PTR32 *)GEN_TOP((in_esi + 0x10)));
  cVar1 = *pcVar10;
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 1;
  if (cVar1 != '\0') {
    *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 0x1f;
    if (*((int *)GEN_TOP((in_esi + 0x34))) == 0) {
      *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 0x1f;
    }
    return 0;
  }
  *((char *)GEN_TOP((in_esi + 0x533))) = pcVar10[1];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 2;
  cVar1 = pcVar10[2];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 3;
  cVar2 = pcVar10[3];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 4;
  cVar3 = pcVar10[4];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 5;
  cVar4 = pcVar10[5];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 6;
  iVar12 = CONCAT31(CONCAT21(CONCAT11(cVar4,cVar3),cVar2),cVar1);
  cVar1 = pcVar10[6];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 7;
  cVar2 = pcVar10[7];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 8;
  cVar3 = pcVar10[8];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 9;
  cVar4 = pcVar10[9];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 0xe;
  cVar5 = pcVar10[0xe];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 0xf;
  cVar6 = pcVar10[0xf];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 0x10;
  cVar7 = pcVar10[0x10];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 0x11;
  cVar8 = pcVar10[0x11];
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10 + 0x16;
  *((uint *)GEN_TOP((in_esi + 0x42c))) = CONCAT31(CONCAT21(CONCAT11(cVar8,cVar7),cVar6),cVar5);
  uVar11 = (uint)(byte)pcVar10[0x16];
  pcVar10 = pcVar10 + 0x17;
  *((char * PTR32 *)GEN_TOP((in_esi + 0x10))) = pcVar10;
  *((uint *)GEN_TOP((in_esi + 0x430))) = uVar11;
  if (*((int *)GEN_TOP((in_esi + 0x34))) == 0) {
    if (pcVar10 + uVar11 <= *((char * PTR32 *)GEN_TOP((in_esi + 0x18)))) {
      F_00c46aa0(in_esi + 0x434,pcVar10,uVar11);
      *((int *)GEN_TOP((in_esi + 0x10))) = *((int *)GEN_TOP((in_esi + 0x10))) + uVar11;
      *((undefined4 *)GEN_TOP((in_esi + 0x550))) = 0xfffffffe;
      if ((iVar12 != -1) || ((int)CONCAT31(CONCAT21(CONCAT11(cVar4,cVar3),cVar2),cVar1) != -1)) {
        iVar9 = *((int *)GEN_TOP((in_esi + 0x430)));
        do {
          iVar9 = iVar9 - 1;
          if (iVar9 < 0) goto LAB_00ceb7c4;
        } while (*((char *)GEN_TOP((in_esi + 0x434 + iVar9))) == -1);
        if (-1 < iVar9) {
          *((int *)GEN_TOP((in_esi + 0x550))) = iVar9;
          *((int *)GEN_TOP((in_esi + 0x554))) = iVar12;
        }
      }
LAB_00ceb7c4: ;
      *((undefined4 *)GEN_TOP((in_esi + 0x538))) = 0;
      return 1;
    }
    *((undefined4 *)GEN_TOP((in_esi + 0x34))) = 1;
  }
  *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 10;
  return 0;
}

/* ref: FUN_00ceb7e0 */
GEN_LIB GEN_NOFRAME uint F_00ceb7e0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xceb7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP((in_eax + 0x10)));
  cVar1 = *pcVar2;
  *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 1;
  if (cVar1 == 'O') {
    cVar1 = pcVar2[1];
    *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 2;
    if (cVar1 == 'g') {
      cVar1 = pcVar2[2];
      *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 3;
      if ((cVar1 == 'g') &&
         (cVar1 = pcVar2[3], *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 4, cVar1 == 'S')) {
        uVar3 = F_00ceb650(in_eax);
        return uVar3;
      }
    }
  }
  *((undefined4 *)GEN_TOP((in_eax + 0x38))) = 0x1e;
  if (*((int *)GEN_TOP((in_eax + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((in_eax + 0x38))) = 0x1e;
  }
  return 0;
}

/* ref: FUN_00ceb830 */
GEN_LIB GEN_NOFRAME uint F_00ceb830(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xceb830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = *((int *)GEN_TOP((in_eax + 0x538)));
  while( true ) {
    if (iVar2 != -1) {
      *((undefined4 *)GEN_TOP((in_eax + 0x53c))) = 0;
      *((undefined4 *)GEN_TOP((in_eax + 0x548))) = 0;
      *((undefined4 *)GEN_TOP((in_eax + 0x544))) = 0;
      *((undefined1 *)GEN_TOP((in_eax + 0x534))) = 0;
      return 1;
    }
    pcVar3 = *((char * PTR32 *)GEN_TOP((in_eax + 0x10)));
    cVar1 = *pcVar3;
    *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar3 + 1;
    if (cVar1 != 'O') break;
    cVar1 = pcVar3[1];
    *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar3 + 2;
    if (cVar1 != 'g') break;
    cVar1 = pcVar3[2];
    *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar3 + 3;
    if ((cVar1 != 'g') || (cVar1 = pcVar3[3], *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar3 + 4, cVar1 != 'S'))
    break;
    uVar4 = F_00ceb650(in_eax);
    if (uVar4 == 0) {
      return 0;
    }
    if ((*((byte *)GEN_TOP((in_eax + 0x533))) & 1) != 0) {
      uVar5 = 0x20;
      goto LAB_00ceb8af;
    }
    iVar2 = *((int *)GEN_TOP((in_eax + 0x538)));
  }
  uVar5 = 0x1e;
LAB_00ceb8af: ;
  *((undefined4 *)GEN_TOP((in_eax + 0x38))) = uVar5;
  if (*((int *)GEN_TOP((in_eax + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((in_eax + 0x38))) = uVar5;
  }
  return 0;
}

/* ref: FUN_00ceb8d0 */
GEN_LIB GEN_NOFRAME uint F_00ceb8d0(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xceb8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((in_eax + 0x538))) != -1) {
LAB_00ceb954: ;
    uVar3 = F_00ceb830(in_eax);
    return uVar3;
  }
  pcVar2 = *((char * PTR32 *)GEN_TOP((in_eax + 0x10)));
  cVar1 = *pcVar2;
  *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 1;
  if (*((int *)GEN_TOP((in_eax + 0x34))) == 0) {
    if (cVar1 == 'O') {
      cVar1 = pcVar2[1];
      *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 2;
      if (cVar1 == 'g') {
        cVar1 = pcVar2[2];
        *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 3;
        if ((cVar1 == 'g') &&
           (cVar1 = pcVar2[3], *((char * PTR32 *)GEN_TOP((in_eax + 0x10))) = pcVar2 + 4, cVar1 == 'S')) {
          uVar3 = F_00ceb650(in_eax);
          if (uVar3 == 0) {
            return 0;
          }
          if ((*((byte *)GEN_TOP((in_eax + 0x533))) & 1) != 0) {
            *((undefined4 *)GEN_TOP((in_eax + 0x53c))) = 0;
            *((undefined1 *)GEN_TOP((in_eax + 0x534))) = 0;
            *((undefined4 *)GEN_TOP((in_eax + 0x38))) = 0x20;
            if (*((int *)GEN_TOP((in_eax + 0x34))) != 0) {
              return 0;
            }
            *((undefined4 *)GEN_TOP((in_eax + 0x38))) = 0x20;
            return 0;
          }
          goto LAB_00ceb954;
        }
      }
    }
    *((undefined4 *)GEN_TOP((in_eax + 0x38))) = 0x1e;
  }
  return 0;
}

/* ref: FUN_00ceb960 */
GEN_LIB GEN_NOFRAME uint F_00ceb960(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xceb960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((in_esi + 0x53c))) != 0) {
    return 0;
  }
  if (*((int *)GEN_TOP((in_esi + 0x538))) == -1) {
    *((int *)GEN_TOP((in_esi + 0x540))) = *((int *)GEN_TOP((in_esi + 0x430))) - 1;
    uVar3 = F_00ceb7e0(in_esi);
    if (uVar3 == 0) {
      *((undefined4 *)GEN_TOP((in_esi + 0x53c))) = 1;
      return 0;
    }
    if ((*((byte *)GEN_TOP((in_esi + 0x533))) & 1) == 0) {
      *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 0x20;
      if (*((int *)GEN_TOP((in_esi + 0x34))) == 0) {
        *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 0x20;
      }
      return 0;
    }
  }
  iVar2 = *((int *)GEN_TOP((in_esi + 0x538)));
  bVar1 = *((byte *)GEN_TOP((iVar2 + 0x434 + in_esi)));
  *((int *)GEN_TOP((in_esi + 0x538))) = iVar2 + 1;
  if (bVar1 < 0xff) {
    *((undefined4 *)GEN_TOP((in_esi + 0x53c))) = 1;
    *((int *)GEN_TOP((in_esi + 0x540))) = iVar2;
  }
  if (*((int *)GEN_TOP((in_esi + 0x430))) <= iVar2 + 1) {
    *((undefined4 *)GEN_TOP((in_esi + 0x538))) = 0xffffffff;
  }
  *((byte *)GEN_TOP((in_esi + 0x534))) = bVar1;
  return (uint)bVar1;
}

/* ref: FUN_00ceba40 */
GEN_LIB GEN_NOFRAME uint F_00ceba40(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xceba40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (*((char *)GEN_TOP((in_eax + 0x534))) == '\0') {
    if (*((int *)GEN_TOP((in_eax + 0x53c))) == 0) {
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 != 0) goto LAB_00ceba63;
    }
    uVar2 = 0xffffffff;
  }
  else {
LAB_00ceba63: ;
    *((char *)GEN_TOP((in_eax + 0x534))) = *((char *)GEN_TOP((in_eax + 0x534))) - 1;
    bVar1 = **((byte * PTR32 *)GEN_TOP((in_eax + 0x10)));
    *((byte * PTR32 *)GEN_TOP((in_eax + 0x10))) = *((byte * PTR32 *)GEN_TOP((in_eax + 0x10))) + 1;
    uVar2 = (uint)bVar1;
  }
  *((undefined4 *)GEN_TOP((in_eax + 0x548))) = 0;
  *((undefined4 *)GEN_TOP((in_eax + 0x544))) = 0;
  return uVar2;
}

/* ref: FUN_00ceba90 */
GEN_LIB GEN_NOFRAME uint F_00ceba90(GEN_P(uint in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xceba90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = in_eax;
  do {
    if (*((char *)GEN_TOP((in_eax + 0x534))) == '\0') {
      if (*((int *)GEN_TOP((in_eax + 0x53c))) != 0) {
        return uVar2;
      }
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 == 0) {
        return 0;
      }
    }
    *((char *)GEN_TOP((in_eax + 0x534))) = *((char *)GEN_TOP((in_eax + 0x534))) - 1;
    bVar1 = **((byte * PTR32 *)GEN_TOP((in_eax + 0x10)));
    *((byte * PTR32 *)GEN_TOP((in_eax + 0x10))) = *((byte * PTR32 *)GEN_TOP((in_eax + 0x10))) + 1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00cebad0 */
GEN_LIB GEN_FRAME uint F_00cebad0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcebad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0x548)));
  if (iVar2 < 0) {
    return 0;
  }
  if (iVar2 < param_2) {
    if (0x18 < param_2) {
      uVar3 = F_00cebad0(param_1,0x18);
      uVar4 = F_00cebad0(param_1,param_2 - 0x18);
      return uVar4 << 0x18 | uVar3;
    }
    if (iVar2 == 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x544))) = 0;
    }
    do {
      if ((*((char *)GEN_TOP((param_1 + 0x534))) == '\0') &&
         ((*((int *)GEN_TOP((param_1 + 0x53c))) != 0 || (uVar3 = F_00ceb960(param_1), uVar3 == 0)))) {
LAB_00cebb9e: ;
        *((undefined4 *)GEN_TOP((param_1 + 0x548))) = 0xffffffff;
        return 0;
      }
      *((char *)GEN_TOP((param_1 + 0x534))) = *((char *)GEN_TOP((param_1 + 0x534))) - 1;
      bVar1 = **((byte * PTR32 *)GEN_TOP((param_1 + 0x10)));
      *((byte * PTR32 *)GEN_TOP((param_1 + 0x10))) = *((byte * PTR32 *)GEN_TOP((param_1 + 0x10))) + 1;
      uVar3 = (uint)bVar1;
      if (uVar3 == 0xffffffff) goto LAB_00cebb9e;
      iVar2 = *((int *)GEN_TOP((param_1 + 0x548)));
      iVar5 = iVar2 + 8;
      *((int *)GEN_TOP((param_1 + 0x548))) = iVar5;
      *((uint *)GEN_TOP((param_1 + 0x544))) = *((uint *)GEN_TOP((param_1 + 0x544))) | uVar3 << GEN_SHC((byte)iVar2, (unsigned int)(uintptr_t)iVar2);
    } while (iVar5 < param_2);
  }
  if (*((int *)GEN_TOP((param_1 + 0x548))) < 0) {
    return 0;
  }
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x544)));
  *((int *)GEN_TOP((param_1 + 0x548))) = *((int *)GEN_TOP((param_1 + 0x548))) - param_2;
  *((uint *)GEN_TOP((param_1 + 0x544))) = uVar3 >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2);
  return (1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) - 1U & uVar3;
}

/* ref: FUN_00cebbb0 */
GEN_LIB GEN_NOFRAME uint F_00cebbb0(GEN_P(uint in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xcebbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = in_eax;
  do {
    if (*((char *)GEN_TOP((in_eax + 0x534))) == '\0') {
      if (*((int *)GEN_TOP((in_eax + 0x53c))) != 0) {
        return uVar2;
      }
      uVar2 = F_00ceb960(in_eax);
      if (uVar2 == 0) {
        return 0;
      }
    }
    *((char *)GEN_TOP((in_eax + 0x534))) = *((char *)GEN_TOP((in_eax + 0x534))) - 1;
    bVar1 = **((byte * PTR32 *)GEN_TOP((in_eax + 0x10)));
    *((byte * PTR32 *)GEN_TOP((in_eax + 0x10))) = *((byte * PTR32 *)GEN_TOP((in_eax + 0x10))) + 1;
    uVar2 = (uint)bVar1;
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    *((uint *)GEN_TOP((in_eax + 0x544))) =
         *((uint *)GEN_TOP((in_eax + 0x544))) | uVar2 << GEN_SHC((byte)*((int *)GEN_TOP((in_eax + 0x548))), (byte)*((int *)GEN_TOP((in_eax + 0x548))));
    uVar2 = *((int *)GEN_TOP((in_eax + 0x548))) + 8;
    *((uint *)GEN_TOP((in_eax + 0x548))) = uVar2;
  } while ((int)uVar2 < 0x19);
  return uVar2;
}

/* ref: FUN_00cebc10 */
GEN_LIB GEN_FRAME uint F_00cebc10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcebc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (param_1 != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cebc20 */
GEN_LIB GEN_FRAME uint F_00cebc20(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcebc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  if (*((char *)GEN_TOP((param_2 + 0x25))) != '\0') {
    if (*((int *)GEN_TOP((in_edi + 0x548))) < 8) {
      F_00cebbb0(in_edi);
    }
    uVar3 = *((uint *)GEN_TOP((in_edi + 0x544)));
    uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar3 & 0xff) * 4)));
    if ((int)uVar4 < 0) {
      if (*((int *)GEN_TOP((in_edi + 0x548))) < 0x19) {
        F_00cebbb0(in_edi);
      }
      uVar3 = *((uint *)GEN_TOP((in_edi + 0x544)));
      uVar2 = uVar3 >> 8;
      do {
        uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar2 & 3) + 0x80000000 + uVar4) * 4)));
        uVar2 = uVar2 >> 2;
      } while ((int)uVar4 < 0);
    }
    piVar1 = ((int *)GEN_TOP((in_edi + 0x548)));
    *piVar1 = *piVar1 - ((int)uVar4 >> 0x1a);
    *((uint *)GEN_TOP((in_edi + 0x544))) = uVar3 >> GEN_SHC((byte)((int)uVar4 >> 0x1a), (byte)((int)uVar4 >> 0x1a));
    if (*piVar1 < 0) {
      *((undefined4 *)GEN_TOP((in_edi + 0x548))) = 0;
      uVar4 = 0xffffffff;
    }
    else {
      uVar4 = uVar4 & 0x3ffffff;
      if (uVar4 != 0xffffffff) {
        return uVar4;
      }
    }
    if ((*((char *)GEN_TOP((in_edi + 0x534))) == '\0') && (*((int *)GEN_TOP((in_edi + 0x53c))) != 0)) {
      return 0xffffffff;
    }
  }
  *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0x15;
  if (*((int *)GEN_TOP((in_edi + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0x15;
  }
  return uVar4;
}

/* ref: FUN_00cebd00 */
GEN_LIB GEN_FRAME uint F_00cebd00(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcebd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int * piVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float local_8;
  
  if (*((char *)GEN_TOP((in_esi + 0x25))) == '\0') {
    *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
    if (*((int *)GEN_TOP((param_2 + 0x34))) != 0) {
      return 0;
    }
    *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
    return 0;
  }
  if (*((int *)GEN_TOP((param_2 + 0x548))) < 8) {
    F_00cebbb0(param_2);
  }
  uVar7 = *((uint *)GEN_TOP((param_2 + 0x544)));
  uVar9 = *((uint *)GEN_TOP((in_esi + 0x2c + (uVar7 & 0xff) * 4)));
  if ((int)uVar9 < 0) {
    if (*((int *)GEN_TOP((param_2 + 0x548))) < 0x19) {
      F_00cebbb0(param_2);
    }
    uVar7 = *((uint *)GEN_TOP((param_2 + 0x544)));
    uVar3 = uVar7 >> 8;
    do {
      uVar9 = *((uint *)GEN_TOP((in_esi + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar9) * 4)));
      uVar3 = uVar3 >> 2;
    } while ((int)uVar9 < 0);
  }
  piVar1 = ((int *)GEN_TOP((param_2 + 0x548)));
  *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
  *((uint *)GEN_TOP((param_2 + 0x544))) = uVar7 >> GEN_SHC((byte)((int)uVar9 >> 0x1a), (byte)((int)uVar9 >> 0x1a));
  if (*piVar1 < 0) {
    *((undefined4 *)GEN_TOP((param_2 + 0x548))) = 0;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = uVar9 & 0x3ffffff;
    if (uVar9 != 0xffffffff) goto LAB_00cebdd9;
  }
  if ((*((char *)GEN_TOP((param_2 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_2 + 0x53c))) != 0)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
  if (*((int *)GEN_TOP((param_2 + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
  }
LAB_00cebdd9: ;
  if ((int)uVar9 < 0) {
    return 0;
  }
  iVar4 = *((int *)GEN_TOP((in_esi + 8)));
  if (iVar4 < param_4) {
    param_4 = iVar4;
  }
  iVar4 = iVar4 * uVar9;
  iVar6 = 0;
  if (*((char *)GEN_TOP((in_esi + 0x26))) == '\0') {
    fVar11 = (float10)0;
    if (3 < param_4) {
      iVar8 = iVar4 * 4;
      iVar10 = (param_4 - 4U >> 2) + 1;
      iVar6 = iVar10 * 4;
      pfVar5 = ((float *)GEN_TOP((param_3 + 8)));
      do {
        pfVar2 = ((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) + iVar8)));
        iVar8 = iVar8 + 0x10;
        iVar10 = iVar10 - 1;
        pfVar5[-2] = ((float)GEN_TOF((((float10)*pfVar2 + fVar11) + (float10)pfVar5[-2])));
        pfVar5[-1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) - 0xc + iVar8))) + fVar11) +
                            (float10)pfVar5[-1])));
        *pfVar5 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) - 8 + iVar8))) + fVar11) +
                         (float10)*pfVar5)));
        pfVar5[1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) - 4 + iVar8))) + fVar11) +
                           (float10)pfVar5[1])));
        pfVar5 = pfVar5 + 4;
      } while (iVar10 != 0);
    }
    if (iVar6 < param_4) {
      iVar4 = (iVar4 + iVar6) * 4;
      do {
        pfVar5 = ((float *)GEN_TOP((iVar4 + *((int *)GEN_TOP((in_esi + 4))))));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
        *((float *)GEN_TOP((param_3 - 4 + iVar6 * 4))) =
             ((float)GEN_TOF((((float10)*pfVar5 + fVar11) + (float10)*((float *)GEN_TOP((param_3 - 4 + iVar6 * 4))))));
      } while (iVar6 < param_4);
    }
  }
  else {
    local_8 = (float)(float10)0;
    if (3 < param_4) {
      iVar8 = iVar4 * 4;
      iVar10 = (param_4 - 4U >> 2) + 1;
      iVar6 = iVar10 * 4;
      pfVar5 = ((float *)GEN_TOP((param_3 + 8)));
      do {
        pfVar2 = ((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) + iVar8)));
        iVar8 = iVar8 + 0x10;
        iVar10 = iVar10 - 1;
        fVar11 = GEN_X87((float10)(float)((float10)*pfVar2 + (float10)local_8));
        pfVar5[-2] = (float)(fVar11 + (float10)pfVar5[-2]);
        fVar11 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((in_esi + 0x1c)))))) +
                                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) - 0xc + iVar8)))))));
        pfVar5[-1] = (float)(fVar11 + (float10)pfVar5[-1]);
        fVar11 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((in_esi + 0x1c)))))) +
                                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) - 8 + iVar8)))))));
        *pfVar5 = (float)(fVar11 + (float10)*pfVar5);
        fVar11 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((in_esi + 0x1c)))))) +
                                 (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) - 4 + iVar8)))))));
        pfVar5[1] = (float)(fVar11 + (float10)pfVar5[1]);
        local_8 = ((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((in_esi + 0x1c))))));
        pfVar5 = pfVar5 + 4;
      } while (iVar10 != 0);
    }
    if (iVar6 < param_4) {
      iVar4 = (iVar4 + iVar6) * 4;
      do {
        pfVar5 = ((float *)GEN_TOP((*((int *)GEN_TOP((in_esi + 4))) + iVar4)));
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
        fVar11 = GEN_X87((float10)(float)((float10)*pfVar5 + (float10)local_8));
        *((float *)GEN_TOP((param_3 - 4 + iVar6 * 4))) =
             ((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((param_3 - 4 + iVar6 * 4))))));
        local_8 = ((float)GEN_TOF((fVar11 + (float10)*((float *)GEN_TOP((in_esi + 0x1c))))));
      } while (iVar6 < param_4);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_00cebfc0 */
GEN_LIB GEN_FRAME uint F_00cebfc0(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcebfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int * piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  float * local_1c;
  float * local_18;
  float * local_14;
  float * local_10;
  float local_8;
  
  uVar10 = 0xffffffff;
  if (*((char *)GEN_TOP((in_edi + 0x25))) != '\0') {
    if (*((int *)GEN_TOP((param_2 + 0x548))) < 8) {
      F_00cebbb0(param_2);
    }
    uVar6 = *((uint *)GEN_TOP((param_2 + 0x544)));
    uVar10 = *((uint *)GEN_TOP((in_edi + 0x2c + (uVar6 & 0xff) * 4)));
    if ((int)uVar10 < 0) {
      if (*((int *)GEN_TOP((param_2 + 0x548))) < 0x19) {
        F_00cebbb0(param_2);
      }
      uVar6 = *((uint *)GEN_TOP((param_2 + 0x544)));
      uVar3 = uVar6 >> 8;
      do {
        uVar10 = *((uint *)GEN_TOP((in_edi + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar10) * 4)));
        uVar3 = uVar3 >> 2;
      } while ((int)uVar10 < 0);
    }
    piVar1 = ((int *)GEN_TOP((param_2 + 0x548)));
    *piVar1 = *piVar1 - ((int)uVar10 >> 0x1a);
    *((uint *)GEN_TOP((param_2 + 0x544))) = uVar6 >> GEN_SHC((byte)((int)uVar10 >> 0x1a), (byte)((int)uVar10 >> 0x1a));
    if (*piVar1 < 0) {
      *((undefined4 *)GEN_TOP((param_2 + 0x548))) = 0;
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = uVar10 & 0x3ffffff;
      if (uVar10 != 0xffffffff) goto LAB_00cec08e;
    }
    if ((*((char *)GEN_TOP((param_2 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_2 + 0x53c))) != 0)) {
      uVar10 = 0xffffffff;
      goto LAB_00cec08e;
    }
  }
  *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
  if (*((int *)GEN_TOP((param_2 + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
  }
LAB_00cec08e: ;
  local_8 = (float)(float10)0;
  if (-1 < (int)uVar10) {
    iVar4 = *((int *)GEN_TOP((in_edi + 8)));
    if (iVar4 < param_4) {
      param_4 = iVar4;
    }
    iVar9 = 0;
    if (3 < param_4) {
      local_1c = param_3 + param_5 * 3;
      local_10 = param_3;
      local_18 = param_3 + param_5 * 2;
      local_14 = param_3 + param_5;
      iVar7 = iVar4 * uVar10 * 4;
      iVar5 = (param_4 - 4U >> 2) + 1;
      iVar9 = iVar5 * 4;
      do {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + *((int *)GEN_TOP((in_edi + 4)))))) + (float10)local_8)));
        *local_10 = (float)((float10)fVar2 + (float10)*local_10);
        if (*((char *)GEN_TOP((in_edi + 0x26))) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 4 + *((int *)GEN_TOP((in_edi + 4)))))) + (float10)local_8)));
        *local_14 = (float)((float10)fVar2 + (float10)*local_14);
        if (*((char *)GEN_TOP((in_edi + 0x26))) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 8 + *((int *)GEN_TOP((in_edi + 4)))))) + (float10)local_8)));
        *local_18 = (float)((float10)fVar2 + (float10)*local_18);
        if (*((char *)GEN_TOP((in_edi + 0x26))) != '\0') {
          local_8 = fVar2;
        }
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + 0xc + *((int *)GEN_TOP((in_edi + 4)))))) + (float10)local_8)));
        *local_1c = (float)((float10)fVar2 + (float10)*local_1c);
        if (*((char *)GEN_TOP((in_edi + 0x26))) != '\0') {
          local_8 = fVar2;
        }
        local_10 = local_10 + param_5 * 4;
        local_14 = local_14 + param_5 * 4;
        local_18 = local_18 + param_5 * 4;
        local_1c = local_1c + param_5 * 4;
        iVar7 = iVar7 + 0x10;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    if (iVar9 < param_4) {
      iVar4 = (iVar4 * uVar10 + iVar9) * 4;
      pfVar8 = param_3 + iVar9 * param_5;
      iVar9 = param_4 - iVar9;
      do {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_edi + 4))) + iVar4))) + (float10)local_8)));
        *pfVar8 = (float)((float10)fVar2 + (float10)*pfVar8);
        if (*((char *)GEN_TOP((in_edi + 0x26))) != '\0') {
          local_8 = fVar2;
        }
        pfVar8 = pfVar8 + param_5;
        iVar4 = iVar4 + 4;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cec220 */
GEN_LIB GEN_FRAME uint F_00cec220(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(int * param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(int param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xcec220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(int param_8 = (int)gen_a7;)
  int * piVar1;
  float * pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float local_c;
  int local_8;
  
  local_8 = *param_6;
  iVar8 = *param_5;
  iVar3 = *((int *)GEN_TOP((param_2 + 8)));
  if (*((char *)GEN_TOP((param_2 + 0x25))) == '\0') {
    *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0x15;
    if (*((int *)GEN_TOP((param_1 + 0x34))) == 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0x15;
    }
    return 0;
  }
  iVar5 = param_8;
  if (*((char *)GEN_TOP((param_2 + 0x26))) == '\0') {
    for (; 0 < iVar5; iVar5 = iVar5 - iVar3) {
      if (*((int *)GEN_TOP((param_1 + 0x548))) < 8) {
        F_00cebbb0(param_1);
      }
      uVar6 = *((uint *)GEN_TOP((param_1 + 0x544)));
      uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar9 < 0) {
        if (*((int *)GEN_TOP((param_1 + 0x548))) < 0x19) {
          F_00cebbb0(param_1);
        }
        uVar6 = *((uint *)GEN_TOP((param_1 + 0x544)));
        uVar4 = uVar6 >> 8;
        do {
          uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar4 & 3) + 0x80000000 + uVar9) * 4)));
          uVar4 = uVar4 >> 2;
        } while ((int)uVar9 < 0);
      }
      piVar1 = ((int *)GEN_TOP((param_1 + 0x548)));
      *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
      *((uint *)GEN_TOP((param_1 + 0x544))) = uVar6 >> GEN_SHC((byte)((int)uVar9 >> 0x1a), (byte)((int)uVar9 >> 0x1a));
      if (*piVar1 < 0) {
        *((undefined4 *)GEN_TOP((param_1 + 0x548))) = 0;
LAB_00cec4c2: ;
        if ((*((char *)GEN_TOP((param_1 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_1 + 0x53c))) != 0)) {
          return 0;
        }
        *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0x15;
        if (*((int *)GEN_TOP((param_1 + 0x34))) != 0) {
          return 0;
        }
        *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0x15;
        return 0;
      }
      if ((uVar9 & 0x3ffffff) == 0xffffffff) goto LAB_00cec4c2;
      local_c = 0.0;
      if (0 < iVar3) {
        iVar10 = (uVar9 & 0x3ffffff) * iVar3 * 4;
        do {
          pfVar2 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_3 + iVar8 * 4))) + local_8 * 4)));
          iVar8 = iVar8 + 1;
          *pfVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar10 + *((int *)GEN_TOP((param_2 + 4)))))) +
                                            (float10)*(double *)&REFG(undefined, 0x108bec8)))) + (float10)*pfVar2)));
          if (iVar8 == param_4) {
            local_8 = local_8 + 1;
            iVar8 = 0;
            if (param_7 <= local_8) goto LAB_00cec4f0;
          }
          local_c = gen_bits2f((int)gen_fl2bits(local_c) + 1);
          iVar10 = iVar10 + 4;
        } while ((int)gen_fl2bits(local_c) < iVar3);
      }
    }
  }
  else {
    for (; 0 < iVar5; iVar5 = iVar5 - iVar3) {
      local_c = (float)(float10)0;
      if (*((int *)GEN_TOP((param_1 + 0x548))) < 8) {
        F_00cebbb0(param_1);
      }
      uVar6 = *((uint *)GEN_TOP((param_1 + 0x544)));
      uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar9 < 0) {
        if (*((int *)GEN_TOP((param_1 + 0x548))) < 0x19) {
          F_00cebbb0(param_1);
        }
        uVar6 = *((uint *)GEN_TOP((param_1 + 0x544)));
        uVar4 = uVar6 >> 8;
        do {
          uVar9 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar4 & 3) + 0x80000000 + uVar9) * 4)));
          uVar4 = uVar4 >> 2;
        } while ((int)uVar9 < 0);
      }
      piVar1 = ((int *)GEN_TOP((param_1 + 0x548)));
      *piVar1 = *piVar1 - ((int)uVar9 >> 0x1a);
      *((uint *)GEN_TOP((param_1 + 0x544))) = uVar6 >> GEN_SHC((byte)((int)uVar9 >> 0x1a), (byte)((int)uVar9 >> 0x1a));
      if (*piVar1 < 0) {
        *((undefined4 *)GEN_TOP((param_1 + 0x548))) = 0;
LAB_00cec389: ;
        if ((*((char *)GEN_TOP((param_1 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_1 + 0x53c))) != 0)) {
          return 0;
        }
        *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0x15;
        if (*((int *)GEN_TOP((param_1 + 0x34))) == 0) {
          *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0x15;
        }
        return 0;
      }
      if ((uVar9 & 0x3ffffff) == 0xffffffff) goto LAB_00cec389;
      iVar10 = 0;
      if (0 < iVar3) {
        iVar7 = (uVar9 & 0x3ffffff) * iVar3 * 4;
        do {
          pfVar2 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_3 + iVar8 * 4))) + local_8 * 4)));
          local_c = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar7 + *((int *)GEN_TOP((param_2 + 4)))))) + (float10)local_c)));
          iVar8 = iVar8 + 1;
          *pfVar2 = (float)((float10)local_c + (float10)*pfVar2);
          if (iVar8 == param_4) {
            local_8 = local_8 + 1;
            iVar8 = 0;
            if (param_7 <= local_8) goto LAB_00cec4f0;
          }
          iVar10 = iVar10 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar10 < iVar3);
      }
    }
  }
LAB_00cec4f0: ;
  *param_5 = iVar8;
  *param_6 = local_8;
  return 1;
}

/* ref: FUN_00cec510 */
GEN_LIB GEN_FRAME uint F_00cec510(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcec510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = param_3;
  iVar2 = *((int *)GEN_TOP((param_3 + 8)));
  if (*((char *)GEN_TOP((param_3 + 0x25))) == '\0') {
    *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
    if (*((int *)GEN_TOP((param_2 + 0x34))) == 0) {
      *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
    }
    return 0;
  }
  if (*((char *)GEN_TOP((param_3 + 0x26))) == '\0') {
    if (param_6 < 1) {
      return 1;
    }
    while( true ) {
      if (*((int *)GEN_TOP((param_2 + 0x548))) < 8) {
        F_00cebbb0(param_2);
      }
      uVar7 = *((uint *)GEN_TOP((param_2 + 0x544)));
      uVar6 = *((uint *)GEN_TOP((param_3 + 0x2c + (uVar7 & 0xff) * 4)));
      if ((int)uVar6 < 0) {
        if (*((int *)GEN_TOP((param_2 + 0x548))) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar7 = *((uint *)GEN_TOP((param_2 + 0x544)));
        uVar5 = uVar7 >> 8;
        do {
          uVar6 = *((uint *)GEN_TOP((param_3 + 0x2c + ((uVar5 & 3) + 0x80000000 + uVar6) * 4)));
          uVar5 = uVar5 >> 2;
        } while ((int)uVar6 < 0);
      }
      piVar1 = ((int *)GEN_TOP((param_2 + 0x548)));
      *piVar1 = *piVar1 - ((int)uVar6 >> 0x1a);
      *((uint *)GEN_TOP((param_2 + 0x544))) = uVar7 >> GEN_SHC((byte)((int)uVar6 >> 0x1a), (byte)((int)uVar6 >> 0x1a));
      if (*piVar1 < 0) break;
      if ((uVar6 & 0x3ffffff) == 0xffffffff) goto LAB_00cec781;
      if (0 < iVar2) {
        iVar8 = (uVar6 & 0x3ffffff) * iVar2 * 4;
        iVar4 = 0;
        do {
          in_eax = in_eax + 1;
          *((float *)GEN_TOP((param_4 - 4 + in_eax * 4))) =
               ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar8 + *((int *)GEN_TOP((param_3 + 4)))))) +
                                       (float10)*(double *)&REFG(undefined, 0x108bec8)))) +
                      (float10)*((float *)GEN_TOP((param_4 - 4 + in_eax * 4))))));
          if (param_5 <= in_eax) {
            return 1;
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 4;
        } while (iVar4 < iVar2);
      }
      param_6 = param_6 - iVar2;
      if (param_6 < 1) {
        return 1;
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 0x548))) = 0;
LAB_00cec781: ;
    if ((*((char *)GEN_TOP((param_2 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_2 + 0x53c))) != 0)) {
      return 0;
    }
  }
  else {
    if (param_6 < 1) {
      return 1;
    }
    while( true ) {
      param_3 = (uint)gen_fl2bits((float)(float10)0);
      if (*((int *)GEN_TOP((param_2 + 0x548))) < 8) {
        F_00cebbb0(param_2);
      }
      uVar6 = *((uint *)GEN_TOP((param_2 + 0x544)));
      uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c + (uVar6 & 0xff) * 4)));
      if ((int)uVar5 < 0) {
        if (*((int *)GEN_TOP((param_2 + 0x548))) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar6 = *((uint *)GEN_TOP((param_2 + 0x544)));
        uVar3 = uVar6 >> 8;
        do {
          uVar5 = *((uint *)GEN_TOP((uVar7 + 0x2c + ((uVar3 & 3) + 0x80000000 + uVar5) * 4)));
          uVar3 = uVar3 >> 2;
        } while ((int)uVar5 < 0);
      }
      piVar1 = ((int *)GEN_TOP((param_2 + 0x548)));
      *piVar1 = *piVar1 - ((int)uVar5 >> 0x1a);
      *((uint *)GEN_TOP((param_2 + 0x544))) = uVar6 >> GEN_SHC((byte)((int)uVar5 >> 0x1a), (byte)((int)uVar5 >> 0x1a));
      if (*piVar1 < 0) break;
      if ((uVar5 & 0x3ffffff) == 0xffffffff) goto LAB_00cec65b;
      iVar8 = 0;
      if (0 < iVar2) {
        iVar4 = (uVar5 & 0x3ffffff) * iVar2 * 4;
        do {
          in_eax = in_eax + 1;
          param_3 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar4 + *((int *)GEN_TOP((uVar7 + 4)))))) +
                                             ((float10)GEN_TOD(gen_bits2f(param_3)))))));
          *((float *)GEN_TOP((param_4 - 4 + in_eax * 4))) =
               ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*((float *)GEN_TOP((param_4 - 4 + in_eax * 4)))
                      )));
          if (param_5 <= in_eax) {
            return 1;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar8 < iVar2);
      }
      param_6 = param_6 - iVar2;
      if (param_6 < 1) {
        return 1;
      }
    }
    *((undefined4 *)GEN_TOP((param_2 + 0x548))) = 0;
LAB_00cec65b: ;
    if ((*((char *)GEN_TOP((param_2 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_2 + 0x53c))) != 0)) {
      return 0;
    }
  }
  *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
  if (*((int *)GEN_TOP((param_2 + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
  }
  return 0;
}

/* ref: FUN_00cec7c0 */
GEN_LIB GEN_FRAME uint F_00cec7c0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int in_edi, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcec7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int in_edi = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  
  uVar1 = in_ecx - in_edi >> 0x1f;
  return ((((in_ecx - in_edi ^ uVar1) - uVar1) * (in_eax - param_4) * param_5 >> 0x15 ^ uVar1) -
         uVar1) + in_edi;
}

/* ref: FUN_00cec7f0 */
GEN_LIB GEN_FRAME unsigned int F_00cec7f0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcec7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  
  uVar8 = param_5 - param_3;
  iVar2 = in_eax - param_4;
  if (iVar2 < 0) {
    uVar3 = (uint)(iVar2 * -0x1000000) / uVar8;
    uVar5 = param_4 * -0x1000000;
    if ((uVar8 & uVar8 - 1) != 0) {
      uVar3 = uVar3 + 1;
    }
    iVar2 = param_3 + 1;
    *((float *)GEN_TOP((param_2 - 4 + iVar2 * 4))) =
         ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + param_4 * 4) *
                (float10)*((float *)GEN_TOP((param_2 + param_3 * 4))))));
    if (iVar2 < param_5) {
      if (3 < param_5 - iVar2) {
        iVar1 = iVar2 * 4;
        param_4 = ((param_5 - iVar2) - 4U >> 2) + 1;
        iVar2 = iVar2 + param_4 * 4;
        pfVar7 = ((float *)GEN_TOP((param_2 + 8 + iVar1)));
        do {
          uVar8 = uVar5 + uVar3 + uVar3;
          pfVar7[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar5 + uVar3 >> 0x18) * -4)) *
                              (float10)pfVar7[-2])));
          uVar6 = uVar8 + uVar3;
          pfVar7[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar8 >> 0x18) * -4)) *
                              (float10)pfVar7[-1])));
          uVar5 = uVar6 + uVar3;
          *pfVar7 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar6 >> 0x18) * -4)) *
                           (float10)*pfVar7)));
          param_4 = param_4 - 1;
          pfVar7[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar5 >> 0x18) * -4)) *
                             (float10)pfVar7[1])));
          pfVar7 = pfVar7 + 4;
        } while (param_4 != 0);
      }
      if (iVar2 < param_5) {
        do {
          uVar5 = uVar5 + uVar3;
          iVar2 = iVar2 + 1;
          *((float *)GEN_TOP((param_2 - 4 + iVar2 * 4))) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar5 >> 0x18) * -4)) *
                      (float10)*((float *)GEN_TOP((param_2 - 4 + iVar2 * 4))))));
        } while (iVar2 < param_5);
        return 0;
      }
    }
  }
  else {
    uVar5 = (uint)(iVar2 * 0x1000000) / uVar8;
    uVar3 = param_4 << 0x18;
    if ((uVar8 & uVar8 - 1) != 0) {
      uVar5 = uVar5 + 1;
    }
    iVar2 = param_3 + 1;
    *((float *)GEN_TOP((param_2 - 4 + iVar2 * 4))) =
         ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + param_4 * 4) *
                (float10)*((float *)GEN_TOP((param_2 + param_3 * 4))))));
    if (iVar2 < param_5) {
      if (3 < param_5 - iVar2) {
        iVar4 = ((param_5 - iVar2) - 4U >> 2) + 1;
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + iVar4 * 4;
        pfVar7 = ((float *)GEN_TOP((param_2 + 8 + iVar1)));
        do {
          uVar8 = uVar3 + uVar5 + uVar5;
          uVar6 = uVar8 + uVar5;
          pfVar7[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 + uVar5 >> 0x18) * 4) *
                              (float10)pfVar7[-2])));
          uVar3 = uVar6 + uVar5;
          pfVar7[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar8 >> 0x18) * 4) *
                              (float10)pfVar7[-1])));
          iVar4 = iVar4 - 1;
          *pfVar7 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar6 >> 0x18) * 4) *
                           (float10)*pfVar7)));
          pfVar7[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 >> 0x18) * 4) *
                             (float10)pfVar7[1])));
          pfVar7 = pfVar7 + 4;
        } while (iVar4 != 0);
      }
      while (iVar2 < param_5) {
        uVar3 = uVar3 + uVar5;
        iVar2 = iVar2 + 1;
        *((float *)GEN_TOP((param_2 - 4 + iVar2 * 4))) =
             ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar3 >> 0x18) * 4) *
                    (float10)*((float *)GEN_TOP((param_2 - 4 + iVar2 * 4))))));
      }
    }
  }
  return 0;
}

/* ref: FUN_00cec9f0 */
GEN_LIB GEN_FRAME uint F_00cec9f0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcec9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  int * piVar1;
  float * pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  int local_8;
  
  local_8 = 0;
  if (param_6 == 0) {
    uVar10 = (uint)(*((int *)GEN_TOP((in_eax + 0xc))) * param_5) >> 0x15;
    if (uVar10 != 0) {
      param_6 = param_5 - param_4;
      iVar9 = param_3 + param_4 * 4;
      do {
        uVar3 = F_00cebfc0(in_eax,param_2,iVar9,param_6,uVar10);
        if (uVar3 == 0) {
          return 0;
        }
        param_6 = param_6 - 1;
        local_8 = local_8 + 1;
        iVar9 = iVar9 + 4;
      } while (local_8 < (int)uVar10);
      return 1;
    }
  }
  else if (0 < param_5) {
    do {
      iVar4 = param_5 - local_8;
      iVar9 = param_3 + param_4 * 4;
      if (*((char *)GEN_TOP((in_eax + 0x25))) == '\0') {
        *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
        if (*((int *)GEN_TOP((param_2 + 0x34))) != 0) {
          return 0;
        }
        *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
        return 0;
      }
      if (*((int *)GEN_TOP((param_2 + 0x548))) < 8) {
        F_00cebbb0(param_2);
      }
      uVar10 = *((uint *)GEN_TOP((param_2 + 0x544)));
      uVar3 = *((uint *)GEN_TOP((in_eax + 0x2c + (uVar10 & 0xff) * 4)));
      if ((int)uVar3 < 0) {
        if (*((int *)GEN_TOP((param_2 + 0x548))) < 0x19) {
          F_00cebbb0(param_2);
        }
        uVar10 = *((uint *)GEN_TOP((param_2 + 0x544))) >> 8;
        do {
          uVar3 = *((uint *)GEN_TOP((in_eax + 0x2c + ((uVar10 & 3) + 0x80000000 + uVar3) * 4)));
          uVar10 = uVar10 >> 2;
        } while ((int)uVar3 < 0);
        uVar10 = *((uint *)GEN_TOP((param_2 + 0x544)));
      }
      fVar12 = (float10)0;
      piVar1 = ((int *)GEN_TOP((param_2 + 0x548)));
      *piVar1 = *piVar1 - ((int)uVar3 >> 0x1a);
      *((uint *)GEN_TOP((param_2 + 0x544))) = uVar10 >> GEN_SHC((byte)((int)uVar3 >> 0x1a), (byte)((int)uVar3 >> 0x1a));
      if (*piVar1 < 0) {
        *((undefined4 *)GEN_TOP((param_2 + 0x548))) = 0;
        uVar3 = 0xffffffff;
LAB_00cecb2a: ;
        if ((*((char *)GEN_TOP((param_2 + 0x534))) == '\0') && (*((int *)GEN_TOP((param_2 + 0x53c))) != 0)) {
          return 0;
        }
        *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
        if (*((int *)GEN_TOP((param_2 + 0x34))) == 0) {
          *((undefined4 *)GEN_TOP((param_2 + 0x38))) = 0x15;
        }
      }
      else {
        uVar3 = uVar3 & 0x3ffffff;
        if (uVar3 == 0xffffffff) goto LAB_00cecb2a;
      }
      if ((int)uVar3 < 0) {
        return 0;
      }
      iVar5 = *((int *)GEN_TOP((in_eax + 8)));
      if (iVar5 < iVar4) {
        iVar4 = iVar5;
      }
      iVar5 = iVar5 * uVar3;
      iVar8 = 0;
      if (*((char *)GEN_TOP((in_eax + 0x26))) == '\0') {
        if (3 < iVar4) {
          iVar11 = (iVar4 - 4U >> 2) + 1;
          iVar8 = iVar11 * 4;
          pfVar6 = ((float *)GEN_TOP((iVar9 + 8)));
          iVar7 = iVar5 * 4;
          do {
            iVar11 = iVar11 - 1;
            pfVar6[-2] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + *((int *)GEN_TOP((in_eax + 4)))))) + fVar12) +
                                (float10)pfVar6[-2])));
            pfVar6[-1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 4 + *((int *)GEN_TOP((in_eax + 4)))))) + fVar12) +
                                (float10)pfVar6[-1])));
            *pfVar6 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 8 + *((int *)GEN_TOP((in_eax + 4)))))) + fVar12) +
                             (float10)*pfVar6)));
            pfVar6[1] = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar7 + 0xc + *((int *)GEN_TOP((in_eax + 4)))))) + fVar12) +
                               (float10)pfVar6[1])));
            pfVar6 = pfVar6 + 4;
            iVar7 = iVar7 + 0x10;
          } while (iVar11 != 0);
        }
        if (iVar8 < iVar4) {
          iVar5 = (iVar5 + iVar8) * 4;
          do {
            pfVar6 = ((float *)GEN_TOP((*((int *)GEN_TOP((in_eax + 4))) + iVar5)));
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            *((float *)GEN_TOP((iVar9 - 4 + iVar8 * 4))) =
                 ((float)GEN_TOF((((float10)*pfVar6 + (float10)0) +
                        (float10)*((float *)GEN_TOP((iVar9 - 4 + iVar8 * 4))))));
          } while (iVar8 < iVar4);
        }
      }
      else {
        param_6 = (uint)gen_fl2bits((float)(float10)0);
        if (3 < iVar4) {
          iVar11 = (iVar4 - 4U >> 2) + 1;
          iVar7 = iVar5 * 4;
          iVar8 = iVar11 * 4;
          pfVar6 = ((float *)GEN_TOP((iVar9 + 8)));
          do {
            pfVar2 = ((float *)GEN_TOP((*((int *)GEN_TOP((in_eax + 4))) + iVar7)));
            iVar7 = iVar7 + 0x10;
            iVar11 = iVar11 - 1;
            fVar12 = GEN_X87((float10)(float)((float10)*pfVar2 + ((float10)GEN_TOD(gen_bits2f(param_6)))));
            pfVar6[-2] = (float)(fVar12 + (float10)pfVar6[-2]);
            fVar12 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((in_eax + 0x1c))))))
                                     + (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_eax + 4))) - 0xc + iVar7)))))));
            pfVar6[-1] = (float)(fVar12 + (float10)pfVar6[-1]);
            fVar12 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((in_eax + 0x1c))))))
                                     + (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_eax + 4))) - 8 + iVar7)))))));
            *pfVar6 = (float)(fVar12 + (float10)*pfVar6);
            fVar12 = GEN_X87((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((in_eax + 0x1c))))))
                                     + (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_eax + 4))) - 4 + iVar7)))))));
            pfVar6[1] = (float)(fVar12 + (float10)pfVar6[1]);
            param_6 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((in_eax + 0x1c)))))));
            pfVar6 = pfVar6 + 4;
          } while (iVar11 != 0);
        }
        if (iVar8 < iVar4) {
          iVar5 = (iVar5 + iVar8) * 4;
          do {
            pfVar6 = ((float *)GEN_TOP((iVar5 + *((int *)GEN_TOP((in_eax + 4))))));
            iVar8 = iVar8 + 1;
            iVar5 = iVar5 + 4;
            fVar12 = GEN_X87((float10)(float)((float10)*pfVar6 + ((float10)GEN_TOD(gen_bits2f(param_6)))));
            *((float *)GEN_TOP((iVar9 - 4 + iVar8 * 4))) =
                 ((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((iVar9 - 4 + iVar8 * 4))))));
            param_6 = (uint)gen_fl2bits(((float)GEN_TOF((fVar12 + (float10)*((float *)GEN_TOP((in_eax + 0x1c)))))));
          } while (iVar8 < iVar4);
        }
      }
      param_4 = param_4 + *((int *)GEN_TOP((in_eax + 8)));
      local_8 = local_8 + *((int *)GEN_TOP((in_eax + 8)));
    } while (local_8 < param_5);
  }
  return 1;
}

/* ref: FUN_00cecd50 */
GEN_LIB GEN_NOFRAME uint F_00cecd50(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcecd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_FRAME_DECL(0x12084, 12);
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 * puVar15;
  undefined4 * puVar16;
  undefined1 * puVar17;
  int iVar18;
  
  (*(uint *)(gen_frame + 0x12070)) = 0xcecd70;
  (*(uint *)(gen_frame + 0x12070)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12074);
  iVar3 = *((int *)GEN_TOP((in_edi + 0x158)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x10038)) = param_2;
  (*(uint *)(gen_frame + 0x10034)) = (uint)*((ushort *)GEN_TOP((in_edi + 0xd8 + param_5 * 2)));
  piVar2 = ((int *)GEN_TOP((iVar3 + param_5 * 0x1c)));
  (*(int *)(gen_frame + 0x1003c)) = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x11))) * 4)))
                       + 8)));
  puVar15 = *((undefined4 * PTR32 *)GEN_TOP((in_edi + 8)));
  uVar12 = (uint)((piVar2[1] - *piVar2) * piVar2[3]) >> 0x15;
  (*(uint *)(gen_frame + 0x10044)) = uVar12;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar15;
  ((int *)(gen_frame + 0x10000))[8] = 0xcecde4;
  iVar3 = -((uVar12 * 4 + 4) * (int)puVar15);
  iVar13 = 0;
  (*(int * PTR32 *)(gen_frame + 0x10040)) = ((int *)GEN_TOP(((int)((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10024) + (iVar3))))));
  puVar17 = ((undefined1 *)GEN_TOP(((int)((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10024) + ((int)((int)(uintptr_t)puVar15) * 4 + iVar3))))));
  if (0 < (int)puVar15) {
    do {
      *((undefined1 * PTR32 *)GEN_TOP(((int)((undefined1 *)GP((uint)(uintptr_t)(gen_frame + 0x10024) + (iVar13 * 4 + iVar3)))))) = puVar17;
      iVar13 = iVar13 + 1;
      puVar17 = puVar17 + (*(uint *)(gen_frame + 0x10044)) * 4;
    } while (iVar13 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)));
  }
  if (((*(uint *)(gen_frame + 0x10034)) == 2) && (param_3 != 1)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = ((undefined4 *)GEN_TOP((param_3 * param_4)));
    uVar12 = 0;
    if (0 < (int)param_3) {
      do {
        if (*((char *)GEN_TOP((uVar12 + param_6))) == '\0') break;
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)param_3);
    }
    if (uVar12 != param_3) {
      if ((param_3 == 2) && (param_4 < 0x401)) {
        *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = param_3 * param_4 * 4;
        *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))) = 0;
        *((undefined4 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))) = ((undefined4 *)(gen_frame + 0x10064));
        *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))) = 0xcece88;
        F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))),
                *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))),
                *((gen_size32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))));
        (*(uint *)(gen_frame + 0x10050)) = 0;
        do {
          iVar13 = 0;
          (*(int *)(gen_frame + 0x10058)) = 0;
          if (0 < (int)(*(uint *)(gen_frame + 0x10044))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = ((undefined4 *)GEN_TOP(0x0));
            do {
              if ((*(uint *)(gen_frame + 0x10050)) == 0) {
                (*(int *)(gen_frame + 0x10048)) = *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) +
                                     (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x11))) * 4)));
                if (*((int *)GEN_TOP((in_edi + 0x548))) < 8) {
                  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = 0xcecee7;
                  F_00cebbb0(in_edi);
                }
                uVar12 = *((uint *)GEN_TOP((in_edi + 0x544)));
                puVar15 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10048)) + 0x2c + (uVar12 & 0xff) * 4)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = puVar15;
                if ((int)puVar15 < 0) {
                  if (*((int *)GEN_TOP((in_edi + 0x548))) < 0x19) {
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = 0xcecf18;
                    F_00cebbb0(in_edi);
                    puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x1004c));
                  }
                  uVar12 = *((uint *)GEN_TOP((in_edi + 0x544))) >> 8;
                  do {
                    puVar15 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10048)) + 0x2c + ((uVar12 & 3) + 0x80000000 + (int)puVar15) * 4)));
                    uVar12 = uVar12 >> 2;
                  } while ((int)puVar15 < 0);
                  uVar12 = *((uint *)GEN_TOP((in_edi + 0x544)));
                }
                piVar1 = ((int *)GEN_TOP((in_edi + 0x548)));
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)puVar15) >> 0x1a);
                iVar13 = *piVar1;
                (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar15) >> 0x1a)));
                *((uint *)GEN_TOP((in_edi + 0x544))) = uVar12 >> GEN_SHC((byte)((int)((int)(uintptr_t)puVar15) >> 0x1a), (byte)((int)((int)(uintptr_t)puVar15) >> 0x1a));
                if (iVar13 < 0) {
                  *((undefined4 *)GEN_TOP((in_edi + 0x548))) = 0;
                  goto LAB_00ced077;
                }
                if (((uint)puVar15 & 0x3ffffff) == 0xffffffff) goto LAB_00ced077;
                *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054)) + *(*(int * PTR32 *)(gen_frame + 0x10040))))) =
                     *((undefined4 *)GEN_TOP((piVar2[5] + ((uint)puVar15 & 0x3ffffff) * 4)));
                iVar13 = (*(int *)(gen_frame + 0x10058));
              }
              (*(int *)(gen_frame + 0x10060)) = 0;
              if (0 < (*(int *)(gen_frame + 0x1003c))) {
                do {
                  if ((int)(*(uint *)(gen_frame + 0x10044)) <= iVar13) break;
                  iVar14 = piVar2[2];
                  iVar4 = *piVar2;
                  iVar18 = (int)*((short *)GEN_TOP((piVar2[6] +
                                          ((*(uint *)(gen_frame + 0x10050)) +
                                          (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10040)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054))))) +
                                                         (*(int *)(gen_frame + 0x10060))))) * 8) * 2)));
                  if (-1 < iVar18) {
                    uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar18 * 4)));
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = piVar2[2];
                    *((undefined4 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))) = (*(undefined4 * PTR32 *)(gen_frame + 0x1005c));
                    *((undefined4 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))) = ((undefined4 *)(gen_frame + 0x10064));
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))) = uVar5;
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x10))) = in_edi;
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0xc))) = 0xced016;
                    uVar12 = F_00cec510(iVar14 * iVar13 + iVar4,
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x10))),
                                          *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))));
                    if (uVar12 == 0) goto LAB_00ced077;
                  }
                  iVar13 = (*(int *)(gen_frame + 0x10058)) + 1;
                  (*(int *)(gen_frame + 0x10058)) = iVar13;
                  iVar14 = (*(int *)(gen_frame + 0x10060)) + 1;
                  (*(int *)(gen_frame + 0x10060)) = iVar14;
                  iVar13 = (*(int *)(gen_frame + 0x10058));
                } while (iVar14 < (*(int *)(gen_frame + 0x1003c)));
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054)) + 4)));
            } while (iVar13 < (int)(*(uint *)(gen_frame + 0x10044)));
          }
          iVar13 = (*(uint *)(gen_frame + 0x10050)) + 1;
          (*(uint *)(gen_frame + 0x10050)) = iVar13;
        } while (iVar13 < 8);
LAB_00ced077: ;
        puVar15 = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x10038))));
        puVar16 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x10038))[1]));
        uVar12 = 0;
        if (0 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c))) {
          do {
            uVar5 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 1)];
            uVar6 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 2)];
            uVar7 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 3)];
            uVar8 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 4)];
            uVar9 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 5)];
            uVar10 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 6)];
            uVar11 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12 + 7)];
            *puVar15 = ((undefined4 *)(gen_frame + 0x10064))[(int)(uVar12)];
            puVar15[1] = uVar6;
            puVar15[2] = uVar8;
            puVar15[3] = uVar10;
            *puVar16 = uVar5;
            puVar16[1] = uVar7;
            puVar16[2] = uVar9;
            puVar16[3] = uVar11;
            uVar12 = uVar12 + 8;
            puVar15 = puVar15 + 4;
            puVar16 = puVar16 + 4;
          } while ((int)uVar12 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)));
        }
      }
      else {
        (*(int *)(gen_frame + 0x10060)) = 0;
        if (0 < (int)param_3) {
          do {
            iVar13 = (*(int *)(gen_frame + 0x10060));
            puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x10038));
            if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x10060)) + param_6))) == '\0') {
              *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = param_4 * 4;
              uVar5 = puVar15[iVar13];
              *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))) = 0;
              *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))) = uVar5;
              *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))) = 0xced10b;
              F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))),
                      *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))),
                      *((gen_size32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))));
              iVar13 = (*(int *)(gen_frame + 0x10060));
            }
            (*(int *)(gen_frame + 0x10060)) = iVar13 + 1;
          } while (iVar13 + 1 < (int)param_3);
        }
        iVar13 = (int)(0x200000 / (ulonglong)param_3);
        (*(int *)(gen_frame + 0x10048)) = iVar13;
        if ((param_3 & param_3 - 1) != 0) {
          (*(int *)(gen_frame + 0x10048)) = iVar13 + 1;
        }
        (*(uint *)(gen_frame + 0x10050)) = 0;
        do {
          iVar13 = 0;
          (*(int *)(gen_frame + 0x10058)) = 0;
          if (0 < (int)(*(uint *)(gen_frame + 0x10044))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = ((undefined4 *)GEN_TOP(0x0));
            do {
              iVar14 = piVar2[2] * iVar13 + *piVar2;
              uVar12 = (uint)((*(int *)(gen_frame + 0x10048)) * iVar14) >> 0x15;
              (*(uint *)(gen_frame + 0x10034)) = uVar12;
              (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = ((undefined4 *)GEN_TOP((iVar14 - uVar12 * param_3)));
              if ((*(uint *)(gen_frame + 0x10050)) == 0) {
                (*(int *)(gen_frame + 0x10030)) = *((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) +
                                     (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x11))) * 4)));
                if (*((int *)GEN_TOP((in_edi + 0x548))) < 8) {
                  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = 0xced1c3;
                  F_00cebbb0(in_edi);
                }
                uVar12 = *((uint *)GEN_TOP((in_edi + 0x544)));
                puVar15 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10030)) + 0x2c + (uVar12 & 0xff) * 4)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = puVar15;
                if ((int)puVar15 < 0) {
                  if (*((int *)GEN_TOP((in_edi + 0x548))) < 0x19) {
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = 0xced1f4;
                    F_00cebbb0(in_edi);
                    puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x10054));
                  }
                  uVar12 = *((uint *)GEN_TOP((in_edi + 0x544))) >> 8;
                  do {
                    puVar15 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x10030)) + 0x2c + ((uVar12 & 3) + 0x80000000 + (int)puVar15) * 4)));
                    uVar12 = uVar12 >> 2;
                  } while ((int)puVar15 < 0);
                  uVar12 = *((uint *)GEN_TOP((in_edi + 0x544)));
                  (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = puVar15;
                }
                piVar1 = ((int *)GEN_TOP((in_edi + 0x548)));
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)puVar15) >> 0x1a);
                *((uint *)GEN_TOP((in_edi + 0x544))) = uVar12 >> GEN_SHC((byte)((int)((int)(uintptr_t)puVar15) >> 0x1a), (byte)((int)((int)(uintptr_t)puVar15) >> 0x1a));
                if (*piVar1 < 0) {
LAB_00ced672: ;
                  *((undefined4 *)GEN_TOP((in_edi + 0x548))) = 0;
                  (*(undefined4 *)(gen_frame + 0x10024)) = 0xced68d;
                  return (uint)puVar15;
                }
                if (((uint)puVar15 & 0x3ffffff) == 0xffffffff) {
                  (*(undefined4 *)(gen_frame + 0x10024)) = 0xced68d;
                  return 0xffffffff;
                }
                *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + *(*(int * PTR32 *)(gen_frame + 0x10040))))) =
                     *((undefined4 *)GEN_TOP((piVar2[5] + ((uint)puVar15 & 0x3ffffff) * 4)));
                iVar13 = (*(int *)(gen_frame + 0x10058));
                (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = puVar15;
              }
              (*(int *)(gen_frame + 0x10060)) = 0;
              if (0 < (*(int *)(gen_frame + 0x1003c))) {
                do {
                  if ((int)(*(uint *)(gen_frame + 0x10044)) <= iVar13) break;
                  iVar14 = (int)*((short *)GEN_TOP((piVar2[6] +
                                          ((*(uint *)(gen_frame + 0x10050)) +
                                          (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x10040)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c))))) +
                                                         (*(int *)(gen_frame + 0x10060))))) * 8) * 2)));
                  if (iVar14 < 0) {
                    iVar13 = piVar2[2] * iVar13 + *piVar2 + piVar2[2];
                    uVar12 = (uint)((*(int *)(gen_frame + 0x10048)) * iVar13) >> 0x15;
                    (*(uint *)(gen_frame + 0x10034)) = uVar12;
                    (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = ((undefined4 *)GEN_TOP((iVar13 - uVar12 * param_3)));
                  }
                  else {
                    uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar14 * 4)));
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = piVar2[2];
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))) = param_4;
                    *((uint * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))) = &(*(uint *)(gen_frame + 0x10034));
                    *((undefined4 * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))) = &(*(undefined4 * PTR32 *)(gen_frame + 0x1004c));
                    puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x10038));
                    *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x10))) = param_3;
                    *((undefined4 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0xc))) = puVar15;
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 8))) = uVar5;
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 4))) = in_edi;
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3))) = 0xced302;
                    uVar12 = F_00cec220(*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 4))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 8))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0xc))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x10))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))));
                    if (uVar12 == 0) {
                      (*(undefined4 *)(gen_frame + 0x10024)) = 0xced68d;
                      return 0;
                    }
                  }
                  iVar13 = (*(int *)(gen_frame + 0x10058)) + 1;
                  (*(int *)(gen_frame + 0x10058)) = iVar13;
                  iVar14 = (*(int *)(gen_frame + 0x10060)) + 1;
                  (*(int *)(gen_frame + 0x10060)) = iVar14;
                  iVar13 = (*(int *)(gen_frame + 0x10058));
                } while (iVar14 < (*(int *)(gen_frame + 0x1003c)));
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 4)));
            } while (iVar13 < (int)(*(uint *)(gen_frame + 0x10044)));
          }
          uVar12 = (*(uint *)(gen_frame + 0x10050)) + 1;
          (*(uint *)(gen_frame + 0x10050)) = uVar12;
        } while ((int)uVar12 < 8);
      }
    }
  }
  else {
    (*(int *)(gen_frame + 0x10060)) = 0;
    if (0 < (int)param_3) {
      do {
        iVar13 = (*(int *)(gen_frame + 0x10060));
        puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x10038));
        if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x10060)) + param_6))) == '\0') {
          *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = param_4 * 4;
          uVar5 = puVar15[iVar13];
          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))) = 0;
          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))) = uVar5;
          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))) = 0xced3bb;
          F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))),
                  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))),
                  *((gen_size32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))));
          iVar13 = (*(int *)(gen_frame + 0x10060));
        }
        (*(int *)(gen_frame + 0x10060)) = iVar13 + 1;
      } while (iVar13 + 1 < (int)param_3);
    }
    (*(uint *)(gen_frame + 0x10050)) = 0;
    uVar12 = (*(uint *)(gen_frame + 0x10044));
    do {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)uVar12) {
        (*(int *)(gen_frame + 0x10048)) = 0;
        do {
          if (((*(uint *)(gen_frame + 0x10050)) == 0) && ((*(int *)(gen_frame + 0x10058)) = 0, 0 < (int)param_3)) {
            do {
              iVar13 = (*(int *)(gen_frame + 0x10058));
              if (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x10058)) + param_6))) == '\0') {
                iVar13 = *((int *)GEN_TOP((in_edi + 0x548)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + (uint)*((byte *)GEN_TOP(((int)piVar2 + 0x11))) * 4)));
                if (iVar13 < 8) {
                  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = 0xced44d;
                  F_00cebbb0(in_edi);
                }
                uVar12 = *((uint *)GEN_TOP((in_edi + 0x544)));
                puVar15 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x1004c))[(uVar12 & 0xff) + 0xb]));
                (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar15;
                if ((int)puVar15 < 0) {
                  if (*((int *)GEN_TOP((in_edi + 0x548))) < 0x19) {
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = 0xced47e;
                    F_00cebbb0(in_edi);
                    puVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x1005c));
                  }
                  uVar12 = *((uint *)GEN_TOP((in_edi + 0x544))) >> 8;
                  do {
                    puVar15 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x1004c))[(int)puVar15 + (uVar12 & 3) + 0x8000000b]));
                    uVar12 = uVar12 >> 2;
                  } while ((int)puVar15 < 0);
                  uVar12 = *((uint *)GEN_TOP((in_edi + 0x544)));
                  (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar15;
                }
                piVar1 = ((int *)GEN_TOP((in_edi + 0x548)));
                *piVar1 = *piVar1 - ((int)((int)(uintptr_t)puVar15) >> 0x1a);
                *((uint *)GEN_TOP((in_edi + 0x544))) = uVar12 >> GEN_SHC((byte)((int)((int)(uintptr_t)puVar15) >> 0x1a), (byte)((int)((int)(uintptr_t)puVar15) >> 0x1a));
                if (*piVar1 < 0) goto LAB_00ced672;
                puVar16 = ((undefined4 *)GEN_TOP(((uint)puVar15 & 0x3ffffff)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = puVar16;
                if (puVar16 == ((undefined4 *)GEN_TOP(0xffffffff))) {
                  (*(undefined4 *)(gen_frame + 0x10024)) = 0xced68d;
                  return 0xffffffff;
                }
                *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x10048)) + (*(int * PTR32 *)(gen_frame + 0x10040))[(*(int *)(gen_frame + 0x10058))]))) =
                     *((undefined4 *)GEN_TOP((piVar2[5] + (int)((int)(uintptr_t)puVar16) * 4)));
                iVar13 = (*(int *)(gen_frame + 0x10058));
                (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = puVar15;
              }
              (*(int *)(gen_frame + 0x10058)) = iVar13 + 1;
            } while (iVar13 + 1 < (int)param_3);
          }
          (*(int *)(gen_frame + 0x10060)) = 0;
          if (0 < (*(int *)(gen_frame + 0x1003c))) {
            do {
              if ((int)(*(uint *)(gen_frame + 0x10044)) <= (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054))) break;
              (*(int *)(gen_frame + 0x10058)) = 0;
              if (0 < (int)param_3) {
                (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10038));
                (*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) = ((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x10040)) - (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10038)))));
                do {
                  if ((*((char *)GEN_TOP(((*(int *)(gen_frame + 0x10058)) + param_6))) == '\0') &&
                     (iVar13 = (int)*((short *)GEN_TOP((piVar2[6] +
                                              ((*(uint *)(gen_frame + 0x10050)) +
                                              (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1004c)) +
                                                                               (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1005c))))) +
                                                                      (*(int *)(gen_frame + 0x10048))))) + (*(int *)(gen_frame + 0x10060))))) * 8)
                                              * 2))), -1 < iVar13)) {
                    iVar14 = piVar2[2] * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054));
                    uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar13 * 4)));
                    iVar13 = *piVar2;
                    *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))) = (*(uint *)(gen_frame + 0x10034));
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))) = piVar2[2];
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))) = iVar14 + iVar13;
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))) = *(*(undefined4 * PTR32 *)(gen_frame + 0x1005c));
                    *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x10))) = in_edi;
                    *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0xc))) = 0xced5f7;
                    uVar12 = F_00cec9f0(uVar5,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x10))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x14))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x18))),
                                          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x1c))),
                                          *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar3 + 0x20))));
                    if (uVar12 == 0) {
                      (*(undefined4 *)(gen_frame + 0x10024)) = 0xced68d;
                      return 0;
                    }
                  }
                  (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1005c)) + 1;
                  iVar13 = (*(int *)(gen_frame + 0x10058)) + 1;
                  (*(int *)(gen_frame + 0x10058)) = iVar13;
                } while (iVar13 < (int)param_3);
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x10054)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054)) + 1)));
              iVar13 = (*(int *)(gen_frame + 0x10060)) + 1;
              (*(int *)(gen_frame + 0x10060)) = iVar13;
            } while (iVar13 < (*(int *)(gen_frame + 0x1003c)));
          }
          (*(int *)(gen_frame + 0x10048)) = (*(int *)(gen_frame + 0x10048)) + 4;
          uVar12 = (*(uint *)(gen_frame + 0x10044));
        } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10054)) < (int)(*(uint *)(gen_frame + 0x10044)));
      }
      iVar13 = (*(uint *)(gen_frame + 0x10050)) + 1;
      (*(uint *)(gen_frame + 0x10050)) = iVar13;
    } while (iVar13 < 8);
  }
  (*(undefined4 *)(gen_frame + 0x10024)) = 0xced68d;
  return uVar12;
}

/* ref: FUN_00ced6a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00ced6a0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(undefined8 * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xced6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(undefined8 * param_6 = (undefined8 *)(uintptr_t)gen_a5;)
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  float * pfVar12;
  float * pfVar13;
  float * pfVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  volatile float local_30;
  int local_18;
  undefined8 * local_14;
  
  uVar10 = *(uint *)&REFG(undefined, 0x113056c);
  uVar9 = *(uint *)&REFG(undefined, 0x1130568);
  uVar8 = *(uint *)&REFG(undefined, 0x1130564);
  uVar7 = *(uint *)&REFG(undefined, 0x1130560);
  local_30 = (float)(float10)0;
  pfVar11 = ((float *)GEN_TOP((in_ecx - 0xc + in_eax * 4)));
  pfVar12 = pfVar11 + param_4;
  local_18 = param_3 >> 2;
  if (0 < local_18) {
    pfVar14 = pfVar12 + param_5;
    pfVar13 = pfVar11 + param_5;
    local_14 = param_6 + 4;
    do {
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      uVar2 = *param_6;
      uVar3 = *local_14;
      puVar1 = param_6 + 8;
      fVar19 = *pfVar11 - *pfVar12;
      fVar20 = pfVar11[1] - fVar4;
      fVar21 = pfVar11[2] - fVar5;
      fVar22 = pfVar11[3] - fVar6;
      *pfVar11 = *pfVar12 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar5 + pfVar11[2];
      pfVar11[3] = fVar6 + pfVar11[3];
      fVar17 = gen_bits2f((uint)uVar3);
      uVar18 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar15 = gen_bits2f((uint)uVar2);
      uVar16 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar23 = gen_bits2f(uVar18 ^ uVar7);
      fVar24 = gen_bits2f(uVar18 ^ uVar8);
      fVar25 = gen_bits2f(uVar16 ^ uVar9);
      fVar26 = gen_bits2f(uVar16 ^ uVar10);
      *pfVar12 = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar12[1] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar12[2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar12[3] = fVar21 * fVar26 + fVar22 * fVar15;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      param_6 = param_6 + 0x10;
      fVar19 = *pfVar13 - *pfVar14;
      fVar20 = pfVar13[1] - fVar4;
      fVar21 = pfVar13[2] - fVar5;
      fVar22 = pfVar13[3] - fVar6;
      *pfVar13 = *pfVar14 + *pfVar13;
      pfVar13[1] = fVar4 + pfVar13[1];
      pfVar13[2] = fVar5 + pfVar13[2];
      pfVar13[3] = fVar6 + pfVar13[3];
      *pfVar14 = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar14[1] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar14[2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar14[3] = fVar21 * fVar26 + fVar22 * fVar15;
      uVar2 = *puVar1;
      fVar4 = pfVar12[-3];
      fVar5 = pfVar12[-2];
      fVar6 = pfVar12[-1];
      uVar3 = local_14[8];
      local_14 = local_14 + 0x10;
      fVar19 = pfVar11[-4] - pfVar12[-4];
      fVar20 = pfVar11[-3] - fVar4;
      fVar21 = pfVar11[-2] - fVar5;
      fVar22 = pfVar11[-1] - fVar6;
      pfVar11[-4] = pfVar12[-4] + pfVar11[-4];
      pfVar11[-3] = fVar4 + pfVar11[-3];
      pfVar11[-2] = fVar5 + pfVar11[-2];
      pfVar11[-1] = fVar6 + pfVar11[-1];
      fVar17 = gen_bits2f((uint)uVar3);
      uVar18 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar15 = gen_bits2f((uint)uVar2);
      uVar16 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar23 = gen_bits2f(uVar18 ^ uVar7);
      fVar24 = gen_bits2f(uVar18 ^ uVar8);
      fVar25 = gen_bits2f(uVar16 ^ uVar9);
      fVar26 = gen_bits2f(uVar16 ^ uVar10);
      pfVar12[-4] = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar12[-3] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar12[-2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar12[-1] = fVar21 * fVar26 + fVar22 * fVar15;
      fVar4 = pfVar14[-3];
      fVar5 = pfVar14[-2];
      fVar6 = pfVar14[-1];
      fVar19 = pfVar13[-4] - pfVar14[-4];
      fVar20 = pfVar13[-3] - fVar4;
      fVar21 = pfVar13[-2] - fVar5;
      fVar22 = pfVar13[-1] - fVar6;
      pfVar13[-4] = pfVar14[-4] + pfVar13[-4];
      pfVar13[-3] = fVar4 + pfVar13[-3];
      pfVar13[-2] = fVar5 + pfVar13[-2];
      pfVar13[-1] = fVar6 + pfVar13[-1];
      local_18 = local_18 - 1;
      pfVar14[-4] = fVar20 * fVar23 + fVar19 * fVar17;
      pfVar14[-3] = fVar19 * fVar24 + fVar20 * fVar17;
      pfVar14[-2] = fVar22 * fVar25 + fVar21 * fVar15;
      pfVar14[-1] = fVar21 * fVar26 + fVar22 * fVar15;
      pfVar11 = pfVar11 - 8;
      pfVar13 = pfVar13 - 8;
      pfVar12 = pfVar12 - 8;
      pfVar14 = pfVar14 - 8;
    } while (0 < local_18);
  }
  return 0;
}

/* ref: FUN_00ced810 */
GEN_LIB GEN_NOFRAME unsigned int GEN_FASTCALL F_00ced810(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined8 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xced810u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  float * pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  float * pfVar12;
  undefined8 * puVar13;
  float * pfVar14;
  float * pfVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  volatile float local_30;
  int local_14;
  
  uVar10 = *(uint *)&REFG(undefined, 0x113056c);
  uVar9 = *(uint *)&REFG(undefined, 0x1130568);
  uVar8 = *(uint *)&REFG(undefined, 0x1130564);
  uVar7 = *(uint *)&REFG(undefined, 0x1130560);
  local_30 = (float)(float10)0;
  pfVar11 = ((float *)GEN_TOP((param_1 - 0x1c + param_4 * 4)));
  local_14 = param_3 >> 2;
  pfVar12 = pfVar11 + param_5;
  if (0 < local_14) {
    puVar13 = ((undefined8 *)GEN_TOP(((int)param_2 + param_7 * 4)));
    do {
      uVar2 = *param_2;
      uVar3 = *puVar13;
      fVar4 = pfVar12[5];
      fVar5 = pfVar12[6];
      fVar6 = pfVar12[7];
      pfVar14 = pfVar11 + param_6 + 4;
      fVar20 = pfVar11[4] - pfVar12[4];
      fVar21 = pfVar11[5] - fVar4;
      fVar22 = pfVar11[6] - fVar5;
      fVar23 = pfVar11[7] - fVar6;
      pfVar11[4] = pfVar12[4] + pfVar11[4];
      pfVar11[5] = fVar4 + pfVar11[5];
      pfVar11[6] = fVar5 + pfVar11[6];
      pfVar11[7] = fVar6 + pfVar11[7];
      fVar18 = gen_bits2f((uint)uVar3);
      uVar19 = (uint)((ulonglong)uVar3 >> 0x20);
      fVar16 = gen_bits2f((uint)uVar2);
      uVar17 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar24 = gen_bits2f(uVar19 ^ uVar7);
      fVar25 = gen_bits2f(uVar19 ^ uVar8);
      fVar26 = gen_bits2f(uVar17 ^ uVar9);
      fVar27 = gen_bits2f(uVar17 ^ uVar10);
      pfVar12[4] = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar12[5] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar12[6] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar12[7] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar1 = pfVar12 + param_6 + 4;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar15 = pfVar12 + param_6 + 4;
      fVar20 = *pfVar14 - *pfVar1;
      fVar21 = pfVar14[1] - fVar4;
      fVar22 = pfVar14[2] - fVar5;
      fVar23 = pfVar14[3] - fVar6;
      *pfVar14 = *pfVar1 + *pfVar14;
      pfVar14[1] = fVar4 + pfVar14[1];
      pfVar14[2] = fVar5 + pfVar14[2];
      pfVar14[3] = fVar6 + pfVar14[3];
      *pfVar15 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar15[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar15[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar15[3] = fVar22 * fVar27 + fVar23 * fVar16;
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      uVar2 = param_2[param_7];
      uVar3 = puVar13[param_7];
      param_2 = param_2 + param_7 * 2;
      puVar13 = puVar13 + param_7 * 2;
      fVar20 = *pfVar11 - *pfVar12;
      fVar21 = pfVar11[1] - fVar4;
      fVar22 = pfVar11[2] - fVar5;
      fVar23 = pfVar11[3] - fVar6;
      *pfVar11 = *pfVar12 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar5 + pfVar11[2];
      pfVar11[3] = fVar6 + pfVar11[3];
      fVar18 = gen_bits2f((uint)uVar3);
      uVar19 = (uint)((ulonglong)uVar3 >> 0x20);
      pfVar1 = pfVar11 + param_6;
      fVar16 = gen_bits2f((uint)uVar2);
      uVar17 = (uint)((ulonglong)uVar2 >> 0x20);
      fVar24 = gen_bits2f(uVar19 ^ uVar7);
      fVar25 = gen_bits2f(uVar19 ^ uVar8);
      fVar26 = gen_bits2f(uVar17 ^ uVar9);
      fVar27 = gen_bits2f(uVar17 ^ uVar10);
      *pfVar12 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar12[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar12[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar12[3] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar14 = pfVar12 + param_6;
      fVar4 = pfVar14[1];
      fVar5 = pfVar14[2];
      fVar6 = pfVar14[3];
      pfVar15 = pfVar12 + param_6;
      fVar20 = *pfVar1 - *pfVar14;
      fVar21 = pfVar1[1] - fVar4;
      fVar22 = pfVar1[2] - fVar5;
      fVar23 = pfVar1[3] - fVar6;
      *pfVar1 = *pfVar14 + *pfVar1;
      pfVar1[1] = fVar4 + pfVar1[1];
      pfVar1[2] = fVar5 + pfVar1[2];
      pfVar1[3] = fVar6 + pfVar1[3];
      local_14 = local_14 - 1;
      *pfVar15 = fVar21 * fVar24 + fVar20 * fVar18;
      pfVar15[1] = fVar20 * fVar25 + fVar21 * fVar18;
      pfVar15[2] = fVar23 * fVar26 + fVar22 * fVar16;
      pfVar15[3] = fVar22 * fVar27 + fVar23 * fVar16;
      pfVar11 = pfVar11 - 8;
      pfVar12 = pfVar12 - 8;
    } while (0 < local_14);
  }
  return 0;
}

/* ref: FUN_00ced9b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00ced9b0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(undefined8 * in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xced9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  volatile float local_20;
  
  local_20 = (float)(float10)0;
  uVar1 = *((undefined8 *)GEN_TOP(((int)in_ecx + in_eax * 4)));
  fVar15 = gen_bits2f((uint)uVar1);
  uVar18 = (uint)((ulonglong)uVar1 >> 0x20);
  fVar8 = gen_bits2f((uint)*in_ecx);
  uVar11 = (uint)((ulonglong)*in_ecx >> 0x20);
  fVar22 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130560));
  fVar23 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130564));
  fVar24 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x1130568));
  fVar25 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x113056c));
  uVar1 = *((undefined8 *)GEN_TOP(((int)in_ecx + in_eax * 0xc)));
  fVar16 = gen_bits2f((uint)uVar1);
  uVar18 = (uint)((ulonglong)uVar1 >> 0x20);
  pfVar5 = ((float *)GEN_TOP((param_4 - 0x1c + param_5 * 4)));
  fVar9 = gen_bits2f((uint)in_ecx[in_eax]);
  uVar11 = (uint)((ulonglong)in_ecx[in_eax] >> 0x20);
  fVar17 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130560));
  fVar19 = gen_bits2f(uVar18 ^ *(uint *)&REFG(undefined, 0x1130564));
  fVar20 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x1130568));
  fVar21 = gen_bits2f(uVar11 ^ *(uint *)&REFG(undefined, 0x113056c));
  pfVar6 = pfVar5 + param_6;
  for (iVar7 = param_3; 0 < iVar7; iVar7 = iVar7 - 1) {
    fVar2 = pfVar6[5];
    fVar3 = pfVar6[6];
    fVar4 = pfVar6[7];
    fVar10 = pfVar5[4] - pfVar6[4];
    fVar12 = pfVar5[5] - fVar2;
    fVar13 = pfVar5[6] - fVar3;
    fVar14 = pfVar5[7] - fVar4;
    pfVar5[4] = pfVar6[4] + pfVar5[4];
    pfVar5[5] = fVar2 + pfVar5[5];
    pfVar5[6] = fVar3 + pfVar5[6];
    pfVar5[7] = fVar4 + pfVar5[7];
    pfVar6[4] = fVar12 * fVar22 + fVar10 * fVar15;
    pfVar6[5] = fVar10 * fVar23 + fVar12 * fVar15;
    pfVar6[6] = fVar14 * fVar24 + fVar13 * fVar8;
    pfVar6[7] = fVar13 * fVar25 + fVar14 * fVar8;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar6[3];
    fVar10 = *pfVar5 - *pfVar6;
    fVar12 = pfVar5[1] - fVar2;
    fVar13 = pfVar5[2] - fVar3;
    fVar14 = pfVar5[3] - fVar4;
    *pfVar5 = *pfVar6 + *pfVar5;
    pfVar5[1] = fVar2 + pfVar5[1];
    pfVar5[2] = fVar3 + pfVar5[2];
    pfVar5[3] = fVar4 + pfVar5[3];
    *pfVar6 = fVar12 * fVar17 + fVar10 * fVar16;
    pfVar6[1] = fVar10 * fVar19 + fVar12 * fVar16;
    pfVar6[2] = fVar14 * fVar20 + fVar13 * fVar9;
    pfVar6[3] = fVar13 * fVar21 + fVar14 * fVar9;
    pfVar5 = pfVar5 - param_7;
    pfVar6 = pfVar6 - param_7;
  }
  return 0;
}

/* ref: FUN_00cedaa0 */
GEN_LIB GEN_FRAME unsigned int F_00cedaa0(GEN_P(float * in_eax, unsigned int gen_a0), GEN_P(float * in_ecx, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcedaa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_eax = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar1 = *param_3 + *in_ecx;
  fVar3 = param_3[1] + in_ecx[1];
  fVar5 = param_3[2] + in_ecx[2];
  fVar6 = param_3[3] + in_ecx[3];
  fVar7 = *in_ecx - *param_3;
  fVar8 = in_ecx[1] - param_3[1];
  fVar9 = in_ecx[2] - param_3[2];
  fVar10 = in_ecx[3] - param_3[3];
  fVar11 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x1130584));
  fVar12 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x1130588));
  fVar3 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x113058c));
  fVar2 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x1130570));
  fVar4 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x1130574));
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x1130578));
  fVar7 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x113057c));
  in_eax[-3] = gen_bits2f((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar5;
  in_eax[-2] = fVar11 + fVar6;
  in_eax[-1] = fVar12 + fVar5;
  *in_eax = fVar3 + fVar6;
  in_eax[-7] = fVar2 + fVar9;
  in_eax[-6] = fVar4 + fVar10;
  in_eax[-5] = fVar8 + fVar9;
  in_eax[-4] = fVar7 + fVar10;
  return 0;
}

/* ref: FUN_00cedaf0 */
GEN_LIB GEN_FRAME unsigned int F_00cedaf0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcedaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  uint uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float * pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar4 = *(float *)&REFG(undefined, 0x11305a0);
  uVar1 = param_3 + param_4 * 4;
  uVar7 = uVar1 + in_edx * -0x40;
  fVar2 = *((float *)GEN_TOP((param_5 + (in_eax >> 3) * 4)));
  if (uVar7 < uVar1) {
    pfVar5 = ((float *)GEN_TOP((uVar1 - 0x3c)));
    iVar6 = ((uVar1 - uVar7) - 1 >> 6) + 1;
    do {
      fVar9 = pfVar5[0xe];
      fVar10 = pfVar5[0xf];
      fVar26 = pfVar5[0xc] - pfVar5[4];
      fVar27 = pfVar5[0xd] - pfVar5[5];
      fVar14 = pfVar5[4] + pfVar5[0xc];
      fVar16 = pfVar5[5] + pfVar5[0xd];
      fVar18 = pfVar5[6] + fVar9;
      fVar20 = pfVar5[7] + fVar10;
      uVar8 = (uint)gen_fl2bits(pfVar5[8] - *pfVar5) ^ *(uint *)&REFG(undefined, 0x1130560);
      fVar11 = gen_bits2f((uint)gen_fl2bits(pfVar5[9] - pfVar5[1]) ^ *(uint *)&REFG(undefined, 0x1130564));
      fVar12 = gen_bits2f((uint)gen_fl2bits(pfVar5[10] - pfVar5[2]) ^ *(uint *)&REFG(undefined, 0x1130568));
      fVar13 = gen_bits2f((uint)gen_fl2bits(pfVar5[0xb] - pfVar5[3]) ^ *(uint *)&REFG(undefined, 0x113056c));
      fVar22 = *pfVar5 + pfVar5[8];
      fVar23 = pfVar5[1] + pfVar5[9];
      fVar24 = pfVar5[2] + pfVar5[10];
      fVar25 = pfVar5[3] + pfVar5[0xb];
      fVar15 = fVar22 + fVar14;
      fVar17 = fVar23 + fVar16;
      fVar19 = fVar24 + fVar18;
      fVar21 = fVar25 + fVar20;
      fVar14 = fVar14 - fVar22;
      fVar16 = fVar16 - fVar23;
      fVar18 = fVar18 - fVar24;
      fVar20 = fVar20 - fVar25;
      fVar24 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x1130584));
      fVar25 = gen_bits2f((uint)gen_fl2bits(fVar15) ^ *(uint *)&REFG(undefined, 0x1130588));
      fVar17 = gen_bits2f((uint)gen_fl2bits(fVar17) ^ *(uint *)&REFG(undefined, 0x113058c));
      fVar22 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x1130570));
      fVar23 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130574));
      fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ *(uint *)&REFG(undefined, 0x1130578));
      fVar14 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x113057c));
      pfVar5[0xc] = gen_bits2f((uint)gen_fl2bits(fVar15) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar19;
      pfVar5[0xd] = fVar24 + fVar21;
      pfVar5[0xe] = fVar25 + fVar19;
      pfVar5[0xf] = fVar17 + fVar21;
      uVar3 = *(uint *)&REFG(undefined, 0x113059c);
      uVar7 = *(uint *)&REFG(undefined, 0x1130598);
      uVar1 = *(uint *)&REFG(undefined, 0x1130590);
      pfVar5[8] = fVar22 + fVar18;
      pfVar5[9] = fVar23 + fVar20;
      pfVar5[10] = fVar16 + fVar18;
      pfVar5[0xb] = fVar14 + fVar20;
      fVar23 = (gen_bits2f(uVar8 ^ *(uint *)&REFG(undefined, 0x1130550)) + fVar11) * fVar2;
      fVar18 = (gen_bits2f(uVar8 ^ *(uint *)&REFG(undefined, 0x1130554)) + fVar11) * fVar2;
      fVar19 = (gen_bits2f(uVar1 ^ *(uint *)&REFG(undefined, 0x1130558)) + fVar13) * fVar4;
      fVar12 = (gen_bits2f(uVar1 ^ *(uint *)&REFG(undefined, 0x113055c)) + fVar12) * fVar4;
      fVar22 = (gen_bits2f((uint)gen_fl2bits(fVar27) ^ *(uint *)&REFG(undefined, 0x1130550)) + fVar26) * fVar2;
      fVar14 = (gen_bits2f((uint)gen_fl2bits(fVar26) ^ *(uint *)&REFG(undefined, 0x1130554)) + fVar27) * fVar2;
      fVar16 = (gen_bits2f(uVar3 ^ *(uint *)&REFG(undefined, 0x1130558)) + (fVar9 - pfVar5[6])) * fVar4;
      fVar17 = (gen_bits2f(uVar7 ^ *(uint *)&REFG(undefined, 0x113055c)) + (fVar10 - pfVar5[7])) * fVar4;
      fVar9 = fVar23 + fVar22;
      fVar11 = fVar18 + fVar14;
      fVar13 = fVar19 + fVar16;
      fVar15 = fVar12 + fVar17;
      fVar22 = fVar22 - fVar23;
      fVar14 = fVar14 - fVar18;
      fVar16 = fVar16 - fVar19;
      fVar17 = fVar17 - fVar12;
      fVar23 = gen_bits2f((uint)gen_fl2bits(fVar11) ^ *(uint *)&REFG(undefined, 0x1130584));
      fVar18 = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x1130588));
      fVar11 = gen_bits2f((uint)gen_fl2bits(fVar11) ^ *(uint *)&REFG(undefined, 0x113058c));
      fVar10 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130570));
      fVar12 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ *(uint *)&REFG(undefined, 0x1130574));
      fVar14 = gen_bits2f((uint)gen_fl2bits(fVar14) ^ *(uint *)&REFG(undefined, 0x1130578));
      fVar22 = gen_bits2f((uint)gen_fl2bits(fVar22) ^ *(uint *)&REFG(undefined, 0x113057c));
      pfVar5[4] = gen_bits2f((uint)gen_fl2bits(fVar9) ^ *(uint *)&REFG(undefined, 0x1130580)) + fVar13;
      pfVar5[5] = fVar23 + fVar15;
      pfVar5[6] = fVar18 + fVar13;
      pfVar5[7] = fVar11 + fVar15;
      *pfVar5 = fVar10 + fVar16;
      pfVar5[1] = fVar12 + fVar17;
      pfVar5[2] = fVar14 + fVar16;
      pfVar5[3] = fVar22 + fVar17;
      pfVar5 = pfVar5 - 0x10;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00cedc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cedc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcedc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10094, 12, 4);
  float * pfVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * puVar5;
  float * pfVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  float * pfVar16;
  float * pfVar17;
  int iVar18;
  float * pfVar19;
  float * pfVar20;
  uint uVar21;
  ushort * puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint * puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  uint uVar46;
  float fVar47;
  uint uVar48;
  
  uVar48 = *(uint *)&REFG(undefined, 0x113059c);
  uVar46 = *(uint *)&REFG(undefined, 0x1130598);
  uVar44 = *(uint *)&REFG(undefined, 0x1130594);
  uVar42 = *(uint *)&REFG(undefined, 0x1130590);
  uVar15 = *(uint *)&REFG(undefined, 0x113056c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130568);
  uVar24 = *(uint *)&REFG(undefined, 0x1130564);
  uVar21 = *(uint *)&REFG(undefined, 0x1130560);
  (*(uint *)(gen_frame + 0x1008c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar26 = (int)param_1 >> 1;
  iVar18 = (int)param_1 >> 2;
  (*(uint *)(gen_frame + 0x10078)) = (int)param_1 >> 3;
  (*(int *)(gen_frame + 0x1004c)) = iVar26;
  (*(float * PTR32 *)(gen_frame + 0x10068)) = ((float *)GEN_TOP(iVar18));
  ((int *)(gen_frame + 0x10000))[0xe] = 0xcedc58;
  iVar25 = -(iVar26 * 4 + 0xf);
  pfVar6 = *((float * PTR32 *)GEN_TOP((param_2 + 0x400 + param_3 * 4)));
  (*(float * PTR32 *)(gen_frame + 0x10064)) = pfVar6;
  (*(float * PTR32 *)(gen_frame + 0x10084)) = pfVar6;
  pfVar17 = ((float *)GEN_TOP(((int)this + iVar26 * 4)));
  (*(float * PTR32 *)(gen_frame + 0x10054)) = pfVar17;
  pfVar16 = ((float *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x10048)) + iVar25 + 3 & 0xfffffff0)));
  pfVar19 = pfVar16 + iVar26 - 4;
  iVar23 = (int)pfVar6 + ((iVar26 * 4 - 0x10) - (int)pfVar19);
  (*(float * PTR32 *)(gen_frame + 0x10058)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0x10050)) = pfVar19;
  (*(float * PTR32 *)(gen_frame + 0x10080)) = pfVar19;
  (*(float * PTR32 *)(gen_frame + 0x1007c)) = this;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = pfVar16;
  (*(int *)(gen_frame + 0x1006c)) = iVar23;
  do {
    fVar29 = *(*(float * PTR32 *)(gen_frame + 0x10084));
    fVar32 = (*(float * PTR32 *)(gen_frame + 0x10084))[1];
    fVar35 = (*(float * PTR32 *)(gen_frame + 0x10084))[2];
    fVar38 = (*(float * PTR32 *)(gen_frame + 0x10084))[3];
    pfVar19 = ((float *)GEN_TOP((iVar23 + (int)(*(float * PTR32 *)(gen_frame + 0x10080)))));
    fVar40 = *pfVar19;
    fVar41 = pfVar19[1];
    fVar43 = pfVar19[2];
    fVar45 = pfVar19[3];
    fVar47 = (*(float * PTR32 *)(gen_frame + 0x1007c))[4];
    fVar8 = (*(float * PTR32 *)(gen_frame + 0x1007c))[5];
    fVar28 = (*(float * PTR32 *)(gen_frame + 0x1007c))[6];
    fVar31 = (*(float * PTR32 *)(gen_frame + 0x1007c))[7];
    fVar34 = *(*(float * PTR32 *)(gen_frame + 0x1007c));
    fVar37 = (*(float * PTR32 *)(gen_frame + 0x1007c))[1];
    fVar9 = (*(float * PTR32 *)(gen_frame + 0x1007c))[2];
    fVar10 = (*(float * PTR32 *)(gen_frame + 0x1007c))[3];
    (*(float * PTR32 *)(gen_frame + 0x10084)) = (*(float * PTR32 *)(gen_frame + 0x10084)) + 4;
    *(*(float * PTR32 *)(gen_frame + 0x10080)) = gen_bits2f((uint)gen_fl2bits(fVar35) ^ uVar21) * fVar28 + fVar47 * fVar38;
    (*(float * PTR32 *)(gen_frame + 0x10080))[1] = gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar24) * fVar28 + fVar47 * fVar35;
    (*(float * PTR32 *)(gen_frame + 0x10080))[2] = gen_bits2f((uint)gen_fl2bits(fVar29) ^ uVar14) * fVar9 + fVar34 * fVar32;
    (*(float * PTR32 *)(gen_frame + 0x10080))[3] = gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar15) * fVar9 + fVar34 * fVar29;
    (*(float * PTR32 *)(gen_frame + 0x10080)) = (*(float * PTR32 *)(gen_frame + 0x10080)) - 4;
    pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1007c)) + 8;
    *(*(float * PTR32 *)(gen_frame + 0x10088)) = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar43) ^ uVar21) * fVar37
                                            + fVar10 * fVar45) ^ uVar42);
    (*(float * PTR32 *)(gen_frame + 0x10088))[1] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar45) ^ uVar24) *
                                              fVar37 + fVar10 * fVar43) ^ uVar44);
    (*(float * PTR32 *)(gen_frame + 0x10088))[2] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar40) ^ uVar14) * fVar8
                                              + fVar31 * fVar41) ^ uVar46);
    (*(float * PTR32 *)(gen_frame + 0x10088))[3] = gen_bits2f((uint)gen_fl2bits(gen_bits2f((uint)gen_fl2bits(fVar41) ^ uVar15) * fVar8
                                              + fVar31 * fVar40) ^ uVar48);
    (*(float * PTR32 *)(gen_frame + 0x10088)) = (*(float * PTR32 *)(gen_frame + 0x10088)) + 4;
    (*(float * PTR32 *)(gen_frame + 0x1007c)) = pfVar19;
  } while (pfVar19 != pfVar17);
  pfVar17 = pfVar6 + iVar26 - 8;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = pfVar17;
  (*(int *)(gen_frame + 0x1006c)) = iVar18 * 4;
  (*(float * PTR32 *)(gen_frame + 0x10070)) = pfVar16 + iVar18;
  pfVar19 = ((float *)GEN_TOP((iVar18 * 4 + (int)this)));
  (*(float * PTR32 *)(gen_frame + 0x10084)) = pfVar19;
  if (pfVar6 <= pfVar17) {
    (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(((int)pfVar16 - (int)this)));
    pfVar20 = pfVar19 - iVar18;
    iVar18 = (int)(pfVar16 + iVar18) - (int)pfVar19;
    (*(int *)(gen_frame + 0x1006c)) = iVar18;
    do {
      fVar29 = *pfVar17;
      fVar32 = pfVar17[1];
      fVar35 = pfVar17[4];
      fVar38 = pfVar17[5];
      pfVar1 = ((float *)GEN_TOP((iVar18 + (int)pfVar19)));
      fVar40 = pfVar1[1];
      fVar41 = pfVar1[2];
      fVar43 = pfVar1[3];
      pfVar2 = ((float *)GEN_TOP((((int)pfVar16 - (int)this) + (int)pfVar20)));
      fVar45 = pfVar2[1];
      fVar47 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar28 = *pfVar1 - *pfVar2;
      fVar31 = fVar40 - fVar45;
      fVar34 = fVar41 - fVar47;
      fVar37 = fVar43 - fVar8;
      *pfVar19 = *pfVar2 + *pfVar1;
      pfVar19[1] = fVar45 + fVar40;
      pfVar19[2] = fVar47 + fVar41;
      pfVar19[3] = fVar8 + fVar43;
      pfVar19 = pfVar19 + 4;
      pfVar17 = pfVar17 - 8;
      (*(float * PTR32 *)(gen_frame + 0x10084)) = pfVar19;
      *pfVar20 = fVar31 * gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar21) + fVar28 * fVar35;
      pfVar20[1] = fVar28 * gen_bits2f((uint)gen_fl2bits(fVar38) ^ uVar24) + fVar31 * fVar35;
      pfVar20[2] = fVar37 * gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar14) + fVar34 * fVar29;
      pfVar20[3] = fVar34 * gen_bits2f((uint)gen_fl2bits(fVar32) ^ uVar15) + fVar37 * fVar29;
      pfVar20 = pfVar20 + 4;
      (*(float * PTR32 *)(gen_frame + 0x10088)) = pfVar17;
    } while (pfVar6 <= pfVar17);
  }
  iVar18 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar18 == 0; iVar18 = iVar18 - 1) {
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x10084)) = ((float *)GEN_TOP(iVar18));
  if (param_1 != 0) {
    (*(float * PTR32 *)(gen_frame + 0x10084)) = ((float *)GEN_TOP((iVar18 + 1)));
  }
  *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))) = pfVar6;
  uVar21 = -((int)param_1 >> 3);
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))) = -(int)(*(float * PTR32 *)(gen_frame + 0x10068));
  *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))) = uVar21;
  (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(uVar21));
  (*(int *)(gen_frame + 0x1006c)) = (int)param_1 >> 4;
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))) = (int)param_1 >> 4;
  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))) = 0xcede05;
  F_00ced6a0(iVar26 - 1,this,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))) = 0x10;
  *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x24))) = pfVar17;
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064));
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x20))) = -(*(int *)(gen_frame + 0x1006c));
  (*(float * PTR32 *)(gen_frame + 0x10070)) = ((float *)GEN_TOP(-(*(int *)(gen_frame + 0x1006c))));
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x1c))) = iVar26 - 1;
  (*(int *)(gen_frame + 0x1006c)) = (int)param_1 >> 5;
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x18))) = (int)param_1 >> 5;
  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x14))) = 0xcede2c;
  F_00ced810(this,pfVar17,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x18))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x1c))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x20))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x24))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))));
  pfVar19 = (*(float * PTR32 *)(gen_frame + 0x1007c));
  uVar21 = (*(uint *)(gen_frame + 0x10078));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x14))) = 0x10;
  *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x10))) = pfVar19;
  *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0xc))) = pfVar17;
  iVar18 = (*(int *)(gen_frame + 0x1006c));
  *((uint *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 8))) = iVar26 + uVar21 * -2 - 1;
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 4))) = iVar18;
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064));
  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25))) = 0xcede50;
  F_00ced810(this,pfVar17,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 4))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 8))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0xc))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x10))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x14))));
  iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10084)) - 4 >> 1;
  (*(float * PTR32 *)(gen_frame + 0x10088)) = ((float *)GEN_TOP(0x2));
  (*(int *)(gen_frame + 0x10074)) = iVar18;
  uVar21 = 4;
  if (2 < iVar18) {
    do {
      bVar7 = (byte)(*(float * PTR32 *)(gen_frame + 0x10088));
      iVar18 = (int)param_1 >> GEN_SHC(bVar7 + 2, bVar7 + 2);
      uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
      (*(uint *)(gen_frame + 0x10078)) = uVar21;
      (*(float * PTR32 *)(gen_frame + 0x10070)) = ((float *)GEN_TOP((iVar18 >> 1)));
      uVar24 = 1 << GEN_SHC(bVar7, bVar7) | 1U >> 0x20 - (bVar7 & 0x1f);
      (*(undefined * PTR32 *)(gen_frame + 0x10060)) = ((undefined *)GEN_TOP(uVar24));
      if (0 < (int)uVar21) {
        (*(int *)(gen_frame + 0x10044)) = -iVar18;
        (*(int *)(gen_frame + 0x1005c)) = iVar18 * -2;
        (*(float * PTR32 *)(gen_frame + 0x10080)) = ((float *)GEN_TOP((iVar26 - 1)));
        (*(int *)(gen_frame + 0x10048)) = -(iVar18 >> 1);
        (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP((uVar24 << 3 | uVar24 >> 0x1d)));
        (*(uint *)(gen_frame + 0x10078)) = (uVar21 - 1 >> 1) + 1;
        (*(float * PTR32 *)(gen_frame + 0x10070)) = ((float *)GEN_TOP(((int)param_1 >> GEN_SHC(bVar7 + 4, bVar7 + 4))));
        do {
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10070));
          iVar18 = (*(int *)(gen_frame + 0x10044));
          *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))) = (*(float * PTR32 *)(gen_frame + 0x1007c));
          iVar23 = (*(int *)(gen_frame + 0x10048));
          *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))) = iVar18;
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10080));
          *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))) = iVar23;
          *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))) = pfVar19;
          *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))) = pfVar17;
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10064));
          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x24))) = 0xcedefe;
          F_00ced810(this,pfVar17,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))));
          (*(float * PTR32 *)(gen_frame + 0x10080)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x10080)) + (*(int *)(gen_frame + 0x1005c)))));
          uVar21 = (*(uint *)(gen_frame + 0x10078)) - 1;
          (*(uint *)(gen_frame + 0x10078)) = uVar21;
        } while (uVar21 != 0);
      }
      iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10088)) + 1;
      uVar21 = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x10060))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x10060)) < 0);
      (*(float * PTR32 *)(gen_frame + 0x10088)) = ((float *)GEN_TOP(iVar18));
    } while (iVar18 < (*(int *)(gen_frame + 0x10074)));
  }
  iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10084)) - 7;
  bVar7 = (byte)(*(float * PTR32 *)(gen_frame + 0x10088)) & 0x1f;
  pfVar17 = ((float *)GEN_TOP((1 << bVar7 | 1U >> 0x20 - bVar7)));
  if ((int)(*(float * PTR32 *)(gen_frame + 0x10088)) < iVar18) {
    (*(float * PTR32 *)(gen_frame + 0x10084)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x10088)) + 6)));
    (*(float * PTR32 *)(gen_frame + 0x10070)) = ((float *)GEN_TOP((iVar18 - (int)(*(float * PTR32 *)(gen_frame + 0x10088)))));
    do {
      uVar24 = (int)param_1 >> GEN_SHC((byte)(*(float * PTR32 *)(gen_frame + 0x10084)) - 4, (byte)(*(float * PTR32 *)(gen_frame + 0x10084)) - 4);
      uVar21 = (int)((int)(uintptr_t)pfVar17) << 3 | (uint)((int)(uintptr_t)pfVar17) >> 0x1d;
      (*(uint *)(gen_frame + 0x10078)) = uVar21;
      iVar18 = (int)uVar24 >> 1;
      (*(float * PTR32 *)(gen_frame + 0x10088)) = ((float *)GEN_TOP((iVar26 - 1)));
      (*(int *)(gen_frame + 0x10074)) = iVar18;
      iVar26 = (int)param_1 >> GEN_SHC((byte)(*(float * PTR32 *)(gen_frame + 0x10084)), (byte)(*(float * PTR32 *)(gen_frame + 0x10084)));
      (*(float * PTR32 *)(gen_frame + 0x1007c)) = ((float *)GEN_TOP(((int)((int)(uintptr_t)pfVar17) << 1 | (uint)((int)pfVar17 < 0))));
      (*(undefined * PTR32 *)(gen_frame + 0x10060)) = ((undefined *)GEN_TOP(uVar24));
      (*(float * PTR32 *)(gen_frame + 0x10080)) = (*(float * PTR32 *)(gen_frame + 0x10064));
      if (0 < iVar26) {
        (*(int *)(gen_frame + 0x10074)) = -iVar18;
        (*(int *)(gen_frame + 0x1005c)) = uVar21 << 4;
        do {
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10088));
          iVar18 = (*(int *)(gen_frame + 0x10074));
          *((undefined * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))) = (*(undefined * PTR32 *)(gen_frame + 0x10060));
          pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
          *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))) = iVar18;
          uVar21 = (*(uint *)(gen_frame + 0x10078));
          *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))) = pfVar19;
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10080));
          *((undefined * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))) = this;
          *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))) = pfVar17;
          *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x24))) = 0xcedfac;
          F_00ced9b0(uVar21,pfVar19,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x28))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))),
                       *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))));
          (*(float * PTR32 *)(gen_frame + 0x10080)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x10080)) + (*(int *)(gen_frame + 0x1005c)))));
          (*(float * PTR32 *)(gen_frame + 0x10088)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x10088)) - 8)));
          iVar26 = iVar26 - 1;
        } while (0 < iVar26);
      }
      (*(float * PTR32 *)(gen_frame + 0x10084)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x10084)) + 1)));
      iVar18 = (int)(*(float * PTR32 *)(gen_frame + 0x10070)) - 1;
      (*(float * PTR32 *)(gen_frame + 0x10070)) = ((float *)GEN_TOP(iVar18));
      pfVar17 = (*(float * PTR32 *)(gen_frame + 0x1007c));
      iVar26 = (*(int *)(gen_frame + 0x1004c));
    } while (iVar18 != 0);
  }
  iVar18 = (*(int *)(gen_frame + 0x1006c));
  *((float * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))) = (*(float * PTR32 *)(gen_frame + 0x10064));
  *((int *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))) = iVar26 - 1;
  *((undefined * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))) = this;
  *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x2c))) = 0xcedfe9;
  F_00cedaf0(param_1,iVar18,*((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x30))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x34))),
               *((undefined4 *)GEN_TOP(((int)((int *)(gen_frame + 0x10000)) + iVar25 + 0x38))));
  puVar22 = *((ushort * PTR32 *)GEN_TOP((param_2 + 0x420 + param_3 * 4)));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10058)) + (int)(*(float * PTR32 *)(gen_frame + 0x10068)) - 4;
  if ((*(float * PTR32 *)(gen_frame + 0x10058)) <= pfVar17) {
    iVar25 = (int)(*(float * PTR32 *)(gen_frame + 0x10050)) - (int)pfVar17;
    (*(int *)(gen_frame + 0x10074)) = iVar25;
    do {
      puVar3 = ((undefined4 *)GEN_TOP(((int)this + (uint)*puVar22 * 4)));
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      fVar29 = gen_bits2f(puVar3[2]);
      fVar32 = gen_bits2f(puVar3[3]);
      puVar3 = ((undefined4 *)GEN_TOP(((int)this + (uint)puVar22[1] * 4)));
      uVar13 = *puVar3;
      fVar35 = gen_bits2f(puVar3[2]);
      fVar38 = gen_bits2f(puVar3[3]);
      puVar4 = ((undefined4 *)GEN_TOP((iVar25 + (int)pfVar17)));
      *puVar4 = puVar3[1];
      puVar4[1] = uVar13;
      puVar4[2] = uVar12;
      puVar4[3] = uVar11;
      *pfVar17 = fVar38;
      pfVar17[1] = fVar35;
      pfVar17[2] = fVar32;
      pfVar17[3] = fVar29;
      pfVar17 = pfVar17 - 4;
      puVar22 = puVar22 + 2;
    } while ((*(float * PTR32 *)(gen_frame + 0x10058)) <= pfVar17);
  }
  uVar15 = *(uint *)&REFG(undefined, 0x113056c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130568);
  uVar24 = *(uint *)&REFG(undefined, 0x1130564);
  uVar21 = *(uint *)&REFG(undefined, 0x1130560);
  (*(float * PTR32 *)(gen_frame + 0x10080)) = (float *)*((uint * PTR32 *)GEN_TOP((param_2 + 0x410 + param_3 * 4)));
  (*(float * PTR32 *)(gen_frame + 0x10068)) = (*(float * PTR32 *)(gen_frame + 0x10058));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10050));
  if ((*(float * PTR32 *)(gen_frame + 0x10058)) < (*(float * PTR32 *)(gen_frame + 0x10050))) {
    do {
      uVar42 = (uint)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x10080)));
      pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10080)) + 1;
      puVar27 = (uint *)((*(float * PTR32 *)(gen_frame + 0x10080)) + 2);
      pfVar6 = (*(float * PTR32 *)(gen_frame + 0x10080)) + 3;
      (*(float * PTR32 *)(gen_frame + 0x10080)) = (*(float * PTR32 *)(gen_frame + 0x10080)) + 4;
      fVar41 = *(*(float * PTR32 *)(gen_frame + 0x10068)) + gen_bits2f((uint)gen_fl2bits(pfVar17[2]) ^ uVar21);
      fVar43 = (*(float * PTR32 *)(gen_frame + 0x10068))[1] + gen_bits2f((uint)gen_fl2bits(pfVar17[3]) ^ uVar24);
      fVar45 = (*(float * PTR32 *)(gen_frame + 0x10068))[2] + gen_bits2f((uint)gen_fl2bits(*pfVar17) ^ uVar14);
      fVar47 = (*(float * PTR32 *)(gen_frame + 0x10068))[3] + gen_bits2f((uint)gen_fl2bits(pfVar17[1]) ^ uVar15);
      fVar29 = *(*(float * PTR32 *)(gen_frame + 0x10068)) - gen_bits2f((uint)gen_fl2bits(pfVar17[2]) ^ uVar21);
      fVar32 = (*(float * PTR32 *)(gen_frame + 0x10068))[1] - gen_bits2f((uint)gen_fl2bits(pfVar17[3]) ^ uVar24);
      fVar35 = (*(float * PTR32 *)(gen_frame + 0x10068))[2] - gen_bits2f((uint)gen_fl2bits(*pfVar17) ^ uVar14);
      fVar38 = (*(float * PTR32 *)(gen_frame + 0x10068))[3] - gen_bits2f((uint)gen_fl2bits(pfVar17[1]) ^ uVar15);
      fVar40 = fVar32 * gen_bits2f(uVar42 ^ uVar21) + fVar29 * *pfVar19;
      fVar29 = fVar29 * gen_bits2f(uVar42 ^ uVar24) + fVar32 * *pfVar19;
      fVar32 = fVar38 * gen_bits2f(*puVar27 ^ uVar14) + fVar35 * *pfVar6;
      fVar35 = fVar35 * gen_bits2f(*puVar27 ^ uVar15) + fVar38 * *pfVar6;
      *(*(float * PTR32 *)(gen_frame + 0x10068)) = fVar40 + fVar41;
      (*(float * PTR32 *)(gen_frame + 0x10068))[1] = fVar29 + fVar43;
      (*(float * PTR32 *)(gen_frame + 0x10068))[2] = fVar32 + fVar45;
      (*(float * PTR32 *)(gen_frame + 0x10068))[3] = fVar35 + fVar47;
      *pfVar17 = gen_bits2f((uint)gen_fl2bits(fVar45 - fVar32) ^ uVar14);
      pfVar17[1] = gen_bits2f((uint)gen_fl2bits(fVar47 - fVar35) ^ uVar15);
      pfVar17[2] = gen_bits2f((uint)gen_fl2bits(fVar41 - fVar40) ^ uVar21);
      pfVar17[3] = gen_bits2f((uint)gen_fl2bits(fVar43 - fVar29) ^ uVar24);
      pfVar19 = (*(float * PTR32 *)(gen_frame + 0x10068)) + 4;
      pfVar17 = pfVar17 - 4;
      (*(float * PTR32 *)(gen_frame + 0x10068)) = pfVar19;
    } while (pfVar19 < pfVar17);
  }
  uVar15 = *(uint *)&REFG(undefined, 0x113059c);
  uVar14 = *(uint *)&REFG(undefined, 0x1130598);
  uVar24 = *(uint *)&REFG(undefined, 0x1130594);
  uVar21 = *(uint *)&REFG(undefined, 0x1130590);
  pfVar19 = ((float *)GEN_TOP((*((int *)GEN_TOP((param_2 + 0x408 + param_3 * 4))) + iVar26 * 4 - 0x20)));
  pfVar17 = (*(float * PTR32 *)(gen_frame + 0x10058)) + iVar26 - 8;
  iVar25 = (int)this + param_1 * 4 - 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x10060)) = this;
  puVar27 = ((uint *)GEN_TOP(((int)this + iVar26 * 4 - 0x10)));
  (*(int *)(gen_frame + 0x10074)) = iVar25;
  if ((*(float * PTR32 *)(gen_frame + 0x10058)) <= pfVar17) {
    iVar26 = (int)(*(float * PTR32 *)(gen_frame + 0x10054)) - (int)this;
    iVar25 = iVar25 - (int)puVar27;
    (*(int *)(gen_frame + 0x10074)) = iVar25;
    (*(int *)(gen_frame + 0x1005c)) = iVar26;
    do {
      fVar29 = *pfVar19;
      fVar32 = pfVar19[1];
      fVar35 = pfVar19[2];
      fVar38 = pfVar19[3];
      fVar40 = pfVar19[4];
      fVar41 = pfVar19[5];
      fVar43 = pfVar19[6];
      fVar45 = pfVar19[7];
      fVar47 = pfVar17[4];
      fVar8 = pfVar17[5];
      fVar28 = pfVar17[6];
      fVar31 = pfVar17[7];
      fVar34 = *pfVar17;
      fVar37 = pfVar17[1];
      fVar9 = pfVar17[2];
      fVar10 = pfVar17[3];
      fVar30 = fVar28 * fVar45 - fVar31 * fVar43;
      fVar33 = fVar47 * fVar41 - fVar8 * fVar40;
      fVar36 = fVar9 * fVar38 - fVar10 * fVar35;
      fVar39 = fVar34 * fVar32 - fVar37 * fVar29;
      *(float *)this = fVar30;
      *((float *)GEN_TOP(((int)this + 4))) = fVar33;
      *((float *)GEN_TOP(((int)this + 8))) = fVar36;
      *((float *)GEN_TOP(((int)this + 0xc))) = fVar39;
      uVar42 = (uint)gen_fl2bits(fVar28 * fVar43 + fVar31 * fVar45) ^ uVar21;
      uVar44 = (uint)gen_fl2bits(fVar47 * fVar40 + fVar8 * fVar41) ^ uVar24;
      uVar46 = (uint)gen_fl2bits(fVar9 * fVar35 + fVar10 * fVar38) ^ uVar14;
      uVar48 = (uint)gen_fl2bits(fVar34 * fVar29 + fVar37 * fVar32) ^ uVar15;
      *puVar27 = (uint)gen_fl2bits(fVar39) ^ uVar15;
      puVar27[1] = (uint)gen_fl2bits(fVar36) ^ uVar14;
      puVar27[2] = (uint)gen_fl2bits(fVar33) ^ uVar24;
      puVar27[3] = (uint)gen_fl2bits(fVar30) ^ uVar21;
      puVar5 = ((uint *)GEN_TOP((iVar26 + (int)this)));
      *puVar5 = uVar42;
      puVar5[1] = uVar44;
      puVar5[2] = uVar46;
      puVar5[3] = uVar48;
      puVar5 = ((uint *)GEN_TOP((iVar25 + (int)puVar27)));
      *puVar5 = uVar48;
      puVar5[1] = uVar46;
      puVar5[2] = uVar44;
      puVar5[3] = uVar42;
      pfVar17 = pfVar17 - 8;
      pfVar19 = pfVar19 - 8;
      this = ((undefined *)GEN_TOP(((int)this + 0x10)));
      puVar27 = puVar27 - 4;
    } while ((*(float * PTR32 *)(gen_frame + 0x10058)) <= pfVar17);
  }
  (*(undefined4 *)(gen_frame + 0x10040)) = 0xcee1a1;
  return (uint)pfVar17;
}

/* ref: FUN_00cee1d0 */
GEN_LIB GEN_FRAME uint F_00cee1d0(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(short * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcee1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(short * param_6 = (short *)(uintptr_t)gen_a5;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_8;
  
  iVar1 = in_eax >> 1;
  uVar2 = (uint)*((byte *)GEN_TOP((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_3 + 4))) + 2 + param_4 * 3))) + 9 + param_3)));
  if (*((short *)GEN_TOP((in_ecx + 0x50 + uVar2 * 2))) == 0) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = 0x15;
    if (*((int *)GEN_TOP((in_ecx + 0x34))) == 0) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = 0x15;
    }
    return 0;
  }
  iVar3 = uVar2 * 0xa24 + *((int *)GEN_TOP((in_ecx + 0xd0)));
  iVar10 = (int)*param_6 * (uint)*((byte *)GEN_TOP((iVar3 + 0xa1c)));
  uVar2 = 0;
  param_3 = 0;
  local_8 = 1;
  uVar9 = uVar2;
  iVar11 = iVar10;
  if (1 < *((int *)GEN_TOP((iVar3 + 0xa20)))) {
    do {
      uVar12 = (uint)*((byte *)GEN_TOP((iVar3 + 0x346 + local_8)));
      uVar2 = uVar9;
      iVar10 = iVar11;
      if (-1 < param_6[uVar12]) {
        uVar2 = (uint)*((ushort *)GEN_TOP((iVar3 + 0x152 + uVar12 * 2)));
        iVar10 = (int)param_6[uVar12] * (uint)*((byte *)GEN_TOP((iVar3 + 0xa1c)));
        uVar9 = uVar2 - uVar9;
        iVar4 = iVar10 - iVar11;
        if (iVar4 < 0) {
          uVar5 = (uint)(iVar4 * -0x1000000) / uVar9;
          uVar12 = iVar11 * -0x1000000;
          if ((uVar9 & uVar9 - 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = param_3 + 1;
          *((float *)GEN_TOP((param_5 - 4 + uVar9 * 4))) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar11 * 4) *
                      (float10)*((float *)GEN_TOP((param_5 + param_3 * 4))))));
          param_3 = uVar2;
          if (uVar9 < uVar2) {
            if (3 < (int)(uVar2 - uVar9)) {
              param_4 = ((uVar2 - uVar9) - 4 >> 2) + 1;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + param_4 * 4;
              pfVar6 = ((float *)GEN_TOP((param_5 + 8 + iVar11)));
              do {
                uVar7 = uVar12 + uVar5 + uVar5;
                pfVar6[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) +
                                                        (int)((uVar12 + uVar5 >> 0x18) * -4)) *
                                    (float10)pfVar6[-2])));
                uVar8 = uVar7 + uVar5;
                pfVar6[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar7 >> 0x18) * -4)) *
                                    (float10)pfVar6[-1])));
                uVar12 = uVar8 + uVar5;
                *pfVar6 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar8 >> 0x18) * -4)) *
                                 (float10)*pfVar6)));
                param_4 = param_4 - 1;
                pfVar6[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar12 >> 0x18) * -4)) *
                                   (float10)pfVar6[1])));
                pfVar6 = pfVar6 + 4;
              } while (param_4 != 0);
            }
            while ((int)uVar9 < (int)uVar2) {
              uVar12 = uVar12 + uVar5;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + 1;
              *((float *)GEN_TOP((param_5 - 4 + uVar9 * 4))) =
                   ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined1, 0x134fbc0) + (int)((uVar12 >> 0x18) * -4)) *
                          (float10)*((float *)GEN_TOP((param_5 + iVar11))))));
            }
          }
        }
        else {
          uVar5 = (uint)(iVar4 * 0x1000000) / uVar9;
          uVar12 = iVar11 << 0x18;
          if ((uVar9 & uVar9 - 1) != 0) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = param_3 + 1;
          *((float *)GEN_TOP((param_5 - 4 + uVar9 * 4))) =
               ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar11 * 4) *
                      (float10)*((float *)GEN_TOP((param_5 + param_3 * 4))))));
          param_3 = uVar2;
          if (uVar9 < uVar2) {
            if (3 < (int)(uVar2 - uVar9)) {
              iVar4 = ((uVar2 - uVar9) - 4 >> 2) + 1;
              iVar11 = uVar9 * 4;
              uVar9 = uVar9 + iVar4 * 4;
              pfVar6 = ((float *)GEN_TOP((param_5 + 8 + iVar11)));
              do {
                uVar7 = uVar12 + uVar5 + uVar5;
                uVar8 = uVar7 + uVar5;
                pfVar6[-2] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) +
                                                        (uVar12 + uVar5 >> 0x18) * 4) *
                                    (float10)pfVar6[-2])));
                uVar12 = uVar8 + uVar5;
                pfVar6[-1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar7 >> 0x18) * 4) *
                                    (float10)pfVar6[-1])));
                iVar4 = iVar4 - 1;
                *pfVar6 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar8 >> 0x18) * 4) *
                                 (float10)*pfVar6)));
                pfVar6[1] = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar12 >> 0x18) * 4) *
                                   (float10)pfVar6[1])));
                pfVar6 = pfVar6 + 4;
              } while (iVar4 != 0);
            }
            while ((int)uVar9 < (int)uVar2) {
              uVar12 = uVar12 + uVar5;
              uVar9 = uVar9 + 1;
              *((float *)GEN_TOP((param_5 - 4 + uVar9 * 4))) =
                   ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x134f7c0) + (uVar12 >> 0x18) * 4) *
                          (float10)*((float *)GEN_TOP((param_5 - 4 + uVar9 * 4))))));
            }
          }
        }
      }
      local_8 = local_8 + 1;
      uVar9 = uVar2;
      iVar11 = iVar10;
    } while (local_8 < *((int *)GEN_TOP((iVar3 + 0xa20))));
  }
  if ((int)uVar2 < iVar1) {
    if (3 < (int)(iVar1 - uVar2)) {
      iVar3 = ((iVar1 - uVar2) - 4 >> 2) + 1;
      iVar11 = uVar2 * 4;
      uVar2 = uVar2 + iVar3 * 4;
      pfVar6 = ((float *)GEN_TOP((param_5 + 8 + iVar11)));
      do {
        iVar3 = iVar3 - 1;
        pfVar6[-2] = ((float)GEN_TOF(((float10)pfVar6[-2] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6[-1] = ((float)GEN_TOF(((float10)pfVar6[-1] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        *pfVar6 = ((float)GEN_TOF(((float10)*pfVar6 * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6[1] = ((float)GEN_TOF(((float10)pfVar6[1] * (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
        pfVar6 = pfVar6 + 4;
      } while (iVar3 != 0);
    }
    while ((int)uVar2 < iVar1) {
      iVar11 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *((float *)GEN_TOP((param_5 - 4 + uVar2 * 4))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_5 + iVar11))) *
                  (float10)*(float *)(&REFG(undefined, 0x134f7c0) + iVar10 * 4))));
    }
  }
  return 1;
}

/* ref: FUN_00cee500 */
GEN_LIB_GS GEN_FRAME uint GEN_FASTCALL F_00cee500(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcee500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x9a4, 12, 4);
  int * piVar1;
  float * pfVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ushort * puVar12;
  uint uVar13;
  int iVar14;
  byte * pbVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  byte * pbVar19;
  float * pfVar20;
  byte * pbVar21;
  byte * pbVar22;
  undefined2 uVar23;
  undefined2 * puVar24;
  undefined4 * puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x99c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9a0));
  (*(int * PTR32 *)(gen_frame + 0x48)) = param_4;
  (*(int * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x74)) = param_2;
  *((undefined4 *)GEN_TOP((param_3 + 0x5b8))) = 0;
  *((undefined4 *)GEN_TOP((param_3 + 0x5b4))) = 0;
  if ((*((int *)GEN_TOP((param_3 + 0x34))) != 0) || (uVar13 = F_00ceb8d0(param_3), uVar13 == 0)) {
    return 0;
  }
  uVar13 = F_00cebad0(param_3,1);
  if (uVar13 != 0) {
    *((undefined4 *)GEN_TOP((param_3 + 0x38))) = 0x23;
    if (*((int *)GEN_TOP((param_3 + 0x34))) != 0) {
      return 0;
    }
    *((undefined4 *)GEN_TOP((param_3 + 0x38))) = 0x23;
    return 0;
  }
  uVar13 = *((int *)GEN_TOP((param_3 + 0x164))) - 1;
  iVar14 = 0x1f;
  if (uVar13 != 0) {
    for (; uVar13 >> iVar14 == 0; iVar14 = iVar14 - 1) {
    }
  }
  if (uVar13 != 0) {
    iVar14 = iVar14 + 1;
  }
  uVar13 = F_00cebad0(param_3,iVar14);
  if (uVar13 == 0xffffffff) {
    return 0;
  }
  if (*((int *)GEN_TOP((param_3 + 0x164))) <= (int)uVar13) {
    return 0;
  }
  iVar14 = uVar13 * 3 + 0xb4;
  (*(byte * PTR32 *)(gen_frame + 0x50)) = ((byte *)GEN_TOP((param_3 + iVar14 * 2)));
  if (*((char *)GEN_TOP((param_3 + iVar14 * 2))) == '\0') {
    iVar14 = *((int *)GEN_TOP((param_3 + 0x3c)));
    pbVar15 = ((byte *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x70)) = 0;
    (*(int *)(gen_frame + 0x68)) = iVar14;
  }
  else {
    iVar14 = *((int *)GEN_TOP((param_3 + 0x40)));
    (*(int *)(gen_frame + 0x68)) = iVar14;
    pbVar15 = ((byte *)GEN_TOP(F_00cebad0(param_3,1)));
    (*(byte * PTR32 *)(gen_frame + 0x78)) = pbVar15;
    uVar13 = F_00cebad0(param_3,1);
    (*(uint *)(gen_frame + 0x70)) = uVar13;
    pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x78));
  }
  iVar16 = iVar14 >> 1;
  (*(int *)(gen_frame + 0x6c)) = iVar16;
  if ((*(*(byte * PTR32 *)(gen_frame + 0x50)) == 0) || (pbVar15 != ((byte *)GEN_TOP(0x0)))) {
    (*(int *)(gen_frame + 0x58)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x58)) = iVar14 - *((int *)GEN_TOP((param_3 + 0x3c))) >> 2;
  }
  if ((*(*(byte * PTR32 *)(gen_frame + 0x50)) == 0) || ((*(uint *)(gen_frame + 0x70)) != 0)) {
    (*(uint *)(gen_frame + 0x70)) = iVar16;
    (*(int *)(gen_frame + 0x54)) = iVar14;
  }
  else {
    iVar16 = iVar14 * 3 - *((int *)GEN_TOP((param_3 + 0x3c))) >> 2;
    (*(uint *)(gen_frame + 0x70)) = iVar16;
    (*(int *)(gen_frame + 0x54)) = *((int *)GEN_TOP((param_3 + 0x3c))) + iVar14 * 3 >> 2;
  }
  *(*(int * PTR32 *)(gen_frame + 0x74)) = iVar16;
  *(*(int * PTR32 *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x58));
  (*(ushort * PTR32 *)(gen_frame + 0x88)) = ((ushort *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x160))) + (uint)(*(byte * PTR32 *)(gen_frame + 0x50))[1] * 0x28)));
  (*(uint *)(gen_frame + 0x98)) = 0;
  (*(uint *)(gen_frame + 0x70)) = iVar16;
  if (0 < *((int *)GEN_TOP((param_3 + 8)))) {
    (*(int *)(gen_frame + 0x4c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x94)) = ((int *)GEN_TOP((param_3 + 0x3b0)));
    do {
      ((int *)(gen_frame + 0x49c))[(int)((*(uint *)(gen_frame + 0x98)))] = 0;
      uVar13 = (uint)*((byte *)GEN_TOP((*((byte *)GEN_TOP((*(int *)((*(ushort * PTR32 *)(gen_frame + 0x88)) + 2) + 2 + (*(int *)(gen_frame + 0x4c))))) + 9 +
                              (int)(*(ushort * PTR32 *)(gen_frame + 0x88)))));
      if (*((short *)GEN_TOP((param_3 + 0x50 + uVar13 * 2))) == 0) {
        *((undefined4 *)GEN_TOP((param_3 + 0x38))) = 0x15;
        if (*((int *)GEN_TOP((param_3 + 0x34))) == 0) {
          *((undefined4 *)GEN_TOP((param_3 + 0x38))) = 0x15;
        }
        return 0;
      }
      (*(byte * PTR32 *)(gen_frame + 0x80)) = ((byte *)GEN_TOP((uVar13 * 0xa24 + *((int *)GEN_TOP((param_3 + 0xd0))))));
      uVar13 = F_00cebad0(param_3,1);
      if (uVar13 == 0) {
LAB_00ceeb8c: ;
        ((int *)(gen_frame + 0x49c))[(int)((*(uint *)(gen_frame + 0x98)))] = 1;
      }
      else {
        pbVar15 = *(byte * PTR32 *)(&REFG(undefined1, 0x134fbc4) + (uint)(*(byte * PTR32 *)(gen_frame + 0x80))[0xa1c] * 4);
        puVar24 = ((undefined2 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x94))));
        (*(byte * PTR32 *)(gen_frame + 0x78)) = pbVar15;
        iVar14 = 0x1f;
        if (pbVar15 != ((byte *)GEN_TOP(0x0))) {
          for (; (uint)((int)(uintptr_t)pbVar15) >> iVar14 == 0; iVar14 = iVar14 - 1) {
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP(0x2));
        (*(undefined2 * PTR32 *)(gen_frame + 0x7c)) = puVar24;
        if (pbVar15 != ((byte *)GEN_TOP(0x0))) {
          iVar14 = iVar14 + 1;
        }
        uVar13 = F_00cebad0(param_3,iVar14 - 1);
        *puVar24 = (short)uVar13;
        iVar14 = 0x1f;
        if ((*(byte * PTR32 *)(gen_frame + 0x78)) != ((byte *)GEN_TOP(0x0))) {
          for (; (uint)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x78))) >> iVar14 == 0; iVar14 = iVar14 - 1) {
          }
        }
        if ((*(byte * PTR32 *)(gen_frame + 0x78)) != ((byte *)GEN_TOP(0x0))) {
          iVar14 = iVar14 + 1;
        }
        uVar13 = F_00cebad0(param_3,iVar14 - 1);
        puVar24[1] = (short)uVar13;
        (*(int *)(gen_frame + 0x90)) = 0;
        if (*(*(byte * PTR32 *)(gen_frame + 0x80)) != 0) {
          do {
            uVar13 = (uint)(*(byte * PTR32 *)(gen_frame + 0x80))[(*(int *)(gen_frame + 0x90)) + 1];
            bVar3 = (*(byte * PTR32 *)(gen_frame + 0x80))[uVar13 + 0x31];
            (*(byte * PTR32 *)(gen_frame + 0x64)) = ((byte *)GEN_TOP((uint)(*(byte * PTR32 *)(gen_frame + 0x80))[uVar13 + 0x21]));
            (*(uint *)(gen_frame + 0x5c)) = uVar13;
            (*(uint *)(gen_frame + 0x40)) = (uint)bVar3;
            (*(byte * PTR32 *)(gen_frame + 0x84)) = ((byte *)GEN_TOP(0x0));
            (*(uint *)(gen_frame + 0x60)) = (1 << GEN_SHC(bVar3, bVar3)) - 1;
            if (bVar3 != 0) {
              (*(byte * PTR32 *)(gen_frame + 0x8c)) = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x48))) + (uint)(*(byte * PTR32 *)(gen_frame + 0x80))[uVar13 + 0x41] * 4)));
              if (*((int *)GEN_TOP((param_3 + 0x548))) < 8) {
                F_00cebbb0(param_3);
              }
              uVar13 = *((uint *)GEN_TOP((param_3 + 0x544)));
              uVar18 = *((uint *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x8c)) + (uVar13 & 0xff) * 4 + 0x2c)));
              if ((int)uVar18 < 0) {
                if (*((int *)GEN_TOP((param_3 + 0x548))) < 0x19) {
                  F_00cebbb0(param_3);
                }
                uVar13 = *((uint *)GEN_TOP((param_3 + 0x544)));
                uVar17 = uVar13 >> 8;
                do {
                  uVar18 = *((uint *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x8c)) + ((uVar17 & 3) + 0x80000000 + uVar18) * 4 + 0x2c)));
                  uVar17 = uVar17 >> 2;
                } while ((int)uVar18 < 0);
              }
              piVar1 = ((int *)GEN_TOP((param_3 + 0x548)));
              *piVar1 = *piVar1 - ((int)uVar18 >> 0x1a);
              *((uint *)GEN_TOP((param_3 + 0x544))) = uVar13 >> GEN_SHC((byte)((int)uVar18 >> 0x1a), (byte)((int)uVar18 >> 0x1a));
              if (*piVar1 < 0) {
                *((undefined4 *)GEN_TOP((param_3 + 0x548))) = 0;
                (*(byte * PTR32 *)(gen_frame + 0x84)) = ((byte *)GEN_TOP(0xffffffff));
              }
              else {
                (*(byte * PTR32 *)(gen_frame + 0x84)) = ((byte *)GEN_TOP((uVar18 & 0x3ffffff)));
              }
            }
            pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x64));
            if (0 < (int)(*(byte * PTR32 *)(gen_frame + 0x64))) {
              (*(byte * PTR32 *)(gen_frame + 0x64)) = ((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x5c)) * 8)));
              (*(byte * PTR32 *)(gen_frame + 0x8c)) = pbVar15;
              do {
                uVar13 = (uint)(*(byte * PTR32 *)(gen_frame + 0x84)) & (*(uint *)(gen_frame + 0x60));
                uVar23 = 0;
                (*(byte * PTR32 *)(gen_frame + 0x84)) = ((byte *)GEN_TOP(((int)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x84))) >> GEN_SHC((byte)(*(uint *)(gen_frame + 0x40)), (byte)(*(uint *)(gen_frame + 0x40))))));
                if (-1 < *((short *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x80)) + (int)((*(byte * PTR32 *)(gen_frame + 0x64)) + uVar13) * 2 + 0x52)))) {
                  (*(uint *)(gen_frame + 0x5c)) = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x48))) +
                                       *((short *)GEN_TOP(((*(byte * PTR32 *)(gen_frame + 0x80)) + (int)((*(byte * PTR32 *)(gen_frame + 0x64)) + uVar13) * 2 + 0x52)))
                                       * 4)));
                  if (*((int *)GEN_TOP((param_3 + 0x548))) < 8) {
                    F_00cebbb0(param_3);
                  }
                  uVar13 = *((uint *)GEN_TOP((param_3 + 0x544)));
                  iVar14 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x5c)) + 0x2c + (uVar13 & 0xff) * 4)));
                  if (iVar14 < 0) {
                    if (*((int *)GEN_TOP((param_3 + 0x548))) < 0x19) {
                      F_00cebbb0(param_3);
                    }
                    uVar13 = *((uint *)GEN_TOP((param_3 + 0x544)));
                    uVar18 = uVar13 >> 8;
                    do {
                      iVar14 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x5c)) + 0x2c + ((uVar18 & 3) + 0x80000000 + iVar14) * 4)))
                      ;
                      uVar18 = uVar18 >> 2;
                    } while (iVar14 < 0);
                  }
                  piVar1 = ((int *)GEN_TOP((param_3 + 0x548)));
                  *piVar1 = *piVar1 - (iVar14 >> 0x1a);
                  *((uint *)GEN_TOP((param_3 + 0x544))) = uVar13 >> GEN_SHC((byte)(iVar14 >> 0x1a), (byte)(iVar14 >> 0x1a));
                  if (*piVar1 < 0) {
                    *((undefined4 *)GEN_TOP((param_3 + 0x548))) = 0;
                    uVar23 = 0xffff;
                  }
                  else {
                    uVar23 = (undefined2)iVar14;
                  }
                }
                (*(undefined2 * PTR32 *)(gen_frame + 0x7c))[(int)(*(int * PTR32 *)(gen_frame + 0x74))] = uVar23;
                pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x8c)) - 1;
                (*(byte * PTR32 *)(gen_frame + 0x8c)) = pbVar15;
                (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x74)) + 1)));
              } while (pbVar15 != ((byte *)GEN_TOP(0x0)));
            }
            iVar14 = (*(int *)(gen_frame + 0x90)) + 1;
            (*(int *)(gen_frame + 0x90)) = iVar14;
            puVar24 = (*(undefined2 * PTR32 *)(gen_frame + 0x7c));
          } while (iVar14 < (int)(uint)*(*(byte * PTR32 *)(gen_frame + 0x80)));
        }
        if (*((int *)GEN_TOP((param_3 + 0x548))) == -1) goto LAB_00ceeb8c;
        ((char *)(gen_frame + 0x89c))[0] = '\x01';
        ((char *)(gen_frame + 0x89c))[1] = '\x01';
        (*(int *)(gen_frame + 0x90)) = 2;
        if (2 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x80)) + 0xa20)) {
          pbVar15 = (*(byte * PTR32 *)(gen_frame + 0x80)) + 0x445;
          (*(byte * PTR32 *)(gen_frame + 0x8c)) = (*(byte * PTR32 *)(gen_frame + 0x80)) + 0x63c;
          (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
          do {
            uVar13 = (uint)pbVar15[-1];
            pbVar22 = ((byte *)GEN_TOP((int)(short)puVar24[uVar13]));
            (*(uint *)(gen_frame + 0x60)) = uVar13;
            (*(byte * PTR32 *)(gen_frame + 0x64)) = pbVar22;
            uVar18 = (int)(short)puVar24[*pbVar15] - (int)((int)(uintptr_t)pbVar22) >> 0x1f;
            pbVar22 = pbVar22 + (((((int)(short)puVar24[*pbVar15] - (int)pbVar22 ^ uVar18) - uVar18)
                                  * ((uint)*(ushort *)(pbVar15 - 0x2ef) -
                                    (uint)*(ushort *)((*(byte * PTR32 *)(gen_frame + 0x80)) + uVar13 * 2 + 0x152)) *
                                  *(int *)((int)(uintptr_t)(*(byte * PTR32 *)(gen_frame + 0x8c))) >> 0x15 ^ uVar18) - uVar18);
            pbVar21 = ((byte *)GEN_TOP((int)(short)(*(undefined2 * PTR32 *)(gen_frame + 0x7c))[(*(int *)(gen_frame + 0x90))]));
            ((char *)(gen_frame + 0x89c))[(int)((*(int *)(gen_frame + 0x90)))] = '\0';
            pbVar19 = pbVar22;
            if (pbVar21 != ((byte *)GEN_TOP(0x0))) {
              ((char *)(gen_frame + 0x89c))[(int)((*(int *)(gen_frame + 0x90)))] = '\x01';
              ((char *)(gen_frame + 0x89c))[(int)(*pbVar15)] = '\x01';
              ((char *)(gen_frame + 0x89c))[(int)(pbVar15[-1])] = '\x01';
              uVar13 = (int)(*(byte * PTR32 *)(gen_frame + 0x78)) - (int)pbVar22;
              (*(uint *)(gen_frame + 0x60)) = uVar13;
              if ((int)pbVar22 < (int)uVar13) {
                pbVar19 = pbVar21;
                if ((int)pbVar21 < (int)((int)(uintptr_t)pbVar22) * 2) {
LAB_00ceeaf4: ;
                  pbVar19 = pbVar22 + (-((uint)pbVar21 & 1) ^ (int)((int)(uintptr_t)pbVar21) >> 1);
                }
              }
              else {
                if ((int)pbVar21 < (int)(uVar13 * 2)) goto LAB_00ceeaf4;
                pbVar19 = pbVar22 + (uVar13 - (int)pbVar21) - 1;
              }
            }
            (*(byte * PTR32 *)(gen_frame + 0x8c)) = (*(byte * PTR32 *)(gen_frame + 0x8c)) + 4;
            (*(undefined2 * PTR32 *)(gen_frame + 0x7c))[(*(int *)(gen_frame + 0x90))] = (short)pbVar19;
            iVar14 = (*(int *)(gen_frame + 0x90)) + 1;
            pbVar15 = pbVar15 + 2;
            (*(int *)(gen_frame + 0x90)) = iVar14;
            (*(byte * PTR32 *)(gen_frame + 0x84)) = pbVar15;
            puVar24 = (*(undefined2 * PTR32 *)(gen_frame + 0x7c));
          } while (iVar14 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x80)) + 0xa20));
        }
        iVar14 = 0;
        if (0 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x80)) + 0xa20)) {
          do {
            if (((char *)(gen_frame + 0x89c))[(int)(iVar14)] == '\0') {
              puVar24[iVar14] = 0xffff;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)((*(byte * PTR32 *)(gen_frame + 0x80)) + 0xa20));
        }
      }
      (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 3;
      (*(int * PTR32 *)(gen_frame + 0x94)) = (*(int * PTR32 *)(gen_frame + 0x94)) + 1;
      iVar14 = (*(uint *)(gen_frame + 0x98)) + 1;
      (*(uint *)(gen_frame + 0x98)) = iVar14;
    } while (iVar14 < *((int *)GEN_TOP((param_3 + 8))));
  }
  puVar12 = (*(ushort * PTR32 *)(gen_frame + 0x88));
  F_00c46aa0(((int *)(gen_frame + 0x9c)),((int *)(gen_frame + 0x49c)),*((int *)GEN_TOP((param_3 + 8))) * 4);
  if (((int *)GEN_TOP((uint)*puVar12)) != ((int *)GEN_TOP(0x0))) {
    iVar14 = 0;
    pbVar15 = ((byte *)GEN_TOP((*(int *)(puVar12 + 2) + 1)));
    (*(byte * PTR32 *)(gen_frame + 0x78)) = pbVar15;
    (*(int * PTR32 *)(gen_frame + 0x74)) = ((int *)GEN_TOP((uint)*puVar12));
    do {
      if ((((int *)(gen_frame + 0x49c))[(int)(*((byte *)GEN_TOP((*(int *)(puVar12 + 2) + iVar14))))] == 0) || (((int *)(gen_frame + 0x49c))[(int)(*pbVar15)] == 0))
      {
        bVar3 = *((byte *)GEN_TOP((*(int *)(puVar12 + 2) + iVar14)));
        ((int *)(gen_frame + 0x49c))[(int)(*((byte *)GEN_TOP((*(int *)(puVar12 + 2) + 1 + iVar14))))] = 0;
        ((int *)(gen_frame + 0x49c))[(int)(bVar3)] = 0;
      }
      pbVar15 = pbVar15 + 3;
      iVar14 = iVar14 + 3;
      piVar1 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x74)) - 1)));
      (*(int * PTR32 *)(gen_frame + 0x74)) = piVar1;
      (*(byte * PTR32 *)(gen_frame + 0x78)) = pbVar15;
    } while (piVar1 != ((int *)GEN_TOP(0x0)));
  }
  (*(uint *)(gen_frame + 0x98)) = 0;
  if ((char)(*(ushort * PTR32 *)(gen_frame + 0x88))[4] != '\0') {
    do {
      iVar14 = 0;
      (*(int *)(gen_frame + 0x90)) = 0;
      if (0 < *((int *)GEN_TOP((param_3 + 8)))) {
        (*(int * PTR32 *)(gen_frame + 0x94)) = ((int *)GEN_TOP((param_3 + 0x2ec)));
        pbVar15 = ((byte *)GEN_TOP((*(int *)((*(ushort * PTR32 *)(gen_frame + 0x88)) + 2) + 2)));
        do {
          if (*pbVar15 == (*(uint *)(gen_frame + 0x98))) {
            iVar16 = 0;
            if (((int *)(gen_frame + 0x49c))[(int)((*(int *)(gen_frame + 0x90)))] == 0) {
              ((char *)(gen_frame + 0x89c))[(int)(iVar14)] = '\0';
              iVar16 = *(*(int * PTR32 *)(gen_frame + 0x94));
            }
            else {
              ((char *)(gen_frame + 0x89c))[(int)(iVar14)] = '\x01';
            }
            ((int *)(gen_frame + 0x0))[(int)(iVar14)] = iVar16;
            iVar14 = iVar14 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x94)) = (*(int * PTR32 *)(gen_frame + 0x94)) + 1;
          iVar16 = (*(int *)(gen_frame + 0x90)) + 1;
          pbVar15 = pbVar15 + 3;
          (*(int *)(gen_frame + 0x90)) = iVar16;
        } while (iVar16 < *((int *)GEN_TOP((param_3 + 8))));
      }
      uVar13 = (*(uint *)(gen_frame + 0x98));
      F_00cecd50(param_3,((int *)(gen_frame + 0x0)),iVar14,(*(int *)(gen_frame + 0x6c)),
                   (uint)*((byte *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x88)) + (*(uint *)(gen_frame + 0x98)) + 0x18))),((char *)(gen_frame + 0x89c)));
      (*(uint *)(gen_frame + 0x98)) = uVar13 + 1;
    } while ((int)(uVar13 + 1) < (int)(uint)(byte)(*(ushort * PTR32 *)(gen_frame + 0x88))[4]);
  }
  fVar11 = *(float *)&REFG(undefined, 0x113059c);
  fVar10 = *(float *)&REFG(undefined, 0x1130598);
  fVar9 = *(float *)&REFG(undefined, 0x1130594);
  fVar8 = *(float *)&REFG(undefined, 0x1130590);
  iVar14 = *(*(ushort * PTR32 *)(gen_frame + 0x88)) - 1;
  (*(uint *)(gen_frame + 0x98)) = iVar14;
  if (-1 < iVar14) {
    (*(int * PTR32 *)(gen_frame + 0x94)) = ((int *)GEN_TOP((iVar14 * 3)));
    do {
      pfVar20 = *((float * PTR32 *)GEN_TOP((param_3 + 0x2ec + (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x94)) + *(int *)((*(ushort * PTR32 *)(gen_frame + 0x88)) + 2)))) * 4)));
      if (0 < (*(int *)(gen_frame + 0x6c))) {
        iVar16 = *((int *)GEN_TOP((param_3 + 0x2ec +
                         (uint)(((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x94)) + *(int *)((*(ushort * PTR32 *)(gen_frame + 0x88)) + 2)))))[1] * 4))) -
                 (int)pfVar20;
        iVar14 = ((*(int *)(gen_frame + 0x6c)) - 1U >> 2) + 1;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          fVar6 = pfVar20[2];
          fVar7 = pfVar20[3];
          pfVar2 = ((float *)GEN_TOP((iVar16 + (int)pfVar20)));
          uVar13 = -(uint)(fVar8 < *pfVar2);
          uVar18 = -(uint)(fVar9 < pfVar2[1]);
          uVar17 = -(uint)(fVar10 < pfVar2[2]);
          uVar26 = -(uint)(fVar11 < pfVar2[3]);
          uVar27 = -(uint)(fVar8 < fVar4) & (uint)gen_fl2bits(fVar8) ^ (uint)gen_fl2bits(*pfVar2);
          uVar28 = -(uint)(fVar9 < fVar5) & (uint)gen_fl2bits(fVar9) ^ (uint)gen_fl2bits(pfVar2[1]);
          uVar29 = -(uint)(fVar10 < fVar6) & (uint)gen_fl2bits(fVar10) ^
                   (uint)gen_fl2bits(pfVar2[2]);
          uVar30 = -(uint)(fVar11 < fVar7) & (uint)gen_fl2bits(fVar11) ^
                   (uint)gen_fl2bits(pfVar2[3]);
          pfVar2 = ((float *)GEN_TOP((iVar16 + (int)pfVar20)));
          *pfVar2 = gen_bits2f(uVar13 & uVar27) + fVar4;
          pfVar2[1] = gen_bits2f(uVar18 & uVar28) + fVar5;
          pfVar2[2] = gen_bits2f(uVar17 & uVar29) + fVar6;
          pfVar2[3] = gen_bits2f(uVar26 & uVar30) + fVar7;
          *pfVar20 = fVar4 - gen_bits2f(~uVar13 & uVar27);
          pfVar20[1] = fVar5 - gen_bits2f(~uVar18 & uVar28);
          pfVar20[2] = fVar6 - gen_bits2f(~uVar17 & uVar29);
          pfVar20[3] = fVar7 - gen_bits2f(~uVar26 & uVar30);
          pfVar20 = pfVar20 + 4;
          iVar14 = iVar14 - 1;
        } while (iVar14 != 0);
      }
      (*(int * PTR32 *)(gen_frame + 0x94)) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x94)) - 3)));
      iVar14 = (*(uint *)(gen_frame + 0x98)) - 1;
      (*(uint *)(gen_frame + 0x98)) = iVar14;
    } while (-1 < iVar14);
  }
  (*(uint *)(gen_frame + 0x98)) = 0;
  if (0 < *((int *)GEN_TOP((param_3 + 8)))) {
    puVar25 = ((undefined4 *)GEN_TOP((param_3 + 0x2ec)));
    do {
      if (((int *)(gen_frame + 0x9c))[(int)((*(uint *)(gen_frame + 0x98)))] == 0) {
        F_00cee1d0((*(int *)(gen_frame + 0x68)),param_3,(*(ushort * PTR32 *)(gen_frame + 0x88)),(*(uint *)(gen_frame + 0x98)),*puVar25,puVar25[0x31]);
      }
      else {
        F_00c48350(((undefined *)GEN_TOP(*puVar25)),0,(*(int *)(gen_frame + 0x6c)) * 4);
      }
      iVar14 = (*(uint *)(gen_frame + 0x98)) + 1;
      puVar25 = puVar25 + 1;
      (*(uint *)(gen_frame + 0x98)) = iVar14;
    } while (iVar14 < *((int *)GEN_TOP((param_3 + 8))));
  }
  iVar14 = 0;
  if (0 < *((int *)GEN_TOP((param_3 + 8)))) {
    (*(int * PTR32 *)(gen_frame + 0x94)) = ((int *)GEN_TOP((param_3 + 0x2ec)));
    do {
      F_00cedc20(((undefined *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x94)))) GEN_EDX_ARG,(*(int *)(gen_frame + 0x68)),param_3,(uint)*(*(byte * PTR32 *)(gen_frame + 0x50)));
      (*(int * PTR32 *)(gen_frame + 0x94)) = (*(int * PTR32 *)(gen_frame + 0x94)) + 1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < *((int *)GEN_TOP((param_3 + 8))));
  }
  do {
    if ((*((char *)GEN_TOP((param_3 + 0x534))) == '\0') &&
       ((*((int *)GEN_TOP((param_3 + 0x53c))) != 0 || (uVar13 = F_00ceb960(param_3), uVar13 == 0)))) break;
    *((char *)GEN_TOP((param_3 + 0x534))) = *((char *)GEN_TOP((param_3 + 0x534))) - 1;
    bVar3 = **((byte * PTR32 *)GEN_TOP((param_3 + 0x10)));
    *((byte * PTR32 *)GEN_TOP((param_3 + 0x10))) = *((byte * PTR32 *)GEN_TOP((param_3 + 0x10))) + 1;
  } while (bVar3 != 0xffffffff);
  iVar14 = (*(int *)(gen_frame + 0x58));
  if (*((char *)GEN_TOP((param_3 + 0x535))) == '\0') {
    if (*((int *)GEN_TOP((param_3 + 0x558))) != 0) {
      iVar14 = (*(int *)(gen_frame + 0x58)) + *((int *)GEN_TOP((param_3 + 0x558)));
      *(*(int * PTR32 *)(gen_frame + 0x44)) = iVar14;
      *((undefined4 *)GEN_TOP((param_3 + 0x558))) = 0;
    }
  }
  else {
    *((int *)GEN_TOP((param_3 + 0x3f0))) = -(*(int *)(gen_frame + 0x6c));
    *((int *)GEN_TOP((param_3 + 0x558))) = (*(int *)(gen_frame + 0x68)) - (*(int *)(gen_frame + 0x54));
    *((undefined4 *)GEN_TOP((param_3 + 0x3f4))) = 1;
    *((undefined1 *)GEN_TOP((param_3 + 0x535))) = 0;
  }
  if (*((int *)GEN_TOP((param_3 + 0x540))) == *((int *)GEN_TOP((param_3 + 0x550)))) {
    if ((*((int *)GEN_TOP((param_3 + 0x3f4))) != 0) && ((*((byte *)GEN_TOP((param_3 + 0x533))) & 4) != 0)) {
      uVar13 = *((uint *)GEN_TOP((param_3 + 0x3f0)));
      uVar18 = (*((int *)GEN_TOP((param_3 + 0x554))) - (*(int *)(gen_frame + 0x68))) + (*(int *)(gen_frame + 0x54));
      if (uVar18 < (*(int *)(gen_frame + 0x54)) + uVar13) {
        if (uVar18 < uVar13) {
          *(*(int * PTR32 *)(gen_frame + 0x48)) = 0;
          *(*(int * PTR32 *)(gen_frame + 0x48)) = *(*(int * PTR32 *)(gen_frame + 0x48)) + iVar14;
          *((int *)GEN_TOP((param_3 + 0x3f0))) = *((int *)GEN_TOP((param_3 + 0x3f0))) + *(*(int * PTR32 *)(gen_frame + 0x48));
          return 1;
        }
        *(*(int * PTR32 *)(gen_frame + 0x48)) = uVar18 - uVar13;
        *(*(int * PTR32 *)(gen_frame + 0x48)) = *(*(int * PTR32 *)(gen_frame + 0x48)) + iVar14;
        *((int *)GEN_TOP((param_3 + 0x3f0))) = *((int *)GEN_TOP((param_3 + 0x3f0))) + *(*(int * PTR32 *)(gen_frame + 0x48));
        return 1;
      }
    }
    *((undefined4 *)GEN_TOP((param_3 + 0x3f4))) = 1;
    *((int *)GEN_TOP((param_3 + 0x3f0))) = (*((int *)GEN_TOP((param_3 + 0x554))) - (*(int *)(gen_frame + 0x6c))) + iVar14;
  }
  if (*((int *)GEN_TOP((param_3 + 0x3f4))) != 0) {
    *((int *)GEN_TOP((param_3 + 0x3f0))) = *((int *)GEN_TOP((param_3 + 0x3f0))) + ((*(uint *)(gen_frame + 0x70)) - iVar14);
  }
  *(*(int * PTR32 *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x54));
  return 1;
}

/* ref: FUN_00cef040 */
GEN_LIB GEN_FRAME uint F_00cef040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcef040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  float * pfVar1;
  float * pfVar2;
  undefined4 * puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  float * pfVar30;
  undefined4 * puVar31;
  int iVar32;
  undefined4 * puVar33;
  int * piVar34;
  float * pfVar35;
  int iVar36;
  int iVar37;
  int local_c;
  int local_8;
  
  iVar37 = param_4;
  iVar4 = *((int *)GEN_TOP((param_1 + 0x3ac)));
  if (iVar4 != 0) {
    if (iVar4 * 2 == *((int *)GEN_TOP((param_1 + 0x3c)))) {
      local_8 = *((int *)GEN_TOP((param_1 + 0x418)));
    }
    else if (iVar4 * 2 == *((int *)GEN_TOP((param_1 + 0x40)))) {
      local_8 = *((int *)GEN_TOP((param_1 + 0x41c)));
    }
    else {
      local_8 = 0;
    }
    local_c = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 8)))) {
      piVar34 = ((int *)GEN_TOP((param_1 + 0x2ec)));
      do {
        pfVar30 = ((float *)GEN_TOP((*piVar34 + param_3 * 4)));
        if (0 < iVar4) {
          pfVar35 = ((float *)GEN_TOP((local_8 - 0x10 + iVar4 * 4)));
          iVar29 = local_8 - (int)pfVar30;
          iVar36 = piVar34[0x20] - (int)pfVar30;
          iVar32 = (iVar4 - 1U >> 2) + 1;
          do {
            fVar5 = *pfVar35;
            fVar6 = pfVar35[1];
            fVar7 = pfVar35[2];
            pfVar1 = ((float *)GEN_TOP((iVar36 + (int)pfVar30)));
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar2 = ((float *)GEN_TOP((iVar29 + (int)pfVar30)));
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            *pfVar30 = *pfVar1 * pfVar35[3] + *pfVar2 * *pfVar30;
            pfVar30[1] = fVar8 * fVar7 + fVar11 * pfVar30[1];
            pfVar30[2] = fVar9 * fVar6 + fVar12 * pfVar30[2];
            pfVar30[3] = fVar10 * fVar5 + fVar13 * pfVar30[3];
            pfVar35 = pfVar35 - 4;
            pfVar30 = pfVar30 + 4;
            iVar32 = iVar32 - 1;
          } while (iVar32 != 0);
        }
        local_c = local_c + 1;
        piVar34 = piVar34 + 1;
      } while (local_c < *((int *)GEN_TOP((param_1 + 8))));
    }
  }
  iVar4 = *((int *)GEN_TOP((param_1 + 0x3ac)));
  *((int *)GEN_TOP((param_1 + 0x3ac))) = param_2 - param_4;
  param_4 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 8)))) {
    piVar34 = ((int *)GEN_TOP((param_1 + 0x2ec)));
    do {
      iVar29 = piVar34[0x20];
      iVar32 = *piVar34 + iVar37 * 4;
      if (iVar37 < param_2) {
        puVar33 = ((undefined4 *)GEN_TOP((iVar29 + 0x30)));
        puVar31 = ((undefined4 *)GEN_TOP((iVar32 + 0x20)));
        iVar36 = iVar37;
        do {
          uVar14 = puVar31[-4];
          uVar15 = puVar31[-3];
          uVar16 = puVar31[-2];
          uVar17 = puVar31[-1];
          uVar18 = *puVar31;
          uVar19 = puVar31[1];
          uVar20 = puVar31[2];
          uVar21 = puVar31[3];
          uVar22 = puVar31[4];
          uVar23 = puVar31[5];
          uVar24 = puVar31[6];
          uVar25 = puVar31[7];
          uVar26 = puVar31[-7];
          uVar27 = puVar31[-6];
          uVar28 = puVar31[-5];
          puVar33[-0xc] = puVar31[-8];
          puVar33[-0xb] = uVar26;
          puVar33[-10] = uVar27;
          puVar33[-9] = uVar28;
          puVar33[-8] = uVar14;
          puVar33[-7] = uVar15;
          puVar33[-6] = uVar16;
          puVar33[-5] = uVar17;
          puVar3 = ((undefined4 *)GEN_TOP(((iVar29 - iVar32) + (int)puVar31)));
          *puVar3 = uVar18;
          puVar3[1] = uVar19;
          puVar3[2] = uVar20;
          puVar3[3] = uVar21;
          *puVar33 = uVar22;
          puVar33[1] = uVar23;
          puVar33[2] = uVar24;
          puVar33[3] = uVar25;
          iVar36 = iVar36 + 0x10;
          puVar31 = puVar31 + 0x10;
          puVar33 = puVar33 + 0x10;
        } while (iVar36 < param_2);
      }
      param_4 = param_4 + 1;
      piVar34 = piVar34 + 1;
    } while (param_4 < *((int *)GEN_TOP((param_1 + 8))));
  }
  if (iVar4 != 0) {
    if (param_2 < iVar37) {
      iVar37 = param_2;
    }
    *((int *)GEN_TOP((param_1 + 0x55c))) = *((int *)GEN_TOP((param_1 + 0x55c))) + (iVar37 - param_3);
    return iVar37 - param_3;
  }
  return 0;
}

/* ref: FUN_00cef1d0 */
GEN_LIB GEN_FRAME uint F_00cef1d0(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcef1d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte * pbVar7;
  byte * pbVar8;
  byte * pbVar9;
  
  iVar5 = *((int *)GEN_TOP((in_edi + 0x538)));
  pbVar8 = *((byte * PTR32 *)GEN_TOP((in_edi + 0x10)));
  bVar3 = true;
  if (iVar5 != -1) {
    iVar2 = *((int *)GEN_TOP((in_edi + 0x430)));
    for (; (iVar5 < iVar2 &&
           (bVar1 = *((byte *)GEN_TOP((in_edi + 0x434 + iVar5))), pbVar8 = pbVar8 + bVar1, bVar1 == 0xff));
        iVar5 = iVar5 + 1) {
    }
    if ((param_2 != 0) && (iVar5 < iVar2 - 1)) {
LAB_00cef222: ;
      *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0x15;
      if (*((int *)GEN_TOP((in_edi + 0x34))) == 0) {
        *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0x15;
      }
      return 0;
    }
    if (iVar5 == iVar2) {
      iVar5 = -1;
    }
    bVar3 = false;
    if (*((byte * PTR32 *)GEN_TOP((in_edi + 0x18))) < pbVar8) {
LAB_00cef249: ;
      *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 1;
      return 0;
    }
    if (iVar5 != -1) {
      return 1;
    }
  }
  pbVar7 = *((byte * PTR32 *)GEN_TOP((in_edi + 0x18)));
  do {
    if (pbVar7 <= pbVar8 + 0x1a) {
LAB_00cef2fe: ;
      *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 1;
      return 0;
    }
    if ((*(int *)pbVar8 != REFG(int, 0x134f7b8)) || (pbVar8[4] != 0)) goto LAB_00cef222;
    if (bVar3) {
      if ((*((int *)GEN_TOP((in_edi + 0x3ac))) != 0) && ((pbVar8[5] & 1) != 0)) goto LAB_00cef222;
    }
    else if ((pbVar8[5] & 1) == 0) goto LAB_00cef222;
    uVar4 = (uint)pbVar8[0x1a];
    pbVar9 = pbVar8 + uVar4 + 0x1b;
    if (pbVar7 <= pbVar9) goto LAB_00cef2fe;
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        pbVar9 = pbVar9 + pbVar8[uVar6 + 0x1b];
        if (pbVar8[uVar6 + 0x1b] != 0xff) break;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar4);
      pbVar7 = *((byte * PTR32 *)GEN_TOP((in_edi + 0x18)));
    }
    if ((param_2 != 0) && ((int)uVar6 < (int)(uVar4 - 1))) goto LAB_00cef222;
    if (uVar6 == uVar4) {
      uVar6 = 0xffffffff;
    }
    bVar3 = false;
    if (pbVar7 < pbVar9) goto LAB_00cef249;
    pbVar8 = pbVar9;
    if (uVar6 != 0xffffffff) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00cef340 */
GEN_LIB GEN_FRAME uint F_00cef340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (*((int *)GEN_TOP((param_1 + 0x3f4))) != 0) {
    return *((uint *)GEN_TOP((param_1 + 0x3f0)));
  }
  return 0xffffffff;
}

/* ref: FUN_00cef360 */
GEN_LIB GEN_FRAME uint F_00cef360(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcef360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  
  param_1[2] = param_2[2];
  *param_1 = *param_2;
  iVar1 = param_2[0x10];
  param_1[1] = param_2[1];
  param_1[3] = iVar1 >> 1;
  return (uint)param_1;
}

/* ref: FUN_00cef390 */
GEN_LIB GEN_FRAME uint F_00cef390(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x38)));
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  return uVar1;
}

/* ref: FUN_00cef3b0 */
GEN_LIB GEN_FRAME uint F_00cef3b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((param_1 + 0x3ac))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x560))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x558))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x3f4))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x535))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x55c))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x5b4))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x5b8))) = 0;
  return param_1;
}

/* ref: FUN_00cef3f0 */
GEN_LIB GEN_FRAME uint F_00cef3f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcef3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  byte * pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x560)))) {
    puVar7 = ((undefined4 *)GEN_TOP((param_1 + 0x570)));
    do {
      *puVar7 = 0;
      iVar3 = iVar3 + 1;
      puVar7 = puVar7 + 5;
    } while (iVar3 < *((int *)GEN_TOP((param_1 + 0x560))));
  }
  local_c = *((int *)GEN_TOP((param_1 + 0x560)));
  if (local_c < 4) {
    if ((int)param_3 < 4) {
      return 0;
    }
    uVar4 = param_3 - 3;
    uVar11 = 0;
    param_3 = uVar4;
    if (0 < (int)uVar4) {
      uVar5 = REFG(undefined4, 0x134f7b8);
      do {
        pbVar1 = ((byte *)GEN_TOP((param_2 + 3 + uVar11)));
        if ((*((char *)GEN_TOP((param_2 + uVar11))) == 'O') &&
           (((*(uint *)(pbVar1 - 3) == uVar5 ||
             ((((iVar3 = (uint)pbVar1[-3] - (uVar5 & 0xff), iVar3 == 0 &&
                (iVar3 = (uint)pbVar1[-2] - (uVar5 >> 8 & 0xff), iVar3 == 0)) &&
               (iVar3 = (uint)pbVar1[-1] - (REFG(undefined4, 0x134f7b8) >> 0x10 & 0xff), iVar3 == 0)) &&
              (iVar3 = (uint)*pbVar1 - (REFG(undefined4, 0x134f7b8) >> 0x18), iVar3 == 0)))) ||
            ((iVar3 >> 0x1f | 1U) == 0)))) {
          param_3 = uVar11;
          if (((int)uVar4 <= (int)(pbVar1 + (0x17 - param_2))) ||
             (uVar5 = (uint)*((byte *)GEN_TOP((uVar11 + 0x1a + param_2))),
             (int)uVar4 <= (int)(uVar5 + 0x1b + uVar11))) break;
          local_8 = uVar5 + 0x1b;
          iVar9 = 0;
          iVar10 = 0;
          iVar3 = 0;
          if (1 < uVar5) {
            do {
              iVar9 = iVar9 + (uint)pbVar1[iVar3 + 0x18];
              iVar6 = iVar3 + 0x19;
              iVar3 = iVar3 + 2;
              iVar10 = iVar10 + (uint)pbVar1[iVar6];
            } while (iVar3 < (int)(uVar5 - 1));
          }
          if (iVar3 < (int)(uint)*((byte *)GEN_TOP((uVar11 + 0x1a + param_2)))) {
            local_8 = local_8 + (uint)*((byte *)GEN_TOP((iVar3 + uVar11 + 0x1b + param_2)));
          }
          uVar5 = 0;
          iVar3 = 0;
          do {
            uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(int)((uint)pbVar1[iVar3 - 3] ^ uVar5 >> 0x18)];
            uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(int)((uint)pbVar1[iVar3 - 2] ^ uVar5 >> 0x18)];
            iVar3 = iVar3 + 2;
          } while (iVar3 < 0x16);
          if (iVar3 < 0x1a) {
            iVar6 = 0x1a - iVar3;
            iVar3 = iVar3 + iVar6;
            do {
              uVar5 = uVar5 << 8 ^ (&REFG(undefined4, 0x15d8df8))[(int)(uVar5 >> 0x18)];
              iVar6 = iVar6 - 1;
            } while (iVar6 != 0);
          }
          *((int *)GEN_TOP((param_1 + 0x560))) = local_c + 1;
          iVar6 = param_1 + local_c * 0x14;
          *((int *)GEN_TOP((iVar6 + 0x568))) = (local_8 + iVar10 + iVar9) - iVar3;
          *((uint *)GEN_TOP((iVar6 + 0x56c))) = uVar5;
          *((uint *)GEN_TOP((param_1 + (local_c * 5 + 0x159) * 4))) =
               CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((uVar11 + 0x19 + param_2))),
                                          *((undefined1 *)GEN_TOP((uVar11 + 0x18 + param_2)))),
                                 *((undefined1 *)GEN_TOP((uVar11 + 0x17 + param_2)))),
                        *((undefined1 *)GEN_TOP((uVar11 + 0x16 + param_2))));
          if (*((char *)GEN_TOP((*((byte *)GEN_TOP((uVar11 + 0x1a + param_2))) + uVar11 + 0x1a + param_2))) == -1) {
            *((undefined4 *)GEN_TOP((iVar6 + 0x574))) = 0xffffffff;
          }
          else {
            *((uint *)GEN_TOP((iVar6 + 0x574))) =
                 CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((uVar11 + 9 + param_2))),
                                            *((undefined1 *)GEN_TOP((uVar11 + 8 + param_2)))),
                                   *((undefined1 *)GEN_TOP((uVar11 + 7 + param_2)))),
                          *((undefined1 *)GEN_TOP((uVar11 + 6 + param_2))));
          }
          *((uint *)GEN_TOP((iVar6 + 0x570))) = iVar3 + uVar11;
          local_c = *((int *)GEN_TOP((param_1 + 0x560)));
          uVar5 = REFG(undefined4, 0x134f7b8);
          param_3 = uVar4;
          if (local_c == 4) break;
        }
        uVar11 = uVar11 + 1;
        param_3 = uVar4;
      } while ((int)uVar11 < (int)uVar4);
    }
  }
  piVar8 = ((int *)GEN_TOP((param_1 + 0x560)));
  param_1 = 0;
  if (0 < *piVar8) {
    piVar8 = ((int *)GEN_TOP((iVar2 + 0x568)));
    do {
      iVar3 = piVar8[2];
      iVar9 = *piVar8;
      if ((int)(param_3 - iVar3) < *piVar8) {
        iVar9 = param_3 - iVar3;
      }
      uVar4 = piVar8[1];
      local_c = 0;
      if (0 < iVar9) {
        do {
          uVar4 = uVar4 << 8 ^
                  (&REFG(undefined4, 0x15d8df8))[(int)((uint)*((byte *)GEN_TOP((iVar3 + param_2 + local_c))) ^ uVar4 >> 0x18)];
          local_c = local_c + 1;
        } while (local_c < iVar9);
      }
      iVar10 = *piVar8;
      *piVar8 = iVar10 - iVar9;
      piVar8[1] = uVar4;
      if (iVar10 - iVar9 == 0) {
        if (uVar4 == piVar8[-1]) {
          *((undefined4 *)GEN_TOP((iVar2 + 0x560))) = 0xffffffff;
          *((undefined4 *)GEN_TOP((iVar2 + 0x3ac))) = 0;
          *((undefined4 *)GEN_TOP((iVar2 + 0x538))) = 0xffffffff;
          iVar10 = *((int *)GEN_TOP((iVar2 + 0x574 + param_1 * 0x14)));
          *((int *)GEN_TOP((iVar2 + 0x3f0))) = iVar10;
          *((uint *)GEN_TOP((iVar2 + 0x3f4))) = (uint)(iVar10 != -1);
          return iVar9 + iVar3;
        }
        *((int *)GEN_TOP((iVar2 + 0x560))) = *((int *)GEN_TOP((iVar2 + 0x560))) - 1;
        iVar9 = *((int *)GEN_TOP((iVar2 + 0x560))) * 5 + 0x159;
        iVar3 = iVar2 + iVar9 * 4;
        piVar8[-1] = *((int *)GEN_TOP((iVar2 + iVar9 * 4)));
        *piVar8 = *((int *)GEN_TOP((iVar3 + 4)));
        piVar8[1] = *((int *)GEN_TOP((iVar3 + 8)));
        piVar8[2] = *((int *)GEN_TOP((iVar3 + 0xc)));
        piVar8[3] = *((int *)GEN_TOP((iVar3 + 0x10)));
      }
      else {
        param_1 = param_1 + 1;
        piVar8 = piVar8 + 5;
      }
    } while (param_1 < *((int *)GEN_TOP((iVar2 + 0x560))));
  }
  return param_3;
}

/* ref: FUN_00cef770 */
GEN_LIB GEN_FRAME unsigned int F_00cef770(GEN_P(float * in_eax, unsigned int gen_a0), GEN_P(uint in_edx, unsigned int gen_a1), GEN_P(gen_v16 * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xcef770u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(float * in_eax = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint in_edx = (uint)gen_a1;)
  GEN_PIN(gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  gen_v16 * pauVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pauVar1 = param_3;
  for (uVar2 = in_edx >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    (*(undefined4 *)((char *)&auVar3 + 0)) = (int)(*in_eax * param_4);
    (*(undefined4 *)((char *)&auVar3 + 4)) = (int)(in_eax[1] * param_4);
    (*(undefined4 *)((char *)&auVar3 + 8)) = (int)(in_eax[2] * param_4);
    (*(undefined4 *)((char *)&auVar3 + 12)) = (int)(in_eax[3] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 4)) = (int)(in_eax[5] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 0)) = (int)(in_eax[4] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 8)) = (int)(in_eax[6] * param_4);
    (*(undefined4 *)((char *)&auVar4 + 12)) = (int)(in_eax[7] * param_4);
    gen_packssdw(&(auVar4), &(auVar3), &(auVar4));
    memcpy(&(*pauVar1), &(auVar4), sizeof(auVar4) < sizeof(*pauVar1) ? sizeof(auVar4) : sizeof(*pauVar1));
    in_eax = in_eax + 8;
    pauVar1 = pauVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00cef7d0 */
GEN_LIB GEN_FRAME unsigned int F_00cef7d0(GEN_P(uint in_ecx, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xcef7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  float * pfVar1;
  undefined1 auVar2 [16];
  float * pfVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar4 = in_ecx >> 2;
  if (uVar4 != 0) {
    pfVar3 = param_4;
    do {
      pfVar1 = ((float *)GEN_TOP(((int)pfVar3 + (in_edx - (int)param_4))));
      (*(undefined4 *)((char *)&auVar5 + 0)) = (int)(*pfVar1 * param_5);
      (*(undefined4 *)((char *)&auVar5 + 4)) = (int)(pfVar1[1] * param_5);
      (*(undefined4 *)((char *)&auVar5 + 8)) = (int)(pfVar1[2] * param_5);
      (*(undefined4 *)((char *)&auVar5 + 12)) = (int)(pfVar1[3] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 4)) = (int)(pfVar3[1] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 0)) = (int)(*pfVar3 * param_5);
      (*(undefined4 *)((char *)&auVar6 + 8)) = (int)(pfVar3[2] * param_5);
      (*(undefined4 *)((char *)&auVar6 + 12)) = (int)(pfVar3[3] * param_5);
      gen_packssdw(&(auVar7), &(auVar6), &(auVar5));
      (*(undefined4 *)((char *)&auVar2 + 4)) = (int)(pfVar3[1] * param_5);
      (*(undefined4 *)((char *)&auVar2 + 0)) = (int)(*pfVar3 * param_5);
      (*(undefined4 *)((char *)&auVar2 + 8)) = (int)(pfVar3[2] * param_5);
      (*(undefined4 *)((char *)&auVar2 + 12)) = (int)(pfVar3[3] * param_5);
      gen_packssdw(&(auVar6), &(auVar5), &(auVar2));
      gen_piece_set(&auVar11, 0, 12, (unsigned long long)(GEN_PIECE(&auVar7, 0, 12)));
      (*(undefined2 *)((char *)&auVar11 + 12)) = (*(undefined2 *)((char *)&auVar7 + 6));
      (*(undefined2 *)((char *)&auVar11 + 14)) = (*(undefined2 *)((char *)&auVar6 + 6));
      (*(undefined4 *)((char *)&auVar10 + 12)) = (*(undefined4 *)((char *)&auVar11 + 12));
      gen_piece_set(&auVar10, 0, 10, (unsigned long long)(GEN_PIECE(&auVar7, 0, 10)));
      (*(undefined2 *)((char *)&auVar10 + 10)) = (*(undefined2 *)((char *)&auVar6 + 4));
      gen_piece_set(&auVar9, 10, 6, (unsigned long long)(GEN_PIECE(&auVar10, 10, 6)));
      (*(undefined8 *)((char *)&auVar9 + 0)) = (*(undefined8 *)((char *)&auVar7 + 0));
      (*(undefined2 *)((char *)&auVar9 + 8)) = (*(undefined2 *)((char *)&auVar7 + 4));
      (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar9 + 8));
      (*(undefined2 *)((char *)&auVar8 + 6)) = (*(undefined2 *)((char *)&auVar6 + 2));
      (*(undefined2 *)((char *)&auVar8 + 4)) = (*(undefined2 *)((char *)&auVar7 + 2));
      (*(undefined2 *)((char *)&auVar8 + 0)) = (*(undefined2 *)((char *)&auVar7 + 0));
      (*(undefined2 *)((char *)&auVar8 + 2)) = (*(undefined2 *)((char *)&auVar6 + 0));
      memcpy(&(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))), &(auVar8), sizeof(auVar8) < sizeof(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))) ? sizeof(auVar8) : sizeof(*((gen_v16 *)GEN_TOP(((param_3 - (int)param_4) + (int)pfVar3)))));
      pfVar3 = pfVar3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00cef840 */
GEN_LIB GEN_FRAME uint F_00cef840(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d92f8) = param_1;
  return param_1;
}

/* ref: FUN_00cef860 */
GEN_LIB GEN_FRAME uint F_00cef860(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d92fc) = param_1;
  return param_1;
}

/* ref: FUN_00cef8b0 */
GEN_LIB GEN_NOFRAME uint F_00cef8b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return -(uint)(REFG(char, 0x15d91f8) != '\0') & 0x15d91f8;
}

/* ref: FUN_00cef8d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cef8d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcef8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 0) {
    return *((uint *)GEN_TOP((param_1 + 0x1c)));
  }
  if (param_2 != 1) {
    return 0;
  }
  return 0x10;
}

/* ref: FUN_00cef900 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cef900(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcef900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(*param_1));
  *((undefined4 *)GEN_TOP((uVar1 + 0x3ac))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x560))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x558))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x3f4))) = 0;
  *((undefined1 *)GEN_TOP((uVar1 + 0x535))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x55c))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x5b4))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0x5b8))) = 0;
  return uVar1;
}

/* ref: FUN_00cefa40 */
GEN_LIB GEN_NOFRAME uint F_00cefa40(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xcefa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = in_eax + 3U & 0xfffffffc;
  if (*((int *)GEN_TOP((in_ecx + 0x24))) == 0) {
    *((int *)GEN_TOP((in_ecx + 0x30))) = *((int *)GEN_TOP((in_ecx + 0x30))) + uVar2;
    uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar2);
    return uVar2;
  }
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x2c)));
  uVar2 = iVar1 + uVar2;
  if (*((uint *)GEN_TOP((in_ecx + 0x28))) < uVar2) {
    return 0;
  }
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = uVar2;
  return iVar1 + *((int *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: FUN_00cefa80 */
GEN_LIB GEN_NOFRAME uint F_00cefa80(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1))
{
  GEN_ENTER(0xcefa80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  uVar2 = in_eax + 3U & 0xfffffffc;
  if (*((int *)GEN_TOP((in_ecx + 0x24))) == 0) {
    *((int *)GEN_TOP((in_ecx + 0x30))) = *((int *)GEN_TOP((in_ecx + 0x30))) + uVar2;
    uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar2);
    return uVar2;
  }
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x2c)));
  uVar2 = iVar1 + uVar2;
  if (*((uint *)GEN_TOP((in_ecx + 0x28))) < uVar2) {
    return 0;
  }
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = uVar2;
  return iVar1 + *((int *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: FUN_00cefae0 */
GEN_LIB GEN_FRAME uint F_00cefae0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcefae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar2;
  double dVar4;
  uint uVar5;
  float10 fVar6;
  
  fVar6 = ((float10)GEN_TOD(GEN_X87MATH((float10)(int)param_1,2)));
  fVar6 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)(float)fVar6 / (float10)(int)param_2),1)));
  dVar4 = (GEN_X87MATH(((double)(float)fVar6),0xd));
  uVar2 = (uint)dVar4;
  fVar6 = F_00cf3600((float)((float10)(int)uVar2 + (float10)REFG(double, 0x1088130)),param_2);
  uVar5 = uVar2 + 1;
  if (!(fVar6 <= (float10)(int)param_1)) {
    uVar5 = uVar2;
  }
  return uVar5;
}

/* ref: FUN_00cefb60 */
GEN_LIB GEN_NOFRAME unsigned int F_00cefb60(GEN_P(uint in_edx, unsigned int gen_a0), GEN_P(int in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xcefb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_edx = (uint)gen_a0;)
  GEN_PIN(int in_edi = (int)gen_a1;)
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = 0x1f;
  if (in_edx != 0) {
    for (; in_edx >> iVar1 == 0; iVar1 = iVar1 - 1) {
    }
  }
  cVar2 = (char)iVar1;
  if (in_edx != 0) {
    cVar2 = cVar2 + '\x01';
  }
  uVar3 = 0;
  if (0 < (int)in_edx >> 3) {
    do {
      uVar7 = uVar3 >> 8;
      uVar4 = uVar3 & 0xff;
      uVar5 = uVar3 >> 0x10;
      uVar6 = uVar3 >> 0x18;
      uVar3 = uVar3 + 1;
      *((short *)GEN_TOP((in_edi - 2 + uVar3 * 2))) =
           (short)(CONCAT31(CONCAT21(CONCAT11((&REFG(undefined1, 0x15d8cf8))[(int)(uVar4)],(&REFG(undefined1, 0x15d8cf8))[(int)(uVar7 & 0xff)]),
                                     (&REFG(undefined1, 0x15d8cf8))[(int)(uVar5 & 0xff)]),(&REFG(undefined1, 0x15d8cf8))[(int)(uVar6)]) >>
                  (0x23U - (cVar2 - 1) & 0x1f)) * 4;
    } while ((int)uVar3 < (int)in_edx >> 3);
  }
  return 0;
}

/* ref: FUN_00cefbf0 */
GEN_LIB GEN_FRAME uint F_00cefbf0(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcefbf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = ((param_3 >> 1) + (param_3 >> 2) + param_3) * 4 + 0x10;
  if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
    *((int *)GEN_TOP((in_esi + 0x30))) = *((int *)GEN_TOP((in_esi + 0x30))) + iVar2;
    uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))(iVar2);
  }
  else {
    uVar4 = *((int *)GEN_TOP((in_esi + 0x2c))) + iVar2;
    if (*((uint *)GEN_TOP((in_esi + 0x28))) < uVar4) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((int *)GEN_TOP((in_esi + 0x2c))) + *((int *)GEN_TOP((in_esi + 0x24)));
      *((uint *)GEN_TOP((in_esi + 0x2c))) = uVar4;
    }
  }
  *((uint *)GEN_TOP((in_esi + 0x3f8 + param_2 * 4))) = uVar3;
  if (uVar3 != 0) {
    uVar4 = uVar3 + 0xf & 0xfffffff0;
    iVar2 = uVar4 + (param_3 >> 1) * 4;
    iVar1 = uVar4 + param_3 * 4;
    *((uint *)GEN_TOP((in_esi + 0x400 + param_2 * 4))) = uVar4;
    *((int *)GEN_TOP((in_esi + 0x408 + param_2 * 4))) = iVar2;
    *((int *)GEN_TOP((in_esi + 0x410 + param_2 * 4))) = iVar1;
    F_00ceb2e0(iVar2,uVar4,param_3,iVar1);
    iVar2 = uVar4 + ((param_3 >> 2) + param_3) * 4;
    *((int *)GEN_TOP((in_esi + 0x418 + param_2 * 4))) = iVar2;
    if (iVar2 != 0) {
      F_00ceb430(param_3,iVar2);
      uVar4 = (param_3 >> 3) * 2 + 3U & 0xfffffffc;
      if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
        *((int *)GEN_TOP((in_esi + 0x30))) = *((int *)GEN_TOP((in_esi + 0x30))) + uVar4;
        uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))(uVar4);
      }
      else {
        uVar4 = uVar4 + *((int *)GEN_TOP((in_esi + 0x2c)));
        if (*((uint *)GEN_TOP((in_esi + 0x28))) < uVar4) {
          uVar3 = 0;
        }
        else {
          uVar3 = *((int *)GEN_TOP((in_esi + 0x24))) + *((int *)GEN_TOP((in_esi + 0x2c)));
          *((uint *)GEN_TOP((in_esi + 0x2c))) = uVar4;
        }
      }
      *((uint *)GEN_TOP((in_esi + 0x420 + param_2 * 4))) = uVar3;
      if (uVar3 != 0) {
        F_00cefb60(param_3,uVar3);
        return 1;
      }
    }
  }
  *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 3;
  if (*((int *)GEN_TOP((in_esi + 0x34))) == 0) {
    *((undefined4 *)GEN_TOP((in_esi + 0x38))) = 3;
  }
  return 0;
}

/* ref: FUN_00cefd20 */
GEN_LIB_GS GEN_FRAME uint F_00cefd20(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcefd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x764, 12, 4);
  ushort uVar1;
  char * pcVar2;
  float fVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  undefined * pvVar12;
  float * pfVar13;
  uint uVar14;
  int iVar15;
  float * pfVar16;
  float fVar17;
  byte * pbVar18;
  float * pfVar19;
  float * pfVar20;
  int iVar21;
  byte * pbVar22;
  float * pfVar23;
  uint * puVar24;
  ushort * puVar25;
  short * psVar26;
  float * pfVar27;
  float * pfVar28;
  bool bVar29;
  float10 fVar30;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x75c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x760));
  pcVar2 = ((char *)GEN_TOP(param_1[4]));
  cVar6 = *pcVar2;
  bVar7 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  param_1[4] = (uint)(pcVar2 + 1);
  if (cVar6 == 'O') {
    cVar6 = pcVar2[1];
    param_1[4] = (uint)(pcVar2 + 2);
    if (cVar6 == 'g') {
      cVar6 = pcVar2[2];
      param_1[4] = (uint)(pcVar2 + 3);
      if ((cVar6 == 'g') && (cVar6 = pcVar2[3], param_1[4] = (uint)(pcVar2 + 4), cVar6 == 'S')) {
        uVar10 = F_00ceb650(param_1);
        if (uVar10 == 0) {
          return 0;
        }
        bVar5 = *((byte *)GEN_TOP(((int)param_1 + 0x533)));
        if ((bVar5 & 2) == 0) {
          bVar29 = param_1[0xd] == 0;
          uVar10 = 0x22;
          goto LAB_00cf0885;
        }
        if ((bVar5 & 4) != 0) {
          bVar29 = param_1[0xd] == 0;
          uVar10 = 0x22;
          goto LAB_00cf0885;
        }
        if ((bVar5 & 1) != 0) {
          bVar29 = param_1[0xd] == 0;
          uVar10 = 0x22;
          goto LAB_00cf0885;
        }
        if (param_1[0x10c] != 1) {
          bVar29 = param_1[0xd] == 0;
          uVar10 = 0x22;
          goto LAB_00cf0885;
        }
        if ((char)param_1[0x10d] != '\x1e') {
          bVar29 = param_1[0xd] == 0;
          uVar10 = 0x22;
          goto LAB_00cf0885;
        }
        cVar6 = *((char *)GEN_TOP(param_1[4]));
        param_1[4] = (uint)(((char *)GEN_TOP(param_1[4])) + 1);
        if (cVar6 != '\x01') {
          bVar29 = param_1[0xd] == 0;
          uVar10 = 0x22;
          goto LAB_00cf0885;
        }
        uVar10 = F_00ceb5c0(((byte * PTR32 *)(gen_frame + 0x754)),param_1,6);
        if (uVar10 == 0) {
          uVar10 = 10;
        }
        else {
          uVar10 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x754)));
          if (uVar10 == 0) {
            uVar10 = 0x22;
          }
          else {
            uVar10 = F_00ceb570(param_1);
            if (uVar10 == 0) {
              bVar5 = *((byte *)GEN_TOP(param_1[4]));
              uVar10 = (uint)bVar5;
              param_1[4] = (uint)(((byte *)GEN_TOP(param_1[4])) + 1);
              param_1[2] = uVar10;
              if (bVar5 == 0) {
                uVar10 = 0x22;
              }
              else {
                uVar11 = F_00ceb540(uVar10);
                param_1[3] = uVar11;
                if (uVar10 < 0x11) {
                  uVar10 = F_00ceb570(param_1);
                  *param_1 = uVar10;
                  if (uVar10 == 0) {
                    uVar10 = 0x22;
                  }
                  else {
                    F_00ceb570(param_1);
                    uVar10 = F_00ceb570(param_1);
                    param_1[1] = uVar10;
                    F_00ceb570(param_1);
                    pbVar22 = ((byte *)GEN_TOP(param_1[4]));
                    bVar5 = *pbVar22 >> 4;
                    uVar10 = *pbVar22 & 0xf;
                    param_1[4] = (uint)(pbVar22 + 1);
                    param_1[0xf] = 1 << (sbyte)uVar10;
                    param_1[0x10] = 1 << bVar5;
                    if (((uVar10 - 6 < 8) && (bVar5 - 6 < 8)) && (uVar10 <= bVar5)) {
                      bVar5 = pbVar22[1];
                      param_1[4] = (uint)(pbVar22 + 2);
                      if ((bVar5 & 1) == 0) {
                        uVar10 = 0x22;
                        goto LAB_00cf0881;
                      }
                      uVar10 = F_00ceb7e0(param_1);
                      if (uVar10 == 0) {
                        return 0;
                      }
                      uVar10 = F_00ceb830(param_1);
                      if (uVar10 == 0) {
                        return 0;
                      }
                      do {
                        uVar10 = F_00ceb960(param_1);
                        param_1[4] = param_1[4] + uVar10;
                        if (param_1[6] <= param_1[4]) {
                          param_1[0xd] = 1;
                        }
                        *(undefined1 *)(param_1 + 0x14d) = 0;
                      } while (uVar10 != 0);
                      uVar10 = F_00ceb830(param_1);
                      if (uVar10 == 0) {
                        return 0;
                      }
                      uVar10 = F_00cef1d0(param_1,1);
                      if (uVar10 == 0) {
                        if (param_1[0xe] != 0x15) {
                          return 0;
                        }
                        param_1[0xe] = 0x14;
                        return 0;
                      }
                      F_00ceac70();
                      F_00ceadd0();
                      uVar10 = F_00ceba40(param_1);
                      if (uVar10 == 5) {
                        iVar21 = 0;
                        do {
                          uVar10 = F_00ceba40(param_1);
                          *((char *)GEN_TOP(((int)((byte * PTR32 *)(gen_frame + 0x754)) + iVar21))) = (char)uVar10;
                          iVar21 = iVar21 + 1;
                        } while (iVar21 < 6);
                        uVar10 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x754)));
                        if (uVar10 == 0) {
                          bVar29 = param_1[0xd] == 0;
                          uVar10 = 0x14;
                        }
                        else {
                          uVar10 = F_00cebad0(param_1,8);
                          param_1[0x11] = uVar10 + 1;
                          pvVar12 = ((undefined *)GEN_TOP(F_00cefa40((uVar10 + 1) * 4,param_1)));
                          param_1[0x12] = (uint)pvVar12;
                          if (pvVar12 != ((undefined *)GEN_TOP(0x0))) {
                            F_00c48350(pvVar12,0,param_1[0x11] * 4);
                            (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
                            if (param_1[9] == 0) {
                              pfVar13 = ((float *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x2002c)));
                              (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar13;
                            }
                            (*(int *)(gen_frame + 0x4)) = 0;
                            if (0 < (int)param_1[0x11]) {
                              do {
                                (*(float *)(gen_frame + 0x72c)) = 0.0;
                                (*(float * PTR32 *)(gen_frame + 0x730)) = ((float *)GEN_TOP(0x0));
                                (*(float * PTR32 *)(gen_frame + 0x734)) = ((float *)GEN_TOP(0x0));
                                (*(uint *)(gen_frame + 0x738)) = 0;
                                (*(uint *)(gen_frame + 0x73c)) = 0;
                                (*(undefined4 *)(gen_frame + 0x740)) = 0;
                                (*(uint *)(gen_frame + 0x744)) = 0;
                                (*(float *)(gen_frame + 0x748)) = 0.0;
                                (*(float *)(gen_frame + 0x74c)) = 0.0;
                                (*(uint *)(gen_frame + 0x750)) = 0;
                                uVar10 = F_00cebad0(param_1,8);
                                pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28));
                                if ((((char)uVar10 != 'B') ||
                                    (uVar10 = F_00cebad0(param_1,8), pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28)),
                                    (char)uVar10 != 'C')) ||
                                   (uVar10 = F_00cebad0(param_1,8), pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28)),
                                   (char)uVar10 != 'V')) {
override_prt_cf0873_1085496d: ;
                                  ((code *)REFG(gen_code32, 0x15d92fc))(pfVar13);
                                  goto LAB_00cf087c;
                                }
                                uVar10 = F_00cebad0(param_1,8);
                                (*(byte *)(gen_frame + 0x1b)) = (byte)uVar10;
                                uVar10 = F_00cebad0(param_1,8);
                                pfVar13 = ((float *)GEN_TOP((uVar10 * 0x100 + (uint)(*(byte *)(gen_frame + 0x1b)))));
                                (*(float * PTR32 *)(gen_frame + 0x734)) = pfVar13;
                                uVar10 = F_00ceb540(pfVar13);
                                (*(uint *)(gen_frame + 0x738)) = uVar10;
                                uVar10 = F_00cebad0(param_1,8);
                                (*(byte *)(gen_frame + 0x1b)) = (byte)uVar10;
                                uVar10 = F_00cebad0(param_1,8);
                                (*(byte *)(gen_frame + 0xf)) = (byte)uVar10;
                                uVar10 = F_00cebad0(param_1,8);
                                uVar11 = (uVar10 * 0x100 + (uint)(*(byte *)(gen_frame + 0xf))) * 0x100 +
                                         (uint)(*(byte *)(gen_frame + 0x1b));
                                (*(uint *)(gen_frame + 0x73c)) = uVar11;
                                uVar10 = F_00cebad0(param_1,1);
                                if (uVar10 == 0) {
                                  pfVar13 = ((float *)GEN_TOP(F_00cebad0(param_1,1)));
                                  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar13;
                                }
                                else {
                                  (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(0x0));
                                }
                                pfVar13 = ((float *)GEN_TOP(F_00cefa80(uVar11,param_1)));
                                (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar13;
                                if (pfVar13 == ((float *)GEN_TOP(0x0))) {
                                  ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x28)));
                                  goto LAB_00cf08b0;
                                }
                                if (uVar10 == 0) {
                                  iVar21 = 0;
                                  if (0 < (int)uVar11) {
                                    do {
                                      if (((*(float * PTR32 *)(gen_frame + 0x1c)) == ((float *)GEN_TOP(0x0))) ||
                                         (uVar10 = F_00cebad0(param_1,1), uVar10 != 0)) {
                                        uVar10 = F_00cebad0(param_1,5);
                                        *((char *)GEN_TOP((iVar21 + (int)(*(float * PTR32 *)(gen_frame + 0x20))))) = (char)uVar10 + '\x01';
                                      }
                                      else {
                                        *((undefined1 *)GEN_TOP((iVar21 + (int)(*(float * PTR32 *)(gen_frame + 0x20))))) = 0xff;
                                      }
                                      iVar21 = iVar21 + 1;
                                    } while (iVar21 < (int)uVar11);
                                  }
                                }
                                else {
                                  pfVar13 = ((float *)GEN_TOP(0x0));
                                  uVar10 = F_00cebad0(param_1,5);
                                  (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP((uVar10 + 1)));
                                  if (0 < (int)uVar11) {
                                    do {
                                      uVar10 = uVar11 - (int)pfVar13;
                                      iVar21 = 0x1f;
                                      if (uVar10 != 0) {
                                        for (; uVar10 >> iVar21 == 0; iVar21 = iVar21 - 1) {
                                        }
                                      }
                                      if (uVar10 != 0) {
                                        iVar21 = iVar21 + 1;
                                      }
                                      uVar10 = F_00cebad0(param_1,iVar21);
                                      (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)GEN_TOP((uVar10 + (int)pfVar13)));
                                      if ((int)uVar11 < (int)(uVar10 + (int)pfVar13)) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x28)));
                                        pfVar13 = (*(float * PTR32 *)(gen_frame + 0x20));
                                        if (param_1[9] != 0) goto LAB_00cf087c;
                                        goto override_prt_cf0873_1085496d;
                                      }
                                      F_00c48350(((undefined1 *)GEN_TOP(((int)pfVar13 + (int)(*(float * PTR32 *)(gen_frame + 0x20))))),
                                              (int)(*(float * PTR32 *)(gen_frame + 0x1c)),uVar10);
                                      (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + 1)));
                                      pfVar13 = (*(float * PTR32 *)(gen_frame + 0x8));
                                    } while ((int)(*(float * PTR32 *)(gen_frame + 0x8)) < (int)uVar11);
                                  }
                                }
                                uVar10 = F_00cebad0(param_1,4);
                                bVar5 = (byte)uVar10;
                                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 1)) = bVar5;
                                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 0)) = CONCAT11(bVar5,(char)(*(uint *)(gen_frame + 0x750)));
                                pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28));
                                if (2 < bVar5) goto override_prt_cf0873_1085496d;
                                if (bVar5 != 0) {
                                  uVar10 = F_00cebad0(param_1,0x20);
                                  fVar30 = F_00ceae60(uVar10);
                                  (*(float *)(gen_frame + 0x748)) = (float)fVar30;
                                  uVar10 = F_00cebad0(param_1,0x20);
                                  fVar30 = F_00ceae60(uVar10);
                                  (*(float *)(gen_frame + 0x74c)) = (float)fVar30;
                                  uVar10 = F_00cebad0(param_1,4);
                                  cVar6 = (char)uVar10 + '\x01';
                                  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 0)) = cVar6;
                                  (*(uint *)(gen_frame + 0x750)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x750)), 1, 3),cVar6);
                                  uVar10 = F_00cebad0(param_1,1);
                                  bVar29 = (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 1)) == '\x01';
                                  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 2)) = (char)uVar10;
                                  gen_piece_set(&(*(uint *)(gen_frame + 0x750)), 0, 3, (unsigned long long)(CONCAT12((char)uVar10,(ushort)(*(uint *)(gen_frame + 0x750)))));
                                  if (bVar29) {
                                    uVar10 = F_00cefae0(uVar11,(uint)(*(float * PTR32 *)(gen_frame + 0x734)));
                                  }
                                  else {
                                    uVar10 = uVar11 * (int)(*(float * PTR32 *)(gen_frame + 0x734));
                                  }
                                  (*(uint *)(gen_frame + 0x744)) = uVar10;
                                  pfVar13 = ((float *)GEN_TOP(F_00cefa80(uVar10 * 2,param_1)));
                                  (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar13;
                                  if (pfVar13 == ((float *)GEN_TOP(0x0))) {
                                    ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x28)));
                                    uVar10 = 3;
                                  }
                                  else {
                                    (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x0));
                                    if (0 < (int)uVar10) {
                                      do {
                                        uVar14 = F_00cebad0(param_1,(*(uint *)(gen_frame + 0x750)) & 0xff);
                                        if (uVar14 == 0xffffffff) {
                                          pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28));
                                          if (param_1[9] == 0) {
                                            ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x14)));
                                            pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28));
                                          }
                                          goto override_prt_cf0873_1085496d;
                                        }
                                        *((short *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x14)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x24))) * 2))) =
                                             (short)uVar14;
                                        uVar14 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
                                        (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(uVar14));
                                      } while ((int)uVar14 < (int)uVar10);
                                    }
                                    if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 1)) != '\x01') {
                                      pfVar13 = ((float *)GEN_TOP(F_00cefa40(uVar10 * 4,param_1)));
                                      (*(float * PTR32 *)(gen_frame + 0x730)) = pfVar13;
                                      if (0 < (int)uVar10) {
                                        iVar21 = 0;
                                        do {
                                          pfVar27 = ((float *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x14)) + iVar21 * 2)))));
                                          (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar27;
                                          iVar15 = iVar21 + 1;
                                          pfVar13[iVar21] =
                                               (float)((float10)(int)((int)(uintptr_t)pfVar27) * (float10)(*(float *)(gen_frame + 0x74c)) +
                                                      (float10)(*(float *)(gen_frame + 0x748)));
                                          iVar21 = iVar15;
                                        } while (iVar15 < (int)uVar10);
                                      }
                                      if (param_1[9] == 0) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x14)));
                                      }
                                      if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 1)) != '\x02') goto LAB_00cf0448;
LAB_00cf0425: ;
                                      if ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 2)) != '\0') {
                                        iVar21 = 1;
                                        if (1 < (int)uVar10) {
                                          do {
                                            iVar15 = iVar21 + 1;
                                            (*(float * PTR32 *)(gen_frame + 0x730))[iVar21] = (*(float * PTR32 *)(gen_frame + 0x730))[iVar21 - 1];
                                            iVar21 = iVar15;
                                          } while (iVar15 < (int)uVar10);
                                        }
                                        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 2)) = 0;
                                        gen_piece_set(&(*(uint *)(gen_frame + 0x750)), 0, 3, (unsigned long long)((uint3)(ushort)(*(uint *)(gen_frame + 0x750))));
                                      }
                                      goto LAB_00cf0448;
                                    }
                                    pfVar13 = ((float *)GEN_TOP(F_00cefa40(uVar11 * (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x734))) * 4,
                                                                    param_1)));
                                    (*(float * PTR32 *)(gen_frame + 0x730)) = pfVar13;
                                    if (pfVar13 != ((float *)GEN_TOP(0x0))) {
                                      (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x0));
                                      if (0 < (int)uVar11) {
                                        (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar13;
                                        do {
                                          iVar21 = 1;
                                          if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x734))) {
                                            (*(float * PTR32 *)(gen_frame + 0x8)) = (*(float * PTR32 *)(gen_frame + 0x734));
                                            pfVar13 = (*(float * PTR32 *)(gen_frame + 0x1c));
                                            do {
                                              lVar4 = (longlong)iVar21;
                                              iVar21 = iVar21 * uVar10;
                                              pfVar27 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x8)) - 1)));
                                              (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar27;
                                              pfVar20 = ((float *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x14)) +
                                                                        (int)(((longlong)
                                                                               (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x24))) / lVar4 & 0xffffffffU)
                                                                             % (ulonglong)uVar10) *
                                                                        2)))));
                                              (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar20;
                                              *pfVar13 = (float)((float10)(int)((int)(uintptr_t)pfVar20) * (float10)(*(float *)(gen_frame + 0x74c)) +
                                                                (float10)(*(float *)(gen_frame + 0x748)));
                                              pfVar13 = pfVar13 + 1;
                                            } while (pfVar27 != ((float *)GEN_TOP(0x0)));
                                          }
                                          (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x1c)) + (int)(*(float * PTR32 *)(gen_frame + 0x734));
                                          uVar11 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
                                          (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(uVar11));
                                        } while ((int)uVar11 < (int)(*(uint *)(gen_frame + 0x73c)));
                                      }
                                      if (param_1[9] == 0) {
                                        ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x14)));
                                      }
                                      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 1)) = 2;
                                      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x750)) + 0)) = CONCAT11(2,(char)(*(uint *)(gen_frame + 0x750)));
                                      goto LAB_00cf0425;
                                    }
                                    if (param_1[9] == 0) {
                                      ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x14)));
                                    }
LAB_00cf0924: ;
                                    ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x28)));
                                    uVar10 = 3;
                                  }
                                  goto LAB_00cf0881;
                                }
LAB_00cf0448: ;
                                uVar10 = param_1[9];
                                (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x28));
                                if (uVar10 != 0) {
                                  (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP((param_1[0xb] + uVar10)));
                                }
                                pfVar13 = &(*(float *)(gen_frame + 0x72c));
                                pfVar27 = (*(float * PTR32 *)(gen_frame + 0x1c));
                                for (iVar21 = 10; iVar21 != 0; iVar21 = iVar21 - 1) {
                                  *pfVar27 = *pfVar13;
                                  pfVar13 = pfVar13 + 1;
                                  pfVar27 = pfVar27 + 1;
                                }
                                uVar10 = F_00ceb070((*(float * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x73c)));
                                if (uVar10 == 0) {
                                  pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28));
                                  if (param_1[9] == 0) {
                                    ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                    pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28));
                                  }
                                  goto override_prt_cf0873_1085496d;
                                }
                                if (param_1[9] == 0) {
                                  ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x20)));
                                }
                                iVar21 = (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x1c))[10]) * 4 + 0x2c;
                                uVar10 = F_00cefa40(iVar21,param_1);
                                *((uint *)GEN_TOP((param_1[0x12] + (*(int *)(gen_frame + 0x4)) * 4))) = uVar10;
                                if (*((int *)GEN_TOP((param_1[0x12] + (*(int *)(gen_frame + 0x4)) * 4))) == 0) goto LAB_00cf0924;
                                if (param_1[9] == 0) {
                                  F_00c46aa0(*((undefined4 *)GEN_TOP((param_1[0x12] + (*(int *)(gen_frame + 0x4)) * 4))),
                                             (*(float * PTR32 *)(gen_frame + 0x28)),iVar21);
                                }
                                (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
                              } while ((*(int *)(gen_frame + 0x4)) < (int)param_1[0x11]);
                            }
                            ((code *)REFG(gen_code32, 0x15d92fc))((*(float * PTR32 *)(gen_frame + 0x28)));
                            iVar21 = 0;
                            uVar10 = F_00cebad0(param_1,6);
                            uVar10 = (uint)(byte)((char)uVar10 + 1);
                            if (uVar10 != 0) {
                              do {
                                uVar11 = F_00cebad0(param_1,0x10);
                                if (uVar11 != 0) goto LAB_00cf087c;
                                iVar21 = iVar21 + 1;
                              } while (iVar21 < (int)uVar10);
                            }
                            uVar10 = F_00cebad0(param_1,6);
                            param_1[0x13] = uVar10 + 1;
                            uVar10 = F_00cefa40((uVar10 + 1) * 0xa24,param_1);
                            param_1[0x34] = uVar10;
                            (*(int *)(gen_frame + 0x4)) = 0;
                            if (0 < (int)param_1[0x13]) {
LAB_00cf0580: ;
                              uVar10 = F_00cebad0(param_1,0x10);
                              uVar9 = (ushort)uVar10;
                              *((ushort *)GEN_TOP(((int)param_1 + (*(int *)(gen_frame + 0x4)) * 2 + 0x50))) = uVar9;
                              if (uVar9 < 2) {
                                pbVar22 = ((byte *)GEN_TOP(((*(int *)(gen_frame + 0x4)) * 0xa24 + param_1[0x34])));
                                if (uVar9 != 0) goto code_r0x00cf05af;
                                uVar10 = F_00cebad0(param_1,8);
                                *pbVar22 = (byte)uVar10;
                                uVar10 = F_00cebad0(param_1,0x10);
                                *(short *)(pbVar22 + 2) = (short)uVar10;
                                uVar10 = F_00cebad0(param_1,0x10);
                                *(short *)(pbVar22 + 4) = (short)uVar10;
                                uVar10 = F_00cebad0(param_1,6);
                                pbVar22[6] = (byte)uVar10;
                                uVar10 = F_00cebad0(param_1,8);
                                pbVar22[7] = (byte)uVar10;
                                uVar10 = F_00cebad0(param_1,4);
                                bVar7 = (char)uVar10 + 1;
                                pbVar22[8] = bVar7;
                                iVar21 = 0;
                                if (bVar7 != 0) {
                                  do {
                                    uVar10 = F_00cebad0(param_1,8);
                                    pbVar22[iVar21 + 9] = (byte)uVar10;
                                    iVar21 = iVar21 + 1;
                                  } while (iVar21 < (int)(uint)pbVar22[8]);
                                }
                                uVar10 = 4;
                                goto LAB_00cf0881;
                              }
                              goto LAB_00cf087c;
                            }
LAB_00cf0dc5: ;
                            uVar10 = F_00cebad0(param_1,6);
                            param_1[0x35] = uVar10 + 1;
                            uVar10 = F_00cefa40((uVar10 + 1) * 0x1c,param_1);
                            param_1[0x56] = uVar10;
                            (*(int *)(gen_frame + 0x4)) = 0;
                            if (0 < (int)param_1[0x35]) {
                              (*(float * PTR32 *)(gen_frame + 0x20)) = ((float *)GEN_TOP(0x0));
                              (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)(param_1 + 0x36);
                              do {
                                puVar24 = ((uint *)GEN_TOP((param_1[0x56] + (int)(*(float * PTR32 *)(gen_frame + 0x20)))));
                                uVar10 = F_00cebad0(param_1,0x10);
                                *(ushort *)(*(float * PTR32 *)(gen_frame + 0x1c)) = (ushort)uVar10;
                                if (2 < (ushort)uVar10) goto LAB_00cf087c;
                                uVar10 = F_00cebad0(param_1,0x18);
                                *puVar24 = uVar10;
                                uVar10 = F_00cebad0(param_1,0x18);
                                puVar24[1] = uVar10;
                                uVar10 = F_00cebad0(param_1,0x18);
                                puVar24[2] = uVar10 + 1;
                                uVar10 = F_00ceb540(uVar10 + 1);
                                puVar24[3] = uVar10;
                                uVar10 = F_00cebad0(param_1,6);
                                *(char *)(puVar24 + 4) = (char)uVar10 + '\x01';
                                uVar10 = F_00cebad0(param_1,8);
                                iVar21 = 0;
                                *((char *)GEN_TOP(((int)puVar24 + 0x11))) = (char)uVar10;
                                if ((char)puVar24[4] != '\0') {
                                  do {
                                    (*(byte *)(gen_frame + 0x1b)) = 0;
                                    uVar10 = F_00cebad0(param_1,3);
                                    (*(byte *)(gen_frame + 0xf)) = (byte)uVar10;
                                    uVar10 = F_00cebad0(param_1,1);
                                    if (uVar10 != 0) {
                                      uVar10 = F_00cebad0(param_1,5);
                                      (*(byte *)(gen_frame + 0x1b)) = (byte)uVar10;
                                    }
                                    iVar15 = iVar21 + 1;
                                    ((byte *)(gen_frame + 0x714))[(int)(iVar21)] = (*(byte *)(gen_frame + 0x1b)) * '\b' + (*(byte *)(gen_frame + 0xf));
                                    iVar21 = iVar15;
                                  } while (iVar15 < (int)(uint)(byte)puVar24[4]);
                                }
                                uVar10 = F_00cefa40((uint)(byte)puVar24[4] << 4,param_1);
                                puVar24[6] = uVar10;
                                (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x0));
                                if ((char)puVar24[4] != '\0') {
                                  do {
                                    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
                                    ((byte * PTR32 *)(gen_frame + 0x754))[0] = ((byte *)GEN_TOP((uint)((byte *)(gen_frame + 0x714))[(int)((int)(*(float * PTR32 *)(gen_frame + 0x24)))]));
                                    do {
                                      if (((uint)((byte * PTR32 *)(gen_frame + 0x754))[0] & 1 << GEN_SHC((byte)(*(float * PTR32 *)(gen_frame + 0x28)), (byte)(*(float * PTR32 *)(gen_frame + 0x28)))) == 0)
                                      {
                                        *((undefined2 *)GEN_TOP((puVar24[6] + (int)((*(float * PTR32 *)(gen_frame + 0x28)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x24))) * 2) * 2))) =
                                             0xffff;
                                      }
                                      else {
                                        pfVar13 = (*(float * PTR32 *)(gen_frame + 0x28)) + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x24))) * 2;
                                        uVar10 = F_00cebad0(param_1,8);
                                        *((short *)GEN_TOP(((int)((int)(uintptr_t)pfVar13) * 2 + puVar24[6]))) = (short)uVar10;
                                        if ((int)param_1[0x11] <=
                                            (int)*((short *)GEN_TOP(((int)((int)(uintptr_t)pfVar13) * 2 + puVar24[6]))))
                                        goto LAB_00cf087c;
                                      }
                                      pfVar13 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1)));
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar13;
                                    } while ((int)pfVar13 < 8);
                                    iVar21 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
                                    (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(iVar21));
                                  } while (iVar21 < (int)(uint)(byte)puVar24[4]);
                                }
                                pvVar12 = ((undefined *)GEN_TOP(F_00cefa40(*((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                                                (uint)*((byte *)GEN_TOP(((int
                                                  )puVar24 + 0x11))) * 4))) + 0x10))) * 4,param_1)));
                                puVar24[5] = (uint)pvVar12;
                                if (pvVar12 == ((undefined *)GEN_TOP(0x0))) goto LAB_00cf08b0;
                                F_00c48350(pvVar12,0,
                                        *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                         (uint)*((byte *)GEN_TOP(((int)puVar24 + 0x11))) * 4))) +
                                                0x10))) * 4);
                                (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x0));
                                if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                         (uint)*((byte *)GEN_TOP(((int)puVar24 + 0x11))) * 4))) +
                                                0x10)))) {
                                  do {
                                    pfVar13 = (*(float * PTR32 *)(gen_frame + 0x24));
                                    pbVar22 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                                 (uint)*((byte *)GEN_TOP(((int)puVar24 + 0x11
                                                                                ))) * 4))) + 8)));
                                    ((byte * PTR32 *)(gen_frame + 0x754))[0] = pbVar22;
                                    uVar10 = F_00cefa40(pbVar22,param_1);
                                    *((uint *)GEN_TOP((puVar24[5] + (int)((int)(uintptr_t)pfVar13) * 4))) = uVar10;
                                    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(((byte * PTR32 *)(gen_frame + 0x754))[0] - 1);
                                    if (-1 < (int)(((byte * PTR32 *)(gen_frame + 0x754))[0] - 1)) {
                                      uVar10 = (uint)(byte)puVar24[4];
                                      do {
                                        *((char *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x28)) +
                                                 *((int *)GEN_TOP((puVar24[5] + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x24))) * 4)))))) =
                                             (char)((int)((int)(uintptr_t)pfVar13) % (int)uVar10);
                                        uVar10 = (uint)(byte)puVar24[4];
                                        pfVar13 = ((float *)GEN_TOP(((int)((int)(uintptr_t)pfVar13) / (int)uVar10)));
                                        pfVar27 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x28)) - 1)));
                                        (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar27;
                                      } while (-1 < (int)pfVar27);
                                    }
                                    uVar10 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
                                    (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(uVar10));
                                  } while ((int)uVar10 <
                                           *((int *)GEN_TOP((*((int *)GEN_TOP((param_1[0x12] +
                                                            (uint)*((byte *)GEN_TOP(((int)puVar24 + 0x11))) * 4
                                                            ))) + 0x10))));
                                }
                                (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + 2)));
                                (*(float * PTR32 *)(gen_frame + 0x20)) = (*(float * PTR32 *)(gen_frame + 0x20)) + 7;
                                (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
                              } while ((*(int *)(gen_frame + 0x4)) < (int)param_1[0x35]);
                            }
                            uVar10 = F_00cebad0(param_1,6);
                            param_1[0x57] = uVar10 + 1;
                            uVar10 = F_00cefa40((uVar10 + 1) * 0x28,param_1);
                            param_1[0x58] = uVar10;
                            (*(int *)(gen_frame + 0x4)) = 0;
                            if (0 < (int)param_1[0x57]) {
                              (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(0x0));
                              do {
                                puVar25 = ((ushort *)GEN_TOP((param_1[0x58] + (int)(*(float * PTR32 *)(gen_frame + 0x1c)))));
                                uVar10 = F_00cebad0(param_1,0x10);
                                if (uVar10 != 0) goto LAB_00cf087c;
                                uVar10 = F_00cefa40(param_1[2] * 3,param_1);
                                *(uint *)(puVar25 + 2) = uVar10;
                                uVar10 = F_00cebad0(param_1,1);
                                if (uVar10 == 0) {
                                  *(undefined1 *)(puVar25 + 4) = 1;
                                }
                                else {
                                  uVar10 = F_00cebad0(param_1,4);
                                  *(char *)(puVar25 + 4) = (char)uVar10;
                                }
                                if (bVar7 < (byte)puVar25[4]) {
                                  bVar7 = (byte)puVar25[4];
                                }
                                uVar10 = F_00cebad0(param_1,1);
                                if (uVar10 == 0) {
                                  *puVar25 = 0;
                                }
                                else {
                                  uVar10 = F_00cebad0(param_1,8);
                                  uVar9 = (short)uVar10 + 1;
                                  *puVar25 = uVar9;
                                  (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
                                  if (uVar9 != 0) {
                                    uVar10 = param_1[2];
                                    iVar21 = 0;
                                    do {
                                      iVar15 = 0x1f;
                                      if (uVar10 != 0) {
                                        for (; uVar10 >> iVar15 == 0; iVar15 = iVar15 - 1) {
                                        }
                                      }
                                      if (uVar10 != 0) {
                                        iVar15 = iVar15 + 1;
                                      }
                                      uVar10 = F_00cebad0(param_1,iVar15 - 1);
                                      *((char *)GEN_TOP((iVar21 + *(int *)(puVar25 + 2)))) = (char)uVar10;
                                      iVar15 = 0x1f;
                                      bVar29 = param_1[2] != 0;
                                      if (bVar29) {
                                        for (; param_1[2] >> iVar15 == 0; iVar15 = iVar15 - 1) {
                                        }
                                      }
                                      if (bVar29) {
                                        iVar15 = iVar15 + 1;
                                      }
                                      uVar10 = F_00cebad0(param_1,iVar15 - 1);
                                      *((char *)GEN_TOP((iVar21 + 1 + *(int *)(puVar25 + 2)))) = (char)uVar10;
                                      uVar10 = param_1[2];
                                      pbVar22 = ((byte *)GEN_TOP((iVar21 + *(int *)(puVar25 + 2))));
                                      if ((((int)uVar10 <= (int)(uint)*pbVar22) ||
                                          ((int)uVar10 <= (int)(uint)pbVar22[1])) ||
                                         (*pbVar22 == pbVar22[1])) goto LAB_00cf087c;
                                      pfVar13 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1)));
                                      iVar21 = iVar21 + 3;
                                      (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar13;
                                    } while ((int)pfVar13 < (int)(uint)*puVar25);
                                  }
                                }
                                uVar10 = F_00cebad0(param_1,2);
                                if (uVar10 != 0) goto LAB_00cf087c;
                                if ((byte)puVar25[4] < 2) {
                                  iVar21 = 0;
                                  if (0 < (int)param_1[2]) {
                                    iVar15 = 0;
                                    do {
                                      *((undefined1 *)GEN_TOP((iVar15 + 2 + *(int *)(puVar25 + 2)))) = 0;
                                      iVar21 = iVar21 + 1;
                                      iVar15 = iVar15 + 3;
                                    } while (iVar21 < (int)param_1[2]);
                                  }
                                }
                                else {
                                  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(uVar10));
                                  if (0 < (int)param_1[2]) {
                                    iVar21 = 0;
                                    do {
                                      uVar10 = F_00cebad0(param_1,4);
                                      *((char *)GEN_TOP((iVar21 + 2 + *(int *)(puVar25 + 2)))) = (char)uVar10;
                                      if ((byte)puVar25[4] <=
                                          *((byte *)GEN_TOP((iVar21 + 2 + *(int *)(puVar25 + 2)))))
                                      goto LAB_00cf087c;
                                      uVar10 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
                                      iVar21 = iVar21 + 3;
                                      (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(uVar10));
                                    } while ((int)uVar10 < (int)param_1[2]);
                                  }
                                }
                                if ((char)puVar25[4] != '\0') {
                                  pbVar22 = ((byte *)GEN_TOP(((int)puVar25 + 9)));
                                  ((byte * PTR32 *)(gen_frame + 0x754))[0] = ((byte *)GEN_TOP((-9 - (int)puVar25)));
                                  do {
                                    F_00cebad0(param_1,8);
                                    uVar10 = F_00cebad0(param_1,8);
                                    *pbVar22 = (byte)uVar10;
                                    uVar10 = F_00cebad0(param_1,8);
                                    pbVar22[0xf] = (byte)uVar10;
                                    if (((int)param_1[0x13] <= (int)(uint)*pbVar22) ||
                                       ((int)param_1[0x35] <= (int)(uVar10 & 0xff)))
                                    goto LAB_00cf087c;
                                    pbVar22 = pbVar22 + 1;
                                  } while ((int)(((byte * PTR32 *)(gen_frame + 0x754))[0] + (int)pbVar22) <
                                           (int)(uint)(byte)puVar25[4]);
                                }
                                (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x1c)) + 10;
                                (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
                              } while ((*(int *)(gen_frame + 0x4)) < (int)param_1[0x57]);
                            }
                            uVar10 = F_00cebad0(param_1,6);
                            iVar21 = 0;
                            param_1[0x59] = uVar10 + 1;
                            if (0 < (int)(uVar10 + 1)) {
                              psVar26 = ((short *)GEN_TOP(((int)param_1 + 0x16a)));
                              do {
                                uVar10 = F_00cebad0(param_1,1);
                                *(char *)(psVar26 - 1) = (char)uVar10;
                                uVar10 = F_00cebad0(param_1,0x10);
                                *psVar26 = (short)uVar10;
                                uVar10 = F_00cebad0(param_1,0x10);
                                psVar26[1] = (short)uVar10;
                                uVar10 = F_00cebad0(param_1,8);
                                *((char *)GEN_TOP(((int)psVar26 - 1))) = (char)uVar10;
                                if (((*psVar26 != 0) || (psVar26[1] != 0)) ||
                                   ((int)param_1[0x57] <= (int)(uVar10 & 0xff))) goto LAB_00cf087c;
                                iVar21 = iVar21 + 1;
                                psVar26 = psVar26 + 3;
                              } while (iVar21 < (int)param_1[0x59]);
                            }
                            F_00ceba90(param_1);
                            param_1[0xeb] = 0;
                            uVar10 = F_00cefa40(param_1[2] *
                                                  (((param_1[0x10] & 0x3fffffff) * 2 + 0xf +
                                                    ((*(int *)(gen_frame + 0x0)) + param_1[0x10] * 2) * 2 & 0xfffffff0
                                                   ) + 0x180) + 0xf,param_1);
                            param_1[0xba] = uVar10;
                            iVar21 = 0;
                            uVar10 = uVar10 + 0xf & 0xfffffff0;
                            if (0 < (int)param_1[2]) {
                              puVar24 = param_1 + 0xbb;
                              do {
                                *puVar24 = uVar10;
                                iVar21 = iVar21 + 1;
                                puVar24 = puVar24 + 1;
                                uVar10 = uVar10 + 0x80 + param_1[0x10] * 4;
                              } while (iVar21 < (int)param_1[2]);
                            }
                            iVar21 = 0;
                            if (0 < (int)param_1[2]) {
                              puVar24 = param_1 + 0xdb;
                              do {
                                *puVar24 = uVar10;
                                iVar21 = iVar21 + 1;
                                puVar24 = puVar24 + 1;
                                uVar10 = uVar10 + 0x80 + (param_1[0x10] & 0x3fffffff) * 2;
                              } while (iVar21 < (int)param_1[2]);
                            }
                            iVar21 = 0;
                            if (0 < (int)param_1[2]) {
                              puVar24 = param_1 + 0xec;
                              do {
                                *puVar24 = uVar10;
                                iVar21 = iVar21 + 1;
                                uVar10 = uVar10 + ((*(int *)(gen_frame + 0x0)) * 2 + 0xfU & 0xfffffff0) + 0x80;
                                puVar24 = puVar24 + 1;
                              } while (iVar21 < (int)param_1[2]);
                            }
                            uVar10 = F_00cefbf0(param_1,0,param_1[0xf]);
                            if (uVar10 == 0) {
                              return 0;
                            }
                            uVar10 = F_00cefbf0(param_1,1,param_1[0x10]);
                            if (uVar10 == 0) {
                              return 0;
                            }
                            *((undefined1 *)GEN_TOP(((int)param_1 + 0x535))) = 1;
                            return 1;
                          }
                          bVar29 = param_1[0xd] == 0;
                          uVar10 = 3;
                        }
                        goto LAB_00cf0885;
                      }
                    }
LAB_00cf087c: ;
                    uVar10 = 0x14;
                  }
                }
                else {
                  uVar10 = 5;
                }
              }
            }
            else {
              uVar10 = 0x22;
            }
          }
        }
LAB_00cf0881: ;
        bVar29 = param_1[0xd] == 0;
        goto LAB_00cf0885;
      }
    }
  }
  bVar29 = param_1[0xd] == 0;
  uVar10 = 0x1e;
LAB_00cf0885: ;
  param_1[0xe] = uVar10;
  if (bVar29) {
    param_1[0xe] = uVar10;
  }
  return 0;
code_r0x00cf05af: ;
  ((byte * PTR32 *)(gen_frame + 0x754))[0] = pbVar22;
  (*(float * PTR32 *)(gen_frame + 0x20)) = ((float *)GEN_TOP(0xffffffff));
  uVar10 = F_00cebad0(param_1,5);
  iVar21 = 0;
  *pbVar22 = (byte)uVar10;
  if ((byte)uVar10 != 0) {
    do {
      uVar10 = F_00cebad0(param_1,4);
      pbVar22[iVar21 + 1] = (byte)uVar10;
      if ((int)(*(float * PTR32 *)(gen_frame + 0x20)) < (int)(uVar10 & 0xff)) {
        (*(float * PTR32 *)(gen_frame + 0x20)) = ((float *)GEN_TOP((uVar10 & 0xff)));
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 < (int)(uint)*pbVar22);
  }
  iVar21 = 0;
  if (-1 < (int)(*(float * PTR32 *)(gen_frame + 0x20))) {
    (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)(pbVar22 + 0x52);
    do {
      uVar10 = F_00cebad0(param_1,3);
      pbVar22[iVar21 + 0x21] = (char)uVar10 + 1;
      uVar10 = F_00cebad0(param_1,2);
      pbVar22[iVar21 + 0x31] = (byte)uVar10;
      if ((byte)uVar10 != 0) {
        uVar10 = F_00cebad0(param_1,8);
        pbVar22[iVar21 + 0x41] = (byte)uVar10;
        if ((int)param_1[0x11] <= (int)(uVar10 & 0xff)) goto LAB_00cf087c;
      }
      (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP(0x0));
      if (0 < 1 << GEN_SHC(pbVar22[iVar21 + 0x31], pbVar22[iVar21 + 0x31])) {
        (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x14));
        do {
          uVar10 = F_00cebad0(param_1,8);
          sVar8 = (short)uVar10 - 1;
          *(short *)(*(float * PTR32 *)(gen_frame + 0x1c)) = sVar8;
          if ((int)param_1[0x11] <= (int)sVar8) goto LAB_00cf087c;
          bVar5 = pbVar22[iVar21 + 0x31];
          (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + 2)));
          pfVar13 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x28)) + 1)));
          (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar13;
        } while ((int)pfVar13 < 1 << GEN_SHC(bVar5, bVar5));
      }
      (*(float * PTR32 *)(gen_frame + 0x14)) = (*(float * PTR32 *)(gen_frame + 0x14)) + 4;
      iVar21 = iVar21 + 1;
    } while (iVar21 <= (int)(*(float * PTR32 *)(gen_frame + 0x20)));
  }
  uVar10 = F_00cebad0(param_1,2);
  pbVar22[0xa1c] = (char)uVar10 + 1;
  uVar10 = F_00cebad0(param_1,4);
  pbVar22[0x152] = 0;
  pbVar22[0x153] = 0;
  pbVar22[0xa1d] = (byte)uVar10;
  *(short *)(pbVar22 + 0x154) = 1 << GEN_SHC((byte)uVar10, (unsigned int)(uintptr_t)uVar10);
  pbVar22[0xa20] = 2;
  pbVar22[0xa21] = 0;
  pbVar22[0xa22] = 0;
  pbVar22[0xa23] = 0;
  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x0));
  if (*pbVar22 != 0) {
    do {
      iVar21 = 0;
      (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)GEN_TOP((uint)pbVar22[(int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1]));
      if ((pbVar22 + 0x21)[(int)(uint)pbVar22[(int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1]] != 0) {
        do {
          uVar10 = F_00cebad0(param_1,(uint)pbVar22[0xa1d]);
          *((short *)GEN_TOP((pbVar22 + *(int *)(pbVar22 + 0xa20) * 2 + 0x152))) = (short)uVar10;
          *(int *)(pbVar22 + 0xa20) = *(int *)(pbVar22 + 0xa20) + 1;
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)(uint)pbVar22[(int)((int)(*(float * PTR32 *)(gen_frame + 0x10)) + 0x21)]);
      }
      iVar21 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(iVar21));
    } while (iVar21 < (int)(uint)*pbVar22);
  }
  iVar21 = 0;
  if (0 < *(int *)(pbVar22 + 0xa20)) {
    pbVar18 = pbVar22 + 0x152;
    do {
      *(undefined2 *)(&(*(undefined4 *)(gen_frame + 0x32c)) + iVar21) = *(undefined2 *)pbVar18;
      *((short *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x32c)) + iVar21 * 4 + 2))) = (short)iVar21;
      iVar21 = iVar21 + 1;
      pbVar18 = pbVar18 + 2;
    } while (iVar21 < *(int *)(pbVar22 + 0xa20));
  }
  pfVar20 = *(float * PTR32 *)(pbVar22 + 0xa20);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)&(*(undefined4 *)(gen_frame + 0x32c));
  pfVar13 = (float *)&(*(undefined4 *)(gen_frame + 0x32c));
  pfVar27 = &(*(float *)(gen_frame + 0x328)) + (int)pfVar20;
  pfVar23 = pfVar20;
  do {
    pfVar19 = (*(float * PTR32 *)(gen_frame + 0x28));
    (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) - 3;
    pfVar23 = ((float *)GEN_TOP((((uint)((int)(uintptr_t)pfVar23) >> 1) + ((uint)((int)(uintptr_t)pfVar23) >> 2))));
  } while (pfVar23 != ((float *)GEN_TOP(0x0)));
  pfVar19[-4] = 0.0;
  pbVar22 = ((byte * PTR32 *)(gen_frame + 0x754))[0];
  while (pfVar23 = (*(float * PTR32 *)(gen_frame + 0x28)), ((byte * PTR32 *)(gen_frame + 0x754))[0] = pbVar22, pfVar20 != ((float *)GEN_TOP(0x0))) {
    while (((float *)GEN_TOP(0x1)) < pfVar20) {
      if (pfVar20 == ((float *)GEN_TOP(0x2))) {
        if (*(ushort *)pfVar27 < *(ushort *)pfVar13) {
          fVar17 = *pfVar27;
          fVar3 = *pfVar13;
          *pfVar13 = fVar17;
          *pfVar27 = fVar3;
        }
        break;
      }
      pfVar19 = pfVar13 + ((uint)((int)(uintptr_t)pfVar20) >> 1);
      (*(float * PTR32 *)(gen_frame + 0x20)) = pfVar19;
      uVar9 = *(ushort *)pfVar19;
      uVar1 = *(ushort *)pfVar27;
      if (uVar9 < *(ushort *)pfVar13) {
        if (uVar9 < uVar1) {
          if (*(ushort *)pfVar13 < uVar1) {
            pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar13)));
            (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar16;
            fVar17 = *pfVar19;
            *pfVar13 = fVar17;
            *pfVar19 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
          }
          else {
            pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar27)));
            (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar16;
            fVar17 = *pfVar13;
            *pfVar27 = fVar17;
            *pfVar13 = *pfVar19;
            *pfVar19 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
          }
        }
        else {
          fVar17 = *pfVar27;
          fVar3 = *pfVar13;
          *pfVar13 = fVar17;
          *pfVar27 = fVar3;
        }
      }
      else if (uVar1 < uVar9) {
        if (*(ushort *)pfVar13 < uVar1) {
          pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar19)));
          (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar16;
          fVar17 = *pfVar27;
          *pfVar19 = fVar17;
          *pfVar27 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
        }
        else {
          pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar27)));
          (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar16;
          fVar17 = *pfVar19;
          *pfVar27 = fVar17;
          *pfVar19 = *pfVar13;
          *pfVar13 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
        }
      }
      if (pfVar20 < &REFG(undefined, 0x5)) {
        if (pfVar20 != ((float *)GEN_TOP(0x3))) {
          uVar9 = *(ushort *)(pfVar13 + 1);
          if (*(ushort *)pfVar19 < uVar9) {
            if (uVar9 < *(ushort *)pfVar27) {
              fVar17 = pfVar13[1];
              pfVar13[1] = *pfVar19;
              *pfVar19 = fVar17;
            }
            else {
              fVar17 = *pfVar27;
              *pfVar27 = pfVar13[1];
              pfVar13[1] = *pfVar19;
              *pfVar19 = fVar17;
            }
          }
          else if (uVar9 < *(ushort *)pfVar13) {
            fVar17 = *pfVar13;
            *pfVar13 = pfVar13[1];
            pfVar13[1] = fVar17;
          }
        }
        break;
      }
      if (pfVar23 == (float *)&(*(undefined4 *)(gen_frame + 0x32c))) {
        pfVar19 = pfVar13 + ((uint)((int)(uintptr_t)pfVar20) >> 1);
        uVar10 = (uint)((int)(uintptr_t)pfVar20) >> 1;
LAB_00cf0b35: ;
        uVar11 = uVar10 - 1;
        pfVar19 = pfVar19 - 1;
        (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar19;
        (*(float * PTR32 *)(gen_frame + 0x14)) = ((float *)GEN_TOP((uVar10 + uVar11)));
LAB_00cf0b60: ;
        pfVar16 = pfVar13 + (int)(*(float * PTR32 *)(gen_frame + 0x14));
        (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar16;
        pfVar28 = pfVar16 + 1;
        (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar28;
        uVar9 = *(ushort *)pfVar16;
        (*(float * PTR32 *)(gen_frame + 0x20)) = ((float *)GEN_TOP((uint)uVar9));
        if ((pfVar28 <= pfVar27) && (uVar9 < *(ushort *)pfVar28)) {
          (*(float * PTR32 *)(gen_frame + 0x14)) = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x14)) + 1)));
          (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar28;
          uVar9 = *(ushort *)pfVar28;
        }
        if (*(ushort *)(*(float * PTR32 *)(gen_frame + 0x1c)) < uVar9) goto code_r0x00cf0bc0;
        goto LAB_00cf0bfe;
      }
      uVar9 = *(ushort *)pfVar19;
      (*(float * PTR32 *)(gen_frame + 0x20)) = ((float *)GEN_TOP((uint)uVar9));
      fVar17 = *pfVar19;
      (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar17)));
      *pfVar19 = *pfVar13;
      *pfVar13 = fVar17;
      (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar27;
      pfVar20 = pfVar27;
      pfVar19 = pfVar13;
      while( true ) {
        do {
          pfVar20 = pfVar20 - 1;
        } while (uVar9 < *(ushort *)pfVar20);
        pfVar16 = pfVar19;
        if (pfVar20 <= pfVar19) break;
        do {
          pfVar19 = pfVar16;
          pfVar16 = pfVar19 + 1;
        } while (*(ushort *)pfVar16 < uVar9);
        if (pfVar20 <= pfVar16) break;
        fVar17 = *pfVar16;
        (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar17)));
        *pfVar16 = *pfVar20;
        *pfVar20 = fVar17;
        pfVar19 = pfVar16;
      }
      uVar9 = *(ushort *)pfVar13;
      (*(float * PTR32 *)(gen_frame + 0x20)) = ((float *)GEN_TOP((uint)uVar9));
      fVar17 = *pfVar13;
      *pfVar13 = *pfVar19;
      *pfVar19 = fVar17;
      (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar19;
      pfVar16 = pfVar19;
      do {
        pfVar16 = pfVar16 + 1;
        if (pfVar27 <= pfVar16) break;
      } while (*(ushort *)pfVar16 <= uVar9);
      pfVar19 = pfVar19 - 1;
      (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar16;
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar19;
      if (pfVar13 < pfVar19) {
        do {
          if (*(ushort *)pfVar19 < uVar9) break;
          pfVar19 = pfVar19 - 1;
        } while (pfVar13 < pfVar19);
        (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar19;
      }
      pfVar28 = ((float *)GEN_TOP((((int)pfVar19 - (int)((int)(uintptr_t)pfVar13) >> 2) + 1)));
      pfVar20 = ((float *)GEN_TOP((((int)pfVar27 - (int)((int)(uintptr_t)pfVar16) >> 2) + 1)));
      (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar28;
      if (pfVar20 < pfVar28) {
        pfVar23[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar27)));
        pfVar23[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar20)));
        *pfVar23 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
        pfVar16 = pfVar13;
        pfVar20 = pfVar28;
        pfVar27 = pfVar19;
      }
      else {
        *pfVar23 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar13)));
        pfVar23[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        pfVar23[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar28)));
      }
      pfVar23 = pfVar23 + 3;
      (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar23;
      pfVar13 = pfVar16;
    }
LAB_00cf0c92: ;
    pfVar20 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar23[-1])));
    pfVar13 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar23[-3])));
    pfVar27 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar23[-2])));
    (*(float * PTR32 *)(gen_frame + 0x28)) = pfVar23 - 3;
    pbVar22 = ((byte * PTR32 *)(gen_frame + 0x754))[0];
  }
  iVar21 = 0;
  if (0 < *(int *)(pbVar22 + 0xa20)) {
    do {
      pbVar22[iVar21 + 0x346] = *((byte *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x32c)) + iVar21 * 4 + 2)));
      iVar21 = iVar21 + 1;
    } while (iVar21 < *(int *)(pbVar22 + 0xa20));
  }
  (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(0x2));
  if (2 < *(int *)(pbVar22 + 0xa20)) {
    (*(float * PTR32 *)(gen_frame + 0x20)) = (float *)(pbVar22 + 0x63c);
    (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)(pbVar22 + 0x445);
    do {
      (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)GEN_TOP(0x0));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)GEN_TOP(0x0));
      F_00ceb4d0(pbVar22 + 0x152,(*(float * PTR32 *)(gen_frame + 0x24)),&(*(float * PTR32 *)(gen_frame + 0x8)),&(*(float * PTR32 *)(gen_frame + 0x1c)));
      pfVar13 = (*(float * PTR32 *)(gen_frame + 0x14));
      *(char *)(*(float * PTR32 *)(gen_frame + 0x14)) = (char)(*(float * PTR32 *)(gen_frame + 0x1c));
      *((char *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x14)) - 1))) = (char)(*(float * PTR32 *)(gen_frame + 0x8));
      fVar17 = gen_bits2f(F_00ceb540((uint)*(ushort *)(pbVar22 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x1c))) * 2 + 0x152) -
                                       (uint)*(ushort *)(pbVar22 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x8))) * 2 + 0x152)));
      *(*(float * PTR32 *)(gen_frame + 0x20)) = fVar17;
      uVar10 = (int)(*(float * PTR32 *)(gen_frame + 0x24)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x24)) = ((float *)GEN_TOP(uVar10));
      (*(float * PTR32 *)(gen_frame + 0x20)) = (*(float * PTR32 *)(gen_frame + 0x20)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x14)) = ((float *)GEN_TOP(((int)pfVar13 + 2)));
    } while ((int)uVar10 < *(int *)(pbVar22 + 0xa20));
  }
  if ((*(int *)(gen_frame + 0x0)) < *(int *)(pbVar22 + 0xa20)) {
    (*(int *)(gen_frame + 0x0)) = *(int *)(pbVar22 + 0xa20);
  }
  (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
  if ((int)param_1[0x13] <= (*(int *)(gen_frame + 0x4))) goto LAB_00cf0dc5;
  goto LAB_00cf0580;
code_r0x00cf0bc0: ;
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x1c)))));
  (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar16;
  *(*(float * PTR32 *)(gen_frame + 0x1c)) = *(*(float * PTR32 *)(gen_frame + 0x24));
  *(*(float * PTR32 *)(gen_frame + 0x24)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  pfVar16 = ((float *)GEN_TOP(((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x14))) * 2 + 1)));
  (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x24));
  (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar16;
  if (pfVar20 <= pfVar16) {
LAB_00cf0bfe: ;
    uVar10 = uVar11;
    if (uVar11 == 0) {
      fVar17 = *pfVar13;
      *pfVar13 = *pfVar27;
      *pfVar27 = fVar17;
      pfVar20 = ((float *)GEN_TOP(((int)pfVar20 - 1)));
      pfVar27 = pfVar27 - 1;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar13;
      (*(float * PTR32 *)(gen_frame + 0x14)) = ((float *)GEN_TOP(0x1));
      if (pfVar20 < ((float *)GEN_TOP(0x2))) goto LAB_00cf0c92;
      goto LAB_00cf0b60;
    }
    goto LAB_00cf0b35;
  }
  goto LAB_00cf0b60;
LAB_00cf08b0: ;
  uVar10 = 3;
  goto LAB_00cf0881;
}

/* ref: FUN_00cf1530 */
GEN_LIB GEN_FRAME unsigned int F_00cf1530(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xcf1530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int local_c;
  int local_8;
  
  local_c = 0;
  if (0 < *((int *)GEN_TOP((in_esi + 0xd4)))) {
    local_8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((in_esi + 0x158))) + local_8;
      if (*((int *)GEN_TOP((iVar2 + 0x14))) == 0) {
LAB_00cf15a9: ;
        if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
          ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((iVar2 + 0x18))));
        }
      }
      else {
        iVar1 = 0;
        if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x48))) + (uint)*((byte *)GEN_TOP((iVar2 + 0x11))) * 4))) +
                        0x10)))) {
          do {
            if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
              ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x14))) + iVar1 * 4))));
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x48))) +
                                            (uint)*((byte *)GEN_TOP((iVar2 + 0x11))) * 4))) + 0x10))));
        }
        if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
          ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((iVar2 + 0x14))));
          goto LAB_00cf15a9;
        }
      }
      local_8 = local_8 + 0x1c;
      local_c = local_c + 1;
    } while (local_c < *((int *)GEN_TOP((in_esi + 0xd4))));
  }
  if (*((int *)GEN_TOP((in_esi + 0x48))) != 0) {
    iVar2 = 0;
    if (0 < *((int *)GEN_TOP((in_esi + 0x44)))) {
      do {
        iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x48))) + iVar2 * 4)));
        if ((*((int *)GEN_TOP((in_esi + 0x24))) == 0) &&
           (((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((iVar1 + 4)))), *((int *)GEN_TOP((in_esi + 0x24))) == 0)) {
          ((code *)REFG(gen_code32, 0x15d92fc))(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP((in_esi + 0x44))));
    }
    if (*((int *)GEN_TOP((in_esi + 0x24))) != 0) goto LAB_00cf167a;
    ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0x48))));
  }
  if ((((*((int *)GEN_TOP((in_esi + 0x24))) == 0) &&
       (((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0x420)))), *((int *)GEN_TOP((in_esi + 0x24))) == 0)) &&
      (((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0x424)))), *((int *)GEN_TOP((in_esi + 0x24))) == 0)) &&
     (((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0xd0)))), *((int *)GEN_TOP((in_esi + 0x24))) == 0)) {
    ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0x158))));
  }
LAB_00cf167a: ;
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP((in_esi + 0x15c)))) {
    iVar1 = 0;
    do {
      if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
        ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((in_esi + 0x160))) + 4 + iVar1))));
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x28;
    } while (iVar2 < *((int *)GEN_TOP((in_esi + 0x15c))));
  }
  if ((*((int *)GEN_TOP((in_esi + 0x24))) == 0) &&
     (((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0x160)))), *((int *)GEN_TOP((in_esi + 0x24))) == 0)) {
    ((code *)REFG(gen_code32, 0x15d92fc))(*((undefined4 *)GEN_TOP((in_esi + 0x2e8))));
  }
  puVar3 = ((undefined4 *)GEN_TOP((in_esi + 0x3f8)));
  iVar2 = 2;
  do {
    if (*((int *)GEN_TOP((in_esi + 0x24))) == 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(*puVar3);
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00cf1710 */
GEN_LIB GEN_FRAME unsigned int F_00cf1710(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf1710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 != 0) {
    F_00cf1530(param_1);
  }
  return;
}

/* ref: FUN_00cf1770 */
GEN_LIB GEN_FRAME uint F_00cf1770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcf1770u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  int in_edi;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  in_edi = (*(int *)&gen_args[0]);
  if ((*((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x14))) == *((int *)GEN_TOP(((*(int *)&gen_args[0]) + 0x10)))) &&
     (uVar2 = F_00cefd20((*(int *)&gen_args[0])), uVar2 == 0)) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 0;
  }
  if (-1 < *((int *)GEN_TOP((in_edi + 0x560)))) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    uVar2 = F_00cef3f0(in_edi,(*(int *)&gen_args[1]),(*(int *)&gen_args[2]));
    return uVar2;
  }
  *((int *)GEN_TOP((in_edi + 0x10))) = (*(int *)&gen_args[1]);
  *((int *)GEN_TOP((in_edi + 0x18))) = (*(int *)&gen_args[1]) + (*(int *)&gen_args[2]);
  *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0;
  uVar2 = F_00cef1d0(in_edi,0);
  if (uVar2 == 0) {
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 0;
  }
  uVar2 = F_00cee500(&(*(int *)(gen_frame + 0x4)),&(*(int *)&gen_args[0]),in_edi,&(*(undefined4 *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    uVar2 = F_00cef040(in_edi,(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)),(*(int *)&gen_args[0]));
    iVar4 = 0;
    if (0 < *((int *)GEN_TOP((in_edi + 8)))) {
      piVar3 = ((int *)GEN_TOP((in_edi + 0x32c)));
      do {
        *piVar3 = piVar3[-0x10] + (*(int *)(gen_frame + 0x4)) * 4;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *((int *)GEN_TOP((in_edi + 8))));
    }
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != ((undefined4 *)GEN_TOP(0x0))) {
      *(*(undefined4 * PTR32 *)&gen_args[3]) = *((undefined4 *)GEN_TOP((in_edi + 8)));
    }
    *(*(uint * PTR32 *)&gen_args[5]) = uVar2;
    *(*(int * PTR32 *)&gen_args[4]) = in_edi + 0x32c;
    return *((int *)GEN_TOP((in_edi + 0x10))) - (*(int *)&gen_args[1]);
  }
  iVar4 = *((int *)GEN_TOP((in_edi + 0x38)));
  if (iVar4 != 0x23) {
    if ((iVar4 == 0x20) && (*((int *)GEN_TOP((in_edi + 0x3ac))) == 0)) {
      *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0;
      uVar2 = F_00ceba40(in_edi);
      while ((uVar2 != 0xffffffff && (*((int *)GEN_TOP((in_edi + 0x34))) == 0))) {
        uVar2 = F_00ceba40(in_edi);
      }
      *(*(uint * PTR32 *)&gen_args[5]) = 0;
      return *((int *)GEN_TOP((in_edi + 0x10))) - (*(int *)&gen_args[1]);
    }
    F_00cef3b0(in_edi);
    *((int *)GEN_TOP((in_edi + 0x38))) = iVar4;
    *(*(uint * PTR32 *)&gen_args[5]) = 0;
    return 1;
  }
  *((undefined4 *)GEN_TOP((in_edi + 0x38))) = 0;
  do {
    if (*((char *)GEN_TOP((in_edi + 0x534))) == '\0') {
      if (*((int *)GEN_TOP((in_edi + 0x53c))) == 0) {
        uVar2 = F_00ceb960(in_edi);
        if (uVar2 != 0) goto LAB_00cf1836;
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
LAB_00cf1836: ;
      *((char *)GEN_TOP((in_edi + 0x534))) = *((char *)GEN_TOP((in_edi + 0x534))) - 1;
      bVar1 = **((byte * PTR32 *)GEN_TOP((in_edi + 0x10)));
      *((byte * PTR32 *)GEN_TOP((in_edi + 0x10))) = *((byte * PTR32 *)GEN_TOP((in_edi + 0x10))) + 1;
      uVar2 = (uint)bVar1;
    }
    *((undefined4 *)GEN_TOP((in_edi + 0x548))) = 0;
    *((undefined4 *)GEN_TOP((in_edi + 0x544))) = 0;
    if ((uVar2 == 0xffffffff) || (*((int *)GEN_TOP((in_edi + 0x34))) != 0)) {
      *(*(uint * PTR32 *)&gen_args[5]) = 0;
      return *((int *)GEN_TOP((in_edi + 0x10))) - (*(int *)&gen_args[1]);
    }
  } while( true );
}

/* ref: FUN_00cf1940 */
GEN_LIB_GS GEN_FRAME uint F_00cf1940(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf1940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c4, 12, 4);
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  byte * pbVar4;
  undefined4 * puVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c0));
  F_00c48350(((byte *)(gen_frame + 0x0)),0,0x5bc);
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x560)) = 0xffffffff;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = param_2 + param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = param_1;
  ((byte *)(gen_frame + 0x0))[0x20] = 1;
  uVar1 = F_00cefd20(((byte *)(gen_frame + 0x0)));
  if (uVar1 == 0) {
    if ((*(int *)(gen_frame + 0x34)) != 0) {
      *param_4 = 1;
      return 0;
    }
    *param_4 = (*(undefined4 *)(gen_frame + 0x38));
    return 0;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) + 0x5bc;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x5bc)));
  }
  else {
    if ((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) < (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + 0x5bc) goto LAB_00cf1a87;
    puVar2 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)))));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44)) + 0x5bc;
  }
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    pbVar4 = ((byte *)(gen_frame + 0x0));
    puVar5 = puVar2;
    for (iVar3 = 0x16f; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      puVar5 = puVar5 + 1;
    }
    *param_3 = puVar2[4] - param_1;
    *param_4 = 0;
    return (uint)puVar2;
  }
LAB_00cf1a87: ;
  F_00cf1530(((byte *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_00cf1ab0 */
GEN_LIB GEN_FRAME uint F_00cf1ab0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf1ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_FRAME_DECL_TOP(0x5c0, 0, 4);
  undefined4 * puVar1;
  int iVar2;
  byte * pbVar3;
  undefined4 * puVar4;
  
  F_00c48350(((byte *)(gen_frame + 0x0)),0,0x5bc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  (*(undefined4 *)(gen_frame + 0x560)) = 0xffffffff;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = param_1 + param_2;
  ((byte *)(gen_frame + 0x0))[0x20] = 1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36)) = param_3;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40)) = param_4;
  if (param_3 == ((undefined4 *)GEN_TOP(0x0))) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48)) + 0x5bc;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x5bc)));
  }
  else {
    if (param_4 < 0x5bc) {
      return 0;
    }
    ((byte *)(gen_frame + 0x0))[0x2c] = 0xbc;
    ((byte *)(gen_frame + 0x0))[0x2d] = 5;
    ((byte *)(gen_frame + 0x0))[0x2e] = 0;
    ((byte *)(gen_frame + 0x0))[0x2f] = 0;
    puVar1 = param_3;
  }
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    pbVar3 = ((byte *)(gen_frame + 0x0));
    puVar4 = puVar1;
    for (iVar2 = 0x16f; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *(undefined4 *)pbVar3;
      pbVar3 = pbVar3 + 4;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00cf1b70 */
GEN_LIB GEN_FRAME uint GEN_FASTCALL F_00cf1b70(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf1b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x11318, 8, 4);
  char * pcVar1;
  byte * pbVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  short * psVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  (*(uint *)(gen_frame + 0x11310)) = 0xcf1b7d;
  (*(uint *)(gen_frame + 0x11310)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  pcVar1 = ((char *)GEN_TOP(param_2[4]));
  cVar4 = *pcVar1;
  (*(int *)(gen_frame + 0x10010)) = 0;
  (*(uint *)(gen_frame + 0x10000)) = 0;
  (*(int *)(gen_frame + 0x10004)) = 0;
  param_2[4] = (uint)(pcVar1 + 1);
  if (cVar4 == 'O') {
    cVar4 = pcVar1[1];
    param_2[4] = (uint)(pcVar1 + 2);
    if (cVar4 == 'g') {
      cVar4 = pcVar1[2];
      param_2[4] = (uint)(pcVar1 + 3);
      if ((cVar4 == 'g') && (cVar4 = pcVar1[3], param_2[4] = (uint)(pcVar1 + 4), cVar4 == 'S')) {
        uVar6 = F_00ceb650(param_2);
        if (uVar6 == 0) {
          return 0;
        }
        bVar11 = *((byte *)GEN_TOP(((int)param_2 + 0x533)));
        if (((((bVar11 & 2) == 0) || ((bVar11 & 4) != 0)) || ((bVar11 & 1) != 0)) ||
           (((param_2[0x10c] != 1 || ((char)param_2[0x10d] != '\x1e')) ||
            (cVar4 = *((char *)GEN_TOP(param_2[4])), param_2[4] = (uint)(((char *)GEN_TOP(param_2[4])) + 1),
            cVar4 != '\x01')))) {
          uVar6 = 0x22;
          goto LAB_00cf1bfc;
        }
        uVar6 = F_00ceb5c0(((byte * PTR32 *)(gen_frame + 0x11308)),param_2,6);
        if (uVar6 == 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 10;
          goto LAB_00cf2ada;
        }
        uVar6 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x11308)));
        if (uVar6 == 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 0x22;
          goto LAB_00cf2ada;
        }
        uVar6 = F_00ceb570(param_2);
        if (uVar6 != 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 0x22;
          goto LAB_00cf2ada;
        }
        bVar11 = *((byte *)GEN_TOP(param_2[4]));
        param_2[4] = (uint)(((byte *)GEN_TOP(param_2[4])) + 1);
        uVar6 = (uint)bVar11;
        param_2[2] = uVar6;
        if (uVar6 == 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 0x22;
          goto LAB_00cf2ada;
        }
        if (0x10 < uVar6) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 5;
          goto LAB_00cf2ada;
        }
        uVar6 = F_00ceb570(param_2);
        *param_2 = uVar6;
        if (uVar6 == 0) {
          bVar15 = param_2[0xd] == 0;
          uVar6 = 0x22;
          goto LAB_00cf2ada;
        }
        F_00ceb570(param_2);
        uVar6 = F_00ceb570(param_2);
        param_2[1] = uVar6;
        F_00ceb570(param_2);
        pbVar2 = ((byte *)GEN_TOP(param_2[4]));
        bVar11 = *pbVar2 >> 4;
        uVar6 = *pbVar2 & 0xf;
        param_2[4] = (uint)(pbVar2 + 1);
        param_2[0xf] = 1 << (sbyte)uVar6;
        param_2[0x10] = 1 << bVar11;
        if (((uVar6 - 6 < 8) && (bVar11 - 6 < 8)) && (uVar6 <= bVar11)) {
          bVar11 = pbVar2[1];
          param_2[4] = (uint)(pbVar2 + 2);
          if ((bVar11 & 1) != 0) {
            uVar6 = F_00ceb7e0(param_2);
            if (uVar6 == 0) {
              return 0;
            }
            uVar6 = F_00ceb830(param_2);
            if (uVar6 == 0) {
              return 0;
            }
            do {
              uVar6 = F_00ceb960(param_2);
              param_2[4] = param_2[4] + uVar6;
              if (param_2[6] <= param_2[4]) {
                param_2[0xd] = 1;
              }
              *(undefined1 *)(param_2 + 0x14d) = 0;
            } while (uVar6 != 0);
            uVar6 = F_00ceb830(param_2);
            if (uVar6 == 0) {
              return 0;
            }
            uVar6 = F_00cef1d0(param_2,1);
            if (uVar6 == 0) {
              if (param_2[0xe] != 0x15) {
                return 0;
              }
              param_2[0xe] = 0x14;
              return 0;
            }
            uVar6 = F_00ceba40(param_2);
            if (uVar6 == 5) {
              iVar14 = 0;
              do {
                uVar6 = F_00ceba40(param_2);
                *((char *)GEN_TOP(((int)((byte * PTR32 *)(gen_frame + 0x11308)) + iVar14))) = (char)uVar6;
                iVar14 = iVar14 + 1;
              } while (iVar14 < 6);
              uVar6 = F_00ceb260(((byte * PTR32 *)(gen_frame + 0x11308)));
              if (uVar6 != 0) {
                uVar6 = F_00cebad0(param_2,8);
                uVar6 = uVar6 + 1;
                (*(int *)(gen_frame + 0x10030)) = uVar6 * 4;
                param_2[0x11] = uVar6;
                (*(int *)(gen_frame + 0x1002c)) = 0;
                if (0 < (int)uVar6) {
                  do {
                    uVar6 = F_00cebad0(param_2,8);
                    if ((((char)uVar6 != 'B') ||
                        (uVar6 = F_00cebad0(param_2,8), (char)uVar6 != 'C')) ||
                       (uVar6 = F_00cebad0(param_2,8), (char)uVar6 != 'V')) goto LAB_00cf2ad1;
                    uVar6 = F_00cebad0(param_2,8);
                    uVar7 = F_00cebad0(param_2,8);
                    uVar6 = uVar7 * 0x100 + (uVar6 & 0xff);
                    uVar7 = F_00cebad0(param_2,8);
                    uVar8 = F_00cebad0(param_2,8);
                    uVar9 = F_00cebad0(param_2,8);
                    uVar7 = (uVar9 * 0x100 + (uVar8 & 0xff)) * 0x100 + (uVar7 & 0xff);
                    uVar8 = F_00cebad0(param_2,1);
                    if (uVar8 == 0) {
                      (*(uint *)(gen_frame + 0x10028)) = F_00cebad0(param_2,1);
                    }
                    else {
                      (*(uint *)(gen_frame + 0x10028)) = 0;
                    }
                    (*(int *)(gen_frame + 0x10010)) = (*(int *)(gen_frame + 0x10010)) + (uVar7 + 3 & 0xfffffffc);
                    ((uint *)(gen_frame + 0x10e88))[(int)((*(int *)(gen_frame + 0x1002c)))] = uVar7;
                    ((uint *)(gen_frame + 0x10a88))[(int)((*(int *)(gen_frame + 0x1002c)))] = uVar6;
                    (*(int *)(gen_frame + 0x10024)) = 0;
                    F_00c48350(((int *)(gen_frame + 0x11288)),0,0x80);
                    bVar15 = false;
                    (*(int *)(gen_frame + 0x10034)) = 0;
                    if (uVar8 == 0) {
                      if (0 < (int)uVar7) {
                        do {
                          if (((*(uint *)(gen_frame + 0x10028)) == 0) || (uVar8 = F_00cebad0(param_2,1), uVar8 != 0)) {
                            uVar9 = F_00cebad0(param_2,5);
                            uVar9 = uVar9 + 1;
                            uVar8 = uVar9;
                            if (bVar15) {
                              for (; (0 < (int)uVar8 && (((int *)(gen_frame + 0x11288))[(int)(uVar8)] == 0)); uVar8 = uVar8 - 1)
                              {
                              }
                              if (uVar8 == 0) goto LAB_00cf2ad1;
                              ((byte * PTR32 *)(gen_frame + 0x11308))[0] = ((byte *)GEN_TOP(((int *)(gen_frame + 0x11288))[(int)(uVar8)]));
                              ((int *)(gen_frame + 0x11288))[(int)(uVar8)] = 0;
                              if ((int)uVar8 < (int)uVar9) {
                                iVar14 = 0x20 - uVar9;
                                do {
                                  if ((8 < (int)uVar9) && ((uVar9 & 1) != 0)) {
                                    (*(int *)(gen_frame + 0x10024)) = (*(int *)(gen_frame + 0x10024)) + 4;
                                  }
                                  bVar11 = (byte)iVar14;
                                  uVar10 = uVar9 - 1;
                                  iVar14 = iVar14 + 1;
                                  ((int *)(gen_frame + 0x11288))[(int)(uVar9)] = (int)(((byte * PTR32 *)(gen_frame + 0x11308))[0] + (1 << GEN_SHC(bVar11, bVar11)));
                                  uVar9 = uVar10;
                                } while ((int)uVar8 < (int)uVar10);
                              }
                            }
                            else {
                              uVar8 = 1;
                              bVar15 = true;
                              (*(int *)(gen_frame + 0x10024)) = 0x100;
                              if (0 < (int)uVar9) {
                                bVar11 = 0x1f;
                                do {
                                  ((int *)(gen_frame + 0x11288))[(int)(uVar8)] = 1 << GEN_SHC(bVar11, bVar11);
                                  if ((8 < (int)uVar8) && ((uVar8 & 1) != 0)) {
                                    (*(int *)(gen_frame + 0x10024)) = (*(int *)(gen_frame + 0x10024)) + 4;
                                  }
                                  uVar8 = uVar8 + 1;
                                  bVar11 = bVar11 - 1;
                                } while ((int)uVar8 <= (int)uVar9);
                              }
                            }
                          }
                          (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                        } while ((*(int *)(gen_frame + 0x10034)) < (int)uVar7);
                      }
                    }
                    else {
                      uVar8 = F_00cebad0(param_2,5);
                      uVar8 = uVar8 + 1;
                      if (0 < (int)uVar7) {
                        (*(short * PTR32 *)(gen_frame + 0x10020)) = ((short *)GEN_TOP((0x20 - uVar8)));
                        do {
                          uVar9 = uVar7 - (*(int *)(gen_frame + 0x10034));
                          iVar14 = 0x1f;
                          if (uVar9 != 0) {
                            for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 - 1) {
                            }
                          }
                          if (uVar9 != 0) {
                            iVar14 = iVar14 + 1;
                          }
                          uVar9 = F_00cebad0(param_2,iVar14);
                          if ((int)uVar7 < (int)(uVar9 + (*(int *)(gen_frame + 0x10034)))) goto LAB_00cf2ad1;
                          if (uVar9 == 0xff) {
                            (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 0xff;
                          }
                          else {
                            if (!bVar15) {
                              uVar10 = 1;
                              bVar15 = true;
                              (*(int *)(gen_frame + 0x10024)) = 0x100;
                              if (0 < (int)uVar8) {
                                bVar11 = 0x1f;
                                do {
                                  ((int *)(gen_frame + 0x11288))[(int)(uVar10)] = 1 << GEN_SHC(bVar11, bVar11);
                                  if ((8 < (int)uVar10) && ((uVar10 & 1) != 0)) {
                                    (*(int *)(gen_frame + 0x10024)) = (*(int *)(gen_frame + 0x10024)) + 4;
                                  }
                                  uVar10 = uVar10 + 1;
                                  bVar11 = bVar11 - 1;
                                } while ((int)uVar10 <= (int)uVar8);
                              }
                              (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                              uVar9 = uVar9 - 1;
                            }
                            (*(int *)(gen_frame + 0x10014)) = 0;
                            if (0 < (int)uVar9) {
                              do {
                                (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                                for (uVar10 = uVar8; (0 < (int)uVar10 && (((int *)(gen_frame + 0x11288))[(int)(uVar10)] == 0));
                                    uVar10 = uVar10 - 1) {
                                }
                                if (uVar10 == 0) goto LAB_00cf2ad1;
                                ((byte * PTR32 *)(gen_frame + 0x11308))[0] = ((byte *)GEN_TOP(((int *)(gen_frame + 0x11288))[(int)(uVar10)]));
                                ((int *)(gen_frame + 0x11288))[(int)(uVar10)] = 0;
                                uVar3 = uVar8;
                                psVar12 = (*(short * PTR32 *)(gen_frame + 0x10020));
                                if (uVar8 != uVar10) {
                                  for (; (int)uVar10 < (int)uVar3; uVar3 = uVar3 - 1) {
                                    if ((8 < (int)uVar3) && ((uVar3 & 1) != 0)) {
                                      (*(int *)(gen_frame + 0x10024)) = (*(int *)(gen_frame + 0x10024)) + 4;
                                    }
                                    bVar11 = (byte)psVar12;
                                    psVar12 = ((short *)GEN_TOP(((int)psVar12 + 1)));
                                    ((int *)(gen_frame + 0x11288))[(int)(uVar3)] = (int)(((byte * PTR32 *)(gen_frame + 0x11308))[0] + (1 << GEN_SHC(bVar11, bVar11)));
                                  }
                                }
                                (*(int *)(gen_frame + 0x10014)) = (*(int *)(gen_frame + 0x10014)) + 1;
                              } while ((*(int *)(gen_frame + 0x10014)) < (int)uVar9);
                            }
                          }
                          (*(short * PTR32 *)(gen_frame + 0x10020)) = ((short *)GEN_TOP(((int)(*(short * PTR32 *)(gen_frame + 0x10020)) - 1)));
                          uVar8 = uVar8 + 1;
                        } while ((*(int *)(gen_frame + 0x10034)) < (int)uVar7);
                      }
                    }
                    uVar8 = F_00cebad0(param_2,4);
                    cVar4 = (char)uVar8;
                    if ('\x02' < cVar4) goto LAB_00cf2ad1;
                    if ('\0' < cVar4) {
                      F_00cebad0(param_2,0x20);
                      F_00cebad0(param_2,0x20);
                      uVar8 = F_00cebad0(param_2,4);
                      F_00cebad0(param_2,1);
                      if (cVar4 == '\x01') {
                        uVar9 = F_00cefae0(uVar7,uVar6);
                      }
                      else {
                        uVar9 = uVar7 * uVar6;
                      }
                      (*(int *)(gen_frame + 0x10010)) = (*(int *)(gen_frame + 0x10010)) + (uVar9 * 2 + 3 & 0xfffffffc);
                      (*(int *)(gen_frame + 0x10034)) = 0;
                      if (0 < (int)uVar9) {
                        do {
                          uVar10 = F_00cebad0(param_2,uVar8 + 1);
                          if (uVar10 == 0xffffffff) goto LAB_00cf2ad1;
                          (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                        } while ((*(int *)(gen_frame + 0x10034)) < (int)uVar9);
                      }
                      if (cVar4 == '\x01') {
                        (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + uVar7 * uVar6 * 4;
                      }
                      else {
                        (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + uVar9 * 4;
                      }
                    }
                    (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + (*(int *)(gen_frame + 0x10024)) * 4 + 0x2c;
                    (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 1;
                  } while ((*(int *)(gen_frame + 0x1002c)) < (int)param_2[0x11]);
                }
                uVar6 = F_00cebad0(param_2,6);
                uVar6 = (uint)(byte)((char)uVar6 + 1);
                if (uVar6 != 0) {
                  iVar14 = 0;
                  do {
                    uVar7 = F_00cebad0(param_2,0x10);
                    if (uVar7 != 0) goto LAB_00cf2ad1;
                    iVar14 = iVar14 + 1;
                  } while (iVar14 < (int)uVar6);
                }
                uVar6 = F_00cebad0(param_2,6);
                uVar6 = uVar6 + 1;
                param_2[0x13] = uVar6;
                (*(int *)(gen_frame + 0x1002c)) = 0;
                if (0 < (int)uVar6) {
                  do {
                    uVar7 = F_00cebad0(param_2,0x10);
                    if (1 < uVar7) goto LAB_00cf2ad1;
                    if (uVar7 == 0) {
                      uVar6 = 4;
                      goto LAB_00cf2ad6;
                    }
                    uVar8 = F_00cebad0(param_2,5);
                    uVar7 = 0xffffffff;
                    iVar14 = 0;
                    (*(uint *)(gen_frame + 0x10028)) = 0xffffffff;
                    if ((char)uVar8 != '\0') {
                      do {
                        uVar9 = F_00cebad0(param_2,4);
                        ((byte *)(gen_frame + 0x1003d))[(int)(iVar14)] = (byte)uVar9;
                        if ((int)uVar7 < (int)(uVar9 & 0xff)) {
                          uVar7 = uVar9 & 0xff;
                        }
                        iVar14 = iVar14 + 1;
                        (*(uint *)(gen_frame + 0x10028)) = uVar7;
                      } while (iVar14 < (int)(uVar8 & 0xff));
                    }
                    (*(int *)(gen_frame + 0x10034)) = 0;
                    if (-1 < (int)(*(uint *)(gen_frame + 0x10028))) {
                      (*(short * PTR32 *)(gen_frame + 0x10020)) = ((short *)(gen_frame + 0x1008e));
                      do {
                        uVar7 = F_00cebad0(param_2,3);
                        ((byte *)(gen_frame + 0x1005d))[(int)((*(int *)(gen_frame + 0x10034)))] = (char)uVar7 + 1;
                        uVar7 = F_00cebad0(param_2,2);
                        bVar11 = (byte)uVar7;
                        ((byte *)(gen_frame + 0x1006d))[(int)((*(int *)(gen_frame + 0x10034)))] = bVar11;
                        if (bVar11 != 0) {
                          uVar7 = F_00cebad0(param_2,8);
                          ((undefined1 *)(gen_frame + 0x1007d))[(int)((*(int *)(gen_frame + 0x10034)))] = (char)uVar7;
                          if ((int)param_2[0x11] <= (int)(uVar7 & 0xff)) goto LAB_00cf2ad1;
                        }
                        iVar14 = 0;
                        psVar12 = (*(short * PTR32 *)(gen_frame + 0x10020));
                        if (0 < 1 << GEN_SHC(bVar11, bVar11)) {
                          do {
                            uVar7 = F_00cebad0(param_2,8);
                            sVar5 = (short)uVar7 - 1;
                            *psVar12 = sVar5;
                            if ((int)param_2[0x11] <= (int)sVar5) goto LAB_00cf2ad1;
                            iVar14 = iVar14 + 1;
                            psVar12 = psVar12 + 1;
                          } while (iVar14 < 1 << GEN_SHC(((byte *)(gen_frame + 0x1006d))[(int)((*(int *)(gen_frame + 0x10034)))], ((byte *)(gen_frame + 0x1006d))[(int)((*(int *)(gen_frame + 0x10034)))]));
                        }
                        (*(short * PTR32 *)(gen_frame + 0x10020)) = (*(short * PTR32 *)(gen_frame + 0x10020)) + 8;
                        (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                      } while ((*(int *)(gen_frame + 0x10034)) <= (int)(*(uint *)(gen_frame + 0x10028)));
                    }
                    uVar7 = F_00cebad0(param_2,2);
                    (*(char *)(gen_frame + 0x10a58)) = (char)uVar7 + '\x01';
                    uVar7 = F_00cebad0(param_2,4);
                    ((short *)(gen_frame + 0x1018e))[0] = 0;
                    iVar14 = 2;
                    (*(byte *)(gen_frame + 0x10a59)) = (byte)uVar7;
                    ((short *)(gen_frame + 0x1018e))[1] = 1 << GEN_SHC((byte)uVar7, (unsigned int)(uintptr_t)uVar7);
                    (*(int *)(gen_frame + 0x10a5c)) = 2;
                    (*(int *)(gen_frame + 0x10034)) = 0;
                    if ((char)uVar8 != '\0') {
                      do {
                        iVar13 = 0;
                        if (((byte *)(gen_frame + 0x1005d))[(int)(((byte *)(gen_frame + 0x1003d))[(int)((int)((*(int *)(gen_frame + 0x10034))))])] != 0) {
                          ((byte * PTR32 *)(gen_frame + 0x11308))[0] = ((byte *)(gen_frame + 0x1005d)) + ((byte *)(gen_frame + 0x1003d))[(int)((*(int *)(gen_frame + 0x10034)))];
                          do {
                            uVar7 = F_00cebad0(param_2,(uint)(*(byte *)(gen_frame + 0x10a59)));
                            ((short *)(gen_frame + 0x1018e))[(int)(iVar14)] = (short)uVar7;
                            iVar14 = (*(int *)(gen_frame + 0x10a5c)) + 1;
                            (*(int *)(gen_frame + 0x10a5c)) = iVar14;
                            iVar13 = iVar13 + 1;
                          } while (iVar13 < (int)(uint)*((byte * PTR32 *)(gen_frame + 0x11308))[0]);
                        }
                        (*(int *)(gen_frame + 0x10034)) = (*(int *)(gen_frame + 0x10034)) + 1;
                      } while ((*(int *)(gen_frame + 0x10034)) < (int)(uVar8 & 0xff));
                    }
                    if ((*(int *)(gen_frame + 0x10004)) < iVar14) {
                      (*(int *)(gen_frame + 0x10004)) = iVar14;
                    }
                    (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 1;
                  } while ((*(int *)(gen_frame + 0x1002c)) < (int)uVar6);
                }
                uVar7 = F_00cebad0(param_2,6);
                uVar7 = uVar7 + 1;
                (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + uVar6 * 0xa24 + uVar7 * 0x1c;
                param_2[0x35] = uVar7;
                (*(int *)(gen_frame + 0x1002c)) = 0;
                if (0 < (int)uVar7) {
                  (*(uint * PTR32 *)(gen_frame + 0x10018)) = param_2 + 0x36;
                  do {
                    uVar6 = F_00cebad0(param_2,0x10);
                    *(ushort *)(*(uint * PTR32 *)(gen_frame + 0x10018)) = (ushort)uVar6;
                    if (2 < (ushort)uVar6) goto LAB_00cf2ad1;
                    F_00cebad0(param_2,0x18);
                    F_00cebad0(param_2,0x18);
                    F_00cebad0(param_2,0x18);
                    uVar6 = F_00cebad0(param_2,6);
                    uVar7 = F_00cebad0(param_2,8);
                    (*(byte *)(gen_frame + 0x10a7d)) = (byte)uVar7;
                    uVar6 = uVar6 + 1 & 0xff;
                    iVar14 = 0;
                    if (uVar6 != 0) {
                      do {
                        cVar4 = '\0';
                        uVar7 = F_00cebad0(param_2,3);
                        uVar8 = F_00cebad0(param_2,1);
                        if (uVar8 != 0) {
                          uVar8 = F_00cebad0(param_2,5);
                          cVar4 = (char)uVar8;
                        }
                        iVar13 = iVar14 + 1;
                        ((byte *)(gen_frame + 0x112c8))[(int)(iVar14)] = cVar4 * '\b' + (char)uVar7;
                        iVar14 = iVar13;
                      } while (iVar13 < (int)uVar6);
                    }
                    iVar14 = 0;
                    if (uVar6 != 0) {
                      do {
                        iVar13 = 0;
                        do {
                          if ((((uint)((byte *)(gen_frame + 0x112c8))[(int)(iVar14)] & 1 << GEN_SHC((byte)iVar13, (unsigned int)(uintptr_t)iVar13)) != 0) &&
                             (uVar7 = F_00cebad0(param_2,8), (int)param_2[0x11] <= (int)uVar7))
                          goto LAB_00cf2ad1;
                          iVar13 = iVar13 + 1;
                        } while (iVar13 < 8);
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < (int)uVar6);
                    }
                    uVar7 = ((uint *)(gen_frame + 0x10e88))[(int)((*(byte *)(gen_frame + 0x10a7d)))];
                    (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + uVar6 * 0x10 + uVar7 * 4;
                    if (0 < (int)uVar7) {
                      (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + (((uint *)(gen_frame + 0x10a88))[(int)((*(byte *)(gen_frame + 0x10a7d)))] + 3 & 0xfffffffc) * uVar7;
                    }
                    (*(uint * PTR32 *)(gen_frame + 0x10018)) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x10018)) + 2)));
                    (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 1;
                  } while ((*(int *)(gen_frame + 0x1002c)) < (int)param_2[0x35]);
                }
                uVar6 = F_00cebad0(param_2,6);
                uVar6 = uVar6 + 1;
                (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + uVar6 * 0x28;
                param_2[0x57] = uVar6;
                (*(int *)(gen_frame + 0x1002c)) = 0;
                if (0 < (int)uVar6) {
                  do {
                    uVar6 = F_00cebad0(param_2,0x10);
                    if (uVar6 != 0) goto LAB_00cf2ad1;
                    (*(int *)(gen_frame + 0x10030)) = (*(int *)(gen_frame + 0x10030)) + (param_2[2] * 3 + 3 & 0xfffffffc);
                    uVar6 = F_00cebad0(param_2,1);
                    if (uVar6 == 0) {
                      (*(byte *)(gen_frame + 0x10a68)) = 1;
                    }
                    else {
                      uVar6 = F_00cebad0(param_2,4);
                      (*(byte *)(gen_frame + 0x10a68)) = (byte)uVar6;
                    }
                    uVar6 = (uint)(*(byte *)(gen_frame + 0x10a68));
                    if ((*(uint *)(gen_frame + 0x10000)) < uVar6) {
                      (*(uint *)(gen_frame + 0x10000)) = uVar6;
                    }
                    uVar7 = F_00cebad0(param_2,1);
                    if (uVar7 != 0) {
                      uVar7 = F_00cebad0(param_2,8);
                      uVar7 = uVar7 + 1 & 0xffff;
                      (*(uint *)(gen_frame + 0x10028)) = 0;
                      if (uVar7 != 0) {
                        uVar8 = param_2[2];
                        do {
                          iVar14 = 0x1f;
                          if (uVar8 != 0) {
                            for (; uVar8 >> iVar14 == 0; iVar14 = iVar14 - 1) {
                            }
                          }
                          if (uVar8 != 0) {
                            iVar14 = iVar14 + 1;
                          }
                          uVar9 = F_00cebad0(param_2,iVar14 - 1);
                          iVar14 = 0x1f;
                          bVar15 = param_2[2] != 0;
                          if (bVar15) {
                            for (; param_2[2] >> iVar14 == 0; iVar14 = iVar14 - 1) {
                            }
                          }
                          if (bVar15) {
                            iVar14 = iVar14 + 1;
                          }
                          uVar10 = F_00cebad0(param_2,iVar14 - 1);
                          uVar8 = param_2[2];
                          if ((((int)uVar8 <= (int)uVar9) || ((int)uVar8 <= (int)uVar10)) ||
                             (uVar9 == uVar10)) goto LAB_00cf2ad1;
                          (*(uint *)(gen_frame + 0x10028)) = (*(uint *)(gen_frame + 0x10028)) + 1;
                        } while ((int)(*(uint *)(gen_frame + 0x10028)) < (int)uVar7);
                      }
                    }
                    uVar7 = F_00cebad0(param_2,2);
                    if (uVar7 != 0) goto LAB_00cf2ad1;
                    if ((1 < (*(byte *)(gen_frame + 0x10a68))) && (iVar14 = 0, 0 < (int)param_2[2])) {
                      do {
                        uVar7 = F_00cebad0(param_2,4);
                        if ((int)uVar6 <= (int)uVar7) goto LAB_00cf2ad1;
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < (int)param_2[2]);
                    }
                    iVar14 = 0;
                    if (uVar6 != 0) {
                      do {
                        F_00cebad0(param_2,8);
                        uVar6 = F_00cebad0(param_2,8);
                        ((undefined1 *)(gen_frame + 0x10a69))[(int)(iVar14)] = (char)uVar6;
                        uVar7 = F_00cebad0(param_2,8);
                        ((undefined1 *)(gen_frame + 0x10a78))[(int)(iVar14)] = (char)uVar7;
                        if (((int)param_2[0x13] <= (int)(uVar6 & 0xff)) ||
                           ((int)param_2[0x35] <= (int)(uVar7 & 0xff))) goto LAB_00cf2ad1;
                        iVar14 = iVar14 + 1;
                      } while (iVar14 < (int)(uint)(*(byte *)(gen_frame + 0x10a68)));
                    }
                    (*(int *)(gen_frame + 0x1002c)) = (*(int *)(gen_frame + 0x1002c)) + 1;
                  } while ((*(int *)(gen_frame + 0x1002c)) < (int)param_2[0x57]);
                }
                uVar6 = F_00cebad0(param_2,6);
                iVar14 = 0;
                param_2[0x59] = uVar6 + 1;
                if (0 < (int)(uVar6 + 1)) {
                  psVar12 = ((short *)GEN_TOP(((int)param_2 + 0x16a)));
                  do {
                    uVar6 = F_00cebad0(param_2,1);
                    *(char *)(psVar12 - 1) = (char)uVar6;
                    uVar6 = F_00cebad0(param_2,0x10);
                    *psVar12 = (short)uVar6;
                    uVar6 = F_00cebad0(param_2,0x10);
                    psVar12[1] = (short)uVar6;
                    uVar6 = F_00cebad0(param_2,8);
                    *((char *)GEN_TOP(((int)psVar12 - 1))) = (char)uVar6;
                    if (((*psVar12 != 0) || (psVar12[1] != 0)) ||
                       ((int)param_2[0x57] <= (int)(uVar6 & 0xff))) goto LAB_00cf2ad1;
                    iVar14 = iVar14 + 1;
                    psVar12 = psVar12 + 3;
                  } while (iVar14 < (int)param_2[0x59]);
                }
                F_00ceba90(param_2);
                uVar6 = param_2[0x10];
                uVar7 = param_2[0xf];
                param_2[0xeb] = 0;
                *param_1 = (((int)uVar6 >> 3) * 2 + 3U & 0xfffffffc) +
                           (((int)uVar7 >> 3) * 2 + 3U & 0xfffffffc) + (*(int *)(gen_frame + 0x10030)) +
                           (((uVar6 & 0x3fffffff) * 2 + 0xf + ((*(int *)(gen_frame + 0x10004)) + uVar6 * 2) * 2 &
                            0xfffffff0) + 0x180) * param_2[2] +
                           (((int)uVar7 >> 1) + ((int)uVar7 >> 2) + uVar7) * 4 +
                           (((int)uVar6 >> 1) + ((int)uVar6 >> 2) + uVar6) * 4 + 0x5ec;
                *param_3 = (*(int *)(gen_frame + 0x10010));
                return 1;
              }
            }
            goto LAB_00cf2ad1;
          }
          uVar6 = 0x22;
        }
        else {
LAB_00cf2ad1: ;
          uVar6 = 0x14;
        }
LAB_00cf2ad6: ;
        bVar15 = param_2[0xd] == 0;
LAB_00cf2ada: ;
        param_2[0xe] = uVar6;
        if (bVar15) {
          param_2[0xe] = uVar6;
        }
        return 0;
      }
    }
  }
  uVar6 = 0x1e;
LAB_00cf1bfc: ;
  param_2[0xe] = uVar6;
  if (param_2[0xd] == 0) {
    param_2[0xe] = uVar6;
  }
  return 0;
}

/* ref: FUN_00cf2b00 */
GEN_LIB GEN_FRAME unsigned int F_00cf2b00(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 in_ecx, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf2b00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  F_00cef7d0(param_5,param_3,in_ecx,in_eax,param_4);
  return;
}

/* ref: FUN_00cf2b20 */
GEN_LIB GEN_FRAME unsigned int F_00cf2b20(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 in_edx, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xcf2b20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  F_00cef770(param_3,in_edx,in_eax,param_4);
  return;
}

/* ref: FUN_00cf2b40 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cf2b40(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf2b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if (param_2 == -2) {
    iVar1 = -1;
  }
  else {
    param_1[0x4013] = 0;
    param_1[0x4012] = 0;
    iVar1 = param_2;
  }
  param_1[0xb] = iVar1;
  if (iVar1 != -1) {
    param_1[10] = iVar1;
  }
  iVar1 = *((int *)GEN_TOP(*param_1));
  *((undefined4 *)GEN_TOP((iVar1 + 0x3ac))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x560))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x558))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x3f4))) = 0;
  *((undefined1 *)GEN_TOP((iVar1 + 0x535))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x55c))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5b4))) = 0;
  *((undefined4 *)GEN_TOP((iVar1 + 0x5b8))) = 0;
  *((undefined4 *)GEN_TOP((*param_1 + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((*param_1 + 0x24))) = 0;
  return 0;
}

/* ref: FUN_00cf2c00 */
GEN_LIB GEN_NOFRAME uint F_00cf2c00(GEN_P(int * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xcf2c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *((undefined4 *)GEN_TOP((*in_esi + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((*in_esi + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((*in_esi + 0xc))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(*in_esi));
  uVar3 = F_00cf1770(*puVar1,in_esi[0x10] + puVar1[10],puVar1[9] - puVar1[10],puVar1 + 2,
                       puVar1 + 4,puVar1 + 3);
  *((int *)GEN_TOP((*in_esi + 0x28))) = *((int *)GEN_TOP((*in_esi + 0x28))) + uVar3;
  iVar2 = *((int *)GEN_TOP((*in_esi + 0xc)));
  while( true ) {
    if (0 < iVar2) {
      *((int *)GEN_TOP((*in_esi + 0x14))) = *((int *)GEN_TOP((*in_esi + 0xc))) * in_esi[8];
      return 1;
    }
    iVar2 = *in_esi;
    if (*((int *)GEN_TOP((iVar2 + 0x20))) < *((int *)GEN_TOP((iVar2 + 0x24))) + 0x400) {
      iVar5 = in_esi[0x10] + *((int *)GEN_TOP((iVar2 + 0x28)));
      F_00c46e20(iVar5 - 0x400,iVar5,*((int *)GEN_TOP((iVar2 + 0x24))) - *((int *)GEN_TOP((iVar2 + 0x28))));
      *((int *)GEN_TOP((*in_esi + 0x24))) = *((int *)GEN_TOP((*in_esi + 0x24))) - 0x400;
      *((int *)GEN_TOP((*in_esi + 0x28))) = *((int *)GEN_TOP((*in_esi + 0x28))) - 0x400;
    }
    uVar4 = (*((code *)GEN_TOP(in_esi[2])))
                      (in_esi[1],*((int *)GEN_TOP((*in_esi + 0x24))) + in_esi[0x10],0x400,in_esi[0xb]);
    in_esi[10] = in_esi[10] + uVar4;
    in_esi[0xb] = -1;
    *((int *)GEN_TOP((*in_esi + 0x24))) = *((int *)GEN_TOP((*in_esi + 0x24))) + uVar4;
    if ((uVar4 == 0) && (uVar3 == 0)) break;
    *((undefined4 *)GEN_TOP((*in_esi + 0xc))) = 0;
    puVar1 = ((undefined4 *)GEN_TOP(*in_esi));
    uVar3 = F_00cf1770(*puVar1,in_esi[0x10] + puVar1[10],puVar1[9] - puVar1[10],puVar1 + 2,
                         puVar1 + 4,puVar1 + 3);
    *((int *)GEN_TOP((*in_esi + 0x28))) = *((int *)GEN_TOP((*in_esi + 0x28))) + uVar3;
    iVar2 = *((int *)GEN_TOP((*in_esi + 0xc)));
  }
  return 1;
}

/* ref: FUN_00cf2d10 */
GEN_LIB GEN_FRAME uint F_00cf2d10(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf2d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  int iVar1;
  double dVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 * puVar6;
  uint uVar7;
  int iVar8;
  undefined2 * puVar9;
  float10 fVar10;
  int local_c;
  
  dVar2 = *(double *)&REFG(undefined, 0x10920e0);
  uVar7 = *((uint *)GEN_TOP((*param_1 + 0x14)));
  if ((int)uVar7 < (int)param_2) {
    param_2 = uVar7;
  }
  iVar4 = *((int *)GEN_TOP((*param_1 + 0x18))) / param_1[8];
  iVar1 = iVar4 + (int)param_2 / param_1[8];
  iVar8 = param_1[7];
  if (iVar8 == 1) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10920e0);
    uVar7 = (int)param_3 - ((uint)param_3 & 0xfffffff0);
    puVar9 = param_3;
    for (; ((uVar7 != 0 && (uVar7 < 0x10)) && (iVar4 < iVar1)); iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*param_1 + 0x10))) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
      uVar7 = uVar7 + 2;
    }
    uVar7 = iVar1 - iVar4 & 0xfffffff8;
    if (uVar7 != 0) {
      fVar10 = (float10)F_00cef770(**((int * PTR32 *)GEN_TOP((*param_1 + 0x10))) + iVar4 * 4,uVar7,puVar9,
                                     *(float *)&REFG(undefined, 0x1130ad0));
    }
    puVar9 = puVar9 + uVar7;
    for (iVar4 = iVar4 + uVar7; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*param_1 + 0x10))) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    }
  }
  else if (iVar8 == 2) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10920e0);
    uVar7 = (int)param_3 - ((uint)param_3 & 0xfffffff0);
    puVar9 = param_3;
    for (; ((uVar7 != 0 && (uVar7 < 0x10)) && (iVar4 < iVar1)); iVar4 = iVar4 + 1) {
      iVar8 = (int)((float10)*((float *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*param_1 + 0x10))) + iVar4 * 4))) * fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      *puVar9 = uVar3;
      iVar8 = (int)((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 0x10))) + 4))) + iVar4 * 4))) *
                   fVar10);
      if (iVar8 < 0x7fff) {
        if (iVar8 < -0x7fff) {
          uVar3 = 0x8000;
        }
        else {
          uVar3 = (undefined2)iVar8;
        }
      }
      else {
        uVar3 = 0x7fff;
      }
      puVar9[1] = uVar3;
      puVar9 = puVar9 + 2;
      uVar7 = uVar7 + 4;
    }
    uVar7 = iVar1 - iVar4 & 0xfffffffc;
    if (uVar7 != 0) {
      fVar10 = (float10)F_00cef7d0(uVar7,(*((int * PTR32 *)GEN_TOP((*param_1 + 0x10))))[1] + iVar4 * 4,puVar9,
                                     **((int * PTR32 *)GEN_TOP((*param_1 + 0x10))) + iVar4 * 4,*(float *)&REFG(undefined, 0x1130ad0)
                                    );
    }
    puVar9 = puVar9 + uVar7 * 2;
    local_c = 0;
    iVar8 = uVar7 + iVar4;
    puVar6 = puVar9;
    do {
      for (; iVar8 < iVar1; iVar8 = iVar8 + 1) {
        iVar5 = (int)((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 0x10))) + local_c))) + iVar8 * 4)))
                     * fVar10);
        if (iVar5 < 0x7fff) {
          if (iVar5 < -0x7fff) {
            uVar3 = 0x8000;
          }
          else {
            uVar3 = (undefined2)iVar5;
          }
        }
        else {
          uVar3 = 0x7fff;
        }
        *puVar9 = uVar3;
        puVar9 = puVar9 + 2;
      }
      local_c = local_c + 4;
      puVar9 = puVar6 + 1;
      iVar8 = uVar7 + iVar4;
      puVar6 = puVar9;
    } while (local_c < 8);
  }
  else {
    local_c = 0;
    if (0 < iVar8) {
      do {
        iVar5 = local_c;
        if (iVar8 < 7) {
          iVar5 = *(int *)(&REFG(undefined, 0x1130598) + (local_c + iVar8 * 6) * 4);
        }
        puVar9 = param_3 + iVar5;
        for (iVar8 = iVar4; iVar8 < iVar1; iVar8 = iVar8 + 1) {
          iVar5 = (int)((double)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 0x10))) + local_c * 4))) +
                                          iVar8 * 4))) * dVar2);
          if (iVar5 < 0x7fff) {
            if (iVar5 < -0x7fff) {
              uVar3 = 0x8000;
            }
            else {
              uVar3 = (undefined2)iVar5;
            }
          }
          else {
            uVar3 = 0x7fff;
          }
          *puVar9 = uVar3;
          puVar9 = puVar9 + param_1[7];
        }
        iVar8 = param_1[7];
        local_c = local_c + 1;
      } while (local_c < iVar8);
    }
  }
  *((int *)GEN_TOP((*param_1 + 0x14))) = *((int *)GEN_TOP((*param_1 + 0x14))) - param_2;
  *((int *)GEN_TOP((*param_1 + 0x18))) = *((int *)GEN_TOP((*param_1 + 0x18))) + param_2;
  return param_2;
}

/* ref: FUN_00cf3040 */
GEN_LIB_GS GEN_FRAME uint F_00cf3040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf3040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x5cc, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c8));
  (*(int *)(gen_frame + 0x4)) = param_2;
  param_3[4] = 0;
  F_00c48350(&(*(undefined4 *)(gen_frame + 0x8)),0,0x5bc);
  (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x4)) + param_1;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x568)) = 0xffffffff;
  (*(int *)(gen_frame + 0x18)) = param_1;
  (*(int *)(gen_frame + 0x1c)) = param_1;
  (*(undefined1 *)(gen_frame + 0x28)) = 1;
  uVar1 = F_00cf1b70(&(*(int *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
  if (uVar1 != 0) {
    param_3[3] = (*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x0));
    param_3[1] = (*(undefined4 *)(gen_frame + 0x10));
    param_3[2] = (*(undefined4 *)(gen_frame + 0xc));
    *param_3 = (*(undefined4 *)(gen_frame + 0x8));
    return 1;
  }
  if ((*(int *)(gen_frame + 0x3c)) != 0) {
    param_3[4] = 1;
    return 0;
  }
  param_3[4] = (*(undefined4 *)(gen_frame + 0x40));
  return 0;
}

/* ref: FUN_00cf3160 */
GEN_LIB GEN_NOFRAME uint F_00cf3160(GEN_P(int * in_edi, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a0;)
  int in_esi;
  code * pcVar1;
  uint uVar2;
  
  in_edi[0xc] = in_edi[0xc] + 1;
  if (in_edi[0xc] != 1) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  if (*in_edi != 0) {
    if (in_edi[0x10] != 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(in_edi[0x10]);
    }
    if (*((int *)GEN_TOP(*in_edi)) != 0) {
      in_esi = *((int *)GEN_TOP(*in_edi));
      if (in_esi != 0) {
        F_00cf1530(in_esi);
      }
      *((undefined4 *)GEN_TOP(*in_edi)) = 0;
    }
    if (*((int *)GEN_TOP((*in_edi + 4))) != 0) {
      ((code *)REFG(gen_code32, 0x15d92fc))(*((int *)GEN_TOP((*in_edi + 4))));
    }
    ((code *)REFG(gen_code32, 0x15d92fc))(*in_edi);
    *in_edi = 0;
  }
  in_edi[0xc] = in_edi[0xc] - 1;
  ((code *)REFG(gen_code32, 0x15d92fc))(in_edi);
  return 0;
}

/* ref: FUN_00cf31e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cf31e0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf31e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  code * pcVar1;
  int * in_esi;
  gen_size32 sVar2;
  uint uVar3;
  int iVar4;
  gen_size32 sVar5;
  gen_size32 sVar6;
  
  sVar2 = param_3;
  in_esi = param_1;
  param_1[0xc] = param_1[0xc] + 1;
  if (param_1[0xc] != 1) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  param_1 = ((int *)GEN_TOP(0x0));
  while( true ) {
    sVar5 = in_esi[0x4013];
    if (0 < (int)sVar5) {
      if ((int)param_3 < (int)sVar5) {
        sVar5 = param_3;
      }
      F_00c46aa0((int)param_1 + param_2,(int)in_esi + in_esi[0x4012] + 0x48,sVar5);
      in_esi[0x4012] = in_esi[0x4012] + sVar5;
      in_esi[0x4013] = in_esi[0x4013] - sVar5;
      param_1 = ((int *)GEN_TOP(((int)param_1 + sVar5)));
      param_3 = param_3 - sVar5;
    }
    if (param_3 == 0) goto LAB_00cf32d4;
    in_esi[0x4012] = 0;
    uVar3 = F_00cf2c00(in_esi);
    if (uVar3 == 0) {
      pcVar1 = ((code *)GEN_TOP(swi(3)));
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    sVar5 = *((gen_size32 *)GEN_TOP((*in_esi + 0x14)));
    if (sVar5 == 0) break;
    if (0 < (int)sVar5) {
      sVar6 = param_3;
      if ((int)sVar5 < (int)param_3) {
        sVar6 = sVar5;
      }
      F_00cf2d10(in_esi,sVar6,(int)param_1 + param_2);
      param_1 = ((int *)GEN_TOP(((int)param_1 + sVar6)));
      param_3 = param_3 - sVar6;
      iVar4 = sVar5 - sVar6;
      if (0 < iVar4) {
        F_00cf2d10(in_esi,iVar4,in_esi[0x4013] + 0x48 + (int)in_esi);
        in_esi[0x4013] = in_esi[0x4013] + iVar4;
      }
    }
  }
  if (0 < (int)param_3) {
    F_00c48350(((undefined *)GEN_TOP(((int)param_1 + param_2))),0,param_3);
  }
LAB_00cf32d4: ;
  if ((in_esi[4] <= in_esi[10]) && (param_3 == sVar2)) {
    (*((code *)GEN_TOP(in_esi[2])))(in_esi[1],0,0,in_esi[0xb]);
  }
  in_esi[0xc] = in_esi[0xc] - 1;
  return sVar2 - param_3;
}

/* ref: FUN_00cf3310 */
GEN_LIB GEN_FRAME uint F_00cf3310(GEN_P(int * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined4 * puVar6;
  
  *((undefined4 *)GEN_TOP((*in_eax + 4))) = 0;
  *((undefined4 *)GEN_TOP((*in_eax + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((*in_eax + 0x24))) = 0;
  *((undefined4 *)GEN_TOP((*in_eax + 0x20))) = 0x10000;
  uVar2 = ((code *)REFG(gen_code32, 0x15d92f8))(*((undefined4 *)GEN_TOP((*in_eax + 0x20))));
  in_eax[0x10] = uVar2;
  if (uVar2 == 0) {
    pcVar5 = "ASI_stream_open() failed -- out of memory";
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    return 0;
  }
  uVar2 = (*((code *)GEN_TOP(in_eax[2])))(in_eax[1],uVar2,0x2000,0);
  if (uVar2 == 0) {
    pcVar5 = ((char *)REFP(0x1130a38));
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
    *((char *)GEN_TOP(((int)puVar6 + 2))) = pcVar5[2];
    return 0;
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  uVar3 = F_00cf3040(in_eax[0x10],uVar2,&(*(int *)(gen_frame + 0x0)));
  uVar1 = (*(undefined4 *)(gen_frame + 0xc));
  in_eax[6] = (*(int *)(gen_frame + 0x0));
  in_eax[7] = (*(int *)(gen_frame + 0x4));
  in_eax[9] = (*(int *)(gen_frame + 0x8));
  if (uVar3 != 0) {
    uVar3 = ((code *)REFG(gen_code32, 0x15d92f8))((*(undefined4 *)(gen_frame + 0xc)));
    *((uint *)GEN_TOP((*in_eax + 4))) = uVar3;
    if (*((int *)GEN_TOP((*in_eax + 4))) == 0) {
      pcVar5 = "ASI_stream_open() failed -- out of memory";
      puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = *(undefined2 *)pcVar5;
      return 0;
    }
    uVar3 = F_00cf1ab0(in_eax[0x10],uVar2,*((int *)GEN_TOP((*in_eax + 4))),uVar1);
    *((uint *)GEN_TOP(*in_eax)) = uVar3;
  }
  if (*((int *)GEN_TOP(*in_eax)) == 0) {
    pcVar5 = ((char *)REFP(0x1130a90));
    puVar6 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      puVar6 = puVar6 + 1;
    }
    return 0;
  }
  if (in_eax[9] == 0) {
    in_eax[9] = 320000;
  }
  (((int *)GEN_TOP(*in_eax)))[9] = uVar2;
  *((undefined4 *)GEN_TOP((*in_eax + 0x28))) = 0;
  in_eax[10] = uVar2;
  in_eax[0xb] = -1;
  return 1;
}

/* ref: FUN_00cf3470 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cf3470(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf3470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  undefined * _Dst;
  uint uVar2;
  int iVar3;
  char * pcVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x10050)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    pcVar4 = "ASI_stream_open() failed -- out of memory";
    puVar1 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)pcVar4;
    return 0;
  }
  uVar7 = 0x10050;
  uVar6 = 0;
  puVar5 = puVar1;
  F_00c48350(puVar1,0,0x10050);
  puVar1[0xd] = 0xffffffff;
  puVar1[0xe] = 0xffffffff;
  puVar1[0xf] = 0xffffffff;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  _Dst = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x15d92f8))(0x10034,puVar5,uVar6,uVar7)));
  *puVar1 = _Dst;
  if (_Dst == ((undefined *)GEN_TOP(0x0))) {
    pcVar4 = "ASI_stream_open() failed -- out of memory";
    puVar1 = (undefined4 *)&REFG(undefined1, 0x15d91f8);
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar1 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      puVar1 = puVar1 + 1;
    }
    *(undefined2 *)puVar1 = *(undefined2 *)pcVar4;
    return 0;
  }
  F_00c48350(_Dst,0,0x10034);
  uVar2 = F_00cf3310(puVar1);
  if (uVar2 == 0) {
    F_00cf3160(puVar1);
    return 0;
  }
  puVar1[8] = puVar1[7] * 2;
  return (uint)puVar1;
}

/* ref: FUN_00cf3530 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cf3530(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cf3160(param_1);
  return uVar1;
}

/* ref: FUN_00cf3550 */
GEN_LIB GEN_FRAME uint F_00cf3550(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)(param_1 * param_2) >> 0x15;
}

/* ref: FUN_00cf3560 */
GEN_LIB GEN_FRAME uint F_00cf3560(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP((param_1 + 0x548))) < 8) {
    F_00cebbb0(param_1);
  }
  uVar3 = *((uint *)GEN_TOP((param_1 + 0x544)));
  uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + (uVar3 & 0xff) * 4)));
  if ((int)uVar4 < 0) {
    if (*((int *)GEN_TOP((param_1 + 0x548))) < 0x19) {
      F_00cebbb0(param_1);
    }
    uVar3 = *((uint *)GEN_TOP((param_1 + 0x544)));
    uVar2 = uVar3 >> 8;
    do {
      uVar4 = *((uint *)GEN_TOP((param_2 + 0x2c + ((uVar2 & 3) + 0x80000000 + uVar4) * 4)));
      uVar2 = uVar2 >> 2;
    } while ((int)uVar4 < 0);
  }
  piVar1 = ((int *)GEN_TOP((param_1 + 0x548)));
  *piVar1 = *piVar1 - ((int)uVar4 >> 0x1a);
  *((uint *)GEN_TOP((param_1 + 0x544))) = uVar3 >> GEN_SHC((byte)((int)uVar4 >> 0x1a), (byte)((int)uVar4 >> 0x1a));
  if (*piVar1 < 0) {
    *((undefined4 *)GEN_TOP((param_1 + 0x548))) = 0;
    return 0xffffffff;
  }
  return uVar4 & 0x3ffffff;
}

/* ref: FUN_00cf3600 */
GEN_LIB GEN_FRAME float10 F_00cf3600(GEN_P(float param_1, float gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3600u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar1 = param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  param_2 = (uint)gen_fl2bits((float)(float10)1);
  while( true ) {
    fVar3 = (float10)param_1;
    if ((uVar2 & 1) != 0) {
      param_2 = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_2))) * fVar3));
    }
    uVar2 = uVar2 >> 1;
    if (uVar2 == 0) break;
    param_1 = (float)(fVar3 * fVar3);
  }
  fVar3 = ((float10)GEN_TOD(gen_bits2f(param_2)));
  if ((int)uVar1 < 0) {
    fVar3 = GEN_X87((float10)1 / fVar3);
  }
  return (float10)(float)fVar3;
}

/* ref: FUN_00cf3650 */
GEN_LIB GEN_FRAME float10 F_00cf3650(GEN_P(float param_1, float gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3650u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  
  fVar1 = F_00cf3600(param_1,param_2);
  return fVar1;
}

/* ref: FUN_00cf3668 */
GEN_LIB GEN_NOFRAME uint F_00cf3668(void)
{
  GEN_ENTER(0xcf3668u, 0u, 0u, 0u, 0u);
  uint unaff_ECX = 0;
  
  LOCK();
  UNLOCK();
  return unaff_ECX;
}

/* ref: FUN_00cf3673 */
GEN_LIB GEN_NOFRAME unsigned int F_00cf3673(GEN_P(LONG * param_1, unsigned int gen_a0), GEN_P(LONG param_2, unsigned int gen_a1), GEN_P(LONG param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf3673u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(LONG * param_1 = (LONG *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_2 = (LONG)gen_a1;)
  GEN_PIN(LONG param_3 = (LONG)gen_a2;)
  return (uint)(gen_imp_InterlockedCompareExchange(param_1,param_2,param_3));
}

/* ref: FUN_00cf36bc */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf36bc(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf36bcu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if ((in_ecx == 0) || (param_2 < in_ecx)) {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

/* ref: FUN_00cf36d5 */
GEN_LIB GEN_NOFRAME uint F_00cf36d5(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(char * in_edi, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2), GEN_P(char * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf36d5u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(char * in_edi = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(char * param_4 = (char *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  uint _Count;
  uint uVar1;
  uint uVar2;
  
  _Count = in_eax - 1;
  uVar2 = 0;
  uVar1 = F_01051c9c(in_edi,_Count,param_4,param_5);
  if (((int)uVar1 < 0) || (_Count < uVar1)) {
    in_edi[_Count] = '\0';
    uVar2 = 0x8007007a;
    uVar1 = _Count;
  }
  else if (uVar1 == _Count) {
    in_edi[_Count] = '\0';
    uVar1 = _Count;
  }
  if (param_3 != ((uint *)GEN_TOP(0x0))) {
    *param_3 = uVar1;
  }
  return uVar2;
}

/* ref: XAPOBaseWaveHlpNameSpace::GuidFromWaveFormatTag */
GEN_LIB GEN_NOFRAME undefined * GEN_STDCALL F_00cf371c(GEN_P(undefined * __return_storage_ptr__, unsigned int gen_a0), GEN_P(ushort param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf371cu, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * __return_storage_ptr__ = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort param_1 = (ushort)gen_a1;)
  undefined2 uVar1;
  
  (*(ulong *)((char *)(__return_storage_ptr__))) = REFG(undefined4, 0x1130ad4);
  uVar1 = (*(undefined2 *)((char *)&REFG(undefined4, 0x1130ad8) + 2));
  (*(ushort *)(((char *)(__return_storage_ptr__) + 4))) = (undefined2)REFG(undefined4, 0x1130ad8);
  (*(ushort *)(((char *)(__return_storage_ptr__) + 6))) = uVar1;
  *(undefined4 *)((uchar *)(((char *)(__return_storage_ptr__) + 8))) = REFG(undefined4, 0x1130adc);
  *((undefined4 *)GEN_TOP((((uchar *)(((char *)(__return_storage_ptr__) + 8))) + 4))) = REFG(undefined4, 0x1130ae0);
  (*(ulong *)((char *)(__return_storage_ptr__))) = (uint)param_1;
  return __return_storage_ptr__;
}

/* ref: FUN_00cf373d */
GEN_LIB GEN_NOFRAME uint F_00cf373d(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf373du, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = F_00c61f68(((undefined *)GEN_TOP((param_3 + in_eax))),((undefined *)GEN_TOP((param_4 + in_eax))),in_ecx - in_eax);
  return (uint)(iVar1 == 0);
}

/* ref: FUN_00cf3762 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3762(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3762u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  if (*param_1 == 0x165) {
    uVar1 = 0x20;
  }
  else if (*param_1 == 1) {
    uVar1 = (uint)(param_2 != 0) * 2 + 0x10;
  }
  else {
    uVar1 = (ushort)param_1[8] + 0x12;
  }
  return uVar1;
}

/* ref: FUN_00cf379a */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf379a(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf379au, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  
  pvVar1 = ((undefined *)GEN_TOP(*param_3));
  pvVar2 = ((undefined *)GEN_TOP(F_00cf3762(param_1,1)));
  *param_3 = (uint)pvVar2;
  if (pvVar2 <= pvVar1) {
    uVar3 = F_00cf3762(param_1,0);
    F_00c46aa0(param_2,param_1,uVar3);
    pvVar2 = F_00c48350(((undefined *)GEN_TOP((uVar3 + param_2))),0,(int)pvVar1 - uVar3);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00cf37e7 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf37e7(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf37e7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00cf3762(param_1,0);
  uVar2 = F_00cf3762(param_1,1);
  uVar3 = F_004069f0(uVar2);
  if (uVar3 != 0) {
    F_00c46aa0(uVar3,param_1,uVar1);
    F_00c48350(((undefined *)GEN_TOP((uVar3 + uVar1))),0,uVar2 - uVar1);
  }
  return uVar3;
}

/* ref: FUN_00cf3838 */
GEN_LIB GEN_NOFRAME ushort GEN_STDCALL F_00cf3838(GEN_P(ushort * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3838u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xfffe) {
    iVar2 = F_00c61f68(param_1 + 0xe,&REFG(undefined4, 0x1130ad8),0xc);
    if (iVar2 == 0) {
      uVar1 = param_1[0xc];
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cf3872 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3872(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(ushort * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3872u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x14, 12);
  ushort uVar1;
  uint * puVar2;
  
  uVar1 = *param_2;
  if (uVar1 == 0xfffe) {
    puVar2 = (uint *)(param_2 + 0xc);
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x1130ad4);
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(undefined4, 0x1130ad8);
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(undefined4, 0x1130adc);
    (*(undefined4 *)(gen_frame + 0xc)) = REFG(undefined4, 0x1130ae0);
    (*(uint *)(gen_frame + 0x0)) = (uint)uVar1;
    puVar2 = &(*(uint *)(gen_frame + 0x0));
  }
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  param_1[2] = puVar2[2];
  param_1[3] = puVar2[3];
  return (uint)param_1;
}

/* ref: FUN_00cf38b4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf38b4(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf38b4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 8) {
    uVar1 = *(uint *)(&REFG(undefined, 0x134fbd4) + param_1 * 4);
  }
  return uVar1;
}

/* ref: FUN_00cf38d1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf38d1(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf38d1u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + 0xe)));
  uVar4 = 1;
  if ((((uVar3 != 8) && (uVar3 != 0x10)) && (uVar3 != 0x18)) && (uVar3 != 0x20)) {
    uVar4 = 0;
  }
  if (*(short *)this == -2) {
    uVar1 = *((ushort *)GEN_TOP(((int)this + 0x12)));
    if ((((uVar1 != 0) && (uVar1 != 8)) && ((uVar1 != 0x10 && ((uVar1 != 0x14 && (uVar1 != 0x18)))))
        ) && (uVar1 != 0x20)) {
      uVar4 = 0;
    }
    if (*((ushort *)GEN_TOP(((int)this + 0xe))) < uVar1) {
      uVar4 = 0;
    }
  }
  iVar2 = *((ushort *)GEN_TOP(((int)this + 2))) * uVar3;
  if ((uint)*((ushort *)GEN_TOP(((int)this + 0xc))) != (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) {
    uVar4 = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP(((int)this + 4))) * (uint)*((ushort *)GEN_TOP(((int)this + 0xc)))) {
    uVar4 = 0;
  }
  return uVar4;
}

/* ref: FUN_00cf3951 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf3951(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3951u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(*((ushort *)GEN_TOP(((int)this + 0xe))) == 0x20);
  if (((*(short *)this == -2) && (*((short *)GEN_TOP(((int)this + 0x12))) != 0x20)) &&
     (*((short *)GEN_TOP(((int)this + 0x12))) != 0)) {
    uVar2 = 0;
  }
  iVar1 = (uint)*((ushort *)GEN_TOP(((int)this + 2))) * (uint)*((ushort *)GEN_TOP(((int)this + 0xe)));
  if ((uint)*((ushort *)GEN_TOP(((int)this + 0xc))) != (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) {
    uVar2 = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != *((int *)GEN_TOP(((int)this + 4))) * (uint)*((ushort *)GEN_TOP(((int)this + 0xc)))) {
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00cf39a7 */
GEN_LIB GEN_NOFRAME uint F_00cf39a7(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xcf39a7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  short * psVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  if ((*((short *)GEN_TOP((in_eax + 2))) != 1) && (*((short *)GEN_TOP((in_eax + 2))) != 2)) {
    uVar3 = 0;
  }
  if (*((short *)GEN_TOP((in_eax + 0xe))) != 4) {
    uVar3 = 0;
  }
  if (*((short *)GEN_TOP((in_eax + 0x10))) != 0x20) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    if (*((short *)GEN_TOP((in_eax + 0x14))) == 7) {
      psVar1 = ((short *)GEN_TOP((in_eax + 0x18)));
      iVar2 = 0;
      do {
        if (psVar1[-1] != *((short *)GEN_TOP(((int)&REFG(undefined2, 0x1130ae4) + iVar2)))) {
          uVar3 = 0;
        }
        if (*psVar1 != *((short *)GEN_TOP(((int)&REFG(undefined2, 0x1130af4) + iVar2)))) {
          uVar3 = 0;
        }
        iVar2 = iVar2 + 2;
        psVar1 = psVar1 + 2;
      } while (iVar2 < 0xe);
    }
    else {
      uVar3 = 0;
    }
    if ((uint)*((ushort *)GEN_TOP((in_eax + 0x12))) !=
        (int)(((uint)*((ushort *)GEN_TOP((in_eax + 0xc))) + (uint)*((ushort *)GEN_TOP((in_eax + 2))) * -7) * 8) /
        (int)((uint)*((ushort *)GEN_TOP((in_eax + 2))) << 2) + 2U) {
      uVar3 = 0;
    }
    if (*((ushort *)GEN_TOP((in_eax + 0x12))) == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}

/* ref: XAPOBaseWaveHlpNameSpace::WaveFillSilence */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cf3a6c(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf3a6cu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  ushort uVar1;
  uint _Val;
  
  uVar1 = F_00cf3838(param_3);
  if (uVar1 != 1) {
    uVar1 = F_00cf3838(param_3);
    if (uVar1 != 3) {
      _Val = 0;
      goto LAB_00cf3aa8;
    }
  }
  _Val = (*(short *)(param_3 + 0xe) != 8) - 1 & 0x80;
LAB_00cf3aa8: ;
  return (uint)(F_00c48350(param_1,_Val,param_2));
}

/* ref: FUN_00cf3ab8 */
GEN_LIB GEN_NOFRAME float10 GEN_STDCALL F_00cf3ab8(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcf3ab8u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  double dVar2;
  
  dVar2 = (GEN_X87MATH(((double)param_1),0xd));
  return (float10)(float)dVar2;
}

/* ref: FUN_00cf3ae6 */
GEN_LIB GEN_NOFRAME float10 GEN_STDCALL F_00cf3ae6(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xcf3ae6u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  float10 fVar1;
  
  fVar1 = F_00cf3ab8((float)((float10)param_1 / (float10)*(double *)&REFG(undefined, 0x10920b0)));
  return GEN_X87((float10)(float)((float10)param_1 - fVar1 * (float10)*(double *)&REFG(undefined, 0x10920b0)));
}

/* ref: FUN_00cf3b1e */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf3b1e(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3b1eu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((LPVOID *)GEN_TOP(((int)this + 0xc))) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return 0;
}

/* ref: FUN_00cf3b37 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3b37(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf3b37u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_CoTaskMemAlloc(0x42c);
  uVar2 = (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  if (-1 < (int)uVar2) {
    F_00c46aa0(pvVar1,*((undefined4 *)GEN_TOP((param_1 + 4))),0x42c);
    *param_2 = pvVar1;
  }
  return uVar2;
}

/* ref: FUN_00cf3b7f */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00cf3b7f(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3b7fu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  if (*((LPVOID *)GEN_TOP((param_1 + 0xc))) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP((param_1 + 0xc))));
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  }
  *((undefined4 *)GEN_TOP((param_1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 7;
  *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 1;
  return 0;
}

/* ref: FUN_00cf3bb5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf3bb5(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcf3bb5u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL(0x2c, 4);
  uint uVar1;
  uint * puVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) != (*(uint *)&gen_args[1])) {
    puVar2 = &(*(uint *)&gen_args[0]);
    if (*((uint * PTR32 *)GEN_TOP((param_1 + 0xc))) != ((uint *)GEN_TOP(0x0))) {
      puVar2 = *((uint * PTR32 *)GEN_TOP((param_1 + 0xc)));
    }
    ((byte *)(gen_frame + 0x0))[0xc] = 0;
    ((byte *)(gen_frame + 0x0))[0xd] = 0;
    ((byte *)(gen_frame + 0x0))[0xe] = 0;
    ((byte *)(gen_frame + 0x0))[0xf] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = puVar2;
    (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
    (*(uint *)(gen_frame + 0x18)) = (*(uint *)&gen_args[3]) & 0xffff;
    (*(uint *)(gen_frame + 0x1c)) = (*(uint *)&gen_args[4]) & 0xffff;
    (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[5]);
    (*(undefined4 *)(gen_frame + 0x24)) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
    (*(uint *)&gen_args[0]) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = uVar1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = (*(uint *)&gen_args[1]);
    (*(int *)(gen_frame + 0x14)) = ((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]);
    ((code *)*((gen_code32 *)GEN_TOP((param_1 + 8))))(((byte *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: FUN_00cf3c40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf3c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((LPVOID *)GEN_TOP(((int)this + 0xc))) != (LPVOID)0x0) {
    gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  return 0;
}

/* ref: FUN_00cf3c60 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3c60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf3c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  LONG LVar1;
  ulonglong uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 0x20))) + 0x3c))))(param_1 - 0x20,param_2,param_3);
  if (*((int *)GEN_TOP((param_1 + 0xc))) == 0) {
    LVar1 = gen_imp_InterlockedExchange(((LONG *)GEN_TOP((param_1 + 8))),-1);
    *((LONG *)GEN_TOP((param_1 + 0xc))) = LVar1;
  }
  F_00c46aa0(*((undefined4 *)GEN_TOP((param_1 + 0xc))),param_2,param_3);
  uVar2 = F_00c46aa0(*((int *)GEN_TOP((param_1 + 4))) + *((int *)GEN_TOP((param_1 + 0x14))) * 2,param_2,param_3);
  return (uint)uVar2;
}

/* ref: FUN_00cf3cc0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3cc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf3cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  LONG LVar1;
  ulonglong uVar2;
  
  if (*((int *)GEN_TOP((param_1 + 0x18))) == 1) {
    do {
      LVar1 = gen_imp_InterlockedCompareExchange(((LONG *)GEN_TOP((param_1 + 8))),
                         (*((uint *)GEN_TOP((param_1 + 0x10))) ^ 1) * *((int *)GEN_TOP((param_1 + 0x14))) +
                         *((int *)GEN_TOP((param_1 + 4))),
                         *((uint *)GEN_TOP((param_1 + 0x10))) * *((int *)GEN_TOP((param_1 + 0x14))) +
                         *((int *)GEN_TOP((param_1 + 4))));
    } while (LVar1 == -1);
    *((uint *)GEN_TOP((param_1 + 0x10))) = *((uint *)GEN_TOP((param_1 + 0x10))) ^ 1;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  }
  uVar2 = F_00c46aa0(param_2,(*((uint *)GEN_TOP((param_1 + 0x10))) ^ 1) * *((int *)GEN_TOP((param_1 + 0x14))) +
                             *((int *)GEN_TOP((param_1 + 4))),param_3);
  return (uint)uVar2;
}

/* ref: FUN_00cf3d40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf3d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x3c))) != 0) {
    uVar1 = gen_imp_InterlockedExchange(((LONG *)GEN_TOP(((int)this + 0x28))),-1);
    *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar1;
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)this + 0x2c))) != 0) {
    LOCK();
    UNLOCK();
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  }
  return *((int *)GEN_TOP(((int)this + 0x24))) + *((int *)GEN_TOP(((int)this + 0x34))) * 2;
}

/* ref: CXAPOParametersBase::EndProcess */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf3d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf3d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP((in_ecx + 0x3c))) != 0) {
    LOCK();
    UNLOCK();
    in_EAX = *((uint *)GEN_TOP((in_ecx + 0x2c)));
    *((uint *)GEN_TOP((in_ecx + 0x28))) = in_EAX;
    *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = 1;
    *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00cf3db7 */
GEN_LIB GEN_NOFRAME ushort GEN_STDCALL F_00cf3db7(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3db7u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  for (uVar2 = (ushort)param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cf3dd2 */
GEN_LIB GEN_NOFRAME ushort GEN_STDCALL F_00cf3dd2(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf3dd2u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  ushort uVar1;
  uint uVar2;
  
  uVar1 = 0;
  for (uVar2 = param_1; uVar2 != 0; uVar2 = uVar2 & uVar2 - 1) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: FUN_00cf3e04 */
GEN_LIB GEN_NOFRAME uint F_00cf3e04(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xcf3e04u, gen_a0, gen_a1, gen_a2, 0u);
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
    }
  }
  return uVar1;
}

/* ref: FUN_00cf3e5e */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3e5e(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(uint param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0xcf3e5eu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(uint param_8 = (uint)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  
  if ((ushort)param_6 == 0) {
    if ((ushort)param_3 == 2) {
      param_6 = 4;
    }
    else {
      param_6 = ((ushort)param_3 != 3) - 1 & 0x20;
    }
  }
  else {
    param_6 = (uint)(ushort)param_6;
  }
  param_1[8] = (short)param_2 - 0x12;
  param_1[1] = (ushort)param_4;
  *(int *)(param_1 + 2) = param_5;
  param_1[7] = (ushort)param_6;
  uVar8 = (uint)(ushort)param_4;
  if ((ushort)param_3 == 2) {
    iVar7 = ((ushort)param_9 - 2) * uVar8 * 4;
    uVar4 = (short)((int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3) + (ushort)param_4 * 7;
    param_1[6] = uVar4;
    iVar7 = 0;
    *(uint *)(param_1 + 4) = ((uint)uVar4 * param_5) / (uint)(ushort)param_9;
    param_1[9] = (ushort)param_9;
    param_1[10] = 7;
    puVar6 = param_1 + 0xc;
    do {
      puVar6[-1] = *((ushort *)GEN_TOP(((int)&REFG(undefined2, 0x1130ae4) + iVar7)));
      *puVar6 = *((ushort *)GEN_TOP(((int)&REFG(undefined2, 0x1130af4) + iVar7)));
      iVar7 = iVar7 + 2;
      puVar6 = puVar6 + 2;
    } while (iVar7 < 0xe);
  }
  else {
    uVar5 = (int)(param_6 * uVar8 + ((int)(param_6 * uVar8) >> 0x1f & 7U)) >> 3;
    param_1[6] = (ushort)uVar5;
    puVar6 = ((ushort *)GEN_TOP(((uVar5 & 0xffff) * param_5)));
    *(ushort * PTR32 *)(param_1 + 4) = puVar6;
  }
  if (param_2 == 0x28) {
    *param_1 = 0xfffe;
    uVar3 = REFG(undefined4, 0x1130ae0);
    uVar2 = REFG(undefined4, 0x1130adc);
    uVar1 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_1 + 0xc) = (uint)(ushort)param_3;
    *(undefined4 *)(param_1 + 0xe) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x12) = uVar3;
    uVar4 = (ushort)param_7;
    if ((ushort)param_7 == 0) {
      uVar4 = (ushort)param_6;
    }
    param_1[9] = uVar4;
    uVar5 = param_8;
    if (param_8 == 0xffffffff) {
      uVar5 = F_00cf38b4(uVar8);
    }
    *(uint *)(param_1 + 10) = uVar5;
  }
  else {
    uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)puVar6) >> 0x10),(ushort)param_3);
    *param_1 = (ushort)param_3;
  }
  return uVar5;
}

/* ref: FUN_00cf3fa0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf3fa0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(int param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xcf3fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(int param_7 = (int)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  int iVar2;
  
  if ((short)param_2 == 2) {
    iVar2 = 0x32;
  }
  else {
    iVar2 = param_1;
    if (param_1 == 0) {
      iVar2 = 0x12;
    }
    if (((ushort)param_3 < 3) && (param_7 == 0)) {
      if ((((ushort)param_6 == 0) || ((ushort)param_6 == (ushort)param_5)) &&
         (((short)param_2 != 1 || ((ushort)param_5 < 0x11)))) goto LAB_00cf3fe9;
    }
    iVar2 = 0x28;
  }
LAB_00cf3fe9: ;
  uVar1 = F_004069f0(iVar2);
  if (uVar1 != 0) {
    F_00cf3e5e(uVar1,iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return uVar1;
}

/* ref: FUN_00cf4019 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf4019(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf4019u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  short sVar1;
  uint uVar2;
  ushort * puVar3;
  uint uVar4;
  
  sVar1 = *param_1;
  uVar2 = 0;
  if (sVar1 == 0x165) {
    uVar4 = (uint)(ushort)param_1[4];
    if (uVar4 != 0) {
      puVar3 = (ushort *)(param_1 + 0xf);
      do {
        uVar2 = uVar2 | *puVar3 & 0xff | (uint)(*puVar3 >> 8);
        puVar3 = puVar3 + 10;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if ((sVar1 == 0x166) || (sVar1 == -2)) {
    uVar2 = *(uint *)(param_1 + 10);
  }
  else {
    uVar4 = (uint)(ushort)param_1[1];
    if (uVar4 == 1) {
      uVar2 = 4;
    }
    else if (uVar4 == 2) {
      uVar2 = 3;
    }
    else if (param_2 != 0) {
      uVar2 = F_00cf38b4(uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00cf4093 */
GEN_LIB GEN_NOFRAME uint F_00cf4093(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xcf4093u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  byte bVar1;
  int iVar2;
  ushort uVar3;
  byte * pbVar4;
  uint uVar5;
  uint local_8;
  
  if (*((ushort *)GEN_TOP((in_eax + 0x10))) < 0x20) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*((short *)GEN_TOP((in_eax + 2))) == 0x10);
    if (*((char *)GEN_TOP((in_eax + 0xb))) != '\x02') {
      uVar5 = 0;
    }
    local_8 = (uint)*((ushort *)GEN_TOP((in_eax + 8)));
    if (*((ushort *)GEN_TOP((in_eax + 8))) == 0) {
      uVar5 = 0;
    }
    iVar2 = *((int *)GEN_TOP((in_eax + 0x10)));
    if (iVar2 == 0) {
      uVar5 = 0;
    }
    if (local_8 != 0) {
      pbVar4 = ((byte *)GEN_TOP((in_eax + 0x1c)));
      do {
        if (*(int *)(pbVar4 - 0xc) != iVar2) {
          uVar5 = 0;
        }
        if (4 < (*pbVar4 & 0xf)) {
          uVar5 = 0;
        }
        if (0x30 < (*pbVar4 & 0xf0)) {
          uVar5 = 0;
        }
        bVar1 = pbVar4[1];
        if ((bVar1 != 1) && (bVar1 != 2)) {
          uVar5 = 0;
        }
        if ((*(ushort *)(pbVar4 + 2) != 0) &&
           (uVar3 = F_00cf3db7((uint)*(ushort *)(pbVar4 + 2)), uVar3 != bVar1)) {
          uVar5 = 0;
        }
        pbVar4 = pbVar4 + 0x14;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar5;
}

/* ref: FUN_00cf4139 */
GEN_LIB GEN_NOFRAME uint F_00cf4139(GEN_P(int in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xcf4139u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *((ushort *)GEN_TOP((in_esi + 2)));
  uVar3 = (uint)((uint)*((ushort *)GEN_TOP((in_esi + 0xc))) == (uint)uVar1 * 2);
  if (*((short *)GEN_TOP((in_esi + 0xe))) != 0x10) {
    uVar3 = 0;
  }
  if (*((short *)GEN_TOP((in_esi + 0x10))) == 0x22) {
    if (*((byte *)GEN_TOP((in_esi + 0x31))) < 3) {
      uVar3 = 0;
    }
    if (*((short *)GEN_TOP((in_esi + 0x32))) == 0) {
      uVar3 = 0;
    }
    if ((*((uint *)GEN_TOP((in_esi + 0x1c))) == 0) || (0x7ff800 < *((uint *)GEN_TOP((in_esi + 0x1c))))) {
      uVar3 = 0;
    }
    if ((*((int *)GEN_TOP((in_esi + 0x14))) != 0) &&
       (uVar2 = F_00cf3dd2(*((int *)GEN_TOP((in_esi + 0x14)))), uVar2 != *((ushort *)GEN_TOP((in_esi + 2))))) {
      uVar3 = 0;
    }
    if ((uint)*((ushort *)GEN_TOP((in_esi + 0x12))) != (uVar1 + 1) / 2) {
      uVar3 = 0;
    }
    if (*((uint *)GEN_TOP((in_esi + 0x18))) < (uint)(*((int *)GEN_TOP((in_esi + 0x24))) + *((int *)GEN_TOP((in_esi + 0x20))))) {
      uVar3 = 0;
    }
    if ((uint)(*((int *)GEN_TOP((in_esi + 0x2c))) + *((int *)GEN_TOP((in_esi + 0x28)))) <= *((uint *)GEN_TOP((in_esi + 0x18)))) {
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00cf41f0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf41f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf41f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  short sVar1;
  ushort uVar2;
  uint uVar3;
  char * pcVar4;
  char * pcVar5;
  
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 0x165) {
    uVar3 = F_00cf3e04(param_2,param_3,&REFG(undefined, 0x1130bd4));
  }
  else {
    sVar1 = *((short *)GEN_TOP((param_1 + 2)));
    if (sVar1 == 1) {
      pcVar5 = ((char *)REFP(0x1130bcc));
    }
    else if (sVar1 == 2) {
      pcVar5 = ((char *)REFP(0x1130bc4));
    }
    else if (sVar1 == 3) {
      pcVar5 = ((char *)REFP(0x1130bc0));
    }
    else if (sVar1 == 4) {
      pcVar5 = ((char *)REFP(0x1130bb8));
    }
    else if (sVar1 == 5) {
      pcVar5 = ((char *)REFP(0x1130bb4));
    }
    else if (sVar1 == 6) {
      pcVar5 = ((char *)REFP(0x1130bb0));
    }
    else if (sVar1 == 7) {
      pcVar5 = ((char *)REFP(0x1130bac));
    }
    else {
      pcVar5 = ((char *)REFP(0x1130ba8));
      if (sVar1 != 8) {
        pcVar5 = ((char *)REFP(0x1130b98));
      }
    }
    if (uVar2 == 3) {
      pcVar4 = ((char *)REFP(0x1130b90));
    }
    else if (uVar2 == 2) {
      pcVar4 = ((char *)REFP(0x1130b88));
    }
    else if (uVar2 == 0x166) {
      pcVar4 = ((char *)REFP(0x1130b80));
    }
    else if (uVar2 == 0x161) {
      pcVar4 = ((char *)REFP(0x1130b78));
    }
    else if (uVar2 == 0x162) {
      pcVar4 = ((char *)REFP(0x1130b70));
    }
    else if (uVar2 == 0x164) {
      pcVar4 = ((char *)REFP(0x1130b64));
    }
    else if (uVar2 == 0x92) {
      pcVar4 = ((char *)REFP(0x1130b58));
    }
    else if (uVar2 == 1) {
      sVar1 = *((short *)GEN_TOP((param_1 + 0xe)));
      if (sVar1 == 8) {
        pcVar4 = ((char *)REFP(0x1130b48));
      }
      else if (sVar1 == 0x10) {
        pcVar4 = ((char *)REFP(0x1130b3c));
      }
      else if (sVar1 == 0x18) {
        pcVar4 = ((char *)REFP(0x1130b30));
      }
      else {
        pcVar4 = ((char *)REFP(0x1130b24));
        if (sVar1 != 0x20) {
          pcVar4 = ((char *)REFP(0x1130b10));
        }
      }
    }
    else {
      pcVar4 = ((char *)REFP(0x1130b50));
    }
    uVar3 = F_00cf3e04(param_2,param_3,((char *)REFP(0x1130b04)),*((uint *)GEN_TOP((param_1 + 4))) / 1000,pcVar4,pcVar5);
  }
  return uVar3;
}

/* ref: FUN_00cf436b */
GEN_LIB GEN_NOFRAME unsigned int F_00cf436b(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf436bu, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  float fVar2;
  undefined4 uVar3;
  float * pfVar4;
  bool bVar5;
  float * pfVar6;
  int iVar7;
  
  do {
    iVar7 = 0;
    bVar5 = false;
    if (in_eax - 1 < 1) {
      return 0;
    }
    pfVar4 = param_2;
    do {
      pfVar6 = pfVar4 + 1;
      if ((float10)*pfVar6 < (float10)*pfVar4) {
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar6;
        *pfVar6 = fVar2;
        puVar1 = ((undefined4 *)GEN_TOP((param_3 + iVar7 * 4)));
        uVar3 = *puVar1;
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6)));
        *((undefined4 *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar6))) = uVar3;
        bVar5 = true;
      }
      iVar7 = iVar7 + 1;
      pfVar4 = pfVar6;
    } while (iVar7 < in_eax - 1);
  } while (bVar5);
  return 0;
}

/* ref: FUN_00cf43cb */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf43cb(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf43cbu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  float fVar1;
  double dVar2;
  double dVar4;
  uint uVar5;
  uint uVar6;
  HANDLE pvVar7;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float * pfVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int * piVar16;
  int iVar17;
  int iVar18;
  code * pcVar19;
  int * piVar20;
  undefined4 * puVar21;
  int iVar22;
  float10 fVar23;
  float10 fVar24;
  float fVar25;
  longlong lVar26;
  uint local_24;
  uint local_20;
  undefined4 * puStack_14;
  LPVOID local_10;
  LPVOID local_c;
  uint local_8;
  
  uVar6 = param_2;
  uVar5 = param_1;
  pcVar19 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
  lVar26 = (ulonglong)(param_1 << 2) << 0x20;
  local_20 = 0;
  local_c = (LPVOID)0x0;
  local_10 = (LPVOID)0x0;
  pvVar7 = gen_imp_GetProcessHeap();
  pvVar8 = gen_imp_HeapAlloc(pvVar7,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  if (pvVar8 != (LPVOID)0x0) {
    lVar26 = (ulonglong)(param_2 << 2) << 0x20;
    pvVar7 = gen_imp_GetProcessHeap();
    local_c = gen_imp_HeapAlloc(pvVar7,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
    if (local_c != (LPVOID)0x0) {
      lVar26 = (ulonglong)(param_2 << 2) << 0x20;
      pvVar7 = gen_imp_GetProcessHeap();
      local_10 = gen_imp_HeapAlloc(pvVar7,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
      if (local_10 != (LPVOID)0x0) {
        iVar9 = 0;
        if (0 < (int)param_1) {
          do {
            *((int *)GEN_TOP(((int)pvVar8 + iVar9 * 4))) = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)param_1);
        }
        iVar9 = 0;
        if (0 < (int)param_2) {
          do {
            *((int *)GEN_TOP(((int)local_c + iVar9 * 4))) = iVar9;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)param_2);
        }
        F_00cf436b(param_1,param_3,pvVar8);
        F_00cf436b(param_2,param_4,local_c);
        uVar10 = 0;
        local_24 = param_1;
        local_8 = param_2;
        uVar14 = local_24;
        if (0 < (int)param_1) {
          do {
            fVar25 = *((float *)GEN_TOP((param_3 + uVar10 * 4)));
            uVar14 = uVar10;
            if (!GEN_ISNAN(fVar25) && !(fVar25 < 0.0)) break;
            uVar10 = uVar10 + 1;
            uVar14 = local_24;
          } while ((int)uVar10 < (int)param_1);
        }
        local_24 = uVar14;
        uVar10 = 0;
        uVar14 = local_8;
        if (0 < (int)param_2) {
          do {
            fVar25 = *((float *)GEN_TOP((param_4 + uVar10 * 4)));
            uVar14 = uVar10;
            if (!GEN_ISNAN(fVar25) && !(fVar25 < 0.0)) break;
            uVar10 = uVar10 + 1;
            uVar14 = local_8;
          } while ((int)uVar10 < (int)param_2);
        }
        local_8 = uVar14;
        iVar9 = param_2 - local_8;
        iVar17 = 0;
        if (0 < (int)param_2) {
          puStack_14 = param_5;
          do {
            *((undefined4 *)GEN_TOP(((int)local_10 + iVar17 * 4))) = 0;
            uVar14 = param_1;
            puVar21 = puStack_14;
            if (0 < (int)param_1) {
              for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar21 = 0;
                puVar21 = puVar21 + 1;
              }
            }
            puStack_14 = puStack_14 + param_1;
            iVar17 = iVar17 + 1;
          } while (iVar17 < (int)param_2);
        }
        if (0 < iVar9) {
          if ((int)local_24 < (int)param_1) {
            piVar20 = ((int *)GEN_TOP(((int)pvVar8 + local_24 * 4)));
            iVar17 = param_3 - (int)pvVar8;
            do {
              uVar14 = local_8;
              if ((int)local_8 < (int)param_2) {
                do {
                  fVar23 = (float10)*((float *)GEN_TOP((iVar17 + (int)piVar20)));
                  fVar24 = (float10)*((float *)GEN_TOP((param_4 + uVar14 * 4)));
                  if ((!GEN_ISNAN(fVar24) && !GEN_ISNAN(fVar23)) && !(fVar24 < fVar23)) break;
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 < (int)param_2);
              }
              iVar22 = (int)(uVar14 - local_8) % iVar9 + local_8;
              iVar11 = iVar22 * 4;
              iVar18 = (int)((uVar14 - local_8) - 1 + iVar9) % iVar9 + local_8;
              iVar15 = iVar18 * 4;
              fVar23 = F_00cf3ae6(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar11 + param_4))) -
                                           (float10)*((float *)GEN_TOP((iVar15 + param_4)))))));
              fVar25 = (float)fVar23;
              fVar23 = F_00cf3ae6(((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar17 + (int)piVar20))) -
                                           (float10)*((float *)GEN_TOP((iVar15 + param_4)))))));
              if (iVar18 == iVar22) {
                param_5[*((int *)GEN_TOP((iVar15 + (int)local_c))) * param_1 + *piVar20] =
                     (undefined4)gen_fl2bits(REFG(float, 0x1087f04));
                pfVar12 = ((float *)GEN_TOP(((int)local_10 + *((int *)GEN_TOP((iVar15 + (int)local_c))) * 4)));
                fVar23 = GEN_X87((float10)*pfVar12 + (float10)REFG(double, 0x1088130));
              }
              else {
                if ((GEN_ISNAN(fVar25) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
                    ((GEN_ISNAN(fVar25) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                    fVar25 == *(float *)&REFG(undefined, 0x1088114))) {
                  local_20 = 0x80070057;
                  pcVar19 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
                  goto LAB_00cf4772;
                }
                dVar2 = GEN_X87(((double)GEN_TOD(((((float10)(float)fVar23 / (float10)fVar25) *
                                 (float10)*(double *)&REFG(undefined, 0x1130be0)) * (float10)REFG(double, 0x1088108)))));
                dVar4 = (GEN_X87MATH((dVar2),0xc));
                param_3 = (uint)gen_fl2bits((float)dVar4);
                if (((float10)GEN_TOD(gen_bits2f(param_3))) < (float10)0) {
                  param_3 = 0;
                }
                dVar2 = (GEN_X87MATH((dVar2),0xb));
                puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)dVar2)));
                if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) < (float10)0) {
                  puStack_14 = ((undefined4 *)GEN_TOP(0x0));
                }
                if (param_2 == 1) {
                  puStack_14 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
                  param_3 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
                }
                piVar16 = ((int *)GEN_TOP(((int)local_c + iVar11)));
                param_5[*((int *)GEN_TOP((iVar15 + (int)local_c))) * param_1 + *piVar20] = param_3;
                param_5[*piVar16 * param_1 + *piVar20] = puStack_14;
                pfVar12 = ((float *)GEN_TOP(((int)local_10 + *((int *)GEN_TOP((iVar15 + (int)local_c))) * 4)));
                *pfVar12 = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*pfVar12);
                pfVar12 = ((float *)GEN_TOP(((int)local_10 + *piVar16 * 4)));
                fVar23 = GEN_X87((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puStack_14))) + (float10)*pfVar12);
              }
              local_24 = local_24 + 1;
              *pfVar12 = (float)fVar23;
              piVar20 = piVar20 + 1;
              pcVar19 = (((code *)GEN_TOP(gen_imp_GetProcessHeap)));
            } while ((int)local_24 < (int)param_1);
          }
          iVar9 = 0;
          fVar25 = 0.0;
          param_2 = 0;
          if (0 < (int)uVar6) {
            do {
              fVar1 = *((float *)GEN_TOP(((int)local_10 + iVar9 * 4)));
              if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar1) {
                fVar25 = fVar1;
                param_2 = (uint)gen_fl2bits(fVar1);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)uVar6);
            if (GEN_ISNAN(fVar25) == (GEN_ISNAN(fVar25) || fVar25 == 0.0)) {
              fVar23 = (float10)*(double *)&REFG(undefined, 0x10912a8);
              param_1 = (uint)param_5;
              param_5 = ((undefined4 *)GEN_TOP(uVar6));
              do {
                if (0 < (int)uVar5) {
                  param_4 = uVar5;
                  pfVar12 = ((float *)GEN_TOP(param_1));
                  do {
                    *pfVar12 = ((float)GEN_TOF(((float10)(int)((float10)(float)((float10)*pfVar12 /
                                                                      ((float10)GEN_TOD(gen_bits2f(param_2))))
                                                      * fVar23 + (float10)REFG(double, 0x1088108)) / fVar23)));
                    pfVar12 = pfVar12 + 1;
                    param_4 = param_4 - 1;
                  } while (param_4 != 0);
                }
                param_1 = param_1 + uVar5 * 4;
                param_5 = ((undefined4 *)GEN_TOP(((int)param_5 - 1)));
              } while (param_5 != ((undefined4 *)GEN_TOP(0x0)));
            }
          }
        }
        goto LAB_00cf4772;
      }
    }
  }
  local_20 = 0x8007000e;
LAB_00cf4772: ;
  lVar26 = ZEXT48(pvVar8) << 0x20;
  uVar13 = (*pcVar19)();
  gen_imp_HeapFree(uVar13,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  lVar26 = ZEXT48(local_c) << 0x20;
  uVar13 = (*pcVar19)();
  gen_imp_HeapFree(uVar13,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  lVar26 = ZEXT48(local_10) << 0x20;
  uVar13 = (*pcVar19)();
  gen_imp_HeapFree(uVar13,(int)lVar26,(int)((ulonglong)lVar26 >> 0x20));
  return local_20;
}

/* ref: FUN_00cf47af */
GEN_LIB GEN_NOFRAME uint GEN_FASTCALL F_00cf47af(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf47afu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_FRAME_DECL(0x60, 0);
  float fVar1;
  bool bVar2;
  uint uVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  undefined4 uVar13;
  
  fVar1 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if ((param_1 == 0) || (param_3 == 0)) {
    return 0x80070057;
  }
  if (param_4 != 0) {
    uVar8 = 0;
    uVar3 = param_4;
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if (param_1 != uVar8) {
      return 0x80070057;
    }
  }
  if (param_5 != 0) {
    uVar8 = 0;
    uVar3 = param_5;
    do {
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 & uVar3 - 1;
    } while (uVar3 != 0);
    if (param_3 != uVar8) {
      return 0x80070057;
    }
  }
  if (((param_4 == 0x3f) || (param_4 == 0x60f)) && ((param_5 == 0x3f || (param_5 == 0x60f)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((param_4 == 0) || (param_5 == 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    F_00c48350(param_2,0,param_3 * param_1 * 4);
    uVar3 = param_1;
    if ((int)param_3 < (int)param_1) {
      uVar3 = param_3;
    }
    if (0 < (int)uVar3) {
      do {
        *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
        param_2 = param_2 + param_1 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return 0;
  }
  if (param_4 == 4) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
    if ((int)param_3 < 2) {
      return 0;
    }
    param_2[1] = fVar1;
    if ((int)param_3 < 3) {
      return 0;
    }
    pfVar10 = param_2 + 2;
    for (iVar9 = param_3 - 2; iVar9 != 0; iVar9 = iVar9 - 1) {
      *pfVar10 = 0.0;
      pfVar10 = pfVar10 + 1;
    }
    return 0;
  }
  ((float *)(gen_frame + 0x2c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x2c))[0], REFG(float, 0x1130bfc));
  ((float *)(gen_frame + 0x2c))[1] = gen_bits2f(REFG(float, 0x10947a4));
  ((float *)(gen_frame + 0x2c))[2] = 0.0;
  ((float *)(gen_frame + 0x2c))[3] = gen_bits2f(REFG(float, 0x1130bf8));
  ((float *)(gen_frame + 0x2c))[4] = gen_bits2f(REFG(float, 0x1130bf4));
  ((float *)(gen_frame + 0x2c))[5] = gen_bits2f(REFG(float, 0x1094864));
  ((float *)(gen_frame + 0x2c))[6] = gen_bits2f(REFG(float, 0x1130bf0));
  ((float *)(gen_frame + 0x2c))[7] = gen_bits2f(REFG(float, 0x1094838));
  ((float *)(gen_frame + 0x2c))[8] = gen_bits2f(REFG(float, 0x10943cc));
  iVar9 = param_1 << 2;
  uVar3 = 0;
  ((float *)(gen_frame + 0x2c))[9] = gen_bits2f(REFG(float, 0x1130bec));
  uVar13 = 0;
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x18)) = 1;
  (*(LPVOID *)(gen_frame + 0x4)) = (LPVOID)0x0;
  ((float *)(gen_frame + 0x2c))[10] = gen_bits2f(REFG(float, 0x1130be8));
  pvVar4 = gen_imp_GetProcessHeap();
  pvVar5 = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
  if (pvVar5 != (LPVOID)0x0) {
    iVar9 = param_3 << 2;
    uVar13 = 0;
    pvVar4 = gen_imp_GetProcessHeap();
    (*(LPVOID *)(gen_frame + 0x4)) = gen_imp_HeapAlloc(pvVar4,uVar13,iVar9);
    if ((*(LPVOID *)(gen_frame + 0x4)) != (LPVOID)0x0) {
      uVar6 = 0;
      do {
        if ((param_4 & (*(uint *)(gen_frame + 0x18))) != 0) {
          if (uVar8 != param_1) {
            *((float *)GEN_TOP(((int)pvVar5 + uVar8 * 4))) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
            uVar8 = uVar8 + 1;
            goto LAB_00cf49b0;
          }
LAB_00cf4ab9: ;
          (*(uint *)(gen_frame + 0x20)) = 0x80070057;
          goto LAB_00cf4b4b;
        }
LAB_00cf49b0: ;
        if ((param_5 & (*(uint *)(gen_frame + 0x18))) != 0) {
          if (uVar3 == param_3) goto LAB_00cf4ab9;
          *((float *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4))) = ((float *)(gen_frame + 0x2c))[(int)(uVar6)];
          uVar3 = uVar3 + 1;
        }
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0xb);
      if ((int)uVar8 < (int)param_1) {
        puVar11 = ((undefined4 *)GEN_TOP(((int)pvVar5 + uVar8 * 4)));
        for (iVar9 = param_1 - uVar8; iVar9 != 0; iVar9 = iVar9 - 1) {
          *puVar11 = 0xc3b40000;
          puVar11 = puVar11 + 1;
        }
      }
      if ((int)uVar3 < (int)param_3) {
        puVar11 = ((undefined4 *)GEN_TOP(((int)(*(LPVOID *)(gen_frame + 0x4)) + uVar3 * 4)));
        for (iVar9 = param_3 - uVar3; iVar9 != 0; iVar9 = iVar9 - 1) {
          *puVar11 = 0xc3b40000;
          puVar11 = puVar11 + 1;
        }
      }
      (*(uint *)(gen_frame + 0x20)) = F_00cf43cb(param_1,param_3,(uint)pvVar5,(*(LPVOID *)(gen_frame + 0x4)),param_2);
      if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 1;
        (*(uint *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x0)) = 0;
        do {
          if ((10 < (*(uint *)(gen_frame + 0xc))) || (!(*(float *)&REFG(undefined, 0x1088114) <= ((float *)(gen_frame + 0x2c))[(int)((*(uint *)(gen_frame + 0xc)))]))) {
            if ((((*(uint *)(gen_frame + 0x18)) & param_4) != 0) && ((param_5 & (*(uint *)(gen_frame + 0x18))) != 0)) {
              param_2[(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14))] = GEN_FLT_TO(param_2[(*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x14))], REFG(float, 0x1087f04));
            }
            if (((*(uint *)(gen_frame + 0x18)) & param_4) == 0) {
              if (((param_5 & (*(uint *)(gen_frame + 0x18))) != 0) && (((*(uint *)(gen_frame + 0x18)) & 8) == 0)) {
LAB_00cf4b42: ;
                (*(uint *)(gen_frame + 0x20)) = 0x80004001;
                break;
              }
            }
            else if ((param_5 & (*(uint *)(gen_frame + 0x18))) == 0) {
              if (((*(uint *)(gen_frame + 0x18)) & 8) == 0) goto LAB_00cf4b42;
              if (param_1 == 1) {
                if (0 < (int)param_3) {
                  pfVar10 = param_2;
                  for (uVar3 = param_3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *pfVar10 = (float)((float10)1 / (float10)(int)param_3);
                    pfVar10 = pfVar10 + 1;
                  }
                }
              }
              else {
                fVar1 = ((float)GEN_TOF(((float10)1 / (float10)(int)(param_1 - 1))));
                pfVar10 = param_2;
                uVar3 = param_3;
                if (0 < (int)param_3) {
                  do {
                    iVar9 = 0;
                    if (0 < (int)param_1) {
                      pfVar7 = pfVar10;
                      do {
                        if (iVar9 == (*(int *)(gen_frame + 0x14))) {
                          fVar12 = (float10)fVar1;
                        }
                        else {
                          fVar12 = GEN_X87((float10)(int)param_3 * (float10)*pfVar7);
                        }
                        iVar9 = iVar9 + 1;
                        *pfVar7 = ((float)GEN_TOF((fVar12 / ((float10)(int)param_3 + (float10)fVar1))));
                        pfVar7 = pfVar7 + 1;
                      } while (iVar9 < (int)param_1);
                    }
                    uVar3 = uVar3 - 1;
                    pfVar10 = pfVar10 + param_1;
                  } while (uVar3 != 0);
                }
              }
            }
          }
          if ((param_4 & (*(uint *)(gen_frame + 0x18))) != 0) {
            (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
          }
          if ((param_5 & (*(uint *)(gen_frame + 0x18))) != 0) {
            (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + param_1;
          }
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * 2;
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((*(uint *)(gen_frame + 0xc)) < 0xb);
      }
      goto LAB_00cf4b4b;
    }
  }
  (*(uint *)(gen_frame + 0x20)) = 0x8007000e;
LAB_00cf4b4b: ;
  uVar13 = 0;
  pvVar4 = gen_imp_GetProcessHeap();
  gen_imp_HeapFree(pvVar4,uVar13,pvVar5);
  uVar13 = 0;
  pvVar4 = gen_imp_GetProcessHeap();
  gen_imp_HeapFree(pvVar4,uVar13,(*(LPVOID *)(gen_frame + 0x4)));
  return (*(uint *)(gen_frame + 0x20));
}

/* ref: FUN_00cf4b89 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf4b89(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf4b89u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  short sVar1;
  short * psVar2;
  bool bVar3;
  int iVar4;
  ushort uVar5;
  LPVOID pvVar6;
  float * pfVar7;
  uint uVar8;
  int * piVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  int local_10;
  uint local_c;
  short local_8;
  
  iVar4 = param_1;
  if (param_2 != 0) {
    piVar9 = param_5;
    do {
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x418))) & 2) != 0) {
        F_00cf3838(*((undefined4 *)GEN_TOP((((int)param_3 - (int)param_5) + (int)piVar9))));
        F_00cf3838(*piVar9);
      }
      piVar9 = piVar9 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  local_c = 0;
  if (((byte)*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x418))) & 2) == 2) {
    uVar10 = (uint)*((ushort *)GEN_TOP((*param_3 + 2)));
    uVar8 = (uint)*((ushort *)GEN_TOP((*param_5 + 2)));
    pvVar6 = gen_imp_CoTaskMemAlloc(uVar8 * uVar10 * 4);
    *((LPVOID *)GEN_TOP((param_1 + 0xc))) = pvVar6;
    if (pvVar6 == (LPVOID)0x0) {
      local_c = 0x8007000e;
    }
    else {
      psVar2 = ((short *)GEN_TOP(*param_3));
      sVar1 = psVar2[7];
      param_1 = 0;
      local_8 = sVar1;
      if (*psVar2 == -2) {
        param_1 = *(uint *)(psVar2 + 10);
        local_8 = psVar2[9];
      }
      param_2 = 0;
      if (*((short *)GEN_TOP(*param_5)) == -2) {
        param_2 = *(uint *)(((short *)GEN_TOP(*param_5)) + 10);
      }
      if (param_1 == 0) {
        param_1 = F_00cf38b4(uVar10);
      }
      if (param_2 == 0) {
        param_2 = F_00cf38b4(uVar8);
      }
      local_c = F_00cf47af(uVar10,pvVar6,uVar8,param_1,param_2);
      if (-1 < (int)local_c) {
        *((undefined4 *)GEN_TOP((iVar4 + 0x14))) = 0;
        bVar3 = false;
        if (uVar10 == uVar8) {
          bVar3 = true;
          param_1 = 0;
          if (uVar8 != 0) {
            local_10 = 0;
            do {
              param_2 = 0;
              if (uVar10 != 0) {
                pfVar7 = ((float *)GEN_TOP((local_10 + (int)*((float * PTR32 *)GEN_TOP((iVar4 + 0xc))))));
                do {
                  if (param_2 == param_1) {
                    fVar12 = ((float10)GEN_TOD(**((float * PTR32 *)GEN_TOP((iVar4 + 0xc)))));
                    bVar11 = GEN_ISNAN((float10)*pfVar7) || GEN_ISNAN(fVar12);
                    if (bVar11 == (bVar11 || (float10)*pfVar7 == fVar12)) {
                      bVar3 = false;
                    }
                  }
                  else {
                    bVar11 = GEN_ISNAN(*pfVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                    if (bVar11 == (bVar11 || *pfVar7 == *(float *)&REFG(undefined, 0x1088114))) {
                      bVar3 = false;
                    }
                  }
                  param_2 = param_2 + 1;
                  pfVar7 = pfVar7 + 1;
                } while (param_2 < uVar10);
              }
              param_1 = param_1 + 1;
              local_10 = local_10 + uVar10 * 4;
            } while (param_1 < uVar8);
          }
        }
        if (bVar3) {
          gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP((iVar4 + 0xc))));
          *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = 0;
          *((undefined4 *)GEN_TOP((iVar4 + 0x14))) = 1;
        }
        uVar5 = F_00cf3838(*param_3);
        if (uVar5 == 1) {
          if (sVar1 == 0x20) {
            if (local_8 == 0x20) {
              uVar13 = 6;
            }
            else if (local_8 == 0x18) {
              uVar13 = 5;
            }
            else {
              uVar13 = 3;
            }
          }
          else {
            if (sVar1 != 0x18) {
              if (sVar1 == 0x10) {
                uVar8 = F_00cfeb30(1,uVar10,uVar8,bVar3);
                *((uint *)GEN_TOP((iVar4 + 8))) = uVar8;
                *((undefined4 *)GEN_TOP((iVar4 + 0x10))) = 1;
              }
              else {
                uVar8 = F_00cfeb30(0,uVar10,uVar8,bVar3);
                *((undefined4 *)GEN_TOP((iVar4 + 0x10))) = 0;
                *((uint *)GEN_TOP((iVar4 + 8))) = uVar8;
              }
              goto LAB_00cf4c38;
            }
            if (local_8 == 0x18) {
              uVar13 = 4;
            }
            else {
              uVar13 = 2;
            }
          }
        }
        else {
          uVar13 = 7;
        }
        uVar8 = F_00cfeb30(uVar13,uVar10,uVar8,bVar3);
        *((uint *)GEN_TOP((iVar4 + 8))) = uVar8;
        *((undefined4 *)GEN_TOP((iVar4 + 0x10))) = uVar13;
        goto LAB_00cf4c38;
      }
    }
    if (*((LPVOID *)GEN_TOP((iVar4 + 0xc))) != (LPVOID)0x0) {
      gen_imp_CoTaskMemFree(*((LPVOID *)GEN_TOP((iVar4 + 0xc))));
      *((undefined4 *)GEN_TOP((iVar4 + 0xc))) = 0;
    }
    *((undefined4 *)GEN_TOP((iVar4 + 8))) = 0;
    *((undefined4 *)GEN_TOP((iVar4 + 0x10))) = 7;
    *((undefined4 *)GEN_TOP((iVar4 + 0x14))) = 0;
    if ((int)local_c < 0) {
      return local_c;
    }
  }
LAB_00cf4c38: ;
  *((undefined4 *)GEN_TOP((iVar4 + 0x18))) = 1;
  return local_c;
}

/* ref: FUN_00cf4deb */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf4deb(GEN_P(ushort * param_1, unsigned int gen_a0), GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf4debu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  F_00cf379a(param_1,param_2,param_3);
  puVar5 = ((undefined4 *)GEN_TOP(0xfffe));
  if (uVar1 != 0xfffe) {
    *param_2 = 0xfffe;
    param_2[8] = 0x16;
    param_2[9] = param_1[7];
    uVar6 = F_00cf4019(param_1,param_4);
    *(uint *)(param_2 + 10) = uVar6;
    uVar4 = REFG(undefined4, 0x1130ae0);
    uVar3 = REFG(undefined4, 0x1130adc);
    uVar2 = REFG(undefined4, 0x1130ad8);
    *(uint *)(param_2 + 0xc) = (uint)uVar1;
    *(undefined4 *)(param_2 + 0xe) = uVar2;
    *(undefined4 *)(param_2 + 0x10) = uVar3;
    *(undefined4 *)(param_2 + 0x12) = uVar4;
    *param_3 = 0x28;
    puVar5 = param_3;
  }
  return (uint)puVar5;
}

/* ref: XAPOBaseWaveHlpNameSpace::AllocateWaveFormatExtensibleCopy */
GEN_LIB GEN_NOFRAME undefined * GEN_STDCALL F_00cf4e61(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf4e61u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL(0x8, 8);
  uint uVar1;
  undefined * pWVar2;
  
  uVar1 = F_00cf3762(param_1,1);
  (*(uint *)(gen_frame + 0x0)) = uVar1;
  if (uVar1 < 0x28) {
    (*(uint *)(gen_frame + 0x0)) = 0x28;
  }
  pWVar2 = ((undefined *)GEN_TOP(F_004069f0((*(uint *)(gen_frame + 0x0)))));
  if (pWVar2 != ((undefined *)GEN_TOP(0x0))) {
    F_00cf4deb(param_1,pWVar2,&(*(uint *)(gen_frame + 0x0)),param_2);
  }
  return pWVar2;
}

/* ref: FUN_00cf4ea4 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf4ea4(GEN_P(short * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf4ea4u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x4c, 4);
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x44)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x48);
  (*(uint *)(gen_frame + 0x0)) = 1;
  if ((*param_1 != 0x165) && ((*(uint *)(gen_frame + 0x0)) = (uint)(param_1[1] != 0), *(int *)(param_1 + 2) == 0)) {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
  uVar2 = F_00cf3838(param_1);
  if (uVar2 == 1) {
    uVar3 = F_00cf38d1(param_1 GEN_EDX_ARG);
  }
  else if (uVar2 == 2) {
    uVar3 = F_00cf39a7(param_1);
  }
  else if (uVar2 == 3) {
    uVar3 = F_00cf3951(param_1 GEN_EDX_ARG);
  }
  else {
    if (uVar2 < 0x161) goto LAB_00cf4f72;
    if (uVar2 < 0x163) {
      uVar3 = (uint)(param_1[7] == 0x10);
      if ((*param_1 == -2) && (param_1[9] != 0x10)) {
        uVar3 = 0;
      }
      if (param_1[6] == 0) {
        uVar3 = 0;
      }
      if (*(int *)(param_1 + 4) == 0) {
        uVar3 = 0;
      }
    }
    else if (uVar2 == 0x165) {
      uVar3 = F_00cf4093(param_1);
    }
    else {
      if (uVar2 != 0x166) goto LAB_00cf4f72;
      uVar3 = F_00cf4139(param_1);
    }
  }
  if (uVar3 == 0) {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
LAB_00cf4f72: ;
  sVar1 = *param_1;
  if ((sVar1 == -2) &&
     (((ushort)param_1[8] < 0x16 ||
      ((*(int *)(param_1 + 10) != 0 &&
       (uVar2 = F_00cf3dd2(*(int *)(param_1 + 10)), uVar2 != param_1[1])))))) {
    (*(uint *)(gen_frame + 0x0)) = 0;
  }
  if (((*(uint *)(gen_frame + 0x0)) == 0) && (sVar1 != 0x165)) {
    F_00cf41f0(param_1,((undefined1 *)(gen_frame + 0x4)),0x40);
  }
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00cf4fcb */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf4fcb(GEN_P(ushort * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcf4fcbu, gen_a0, 0u, 0u, 0u);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  SIZE_T cb;
  undefined2 * puVar4;
  uint uVar5;
  
  cb = F_00cf3762(param_1,1);
  if (cb < 0x28) {
    cb = 0x28;
  }
  puVar4 = gen_imp_CoTaskMemAlloc(cb);
  if (puVar4 != ((undefined2 *)GEN_TOP(0x0))) {
    uVar5 = F_00cf3762(param_1,0);
    F_00c46aa0(puVar4,param_1,uVar5);
    F_00c48350(((undefined *)GEN_TOP((uVar5 + (int)puVar4))),0,cb - uVar5);
    if (*param_1 != 0xfffe) {
      puVar4[9] = param_1[7];
      uVar5 = F_00cf4019(param_1,1);
      *puVar4 = 0xfffe;
      *(uint *)(puVar4 + 10) = uVar5;
      puVar4[8] = 0x16;
      uVar3 = REFG(undefined4, 0x1130ae0);
      uVar2 = REFG(undefined4, 0x1130adc);
      uVar1 = REFG(undefined4, 0x1130ad8);
      *(uint *)(puVar4 + 0xc) = (uint)*param_1;
      *(undefined4 *)(puVar4 + 0xe) = uVar1;
      *(undefined4 *)(puVar4 + 0x10) = uVar2;
      *(undefined4 *)(puVar4 + 0x12) = uVar3;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00cf506d */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf506d(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf506du, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  return (uint)this;
}

/* ref: FUN_00cf5099 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf5099(GEN_P(short * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf5099u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_8;
  
  local_8 = 0;
  uVar5 = F_00cf4ea4(param_1);
  if (uVar5 == 0) {
    return 0x80070057;
  }
  uVar3 = F_00cf3838(param_1);
  uVar2 = REFG(undefined4, 0x1130ae0);
  uVar1 = REFG(undefined4, 0x1130adc);
  uVar6 = REFG(undefined4, 0x1130ad8);
  if ((uVar3 != 3) && (local_8 = 0x88970001, param_2 != 0)) {
    if (*param_1 == -2) {
      param_1[0xc] = 3;
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0xe) = uVar6;
      *(undefined4 *)(param_1 + 0x10) = uVar1;
      *(undefined4 *)(param_1 + 0x12) = uVar2;
    }
    else {
      *param_1 = 3;
    }
  }
  if (param_1[1] == 0) {
    local_8 = 0x88970001;
    if (param_2 == 0) goto LAB_00cf5131;
    sVar4 = 1;
  }
  else {
    if (((ushort)param_1[1] < 0x41) || (local_8 = 0x88970001, param_2 == 0)) goto LAB_00cf5131;
    sVar4 = 0x40;
  }
  local_8 = 0x88970001;
  param_1[1] = sVar4;
LAB_00cf5131: ;
  uVar6 = 1000;
  if (((*(uint *)(param_1 + 2) < 1000) || (uVar6 = 200000, 200000 < *(uint *)(param_1 + 2))) &&
     (local_8 = 0x88970001, param_2 != 0)) {
    *(undefined4 *)(param_1 + 2) = uVar6;
  }
  if ((param_1[7] != 0x20) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[7] = 0x20;
  }
  if (((*param_1 == -2) && (param_1[9] != 0x20)) && (local_8 = 0x88970001, param_2 != 0)) {
    param_1[9] = 0x20;
  }
  return local_8;
}

/* ref: FUN_00cf518e */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf518e(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(short * param_1, unsigned int gen_a1), GEN_P(short * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf518eu, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(short * param_1 = (short *)(uintptr_t)gen_a1;)
  GEN_PIN(short * param_2 = (short *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  short sVar1;
  uint local_8;
  
  local_8 = 0;
  if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x418))) & 1) != 0) && (param_2[1] != param_1[1])) &&
     (local_8 = 0x88970001, param_3 != 0)) {
    param_2[1] = param_1[1];
  }
  if ((((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x418))) & 2) != 0) &&
      (*(int *)(param_2 + 2) != *(int *)(param_1 + 2))) && (local_8 = 0x88970001, param_3 != 0)) {
    *(int *)(param_2 + 2) = *(int *)(param_1 + 2);
  }
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x418))) & 4) != 0) {
    if ((param_2[7] != param_1[7]) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[7] = param_1[7];
    }
    if (*param_1 == -2) {
      if (*param_2 != -2) {
        if (param_2[7] == param_1[9]) {
          return local_8;
        }
        return 0x88970001;
      }
      sVar1 = param_1[9];
    }
    else {
      if (*param_2 != -2) {
        return local_8;
      }
      sVar1 = param_1[7];
    }
    if ((param_2[9] != sVar1) && (local_8 = 0x88970001, param_3 != 0)) {
      param_2[9] = sVar1;
    }
  }
  return local_8;
}

/* ref: FUN_00cf5256 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf5256(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(LPVOID param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf5256u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(LPVOID param_3 = (LPVOID)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))(param_1 GEN_EDX_ARG,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != ((undefined4 *)GEN_TOP(0x0)));
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))(param_1 GEN_EDX_ARG,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1 GEN_EDX_ARG,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf5314 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00cf5314(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(LPVOID param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf5314u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(LPVOID param_3 = (LPVOID)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  uint uVar2;
  LPVOID pv;
  uint local_8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))(param_1 GEN_EDX_ARG,param_2,0);
  if ((int)uVar1 < 0) {
    return 0x80070057;
  }
  uVar2 = F_00cf4ea4(param_3);
  if (uVar2 == 0) {
    uVar1 = 0x80070057;
  }
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  pv = param_3;
  if (param_4 != ((undefined4 *)GEN_TOP(0x0))) {
    pv = (LPVOID)F_00cf4fcb(param_3);
    uVar1 = (-(uint)(pv != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  local_8 = (uint)(param_4 != ((undefined4 *)GEN_TOP(0x0)));
  if ((((int)uVar1 < 0) ||
      (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))(param_1 GEN_EDX_ARG,pv,local_8), (int)uVar1 < 0)) ||
     (uVar1 = F_00cf518e(param_1 GEN_EDX_ARG,param_2,pv,local_8), (int)uVar1 < 0)) {
    if (local_8 == 0) {
      return uVar1;
    }
    if (pv == (LPVOID)0x0) {
      return uVar1;
    }
    if (uVar1 == 0x88970001) {
      *param_4 = pv;
      return 0x88970001;
    }
  }
  else if (local_8 == 0) {
    return uVar1;
  }
  gen_imp_CoTaskMemFree(pv);
  return uVar1;
}

/* ref: FUN_00cf53e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf53e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcf53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_4;
  return (uint)this;
}

/* ref: FUN_00cf5430 */
GEN_LIB GEN_FRAME unsigned int F_00cf5430(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf5430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cf5450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf5450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf5450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  
  fVar1 = (float10)1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x40))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x44))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x48))) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar1;
  *((int *)GEN_TOP(((int)this + 8))) = param_1;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *((undefined1 *)GEN_TOP(((int)this + 0xd0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  in_ecx = (int)this + 0xf0;
  param_1 = 3;
  do {
    F_00cea700(in_ecx GEN_EDX_ARG);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x248))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar2,((char *)REFP(0x112a0a8)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0xe4))) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1a8,((char *)REFP(0x112a0a8)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0xec))) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf41 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf55b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf55b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  
  fVar1 = (float10)1;
  *(float *)(this + 0x40) = (float)fVar1;
  *(float *)(this + 0x44) = (float)fVar1;
  *(float *)(this + 0x48) = (float)fVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  fVar2 = (float10)0;
  *(undefined4 *)(this + 0x84) = 0;
  *(float *)(this + 0x4c) = (float)fVar2;
  *(undefined4 *)(this + 0x88) = 0;
  *(float *)(this + 0x50) = (float)fVar2;
  this[0x80] = (undefined1)0x0;
  *(float *)(this + 0x54) = (float)fVar2;
  *(float *)(this + 0x14) = (float)fVar1;
  F_00cea740(this + 0x144 GEN_EDX_FWD);
  F_00cea740(this + 0xf0 GEN_EDX_ARG);
  F_00cea740(this + 0x198 GEN_EDX_ARG);
  uVar3 = F_00cea740(this + 0x1ec GEN_EDX_ARG);
  fVar1 = (float10)0;
  *(float *)(this + 0x4c) = (float)fVar1;
  *(undefined4 *)(this + 0x58) = 0;
  *(float *)(this + 0x50) = (float)fVar1;
  *(float *)(this + 0x54) = (float)fVar1;
  return uVar3;
}

/* ref: FUN_00cf5630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf5630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 100))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    if (*((char *)GEN_TOP(((int)this + 0x2e))) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x30))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
    }
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xe8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  }
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG);
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    if ((char)uVar3 == '\0') {
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
        return;
      }
    }
    else {
      if (*((int *)GEN_TOP(((int)this + 0x34))) == 3) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
        return;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf49 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf5700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf5700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x5c))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf8 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cf5720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf5720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,0,0);
  piVar1 = *(int * PTR32 *)(this + 0x18);
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 1;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG,param_2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))(*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,0,0);
  }
  return 1;
}

/* ref: FUN_00cf5770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf5770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf5770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int iVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined4 *)(gen_frame + 0x8)) = param_1;
  iVar6 = *((int *)GEN_TOP(((int)this + 0xa8)));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x94)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  if (iVar6 == 0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP(((int)this + 0xa0)));
    if (iVar1 == 0xf) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else if (iVar1 == 0xb) {
      (*(uint *)(gen_frame + 0x14)) = *((uint *)GEN_TOP(((int)this + 0xa4))) & 0xffffff80;
      (*(uint *)(gen_frame + 0x18)) = (iVar6 - *((uint *)GEN_TOP(((int)this + 0xa4)))) + 0x7f & 0xffffff80;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
    }
    else {
      uVar2 = *((uint *)GEN_TOP(((int)this + 0xa4)));
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      if (iVar1 == 0xc) {
        (*(uint *)(gen_frame + 0x18)) = iVar6 - uVar2;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = (iVar6 - uVar2) + 1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xff;
      }
    }
  }
  if (param_2 != 0) {
    iVar6 = *((int *)GEN_TOP(((int)this + 0xa0)));
    (*(uint *)(gen_frame + 0xc)) = param_2;
    if (iVar6 == 1) {
      uVar5 = uVar5 / (uint)(*((int *)GEN_TOP(((int)this + 0x98))) * 2);
    }
    else if (iVar6 == 0xc) {
      iVar6 = (*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0xac)))) - 0x20;
      uVar5 = F_00ce93e0(iVar6);
      iVar6 = iVar6 + uVar5;
      uVar5 = (*((uint *)GEN_TOP(((int)this + 0x94))) / (uint)*((ushort *)GEN_TOP((iVar6 + 0xc)))) *
              (uint)*((ushort *)GEN_TOP((iVar6 + 0x12)));
    }
    else if (iVar6 == 0xb) {
      iVar6 = (*((int *)GEN_TOP(((int)this + 0x1c))) - *((int *)GEN_TOP(((int)this + 0xac)))) - 0x20;
      uVar5 = F_00ce93e0(iVar6);
      uVar5 = *((uint *)GEN_TOP((uVar5 + 0x18 + iVar6)));
    }
    else {
      uVar5 = uVar5 >> 1;
    }
    if (uVar5 < param_2) {
      return uVar5;
    }
    (*(int *)(gen_frame + 0x10)) = uVar5 - param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 0xa0))) != 0xf) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x54))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
    return uVar5;
  }
  puVar3 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x24)));
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar3 + 1;
  (*(uint *)(gen_frame + 0x28)) = *puVar3 >> 2;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint * PTR32 *)(gen_frame + 0x24)));
  return uVar5;
}

/* ref: FUN_00cf5910 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cf5910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf5910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  short sVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 0xa0)));
  if ((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 0xd)) && (iVar5 != 6)) {
    if (iVar5 == 0xc) {
      uVar3 = F_00ce93e0(param_2);
      uVar4 = *((ushort *)GEN_TOP((uVar3 + 0x10 + param_2))) + 0x12;
      if ((uVar4 < 0x33) && (*((short *)GEN_TOP((uVar3 + param_2 + 0x14))) == 7)) {
        F_00c46aa0(param_1,uVar3 + param_2,uVar4);
        return 1;
      }
    }
    else if (iVar5 == 0xf) {
      puVar6 = ((undefined4 *)GEN_TOP((param_2 + 0x20)));
      puVar7 = param_1;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      return 1;
    }
    return 0;
  }
  *(undefined2 *)param_1 = 1;
  sVar1 = *((short *)GEN_TOP(((int)this + 0x98)));
  *((short *)GEN_TOP(((int)param_1 + 2))) = sVar1;
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x9c)));
  uVar2 = sVar1 * 2;
  *(ushort *)(param_1 + 3) = uVar2;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0xe))) = 0x10;
  param_1[2] = (uint)uVar2 * param_1[1];
  *(undefined2 *)(param_1 + 4) = 0;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf14 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf59e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf59e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x3c) != 0) {
    *(undefined4 *)(this + 0xd4) = 4;
    return in_EAX;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf15 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf5a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf5a00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xd4) != 2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  *(undefined4 *)(this + 0xd4) = 5;
  *(undefined4 *)(this + 0xdc) = 0;
  if (*(uint *)(this + 0xa4) < *(uint *)(this + 0xa8)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return *(uint *)(this + 0xa8);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf16 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf5a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  *(undefined4 *)(this + 0xd4) = 6;
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_FWD,0,0);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf5a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0xd4) == 2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,0x20,0);
    *(undefined4 *)(this + 0xd4) = 3;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf18 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xd4) == 3) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf5ac0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcf5ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = F_00c51673((double)param_2);
  if (iVar2 != 0) {
    param_2 = (float)(float10)1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  uVar3 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0);
  }
  *((float *)GEN_TOP((param_1 + 0x44))) = param_2;
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf30 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cf5b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf5b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined * pVVar7;
  float10 fVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  piVar2 = ((int *)GEN_TOP(F_00d2ccd0()));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x124))))(piVar2 GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    do {
      iVar4 = F_00c51673((double)param_1[iVar6]);
      if (iVar4 != 0) {
        param_1[iVar6] = (float)(float10)1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  uVar5 = uVar3;
  if (((*(int *)(this + 0xc) != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == 1))
  {
    piVar2 = *(int * PTR32 *)(this + 0xc);
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)*param_1)));
    (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((float10)param_1[1] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[2])));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)param_1[3] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[4])));
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)param_1[5] * (float10)*(float *)(this + 0x14))));
    (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x14) * (float10)param_1[6])));
    (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)param_1[7] * (float10)*(float *)(this + 0x14))));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x10),1,uVar3,&(*(float *)(gen_frame + 0x8)),0);
    (*(uint *)(gen_frame + 0x0)) = 0;
    if (this[0x80] != (undefined1)0x0) {
      pVVar7 = this + 0x60;
      do {
        piVar2 = *(int * PTR32 *)(this + 0xc);
        fVar8 = (float10)*(float *)(pVVar7 + 0x10);
        uVar1 = *(undefined4 *)pVVar7;
        (*(float *)(gen_frame + 0x8)) = (float)(fVar8 * (float10)*param_1);
        (*(float *)(gen_frame + 0xc)) = (float)((float10)param_1[1] * fVar8);
        (*(float *)(gen_frame + 0x10)) = (float)((float10)param_1[2] * fVar8);
        (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[3] * fVar8);
        (*(float *)(gen_frame + 0x18)) = (float)((float10)param_1[4] * fVar8);
        (*(float *)(gen_frame + 0x1c)) = (float)((float10)param_1[5] * fVar8);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)param_1[6] * fVar8);
        (*(float *)(gen_frame + 0x24)) = (float)(fVar8 * (float10)param_1[7]);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x40))))(piVar2 GEN_EDX_ARG,uVar1,1,uVar3,&(*(float *)(gen_frame + 0x8)),0);
        uVar5 = (*(uint *)(gen_frame + 0x0)) + 1;
        pVVar7 = pVVar7 + 4;
        (*(uint *)(gen_frame + 0x0)) = uVar5;
      } while ((int)uVar5 < (int)(uint)(byte)this[0x80]);
    }
  }
  return uVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf45 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cf5c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf5c90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_GS(0x138, 8, 4);
  float fVar1;
  code * pcVar2;
  int iVar3;
  int * piVar4;
  float fVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x130)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x134));
  (*(int *)(gen_frame + 0x8)) = param_2;
  if (0 < param_1) {
    iVar11 = 0;
    do {
      iVar3 = F_00c51673((double)*((float *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + iVar11 * 4))));
      if (iVar3 != 0) {
        *((float *)GEN_TOP(((*(int *)(gen_frame + 0x8)) + iVar11 * 4))) = (float)(float10)1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_1);
  }
  piVar4 = ((int *)GEN_TOP(F_00d2ccd0()));
  fVar5 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x124))))(piVar4 GEN_EDX_ARG));
  iVar3 = (*(int *)(gen_frame + 0x8));
  iVar11 = *(int *)(this + 0xc);
  (*(float *)(gen_frame + 0x0)) = fVar5;
  if (((iVar11 != 0) && (*(int *)(this + 0xd4) != 6)) && (*(int *)(this + 0x98) == param_1)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
              (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(undefined4 *)(this + 0x10),param_1,
               (undefined4)gen_fl2bits(fVar5),(*(int *)(gen_frame + 0x8)),0);
  }
  ((float *)(gen_frame + 0x110))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x10))[0] = (float)(float10)0;
  ((float *)(gen_frame + 0x110))[1] = 0.0;
  ((float *)(gen_frame + 0x110))[2] = 0.0;
  ((float *)(gen_frame + 0x110))[3] = 0.0;
  ((float *)(gen_frame + 0x110))[4] = 0.0;
  ((float *)(gen_frame + 0x110))[5] = 0.0;
  ((float *)(gen_frame + 0x110))[6] = 0.0;
  ((float *)(gen_frame + 0x110))[7] = 0.0;
  F_00c48350(((float *)(gen_frame + 0x10)) + 1,0,0xfc);
  iVar11 = 0;
  iVar12 = iVar3;
  if (3 < param_1 * 8) {
    (*(int *)(gen_frame + 0x4)) = (int)((float *)(gen_frame + 0x10)) - iVar3;
    (*(float *)(gen_frame + 0xc)) = gen_bits2f(param_1 * 8 - 3);
    pfVar7 = ((float *)GEN_TOP((iVar3 + 8)));
    iVar10 = iVar11;
    do {
      iVar11 = iVar10 + 4;
      pfVar6 = pfVar7 + 4;
      (&(*(float *)(gen_frame + 0x0)))[iVar11] = ((float)GEN_TOF(((float10)pfVar7[-2] * (float10)*(float *)(this + 0x90))));
      (&(*(float *)(gen_frame + 0x0)))[iVar10 + 5] = ((float)GEN_TOF(((float10)pfVar7[-1] * (float10)*(float *)(this + 0x90))));
      *((float *)GEN_TOP(((*(int *)(gen_frame + 0x4)) - 0x10 + (int)pfVar6))) =
           ((float)GEN_TOF(((float10)*(float *)(this + 0x90) * (float10)*pfVar7)));
      *((float *)GEN_TOP((((int)&(*(int *)(gen_frame + 0x4)) - iVar3) + (int)pfVar6))) =
           ((float)GEN_TOF(((float10)pfVar7[1] * (float10)*(float *)(this + 0x90))));
      pfVar7 = pfVar6;
      iVar10 = iVar11;
      iVar12 = (*(int *)(gen_frame + 0x8));
    } while (iVar11 < (int)gen_fl2bits((*(float *)(gen_frame + 0xc))));
  }
  while (iVar11 < param_1 * 8) {
    fVar5 = *((float *)GEN_TOP((iVar12 + iVar11 * 4)));
    iVar11 = iVar11 + 1;
    fVar1 = *(float *)(this + 0x90);
    (&(*(float *)(gen_frame + 0xc)))[iVar11] = (float)((float10)fVar5 * (float10)fVar1);
  }
  if (0 < param_1) {
    pfVar7 = ((float *)(gen_frame + 0x10)) + 1;
    iVar11 = 0;
    do {
      fVar5 = pfVar7[-1];
      iVar3 = iVar11 + 1;
      fVar1 = ((float *)(gen_frame + 0x100))[(int)(iVar11 + 4)];
      (*(float *)(gen_frame + 0xc)) = (float)((float10)fVar5 + (float10)fVar1);
      fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 + (float10)fVar1) + (float10)*pfVar7)));
      (*(float *)(gen_frame + 0xc)) = fVar5;
      fVar5 = (float)((float10)fVar5 + (float10)pfVar7[1]);
      (*(float *)(gen_frame + 0xc)) = fVar5;
      fVar5 = (float)((float10)fVar5 + (float10)pfVar7[2]);
      (*(float *)(gen_frame + 0xc)) = fVar5;
      fVar5 = (float)((float10)fVar5 + (float10)pfVar7[3]);
      (*(float *)(gen_frame + 0xc)) = fVar5;
      fVar5 = (float)((float10)fVar5 + (float10)pfVar7[4]);
      (*(float *)(gen_frame + 0xc)) = fVar5;
      fVar5 = (float)((float10)fVar5 + (float10)pfVar7[5]);
      (*(float *)(gen_frame + 0xc)) = fVar5;
      ((float *)(gen_frame + 0x100))[(int)(iVar11 + 4)] = (float)((float10)fVar5 + (float10)pfVar7[6]);
      pfVar7 = pfVar7 + 8;
      iVar11 = iVar3;
    } while (iVar3 < param_1);
  }
  fVar13 = (float10)*(double *)&REFG(double, 0x10948e0);
  uVar8 = 0;
  if (3 < param_1) {
    uVar9 = uVar8;
    do {
      uVar8 = uVar9 + 4;
      ((float *)(gen_frame + 0x100))[(int)(uVar8)] = (float)((float10)((float *)(gen_frame + 0x100))[(int)(uVar9 + 4)] * fVar13);
      ((float *)(gen_frame + 0x100))[(int)(uVar9 + 5)] = (float)((float10)((float *)(gen_frame + 0x100))[(int)(uVar9 + 5)] * fVar13);
      ((float *)(gen_frame + 0x100))[(int)(uVar9 + 6)] = (float)((float10)((float *)(gen_frame + 0x100))[(int)(uVar9 + 6)] * fVar13);
      ((float *)(gen_frame + 0x100))[(int)(uVar9 + 7)] = (float)((float10)((float *)(gen_frame + 0x100))[(int)(uVar9 + 7)] * fVar13);
      uVar9 = uVar8;
    } while ((int)uVar8 < param_1 - 3);
  }
  for (; (int)uVar8 < param_1; uVar8 = uVar8 + 1) {
    ((float *)(gen_frame + 0x100))[(int)(uVar8 + 4)] = (float)((float10)((float *)(gen_frame + 0x100))[(int)(uVar8 + 4)] * fVar13);
  }
  iVar11 = *(int *)(this + 0x88);
  if ((iVar11 != 0) && (*(int *)(this + 0x84) != 0)) {
    piVar4 = *(int * PTR32 *)(this + 0xc);
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x40)));
    (*pcVar2)(piVar4,iVar11,param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0))),((float *)(gen_frame + 0x10)),0);
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x40))))
                      (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(undefined4 *)(this + 0x84),param_1,1,((float *)(gen_frame + 0x100)) + 4,0
                      );
  }
  return uVar8;
}

/* ref: FUN_00cf5f80 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cf5f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf5f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x740, 0, 4);
  float fVar1;
  float fVar2;
  undefined4 in_ecx;
  float10 fVar3;
  byte bVar4;
  undefined * extraout_EAX = 0;
  undefined * pvVar5;
  int * piVar6;
  float * pfVar7;
  float * pfVar8;
  undefined3 extraout_var = 0;
  int * piVar9;
  uint uVar10;
  float * pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x738)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x73c));
  fVar18 = F_00cea780(((undefined *)GEN_TOP(((int)this + 0x198))) GEN_EDX_FWD);
  fVar18 = ((float)GEN_TOF(((float10)fVar18 + (float10)*((float *)GEN_TOP(((int)this + 0x4c))))));
  fVar19 = F_00cea780(((undefined *)GEN_TOP(((int)this + 0x1ec))) GEN_EDX_ARG);
  pfVar8 = *((float * PTR32 *)GEN_TOP(((int)this + 0x58)));
  fVar19 = ((float)GEN_TOF(((float10)fVar19 + (float10)*((float *)GEN_TOP(((int)this + 0x50))))));
  fVar1 = *((float *)GEN_TOP(((int)this + 0x54)));
  pvVar5 = extraout_EAX;
  if (pfVar8 != ((float *)GEN_TOP(0x0))) {
    ((float *)(gen_frame + 0x538))[0] = (float)(float10)0;
    F_00c48350(((float *)(gen_frame + 0x538)) + 1,0,0x3c);
    (*(float *)(gen_frame + 0x18)) = (float)(float10)0;
    F_00c48350(((float *)(gen_frame + 0x1c)),0,0x3fc);
    ((float *)(gen_frame + 0x6f8))[0] = (float)(float10)0;
    ((float *)(gen_frame + 0x418))[0] = (float)(float10)0;
    ((float *)(gen_frame + 0x6f8))[1] = 0.0;
    ((float *)(gen_frame + 0x6f8))[2] = 0.0;
    ((float *)(gen_frame + 0x6f8))[3] = 0.0;
    ((float *)(gen_frame + 0x6f8))[4] = 0.0;
    ((float *)(gen_frame + 0x6f8))[5] = 0.0;
    ((float *)(gen_frame + 0x6f8))[6] = 0.0;
    ((float *)(gen_frame + 0x6f8))[7] = 0.0;
    pvVar5 = F_00c48350(((float *)(gen_frame + 0x408)) + 5,0,0xfc);
    if (((*((int *)GEN_TOP(((int)this + 0xc))) != 0) && (*((int *)GEN_TOP(((int)this + 0xd4))) != 6)) &&
       ((pvVar5 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x1e0))), pvVar5 == ((undefined *)GEN_TOP(0x0)) ||
        (*((short *)GEN_TOP(((int)pvVar5 + 4))) < 1)))) {
      pvVar5 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x98))) - 1)));
      switch((unsigned int)(uintptr_t)(pvVar5)) {
      case 0x0: ;
        F_00d2cf00(fVar18,fVar19,fVar1,pfVar8,((float *)(gen_frame + 0x538)));
        iVar14 = F_00c51673((double)((float *)(gen_frame + 0x538))[0]);
        if (iVar14 != 0) {
          ((float *)(gen_frame + 0x538))[0] = (float)(float10)1;
        }
        (*(float * PTR32 *)(gen_frame + 0xc)) = ((float *)(gen_frame + 0x538));
        break;
      case 0x1: ;
        if ((*(byte *)(pfVar8 + 3) & 2) != 0) {
          *(byte *)(pfVar8 + 3) = *(byte *)(pfVar8 + 3) & 0xfd;
        }
        fVar2 = ((float)GEN_TOF((((float10)1 - (float10)pfVar8[2]) * (float10)REFG(double, 0x1088108))));
        F_00d2cf00((float)((float10)fVar18 - (float10)fVar2),fVar19,fVar1,pfVar8,((float *)(gen_frame + 0x6e8)) + 0xc);
        F_00d2cf00((float)((float10)fVar2 + (float10)fVar18),fVar19,fVar1,pfVar8,((float *)(gen_frame + 0x518)));
        iVar14 = 0;
        ((float *)(gen_frame + 0x6f8))[0xb] = (float)((float10)((float *)(gen_frame + 0x6f8))[0xb] * (float10)REFG(double, 0x1088108));
        ((float *)(gen_frame + 0x518))[3] = (float)((float10)REFG(double, 0x1088108) * (float10)((float *)(gen_frame + 0x518))[3]);
        piVar6 = ((int *)GEN_TOP(F_00d2ccd0()));
        uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x124))))(piVar6 GEN_EDX_ARG);
        if (0 < (int)uVar10) {
          do {
            ((float *)(gen_frame + 0x538))[(int)(iVar14 * 2)] = ((float *)(gen_frame + 0x6e8))[(int)(iVar14 + 0xc)];
            ((float *)(gen_frame + 0x538))[(int)(iVar14 * 2U + 1)] = ((float *)(gen_frame + 0x518))[(int)(iVar14)];
            iVar15 = F_00c51673((double)((float *)(gen_frame + 0x6e8))[(int)(iVar14 + 0xc)]);
            if (iVar15 != 0) {
              ((float *)(gen_frame + 0x538))[(int)(iVar14 * 2)] = (float)(float10)1;
            }
            iVar15 = F_00c51673((double)((float *)(gen_frame + 0x518))[(int)(iVar14)]);
            if (iVar15 != 0) {
              ((float *)(gen_frame + 0x538))[(int)(iVar14 * 2U + 1)] = (float)(float10)1;
            }
            iVar14 = iVar14 + 1;
            piVar6 = ((int *)GEN_TOP(F_00d2ccd0()));
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x124))))(piVar6 GEN_EDX_ARG);
          } while (iVar14 < (int)uVar10);
        }
        (*(float * PTR32 *)(gen_frame + 0xc)) = ((float *)(gen_frame + 0x538));
        break;
      default: ;
        goto switchD_00cf607c_caseD_3;
      case 0x3: ;
        fVar17 = (float10)0;
        bVar16 = GEN_ISNAN(fVar17) || GEN_ISNAN((float10)pfVar8[2]);
        if (bVar16 == (bVar16 || fVar17 == (float10)pfVar8[2])) {
          *pfVar8 = (float)fVar17;
          F_00d2cf00(fVar18,fVar19,fVar1,pfVar8,((float *)(gen_frame + 0x6e8)) + 0xc);
          fVar17 = GEN_X87((float10)1 - (float10)pfVar8[2]);
          ((float *)(gen_frame + 0x6f8))[8] = (float)((float10)pfVar8[2] * (float10)((float *)(gen_frame + 0x6f8))[8] + fVar17);
          ((float *)(gen_frame + 0x6f8))[9] = (float)((float10)pfVar8[2] * (float10)((float *)(gen_frame + 0x6f8))[9] + fVar17);
          (*(float *)(gen_frame + 0x728)) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x728)) + fVar17);
          (*(float *)(gen_frame + 0x72c)) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x72c)) + fVar17);
        }
        else {
          fVar17 = (float10)1;
          ((float *)(gen_frame + 0x6f8))[8] = (float)fVar17;
          ((float *)(gen_frame + 0x6f8))[9] = (float)fVar17;
          (*(float *)(gen_frame + 0x728)) = (float)fVar17;
          (*(float *)(gen_frame + 0x72c)) = (float)fVar17;
        }
        fVar17 = (float10)0;
        if (((uint)gen_fl2bits(pfVar8[3]) & 0x10) == 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
          (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*(float *)&REFG(undefined, 0x1131430))));
          (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10b2cd0))));
        }
        (*(float * PTR32 *)(gen_frame + 0xc)) = &(*(float *)(gen_frame + 0x578));
        (*(float *)(gen_frame + 0x578)) = ((float *)(gen_frame + 0x6f8))[8];
        (*(float *)(gen_frame + 0x57c)) = (float)fVar17;
        (*(float *)(gen_frame + 0x580)) = (float)fVar17;
        (*(float *)(gen_frame + 0x584)) = (float)fVar17;
        (*(float *)(gen_frame + 0x588)) = (float)fVar17;
        (*(float *)(gen_frame + 0x58c)) = ((float *)(gen_frame + 0x6f8))[9];
        (*(float *)(gen_frame + 0x590)) = (float)fVar17;
        (*(float *)(gen_frame + 0x594)) = (float)fVar17;
        (*(float *)(gen_frame + 0x598)) = (float)fVar17;
        (*(float *)(gen_frame + 0x59c)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5a0)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5a4)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5a8)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5ac)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5b0)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5b4)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5b8)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5bc)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5c0)) = (*(float *)(gen_frame + 0x728));
        (*(float *)(gen_frame + 0x5c4)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5c8)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5cc)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5d0)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5d4)) = (*(float *)(gen_frame + 0x72c));
        (*(float *)(gen_frame + 0x5d8)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x8))))) * (float10)((float *)(gen_frame + 0x6f8))[8]);
        (*(float *)(gen_frame + 0x5dc)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5e0)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10))))) * (float10)(*(float *)(gen_frame + 0x728)));
        (*(float *)(gen_frame + 0x5e4)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5e8)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5ec)) = (float)((float10)((float *)(gen_frame + 0x6f8))[9] * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x8))))));
        (*(float *)(gen_frame + 0x5f0)) = (float)fVar17;
        (*(float *)(gen_frame + 0x5f4)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x10))))) * (float10)(*(float *)(gen_frame + 0x72c)));
        break;
      case 0x7: ;
        fVar18 = pfVar8[3];
        fVar17 = (float10)1;
        (*(float *)(gen_frame + 0x5f8)) = (float)fVar17;
        fVar3 = (float10)0;
        (*(float *)(gen_frame + 0x5fc)) = (float)fVar3;
        (*(float *)(gen_frame + 0x600)) = (float)fVar3;
        (*(float *)(gen_frame + 0x604)) = (float)fVar3;
        (*(float *)(gen_frame + 0x608)) = (float)fVar3;
        (*(float *)(gen_frame + 0x60c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x610)) = (float)fVar3;
        (*(float *)(gen_frame + 0x614)) = (float)fVar3;
        (*(float *)(gen_frame + 0x618)) = (float)fVar3;
        (*(float *)(gen_frame + 0x620)) = (float)fVar3;
        (*(float *)(gen_frame + 0x624)) = (float)fVar3;
        (*(float *)(gen_frame + 0x628)) = (float)fVar3;
        (*(float *)(gen_frame + 0x62c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x630)) = (float)fVar3;
        (*(float *)(gen_frame + 0x634)) = (float)fVar3;
        (*(float *)(gen_frame + 0x638)) = (float)fVar3;
        (*(float *)(gen_frame + 0x63c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x644)) = (float)fVar3;
        (*(float *)(gen_frame + 0x648)) = (float)fVar3;
        (*(float *)(gen_frame + 0x64c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x650)) = (float)fVar3;
        (*(float *)(gen_frame + 0x654)) = (float)fVar3;
        (*(float *)(gen_frame + 0x658)) = (float)fVar3;
        (*(float *)(gen_frame + 0x65c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x660)) = (float)fVar3;
        (*(float *)(gen_frame + 0x668)) = (float)fVar3;
        (*(float *)(gen_frame + 0x66c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x670)) = (float)fVar3;
        (*(float *)(gen_frame + 0x674)) = (float)fVar3;
        (*(float *)(gen_frame + 0x678)) = (float)fVar3;
        (*(float *)(gen_frame + 0x67c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x680)) = (float)fVar3;
        (*(float *)(gen_frame + 0x684)) = (float)fVar3;
        (*(float *)(gen_frame + 0x68c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x690)) = (float)fVar3;
        (*(float *)(gen_frame + 0x694)) = (float)fVar3;
        (*(float *)(gen_frame + 0x698)) = (float)fVar3;
        (*(float *)(gen_frame + 0x69c)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6a0)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6a4)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6a8)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6b0)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6b4)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6b8)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6bc)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6c0)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6c4)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6c8)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6cc)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6d0)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6d4)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6d8)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6dc)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6e0)) = (float)fVar3;
        (*(float *)(gen_frame + 0x6e4)) = (float)fVar3;
        ((float *)(gen_frame + 0x6e8))[0] = (float)fVar3;
        ((float *)(gen_frame + 0x6e8))[1] = (float)fVar3;
        ((float *)(gen_frame + 0x6e8))[2] = (float)fVar3;
        ((float *)(gen_frame + 0x6e8))[3] = (float)fVar3;
        (*(float *)(gen_frame + 0x61c)) = (float)fVar17;
        (*(float *)(gen_frame + 0x640)) = (float)fVar17;
        (*(float *)(gen_frame + 0x664)) = (float)fVar17;
        (*(float *)(gen_frame + 0x688)) = (float)fVar17;
        (*(float *)(gen_frame + 0x6ac)) = (float)fVar17;
        if (((uint)gen_fl2bits(fVar18) & 0x10) != 0) {
          (*(float *)(gen_frame + 0x6d0)) = (float)fVar17;
          ((float *)(gen_frame + 0x6e8))[3] = (float)fVar17;
        }
        (*(float * PTR32 *)(gen_frame + 0xc)) = &(*(float *)(gen_frame + 0x5f8));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)this + 0x80)))));
      if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != ((undefined *)GEN_TOP(0x0))) {
        pfVar8 = ((float *)(gen_frame + 0x1c));
        (*(float * PTR32 *)(gen_frame + 0x10)) = ((float *)GEN_TOP(((int)this + 0x70)));
        iVar14 = *((int *)GEN_TOP(((int)this + 0x98))) * 8;
        (*(int *)(gen_frame + 0x0)) = 0;
        do {
          iVar15 = 0;
          fVar17 = (float10)*(*(float * PTR32 *)(gen_frame + 0x10));
          if (3 < iVar14) {
            iVar13 = (iVar14 - 4U >> 2) + 1;
            iVar15 = iVar13 * 4;
            pfVar7 = (*(float * PTR32 *)(gen_frame + 0xc)) + 2;
            pfVar11 = pfVar8;
            do {
              iVar13 = iVar13 - 1;
              pfVar11[-1] = (float)((float10)pfVar7[-2] * fVar17);
              *pfVar11 = (float)((float10)pfVar7[-1] * fVar17);
              pfVar11[1] = (float)((float10)*pfVar7 * fVar17);
              pfVar11[2] = (float)((float10)pfVar7[1] * fVar17);
              pfVar7 = pfVar7 + 4;
              pfVar11 = pfVar11 + 4;
            } while (iVar13 != 0);
          }
          if (iVar15 < iVar14) {
            pfVar7 = ((float *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x0)) + iVar15 - 1;
            do {
              pfVar11 = (*(float * PTR32 *)(gen_frame + 0xc)) + iVar15;
              iVar15 = iVar15 + 1;
              *pfVar7 = (float)((float10)*pfVar11 * fVar17);
              pfVar7 = pfVar7 + 1;
            } while (iVar15 < iVar14);
          }
          (*(float * PTR32 *)(gen_frame + 0x10)) = (*(float * PTR32 *)(gen_frame + 0x10)) + 1;
          (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x40;
          pfVar8 = pfVar8 + 0x40;
          (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) - 1)));
        } while ((*(undefined * PTR32 *)(gen_frame + 0x4)) != ((undefined *)GEN_TOP(0x0)));
      }
      iVar14 = *((int *)GEN_TOP(((int)this + 0x98))) * 8;
      iVar15 = 0;
      if (3 < iVar14) {
        pfVar8 = (*(float * PTR32 *)(gen_frame + 0xc)) + 2;
        iVar13 = iVar15;
        do {
          iVar15 = iVar13 + 4;
          pfVar7 = pfVar8 + 4;
          ((float *)(gen_frame + 0x408))[(int)(iVar15)] = ((float)GEN_TOF(((float10)pfVar8[-2] * (float10)*((float *)GEN_TOP(((int)this + 0x90))))))
          ;
          ((float *)(gen_frame + 0x408))[(int)(iVar13 + 5)] =
               ((float)GEN_TOF(((float10)pfVar8[-1] * (float10)*((float *)GEN_TOP(((int)this + 0x90))))));
          *((float *)GEN_TOP((((int)((float *)(gen_frame + 0x408)) - (int)(*(float * PTR32 *)(gen_frame + 0xc))) + (int)pfVar7))) =
               ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x90))) * (float10)*pfVar8)));
          *((float *)GEN_TOP(((int)((float *)(gen_frame + 0x408)) + (4 - (int)(*(float * PTR32 *)(gen_frame + 0xc))) + (int)pfVar7))) =
               ((float)GEN_TOF(((float10)pfVar8[1] * (float10)*((float *)GEN_TOP(((int)this + 0x90))))));
          pfVar8 = pfVar7;
          iVar13 = iVar15;
        } while (iVar15 < iVar14 - 3);
      }
      for (; iVar15 < iVar14; iVar15 = iVar15 + 1) {
        fVar18 = (*(float * PTR32 *)(gen_frame + 0xc))[iVar15];
        fVar19 = *((float *)GEN_TOP(((int)this + 0x90)));
        ((float *)(gen_frame + 0x408))[(int)(iVar15 + 4)] = (float)((float10)fVar18 * (float10)fVar19);
      }
      iVar15 = *((int *)GEN_TOP(((int)this + 0x98)));
      if (0 < iVar15) {
        pfVar8 = ((float *)(gen_frame + 0x408)) + 5;
        iVar13 = 0;
        do {
          iVar12 = iVar13 + 1;
          ((float *)(gen_frame + 0x6e8))[(int)(iVar13 + 4)] =
               ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)
                                                  ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10
                                                  )pfVar8[-1] + (float10)((float *)(gen_frame + 0x6e8))[(int)(iVar13 + 4)]) +
                                                  (float10)*pfVar8))) + (float10)pfVar8[1]))) +
                                                  (float10)pfVar8[2]))) + (float10)pfVar8[3]))) +
                                                  (float10)pfVar8[4]))) + (float10)pfVar8[5]))) +
                      (float10)pfVar8[6])));
          pfVar8 = pfVar8 + 8;
          iVar13 = iVar12;
        } while (iVar12 < iVar15);
      }
      fVar17 = (float10)*(double *)&REFG(double, 0x10948e0);
      iVar13 = 0;
      if (3 < iVar15) {
        iVar12 = iVar13;
        do {
          iVar13 = iVar12 + 4;
          ((float *)(gen_frame + 0x6e8))[(int)(iVar13)] = (float)((float10)((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 4)] * fVar17);
          ((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 5)] = (float)((float10)((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 5)] * fVar17);
          ((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 6)] = (float)((float10)((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 6)] * fVar17);
          ((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 7)] = (float)((float10)((float *)(gen_frame + 0x6e8))[(int)(iVar12 + 7)] * fVar17);
          iVar12 = iVar13;
        } while (iVar13 < iVar15 - 3);
      }
      iVar15 = *((int *)GEN_TOP(((int)this + 0x98)));
      for (; iVar13 < iVar15; iVar13 = iVar13 + 1) {
        ((float *)(gen_frame + 0x6e8))[(int)(iVar13 + 4)] = (float)((float10)((float *)(gen_frame + 0x6e8))[(int)(iVar13 + 4)] * fVar17);
      }
      iVar15 = 0;
      if (3 < iVar14) {
        iVar13 = (iVar14 - 4U >> 2) + 1;
        iVar15 = iVar13 * 4;
        pfVar8 = (*(float * PTR32 *)(gen_frame + 0xc)) + 2;
        do {
          iVar13 = iVar13 - 1;
          pfVar8[-2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x14))) * (float10)pfVar8[-2])));
          pfVar8[-1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x14))) * (float10)pfVar8[-1])));
          *pfVar8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x14))) * (float10)*pfVar8)));
          pfVar8[1] = ((float)GEN_TOF(((float10)pfVar8[1] * (float10)*((float *)GEN_TOP(((int)this + 0x14))))));
          pfVar8 = pfVar8 + 4;
        } while (iVar13 != 0);
      }
      for (; iVar15 < iVar14; iVar15 = iVar15 + 1) {
        fVar18 = (*(float * PTR32 *)(gen_frame + 0xc))[iVar15];
        fVar19 = *((float *)GEN_TOP(((int)this + 0x14)));
        (*(float * PTR32 *)(gen_frame + 0xc))[iVar15] = (float)((float10)fVar18 * (float10)fVar19);
      }
      in_ecx = *((undefined4 *)GEN_TOP(((int)this + 8)));
      bVar4 = F_00cd6590(in_ecx GEN_EDX_ARG);
      pvVar5 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
      if ((bVar4 == 0) && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
        piVar9 = ((int *)GEN_TOP(F_00d2ccd0()));
        piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
        iVar14 = *piVar6;
        uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x124))))(piVar9 GEN_EDX_ARG);
        pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar14 + 0x40))))
                                   (piVar6,*((undefined4 *)GEN_TOP(((int)this + 0x10))),
                                    *((undefined4 *)GEN_TOP(((int)this + 0x98))),uVar10)));
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
        if (*((char *)GEN_TOP(((int)this + 0x80))) != '\0') {
          (*(float * PTR32 *)(gen_frame + 0x10)) = &(*(float *)(gen_frame + 0x18));
          (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = ((undefined4 *)GEN_TOP(((int)this + 0x60)));
          do {
            piVar9 = ((int *)GEN_TOP(F_00d2ccd0()));
            piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
            iVar14 = *piVar6;
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x124))))(piVar9 GEN_EDX_ARG,(*(float * PTR32 *)(gen_frame + 0x10)),0);
            ((code *)*((gen_code32 *)GEN_TOP((iVar14 + 0x40))))(piVar6,*(*(undefined4 * PTR32 *)(gen_frame + 0x8)),*((undefined4 *)GEN_TOP(((int)this + 0x98))),uVar10)
            ;
            (*(float * PTR32 *)(gen_frame + 0x10)) = (*(float * PTR32 *)(gen_frame + 0x10)) + 0x40;
            pvVar5 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1;
            (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar5;
          } while ((int)pvVar5 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x80))));
        }
        if ((*((int *)GEN_TOP(((int)this + 0x88))) != 0) && (*((int *)GEN_TOP(((int)this + 0x84))) != 0)) {
          piVar9 = ((int *)GEN_TOP(F_00d2ccd0()));
          piVar6 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
          iVar14 = *piVar6;
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x124))))(piVar9 GEN_EDX_ARG,((float *)(gen_frame + 0x408)) + 4,0);
          ((code *)*((gen_code32 *)GEN_TOP((iVar14 + 0x40))))
                    (piVar6,*((undefined4 *)GEN_TOP(((int)this + 0x88))),*((undefined4 *)GEN_TOP(((int)this + 0x98))),
                     uVar10);
          pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x40))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x84))),
                                      *((undefined4 *)GEN_TOP(((int)this + 0x98))),1,((float *)(gen_frame + 0x6e8)) + 4,0)));
        }
      }
    }
  }
switchD_00cf607c_caseD_3: ;
  return (uint)pvVar5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf31 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf69d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf69d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf69e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcf69e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if ((piVar1 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP((param_1 + 0xd4))) != 6)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),0)));
  }
  *((float *)GEN_TOP((param_1 + 0x48))) = param_2;
  return (uint)piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf33 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf6a20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcf6a20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0xe8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xe8))) + 0xc))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 0xe8))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xe8))) + 4))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xe8))) GEN_EDX_ARG,0);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf34 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf6a60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xcf6a60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  if ((*((int *)GEN_TOP(((int)param_1 + 0x84))) != 0) && (*((int *)GEN_TOP(((int)param_1 + 0x88))) != 0)) {
    *((float *)GEN_TOP(((int)param_1 + 0x14))) = param_2;
    *((float *)GEN_TOP(((int)param_1 + 0x90))) = (float)(float10)0;
    *((float *)GEN_TOP(((int)param_1 + 0x8c))) = param_3;
    F_00cf5f80(param_1 GEN_EDX_FWD);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf6aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf6aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x3c))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf36 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf6ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf6ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x3c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf37 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf6ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcf6ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x40))) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf11 */
GEN_LIB GEN_NOFRAME unsigned int F_00cf6ad0(void)
{
  GEN_ENTER(0xcf6ad0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cf6ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf6ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf6ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *((uint *)GEN_TOP(((int)this + 0x240))) = param_1;
  uVar1 = param_1;
  if ((param_1 != 0) && (*((int *)GEN_TOP((param_1 + 0x10))) != 0)) {
    uVar1 = param_1 + 0x14;
    *((undefined2 *)GEN_TOP(((int)this + 0x248))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
    *((uint *)GEN_TOP(((int)this + 0x244))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00cf6b20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cf6b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf6b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  short sVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  if (*((int *)GEN_TOP((param_1 + 0x240))) == 0) {
    return 0;
  }
  sVar1 = *((short *)GEN_TOP((param_1 + 0x248)));
  bVar4 = 0;
  uVar3 = param_2 / *((uint *)GEN_TOP((param_1 + 0x98))) >> 1;
  *((int *)GEN_TOP((param_1 + 0x24c))) = *((int *)GEN_TOP((param_1 + 0x24c))) + uVar3;
  if (-1 < sVar1) {
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x244))) + sVar1 * 4)));
    if ((*((int *)GEN_TOP((param_1 + 0x24c))) < iVar2) &&
       ((int)(uVar3 / 2) <= iVar2 - *((int *)GEN_TOP((param_1 + 0x24c))))) {
      local_5 = 0;
      bVar4 = local_5;
    }
    else {
      *((short *)GEN_TOP((param_1 + 0x248))) = sVar1 + 1;
      bVar4 = 1;
      if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x240))) + 0x10))) <= (int)(short)(sVar1 + 1)) {
        *((undefined2 *)GEN_TOP((param_1 + 0x248))) = 0xffff;
      }
    }
  }
  if (param_3 != '\0') {
    *((undefined4 *)GEN_TOP((param_1 + 0x24c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x240))) + 8)));
    *((undefined2 *)GEN_TOP((param_1 + 0x248))) = 0;
    if (**((int * PTR32 *)GEN_TOP((param_1 + 0x244))) <= *((int *)GEN_TOP((param_1 + 0x24c)))) {
      while (*((short *)GEN_TOP((param_1 + 0x248))) = *((short *)GEN_TOP((param_1 + 0x248))) + 1,
            (int)*((short *)GEN_TOP((param_1 + 0x248))) < *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x240))) + 0x10)))) {
        if (*((int *)GEN_TOP((param_1 + 0x24c))) <
            *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x244))) + *((short *)GEN_TOP((param_1 + 0x248))) * 4)))) {
          return bVar4;
        }
      }
      *((undefined2 *)GEN_TOP((param_1 + 0x248))) = 0xffff;
    }
  }
  return bVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf42 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf6c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf6c30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x34))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf43 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf6c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf6c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x40))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf13 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cf6c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf6c70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char * pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_10;
  ushort local_8;
  
  if (param_1 == 0) {
    return 1;
  }
  if (*(int *)(this + 0xc) != 0) {
    iVar5 = *(int *)(this + 0xa0);
    if (iVar5 == 1) {
      fVar6 = (float10)param_1;
      if (param_1 < 0) {
        fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar7 = (float10)*(int *)(this + 0x9c);
      if (*(int *)(this + 0x9c) < 0) {
        fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      local_8 = gen_x87_cw | 0xc00;
      uVar3 = *(uint *)(this + 0xa8);
      gen_set_x87_cw((unsigned short)local_8);
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uVar4 = local_10;
      if ((uVar3 != 0) && (uVar3 < local_10)) {
        do {
          uVar4 = uVar4 + (*(int *)(this + 0xa4) - uVar3);
        } while (uVar3 < uVar4);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,0,0);
    }
    else {
      if (iVar5 != 0xc) {
        if (iVar5 == 6) {
          iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) - 0x20;
          uVar4 = F_00ce93e0(iVar5);
          pcVar1 = ((char *)GEN_TOP((iVar5 + uVar4)));
          if ((*pcVar1 != '\0') && (*(uint *)(pcVar1 + 0x10) != 0)) {
            bVar2 = pcVar1[1];
            fVar6 = (float10)param_1;
            uVar4 = *(uint *)(pcVar1 + 0x10) >> 2;
            if (param_1 < 0) {
              fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            iVar5 = (int)((fVar6 * (float10)REFG(double, 0x1091858)) / (float10)*(float *)(pcVar1 + 0xc));
            if ((int)uVar4 <= iVar5) {
              if (*(uint *)(this + 0xa8) <= *(uint *)(this + 0xa4)) {
                return 0;
              }
              do {
                iVar5 = iVar5 + (*(int *)(pcVar1 + 0x18) - uVar4);
              } while ((int)uVar4 <= iVar5);
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x30))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,*(undefined4 *)(pcVar1 + iVar5 * 4 + (uint)bVar2),1);
            return 1;
          }
        }
        return 0;
      }
      iVar5 = (*(int *)(this + 0x1c) - *(int *)(this + 0xac)) - 0x20;
      uVar4 = F_00ce93e0(iVar5);
      fVar6 = (float10)param_1;
      iVar5 = iVar5 + uVar4;
      if (param_1 < 0) {
        fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      fVar7 = (float10)*((int *)GEN_TOP((iVar5 + 4)));
      if (*((int *)GEN_TOP((iVar5 + 4))) < 0) {
        fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      local_8 = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)local_8);
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      local_10 = (uint)(longlong)TRUNC(fVar7 * (fVar6 * (float10)REFG(double, 0x1091858)));
      uVar4 = local_10;
      if ((*(uint *)(this + 0x94) / (uint)*((ushort *)GEN_TOP((iVar5 + 0xc)))) *
          (uint)*((ushort *)GEN_TOP((iVar5 + 0x12))) <= local_10) {
        uVar3 = *(uint *)(this + 0xa8);
        if (uVar3 <= *(uint *)(this + 0xa4)) {
          return 0;
        }
        if (uVar3 < local_10) {
          do {
            uVar4 = uVar4 + (*(uint *)(this + 0xa4) - uVar3);
          } while (uVar3 < uVar4);
        }
      }
      uVar4 = uVar4 - uVar4 % (uint)*((ushort *)GEN_TOP((iVar5 + 0x12)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x50))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x58))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG);
    F_00cf5770(this GEN_EDX_ARG,*(undefined4 *)(this + 0x1c),uVar4);
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf48 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf6ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcf6ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18) + 0x54))))
                      (*(int * PTR32 *)(this + 0x18) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cf6ee0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf6ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  if (*((char *)GEN_TOP((param_1 + 0x2a))) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 100))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x2c))) + 0x38))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x2c))) GEN_EDX_ARG);
    if (((((char)uVar1 == '\0') && (*((int *)GEN_TOP((param_1 + 0xd4))) == 2)) &&
        (*((int *)GEN_TOP((param_1 + 0xd0))) != 3)) && (*((int *)GEN_TOP((param_1 + 0xd0))) != 6)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x50))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,0x20,0);
      *((uint *)GEN_TOP((param_1 + 0xd4))) = ((int)uVar1 < 0) - 1 & 3;
    }
  }
  return;
}

/* ref: FUN_00cf6f50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf6f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf6f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  if (*((char *)GEN_TOP((param_1 + 0x2a))) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 100))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x2c))) + 0x38))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x2c))) GEN_EDX_ARG);
    if (((((char)uVar1 != '\0') && (*((int *)GEN_TOP((param_1 + 0xd4))) == 3)) &&
        (*((int *)GEN_TOP((param_1 + 0xd0))) != 3)) && (*((int *)GEN_TOP((param_1 + 0xd0))) != 6)) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x4c))))(*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,0,0);
      *((uint *)GEN_TOP((param_1 + 0xd4))) = ((int)uVar1 < 0) - 1 & 2;
    }
  }
  return;
}

/* ref: FUN_00cf6fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf6fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf6fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined4 *)GEN_TOP((param_1 + 0xd0))) = 6;
  return param_1;
}

/* ref: FUN_00cf6fe0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf6fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf6fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 == 1) {
    F_00cd8d60(*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_FWD,0xff,0);
  }
  return;
}

/* ref: FUN_00cf7000 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf7000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf7000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00cf7010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf7010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 - 4))) + 0x40))))(param_1 - 4);
  return uVar1;
}

/* ref: FUN_00cf7030 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf7030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ecx;
  int local_8;
  
  fVar1 = (float10)1;
  *((float *)GEN_TOP(((int)this + 0x14))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x40))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x44))) = (float)fVar1;
  *((float *)GEN_TOP(((int)this + 0x48))) = (float)fVar1;
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *((float *)GEN_TOP(((int)this + 0x4c))) = (float)fVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  *((float *)GEN_TOP(((int)this + 0x50))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((float *)GEN_TOP(((int)this + 0x54))) = (float)fVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2e))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *((undefined1 *)GEN_TOP(((int)this + 0xd0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  in_ecx = (int)this + 0xf0;
  local_8 = 3;
  do {
    F_00cea700(in_ecx GEN_EDX_ARG);
    uVar2 = REFG(undefined4, 0x134fe14);
    in_ecx = in_ecx + 0x54;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x240))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x248))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar2,((char *)REFP(0x112a0a8)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0xe4))) = uVar3;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1a8,((char *)REFP(0x112a0a8)),0,0,0x10);
  *((uint *)GEN_TOP(((int)this + 0xec))) = uVar3;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf7190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  F_00cf5630(this GEN_EDX_FWD);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xa4)));
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  uVar2 = (*pcVar1)(this);
  *(undefined4 *)(this + 0x34) = 0;
  this[0x5c] = (undefined1)0x0;
  this[0x38] = (undefined1)0x0;
  return uVar2;
}

/* ref: FUN_00cf71c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf71c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf71c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  
  if (((*param_2 == '\x02') &&
      (bVar2 = param_2[1], iVar3 = *(int *)(param_2 + 0x10),
      *(int *)(param_2 + (uint)bVar2 + iVar3) != 0x5367674f)) &&
     (uVar4 = 0, *(int *)(param_2 + 0x14) != 0)) {
    do {
      pbVar1 = ((byte *)GEN_TOP((uVar4 + (int)(param_2 + (uint)bVar2 + iVar3))));
      *pbVar1 = *pbVar1 ^ param_2[2];
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x14));
  }
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                              (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x68,((char *)REFP(0x1130d00)),0,0,0x10)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    piVar5 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar5 = ((int *)GEN_TOP(F_00cfed50(this_00 GEN_EDX_ARG,param_1,*((undefined4 *)GEN_TOP(((int)this + 0x94))),
                                 *((int *)GEN_TOP(((int)this + 0x98))) << 0xb,4,0,param_2,0)));
  }
  *((int * PTR32 *)GEN_TOP(((int)this + 0x18))) = piVar5;
  if (*((int *)GEN_TOP(((int)this + 0xa8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x2c))))
              (piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xa4))),*((int *)GEN_TOP(((int)this + 0xa8))));
  }
  uVar4 = F_00ce9400(param_3);
  *((uint *)GEN_TOP(((int)this + 0x240))) = uVar4;
  if ((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 0x10))) != 0)) {
    uVar4 = uVar4 + 0x14;
    *((undefined2 *)GEN_TOP(((int)this + 0x248))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
    *((uint *)GEN_TOP(((int)this + 0x244))) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00cf72c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf72c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf72c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x40, 0, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*((char *)GEN_TOP(((int)this + 0x38))) != '\x01') {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
    (*(int * PTR32 *)(gen_frame + 0x34)) = piVar1;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      if (*((int *)GEN_TOP(((int)this + 0x34))) == 3) {
        (*(int *)(gen_frame + 0x24)) = 0;
        (*(int *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(uint *)(gen_frame + 0x4)) = 0;
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x0));
        (*(uint *)(gen_frame + 0x38)) = 0;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_FWD);
        if (uVar3 != 0) {
          while (piVar1 = (*(int * PTR32 *)(gen_frame + 0x34)), uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x24))))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG),
                (char)uVar3 == '\0') {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 100))))(piVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)));
            if (uVar3 == 0xffffffff) {
              F_00cde750(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) GEN_EDX_ARG);
              break;
            }
            if (((*(int *)(gen_frame + 0x24)) == 0) || ((*(int *)(gen_frame + 0x28)) == 0)) break;
            (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x24));
            (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 0x18)))));
            (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x28));
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),uVar3 == 3);
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x1));
            }
            if (0 < (int)uVar3) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
            }
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x54))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
            if ((int)uVar3 < 0) break;
            uVar5 = (*(uint *)(gen_frame + 0x38)) + 1;
            (*(uint *)(gen_frame + 0x38)) = uVar5;
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
            if (uVar3 <= uVar5) {
              *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 1;
              return;
            }
          }
        }
      }
      else {
        uVar5 = 0;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
        if (uVar3 != 0) {
          while (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x24))))
                                   (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG), (char)uVar3 == '\0') {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
            piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
            (*(undefined4 *)(gen_frame + 0x0)) = 0;
            (*(uint *)(gen_frame + 0x4)) = 0;
            (*(uint *)(gen_frame + 0x8)) = 0;
            (*(undefined4 *)(gen_frame + 0xc)) = 0;
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x0));
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
            (*(uint *)(gen_frame + 0x4)) = uVar4;
            if (uVar4 == 0) break;
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 8))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,uVar5);
            piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
            (*(uint *)(gen_frame + 0x8)) = uVar4;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x20)) = piVar1;
            if (uVar3 != 0) {
              (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
            }
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0xc))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,uVar5);
            bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),(char)uVar3);
            if (bVar2 == 1) {
              (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP(0x1));
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x54))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
            uVar5 = uVar5 + 1;
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
            if (uVar3 <= uVar5) {
              *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 1;
              return;
            }
          }
        }
      }
      *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 1;
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0xd4);
  if ((uVar1 == 1) || (uVar1 == 3)) {
    F_00cf72c0(this GEN_EDX_FWD);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
    *(undefined4 *)(this + 0xd4) = 2;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf29 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf7530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf7530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00cf9bb0(this + 0x144 GEN_EDX_FWD,param_1 + 0x54);
  F_00cf9bb0(this + 0xf0 GEN_EDX_ARG,param_1);
  F_00cf9bb0(this + 0x198 GEN_EDX_ARG,param_1 + 0xa8);
  F_00cf9bb0(this + 0x1ec GEN_EDX_ARG,param_1 + 0xfc);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf46 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf7580(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf7580u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  *((float *)GEN_TOP(((int)param_1 + 0x4c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x58))) = param_5;
  *((float *)GEN_TOP(((int)param_1 + 0x50))) = param_3;
  *((float *)GEN_TOP(((int)param_1 + 0x54))) = param_4;
  uVar1 = F_00cf5f80(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf51 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf75b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xcf75b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 * puVar1;
  undefined * pvVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  float10 extraout_ST0;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_FWD,0);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xe0)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP((param_1 + 0xe0))) = 0;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0xe8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP((param_1 + 0xe8))) = 0;
  }
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if ((pvVar2 == ((undefined *)GEN_TOP(0x0))) ||
       (piVar4 = ((int *)GEN_TOP(F_00cf9500(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1))), piVar4 == ((int *)GEN_TOP(0x0)))) break;
LAB_00cf7633: ;
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((*piVar4 + 4))) + (int)piVar4)));
    goto LAB_00cf763a;
  case 2: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00cf9570(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1)));
      if (piVar4 != ((int *)GEN_TOP(0x0))) goto LAB_00cf7633;
      piVar4 = ((int *)GEN_TOP(0x0));
      goto LAB_00cf763a;
    }
    break;
  case 3: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00cf95e0(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(0x0));
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 4: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00cf9650(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(0x0));
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 5: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00cf96c0(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(0x0));
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 6: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00cf9800(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(0x0));
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  case 7: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(F_00cf9940(pvVar2 GEN_EDX_ARG,(int)pvVar2 + 0x88,0,1)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(0x0));
        goto LAB_00cf763a;
      }
      goto LAB_00cf7633;
    }
    break;
  default: ;
    *((undefined4 *)GEN_TOP((param_1 + 0xe0))) = 0;
    goto LAB_00cf7782;
  }
  piVar4 = ((int *)GEN_TOP(0x0));
LAB_00cf763a: ;
  *((int * PTR32 *)GEN_TOP((param_1 + 0xe0))) = piVar4;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),0,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xe0))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0xe0))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_4),1,0);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xe0))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP((param_1 + 0xe0))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_5),2,0);
LAB_00cf7782: ;
  (*(uint * PTR32 *)(gen_frame + 0x1c)) = ((uint *)(gen_frame + 0x0));
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0xe0)));
  (*(int *)(gen_frame + 0x18)) = 0;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((uint *)(gen_frame + 0x0))[2] = *((undefined4 *)GEN_TOP((param_1 + 0x98)));
    ((uint *)(gen_frame + 0x0))[1] = 1;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG);
    ((uint *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x18)) * 3)] = uVar5;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0xe8))) != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 8)));
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x100))))(piVar4);
    iVar3 = (*(int *)(gen_frame + 0x18));
    ((uint *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x18)) * 3 + 1)] = (uint)((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0);
    ((uint *)(gen_frame + 0x0))[(int)(iVar3 * 3 + 2)] = *((uint *)GEN_TOP((param_1 + 0x98)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xe8))) + 0x18))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xe8))) GEN_EDX_ARG);
    ((uint *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x18)) * 3)] = uVar5;
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0xc))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 + 0xc))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x18)));
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0xe0)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xc))),0);
  }
  uVar5 = (uint)(piVar4 != ((int *)GEN_TOP(0x0)));
  piVar4 = *((int * PTR32 *)GEN_TOP((param_1 + 0xe8)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x14))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0xc))),uVar5);
  }
  return uVar5;
}

/* ref: FUN_00cf7890 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf7890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x3c, 4, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if ((((*((int *)GEN_TOP(((int)this + 0xc))) != 0) && (*((int *)GEN_TOP(((int)this + 0x18))) != 0)) &&
      (iVar4 = *((int *)GEN_TOP(((int)this + 0xd4))), iVar4 != 6)) &&
     ((*((int *)GEN_TOP(((int)this + 0x34))) != 2 || ((iVar4 != 4 && (iVar4 != 5)))))) {
    lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb8);
    if (*((char *)GEN_TOP(((int)this + 0xd0))) != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 0xb4)));
    *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
    (*(int *)(gen_frame + 0x34)) = iVar4;
    if (*((char *)GEN_TOP(((int)this + 0xd0))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (*((int *)GEN_TOP(((int)this + 0x34))) == 3) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(uint *)(gen_frame + 0x4)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(uint *)(gen_frame + 0x20)) = 0;
      if ((*(int *)(gen_frame + 0x34)) != 0) {
        while (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG), (char)uVar3 == '\0') {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 100))))(piVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)));
          if (uVar3 == 0xffffffff) {
            F_00cde750(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 8))) GEN_EDX_ARG);
            break;
          }
          if (((*(int *)(gen_frame + 0x24)) == 0) || ((*(int *)(gen_frame + 0x28)) == 0)) break;
          (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x28));
          (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x24));
          if (uVar3 == 1) {
            (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
          }
          bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)),uVar3 == 3);
          (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) - 1;
          (*(uint *)(gen_frame + 0x20)) = (uint)(bVar2 == 1);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x54))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
          if ((int)uVar3 < 0) break;
          if ((*(int *)(gen_frame + 0x34)) == 0) {
            return;
          }
        }
        iVar4 = (*(int *)(gen_frame + 0x34));
        if ((*(int *)(gen_frame + 0x34)) != 0) {
          if (*((char *)GEN_TOP(((int)this + 0xd0))) != '\0') {
            gen_imp_EnterCriticalSection(lpCriticalSection);
          }
          *((int *)GEN_TOP(((int)this + 0xb4))) = *((int *)GEN_TOP(((int)this + 0xb4))) + iVar4;
          if (*((char *)GEN_TOP(((int)this + 0xd0))) != '\0') {
            gen_imp_LeaveCriticalSection(lpCriticalSection);
            return;
          }
        }
      }
    }
    else if (iVar4 != 0) {
      while (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG)
            , (char)uVar3 == '\0') {
        piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
        (*(uint *)(gen_frame + 0x4)) = 0;
        (*(uint *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        (*(uint *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG);
        if ((uVar3 != 0) || (*((int *)GEN_TOP(((int)this + 0xd4))) == 5)) {
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18)));
          (*(undefined4 *)(gen_frame + 0x0)) = 0x40;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,1);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x58))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
          if ((char)uVar3 != '\0') {
            F_00cd87f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,0);
            return;
          }
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
        if ((int)uVar3 < 0) {
          return;
        }
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        if (uVar3 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x30))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),0);
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x4)) = uVar3;
          *((undefined1 *)GEN_TOP(((int)this + 0x5c))) = 1;
        }
        else if (*((char *)GEN_TOP(((int)this + 0x5c))) != '\0') {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x44))));
          *((undefined1 *)GEN_TOP(((int)this + 0x5c))) = 0;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x18))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
        iVar4 = uVar3 - 1;
        if (iVar4 < 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
          iVar4 = uVar3 - 1;
        }
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,iVar4);
        (*(uint *)(gen_frame + 0x8)) = uVar3;
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,iVar4)
        ;
        bVar2 = F_00cf6b20(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),(char)uVar3);
        if (bVar2 == 1) {
          (*(uint *)(gen_frame + 0x20)) = 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x54))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),0);
        iVar4 = (*(int *)(gen_frame + 0x34)) - 1;
        (*(int *)(gen_frame + 0x34)) = iVar4;
        if (iVar4 == 0) {
          return;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00cf7b70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf7b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf7b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined1 *)GEN_TOP((param_1 + 0xcc))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  *((int *)GEN_TOP((param_1 + 0xb0))) = *((int *)GEN_TOP((param_1 + 0xb0))) + 1;
  if (*((char *)GEN_TOP((param_1 + 0xcc))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb4));
  }
  return 0;
}

/* ref: FUN_00cf7bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf7bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * this_00;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar5;
  
  piVar4 = *((int * PTR32 *)GEN_TOP((*((uint *)GEN_TOP(((int)this + 8))) + 8)));
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    return *((uint *)GEN_TOP(((int)this + 8)));
  }
  this_00 = *((int * PTR32 *)GEN_TOP(((int)this + 0xec)));
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    *this_00 = (int)&REFG(undefined, 0x112a2b8);
    this_00[4] = (int)&REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0(this_00 + 6 GEN_EDX_FWD,0);
    F_00cd0850(this_00 GEN_EDX_ARG,this_00 + 0x22,0,0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this_00 + *((int *)GEN_TOP((this_00[4] + 4))) + 0x10))) =
         (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this_00 + *((int *)GEN_TOP((*this_00 + 4)))))) =
         (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
    *((int *)GEN_TOP((*((int *)GEN_TOP((*this_00 + 4))) - 4 + (int)this_00))) = *((int *)GEN_TOP((*this_00 + 4))) - 0x18;
    *((int *)GEN_TOP(((int)this + 0xe8))) = *((int *)GEN_TOP((*this_00 + 4))) + (int)this_00;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x100))))(piVar4);
    if ((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0) {
      iVar1 = *(int *)this;
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x100))))(piVar4);
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x84))))(this,(undefined4)gen_fl2bits((float)extraout_ST0_00));
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb4))))(piVar4 GEN_EDX_ARG);
  uVar3 = uVar3 - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf9500(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
        return 0;
      }
LAB_00cf7e83: ;
      *((int *)GEN_TOP(((int)this + 0xe0))) = *((int *)GEN_TOP((*piVar4 + 4))) + (int)piVar4;
      return (uint)piVar4;
    }
    break;
  case 1: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf9570(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
        return 0;
      }
LAB_00cf7e2f: ;
      *((int *)GEN_TOP(((int)this + 0xe0))) = *((int *)GEN_TOP((*piVar4 + 4))) + (int)piVar4;
      return (uint)piVar4;
    }
    goto LAB_00cf7e20;
  case 2: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf95e0(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
        return 0;
      }
      goto LAB_00cf7e83;
    }
    break;
  case 3: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf9650(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
        return 0;
      }
      goto LAB_00cf7e2f;
    }
    goto LAB_00cf7e20;
  case 4: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf96c0(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      if (piVar4 == ((int *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
        return 0;
      }
      goto LAB_00cf7e83;
    }
    break;
  case 5: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf9800(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      uVar3 = 0;
      if (piVar4 != ((int *)GEN_TOP(0x0))) goto LAB_00cf7e2f;
    }
LAB_00cf7e20: ;
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
    return uVar3;
  case 6: ;
    pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0xe4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      uVar5 = 1;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xb8))))(piVar4 GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00cf9940(pvVar2 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xe4))) + 0x88,uVar3,uVar5)));
      uVar3 = 0;
      if (piVar4 != ((int *)GEN_TOP(0x0))) goto LAB_00cf7e83;
    }
    break;
  default: ;
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  return uVar3;
}

/* ref: FUN_00cf7ed0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf7ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf7ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xe8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131354));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[7])REFP(0x1131334));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x18))))(piVar2 GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG);
  }
  F_00cf5630(this GEN_EDX_ARG);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xa4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  (*pcVar1)(this);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0xe4))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0xe4))));
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0xec))));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  }
  iVar3 = 3;
  iVar4 = (int)this + 0x244;
  do {
    F_00cccb40(iVar4 - 0x30 GEN_EDX_ARG);
    F_00cccb40(iVar4 - 0x54 GEN_EDX_ARG);
    iVar3 = iVar3 - 1;
    iVar4 = iVar4 - 0x54;
  } while (-1 < iVar3);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  return 0;
}

/* ref: FUN_00cf7fa0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cf7fa0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf7fa0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x1e8, 8, 4);
  int * piVar1;
  uint uVar2;
  int * piVar3;
  code * pcVar4;
  float10 fVar5;
  float10 fVar6;
  byte bVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float * pfVar11;
  uint uVar12;
  undefined4 uVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1e0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1e4));
  (*(float *)(gen_frame + 0x34)) = param_2;
  if (REFG(char, 0x15d8bd9) != '\0') {
    return 0;
  }
  uVar8 = F_00cd7ae0(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_FWD);
  uVar12 = 1;
  ((float *)(gen_frame + 0x1bc))[4] = 0.0;
  ((float *)(gen_frame + 0x1bc))[5] = 0.0;
  ((float *)(gen_frame + 0x1bc))[6] = 0.0;
  ((float *)(gen_frame + 0x1bc))[7] = 0.0;
  ((float *)(gen_frame + 0x1bc))[8] = 0.0;
  (*(uint *)(gen_frame + 0x30)) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x2e))) = 0;
    param_1[0x36] = 0;
    param_1[0xc] = 0;
    fVar14 = gen_bits2f(F_00ccb4d0(uVar8 - 1));
    param_1[4] = (int)gen_fl2bits(fVar14);
    if (fVar14 == 0.0) {
      return 0;
    }
    ((float *)(gen_frame + 0x1bc))[4] = fVar14;
    if (param_3 != '\0') {
      F_00d2de20(((undefined1 *)(gen_frame + 0x28)),0);
      bVar7 = F_00cbb930(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      iVar10 = -(uint)(bVar7 != 0);
      if (-1 < iVar10) {
        uVar8 = F_00ccb560(iVar10);
        param_1[0x21] = uVar8;
        fVar9 = gen_bits2f(F_00ccb580(iVar10));
        fVar14 = gen_bits2f(param_1[0x21]);
        param_1[0x22] = (int)gen_fl2bits(fVar9);
        if ((fVar14 != 0.0) && (fVar9 != 0.0)) {
          (*(uint *)(gen_frame + 0x30)) = 3;
          uVar12 = 3;
          param_1[5] = (int)gen_fl2bits((float)(float10)0);
          ((float *)(gen_frame + 0x1bc))[5] = fVar9;
          param_1[0x23] = (int)gen_fl2bits((float)(float10)1);
          ((float *)(gen_frame + 0x1bc))[6] = fVar14;
          param_1[0x24] = (int)gen_fl2bits((float)(float10)1);
          *(undefined1 *)(param_1 + 0x20) = 0;
        }
      }
      F_00cbb890(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    }
  }
  else {
    bVar7 = F_00cd7b40(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG,0);
    iVar10 = REFG(int, 0x15d8bac);
    if (bVar7 == 0) {
      param_1[4] = REFG(int, 0x15d8bac);
      if (iVar10 == 0) {
        param_1[4] = REFG(int, 0x15d8ba8);
      }
    }
    else {
      uVar8 = F_00ccb4d0(bVar7 - 1);
      param_1[4] = uVar8;
    }
    ((float *)(gen_frame + 0x1bc))[4] = gen_bits2f(param_1[4]);
    bVar7 = F_00cd7c00(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG);
    if (bVar7 != 0) {
      fVar14 = F_00cd7ba0(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG,0);
      param_1[5] = (int)gen_fl2bits(fVar14);
    }
    bVar7 = F_00cd7c00(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG);
    if ((byte)(bVar7 - 1) != 0) {
      pfVar11 = (float *)(param_1 + 0x1c);
      (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP((uint)(byte)(bVar7 - 1)));
      uVar8 = uVar12;
      do {
        bVar7 = F_00cd7b40(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG,uVar8);
        if (bVar7 != 0) {
          fVar14 = gen_bits2f(F_00ccb4d0(bVar7 - 1));
          ((float *)(gen_frame + 0x1bc))[(int)((*(uint *)(gen_frame + 0x30)) + 4)] = fVar14;
          pfVar11[-4] = fVar14;
          (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) + 1;
          fVar14 = F_00cd7ba0(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG,uVar8);
          *pfVar11 = fVar14;
        }
        uVar8 = (uint)(byte)((char)uVar8 + 1);
        pfVar11 = pfVar11 + 1;
        uVar2 = (int)(*(int * PTR32 *)(gen_frame + 0x2c)) - 1;
        (*(int * PTR32 *)(gen_frame + 0x2c)) = ((int *)GEN_TOP(uVar2));
        uVar12 = (*(uint *)(gen_frame + 0x30));
      } while (uVar2 != 0);
    }
    bVar7 = F_00cd7d80(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG);
    *((byte *)GEN_TOP(((int)param_1 + 0x2e))) = bVar7;
    if (bVar7 == 0) {
      param_1[0x36] = 0;
      param_1[0xc] = 0;
    }
    else {
      param_1[0x36] = 2;
      uVar8 = F_00d2dec0(((undefined1 *)(gen_frame + 0x28)),0);
      uVar8 = F_00cc6b40(uVar8 GEN_EDX_ARG);
      param_1[0xc] = uVar8;
      F_00cc6ac0(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xc])) + 0x30))))(((int *)GEN_TOP(param_1[0xc])) GEN_EDX_ARG);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xc])) + 0x3c))))(((int *)GEN_TOP(param_1[0xc])));
      F_00cd6890(param_1[2] GEN_EDX_ARG,(float)extraout_ST0);
    }
  }
  iVar10 = 0;
  ((float *)(gen_frame + 0x138))[0] = 0.0;
  ((float *)(gen_frame + 0x138))[1] = 0.0;
  ((float *)(gen_frame + 0x138))[2] = 0.0;
  ((float *)(gen_frame + 0x138))[3] = 0.0;
  ((float *)(gen_frame + 0x138))[4] = 0.0;
  ((float *)(gen_frame + 0x138))[5] = 0.0;
  ((float *)(gen_frame + 0x138))[6] = 0.0;
  ((float *)(gen_frame + 0x138))[7] = 0.0;
  ((float *)(gen_frame + 0x138))[8] = 0.0;
  ((float *)(gen_frame + 0x138))[9] = 0.0;
  if (0 < (int)uVar12) {
    do {
      fVar14 = ((float *)(gen_frame + 0x1bc))[(int)(iVar10 + 4)];
      ((float *)(gen_frame + 0x138))[(int)(iVar10 * 2)] = 0.0;
      ((float *)(gen_frame + 0x138))[(int)(iVar10 * 2 + 1)] = fVar14;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)uVar12);
  }
  (*(uint *)(gen_frame + 0x18)) = uVar12;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x138));
  F_00cf7bb0(param_1 GEN_EDX_ARG);
  (*(uint * PTR32 *)(gen_frame + 0x24)) = ((uint *)(gen_frame + 0x0));
  piVar3 = ((int *)GEN_TOP(param_1[0x38]));
  (*(int *)(gen_frame + 0x20)) = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((uint *)(gen_frame + 0x0))[2] = param_1[0x26];
    ((uint *)(gen_frame + 0x0))[1] = 0;
    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG);
    ((uint *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x20)) * 3)] = uVar12;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  }
  if (param_1[0x3a] != 0) {
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1[2] + 8))) + 0x100))))(*((int * PTR32 *)GEN_TOP((param_1[2] + 8))));
    iVar10 = (*(int *)(gen_frame + 0x20));
    ((uint *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x20)) * 3 + 1)] = (uint)((float10)*(float *)&REFG(undefined, 0x1088114) <= extraout_ST0_00);
    ((uint *)(gen_frame + 0x0))[(int)(iVar10 * 3 + 2)] = param_1[0x26];
    uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x3a])) + 0x18))))(((int *)GEN_TOP(param_1[0x3a])) GEN_EDX_ARG);
    ((uint *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x20)) * 3)] = uVar12;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  }
  piVar3 = REFG(int * PTR32, 0x15d8ba4);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = REFG(int * PTR32, 0x15d8ba4);
  if (REFG(int * PTR32, 0x15d8ba4) == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1ac)) + 0)) = 0;
  (*(float *)(gen_frame + 0x1ac)) = gen_bits2f((uint)(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x1ac)) + 2)) << 0x10);
  F_00c48350(((undefined *)GEN_TOP(((int)&(*(float *)(gen_frame + 0x1ac)) + 2))),0,0x32);
  fVar14 = (*(float *)(gen_frame + 0x34));
  bVar7 = F_00cf5910(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1ac)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34))));
  if (bVar7 == 0) {
    return 0;
  }
  if (param_1[0x28] == 0xc) {
    if (param_1[0x2a] != 0) {
      uVar8 = F_00ce9420(param_1 + 0x25);
      uVar12 = (uint)gen_fl2bits(((float *)(gen_frame + 0x1bc))[0]) >> 0x10;
      if (uVar8 == 1) {
        param_1[0x29] = ((uint)param_1[0x29] / uVar12) * uVar12;
        uVar8 = param_1[0x2a] + 1;
      }
      else {
        param_1[0x29] = ((uint)param_1[0x29] / uVar12) * uVar12;
        uVar8 = param_1[0x2a];
      }
      param_1[0x2a] = (uVar8 / uVar12) * uVar12;
    }
    uVar12 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1b8))) & 0xffff;
    if ((uint)param_1[0x25] % uVar12 != 0) {
      param_1[0x25] = ((uint)param_1[0x25] / uVar12) * uVar12;
    }
  }
  else {
    if (param_1[0x28] != 0xf) goto LAB_00cf8419;
    uVar12 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x1b8))) & 0xffff;
    param_1[9] = (int)gen_fl2bits(fVar14) + 0x32;
  }
  param_1[8] = uVar12;
LAB_00cf8419: ;
  piVar1 = param_1 + 3;
  uVar12 = ((code *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x20))))
                     ((*(int * PTR32 *)(gen_frame + 0x2c)),piVar1,&(*(float *)(gen_frame + 0x1ac)),0,*(undefined4 *)&REFG(undefined, 0x134c7f0),param_1 + 1,
                      &(*(uint *)(gen_frame + 0x18)),-(uint)((*(int *)(gen_frame + 0x20)) != 0) & (uint)&(*(int *)(gen_frame + 0x20)));
  if ((int)uVar12 < 0) {
    *piVar1 = 0;
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(param_1[0x38]));
  uVar13 = 0;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,*piVar1,0);
    piVar3 = ((int *)GEN_TOP(param_1[0xc]));
    uVar13 = 1;
    if ((piVar3 != ((int *)GEN_TOP(0x0))) &&
       (uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x38))))(piVar3 GEN_EDX_ARG), (char)uVar12 == '\0')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar1)) + 0x50))))(((int *)GEN_TOP(*piVar1)) GEN_EDX_ARG,0x20,0);
    }
  }
  piVar3 = ((int *)GEN_TOP(param_1[0x3a]));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG,*piVar1,uVar13);
  }
  iVar10 = *param_1;
  fVar14 = F_00cd83d0(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0x4c))))(param_1,(undefined4)gen_fl2bits(fVar14));
  iVar10 = *param_1;
  fVar14 = F_00cd68f0(((undefined *)GEN_TOP(param_1[2])) GEN_EDX_ARG);
  ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0x80))))(param_1,(undefined4)gen_fl2bits(fVar14));
  if ((param_1[0x21] != 0) && (param_1[0x22] != 0)) {
    ((float *)(gen_frame + 0x1bc))[1] = (float)(float10)0;
    ((float *)(gen_frame + 0x1bc))[2] = 0.0;
    ((float *)(gen_frame + 0x1bc))[3] = 0.0;
    ((float *)(gen_frame + 0x1bc))[4] = 0.0;
    ((float *)(gen_frame + 0x1bc))[5] = 0.0;
    ((float *)(gen_frame + 0x1bc))[6] = 0.0;
    ((float *)(gen_frame + 0x1bc))[7] = 0.0;
    ((float *)(gen_frame + 0x1bc))[8] = 0.0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar1)) + 0x44))))(((int *)GEN_TOP(*piVar1)) GEN_EDX_ARG,param_1[0x22],param_1[0x26],8,((float *)(gen_frame + 0x38)));
    uVar12 = param_1[0x26];
    uVar8 = 0;
    if (uVar12 != 0) {
      pfVar11 = ((float *)(gen_frame + 0x38)) + 1;
      do {
        uVar8 = uVar8 + 1;
        (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar11[-1] + (float10)((float *)(gen_frame + 0x1bc))[(int)(uVar8)]);
        fVar14 = ((float)GEN_TOF(((float10)(float)((float10)pfVar11[-1] + (float10)((float *)(gen_frame + 0x1bc))[(int)(uVar8)]) +
                        (float10)*pfVar11)));
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = (float)((float10)fVar14 + (float10)pfVar11[1]);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = (float)((float10)fVar14 + (float10)pfVar11[2]);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = (float)((float10)fVar14 + (float10)pfVar11[3]);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = (float)((float10)fVar14 + (float10)pfVar11[4]);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = (float)((float10)fVar14 + (float10)pfVar11[5]);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        ((float *)(gen_frame + 0x1bc))[(int)(uVar8)] = (float)((float10)fVar14 + (float10)pfVar11[6]);
        pfVar11 = pfVar11 + 8;
      } while (uVar8 < uVar12);
    }
    uVar8 = 0;
    if (uVar12 != 0) {
      uVar2 = param_1[0x26];
      do {
        uVar13 = uVar8 + 1;
        uVar8 = uVar8 + 1;
        ((float *)(gen_frame + 0x1bc))[(int)(uVar8)] = (float)((float10)((float *)(gen_frame + 0x1bc))[(int)(uVar13)] * (float10)*(double *)&REFG(double, 0x10948e0));
      } while (uVar8 < uVar2);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar1)) + 0x40))))(((int *)GEN_TOP(*piVar1)) GEN_EDX_ARG,param_1[0x21],uVar12,1,((float *)(gen_frame + 0x1bc)) + 1,0);
  }
  if (param_1[0x26] == 4) {
    fVar5 = (float10)1;
    ((float *)(gen_frame + 0x138))[10] = (float)fVar5;
    pcVar4 = *((gen_code32 *)GEN_TOP((*param_1 + 0xb4)));
    fVar6 = (float10)0;
    (*(float *)(gen_frame + 0x164)) = (float)fVar6;
    (*(float *)(gen_frame + 0x168)) = (float)fVar6;
    (*(float *)(gen_frame + 0x16c)) = (float)fVar6;
    (*(float *)(gen_frame + 0x170)) = (float)fVar6;
    (*(float *)(gen_frame + 0x178)) = (float)fVar6;
    (*(float *)(gen_frame + 0x17c)) = (float)fVar6;
    (*(float *)(gen_frame + 0x180)) = (float)fVar6;
    (*(float *)(gen_frame + 0x184)) = (float)fVar6;
    (*(float *)(gen_frame + 0x188)) = (float)fVar6;
    (*(float *)(gen_frame + 0x18c)) = (float)fVar6;
    (*(float *)(gen_frame + 0x190)) = (float)fVar6;
    (*(float *)(gen_frame + 0x194)) = (float)fVar6;
    (*(float *)(gen_frame + 0x198)) = (float)fVar6;
    (*(float *)(gen_frame + 0x19c)) = (float)fVar6;
    (*(float *)(gen_frame + 0x1a0)) = (float)fVar6;
    (*(float *)(gen_frame + 0x1a4)) = (float)fVar6;
    (*(float *)(gen_frame + 0x1ac)) = (float)fVar6;
    (*(float *)(gen_frame + 0x1b0)) = (float)fVar6;
    (*(float *)(gen_frame + 0x1b4)) = (float)fVar6;
    (*(float *)(gen_frame + 0x1b8)) = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[1] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[2] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[3] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[4] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[5] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[6] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[7] = (float)fVar6;
    ((float *)(gen_frame + 0x1bc))[8] = (float)fVar6;
    (*(float *)(gen_frame + 0x174)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1a8)) = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[0] = (float)fVar5;
    (*pcVar4)(param_1,4,((float *)(gen_frame + 0x138)) + 10);
  }
  uVar12 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1[2] + 8))) + 0x16c))))(*((int * PTR32 *)GEN_TOP((param_1[2] + 8))) GEN_EDX_ARG);
  if ((((char)uVar12 != '\0') && (bVar7 = F_00d2cdf0(), bVar7 != 0)) && (param_1[0x26] == 2)) {
    fVar5 = (float10)0;
    pcVar4 = *((gen_code32 *)GEN_TOP((*param_1 + 0xb4)));
    (*(float *)(gen_frame + 0x1a0)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1a4)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1a8)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1ac)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1b0)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1b4)) = (float)fVar5;
    (*(float *)(gen_frame + 0x1b8)) = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[0] = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[1] = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[2] = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[3] = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[4] = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[5] = (float)(float10)1;
    ((float *)(gen_frame + 0x1bc))[8] = (float)(float10)1;
    ((float *)(gen_frame + 0x1bc))[6] = (float)fVar5;
    ((float *)(gen_frame + 0x1bc))[7] = (float)fVar5;
    (*pcVar4)(param_1,2,&(*(float *)(gen_frame + 0x1a0)));
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf28 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf8730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf8730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  F_00cf9bb0(((undefined *)GEN_TOP(((int)param_1 + 0x54))) GEN_EDX_FWD,this + 0x144);
  F_00cf9bb0(param_1 GEN_EDX_ARG,this + 0xf0);
  F_00cf9bb0(((undefined *)GEN_TOP(((int)param_1 + 0xa8))) GEN_EDX_ARG,this + 0x198);
  F_00cf9bb0(((undefined *)GEN_TOP(((int)param_1 + 0xfc))) GEN_EDX_ARG,this + 0x1ec);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf8790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf8790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  if (*(int *)(this + 0xd4) == 5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 100))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    if ((*(int *)(gen_frame + 0x4)) == 0) {
      *(undefined4 *)(this + 0xd4) = 6;
      F_00cf7890(this GEN_EDX_ARG);
      return;
    }
    if (1000 < *(uint *)(this + 0xdc)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_ARG);
      F_00cf7890(this GEN_EDX_ARG);
      return;
    }
    F_00cf93f0(this GEN_EDX_ARG,param_1);
    if (*(int *)(this + 0xd8) == 2) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x4c))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,0,0);
      *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
      F_00cf7890(this GEN_EDX_ARG);
      return;
    }
  }
  else {
    F_00cf93f0(this GEN_EDX_ARG,param_1);
  }
  F_00cf7890(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00cf8850 */
GEN_LIB_GS GEN_FRAME uint F_00cf8850(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcf8850u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1131140)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x1131120)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf88f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf88f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pVVar5;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x98))))(this GEN_EDX_FWD);
  if (((char)uVar2 == '\0') && (*(int *)(this + 0xd4) != 1)) {
    return uVar2;
  }
  F_00cf5630(this GEN_EDX_ARG);
  puVar4 = param_1;
  pVVar5 = this + 0x94;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 - 1) {
    *(undefined4 *)pVVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pVVar5 = pVVar5 + 4;
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0xac) + 0x20 + (int)param_1;
  iVar3 = *(int *)(this + 0xa0);
  if ((((iVar3 != 0xd) && (iVar3 != 5)) && ((iVar3 != 0xb || (*(uint *)(this + 0x94) < 0x7ff801))))
     && ((*(uint *)(this + 0x94) < 0x80000001 && (iVar3 != -1)))) {
    bVar1 = F_00cf7fa0(this GEN_EDX_ARG,GEN_ARGF(param_1),(undefined1)param_2);
    if (bVar1 == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG);
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(this + 0xa0) == 6) {
      puVar4 = param_1;
      uVar2 = F_00ce93e0(param_1);
      F_00cf71c0(this GEN_EDX_ARG,*(int *)(this + 0xac) + 0x20 + (int)param_1,uVar2 + (int)param_1,puVar4);
      *(undefined4 *)(this + 0x34) = 1;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
    F_00cf5770(this GEN_EDX_ARG,*(int *)(this + 0xac) + 0x20 + (int)param_1,0);
    *(undefined4 *)(this + 0x34) = 1;
    *(undefined4 *)(this + 0xd4) = 1;
    return 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG);
  return uVar2 & 0xffffff00;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf9 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cf8a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf8a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  int * this_00;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pVVar7;
  
  F_00cf5630(this GEN_EDX_FWD);
  this_00 = ((int *)GEN_TOP(F_00cd7cc0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG)));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x14))))(this_00 GEN_EDX_ARG,0)));
  puVar6 = puVar2;
  pVVar7 = this + 0x94;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 - 1) {
    *(undefined4 *)pVVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    pVVar7 = pVVar7 + 4;
  }
  iVar5 = *(int *)(this + 0xa0);
  if (iVar5 != -1) {
    if (iVar5 == 6) {
      *(undefined1 *)(this_00 + 0x33) = 1;
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      this_00[0x2b] = this_00[0x29];
      this_00[0x2c] = this_00[0x2a];
      if ((char)this_00[0x33] != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this_00 + 0x2d));
      }
      pvVar3 = ((undefined *)GEN_TOP(F_00cf9ab0(this_00 + 0x29 GEN_EDX_ARG,0x38,4)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff5e0(pvVar3 GEN_EDX_ARG,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
      uVar4 = F_00ce9400(puVar2);
      *(uint *)(this + 0x240) = uVar4;
      if ((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 0x10))) != 0)) {
        *(undefined2 *)(this + 0x248) = 0;
        *(undefined4 *)(this + 0x24c) = 0;
        *(uint *)(this + 0x244) = uVar4 + 0x14;
      }
    }
    else {
      if (iVar5 != 0xc) goto LAB_00cf8b73;
      F_00cf9b60(this_00 GEN_EDX_ARG);
      pvVar3 = ((undefined *)GEN_TOP(F_00cf9ab0(this_00 + 0x29 GEN_EDX_ARG,0x18,4)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        uVar4 = 0;
      }
      else {
        uVar4 = F_00cff240(pvVar3 GEN_EDX_ARG,this_00);
      }
      *(uint *)(this + 0x18) = uVar4;
    }
    bVar1 = F_00cf7fa0(this GEN_EDX_ARG,GEN_ARGF(puVar2),(undefined1)param_2);
    if (bVar1 != 0) {
      *(undefined4 *)(this + 0x34) = 3;
      *(undefined4 *)(this + 0xd4) = 1;
      return 1;
    }
  }
LAB_00cf8b73: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa0))))(this GEN_EDX_ARG);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cf8b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcf8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130cf8)),((char *)REFP(0x1130cc4)),((char *)REFP(0x1130c6c)),
                  0x180,((char *)REFP(0x1130c80)));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8be0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf8be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130d78)),&REFG(undefined, 0x1130c7d),((char *)REFP(0x1130d64)),
                    0x50e,((char *)REFP(0x1130d20)));
  }
  *((uint *)GEN_TOP(((uint)param_2 * 0x54 + 0xec + param_1))) = (uint)param_3;
  return (uint)param_3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf8c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130df8)),&REFG(undefined, 0x1130c7e),((char *)REFP(0x1130de4)),
                    0x519,((char *)REFP(0x1130da0)));
  }
  uVar1 = F_00cea740(((undefined *)GEN_TOP(((uint)param_2 * 0x54 + 0x9c + param_1))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8cc0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf8cc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130e78)),&REFG(undefined, 0x1130c7f),((char *)REFP(0x1130e64)),
                    0x524,((char *)REFP(0x1130e20)));
  }
  uVar1 = F_00ceaa80((uint)param_2 * 0x54 + 0x9c + param_1 GEN_EDX_ARG,param_3,param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8d40(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xcf8d40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined * this;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130ef8)),&REFG(undefined, 0x1130cc2),((char *)REFP(0x1130ee4)),
                    0x52f,((char *)REFP(0x1130ea0)));
  }
  this = ((undefined *)GEN_TOP(((uint)param_2 * 0x54 + 0x9c + param_1)));
  fVar2 = (float10)F_00ceaab0(this GEN_EDX_ARG);
  param_3 = (float)(fVar2 + (float10)param_3);
  fVar2 = (float10)1;
  fVar3 = (float10)param_3;
  if ((fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) ||
     (fVar2 = (float10)0, fVar3 <= fVar2 && ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar3)) && fVar2 != fVar3))) {
    param_3 = (float)fVar2;
  }
  uVar1 = F_00ceaa80(this GEN_EDX_ARG,param_3,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf24 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf8df0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf8df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130f78)),&REFG(undefined, 0x1130cc3),((char *)REFP(0x1130f64)),
                    0x541,((char *)REFP(0x1130f20)));
  }
  F_00ceaab0(((undefined *)GEN_TOP(((uint)param_2 * 0x54 + 0x9c + param_1))) GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8e60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcf8e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1130ff8)),&REFG(undefined, 0x1130cf5),((char *)REFP(0x1130fe4)),
                    0x54c,((char *)REFP(0x1130fa0)));
  }
  uVar1 = F_00ceaac0((uint)param_2 * 0x54 + 0x9c + param_1 GEN_EDX_ARG,param_3,param_4);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8ed0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcf8ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  uint uVar1;
  
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1131078)),&REFG(undefined, 0x1130cf6),((char *)REFP(0x1131064)),
                    0x557,((char *)REFP(0x1131020)));
  }
  this = ((undefined *)GEN_TOP(((uint)param_2 * 0x54 + 0x9c + param_1)));
  uVar1 = F_00ceab20(this GEN_EDX_ARG);
  uVar1 = F_00ceaac0(this GEN_EDX_ARG,param_3 + uVar1,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf27 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf8f50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf8f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  if (4 < param_2) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcf8850));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x11310f8)),&REFG(undefined, 0x1130cf7),((char *)REFP(0x11310e4)),
                    0x566,((char *)REFP(0x11310a0)));
  }
  uVar1 = F_00ceab20(((undefined *)GEN_TOP(((uint)param_2 * 0x54 + 0x9c + param_1))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf1 */
GEN_LIB GEN_NOFRAME uint F_00cf8fd0(void)
{
  GEN_ENTER(0xcf8fd0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf2 */
GEN_LIB GEN_NOFRAME byte F_00cf8fe0(void)
{
  GEN_ENTER(0xcf8fe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf3 */
GEN_LIB GEN_NOFRAME byte F_00cf8ff0(void)
{
  GEN_ENTER(0xcf8ff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf7 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cf9000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcf9000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf8 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cf9010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf9 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cf9020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf34 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf45 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf46 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcf9050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf47 */
GEN_LIB GEN_NOFRAME uint F_00cf9060(void)
{
  GEN_ENTER(0xcf9060u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf48 */
GEN_LIB GEN_NOFRAME unsigned int F_00cf9070(void)
{
  GEN_ENTER(0xcf9070u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf49 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf50 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf51 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf90a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcf90a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf52 */
GEN_LIB GEN_NOFRAME uint F_00cf90b0(void)
{
  GEN_ENTER(0xcf90b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf53 */
GEN_LIB GEN_NOFRAME unsigned int F_00cf90c0(void)
{
  GEN_ENTER(0xcf90c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf54 */
GEN_LIB GEN_NOFRAME uint F_00cf90d0(void)
{
  GEN_ENTER(0xcf90d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IVoice::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf90e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf90e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[55])REFP(0x1131164));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cf9110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x50))) = param_2;
  return param_2;
}

/* ref: FUN_00cf9170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1131288);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131244));
  return (uint)this;
}

/* ref: FUN_00cf91c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf91c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf91c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cf91f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf91f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf91f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x11312d8);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131294));
  return (uint)this;
}

/* ref: FUN_00cf9240 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cf9270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1131328);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  return (uint)this;
}

/* ref: FUN_00cf92c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf92c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf92c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf38 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0xd4))) != 6) && (*((int *)GEN_TOP((in_ecx + 0xd4))) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf39 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0xd4))) != 1) && (*((int *)GEN_TOP((in_ecx + 0xd4))) != 0)) {
    return 0;
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf44 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cf9370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x98)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::VoiceXA2::vf52 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xe0)));
}

/* ref: FUN_00cf9390 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf9390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = *((undefined1 *)GEN_TOP((param_1 + 0x20)));
  *((undefined1 *)GEN_TOP(((int)this + 0x21))) = *((undefined1 *)GEN_TOP((param_1 + 0x21)));
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = *((undefined1 *)GEN_TOP((param_1 + 0x22)));
  *((undefined1 *)GEN_TOP(((int)this + 0x23))) = *((undefined1 *)GEN_TOP((param_1 + 0x23)));
  return 0;
}

/* ref: FUN_00cf93f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cf93f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf93f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  byte bVar4;
  float fVar5;
  
  if (*((int *)GEN_TOP(((int)param_1 + 0xc))) != 0) {
    fVar3 = (float10)1;
    fVar2 = (float10)*((float *)GEN_TOP(((int)param_1 + 0x40)));
    if ((fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) ||
       (bVar4 = F_00cea9b0(((undefined *)GEN_TOP(((int)param_1 + 0xf0))) GEN_EDX_FWD), bVar4 != 0)) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc)));
      fVar5 = F_00cea780(((undefined *)GEN_TOP(((int)param_1 + 0xf0))) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x30))))
                (*((undefined4 *)GEN_TOP(((int)param_1 + 0xc))),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)*((float *)GEN_TOP(((int)param_1 + 0x44))) *
                                     (float10)*((float *)GEN_TOP(((int)param_1 + 0x40)))) *
                                    ((float10)fVar5 + (float10)REFG(double, 0x1088130)))))));
      F_00cea9f0((int)param_1 + 0xf0 GEN_EDX_ARG,param_2);
    }
    bVar4 = F_00cea9b0(((undefined *)GEN_TOP(((int)param_1 + 0x144))) GEN_EDX_ARG);
    if (bVar4 != 0) {
      iVar1 = **((int * PTR32 *)GEN_TOP(((int)param_1 + 0xc)));
      fVar5 = F_00cea780(((undefined *)GEN_TOP(((int)param_1 + 0x144))) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x68))))
                (*((undefined4 *)GEN_TOP(((int)param_1 + 0xc))),
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)fVar5 + (float10)REFG(double, 0x1088130)) *
                                    (float10)*((float *)GEN_TOP(((int)param_1 + 0x48))))))));
      F_00cea9f0((int)param_1 + 0x144 GEN_EDX_ARG,param_2);
    }
    bVar4 = F_00cea9b0(((undefined *)GEN_TOP(((int)param_1 + 0x198))) GEN_EDX_ARG);
    if ((bVar4 != 0) || (bVar4 = F_00cea9b0(((undefined *)GEN_TOP(((int)param_1 + 0x1ec))) GEN_EDX_ARG), bVar4 != 0)) {
      F_00cf5f80(param_1 GEN_EDX_ARG);
      F_00cea9f0((int)param_1 + 0x198 GEN_EDX_ARG,param_2);
      F_00cea9f0((int)param_1 + 0x1ec GEN_EDX_ARG,param_2);
    }
  }
  return;
}

/* ref: FUN_00cf9500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf9500u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf9570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf95e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf95e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf95e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf9650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf96c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf96c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf96c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131488);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x1131480);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131244));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x113143c));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9730 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cf9c60((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cf9750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9750(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd440();
  return uVar1;
}

/* ref: FUN_00cf9760 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(float param_4, float gen_a4))
{
  GEN_ENTER(0xcf9760u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(float param_4 = (float)gen_a4;)
  F_00ccd450((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf9770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf97b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf97b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf97b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cf9800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf9800u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x11314e0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x11314d8);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131294));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x1131494));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf9870 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(float param_4, float gen_a4))
{
  GEN_ENTER(0xcf9870u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(float param_4 = (float)gen_a4;)
  F_00ccd490((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf9880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf9880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cf9cb0((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cf98a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf98a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf98a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd480();
  return uVar1;
}

/* ref: FUN_00cf98b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf98b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf98b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf98f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf98f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf98f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cf9940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcf9940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1131538);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x1131530);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd0850(this GEN_EDX_ARG,param_1,param_2,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11312e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x11314ec));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cf99b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf99b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcf99b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cf9d00((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cf99d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf99d0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf99d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd4c0();
  return uVar1;
}

/* ref: FUN_00cf99e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf99e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(float param_4, float gen_a4))
{
  GEN_ENTER(0xcf99e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(float param_4 = (float)gen_a4;)
  F_00ccdbe0((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cf99f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cf99f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf99f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cf9a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9a30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcf9a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cf9a80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00cf9ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cf9ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcf9ab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar2 == 0) {
    if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = ((iVar2 - 1 + param_2) / param_2) * param_2;
  iVar1 = uVar4 + param_1;
  uVar3 = iVar1 - iVar2;
  if (*((uint *)GEN_TOP(((int)this + 0xc))) < uVar3) {
    if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = *((uint *)GEN_TOP(((int)this + 0xc))) - uVar3;
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar4;
}

/* ref: FUN_00cf9b60 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cf9b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcf9b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0xcc))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
  if (*((char *)GEN_TOP(((int)this + 0xcc))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  }
  return 0;
}

