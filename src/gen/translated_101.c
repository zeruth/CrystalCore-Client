#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_009d1670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d1670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9d1670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x200, 0);
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined * this_00;
  uint uVar7;
  int * piVar8;
  int iVar9;
  undefined4 * puVar10;
  float10 fVar11;
  undefined8 uVar12;
  
  (*(uint *)(gen_frame + 0x1ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f0);
  (*(float *)(gen_frame + 0x5c)) = gen_bits2f(param_1);
  if (*((char *)GEN_TOP(((int)this + 0xb0))) == '\0') {
    iVar9 = 0;
    this = ((undefined *)GEN_TOP(((int)this + 0x70)));
    (*(uint * PTR32 *)(gen_frame + 0x54)) = this;
    do {
      (*(uint * PTR32 *)(gen_frame + 0x54)) = this;
      if (*(uint *)this == 0) {
        puVar5 = ((undefined4 *)GEN_TOP(F_00475fd0((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x5c))))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar5;
        if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
          (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)*param_2);
          fVar11 = (float10)*(double *)&REFG(undefined, 0x1088100);
          (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)param_2[1]);
          (*(float *)(gen_frame + 0x48)) = (float)((float10)*param_2 / fVar11);
          (*(float *)(gen_frame + 0x5c)) = gen_bits2f((uint)param_2[2]);
          (*(float *)(gen_frame + 0x4c)) = (float)((float10)param_2[1] / fVar11);
          (*(float *)(gen_frame + 0x50)) = (float)((float10)param_2[2] / fVar11);
          (*(float *)(gen_frame + 0x5c)) = (float)(((float10)GEN_TOD(gen_bits2f(puVar5[0x30]))) + ((float10)GEN_TOD(gen_bits2f(puVar5[0x30]))))
          ;
          puVar6 = ((undefined4 *)GEN_TOP(F_00a5feb0(puVar5 GEN_EDX_ARG)));
          ((float *)(gen_frame + 0x160))[0] = (*(float *)(gen_frame + 0x5c));
          (*(float *)(gen_frame + 0x188)) = (*(float *)(gen_frame + 0x5c));
          fVar1 = gen_bits2f(puVar5[0x2c]);
          ((float *)(gen_frame + 0x160))[1] = 0.0;
          (*(float *)(gen_frame + 0x5c)) = fVar1;
          ((float *)(gen_frame + 0x160))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x170)) = 0;
          (*(undefined4 *)(gen_frame + 0x174)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
          (*(undefined4 *)(gen_frame + 0x178)) = 0;
          (*(undefined4 *)(gen_frame + 0x180)) = 0;
          (*(undefined4 *)(gen_frame + 0x184)) = 0;
          (*(undefined4 *)(gen_frame + 0x190)) = 0;
          (*(undefined4 *)(gen_frame + 0x194)) = 0;
          (*(undefined4 *)(gen_frame + 0x198)) = 0;
          fVar11 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar2 = (float)fVar11;
          (*(float *)(gen_frame + 0x58)) = fVar2;
          (*(float *)(gen_frame + 0x44)) = fVar2;
          fVar11 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          fVar1 = (float)fVar11;
          (*(float *)(gen_frame + 0x58)) = fVar1;
          ((float *)(gen_frame + 0x1a0))[1] = 0.0;
          ((float *)(gen_frame + 0x1a0))[0] = fVar1;
          (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1b4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
          ((float *)(gen_frame + 0x1a0))[2] = ((float)GEN_TOF(-(float10)fVar2));
          (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
          (*(float *)(gen_frame + 0x1c0)) = fVar2;
          (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
          (*(undefined4 *)(gen_frame + 0x120)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(float *)(gen_frame + 0x1c8)) = fVar1;
          (*(undefined4 *)(gen_frame + 0x124)) = 0;
          (*(undefined4 *)(gen_frame + 0x128)) = 0;
          (*(undefined4 *)(gen_frame + 0x130)) = 0;
          (*(undefined4 *)(gen_frame + 0x134)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(undefined4 *)(gen_frame + 0x138)) = 0;
          (*(undefined4 *)(gen_frame + 0x140)) = 0;
          (*(undefined4 *)(gen_frame + 0x144)) = 0;
          (*(undefined4 *)(gen_frame + 0x148)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          (*(undefined4 *)(gen_frame + 0x150)) = *puVar6;
          (*(undefined4 *)(gen_frame + 0x154)) = puVar6[1];
          (*(undefined4 *)(gen_frame + 0x158)) = puVar6[2];
          puVar5 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x60)),(uint)((float *)(gen_frame + 0x160)),(uint)((float *)(gen_frame + 0x1a0)))));
          puVar6 = ((undefined4 *)(gen_frame + 0xe0));
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar5 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined4 *)(gen_frame + 0xe0)),(uint)&(*(undefined4 *)(gen_frame + 0x120)))));
          uVar3 = REFG(undefined4, 0x14a0728);
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          this_00 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
          if (this_00 == ((undefined *)GEN_TOP(0x0))) {
            uVar7 = 0;
          }
          else {
            uVar7 = F_009cb860(this_00 GEN_EDX_ARG,0,uVar3);
          }
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x54));
          *(*(uint * PTR32 *)(gen_frame + 0x54)) = uVar7;
          *((float *)GEN_TOP((uVar7 + 0x80))) = (*(float *)(gen_frame + 0x48));
          *((float *)GEN_TOP((uVar7 + 0x84))) = (*(float *)(gen_frame + 0x4c));
          *((float *)GEN_TOP((uVar7 + 0x88))) = (*(float *)(gen_frame + 0x50));
          *((undefined4 *)GEN_TOP((uVar7 + 0x8c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((uVar7 + 0x8c))), REFG(float, 0x1087f04));
          piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP((uVar7 + 0x40))) + 8)));
          iVar9 = _InterlockedExchangeAdd((volatile long *)(piVar8), 0);
          if (iVar9 == 1) {
            F_009a4f70(*((undefined4 *)GEN_TOP((uVar7 + 0x50))),*((undefined4 *)GEN_TOP((uVar7 + 0x54))),(*(float *)(gen_frame + 0x48)),
                         (*(float *)(gen_frame + 0x4c)),(*(float *)(gen_frame + 0x50)),(float)(float10)1);
          }
          uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
          puVar5 = ((undefined4 *)GEN_TOP(*puVar4));
          puVar6 = ((undefined4 *)(gen_frame + 0x0));
          puVar10 = puVar5;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          *((byte *)GEN_TOP(((int)puVar5 + 0x96))) = *((byte *)GEN_TOP(((int)puVar5 + 0x96))) & 0xfd | 1;
          puVar5[0x16] = uVar3;
          *(undefined2 *)(puVar5 + 0x25) = 0x7f01;
          puVar5[0x17] = 0;
          uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x40)))))((*(undefined4 * PTR32 *)(gen_frame + 0x40)));
          *(undefined8 *)((*(uint * PTR32 *)(gen_frame + 0x54)) + 2) = uVar12;
          return (uint)uVar12;
        }
      }
      iVar9 = iVar9 + 1;
      this = (*(uint * PTR32 *)(gen_frame + 0x54)) + 4;
      (*(uint * PTR32 *)(gen_frame + 0x54)) = this;
    } while (iVar9 < 4);
  }
  return (uint)this;
}

/* ref: FUN_009d1a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d1a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9d1a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL(0x1f8, 8);
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float * pfVar11;
  int * piVar12;
  uint uVar13;
  undefined4 * puVar14;
  undefined * pvVar15;
  int iVar16;
  float * pfVar17;
  byte * pbVar18;
  undefined4 * puVar19;
  float * pfVar20;
  undefined4 * puVar21;
  float10 fVar22;
  float10 fVar23;
  float fVar24;
  ulonglong uVar25;
  
  (*(uint *)(gen_frame + 0x1e4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1e8);
  if (*((char *)GEN_TOP(((int)this + 0xb0))) != '\0') {
    return param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x18))) == -0x20000000) {
    pfVar11 = ((float *)GEN_TOP(0x0));
  }
  else {
    pfVar11 = ((float *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x18))),
                                    *((undefined4 *)GEN_TOP(((int)this + 0x1c))))));
  }
  if (((*((int *)GEN_TOP(((int)this + 0x18))) != param_1) || (*((uint *)GEN_TOP(((int)this + 0x1c))) != param_2)) ||
     (pfVar11 == ((float *)GEN_TOP(0x0)))) {
    pvVar15 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
    if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
      F_009cfa70(pvVar15 GEN_EDX_ARG);
      F_00406ad0(pvVar15);
      *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    }
    pvVar15 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x54)));
    if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
      F_009cfa70(pvVar15 GEN_EDX_ARG);
      F_00406ad0(pvVar15);
      *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    }
    puVar14 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
    puVar19 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
    for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 - 1) {
      *puVar19 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    }
    if (*((int *)GEN_TOP(((int)this + 0x60))) != 1) {
      *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 1;
    }
    puVar14 = ((undefined4 *)GEN_TOP(((int)this + 0x10)));
    puVar19 = ((undefined4 *)GEN_TOP(((int)this + 0x30)));
    for (iVar16 = 8; iVar16 != 0; iVar16 = iVar16 - 1) {
      *puVar19 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    }
    if (*((int *)GEN_TOP(((int)this + 0x40))) != 1) {
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 1;
    }
    fVar24 = REFG(float, 0x1087f04);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((int *)GEN_TOP(((int)this + 0x18))) = param_1;
    *((uint *)GEN_TOP(((int)this + 0x1c))) = param_2;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((float *)GEN_TOP(((int)this + 0x24))) = fVar24;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    pfVar11 = this;
    if (param_1 != -0x20000000) {
      piVar12 = ((int *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1,param_2)));
      pfVar11 = ((float *)GEN_TOP(0x0));
      if (piVar12 != ((int *)GEN_TOP(0x0))) {
        uVar13 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar12 + 4))))(piVar12 GEN_EDX_ARG);
        pfVar11 = ((float *)GEN_TOP((uVar13 - 1)));
        if ((pfVar11 < ((float *)GEN_TOP(0x3))) && (piVar12[0x3b] != 0)) {
          fVar24 = (float)(((float10)GEN_TOD(gen_bits2f(piVar12[0x30]))) + ((float10)GEN_TOD(gen_bits2f(piVar12[0x30]))));
          puVar14 = ((undefined4 *)GEN_TOP(F_00a5feb0(piVar12 GEN_EDX_ARG)));
          ((float *)(gen_frame + 0x158))[0] = fVar24;
          (*(float *)(gen_frame + 0x16c)) = fVar24;
          (*(float *)(gen_frame + 0x180)) = fVar24;
          ((float *)(gen_frame + 0x158))[1] = 0.0;
          ((float *)(gen_frame + 0x158))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x168)) = 0;
          (*(undefined4 *)(gen_frame + 0x170)) = 0;
          (*(undefined4 *)(gen_frame + 0x178)) = 0;
          (*(undefined4 *)(gen_frame + 0x17c)) = 0;
          (*(undefined4 *)(gen_frame + 0x188)) = 0;
          (*(undefined4 *)(gen_frame + 0x18c)) = 0;
          (*(undefined4 *)(gen_frame + 0x190)) = 0;
          F_00518220(((undefined4 *)(gen_frame + 0xd8)) GEN_EDX_ARG,GEN_ARGF(gen_bits2f(piVar12[0x2c])));
          ((float *)(gen_frame + 0x198))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x198))[0], REFG(float, 0x1087f04));
          ((float *)(gen_frame + 0x198))[1] = 0.0;
          ((float *)(gen_frame + 0x198))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
          (*(float *)(gen_frame + 0x1ac)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
          (*(float *)(gen_frame + 0x1b8)) = 0.0;
          (*(undefined4 *)(gen_frame + 0x1bc)) = 0;
          (*(float *)(gen_frame + 0x1c0)) = REFG(float, 0x1087f04);
          (*(undefined4 *)(gen_frame + 0x1c8)) = *puVar14;
          (*(undefined4 *)(gen_frame + 0x1cc)) = puVar14[1];
          (*(undefined4 *)(gen_frame + 0x1d0)) = puVar14[2];
          puVar14 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x58)),(uint)((float *)(gen_frame + 0x158)),(uint)((undefined4 *)(gen_frame + 0xd8)))));
          puVar19 = ((undefined4 *)(gen_frame + 0x98));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *puVar19 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
          }
          pfVar11 = ((float *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x18)),(uint)((undefined4 *)(gen_frame + 0x98)),(uint)((float *)(gen_frame + 0x198)))));
          uVar8 = REFG(undefined4, 0x14a0720);
          pfVar17 = ((float *)(gen_frame + 0x118));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *pfVar17 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            pfVar17 = pfVar17 + 1;
          }
          pvVar15 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
          if (pvVar15 == ((undefined *)GEN_TOP(0x0))) {
            pfVar11 = ((float *)GEN_TOP(0x0));
          }
          else {
            pfVar11 = ((float *)GEN_TOP(F_009cb860(pvVar15 GEN_EDX_ARG,0,uVar8)));
          }
          fVar24 = REFG(float, 0x1087f04);
          *((float * PTR32 *)GEN_TOP(((int)this + 0x10))) = pfVar11;
          bVar2 = *((byte *)GEN_TOP(((int)pfVar11 + 0x96)));
          pfVar11[0x16] = fVar24;
          pfVar17 = ((float *)(gen_frame + 0x118));
          pfVar20 = pfVar11;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *pfVar20 = *pfVar17;
            pfVar17 = pfVar17 + 1;
            pfVar20 = pfVar20 + 1;
          }
          *((byte *)GEN_TOP(((int)pfVar11 + 0x96))) = bVar2 & 0xfd | 1;
          *(undefined2 *)(pfVar11 + 0x25) = 0x7f01;
          pfVar11[0x17] = 0.0;
          uVar8 = REFG(undefined4, 0x14a0724);
          pvVar15 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
          if (pvVar15 == ((undefined *)GEN_TOP(0x0))) {
            pfVar11 = ((float *)GEN_TOP(0x0));
          }
          else {
            pfVar11 = ((float *)GEN_TOP(F_009cb860(pvVar15 GEN_EDX_ARG,0,uVar8)));
          }
          fVar24 = REFG(float, 0x1087f04);
          *((float * PTR32 *)GEN_TOP(((int)this + 0x14))) = pfVar11;
          pfVar17 = ((float *)(gen_frame + 0x118));
          pfVar20 = pfVar11;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *pfVar20 = *pfVar17;
            pfVar17 = pfVar17 + 1;
            pfVar20 = pfVar20 + 1;
          }
          pfVar11[0x16] = fVar24;
          *((byte *)GEN_TOP(((int)pfVar11 + 0x96))) = *((byte *)GEN_TOP(((int)pfVar11 + 0x96))) & 0xfd | 1;
          *(undefined2 *)(pfVar11 + 0x25) = 0x7f01;
          pfVar11[0x17] = 0.0;
          pvVar15 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10)));
          if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
            if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) goto LAB_009d1df3;
            F_009cfa70(pvVar15 GEN_EDX_ARG);
            pfVar11 = ((float *)GEN_TOP(F_00406ad0(pvVar15)));
            *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
          }
          pvVar15 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x14)));
          if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
            F_009cfa70(pvVar15 GEN_EDX_ARG);
            F_00406ad0(pvVar15);
            *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
            pfVar11 = this;
          }
        }
      }
    }
  }
LAB_009d1df3: ;
  pbVar18 = ((byte *)GEN_TOP(((int)this + 0x2d)));
  (*(int *)(gen_frame + 0x0)) = 3;
  do {
    if ((*(int *)(pbVar18 - 0x1d) != 0) && (*(int *)(pbVar18 - 0x19) != 0)) {
      if (*(int *)(pbVar18 - 0x15) == -0x20000000) {
        pvVar15 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        pvVar15 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,*(int *)(pbVar18 - 0x15),
                                       *(undefined4 *)(pbVar18 - 0x11))));
        if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
          pfVar11 = ((float *)GEN_TOP(F_00a5feb0(pvVar15 GEN_EDX_ARG)));
          fVar1 = *((float *)GEN_TOP(((int)pvVar15 + 0xb0)));
          fVar24 = *((float *)GEN_TOP(((int)pvVar15 + 0xc0)));
          ((float *)(gen_frame + 0x158))[0] = fVar24;
          ((float *)(gen_frame + 0x158))[1] = 0.0;
          ((float *)(gen_frame + 0x158))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x168)) = 0;
          (*(float *)(gen_frame + 0x16c)) = fVar24;
          (*(undefined4 *)(gen_frame + 0x170)) = 0;
          (*(undefined4 *)(gen_frame + 0x178)) = 0;
          (*(undefined4 *)(gen_frame + 0x17c)) = 0;
          (*(float *)(gen_frame + 0x180)) = fVar24;
          (*(undefined4 *)(gen_frame + 0x188)) = 0;
          (*(undefined4 *)(gen_frame + 0x18c)) = 0;
          (*(undefined4 *)(gen_frame + 0x190)) = 0;
          fVar23 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar22 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          ((float *)(gen_frame + 0x198))[1] = 0.0;
          ((float *)(gen_frame + 0x198))[0] = (float)fVar22;
          (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
          (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
          (*(undefined4 *)(gen_frame + 0x1bc)) = 0;
          (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
          ((float *)(gen_frame + 0x198))[2] = ((float)GEN_TOF(-(float10)(float)fVar23));
          (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
          (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
          (*(float *)(gen_frame + 0x1b8)) = (float)fVar23;
          (*(float *)(gen_frame + 0x1ac)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x1c0)) = (float)fVar22;
          fVar24 = pfVar11[2];
          ((float *)(gen_frame + 0x118))[1] = 0.0;
          ((float *)(gen_frame + 0x118))[2] = 0.0;
          (*(undefined4 *)(gen_frame + 0x128)) = 0;
          (*(undefined4 *)(gen_frame + 0x130)) = 0;
          (*(undefined4 *)(gen_frame + 0x138)) = 0;
          (*(undefined4 *)(gen_frame + 0x13c)) = 0;
          (*(float *)(gen_frame + 0x148)) = (float)((float10)*pfVar11 + (float10)0);
          (*(float *)(gen_frame + 0x14c)) = (float)((float10)pfVar11[1] + (float10)*(double *)&REFG(undefined, 0x1094878));
          ((float *)(gen_frame + 0x118))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x118))[0], REFG(float, 0x1087f04));
          (*(float *)(gen_frame + 0x12c)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x140)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x150)) = (float)((float10)0 + (float10)fVar24);
          puVar14 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x18)),(uint)((float *)(gen_frame + 0x158)),(uint)((float *)(gen_frame + 0x198)))));
          puVar19 = ((undefined4 *)(gen_frame + 0x98));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *puVar19 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
          }
          puVar14 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x58)),(uint)((undefined4 *)(gen_frame + 0x98)),(uint)((float *)(gen_frame + 0x118)))));
          puVar19 = ((undefined4 *)(gen_frame + 0xd8));
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *puVar19 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar19 = puVar19 + 1;
          }
          puVar14 = *(undefined4 * PTR32 *)(pbVar18 - 0x1d);
          puVar19 = ((undefined4 *)(gen_frame + 0xd8));
          puVar21 = puVar14;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          uVar8 = puVar14[0x14];
          uVar9 = puVar14[0x15];
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          F_009851b0(&REFG(float, 0x14a0d58) GEN_EDX_ARG,uVar8,uVar9,puVar14);
          puVar14 = *(undefined4 * PTR32 *)(pbVar18 - 0x19);
          puVar19 = ((undefined4 *)(gen_frame + 0xd8));
          puVar21 = puVar14;
          for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 - 1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          uVar8 = puVar14[0x14];
          uVar9 = puVar14[0x15];
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          F_009851b0(&REFG(float, 0x14a0d58) GEN_EDX_ARG,uVar8,uVar9,puVar14);
          uVar25 = F_007c9d00(pvVar15);
          *(ulonglong *)(pbVar18 - 5) = uVar25;
        }
      }
      bVar2 = pbVar18[-1];
      bVar3 = *pbVar18;
      fVar23 = (float10)*(double *)&REFG(undefined, 0x1088100);
      bVar4 = pbVar18[1];
      bVar5 = pbVar18[-5];
      bVar6 = pbVar18[-4];
      bVar7 = pbVar18[-3];
      if ((pvVar15 == ((undefined *)GEN_TOP(0x0))) || (*((int *)GEN_TOP(((int)pvVar15 + 0x11c))) != 0)) {
        fVar24 = 0.0;
      }
      else {
        fVar24 = *(float *)(pbVar18 - 9);
      }
      iVar10 = *(int *)(pbVar18 - 0x1d);
      *((float *)GEN_TOP((iVar10 + 0x80))) = (float)((float10)bVar2 / fVar23);
      *((float *)GEN_TOP((iVar10 + 0x84))) = (float)((float10)bVar3 / fVar23);
      *((float *)GEN_TOP((iVar10 + 0x88))) = (float)((float10)bVar4 / fVar23);
      *((float *)GEN_TOP((iVar10 + 0x8c))) = fVar24;
      piVar12 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x40))) + 8)));
      iVar16 = _InterlockedExchangeAdd((volatile long *)(piVar12), 0);
      if (iVar16 == 1) {
        F_009a4f70(*((undefined4 *)GEN_TOP((iVar10 + 0x50))),*((undefined4 *)GEN_TOP((iVar10 + 0x54))),
                     (float)((float10)bVar2 / fVar23),(float)((float10)bVar3 / fVar23),
                     (float)((float10)bVar4 / fVar23),fVar24);
      }
      iVar10 = *(int *)(pbVar18 - 0x19);
      *((float *)GEN_TOP((iVar10 + 0x80))) = (float)((float10)bVar5 / fVar23);
      *((float *)GEN_TOP((iVar10 + 0x84))) = (float)((float10)bVar6 / fVar23);
      *((float *)GEN_TOP((iVar10 + 0x88))) = (float)((float10)bVar7 / fVar23);
      *((float *)GEN_TOP((iVar10 + 0x8c))) = fVar24;
      piVar12 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar10 + 0x40))) + 8)));
      iVar16 = _InterlockedExchangeAdd((volatile long *)(piVar12), 0);
      if (iVar16 == 1) {
        F_009a4f70(*((undefined4 *)GEN_TOP((iVar10 + 0x50))),*((undefined4 *)GEN_TOP((iVar10 + 0x54))),
                     (float)((float10)bVar5 / fVar23),(float)((float10)bVar6 / fVar23),
                     (float)((float10)bVar7 / fVar23),fVar24);
      }
      pfVar11 = ((float *)GEN_TOP((*(int *)(pbVar18 - 0xd) - 1)));
      if ((pfVar11 == ((float *)GEN_TOP(0x0))) &&
         (fVar24 = ((float)GEN_TOF(((float10)*(float *)(pbVar18 - 9) -
                          (float10)REFG(float, 0x14a0718) / (float10)*(double *)&REFG(undefined, 0x10947f0)))),
         *(float *)(pbVar18 - 9) = fVar24, (float10)fVar24 <= (float10)0)) {
        pvVar15 = *(undefined * PTR32 *)(pbVar18 - 0x1d);
        if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
          F_009cfa70(pvVar15 GEN_EDX_ARG);
          F_00406ad0(pvVar15);
          pbVar18[-0xffffffff0000001d] = 0;
          pbVar18[-0xffffffff0000001c] = 0;
          pbVar18[-0xffffffff0000001b] = 0;
          pbVar18[-0xffffffff0000001a] = 0;
        }
        pvVar15 = *(undefined * PTR32 *)(pbVar18 - 0x19);
        if (pvVar15 != ((undefined *)GEN_TOP(0x0))) {
          F_009cfa70(pvVar15 GEN_EDX_ARG);
          F_00406ad0(pvVar15);
          pbVar18[-0xffffffff00000019] = 0;
          pbVar18[-0xffffffff00000018] = 0;
          pbVar18[-0xffffffff00000017] = 0;
          pbVar18[-0xffffffff00000016] = 0;
        }
        pfVar11 = ((float *)GEN_TOP(0x0));
        pbVar18[-0xffffffff0000001d] = 0;
        pbVar18[-0xffffffff0000001c] = 0;
        pbVar18[-0xffffffff0000001b] = 0;
        pbVar18[-0xffffffff0000001a] = 0;
        pbVar18[-0xffffffff00000019] = 0;
        pbVar18[-0xffffffff00000018] = 0;
        pbVar18[-0xffffffff00000017] = 0;
        pbVar18[-0xffffffff00000016] = 0;
        pbVar18[-0xffffffff0000000d] = 0;
        pbVar18[-0xffffffff0000000c] = 0;
        pbVar18[-0xffffffff0000000b] = 0;
        pbVar18[-0xffffffff0000000a] = 0;
        pbVar18[-0xffffffff00000009] = 0;
        pbVar18[-0xffffffff00000008] = 0;
        pbVar18[-0xffffffff00000007] = 0;
        pbVar18[-0xffffffff00000006] = 0;
        pbVar18[-0xffffffff00000005] = 0;
        pbVar18[-0xffffffff00000004] = 0;
        pbVar18[-0xffffffff00000003] = 0;
        pbVar18[-0xffffffff00000002] = 0;
        pbVar18[-0xffffffff00000001] = 0;
        pbVar18[0] = 0;
        pbVar18[1] = 0;
        pbVar18[2] = 0;
        pbVar18[-0xffffffff00000015] = 0;
        pbVar18[-0xffffffff00000014] = 0;
        pbVar18[-0xffffffff00000013] = 0;
        pbVar18[-0xffffffff00000012] = 0xe0;
        pbVar18[-0xffffffff00000011] = 0;
        pbVar18[-0xffffffff00000010] = 0;
        pbVar18[-0xffffffff0000000f] = 0;
        pbVar18[-0xffffffff0000000e] = 0;
      }
    }
    pbVar18 = pbVar18 + 0x20;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  return (uint)pfVar11;
}

/* ref: FUN_009d2390 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009d2390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d2390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  uint uVar6;
  int * piVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 * puVar12;
  undefined * this_00;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 extraout_ST0;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000)));
  local_8 = 0;
  if (local_10 != 0) {
    local_c = 0x39000;
    do {
      iVar14 = *((int *)GEN_TOP(((int)this + 0x158)));
      uVar5 = *((ushort *)GEN_TOP((local_c + iVar14)));
      iVar13 = (uint)uVar5 * 0x68;
      iVar1 = iVar13 + 0x1000 + iVar14;
      if ((*((int *)GEN_TOP((iVar13 + 0x103c + iVar14))) != 4) && ((*((byte *)GEN_TOP((iVar1 + 0x62))) & 4) == 0)) {
        uVar6 = *((uint *)GEN_TOP((iVar1 + 0x40)));
        fVar11 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        iVar14 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x30))) + 0x1ec)));
        if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
          F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
          F_00c47de6(((code *)REFP(0x107c350)));
        }
        fVar2 = *((float *)GEN_TOP((iVar14 + 0x8c)));
        fVar9 = (float10)*(float *)&REFG(undefined, 0x14a0de4);
        piVar7 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x30))) + 0x1dc)));
        fVar15 = (float10)*(float *)&REFG(undefined, 0x14a0dd8);
        fVar3 = *((float *)GEN_TOP((iVar14 + 0x88)));
        fVar4 = *((float *)GEN_TOP((iVar14 + 0x90)));
        fVar10 = (float10)*(float *)&REFG(undefined, 0x14a0df0);
        fVar8 = (float10)*(float *)&REFG(undefined, 0x14a0dfc);
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xe4))))(piVar7);
        local_8 = local_8 + 1;
        *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x34ff8 + local_8 * 8))) =
             ((float)GEN_TOF(((extraout_ST0 +
                     (float10)((float)GEN_TOF((((float10)fVar4 * fVar10 +
                                      (fVar15 * (float10)fVar3 + (float10)fVar2 * fVar9)) + fVar8))))
                     * (float10)REFG(double, 0x10944b8) + (float10)((float)GEN_TOF(((float10)(uVar6 % 1000) * fVar11))))));
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x34ffc + local_8 * 8))) = (uint)uVar5;
      }
      local_c = local_c + 2;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    if (local_8 != 0) {
      iVar1 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x35000 + local_8 * 8;
      iVar14 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x35000;
      F_009edfb0(iVar14,iVar1,iVar1 - iVar14 >> 3,0,0);
      local_c = 0;
      if (local_8 != 0) {
        do {
          iVar1 = *((int *)GEN_TOP(((int)this + 0x158)));
          iVar13 = *((int *)GEN_TOP((iVar1 + 0x35004 + local_c * 8))) * 0x68;
          piVar7 = *((int * PTR32 *)GEN_TOP((iVar13 + 0x1030 + iVar1)));
          iVar14 = piVar7[0x7b];
          puVar12 = ((undefined4 *)GEN_TOP(F_009a5550()));
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          *(undefined4 *)&REFG(undefined, 0x14a0ea4) = 0;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar12)) + 0x5c))))(((int *)GEN_TOP(*puVar12)) GEN_EDX_ARG,5,&REFG(undefined, 0x14a0e98),1);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar12)) + 0x5c))))(((int *)GEN_TOP(*puVar12)) GEN_EDX_ARG,0xc,iVar14 + 0x30,1);
          *(ushort *)(piVar7 + 0xeb) =
               (ushort)(*((byte *)GEN_TOP((iVar13 + iVar1 + 0x1062))) >> 2 & 1) << 0xc |
               *(ushort *)(piVar7 + 0xeb) & 0xefff;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x7c))))(piVar7 GEN_EDX_ARG);
          this_00 = ((undefined *)GEN_TOP(F_009a5550()));
          if (*((char *)GEN_TOP(((int)this_00 + 0x70))) == '\0') {
            iVar1 = *((int *)GEN_TOP(((int)this_00 + 0x20)));
            if (iVar1 == 1) {
              F_009a5720(this_00 GEN_EDX_ARG);
            }
            else if (iVar1 == 2) {
              F_009a5830(this_00 GEN_EDX_ARG);
            }
            else if (iVar1 == 3) {
              F_009a5960(this_00 GEN_EDX_ARG);
            }
            *((int *)GEN_TOP(((int)this_00 + 0x80))) =
                 *((int *)GEN_TOP(((int)this_00 + 0x80))) + *((int *)GEN_TOP(((int)this_00 + 0x7c)));
            *((int *)GEN_TOP(((int)this_00 + 0x90))) =
                 *((int *)GEN_TOP(((int)this_00 + 0x90))) + *((int *)GEN_TOP(((int)this_00 + 0x8c)));
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x7c))) = 0;
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x94))) = 0;
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x8c))) = 0;
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x98))) = 0;
          }
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
    }
  }
  return;
}

/* ref: FUN_009d2670 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9d2670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort * puVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined4 * puVar13;
  undefined * this_00;
  int iVar14;
  int iVar15;
  int iVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar17;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x46004 + param_1 * 2)));
  local_8 = 0;
  if (local_10 != 0) {
    iVar16 = param_1 * 0x1000 + 0x3b004;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 0x158)));
      uVar4 = *((ushort *)GEN_TOP((iVar16 + iVar5)));
      iVar14 = (uint)uVar4 * 0x68;
      iVar15 = iVar14 + 0x1000 + iVar5;
      if (*((int *)GEN_TOP((iVar14 + 0x103c + iVar5))) != 4) {
        if ((*((byte *)GEN_TOP((iVar15 + 0x62))) & 4) == 0) {
          uVar7 = *((uint *)GEN_TOP((iVar15 + 0x40)));
          fVar12 = (float10)*(double *)&REFG(undefined, 0x10928e8);
          iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar15 + 0x30))) + 0x1ec)));
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          fVar17 = *((float *)GEN_TOP((iVar5 + 0x8c)));
          fVar9 = (float10)*(float *)&REFG(undefined, 0x14a0de4);
          piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar15 + 0x30))) + 0x1dc)));
          fVar2 = *((float *)GEN_TOP((iVar5 + 0x88)));
          fVar10 = (float10)*(float *)&REFG(undefined, 0x14a0dd8);
          fVar3 = *((float *)GEN_TOP((iVar5 + 0x90)));
          fVar11 = (float10)*(float *)&REFG(undefined, 0x14a0df0);
          fVar8 = (float10)*(float *)&REFG(undefined, 0x14a0dfc);
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xe4))))(piVar6);
          local_8 = local_8 + 1;
          *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x34ff8 + local_8 * 8))) =
               ((float)GEN_TOF(((extraout_ST0 +
                       (float10)((float)GEN_TOF((((float10)fVar3 * fVar11 +
                                        ((float10)fVar2 * fVar10 + (float10)fVar17 * fVar9)) + fVar8
                                       )))) * (float10)REFG(double, 0x10944b8) +
                      (float10)((float)GEN_TOF(((float10)(uVar7 % 1000) * fVar12))))));
          *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x34ffc + local_8 * 8))) = (uint)uVar4;
        }
        else {
          puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar15 + 0x30))) + 0x3ac)));
          *puVar1 = *puVar1 | 0x1000;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar15 + 0x30))) + 0x80))))(*((int * PTR32 *)GEN_TOP((iVar15 + 0x30))) GEN_EDX_ARG);
        }
      }
      iVar16 = iVar16 + 2;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    if (local_8 != 0) {
      iVar16 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x35000 + local_8 * 8;
      iVar15 = *((int *)GEN_TOP(((int)this + 0x158))) + 0x35000;
      F_009edfb0(iVar15,iVar16,iVar16 - iVar15 >> 3,0,0);
      local_c = 0;
      if (local_8 != 0) {
        do {
          piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x35004 + local_c * 8))) * 0x68 +
                             0x1030 + *((int *)GEN_TOP(((int)this + 0x158))))));
          fVar17 = gen_bits2f(piVar6[0xc6]);
          if (!(*(float *)&REFG(undefined, 0x1088114) < fVar17)) {
            extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar6[0x77])) + 0xe0))))(((int *)GEN_TOP(piVar6[0x77])));
            fVar17 = (float)extraout_ST0_00;
          }
          iVar16 = piVar6[0x7b];
          puVar13 = ((undefined4 *)GEN_TOP(F_009a5550()));
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          *(float *)&REFG(undefined, 0x14a0ea4) = fVar17;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar13)) + 0x5c))))(((int *)GEN_TOP(*puVar13)) GEN_EDX_ARG,5,&REFG(undefined, 0x14a0e98),1);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar13)) + 0x5c))))(((int *)GEN_TOP(*puVar13)) GEN_EDX_ARG,0xc,iVar16 + 0x30,1);
          *(ushort *)(piVar6 + 0xeb) = *(ushort *)(piVar6 + 0xeb) & 0xefff;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x80))))(piVar6 GEN_EDX_ARG);
          this_00 = ((undefined *)GEN_TOP(F_009a5550()));
          if (*((char *)GEN_TOP(((int)this_00 + 0x70))) == '\0') {
            iVar16 = *((int *)GEN_TOP(((int)this_00 + 0x20)));
            if (iVar16 == 1) {
              F_009a5720(this_00 GEN_EDX_ARG);
            }
            else if (iVar16 == 2) {
              F_009a5830(this_00 GEN_EDX_ARG);
            }
            else if (iVar16 == 3) {
              F_009a5960(this_00 GEN_EDX_ARG);
            }
            *((int *)GEN_TOP(((int)this_00 + 0x80))) =
                 *((int *)GEN_TOP(((int)this_00 + 0x80))) + *((int *)GEN_TOP(((int)this_00 + 0x7c)));
            *((int *)GEN_TOP(((int)this_00 + 0x90))) =
                 *((int *)GEN_TOP(((int)this_00 + 0x90))) + *((int *)GEN_TOP(((int)this_00 + 0x8c)));
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x7c))) = 0;
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x94))) = 0;
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x8c))) = 0;
            *((undefined4 *)GEN_TOP(((int)this_00 + 0x98))) = 0;
          }
          local_c = local_c + 1;
        } while (local_c < local_8);
      }
    }
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x158)));
  *((undefined2 *)GEN_TOP((uVar7 + 0x46004 + param_1 * 2))) = 0;
  return uVar7;
}

/* ref: FUN_009d29d0 */
GEN_OWN GEN_FRAME uint F_009d29d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9d29d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_009d2a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9d2a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(8,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[0]);
      *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10dda64));
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
      uVar2 = F_009ee830(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  uVar2 = F_009ee830(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  return uVar2;
}

/* ref: FUN_009d2a70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9d2a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(8,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[0]);
      *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10dda70));
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
      uVar2 = F_009ee8a0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  uVar2 = F_009ee8a0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  return uVar2;
}

/* ref: FUN_009d2ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9d2ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(0x8d8,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    if (uVar1 != 0) {
      (*(uint *)&gen_args[5]) = F_009a6440(uVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(undefined1)(*(undefined4 *)&gen_args[2]),(undefined1)(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),
                             (*(uint *)&gen_args[5]));
      uVar1 = F_009ee910(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,&(*(uint *)&gen_args[5]));
      return uVar1;
    }
  }
  (*(uint *)&gen_args[5]) = 0;
  uVar1 = F_009ee910(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_ARG,&(*(uint *)&gen_args[5]));
  return uVar1;
}

/* ref: FUN_009d2b50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d2b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d2b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined2 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0474));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  puVar2 = ((undefined2 *)GEN_TOP(((int)this + 0x14)));
  iVar1 = 2;
  do {
    *puVar2 = 1;
    puVar2[1] = 0xffff;
    puVar2[2] = 1;
    puVar2[3] = 0xffff;
    puVar2[4] = 1;
    puVar2[5] = 0xffff;
    puVar2[6] = 1;
    puVar2[7] = 0xffff;
    puVar2[8] = 1;
    puVar2[9] = 0xffff;
    puVar2[10] = 1;
    puVar2[0xb] = 0xffff;
    puVar2 = puVar2 + 0xc;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: FUN_009d2be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d2be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  uint uVar1;
  
  (*(undefined4 *)&gen_args[0]) = CONCAT22((undefined2)(*(undefined4 *)&gen_args[1]),(ushort)((byte)(*(undefined4 *)&gen_args[0]) & 3) | (short)(*(undefined4 *)&gen_args[2]) * 4);
  uVar1 = F_009ee6a0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_009d2c20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9d2c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3;
  return (uint)this;
}

/* ref: FUN_009d2c60 */
GEN_OWN_GS GEN_FRAME unsigned int GEN_THISCALL F_009d2c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9))
{
  GEN_ENTER(0x9d2c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  F_009dafa0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(undefined1)param_7,(undefined1)param_6,(undefined1)param_1,
               (undefined1)param_2,(undefined1)param_3,
               (char)((*((int *)GEN_TOP(((int)this + 8))) - *((int *)GEN_TOP(((int)this + 4)))) / 0xa4),param_4,param_5,
               param_8);
  F_009ee7a0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_009ee720(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_9);
  return;
}

/* ref: FUN_009d2ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d2ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d2ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e04e8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x260))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x264))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x264))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x260))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x22c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x22c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1bc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1bc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x184))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x184))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x114))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x114))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xdc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xdc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xa4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xa4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x6c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x6c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x34))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x34))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  if ((*((int *)GEN_TOP(((int)this + 8))) != 0) && (pcVar1 != ((code *)GEN_TOP(0x0)))) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 8))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd298));
  return 0;
}

/* ref: FUN_009d2ee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d2ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9d2ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  bVar1 = F_009e6740(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 0x10,param_1
                        );
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 0x14))) = (param_1[1] - *param_1) / 0x14;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_3;
  return (uint)this;
}

/* ref: FUN_009d2f70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d2f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d2f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0500));
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x328))) GEN_EDX_FWD);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda98))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x4c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x4c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x14))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd4e8));
  return (uint)pcVar1;
}

/* ref: FUN_009d2ff0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d2ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d2ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10e0518));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x778))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x77c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x77c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x778))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x740))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x744))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x744))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x740))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x4a8))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x210))) GEN_EDX_ARG);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x6c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x6c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x34))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x34))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  if ((*((int *)GEN_TOP(((int)this + 4))) != 0) && (pcVar1 != ((code *)GEN_TOP(0x0)))) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10dd5ac));
  return 0;
}

/* ref: FUN_009d30f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d30f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d30f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10e0554));
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x1108))) GEN_EDX_FWD);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0xe70))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0xbd8))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x940))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x6a8))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x410))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x3dc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x3dc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x350))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x390))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x394))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x394))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x390))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x358))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x35c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x35c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x358))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x350))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x308))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x30c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x30c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x308))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2d0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2d4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2d4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2d0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x280))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x284))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x284))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x280))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x248))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x24c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x24c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x248))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1fc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1fc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1c4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1c4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x174))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x174))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x13c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x13c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x138))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xec))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xec))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 100))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 100))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2c))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2c))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x28))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10dd544));
  return (uint)pcVar1;
}

/* ref: FUN_009d33f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d33f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d33f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10e05bc));
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x778))) GEN_EDX_FWD);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x4e0))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x458))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x498))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x49c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x49c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x498))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x460))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x464))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x464))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x460))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x458))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x410))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x414))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x414))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x410))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x3dc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x3dc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x348))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x388))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x38c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x38c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x388))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x350))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x354))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x354))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x350))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x348))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x304))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x304))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2cc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2cc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x27c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x27c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x244))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x244))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x240))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x238))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1bc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1bc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x16c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x16c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x134))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x134))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x130))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x128))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xe4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xe4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xac))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xac))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x5c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x5c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x58))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x24))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x24))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10dd614));
  return (uint)pcVar1;
}

/* ref: FUN_009d3760 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d3760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d3760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint local_14;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_FWD);
  if ((uVar5 == 1) ||
     (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG),
     uVar5 == 1)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x48))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG);
    iVar8 = REFG(int, 0x14a09f8);
    local_c = (&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))] + *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4);
    uVar7 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) + (uVar5 * 8 + 0xf & 0xfffffff0);
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar7;
    if (REFG(undefined4, 0x14a09fc) < uVar7) {
      local_c = 0;
    }
    else if (local_c != 0) {
      iVar6 = (&REFG(undefined4, 0x14a0a08))[(int)(iVar8)] + *(int *)(&REFG(undefined, 0x14a0a00) + iVar8 * 4);
      uVar7 = *(int *)(&REFG(undefined, 0x14a0a00) + iVar8 * 4) + uVar5 * 0x20;
      *(uint *)(&REFG(undefined, 0x14a0a00) + iVar8 * 4) = uVar7;
      if ((uVar7 <= REFG(undefined4, 0x14a09fc)) && (iVar6 != 0)) {
        iVar8 = 0;
        if (0 < (int)uVar5) {
          iVar6 = iVar6 + 0x10;
          do {
            uVar7 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
            *((int *)GEN_TOP((local_c + 4 + iVar8 * 8))) = iVar6 - 0x10;
            if (uVar7 == 0) {
              *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
              F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
              F_00c47de6(((code *)REFP(0x107c350)));
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x4c))))
                      (REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,iVar8,iVar6 - 0x10,iVar6,iVar6 - 4,iVar6 + 0xc);
            pfVar1 = ((float *)GEN_TOP((iVar6 - 0xc)));
            pfVar2 = ((float *)GEN_TOP((iVar6 - 0x10)));
            pfVar3 = ((float *)GEN_TOP((iVar6 - 8)));
            iVar8 = iVar8 + 1;
            pfVar4 = ((float *)GEN_TOP((iVar6 + 0xc)));
            iVar6 = iVar6 + 0x20;
            *((float *)GEN_TOP((local_c - 8 + iVar8 * 8))) =
                 ((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*pfVar3 *
                                                               (float10)*((float *)GEN_TOP(((int)this + 0x30)))
                                                              + ((float10)*pfVar2 *
                                                                 (float10)*((float *)GEN_TOP(((int)this +
                                                                                    0x28))) +
                                                                (float10)*pfVar1 *
                                                                (float10)*((float *)GEN_TOP(((int)this + 0x2c
                                                                                   ))))))))))) -
                        (float10)*pfVar4)));
          } while (iVar8 < (int)uVar5);
        }
        iVar8 = local_c + uVar5 * 8;
        F_009ee0b0(local_c,iVar8,iVar8 - local_c >> 3,0,0);
        local_14 = uVar5;
      }
    }
  }
  iVar8 = 0;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if ((uVar5 == 1) && (0 < (int)local_14)) {
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP((local_c + 4)));
    puVar10 = ((undefined4 *)GEN_TOP(((int)this + 0x1f0)));
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar8 = 1;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if ((uVar5 - 1 == 0) && (iVar8 < (int)local_14)) {
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP((local_c + 4 + iVar8 * 8)));
    puVar10 = ((undefined4 *)GEN_TOP(((int)this + 0x210)));
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  return uVar5 - 1;
}

/* ref: FUN_009d3990 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d3990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d3990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  undefined4 * puVar11;
  uint local_20;
  uint local_1c;
  undefined4 * local_18;
  uint local_14;
  uint local_10;
  undefined4 * local_c;
  uint local_8;
  
  if ((*((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0x800) != 0) {
    F_009d3760(this GEN_EDX_FWD);
    *((ushort *)GEN_TOP(((int)this + 0x3ac))) = *((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0xf7ff;
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if ((uVar6 == 3) ||
     (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG),
     uVar6 == 3)) {
    local_1c = 0;
    if ((*((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0xff) != 0) {
      puVar9 = ((undefined4 *)GEN_TOP(((int)this + 0x278)));
      do {
        pfVar4 = ((float *)GEN_TOP(*puVar9));
        local_1c = local_1c + 1;
        puVar9[-1] = (undefined4)
                     gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)pfVar4[2] *
                                                                               (float10)*((float *)GEN_TOP(((
                                                  int)this + 0x30))) +
                                                  ((float10)*pfVar4 *
                                                   (float10)*((float *)GEN_TOP(((int)this + 0x28))) +
                                                  (float10)pfVar4[1] *
                                                  (float10)*((float *)GEN_TOP(((int)this + 0x2c))))))))))) -
                                        (float10)pfVar4[7]))));
        puVar9 = puVar9 + 2;
      } while (local_1c < (*((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0xff));
    }
    iVar7 = (int)this + (*((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0xff) * 8 + 0x274;
    F_009ee0b0((int)this + 0x274,iVar7,iVar7 - ((int)this + 0x274) >> 3,0,0);
  }
  local_8 = 0;
  local_18 = ((undefined4 *)GEN_TOP(0x0));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if ((uVar6 == 4) ||
     (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG),
     uVar6 == 4)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    uVar6 = REFG(undefined4, 0x14a22c0);
    local_8 = REFG(undefined4, 0x14a22c0);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    local_18 = &REFG(undefined4, 0x14a1ec0);
    if (uVar6 != 0) {
      local_1c = uVar6;
      puVar9 = &REFG(undefined4, 0x14a1ec4);
      do {
        pfVar4 = ((float *)GEN_TOP(*puVar9));
        local_1c = local_1c - 1;
        puVar9[-1] = (undefined4)
                     gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)pfVar4[2] *
                                                                               (float10)*((float *)GEN_TOP(((
                                                  int)this + 0x30))) +
                                                  ((float10)*pfVar4 *
                                                   (float10)*((float *)GEN_TOP(((int)this + 0x28))) +
                                                  (float10)pfVar4[1] *
                                                  (float10)*((float *)GEN_TOP(((int)this + 0x2c))))))))))) -
                                        (float10)pfVar4[7]))));
        puVar9 = puVar9 + 2;
      } while (local_1c != 0);
    }
    F_009ee0b0(&REFG(undefined4, 0x14a1ec0),&REFG(undefined4, 0x14a1ec0) + uVar6 * 2,(int)(uVar6 * 8) >> 3,0,0);
  }
  local_1c = 0;
  local_c = ((undefined4 *)GEN_TOP(0x0));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if ((uVar6 == 2) ||
     (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG),
     uVar6 == 2)) {
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x48))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG);
    iVar7 = REFG(int, 0x14a09f8);
    local_c = ((undefined4 *)GEN_TOP(((&REFG(undefined4, 0x14a0a08))[(int)(REFG(int, 0x14a09f8))] + *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4))));
    uVar10 = *(int *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) + (uVar6 * 8 + 0xf & 0xfffffff0);
    *(uint *)(&REFG(undefined, 0x14a0a00) + REFG(int, 0x14a09f8) * 4) = uVar10;
    if (REFG(undefined4, 0x14a09fc) < uVar10) {
      local_c = ((undefined4 *)GEN_TOP(0x0));
    }
    else if (local_c != ((undefined4 *)GEN_TOP(0x0))) {
      uVar10 = *(uint *)(&REFG(undefined, 0x14a0a00) + iVar7 * 4);
      iVar8 = (&REFG(undefined4, 0x14a0a08))[(int)(iVar7)] + uVar10;
      uVar10 = uVar10 + uVar6 * 0x20;
      *(uint *)(&REFG(undefined, 0x14a0a00) + iVar7 * 4) = uVar10;
      if ((uVar10 <= REFG(undefined4, 0x14a09fc)) && (iVar8 != 0)) {
        uVar10 = 0;
        if (uVar6 != 0) {
          iVar8 = iVar8 + 0x10;
          do {
            uVar5 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
            local_c[uVar10 * 2 + 1] = iVar8 - 0x10;
            if (uVar5 == 0) {
              *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
              F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
              F_00c47de6(((code *)REFP(0x107c350)));
            }
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x4c))))
                      (REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG,uVar10,iVar8 - 0x10,iVar8,iVar8 - 4,iVar8 + 0xc);
            pfVar4 = ((float *)GEN_TOP((iVar8 - 0xc)));
            pfVar1 = ((float *)GEN_TOP((iVar8 - 0x10)));
            pfVar2 = ((float *)GEN_TOP((iVar8 - 8)));
            pfVar3 = ((float *)GEN_TOP((iVar8 + 0xc)));
            uVar10 = uVar10 + 1;
            iVar8 = iVar8 + 0x20;
            local_c[uVar10 * 2 - 2] =
                 (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)*pfVar2 *
                                                                           (float10)*((float *)GEN_TOP(((int)
                                                  this + 0x30))) +
                                                  ((float10)*pfVar1 *
                                                   (float10)*((float *)GEN_TOP(((int)this + 0x28))) +
                                                  (float10)*pfVar4 *
                                                  (float10)*((float *)GEN_TOP(((int)this + 0x2c))))))))))) -
                                    (float10)*pfVar3))));
          } while (uVar10 < uVar6);
        }
        F_009ee0b0(local_c,local_c + uVar6 * 2,(int)(local_c + uVar6 * 2) - (int)((int)(uintptr_t)local_c) >> 3,0,0)
        ;
        local_1c = uVar6;
      }
    }
  }
  local_10 = 0;
  local_14 = 0;
  local_20 = 0;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if (uVar6 == 2) {
    if (local_1c == 0) {
LAB_009d3de0: ;
      *((undefined4 *)GEN_TOP(((int)this + 0x208))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
      *((undefined4 *)GEN_TOP(((int)this + 0x200))) = 0;
    }
    else {
      local_20 = 1;
      puVar9 = ((undefined4 *)GEN_TOP(local_c[1]));
      puVar11 = ((undefined4 *)GEN_TOP(((int)this + 0x1f0)));
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    }
  }
  else if (uVar6 == 3) {
    if ((*((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0xff) == 0) goto LAB_009d3de0;
    local_10 = 1;
    puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x278)));
    puVar11 = ((undefined4 *)GEN_TOP(((int)this + 0x1f0)));
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  else if (uVar6 == 4) {
    if (local_8 == 0) goto LAB_009d3de0;
    local_14 = 1;
    puVar9 = ((undefined4 *)GEN_TOP(local_18[1]));
    puVar11 = ((undefined4 *)GEN_TOP(((int)this + 0x1f0)));
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0xf8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG);
  if (uVar6 == 2) {
    uVar6 = local_20;
    puVar9 = local_c;
    if (local_20 < local_1c) {
LAB_009d3e5a: ;
      puVar9 = ((undefined4 *)GEN_TOP(puVar9[uVar6 * 2 + 1]));
      puVar11 = ((undefined4 *)GEN_TOP(((int)this + 0x210)));
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      return uVar6;
    }
  }
  else if (uVar6 == 3) {
    uVar6 = local_10;
    if (local_10 < (*((ushort *)GEN_TOP(((int)this + 0x3ac))) & 0xff)) {
      puVar9 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + local_10 * 8 + 0x278)));
      puVar11 = ((undefined4 *)GEN_TOP(((int)this + 0x210)));
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      return local_10;
    }
  }
  else {
    if (uVar6 - 4 != 0) {
      return uVar6 - 4;
    }
    uVar6 = local_14;
    puVar9 = local_18;
    if (local_14 < local_8) goto LAB_009d3e5a;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x228))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x224))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x220))) = 0;
  return uVar6;
}

/* ref: FUN_009d3ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d3ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d3ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 local_1c = 0;
  undefined4 local_18 = 0;
  undefined4 local_14 = 0;
  undefined4 local_10 = 0;
  int local_c;
  short * local_8;
  
  local_8 = ((short *)GEN_TOP(((int)this + 0x360)));
  piVar4 = ((int *)GEN_TOP(((int)this + 800)));
  local_c = 0x10;
  do {
    iVar6 = (int)*local_8;
    iVar1 = *piVar4;
    iVar2 = iVar6 * 0x10 + iVar1;
    uVar3 = F_009ee1b0(iVar1,iVar2,iVar2 - iVar1 >> 4,local_1c,local_18,local_14,local_10);
    if (0 < iVar6) {
      puVar5 = ((undefined4 *)GEN_TOP((iVar1 + 8)));
      do {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar5)) + 0x74))))(((int *)GEN_TOP(*puVar5)) GEN_EDX_ARG);
        puVar5 = puVar5 + 4;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    local_8 = local_8 + 1;
    piVar4 = piVar4 + 1;
    local_c = local_c - 1;
  } while (local_c != 0);
  return uVar3;
}

/* ref: Apricot::Engine::Instance::DocumentInstance::vf32 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d3f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x9d3f30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if ((((*(ushort *)(this + 0x3ac) & 0x1000) == 0) && (*(int *)(this + 0x1ec) != 0)) &&
     (!(*((float *)GEN_TOP((*(int *)(this + 0x1ec) + 0x3c))) <= REFG(float, 0x10947f8)))) {
    F_009d3990(this GEN_EDX_FWD);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(this + 0x3b0))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = F_0097e2c0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_009d3f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d3f70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9d3f70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  piVar1 = param_5;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1dc))) + 0x30))))
                    (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1dc))) GEN_EDX_ARG,(int)*((char *)GEN_TOP((param_2 + 1))));
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 0x1c))))(param_5 GEN_EDX_ARG,0)));
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 0x1c))))(param_5 GEN_EDX_ARG,3)));
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 0x18))))(param_5 GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      param_5 = ((int *)GEN_TOP(0x0));
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d4091: ;
          uVar8 = 0;
        }
        else {
          piVar6 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
          REFG(int, 0x14a09e8) = *piVar6;
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
          if (piVar6 == ((int *)GEN_TOP(0x0))) goto LAB_009d4091;
          uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          uVar8 = F_009cc7c0(piVar6 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5,
                               (float)(int)(uVar8 * (int)param_5));
        }
        F_0097e5c0(param_1 GEN_EDX_ARG,uVar8);
        param_5 = ((int *)GEN_TOP(((int)param_5 + 1)));
        if ((int)uVar7 <= (int)param_5) {
          return (uint)param_5;
        }
      } while( true );
    }
    uVar7 = F_009df120(0x29c);
    if (uVar7 != 0) {
      uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
      uVar4 = F_009cc7c0(uVar7 GEN_EDX_ARG,uVar3,param_1,uVar2,param_5,uVar4,param_3,param_4,0xffffffff,
                           (float)(int)uVar8);
      uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
      return uVar4;
    }
    break;
  case 1: ;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      param_5 = ((int *)GEN_TOP(0x0));
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,3)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
        if (uVar8 == 0) {
          uVar8 = F_009df120(0x2d4);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
            uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
            uVar8 = F_009cc220(uVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5,
                                 0xffffffff,(float)(int)(uVar9 * (int)param_5));
          }
          F_0097e5c0(param_1 GEN_EDX_ARG,uVar8);
        }
        else if (uVar8 == 1) {
          uVar8 = 0;
          do {
            if (param_5 != ((int *)GEN_TOP(uVar8))) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d4225: ;
                uVar9 = 0;
              }
              else {
                piVar6 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
                REFG(int, 0x14a09e8) = *piVar6;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
                if (piVar6 == ((int *)GEN_TOP(0x0))) goto LAB_009d4225;
                uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
                uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
                uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
                uVar9 = F_009cc220(piVar6 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5
                                     ,uVar8,(float)(int)(uVar9 * uVar8));
              }
              F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar7);
        }
        param_5 = ((int *)GEN_TOP(((int)param_5 + 1)));
        if ((int)uVar7 <= (int)param_5) {
          return (uint)param_5;
        }
      } while( true );
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      param_5 = ((int *)GEN_TOP(0x0));
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        uVar8 = F_009df120(0x2d4);
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          uVar8 = F_009cc220(uVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,0xffffffff,
                               param_5,(float)(int)(uVar9 * (int)param_5));
        }
        F_0097e5c0(param_1 GEN_EDX_ARG,uVar8);
        param_5 = ((int *)GEN_TOP(((int)param_5 + 1)));
      } while ((int)param_5 < (int)uVar7);
      return (uint)param_5;
    }
    uVar7 = F_009df120(0x2d4);
    if (uVar7 != 0) {
      uVar4 = F_009cc220(uVar7 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))),param_1,
                           *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))),param_5,uVar4,param_3,param_4,
                           0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
      return uVar4;
    }
    break;
  case 2: ;
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      param_5 = ((int *)GEN_TOP(0x0));
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,3)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
        if (uVar8 == 0) {
          uVar8 = F_009df120(0x360);
          if (uVar8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
            uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
            uVar8 = F_009ccd60(uVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5,
                                 0xffffffff,(float)(int)(uVar9 * (int)param_5));
          }
          F_0097e5c0(param_1 GEN_EDX_ARG,uVar8);
        }
        else if (uVar8 == 1) {
          uVar8 = 0;
          do {
            if (param_5 != ((int *)GEN_TOP(uVar8))) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d44f5: ;
                uVar9 = 0;
              }
              else {
                piVar6 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
                REFG(int, 0x14a09e8) = *piVar6;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
                if (piVar6 == ((int *)GEN_TOP(0x0))) goto LAB_009d44f5;
                uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
                uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
                uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
                uVar9 = F_009ccd60(piVar6 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,param_5
                                     ,uVar8,(float)(int)(uVar9 * uVar8));
              }
              F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar7);
        }
        param_5 = ((int *)GEN_TOP(((int)param_5 + 1)));
        if ((int)uVar7 <= (int)param_5) {
          return (uint)param_5;
        }
      } while( true );
    }
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
    if (uVar7 != 0) {
      if (uVar7 - 1 != 0) {
        return uVar7 - 1;
      }
      piVar6 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG);
      param_5 = ((int *)GEN_TOP(0x0));
      if ((int)uVar7 < 1) {
        return uVar7;
      }
      do {
        uVar8 = F_009df120(0x360);
        if (uVar8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          uVar8 = F_009ccd60(uVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar1,uVar4,param_3,param_4,0xffffffff,
                               param_5,(float)(int)(uVar9 * (int)param_5));
        }
        F_0097e5c0(param_1 GEN_EDX_ARG,uVar8);
        param_5 = ((int *)GEN_TOP(((int)param_5 + 1)));
      } while ((int)param_5 < (int)uVar7);
      return (uint)param_5;
    }
    uVar7 = F_009df120(0x360);
    if (uVar7 != 0) {
      uVar4 = F_009ccd60(uVar7 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))),param_1,
                           *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))),param_5,uVar4,param_3,param_4,
                           0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
      return uVar4;
    }
    break;
  case 3: ;
    if (REFG(int, 0x14a09e8) != -1) {
      piVar1 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
      REFG(int, 0x14a09e8) = *piVar1;
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar4 = F_009c9570(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))),param_1,
                             *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))),param_5,uVar4,param_3,param_4);
        uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
        return uVar4;
      }
    }
    break;
  default: ;
    goto switchD_009d3fc3_default;
  }
  uVar7 = F_0097e5c0(param_1 GEN_EDX_ARG,0);
switchD_009d3fc3_default: ;
  return uVar7;
}

/* ref: FUN_009d4770 */
GEN_OWN GEN_FRAME unsigned int F_009d4770(void)
{
  GEN_ENTER(0x9d4770u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined * pvVar7;
  int * piVar8;
  undefined4 * puVar9;
  
  if (REFG(char, 0x14a06d5) != '\0') {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
    F_009a3a70();
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
      if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
        F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
        F_00c47de6(((code *)REFP(0x107c350)));
      }
    }
    F_009bcf00(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    iVar6 = REFG(int, 0x1371288);
    iVar5 = REFG(int, 0x1370b90);
    piVar8 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0x90)));
    uVar4 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
    *((uint *)GEN_TOP((iVar1 + 8))) = *((uint *)GEN_TOP((iVar1 + 8))) & 0x7fffff | 0xf6000000;
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if (uVar4 == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf6480000;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,7);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf6480010;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,6);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf64ffffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,5);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf637fffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,4);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf647fffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,10);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf657fffe;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,3);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    puVar9 = ((undefined4 *)GEN_TOP(F_009a5550()));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar9)) + 0x30))))(((int *)GEN_TOP(*puVar9)) GEN_EDX_ARG,1,puVar9[4]);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,2);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,1);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf66bffff;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    if (*((short *)GEN_TOP((REFG(int, 0x14a0eb0) + 0x46004))) != 0) {
      F_009bd1d0();
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,0);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf6780000;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,8);
    iVar2 = *((int *)GEN_TOP((iVar5 + 0x94)));
    iVar3 = *piVar8;
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xff400003;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2670(&REFG(float, 0x14a0d58) GEN_EDX_ARG,9);
    iVar2 = *((int *)GEN_TOP((iVar6 + 0xf0)));
    iVar3 = *((int *)GEN_TOP((iVar6 + 0xec)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    *(float *)&REFG(undefined, 0x14a0e98) = (float)iVar3;
    *(float *)&REFG(undefined, 0x14a0e9c) = (float)iVar2;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf633ffff;
    F_0062d050(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    F_0063bb20(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009d2390(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    uVar4 = *(uint *)&REFG(undefined, 0x14a22e8) & 1;
    *((undefined4 *)GEN_TOP((iVar1 + 8))) = 0xf67ffffe;
    if (uVar4 == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_009bd0e0();
    pvVar7 = REFG(void * PTR32, 0x14a0d28);
    F_009846c0(REFG(void * PTR32, 0x14a0d28) GEN_EDX_ARG);
    F_009a36c0(pvVar7 GEN_EDX_ARG);
    pvVar7 = REFG(void * PTR32, 0x1487c8c);
    F_009a2b10(REFG(void * PTR32, 0x1487c8c) GEN_EDX_ARG);
    F_009a2bc0(pvVar7 GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_009d4fd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009d4fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d4fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined4 * puVar2;
  int local_8;
  
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  local_8 = 3;
  do {
    pvVar1 = ((undefined *)GEN_TOP(puVar2[-1]));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_009cfa70(pvVar1 GEN_EDX_FWD);
      F_00406ad0(pvVar1);
      puVar2[-1] = 0;
    }
    pvVar1 = ((undefined *)GEN_TOP(*puVar2));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_009cfa70(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
      *puVar2 = 0;
    }
    puVar2[1] = 0xe0000000;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2 = puVar2 + 8;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x70)));
  local_8 = 4;
  do {
    pvVar1 = ((undefined *)GEN_TOP(*puVar2));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      F_009cfa70(pvVar1 GEN_EDX_ARG);
      F_00406ad0(pvVar1);
      *puVar2 = 0;
    }
    puVar2[2] = 0xe0000000;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return;
}

/* ref: FUN_009d5090 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d5090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x200, 0);
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined * this_00;
  byte bVar5;
  undefined * this_01;
  undefined3 extraout_var = 0;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  int * piVar9;
  undefined4 * puVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  (*(uint *)(gen_frame + 0x1ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1f0);
  uVar12 = F_00538780(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
  this_01 = ((undefined *)GEN_TOP(F_009d1a30(this GEN_EDX_ARG,(int)uVar12,(int)(uVar12 >> 0x20))));
  piVar9 = ((int *)GEN_TOP(((int)this + 0x70)));
  (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
  (*(int *)(gen_frame + 0x4c)) = 4;
  do {
    iVar8 = *piVar9;
    if (iVar8 != 0) {
      (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
      bVar5 = F_009a4da0(*((undefined4 *)GEN_TOP((iVar8 + 0x50))),*((undefined4 *)GEN_TOP((iVar8 + 0x54))));
      this_01 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
      if ((bVar5 == 0) && ((*((byte *)GEN_TOP((iVar8 + 0x96))) & 1) == 0)) {
        this_00 = ((undefined *)GEN_TOP(*piVar9));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          F_009cfa70(this_00 GEN_EDX_ARG);
          this_01 = ((undefined *)GEN_TOP(F_00406ad0(this_00)));
          *piVar9 = 0;
        }
        piVar9[2] = -0x20000000;
        piVar9[3] = 0;
      }
      else {
        this_01 = ((undefined *)GEN_TOP(piVar9[2]));
        if (this_01 != ((undefined *)GEN_TOP(0xe0000000))) {
          this_01 = ((undefined *)GEN_TOP(F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,this_01,piVar9[3])));
          if (this_01 != ((undefined *)GEN_TOP(0x0))) {
            puVar6 = ((undefined4 *)GEN_TOP(F_00a5feb0(this_01 GEN_EDX_ARG)));
            fVar2 = *((float *)GEN_TOP(((int)this_01 + 0xb0)));
            (*(float *)(gen_frame + 0x50)) = fVar2;
            uVar1 = *((undefined4 *)GEN_TOP(((int)this_01 + 0xc0)));
            (*(undefined4 *)(gen_frame + 0x160)) = uVar1;
            (*(undefined4 *)(gen_frame + 0x164)) = 0;
            (*(undefined4 *)(gen_frame + 0x168)) = 0;
            (*(undefined4 *)(gen_frame + 0x170)) = 0;
            (*(undefined4 *)(gen_frame + 0x174)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
            (*(undefined4 *)(gen_frame + 0x178)) = 0;
            (*(undefined4 *)(gen_frame + 0x180)) = 0;
            (*(undefined4 *)(gen_frame + 0x184)) = 0;
            (*(undefined4 *)(gen_frame + 0x188)) = uVar1;
            (*(undefined4 *)(gen_frame + 0x190)) = 0;
            (*(undefined4 *)(gen_frame + 0x194)) = 0;
            (*(undefined4 *)(gen_frame + 0x198)) = 0;
            fVar11 = ((float10)GEN_TOD(fsin((float10)fVar2)));
            fVar3 = (float)fVar11;
            (*(float *)(gen_frame + 0x5c)) = fVar3;
            (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar3)));
            fVar11 = ((float10)GEN_TOD(fcos((float10)fVar2)));
            fVar2 = (float)fVar11;
            (*(float *)(gen_frame + 0x5c)) = fVar2;
            ((float *)(gen_frame + 0x1a0))[1] = 0.0;
            ((float *)(gen_frame + 0x1a0))[0] = fVar2;
            (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
            (*(undefined4 *)(gen_frame + 0x1b4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
            (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
            ((float *)(gen_frame + 0x1a0))[2] = ((float)GEN_TOF(-(float10)fVar3));
            (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
            (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
            (*(float *)(gen_frame + 0x1c0)) = fVar3;
            (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
            (*(undefined4 *)(gen_frame + 0x120)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            (*(float *)(gen_frame + 0x1c8)) = fVar2;
            (*(undefined4 *)(gen_frame + 0x124)) = 0;
            (*(undefined4 *)(gen_frame + 0x128)) = 0;
            (*(undefined4 *)(gen_frame + 0x130)) = 0;
            (*(undefined4 *)(gen_frame + 0x134)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            (*(undefined4 *)(gen_frame + 0x138)) = 0;
            (*(undefined4 *)(gen_frame + 0x140)) = 0;
            (*(undefined4 *)(gen_frame + 0x144)) = 0;
            (*(undefined4 *)(gen_frame + 0x148)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
            (*(undefined4 *)(gen_frame + 0x150)) = *puVar6;
            (*(undefined4 *)(gen_frame + 0x154)) = puVar6[1];
            (*(undefined4 *)(gen_frame + 0x158)) = puVar6[2];
            puVar6 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0x60)),(uint)&(*(undefined4 *)(gen_frame + 0x160)),(uint)((float *)(gen_frame + 0x1a0)))));
            puVar7 = ((undefined4 *)(gen_frame + 0xe0));
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
            puVar7 = ((undefined4 *)GEN_TOP(F_004ef350(((undefined1 *)(gen_frame + 0xa0)),(uint)((undefined4 *)(gen_frame + 0xe0)),(uint)&(*(undefined4 *)(gen_frame + 0x120)))));
            puVar6 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x58))));
            puVar10 = ((undefined4 *)(gen_frame + 0x0));
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 - 1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar7 = ((undefined4 *)(gen_frame + 0x0));
            puVar10 = puVar6;
            for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 - 1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            uVar1 = puVar6[0x14];
            uVar4 = puVar6[0x15];
            (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar6;
            if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
              F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
              F_00c47de6(((code *)REFP(0x107c350)));
            }
            this_01 = ((undefined *)GEN_TOP(F_009851b0(&REFG(float, 0x14a0d58) GEN_EDX_ARG,uVar1,uVar4,(*(undefined4 * PTR32 *)(gen_frame + 0x54)))));
            piVar9 = (*(int * PTR32 *)(gen_frame + 0x58));
          }
        }
      }
    }
    piVar9 = piVar9 + 4;
    iVar8 = (*(int *)(gen_frame + 0x4c)) - 1;
    (*(int *)(gen_frame + 0x4c)) = iVar8;
    (*(int * PTR32 *)(gen_frame + 0x58)) = piVar9;
  } while (iVar8 != 0);
  return (uint)this_01;
}

/* ref: FUN_009d53c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009d53c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9d53c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP(((int)param_1 + 0xb0))) = *((byte *)GEN_TOP(((int)param_1 + 0xb0))) | 1;
    F_009d4fd0(param_1 GEN_EDX_FWD);
    return;
  }
  *((byte *)GEN_TOP(((int)param_1 + 0xb0))) = *((byte *)GEN_TOP(((int)param_1 + 0xb0))) & 0xfe;
  return;
}

/* ref: FUN_009d53f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009d53f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9d53f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((byte *)GEN_TOP(((int)param_1 + 0xb0))) = *((byte *)GEN_TOP(((int)param_1 + 0xb0))) | 2;
    F_009d4fd0(param_1 GEN_EDX_FWD);
    return;
  }
  *((byte *)GEN_TOP(((int)param_1 + 0xb0))) = *((byte *)GEN_TOP(((int)param_1 + 0xb0))) & 0xfd;
  return;
}

/* ref: FUN_009d5420 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d5420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d5420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x44,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
      pvVar1 = ((undefined *)GEN_TOP(F_009d2b50(pvVar1 GEN_EDX_ARG)));
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = pvVar1;
      uVar2 = F_009ee980(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
      return uVar2;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  uVar2 = F_009ee980(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_009d5480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d5480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9d5480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x30,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[9] = (*(undefined4 * PTR32 *)&gen_args[0]);
      puVar1[10] = (*(undefined4 *)&gen_args[1]);
      puVar1[0xb] = (*(undefined4 *)&gen_args[2]);
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar1;
      uVar2 = F_009ee9f0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
      return uVar2;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
  uVar2 = F_009ee9f0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
  return uVar2;
}

/* ref: FUN_009d5500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d5500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d5500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10e0604));
  F_009866c0(((undefined *)GEN_TOP(((int)this + 0x1a80))) GEN_EDX_FWD);
  F_00986480(((undefined *)GEN_TOP(((int)this + 0x1738))) GEN_EDX_ARG);
  F_00986850(((undefined *)GEN_TOP(((int)this + 0x1478))) GEN_EDX_ARG);
  F_00986240(((undefined *)GEN_TOP(((int)this + 0x1130))) GEN_EDX_ARG);
  F_00985fa0(((undefined *)GEN_TOP(((int)this + 0xd70))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd68))) = (*(undefined * PTR32 (*)[1])REFP(0x10dd36c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xce0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xd24))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xd24))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd20))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xce8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xcec))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xcec))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xce8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xce0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc58))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc9c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xc9c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc98))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc64))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xc64))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc60))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc58))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbd0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xc14))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xc14))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc10))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xbdc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xbdc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xbd0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb48))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb88))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb8c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb8c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb88))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb54))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb54))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb50))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb48))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb00))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xb04))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xb04))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb00))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xacc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xacc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xac0))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa38))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xa7c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xa7c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa78))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xa44))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xa44))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa40))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa38))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x8d8))) GEN_EDX_ARG);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x778))) GEN_EDX_ARG);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x618))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x380))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2f8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x338))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x33c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x33c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x338))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x304))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x304))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x300))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2f8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x270))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2b4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2b4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2b0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x27c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x27c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x278))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x270))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x22c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x22c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 500))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 500))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1e8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x1a4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x1a4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x16c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x16c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x168))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x160))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14c))) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  if ((*((int *)GEN_TOP(((int)this + 0x13c))) != 0) && (pcVar1 != ((code *)GEN_TOP(0x0)))) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x13c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x144))) = 0;
  if ((*((int *)GEN_TOP(((int)this + 300))) != 0) && (pcVar1 != ((code *)GEN_TOP(0x0)))) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 300))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[38])REFP(0x10dd44c));
  return 0;
}

/* ref: FUN_009d59a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d59a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d59a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10e06a4));
  F_009c08a0(((undefined *)GEN_TOP(((int)this + 0x4330))) GEN_EDX_FWD);
  F_009c0840(((undefined *)GEN_TOP(((int)this + 0x42c8))) GEN_EDX_ARG);
  F_009c07d0(((undefined *)GEN_TOP(((int)this + 0x4270))) GEN_EDX_ARG);
  F_009c0770(((undefined *)GEN_TOP(((int)this + 0x4210))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x41e0))) =
       (*(undefined * PTR32 (*)[12])REFP(0x10dfd9c));
  if ((*((int *)GEN_TOP(((int)this + 0x4200))) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(*((int *)GEN_TOP(((int)this + 0x4200))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4208))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x41e0))) =
       (*(undefined * PTR32 (*)[11])REFP(0x10dd6b8));
  F_009c0690(((undefined *)GEN_TOP(((int)this + 0x4128))) GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x4128)));
  iVar2 = 3;
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x270)));
    F_00987260(this_00 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_009d33f0(((undefined *)GEN_TOP(((int)this + 0x2d58))) GEN_EDX_ARG);
  F_0097a9e0(((undefined *)GEN_TOP(((int)this + 0x2cc0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2cb8))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd5f4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2cb0))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10dd5e8));
  F_009d2ff0(((undefined *)GEN_TOP(((int)this + 0x2500))) GEN_EDX_ARG);
  F_009d30f0(((undefined *)GEN_TOP(((int)this + 0x1160))) GEN_EDX_ARG);
  F_0097a850(((undefined *)GEN_TOP(((int)this + 0x1048))) GEN_EDX_ARG);
  F_0097a930(((undefined *)GEN_TOP(((int)this + 0xfb8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfb0))) = (*(undefined * PTR32 (*)[1])REFP(0x10dd520));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfa8))) = (*(undefined * PTR32 (*)[2])REFP(0x10dd514))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf98))) = (*(undefined * PTR32 (*)[4])REFP(0x10dd500));
  F_009d2f70(((undefined *)GEN_TOP(((int)this + 0x9d8))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x950))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x990))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x994))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x994))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x990))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x958))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x95c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x95c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x958))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x950))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x908))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x90c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x90c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x908))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8d0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x8d4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x8d4))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8d0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c8))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x840))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x880))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x884))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x884))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x880))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x848))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x84c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x84c))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x848))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x840))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x6e0))) GEN_EDX_ARG);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x580))) GEN_EDX_ARG);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x420))) GEN_EDX_ARG);
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x100))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x144))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x144))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x108))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x10c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x10c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x108))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x100))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0xbc))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0xbc))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xb8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x84))) != 0)) {
    pcVar1 = ((code *)GEN_TOP((*pcVar1)(*((int *)GEN_TOP(((int)this + 0x84))))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x80))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x78))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[4])REFP(0x10dd358));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[63])REFP(0x10dd77c));
  return (uint)pcVar1;
}

/* ref: FUN_009d5ce0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d5ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d5ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x5c0))) GEN_EDX_FWD);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x538))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x578))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x57c))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x57c))));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x578))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x540))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x544))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x544))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x540))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x538))) =
       (*(undefined * PTR32 (*)[6])REFP(0x10dd228));
  F_009d2ce0(((undefined *)GEN_TOP(((int)this + 0x2a0))) GEN_EDX_ARG);
  uVar2 = F_009d2ce0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd8b0));
  return uVar2;
}

/* ref: FUN_009d5d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d5d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d5d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10e07c0));
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x438))) GEN_EDX_FWD);
  F_00986ad0(((undefined *)GEN_TOP(((int)this + 0x2d8))) GEN_EDX_ARG);
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  if ((pcVar1 != ((code *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x2a4))) != 0)) {
    (*pcVar1)(*((int *)GEN_TOP(((int)this + 0x2a4))));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dd20c));
  uVar2 = F_009d2ce0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dd87c));
  return uVar2;
}

/* ref: FUN_009d5de0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009d5de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d5de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e04e8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x40))) = ((code *)REFP(0x979f10));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x48))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x50))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x78))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x80))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x88))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0xb0))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0xb8))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0xc0))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0xe8))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0xf0))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0xf8))) = ((code *)REFP(0x97a060));
  *((gen_code32 *)GEN_TOP(((int)this + 0x120))) = ((code *)REFP(0x979f10));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x110))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x114))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x124))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 300))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x128))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x130))) = ((code *)REFP(0x97a060));
  *((gen_code32 *)GEN_TOP(((int)this + 0x158))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x160))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x168))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x148))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x164))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16c))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x180))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 400))) = ((code *)REFP(0x979f10));
  *((undefined4 *)GEN_TOP(((int)this + 0x194))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x19c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a4))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x198))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x1a0))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1b8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x1bc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1cc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1dc))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x1c8))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x1d0))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x1d8))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1f0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 500))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x214))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x200))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x208))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x210))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x238))) = ((code *)REFP(0x979f10));
  *((undefined4 *)GEN_TOP(((int)this + 0x22c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x23c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x244))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x240))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x248))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x260))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x270))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x278))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0x264))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x274))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x27c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x280))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0x284))) = 0;
  return 0;
}

/* ref: FUN_009d60a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d60a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d60a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0500));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  F_00987100(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x90))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x328))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_009d60e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d60e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d60e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x10e0518));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x28))) GEN_EDX_FWD);
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0xb0))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x210))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x4a8))) GEN_EDX_ARG);
  *((gen_code32 *)GEN_TOP(((int)this + 0x750))) = ((code *)REFP(0x979f10));
  *((undefined4 *)GEN_TOP(((int)this + 0x744))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x758))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0x754))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x75c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x764))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x760))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x740))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x788))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x790))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0x77c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x79c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x798))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x778))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x78c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x794))) = 0;
  return (uint)this;
}

/* ref: FUN_009d61b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d61b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d61b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x10e0554));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x130))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1b8))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x240))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x2c8))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x350))) GEN_EDX_ARG);
  *((gen_code32 *)GEN_TOP(((int)this + 1000))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x3f0))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0x3ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3fc))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3d8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((undefined4 *)GEN_TOP(((int)this + 0x3dc))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x3f8))) = ((code *)REFP(0x97a060));
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x410))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x6a8))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x940))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0xbd8))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0xe70))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x1108))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_009d62a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d62a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d62a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10e05bc));
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x128))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1b0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x238))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x348))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x3d0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x458))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x4e0))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x778))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_009d6330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d6330(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9d6330u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  float fVar5;
  
  uVar2 = param_2;
  bVar1 = *((byte *)GEN_TOP(param_2)) >> 1 & 1;
  if (bVar1 == 0) {
    param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((int)*((short *)GEN_TOP((param_2 + 8))) - (int)*((short *)GEN_TOP((param_2 + 6))))))
                               );
  }
  else {
    param_2 = (uint)gen_fl2bits(REFG(float, 0x1090708));
  }
  if (-1 < *((char *)GEN_TOP((uVar2 + 2)))) {
    uVar2 = F_009c3430(param_1 GEN_EDX_FWD,uVar2,param_3,GEN_ARGF(gen_bits2f(param_2)));
    return uVar2;
  }
  if (*((char *)GEN_TOP((uVar2 + 1))) < '\0') {
    uVar2 = F_009b0fa0(param_1 GEN_EDX_ARG,uVar2,param_3,GEN_ARGF(gen_bits2f(param_2)));
    return uVar2;
  }
  fVar5 = REFG(float, 0x1090708);
  if (bVar1 == 0) {
    fVar5 = ((float)GEN_TOF(((int)*((short *)GEN_TOP((uVar2 + 8))) - (int)*((short *)GEN_TOP((uVar2 + 6))))));
  }
  if (-1 < *((char *)GEN_TOP((uVar2 + 3)))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))) + 0x24))))
                              (*((int * PTR32 *)GEN_TOP((param_1 + 0x1dc))) GEN_EDX_ARG,(int)*((char *)GEN_TOP((uVar2 + 3))))));
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1d4))) + 0x270))) == 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x18))))(piVar3 GEN_EDX_ARG);
      if (uVar4 != 3) {
        uVar2 = F_009c9320(param_1 GEN_EDX_ARG,uVar2,param_3,fVar5);
        return uVar2;
      }
    }
    uVar2 = F_009d3f70(param_1 GEN_EDX_ARG,uVar2,param_3,fVar5,piVar3);
    return uVar2;
  }
  uVar2 = F_009c9320(param_1 GEN_EDX_ARG,uVar2,param_3,fVar5);
  return uVar2;
}

/* ref: FUN_009d6470 */
GEN_OWN GEN_NOFRAME unsigned int F_009d6470(void)
{
  GEN_ENTER(0x9d6470u, 0u, 0u, 0u, 0u);
  int iVar1;
  int * piVar2;
  
  REFG(undefined1, 0x14a06d4) = 1;
  if (REFG(char, 0x14a06d5) != '\0') {
    if (REFG(undefined4 * PTR32, 0x1487c90) != ((undefined4 *)GEN_TOP(0x0))) {
      F_009d4fd0(REFG(undefined4 * PTR32, 0x1487c90) GEN_EDX_ARG);
    }
    F_009cfbc0();
    piVar2 = &REFG(undefined4, 0x14a0720);
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        _InterlockedExchangeAdd((volatile long *)((((int *)GEN_TOP((iVar1 + 4))))), (long)(-1));
        F_0050c620(*((undefined4 *)GEN_TOP((iVar1 + 100))),0,0);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
    } while ((int)piVar2 < 0x14a09a0);
    F_00984ab0();
    if (REFG(undefined4 * PTR32, 0x1487c90) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1487c90))))(REFG(undefined4 * PTR32, 0x1487c90) GEN_EDX_ARG,1);
      REFG(undefined4 * PTR32, 0x1487c90) = ((undefined4 *)GEN_TOP(0x0));
    }
    if (REFG(undefined4 * PTR32, 0x14a0d28) != ((undefined4 *)GEN_TOP(0x0))) {
      F_00994410(REFG(undefined4 * PTR32, 0x14a0d28) GEN_EDX_ARG);
      if (REFG(undefined4 * PTR32, 0x14a0d28) != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14a0d28))))(REFG(undefined4 * PTR32, 0x14a0d28) GEN_EDX_ARG,1);
        REFG(undefined4 * PTR32, 0x14a0d28) = ((undefined4 *)GEN_TOP(0x0));
      }
    }
    if (REFG(undefined4 * PTR32, 0x1487c8c) != ((undefined4 *)GEN_TOP(0x0))) {
      F_00993fa0(REFG(undefined4 * PTR32, 0x1487c8c) GEN_EDX_ARG);
      if (REFG(undefined4 * PTR32, 0x1487c8c) != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x1487c8c))))(REFG(undefined4 * PTR32, 0x1487c8c) GEN_EDX_ARG,1);
        REFG(undefined4 * PTR32, 0x1487c8c) = ((undefined4 *)GEN_TOP(0x0));
      }
    }
  }
  return;
}

/* ref: FUN_009d6550 */
GEN_OWN GEN_NOFRAME unsigned int F_009d6550(void)
{
  GEN_ENTER(0x9d6550u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x90, 0);
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (REFG(char, 0x14a06d5) != '\0') {
    F_009d5090(REFG(void * PTR32, 0x1487c90) GEN_EDX_ARG);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    iVar2 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0x66f4)));
    uVar1 = *((undefined4 *)GEN_TOP((iVar2 + 0x20)));
    (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((iVar2 + 0x10)));
    (*(undefined4 *)(gen_frame + 0x44)) = *((undefined4 *)GEN_TOP((iVar2 + 0x14)));
    (*(undefined4 *)(gen_frame + 0x48)) = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
    (*(undefined4 *)(gen_frame + 0x50)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = *((undefined4 *)GEN_TOP((iVar2 + 0x24)));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = *((undefined4 *)GEN_TOP((iVar2 + 0x28)));
    (*(undefined4 *)(gen_frame + 0x70)) = *((undefined4 *)GEN_TOP((iVar2 + 0x40)));
    (*(undefined4 *)(gen_frame + 0x60)) = *((undefined4 *)GEN_TOP((iVar2 + 0x30)));
    (*(undefined4 *)(gen_frame + 0x74)) = *((undefined4 *)GEN_TOP((iVar2 + 0x44)));
    (*(undefined4 *)(gen_frame + 0x64)) = *((undefined4 *)GEN_TOP((iVar2 + 0x34)));
    (*(undefined4 *)(gen_frame + 0x78)) = *((undefined4 *)GEN_TOP((iVar2 + 0x48)));
    (*(undefined4 *)(gen_frame + 0x68)) = *((undefined4 *)GEN_TOP((iVar2 + 0x38)));
    (*(undefined4 *)(gen_frame + 0x7c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar4 = ((undefined4 *)GEN_TOP((iVar2 + 0x50)));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_00994ed0(&REFG(float, 0x14a0d58) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x0)));
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    F_00978ae0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
  }
  return;
}

/* ref: Apricot::ApricotListenner::vf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d66e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x9d66e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  if ((*(int *)&gen_args[0]) == 0) {
    (*(int *)&gen_args[0]) = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) - 0x90;
  }
  F_00625bc0((*(int *)&gen_args[0]) GEN_EDX_FWD,0);
  uVar1 = F_009ef2d0(this + 0xec GEN_EDX_ARG,&(*(int *)&gen_args[0]));
  return uVar1;
}

/* ref: FUN_009d6720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d6720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d6720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  F_00995890(((undefined *)GEN_TOP(((int)this + 0x1380))) GEN_EDX_FWD);
  F_00995690(((undefined *)GEN_TOP(((int)this + 0xe10))) GEN_EDX_ARG);
  F_00985ee0(((undefined *)GEN_TOP(((int)this + 0xce8))) GEN_EDX_ARG);
  F_009d5ce0(((undefined *)GEN_TOP(((int)this + 0x5c8))) GEN_EDX_ARG);
  uVar1 = F_009d5d80(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
  return uVar1;
}

/* ref: FUN_009d6770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d6770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined1 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x9d6770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined1 param_10 = (undefined1)gen_a9;)
  param_1[2] = param_3;
  param_1[1] = param_2;
  param_1[3] = param_4;
  param_1[5] = param_6;
  param_1[4] = param_5;
  param_1[6] = param_7;
  param_1[8] = param_9;
  *param_1 = (*(undefined * PTR32 (*)[38])REFP(0x10e0604));
  param_1[7] = param_8;
  *(undefined1 *)(param_1 + 9) = param_10;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = (*(undefined * PTR32 (*)[4])REFP(0x10de914));
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  F_00987100(param_1 + 0x58 GEN_EDX_FWD);
  F_00987100(param_1 + 0x7a GEN_EDX_ARG);
  F_00987100(param_1 + 0x9c GEN_EDX_ARG);
  F_00987100(param_1 + 0xbe GEN_EDX_ARG);
  F_009d5de0(param_1 + 0xe0 GEN_EDX_ARG);
  F_00995cb0(param_1 + 0x186 GEN_EDX_ARG);
  F_00995cb0(param_1 + 0x1de GEN_EDX_ARG);
  F_00995cb0(param_1 + 0x236 GEN_EDX_ARG);
  F_00987100(param_1 + 0x28e GEN_EDX_ARG);
  F_00987100(param_1 + 0x2b0 GEN_EDX_ARG);
  F_00987100(param_1 + 0x2d2 GEN_EDX_ARG);
  F_00987100(param_1 + 0x2f4 GEN_EDX_ARG);
  F_00987100(param_1 + 0x316 GEN_EDX_ARG);
  F_00987100(param_1 + 0x338 GEN_EDX_ARG);
  param_1[0x35a] = (*(undefined * PTR32 (*)[1])REFP(0x10de87c));
  F_009959d0(param_1 + 0x35c GEN_EDX_ARG);
  F_00995a30(param_1 + 0x44c GEN_EDX_ARG);
  F_00995b60(param_1 + 0x51e GEN_EDX_ARG);
  F_00995aa0(param_1 + 0x5ce GEN_EDX_ARG);
  param_1[0x6a0] = (*(undefined * PTR32 (*)[8])REFP(0x10de858));
  param_1[0x6a1] = 0xffffffff;
  param_1[0x6a2] = 2;
  param_1[0x6a3] = 0;
  F_00987100(param_1 + 0x6a4 GEN_EDX_ARG);
  F_00987100(param_1 + 0x6c6 GEN_EDX_ARG);
  F_00987100(param_1 + 0x6e8 GEN_EDX_ARG);
  F_00987100(param_1 + 0x70a GEN_EDX_ARG);
  F_00c48350(((undefined *)GEN_TOP(((int)param_1 + 0x25))),0,0x100);
  param_1[0x4a] = 0;
  return (uint)param_1;
}

/* ref: FUN_009d6940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d6940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10), GEN_P(undefined4 param_11, unsigned int gen_a11), GEN_P(undefined4 param_12, unsigned int gen_a12), GEN_P(undefined4 param_13, unsigned int gen_a13), GEN_P(undefined4 param_14, unsigned int gen_a14), GEN_P(undefined4 param_15, unsigned int gen_a15), GEN_P(undefined4 param_16, unsigned int gen_a16), GEN_P(undefined4 param_17, unsigned int gen_a17))
{
  GEN_ENTER(0x9d6940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a10;)
  GEN_PIN(undefined4 param_11 = (undefined4)gen_a11;)
  GEN_PIN(undefined4 param_12 = (undefined4)gen_a12;)
  GEN_PIN(undefined4 param_13 = (undefined4)gen_a13;)
  GEN_PIN(undefined4 param_14 = (undefined4)gen_a14;)
  GEN_PIN(undefined4 param_15 = (undefined4)gen_a15;)
  GEN_PIN(undefined4 param_16 = (undefined4)gen_a16;)
  GEN_PIN(undefined4 param_17 = (undefined4)gen_a17;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *((int *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_11;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_13;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_7;
  *((undefined1 *)GEN_TOP(((int)this + 0x35))) = (undefined1)param_16;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_9;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_10;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_12;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[64])REFP(0x10e06a4));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_14;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_15;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[4])REFP(0x10de914));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x78))) GEN_EDX_FWD);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x188))) GEN_EDX_ARG);
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0x420))) GEN_EDX_ARG);
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0x580))) GEN_EDX_ARG);
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0x6e0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x840))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x8c8))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x950))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x9d8))) = (*(undefined * PTR32 (*)[5])REFP(0x10e0500));
  *((undefined4 *)GEN_TOP(((int)this + 0x9dc))) = 0;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x9e0))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0xa68))) GEN_EDX_ARG);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0xd00))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xf98))) = (*(undefined * PTR32 (*)[4])REFP(0x10de94c))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfa8))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10de960));
  *((undefined4 *)GEN_TOP(((int)this + 0xfac))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfb0))) = (*(undefined * PTR32 (*)[1])REFP(0x10de96c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xfb8))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10ddac4));
  F_00987100(((undefined *)GEN_TOP(((int)this + 0xfc0))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1048))) = (*(undefined * PTR32 (*)[3])REFP(0x10ddab4))
  ;
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x1050))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x10d8))) GEN_EDX_ARG);
  F_009d61b0(((undefined *)GEN_TOP(((int)this + 0x1160))) GEN_EDX_ARG);
  F_009d60e0(((undefined *)GEN_TOP(((int)this + 0x2500))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2cb0))) =
       (*(undefined * PTR32 (*)[2])REFP(0x10de940));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2cb8))) = (*(undefined * PTR32 (*)[2])REFP(0x10de974))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2cc0))) =
       (*(undefined * PTR32 (*)[4])REFP(0x10ddad0));
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x2cc8))) GEN_EDX_ARG);
  F_009d62a0(((undefined *)GEN_TOP(((int)this + 0x2d58))) GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x3768)));
  param_1 = 3;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x3968)));
  do {
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x10de928));
    F_00995bc0(puVar2 - 0x7e GEN_EDX_ARG);
    F_00995bc0(puVar2 - 0x42 GEN_EDX_ARG);
    puVar2[-6] = (*(undefined * PTR32 (*)[6])REFP(0x10dda98));
    *puVar2 = ((code *)REFP(0x979f10));
    puVar2[1] = 0;
    puVar1 = puVar1 + 0x9c;
    puVar2[2] = ((code *)REFP(0x979ff0));
    puVar2[3] = 0;
    puVar2[-3] = 0;
    puVar2[4] = ((code *)REFP(0x97a060));
    puVar2[5] = 0;
    puVar2[-4] = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
    puVar2[0xe] = ((code *)REFP(0x979f10));
    puVar2[0xf] = 0;
    puVar2[0x10] = ((code *)REFP(0x979ff0));
    puVar2[0x11] = 0;
    puVar2[0x12] = ((code *)REFP(0x97a060));
    puVar2[10] = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
    puVar2[0xb] = 0;
    puVar2[0x13] = 0;
    puVar2 = puVar2 + 0x9c;
    param_1 = param_1 - 1;
  } while (-1 < param_1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4128))) =
       (*(undefined * PTR32 (*)[13])REFP(0x10dfd64));
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x4148))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x41d0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x41d4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x41d8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x41e0))) =
       (*(undefined * PTR32 (*)[12])REFP(0x10dfd9c));
  *((undefined4 *)GEN_TOP(((int)this + 0x4200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4204))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4208))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4210))) =
       (*(undefined * PTR32 (*)[8])REFP(0x10dfdd0));
  *((undefined4 *)GEN_TOP(((int)this + 0x422c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x423c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4244))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x424c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x4238))) = ((code *)REFP(0x979f10));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4228))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *((gen_code32 *)GEN_TOP(((int)this + 0x4240))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x4248))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0x4260))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4264))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 17000))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4270))) =
       (*(undefined * PTR32 (*)[7])REFP(0x10dfdf4));
  *((undefined4 *)GEN_TOP(((int)this + 0x4280))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4284))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4288))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4290))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 0x4294))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x42a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x42ac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x42b4))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x42a0))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x42a8))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x42b0))) = ((code *)REFP(0x97a060));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x42c8))) =
       (*(undefined * PTR32 (*)[12])REFP(0x10dfe14));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x42e8))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *((undefined4 *)GEN_TOP(((int)this + 0x42ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x42fc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4304))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x430c))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x42f8))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x4300))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x4308))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0x4320))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4324))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4328))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4330))) =
       (*(undefined * PTR32 (*)[5])REFP(0x10dfe48));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4340))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c))
  ;
  *((gen_code32 *)GEN_TOP(((int)this + 0x4350))) = ((code *)REFP(0x979f10));
  *((undefined4 *)GEN_TOP(((int)this + 0x4344))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4354))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x435c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4364))) = 0;
  *((gen_code32 *)GEN_TOP(((int)this + 0x4358))) = ((code *)REFP(0x979ff0));
  *((gen_code32 *)GEN_TOP(((int)this + 0x4360))) = ((code *)REFP(0x97a060));
  *((undefined4 *)GEN_TOP(((int)this + 0x4378))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x437c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4380))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4388))) = param_17;
  *((undefined4 *)GEN_TOP(((int)this + 0x445c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4460))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4464))) = 0;
  return (uint)this;
}

/* ref: FUN_009d6da0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d6da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d6da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 0x2a0))) GEN_EDX_ARG);
  F_00987100(((undefined *)GEN_TOP(((int)this + 0x538))) GEN_EDX_ARG);
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0x5c0))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_009d6de0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d6de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d6de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10e07c0));
  F_009d5de0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *((gen_code32 *)GEN_TOP(((int)this + 0x2b0))) = ((code *)REFP(0x979f10));
  *((gen_code32 *)GEN_TOP(((int)this + 0x2b8))) = ((code *)REFP(0x979ff0));
  *((undefined4 *)GEN_TOP(((int)this + 0x2a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2b4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 700))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c4))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2a0))) = (*(undefined * PTR32 (*)[6])REFP(0x10dda7c));
  *((gen_code32 *)GEN_TOP(((int)this + 0x2c0))) = ((code *)REFP(0x97a060));
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0x2d8))) GEN_EDX_ARG);
  F_00995cb0(((undefined *)GEN_TOP(((int)this + 0x438))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_009d6e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d6e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d6e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  
  pbVar3 = ((byte *)GEN_TOP((*((uint *)GEN_TOP(((int)this + 0x1d0))) >> 0x13)));
  if (((uint)pbVar3 & 1) == 0) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x1a8)));
    pbVar4 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) + 0xc))))
                               (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_ARG)));
    iVar6 = 0;
    uVar7 = 1;
    pbVar3 = pbVar4;
    if (0 < (int)pbVar4) {
      do {
        if ((*((uint *)GEN_TOP(((int)this + 0x1f8))) & uVar7) == 0) {
          pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) + 0x14))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_ARG,iVar6)));
          fVar2 = ((float)GEN_TOF(((float10)fVar1 - (float10)(int)*(short *)(pbVar5 + 6))));
          pbVar3 = pbVar5;
          if (!((float10)fVar2 < (float10)0)) {
            *((uint *)GEN_TOP(((int)this + 0x1f8))) = *((uint *)GEN_TOP(((int)this + 0x1f8))) | uVar7;
            if (*((int *)GEN_TOP(((int)this + 0x1f8))) == -1) {
              pbVar3 = ((byte *)GEN_TOP((*((uint *)GEN_TOP(((int)this + 0x1d0))) & 0xfffffe00)));
              *((gen_code32 *)GEN_TOP(((int)this + 0x1ec))) = ((code *)REFP(0x97fcb0));
              *((uint *)GEN_TOP(((int)this + 0x1d0))) = ((uint)pbVar3 ^ 0x20000000) & 0x20000000 ^ (uint)pbVar3
              ;
            }
            if ((*pbVar5 & 1) != 0) {
              pbVar3 = ((byte *)GEN_TOP(F_009d6330(this GEN_EDX_ARG,(uint)pbVar5,fVar2)));
            }
          }
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      } while (iVar6 < (int)pbVar4);
    }
  }
  return (uint)pbVar3;
}

/* ref: FUN_009d6f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d6f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d6f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10e082c));
  F_009d15d0(this GEN_EDX_FWD);
  piVar4 = ((int *)GEN_TOP(((int)this + 0x94)));
  iVar3 = 0x30;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar4));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  piVar4 = ((int *)GEN_TOP(((int)this + 0x14)));
  iVar3 = 0x10;
  do {
    piVar1 = ((int *)GEN_TOP(*piVar4));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  uVar2 = F_009eebb0(((undefined *)GEN_TOP(((int)this + 0x270))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x274))),
                       *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x274))));
  if (*((int *)GEN_TOP(((int)this + 0x274))) != 0) {
    uVar2 = F_00406810(*((int *)GEN_TOP(((int)this + 0x274))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  return uVar2;
}

/* ref: FUN_009d7000 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x9d7000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[9];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(0x1cb0,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    if (uVar1 != 0) {
      (*(uint *)&gen_args[8]) = F_009d6770(uVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),
                             (char)(*(uint *)&gen_args[8]));
      uVar1 = F_009eea60(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,&(*(uint *)&gen_args[8]));
      return uVar1;
    }
  }
  (*(uint *)&gen_args[8]) = 0;
  uVar1 = F_009eea60(((undefined *)GEN_TOP(((int)this + 0x54))) GEN_EDX_ARG,&(*(uint *)&gen_args[8]));
  return uVar1;
}

/* ref: FUN_009d7090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16)
{
  GEN_ENTER(0x9d7090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[16];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  gen_args[8] = gen_a9;
  gen_args[9] = gen_a10;
  gen_args[10] = gen_a11;
  gen_args[11] = gen_a12;
  gen_args[12] = gen_a13;
  gen_args[13] = gen_a14;
  gen_args[14] = gen_a15;
  gen_args[15] = gen_a16;
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xa4)));
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))(0x4468,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      (*(uint *)&gen_args[15]) = F_009d6940(this_00 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),
                              (*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]),(*(undefined4 *)&gen_args[9]),(*(undefined4 *)&gen_args[10]),(*(undefined4 *)&gen_args[11]),(*(undefined4 *)&gen_args[12]),(*(undefined4 *)&gen_args[13]),(*(undefined4 *)&gen_args[14]),
                              (*(uint *)&gen_args[15]),-(uint)(iVar1 != 0) & 2 | (uint)(iVar2 != 0));
      uVar3 = F_009eead0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG,&(*(uint *)&gen_args[15]));
      return uVar3;
    }
  }
  (*(uint *)&gen_args[15]) = 0;
  uVar3 = F_009eead0(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG,&(*(uint *)&gen_args[15]));
  return uVar3;
}

/* ref: FUN_009d7150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined1 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x9d7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined1 param_5 = (undefined1)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = param_5;
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x11))) = param_6;
  *param_1 = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  param_1[5] = param_7;
  param_1[6] = param_8;
  F_009d6de0(param_1 + 8 GEN_EDX_FWD);
  param_1[0x172] = (*(undefined * PTR32 (*)[5])REFP(0x10e07a8));
  F_009d5de0(param_1 + 0x174 GEN_EDX_ARG);
  F_009d5de0(param_1 + 0x21a GEN_EDX_ARG);
  F_00987100(param_1 + 0x2c0 GEN_EDX_ARG);
  F_00995cb0(param_1 + 0x2e2 GEN_EDX_ARG);
  F_00995570(param_1 + 0x33a GEN_EDX_ARG);
  F_009a6b20(param_1 + 900 GEN_EDX_ARG);
  param_1[0x4e0] = (*(undefined * PTR32 (*)[6])REFP(0x10df09c));
  F_00987100(param_1 + 0x4e2 GEN_EDX_ARG);
  F_00987100(param_1 + 0x504 GEN_EDX_ARG);
  F_00987100(param_1 + 0x526 GEN_EDX_ARG);
  F_00995cb0(param_1 + 0x548 GEN_EDX_ARG);
  F_00995cb0(param_1 + 0x5a0 GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_009d7230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7230(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x9d7230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_5)) + 8))))(param_5);
  fVar9 = (float)(int)uVar5;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_5)) + 4))))(param_5);
  F_0099a240(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_6,param_7,(float)(float10)1,(float)(int)uVar5,
               fVar9);
  param_1[0x7d] = param_8;
  param_1[0x7c] = param_5;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10e08bc));
  param_1[0x7b] = ((code *)REFP(0x9d6e50));
  param_1[0x7e] = 0xffffffff;
  param_1[1] = *param_9;
  param_1[2] = param_9[1];
  param_1[3] = param_9[2];
  param_1[4] = param_9[3];
  param_1[5] = param_9[4];
  param_1[6] = param_9[5];
  param_1[7] = param_9[6];
  param_1[8] = param_9[7];
  param_1[9] = param_9[8];
  param_1[10] = param_9[9];
  param_1[0xb] = param_9[10];
  param_1[0xc] = param_9[0xb];
  piVar4 = ((int *)GEN_TOP(param_1[0x75]));
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)))));
  uVar1 = *puVar6;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((uVar5 + 4)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = *((undefined4 *)GEN_TOP((uVar5 + 8)));
  piVar4 = ((int *)GEN_TOP(param_1[0x75]));
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar3;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  uVar1 = *puVar6;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((uVar5 + 4)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
  uVar3 = *((undefined4 *)GEN_TOP((uVar5 + 8)));
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uVar3;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7c])) + 0xc))))(((int *)GEN_TOP(param_1[0x7c])) GEN_EDX_ARG);
  if (0 < (int)uVar5) {
    uVar8 = param_1[0x7e];
    uVar7 = 1;
    do {
      uVar8 = uVar8 & ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    param_1[0x7e] = uVar8;
  }
  param_1[0x74] = param_1[0x74] & 0x20000000 ^ (param_1[0x74] & 0xfffffe01 | 1);
  return (uint)param_1;
}

/* ref: FUN_009d7430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7430(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 * param_9, unsigned int gen_a8), GEN_P(uint param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x9d7430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;)
  GEN_PIN(uint param_10 = (uint)gen_a9;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_5)) + 8))))(param_5);
  fVar9 = (float)(int)uVar5;
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_5)) + 4))))(param_5);
  F_0099a640(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_6,param_7,(float)(float10)1,(float)(int)uVar5,
               fVar9,param_10);
  param_1[0x7c] = param_5;
  param_1[0x7d] = param_8;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10e08bc));
  param_1[0x7b] = ((code *)REFP(0x9d6e50));
  param_1[0x7e] = 0xffffffff;
  param_1[1] = *param_9;
  param_1[2] = param_9[1];
  param_1[3] = param_9[2];
  param_1[4] = param_9[3];
  param_1[5] = param_9[4];
  param_1[6] = param_9[5];
  param_1[7] = param_9[6];
  param_1[8] = param_9[7];
  param_1[9] = param_9[8];
  param_1[10] = param_9[9];
  param_1[0xb] = param_9[10];
  param_1[0xc] = param_9[0xb];
  piVar4 = ((int *)GEN_TOP(param_1[0x75]));
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)))));
  uVar1 = *puVar6;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((uVar5 + 4)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x40))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = *((undefined4 *)GEN_TOP((uVar5 + 8)));
  piVar4 = ((int *)GEN_TOP(param_1[0x75]));
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar3;
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  uVar1 = *puVar6;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((uVar5 + 4)));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
  uVar3 = *((undefined4 *)GEN_TOP((uVar5 + 8)));
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uVar3;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7c])) + 0xc))))(((int *)GEN_TOP(param_1[0x7c])) GEN_EDX_ARG);
  uVar7 = 1;
  if (0 < (int)uVar5) {
    uVar8 = param_1[0x7e];
    do {
      uVar8 = uVar8 & ~uVar7;
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    param_1[0x7e] = uVar8;
  }
  param_1[0x74] = param_1[0x74] & 0x20000000 ^ (param_1[0x74] & 0xfffffe01 | 1);
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf24 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d7630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d7630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(this + 0x1f8) = 0xffffffff;
  *(gen_code32 *)(this + 0x1ec) = ((code *)REFP(0x9d6e50));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1f0) + 0xc))))(*(int * PTR32 *)(this + 0x1f0) GEN_EDX_ARG);
  uVar2 = 1;
  if (0 < (int)uVar1) {
    uVar3 = *(uint *)(this + 0x1f8);
    do {
      uVar3 = uVar3 & ~uVar2;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    *(uint *)(this + 0x1f8) = uVar3;
  }
  uVar1 = *(uint *)(this + 0x1d0) & 0xfffffe01 | 1;
  *(uint *)(this + 0x1d0) = *(uint *)(this + 0x1d0) & 0x20000000 ^ uVar1;
  return uVar1;
}

/* ref: FUN_009d76b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d76b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7), GEN_P(float param_9, float gen_a8))
{
  GEN_ENTER(0x9d76b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  GEN_PIN(float param_9 = (float)gen_a8;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  int * piVar2;
  float fVar3;
  
  fVar3 = (float)(float10)0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 4))))(param_5 GEN_EDX_FWD);
  F_009abc20(param_1 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_8,(float)(int)uVar1,fVar3);
  *param_1 = (*(undefined * PTR32 (*)[32])REFP(0x10dec44));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7d])) + 0x2c))))(((int *)GEN_TOP(param_1[0x7d])) GEN_EDX_ARG)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  *(char *)(param_1 + 0x93) = (char)uVar1;
  F_009b1200(param_1 GEN_EDX_ARG,GEN_ARGF(gen_bits2f(param_1[0x6a])),GEN_ARGF(gen_bits2f(param_1[0x6b])));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xe;
  if (REFG(int, 0x14a09e8) != -1) {
    piVar2 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
    REFG(int, 0x14a09e8) = *piVar2;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar1 = F_009d7430(piVar2 GEN_EDX_ARG,param_1[0x75],param_1,param_1[0x77],param_6,param_8,param_9,
                           param_7,param_1 + 1,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
      F_0097e5c0(param_1 GEN_EDX_ARG,uVar1);
      return (uint)param_1;
    }
  }
  F_0097e5c0(param_1 GEN_EDX_ARG,0);
  return (uint)param_1;
}

/* ref: FUN_009d77f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d77f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d77f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint * puVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10e082c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x278))) = 0;
  piVar1 = ((int *)GEN_TOP(F_00404230()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,0x2c,4);
  *((uint *)GEN_TOP(((int)this + 0x274))) = uVar2;
  *((uint *)GEN_TOP(uVar2)) = uVar2;
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x274))) + 4))) = *((int *)GEN_TOP(((int)this + 0x274)));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x274))) + 8))) = *((int *)GEN_TOP(((int)this + 0x274)));
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x274))) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x274))) + 0x29))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  uVar2 = *((uint *)GEN_TOP((REFG(int, 0x1370b90) + 0x34)));
  if ((uVar2 >> 1 & 1) == 0) {
    if (((uVar2 >> 2 & 1) != 0) || ((uVar2 >> 4 & 1) != 0)) {
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *((uint *)GEN_TOP(((int)this + 0x240))) = *((uint *)GEN_TOP(((int)this + 0x240))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x244))) = *((uint *)GEN_TOP(((int)this + 0x244))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x248))) = *((uint *)GEN_TOP(((int)this + 0x248))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x24c))) = *((uint *)GEN_TOP(((int)this + 0x24c))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x250))) = *((uint *)GEN_TOP(((int)this + 0x250))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x254))) = *((uint *)GEN_TOP(((int)this + 0x254))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 600))) = *((uint *)GEN_TOP(((int)this + 600))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x25c))) = *((uint *)GEN_TOP(((int)this + 0x25c))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x260))) = *((uint *)GEN_TOP(((int)this + 0x260))) & 0xf00003ff;
  *((uint *)GEN_TOP(((int)this + 0x264))) = *((uint *)GEN_TOP(((int)this + 0x264))) & 0xf00003ff;
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x10)) = 4;
  pvVar3 = ((undefined *)GEN_TOP(F_004dca20(&(*(undefined4 *)(gen_frame + 0xc)),1,0x1440,4,10)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = pvVar3;
  pvVar3 = ((undefined *)GEN_TOP(F_004d5a50(pvVar3 GEN_EDX_ARG,0,0,((int *)(gen_frame + 0x0)),2)));
  F_00c48350(pvVar3,0xff,((int *)(gen_frame + 0x0))[0] * 4);
  F_004d5b60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,0,0);
  *((undefined1 *)GEN_TOP(((int)this + 0x26e))) = 1;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x10))),0,0x80);
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x90))),0,0x180);
  puVar5 = ((uint *)GEN_TOP(((int)this + 0x14)));
  uVar2 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0a90) + uVar2))) != 0) {
      uVar4 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x1c))) GEN_EDX_ARG,
                           *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0a90) + uVar2))));
      puVar5[-1] = uVar4;
      uVar4 = F_004dcd60(*((int *)GEN_TOP(((int)&REFG(undefined4, 0x10e0a94) + uVar2))) << 4,2,10);
      *puVar5 = uVar4;
    }
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 2;
  } while (uVar2 < 0x70);
  puVar5 = ((uint *)GEN_TOP(((int)this + 0x94)));
  uVar2 = 0;
  do {
    if (*((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0980) + uVar2))) != 0) {
      uVar4 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x1c))) GEN_EDX_ARG,
                           *((int *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0980) + uVar2))));
      puVar5[-1] = uVar4;
      uVar4 = F_004dcd60(*((int *)GEN_TOP(((int)&REFG(undefined4, 0x10e0984) + uVar2))) << 4,2,10);
      *puVar5 = uVar4;
    }
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 2;
  } while (uVar2 < 0x110);
  puVar5 = ((uint *)GEN_TOP(((int)this + 0x210)));
  uVar2 = 0;
  do {
    uVar4 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x1370b90) + 0x20))) GEN_EDX_ARG,
                         *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x10e0938) + uVar2))));
    *puVar5 = uVar4;
    uVar2 = uVar2 + 8;
    puVar5 = puVar5 + 1;
  } while (uVar2 < 0x48);
  *((undefined2 *)GEN_TOP(((int)this + 0x26c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x268))) = 0;
  return (uint)this;
}

/* ref: FUN_009d7a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9d7a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[7];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(0x17e0,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    if (uVar1 != 0) {
      (*(uint *)&gen_args[6]) = F_009d7150(uVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(undefined1)(*(undefined4 *)&gen_args[3]),(undefined1)(*(undefined4 *)&gen_args[4]),
                             (*(undefined4 *)&gen_args[5]),(*(uint *)&gen_args[6]));
      uVar1 = F_009eeb40(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,&(*(uint *)&gen_args[6]));
      return uVar1;
    }
  }
  (*(uint *)&gen_args[6]) = 0;
  uVar1 = F_009eeb40(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,&(*(uint *)&gen_args[6]));
  return uVar1;
}

/* ref: FUN_009d7ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9d7ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_FWD,param_1);
  uVar1 = *((ushort *)GEN_TOP((uVar4 + 2)));
  uVar5 = (uint)uVar1;
  if (-1 < (short)uVar1) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0x2c))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG,(int)(short)uVar1);
    uVar5 = 0;
    if (uVar6 != 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) + 0x2c))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x1dc))) GEN_EDX_ARG,(int)*((short *)GEN_TOP((uVar4 + 2))));
      uVar4 = F_0097fa40(uVar5);
      if (REFG(int, 0x14a09e8) != -1) {
        iVar7 = REFG(int, 0x14a09e8) * 0x400;
        REFG(int, 0x14a09e8) = *((int *)GEN_TOP((iVar7 + REFG(int, 0x14a09f4))));
        REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
        iVar7 = iVar7 + REFG(int, 0x14a09f4);
        if (iVar7 != 0) {
          uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x1d4)));
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
          uVar5 = F_009d7230(iVar7 GEN_EDX_ARG,uVar3,this,uVar2,uVar5,(float)(float10)0,(float)(int)uVar4,
                               0xffffffff,uVar6);
          uVar5 = F_0097e5c0(this GEN_EDX_ARG,uVar5);
          return uVar5;
        }
      }
      uVar5 = F_0097e5c0(this GEN_EDX_ARG,0);
    }
  }
  return uVar5;
}

/* ref: FUN_009d7bb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d7bb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x9d7bb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int * piVar8;
  uint uVar9;
  uint uVar10;
  uint local_10;
  uint local_c;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1f0))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1f0))) GEN_EDX_ARG,param_2);
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1dc))) + 0x2c))))
                            (*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1dc))) GEN_EDX_ARG,(int)*((short *)GEN_TOP((uVar4 + 2))))));
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)param_1 + 0x1dc)));
  iVar1 = *piVar6;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x10))))(piVar5 GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x24))))(piVar6,uVar4)));
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG,0)));
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG,3)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d7cf5: ;
          uVar9 = 0;
        }
        else {
          piVar8 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
          REFG(int, 0x14a09e8) = *piVar8;
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
          if (piVar8 == ((int *)GEN_TOP(0x0))) goto LAB_009d7cf5;
          uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
          uVar9 = F_009cca90(piVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               local_c,(float)(int)(uVar9 * local_c));
        }
        F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = F_009df120(0x29c);
    if (uVar4 != 0) {
      uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
      uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
      uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
      uVar4 = F_009cca90(uVar4 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                           0xffffffff,(float)(int)uVar9);
      uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
      return uVar4;
    }
    break;
  case 1: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG,3)));
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
        if (uVar9 == 0) {
          uVar9 = F_009df120(0x2d4);
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
            uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
            uVar9 = F_009cc4f0(uVar9 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                                 local_c,0xffffffff,(float)(int)(uVar10 * local_c));
          }
          F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
        }
        else if (uVar9 == 1) {
          uVar9 = 0;
          do {
            if (local_c != uVar9) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d7e92: ;
                uVar10 = 0;
              }
              else {
                piVar8 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
                REFG(int, 0x14a09e8) = *piVar8;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
                if (piVar8 == ((int *)GEN_TOP(0x0))) goto LAB_009d7e92;
                uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
                uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
                uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
                uVar10 = F_009cc4f0(piVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,
                                      param_4,local_c,uVar9,(float)(int)(uVar10 * uVar9));
              }
              F_0097e5c0(param_1 GEN_EDX_ARG,uVar10);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar4);
        }
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
      local_10 = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        uVar9 = F_009df120(0x2d4);
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
          uVar9 = F_009cc4f0(uVar9 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               0xffffffff,local_10,(float)(int)(uVar10 * local_10));
        }
        F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
      return local_10;
    }
    uVar4 = F_009df120(0x2d4);
    if (uVar4 != 0) {
      uVar4 = F_009cc4f0(uVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))),param_1,
                           *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))),piVar6,piVar5,param_2,param_3,
                           param_4,0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
      return uVar4;
    }
    break;
  case 2: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0xc))))(piVar7 GEN_EDX_ARG);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
      local_c = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x1c))))(piVar6 GEN_EDX_ARG,3)));
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
        if (uVar9 == 0) {
          uVar9 = F_009df120(0x360);
          if (uVar9 == 0) {
            uVar9 = 0;
          }
          else {
            uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
            uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
            uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
            uVar9 = F_009cd0c0(uVar9 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                                 local_c,0xffffffff,(float)(int)(uVar10 * local_c));
          }
          F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
        }
        else if (uVar9 == 1) {
          uVar9 = 0;
          do {
            if (local_c != uVar9) {
              if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8172: ;
                uVar10 = 0;
              }
              else {
                piVar8 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
                REFG(int, 0x14a09e8) = *piVar8;
                REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
                if (piVar8 == ((int *)GEN_TOP(0x0))) goto LAB_009d8172;
                uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
                uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
                uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
                uVar10 = F_009cd0c0(piVar8 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,
                                      param_4,local_c,uVar9,(float)(int)(uVar10 * uVar9));
              }
              F_0097e5c0(param_1 GEN_EDX_ARG,uVar10);
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar4);
        }
        local_c = local_c + 1;
        if ((int)uVar4 <= (int)local_c) {
          return local_c;
        }
      } while( true );
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
    if (uVar4 != 0) {
      if (uVar4 - 1 != 0) {
        return uVar4 - 1;
      }
      piVar8 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x1d4))) + 0x270)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG);
      local_10 = 0;
      if ((int)uVar4 < 1) {
        return uVar4;
      }
      do {
        uVar9 = F_009df120(0x360);
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar2 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc)));
          uVar3 = *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4)));
          uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
          uVar9 = F_009cd0c0(uVar9 GEN_EDX_ARG,uVar3,param_1,uVar2,piVar6,piVar5,param_2,param_3,param_4,
                               0xffffffff,local_10,(float)(int)(uVar10 * local_10));
        }
        F_0097e5c0(param_1 GEN_EDX_ARG,uVar9);
        local_10 = local_10 + 1;
      } while ((int)local_10 < (int)uVar4);
      return local_10;
    }
    uVar4 = F_009df120(0x360);
    if (uVar4 != 0) {
      uVar4 = F_009cd0c0(uVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))),param_1,
                           *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))),piVar6,piVar5,param_2,param_3,
                           param_4,0xffffffff,0xffffffff,(float)(float10)0);
      uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
      return uVar4;
    }
    break;
  case 3: ;
    if (REFG(int, 0x14a09e8) != -1) {
      piVar7 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
      REFG(int, 0x14a09e8) = *piVar7;
      REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        uVar4 = F_009d76b0(piVar7 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)param_1 + 0x1d4))),param_1,
                             *((undefined4 *)GEN_TOP(((int)param_1 + 0x1dc))),piVar6,piVar5,param_2,param_3,
                             param_4);
        uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
        return uVar4;
      }
    }
    break;
  default: ;
    goto switchD_009d7c29_default;
  }
  uVar4 = F_0097e5c0(param_1 GEN_EDX_ARG,0);
switchD_009d7c29_default: ;
  return uVar4;
}

/* ref: Apricot::Engine::Instance::RandomTriggerClipInstance::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d83e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x9d83e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int iVar1;
  int * this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x1f0) + 4)));
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x1f0) + 8)));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_FWD);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar3 = REFG(undefined4, 0x13301e8) << 0xb ^ REFG(undefined4, 0x13301e8);
  uVar3 = REFG(undefined4, 0x13301dc) >> 0x13 ^ uVar3 ^ uVar3 >> 8 ^ REFG(undefined4, 0x13301dc);
  iVar4 = ((iVar4 - iVar1) + 1) * (uVar3 & 0xffff);
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  uVar2 = REFG(undefined4, 0x13301e0);
  REFG(undefined4, 0x13301e0) = REFG(undefined4, 0x13301dc);
  REFG(undefined4, 0x13301dc) = uVar3;
  REFG(undefined4, 0x13301e8) = REFG(undefined4, 0x13301e4);
  while ((REFG(undefined4, 0x13301e4) = uVar2, this_00 != ((int *)GEN_TOP(0x0)) &&
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG), uVar3 != 2))) {
    this_00 = ((int *)GEN_TOP(this_00[0x76]));
    uVar2 = REFG(undefined4, 0x13301e4);
  }
  F_009d7ab0(this_00 GEN_EDX_ARG,((int)((iVar4 >> 0x1f & 0xffffU) + iVar4) >> 0x10) + iVar1);
  uVar3 = *(uint *)(this + 0x1d0);
  if ((uVar3 & 0x40000) != 0) {
    return uVar3;
  }
  *(uint *)(this + 0x1d0) = uVar3 & 0xf81fffff | 0x40000;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar3;
}

/* ref: Apricot::Engine::Instance::TriggerClipInstance::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d84d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x9d84d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this_00 = *(int * PTR32 *)(this + 0x1d8);
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1f0) + 4)));
  while ((this_00 != ((int *)GEN_TOP(0x0)) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_FWD), uVar2 != 2))) {
    this_00 = ((int *)GEN_TOP(this_00[0x76]));
  }
  F_009d7ab0(this_00 GEN_EDX_ARG,uVar1);
  uVar2 = *(uint *)(this + 0x1d0);
  if ((uVar2 & 0x40000) != 0) {
    return uVar2;
  }
  *(uint *)(this + 0x1d0) = uVar2 & 0xf81fffff | 0x40000;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_009d8540 */
GEN_OWN GEN_NOFRAME uint F_009d8540(void)
{
  GEN_ENTER(0x9d8540u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  REFG(undefined1, 0x14a06d5) = 0;
  REFG(undefined1, 0x14a06d4) = 0;
  pvVar1 = ((undefined *)GEN_TOP(F_004069f0(0x100)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    REFG(undefined4, 0x14a09a8) = 0;
  }
  else {
    REFG(undefined4, 0x14a09a8) = F_009cba80(pvVar1 GEN_EDX_ARG);
  }
  puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(0x170)));
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    REFG(undefined4 * PTR32, 0x14a09a4) = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10de6fc));
    puVar4 = &REFG(float, 0x1302d00);
    puVar5 = puVar2 + 4;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    F_00982d80(puVar2 + 4 GEN_EDX_ARG,0);
    *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x10defe0));
    REFG(undefined4 * PTR32, 0x14a09a4) = puVar2;
  }
  pvVar1 = ((undefined *)GEN_TOP(F_004069f0(0x280)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    REFG(undefined4, 0x14a09a0) = 0;
  }
  else {
    REFG(undefined4, 0x14a09a0) = F_009d77f0(pvVar1 GEN_EDX_ARG);
  }
  pvVar1 = F_00c48350(&REFG(undefined4, 0x14a0720),0,0x280);
  return (uint)pvVar1;
}

/* ref: FUN_009d8600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d8600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9d8600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if ((-1 < (int)param_1) && (-1 < param_2)) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1e0)));
    while (0 < (int)uVar1) {
      uVar1 = uVar1 - 1;
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return uVar1;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1e8)));
    }
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar1 = F_009d7ab0(this_00 GEN_EDX_FWD,param_2 - 1);
    }
  }
  return uVar1;
}

/* ref: FUN_009d8640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d8640(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9d8640u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x77])) + 0x2c))))
                            (((int *)GEN_TOP(param_1[0x77])) GEN_EDX_ARG,(int)*((short *)GEN_TOP((param_4 + 2))))));
  uVar4 = F_0097fa40(piVar3);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
  if (uVar5 != 0xffffffff) {
    piVar6 = ((int *)GEN_TOP(param_1[0x77]));
    iVar7 = *piVar6;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG);
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x24))))(piVar6,uVar5)));
    if (*((int *)GEN_TOP((param_1[0x75] + 0x270))) == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x18))))(piVar6 GEN_EDX_ARG);
      if (uVar5 != 3) {
        if (REFG(int, 0x14a09e8) != -1) {
          iVar7 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *((int *)GEN_TOP((iVar7 + REFG(int, 0x14a09f4))));
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
          iVar7 = iVar7 + REFG(int, 0x14a09f4);
          if (iVar7 != 0) {
            iVar1 = param_1[0x77];
            iVar2 = param_1[0x75];
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
            uVar4 = F_009d7230(iVar7 GEN_EDX_ARG,iVar2,param_1,iVar1,(uint)piVar3,param_2,(float)(int)uVar4,
                                 param_3,uVar5);
            goto LAB_009d87d0;
          }
        }
        goto LAB_009d87ce;
      }
    }
    F_009d7bb0(param_1 GEN_EDX_ARG,param_3,param_2,(float)(int)uVar4);
    goto LAB_009d87d8;
  }
  if (REFG(int, 0x14a09e8) == -1) {
LAB_009d87ce: ;
    uVar4 = 0;
  }
  else {
    piVar6 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
    REFG(int, 0x14a09e8) = *piVar6;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
    if (piVar6 == ((int *)GEN_TOP(0x0))) goto LAB_009d87ce;
    iVar7 = param_1[0x77];
    iVar1 = param_1[0x75];
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
    uVar4 = F_009d7230(piVar6 GEN_EDX_ARG,iVar1,param_1,iVar7,(uint)piVar3,param_2,(float)(int)uVar4,param_3,
                         uVar5);
  }
LAB_009d87d0: ;
  F_0097e5c0(param_1 GEN_EDX_ARG,uVar4);
LAB_009d87d8: ;
  uVar4 = param_1[0x74];
  uVar4 = (uVar4 - 1 ^ uVar4) & 0x1ff ^ uVar4;
  param_1[0x74] = ((uint)((uVar4 & 0x1ff) == 0) * 0x20000000 ^ uVar4) & 0x20000000 ^ uVar4;
  return uVar4;
}

/* ref: FUN_009d8820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d8820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d8820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x1d0))) >> 0x13;
  if ((uVar3 & 1) == 0) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x1a8)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_FWD);
    iVar7 = 0;
    uVar6 = 1;
    uVar3 = uVar4;
    if (0 < (int)uVar4) {
      do {
        if ((*((uint *)GEN_TOP(((int)this + 500))) & uVar6) == 0) {
          pbVar5 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) + 8))))
                                     (*((int * PTR32 *)GEN_TOP(((int)this + 0x1f0))) GEN_EDX_ARG,iVar7)));
          uVar3 = (uint)(*(short *)((int)(uintptr_t)pbVar5) >> 2);
          fVar2 = (float)((float10)fVar1 - (float10)(int)uVar3);
          if (!((float10)fVar2 < (float10)0)) {
            *((uint *)GEN_TOP(((int)this + 500))) = *((uint *)GEN_TOP(((int)this + 500))) | uVar6;
            if (*((int *)GEN_TOP(((int)this + 500))) == -1) {
              *((gen_code32 *)GEN_TOP(((int)this + 0x1ec))) = ((code *)REFP(0x97fac0));
            }
            if ((*pbVar5 & 3) != 0) {
              uVar3 = F_009d8640(this GEN_EDX_ARG,fVar2,iVar7,pbVar5);
            }
          }
        }
        iVar7 = iVar7 + 1;
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
      } while (iVar7 < (int)uVar4);
    }
  }
  return uVar3;
}

/* ref: FUN_009d88e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d88e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined4 * param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x9d88e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;)
  uint uVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  
  F_0099a240(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_6,param_7,(float)(float10)1,(float)(float10)0,
               (float)(float10)0);
  param_1[0x7c] = param_5;
  *param_1 = (*(undefined * PTR32 (*)[31])REFP(0x10e0b04));
  param_1[0x7b] = ((code *)REFP(0x9d8820));
  param_1[0x7d] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[1] = *param_8;
  param_1[2] = param_8[1];
  param_1[3] = param_8[2];
  param_1[4] = param_8[3];
  param_1[5] = param_8[4];
  param_1[6] = param_8[5];
  param_1[7] = param_8[6];
  param_1[8] = param_8[7];
  param_1[9] = param_8[8];
  param_1[10] = param_8[9];
  param_1[0xb] = param_8[10];
  param_1[0xc] = param_8[0xb];
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7c])) + 4))))(((int *)GEN_TOP(param_1[0x7c])) GEN_EDX_ARG);
  iVar4 = 0;
  param_7 = 0.0;
  uVar3 = 1;
  if (0 < (int)uVar1) {
    do {
      pbVar2 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0x7c])) + 8))))(((int *)GEN_TOP(param_1[0x7c])) GEN_EDX_ARG,iVar4)));
      if ((*pbVar2 & 3) != 0) {
        param_1[0x7d] = param_1[0x7d] & ~uVar3;
        param_7 = gen_bits2f((int)gen_fl2bits(param_7) + 1);
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (iVar4 < (int)uVar1);
  }
  uVar3 = (param_1[0x74] ^ (uint)gen_fl2bits(param_7)) & 0x1ff ^ param_1[0x74];
  param_1[0x74] = ((uint)((uVar3 & 0x1ff) == 0) * 0x20000000 ^ uVar3) & 0x20000000 ^ uVar3;
  return (uint)param_1;
}

/* ref: FUN_009d8a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d8a20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0x9d8a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  float10 fVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  fVar1 = (float10)0;
  F_0099a240(param_1 GEN_EDX_FWD,param_1,0,param_2,(float)fVar1,(float)fVar1,(float)(float10)1,(float)fVar1,
               (float)fVar1);
  uVar4 = (uint)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(uint *)(param_1 + 0x270) = param_3;
  *(undefined4 *)(param_1 + 0x3a0) = param_4;
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[33])REFP(0x10df79c));
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(uint *)(param_1 + 0x318) = uVar4;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(ushort *)(param_1 + 0x3ac) = *(ushort *)(param_1 + 0x3ac) & 0x8bff | 0x800;
  if (REFG(int, 0x14a09e8) == -1) {
    piVar3 = ((int *)GEN_TOP(0x0));
  }
  else {
    piVar3 = ((int *)GEN_TOP((REFG(int, 0x14a09e8) * 0x400 + REFG(int, 0x14a09f4))));
    REFG(int, 0x14a09e8) = *piVar3;
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
  }
  *(int * PTR32 *)(param_1 + 0x1ec) = piVar3;
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    if ((*(uint *)(param_1 + 0x1d0) & 0x40000) == 0) {
      *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) & 0xf81fffff | 0x40000;
      return (uint)param_1;
    }
  }
  else {
    piVar3[0x25] = 0;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc0))))(param_2);
    *((float *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x30))) = (float)extraout_ST0;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_2 + 0xc4))))(param_2);
    *((float *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x34))) = (float)extraout_ST0_00;
    extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_2 + 200))))(param_2);
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *((float *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x38))) = (float)extraout_ST0_01;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x3c))) = uVar2;
    *(undefined4 *)(param_1 + 0x2f4) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x2fc) = 0;
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x304) = 0;
    *(undefined4 *)(param_1 + 0x308) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    *(undefined4 *)(param_1 + 0x314) = 0;
    F_00c48350(param_1 + 0x1f0,0,0x40);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0xec))))(*(int * PTR32 *)(param_1 + 0x1dc) GEN_EDX_ARG);
    if (uVar4 == 0) {
      *(gen_code32 *)(param_1 + 0x3b0) = ((code *)REFP(0x97e200));
    }
    else if (uVar4 == 1) {
      *(gen_code32 *)(param_1 + 0x3b0) = ((code *)REFP(0x97e260));
    }
    else if (uVar4 == 2) {
      *(gen_code32 *)(param_1 + 0x3b0) = ((code *)REFP(0x9d3ea0));
    }
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    **(undefined4 * PTR32 *)(param_1 + 0x1ec) = REFG(float, 0x1087f04);
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 4))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 8))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0xc))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x10))) = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1ec) + 0x14))) = uVar2;
    F_009abfa0(param_1 GEN_EDX_ARG,param_5);
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x5c))))(*(int * PTR32 *)(param_1 + 0x1dc) GEN_EDX_ARG);
    param_2 = ((int *)GEN_TOP(0x0));
    if (uVar4 != 0) {
      do {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x1dc) + 0x28))))
                                  (*(int * PTR32 *)(param_1 + 0x1dc) GEN_EDX_ARG,param_2)));
        param_3 = 0;
        uVar7 = 0;
        do {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10))))(piVar3 GEN_EDX_ARG,uVar7);
          if (*((short *)GEN_TOP((uVar5 + 2))) != -1) {
            param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1090708)));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xc);
        if (REFG(int, 0x14a09e8) != -1) {
          iVar6 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *((int *)GEN_TOP((REFG(int, 0x14a09f4) + iVar6)));
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
          iVar6 = REFG(int, 0x14a09f4) + iVar6;
          if ((iVar6 != 0) &&
             (piVar3 = ((int *)GEN_TOP(F_009d88e0(iVar6 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x1d4),param_1,
                                           *(undefined4 *)(param_1 + 0x1dc),piVar3,(float)(float10)0
                                           ,GEN_ARGF(gen_bits2f(param_3)),param_1 + 4))), piVar3 != ((int *)GEN_TOP(0x0))))
          {
            uVar7 = *(uint *)(param_1 + 0x1d0);
            *(uint *)(param_1 + 0x1d0) = ((uVar7 & 0xfffffe00) + 0x200 ^ uVar7) & 0x3fe00 ^ uVar7;
            if (*(int *)(param_1 + 0x1e4) == 0) {
              *(int * PTR32 *)(param_1 + 0x1e0) = piVar3;
            }
            else {
              *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x1e4) + 0x1e8))) = piVar3;
            }
            *(int * PTR32 *)(param_1 + 0x1e4) = piVar3;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
          }
        }
        param_2 = ((int *)GEN_TOP(((int)param_2 + 1)));
      } while (param_2 < uVar4);
    }
  }
  return (uint)param_1;
}

/* ref: FUN_009d8d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d8d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d8d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short * psVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  uint local_c;
  int local_8;
  
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000))) != 0) {
    uVar8 = 0;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 0x158)));
      iVar2 = (uint)uVar8 * 2 + 0x39000;
      iVar7 = (uint)*((ushort *)GEN_TOP((iVar5 + iVar2))) * 0x68;
      if (*((int *)GEN_TOP((iVar7 + 0x103c + iVar5))) == 3) {
        puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar7 + iVar5 + 0x1030)));
        if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_FWD,1);
        }
        iVar5 = *((int *)GEN_TOP(((int)this + 0x158)));
        *((undefined2 *)GEN_TOP((iVar5 + iVar2))) =
             *((undefined2 *)GEN_TOP((iVar5 + 0x38ffe + (uint)*((ushort *)GEN_TOP((iVar5 + 0x3a000))) * 2)));
        psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000)));
        *psVar1 = *psVar1 - 1;
      }
      else {
        uVar8 = uVar8 + 1;
      }
    } while (uVar8 < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000))));
  }
  local_c = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000)));
  uVar6 = 0;
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar5 = *((int *)GEN_TOP(((int)this + 0x158)));
      uVar8 = *((ushort *)GEN_TOP((local_8 + iVar5)));
      iVar2 = (uint)uVar8 * 0x68 + 0x1000 + iVar5;
      bVar3 = *((byte *)GEN_TOP((iVar2 + 0x62)));
      uVar6 = CONCAT31((int3)((uint)iVar5 >> 8),bVar3);
      if ((bVar3 & 8) != 0) {
        if ((bVar3 & 4) == 0) {
          if (*((int *)GEN_TOP((iVar2 + 0x3c))) == 4) {
            puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0x30)));
            if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
            }
            if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8e8f: ;
              uVar6 = 0;
            }
            else {
              iVar5 = REFG(int, 0x14a09e8) * 0x400;
              REFG(int, 0x14a09e8) = *((int *)GEN_TOP((REFG(int, 0x14a09f4) + iVar5)));
              REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
              iVar5 = REFG(int, 0x14a09f4) + iVar5;
              if (iVar5 == 0) goto LAB_009d8e8f;
              uVar6 = F_009d8a20(iVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar2 + 0x34))),*((uint *)GEN_TOP((iVar2 + 0x38))),
                                   (uint)uVar8,iVar2);
            }
            *((uint *)GEN_TOP((iVar2 + 0x30))) = uVar6;
            uVar6 = F_0098b780(uVar6 GEN_EDX_ARG,iVar2 + 0x48);
            *((undefined4 *)GEN_TOP((iVar2 + 0x3c))) = 2;
            if ('\0' < (char)*((byte *)GEN_TOP((iVar2 + 0x5e)))) {
              *((short *)GEN_TOP((iVar2 + 0x60))) = 1 << GEN_SHC(*((byte *)GEN_TOP((iVar2 + 0x5e))), *((byte *)GEN_TOP((iVar2 + 0x5e))));
            }
          }
        }
        else {
          *((undefined4 *)GEN_TOP((iVar2 + 0x3c))) = 4;
        }
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar6;
}

/* ref: FUN_009d8ed0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d8ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d8ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  uint local_c;
  int local_8;
  
  local_c = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a000)));
  uVar5 = 0;
  if (local_c != 0) {
    local_8 = 0x39000;
    do {
      iVar4 = *((int *)GEN_TOP(((int)this + 0x158)));
      uVar1 = *((ushort *)GEN_TOP((local_8 + iVar4)));
      iVar6 = (uint)uVar1 * 0x68;
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((iVar6 + 0x1030 + iVar4)));
      iVar6 = iVar6 + 0x1000 + iVar4;
      uVar5 = CONCAT22((short)((uint)iVar4 >> 0x10),*(ushort *)(puVar2 + 0xeb) >> 0xe);
      if ((*(ushort *)(puVar2 + 0xeb) >> 0xe & 1) != 0) {
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
        }
        if (REFG(int, 0x14a09e8) == -1) {
LAB_009d8f74: ;
          uVar5 = 0;
        }
        else {
          iVar4 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *((int *)GEN_TOP((REFG(int, 0x14a09f4) + iVar4)));
          REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) - 1;
          iVar4 = REFG(int, 0x14a09f4) + iVar4;
          if (iVar4 == 0) goto LAB_009d8f74;
          uVar5 = F_009d8a20(iVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar6 + 0x34))),*((uint *)GEN_TOP((iVar6 + 0x38))),
                               (uint)uVar1,iVar6);
        }
        *((uint *)GEN_TOP((iVar6 + 0x30))) = uVar5;
        uVar5 = F_0098b780(uVar5 GEN_EDX_ARG,iVar6 + 0x48);
        *((undefined1 *)GEN_TOP((iVar6 + 0x5e))) = 0;
        *((undefined2 *)GEN_TOP((iVar6 + 0x60))) = 0;
      }
      if (*((int *)GEN_TOP((iVar6 + 0x3c))) != 4) {
        if (*((short *)GEN_TOP((iVar6 + 0x60))) != 0) {
          uVar7 = 0;
          uVar5 = 1;
          do {
            if ((((uVar5 & *((ushort *)GEN_TOP((iVar6 + 0x60)))) != 0) && (-1 < (int)uVar7)) &&
               (this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 0x30))) + 0x1e0))), this_00 != ((undefined *)GEN_TOP(0x0)))) {
              F_009d7ab0(this_00 GEN_EDX_ARG,uVar7 - 1);
            }
            uVar7 = uVar7 + 1;
            uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
          } while (uVar7 < 0x10);
          *((undefined2 *)GEN_TOP((iVar6 + 0x60))) = 0;
        }
        piVar3 = *((int * PTR32 *)GEN_TOP((iVar6 + 0x30)));
        if ((*(ushort *)(piVar3 + 0xeb) >> 10 & 1) == 0) {
          fVar8 = GEN_X87((float10)*((float *)GEN_TOP(((int)this + 0x160))) * (float10)*((float *)GEN_TOP((iVar6 + 0x58))));
        }
        else {
          fVar8 = (float10)0;
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x28))))(piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)fVar8));
      }
      local_8 = local_8 + 2;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  return uVar5;
}

/* ref: FUN_009d9020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d9020(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9d9020u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar3 = (float10)*((int *)GEN_TOP(((int)param_1 + 0x15c)));
  if (*((int *)GEN_TOP(((int)param_1 + 0x15c))) < 0) {
    fVar3 = GEN_X87(fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1568))) = 0;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1164))) = 0;
  *((float *)GEN_TOP(((int)param_1 + 0x160))) = ((float)GEN_TOF((((float10)param_2 * fVar1) / fVar3)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x150))) + 0x68))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x150))) GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)param_1 + 0x150))) + 0x50))))(*((int * PTR32 *)GEN_TOP(((int)param_1 + 0x150))) GEN_EDX_ARG);
  F_009789e0(param_1 GEN_EDX_ARG);
  F_009d8d50(param_1 GEN_EDX_ARG);
  uVar2 = F_009d8ed0(param_1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_009d9090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d9090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x9d9090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  short * psVar1;
  undefined4 * puVar2;
  byte * pbVar3;
  int * piVar4;
  undefined4 uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x150)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_FWD);
  if (0xf < REFG(undefined4, 0x14a09f0)) {
    iVar9 = 0;
    piVar6 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1030)));
    do {
      if (*piVar6 == 0) {
        if (REFG(int, 0x14a09e8) != -1) {
          iVar7 = REFG(int, 0x14a09e8) * 0x400;
          REFG(int, 0x14a09e8) = *((int *)GEN_TOP((REFG(int, 0x14a09f4) + iVar7)));
          REFG(undefined4, 0x14a09f0) = REFG(undefined4, 0x14a09f0) - 1;
          iVar7 = REFG(int, 0x14a09f4) + iVar7;
          if (iVar7 != 0) {
            uVar8 = F_009d8a20(iVar7 GEN_EDX_ARG,param_1,param_2,iVar9,param_3);
            goto LAB_009d912f;
          }
        }
        uVar8 = 0;
LAB_009d912f: ;
        piVar6 = ((int *)GEN_TOP(((int)this + 0x1570)));
        *piVar6 = *piVar6 + 1;
        if (*piVar6 == 0) {
          *((undefined4 *)GEN_TOP(((int)this + 0x1570))) = 1;
        }
        iVar10 = iVar9 * 0x68;
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1030 + iVar10))) = uVar8;
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1034 + iVar10))) = param_1;
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1038 + iVar10))) = param_2;
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x103c + iVar10))) = 1;
        uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1000 + iVar10)));
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
        puVar2[2] = param_3[2];
        puVar2[3] = param_3[3];
        puVar2[4] = param_3[4];
        puVar2[5] = param_3[5];
        puVar2[6] = param_3[6];
        puVar2[7] = param_3[7];
        puVar2[8] = param_3[8];
        puVar2[9] = param_3[9];
        puVar2[10] = param_3[10];
        puVar2[0xb] = param_3[0xb];
        *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1060 + iVar10))) = 0;
        *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x105e + iVar10))) = 0;
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1058 + iVar10))) = uVar5;
        iVar7 = *((int *)GEN_TOP(((int)this + 0x158)));
        *((undefined4 *)GEN_TOP((iVar7 + 0x1048 + iVar10))) = uVar5;
        *((undefined4 *)GEN_TOP((iVar7 + 0x104c + iVar10))) = uVar5;
        *((undefined4 *)GEN_TOP((iVar7 + 0x1050 + iVar10))) = uVar5;
        *((undefined4 *)GEN_TOP((iVar7 + 0x1054 + iVar10))) = uVar5;
        pbVar3 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 | 1;
        pbVar3 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 & 0xfd;
        pbVar3 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 & 0xfb;
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar8 + 0x1dc))) + 0xdc))))(*((int * PTR32 *)GEN_TOP((uVar8 + 0x1dc))) GEN_EDX_ARG);
        pbVar3 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1062 + iVar10)));
        *pbVar3 = *pbVar3 ^ ((char)uVar8 << 3 ^
                            *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1062 + iVar10)))) & 8;
        *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x1044 + iVar10))) = iVar9;
        *((undefined4 *)GEN_TOP(((iVar9 + 0x28) * 0x68 + *((int *)GEN_TOP(((int)this + 0x158)))))) =
             *((undefined4 *)GEN_TOP(((int)this + 0x1570)));
        *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3a002 +
                  (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3b002))) * 2))) = (short)iVar9;
        psVar1 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x158))) + 0x3b002)));
        *psVar1 = *psVar1 + 1;
        iVar9 = *((int *)GEN_TOP(((int)this + 0x158)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
        return iVar9 + 0x1000 + iVar10;
      }
      iVar9 = iVar9 + 1;
      piVar6 = piVar6 + 0x1a;
    } while (iVar9 < 0x800);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_009d9320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d9320(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5), GEN_P(float param_7, float gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7), GEN_P(undefined1 param_9, unsigned int gen_a8))
{
  GEN_ENTER(0x9d9320u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_PIN(float param_7 = (float)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_PIN(undefined1 param_9 = (undefined1)gen_a8;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_3 != 0) {
    if (param_5 == ((undefined4 *)GEN_TOP(0x0))) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f428)));
      (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f42c)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f430)));
      (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f434)));
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f438)));
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f43c)));
      (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f440)));
      (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f444)));
      (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f448)));
      (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f44c)));
      (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f450)));
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x132f454)));
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = *param_5;
      (*(undefined4 *)(gen_frame + 0x4)) = param_5[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_5[2];
      (*(undefined4 *)(gen_frame + 0xc)) = param_5[4];
      (*(undefined4 *)(gen_frame + 0x10)) = param_5[5];
      (*(undefined4 *)(gen_frame + 0x14)) = param_5[6];
      (*(undefined4 *)(gen_frame + 0x18)) = param_5[8];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_5[9];
      (*(undefined4 *)(gen_frame + 0x20)) = param_5[10];
      (*(undefined4 *)(gen_frame + 0x24)) = param_5[0xc];
      (*(undefined4 *)(gen_frame + 0x28)) = param_5[0xd];
      uVar4 = param_5[0xe];
    }
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar4;
    uVar2 = F_009d9090(param_1 GEN_EDX_FWD,param_3,param_4,&(*(undefined4 *)(gen_frame + 0x0)));
    if (uVar2 != 0) {
      *((float *)GEN_TOP((uVar2 + 0x58))) = param_6;
      *((undefined1 *)GEN_TOP((uVar2 + 0x5c))) = param_8;
      *((undefined1 *)GEN_TOP((uVar2 + 0x5d))) = param_9;
      if (*((int *)GEN_TOP((uVar2 + 0x30))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x30))) + 0x270)));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,uVar2);
        }
        iVar3 = (int)param_7;
        if (0 < iVar3) {
          do {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x30))) + 0x24))))
                      (*((int * PTR32 *)GEN_TOP((uVar2 + 0x30))) GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)1));
            iVar3 = iVar3 - 1;
          } while (iVar3 != 0);
        }
      }
      uVar4 = *((undefined4 *)GEN_TOP((uVar2 + 0x40)));
      param_2[1] = *((undefined4 *)GEN_TOP((uVar2 + 0x44)));
      *param_2 = uVar4;
      return (uint)param_2;
    }
  }
  param_2[1] = 0;
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_009d94e0 */
GEN_OWN GEN_FRAME uint F_009d94e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x9d94e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  uVar1 = F_009d9020(&REFG(float, 0x14a0d58) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_009d9520 */
GEN_OWN GEN_FRAME ulonglong F_009d9520(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x9d9520u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ulonglong * puVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  puVar1 = ((ulonglong *)GEN_TOP(F_009d9320(&REFG(float, 0x14a0d58) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,param_3,param_4,param_5,
                        (undefined1)param_6,(undefined1)param_7)));
  return *puVar1;
}

/* ref: FUN_009d9590 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009d9590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x96))) & 1) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 8)));
    iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar3 == 1) {
      F_009a4cc0(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))));
      uVar4 = F_009d9520(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 0x60))),
                           *((undefined4 *)GEN_TOP(((int)this + 0x48))),this,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x58)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x5c)))),(uint)*((byte *)GEN_TOP(((int)this + 0x94))),
                           (uint)*((byte *)GEN_TOP(((int)this + 0x95))));
      *((ulonglong *)GEN_TOP(((int)this + 0x50))) = uVar4;
      F_009a4e20((int)uVar4,(int)(uVar4 >> 0x20),*((byte *)GEN_TOP(((int)this + 0x96))) >> 2 & 1);
      F_009a4e90(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))),
                   *((byte *)GEN_TOP(((int)this + 0x96))) >> 3 & 1);
      F_009a4f70(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x80)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x8c)))));
      F_009a5020(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x60)))));
      F_009a50b0(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 100)))));
      if ((*((byte *)GEN_TOP(((int)this + 0x96))) & 2) != 0) {
        F_009a4d50(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))));
        *((byte *)GEN_TOP(((int)this + 0x96))) = *((byte *)GEN_TOP(((int)this + 0x96))) & 0xfd;
      }
      iVar3 = 0;
      uVar2 = 1;
      do {
        if ((*((uint *)GEN_TOP(((int)this + 0x90))) & uVar2) != 0) {
          F_009a4f00(*((undefined4 *)GEN_TOP(((int)this + 0x50))),*((undefined4 *)GEN_TOP(((int)this + 0x54))),0,iVar3);
        }
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      } while (iVar3 < 0x20);
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44)));
      *((byte *)GEN_TOP(((int)this + 0x96))) = *((byte *)GEN_TOP(((int)this + 0x96))) & 0xfe;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,this);
      }
    }
  }
  return;
}

/* ref: FUN_009d9700 */
GEN_OWN GEN_FRAME uint F_009d9700(void)
{
  GEN_ENTER(0x9d9700u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x12018, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined * this;
  int * piVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  float10 fVar12;
  
  uVar8 = 0x2014;
  (*(int *)(gen_frame + 0x12010)) = 0x9d970d;
  if (REFG(char, 0x14a06d5) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
    piVar11 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14a0a70)));
    iVar9 = 0;
    (*(int *)(gen_frame + 0x12010)) = 0;
    if (piVar11 != REFG(int * PTR32, 0x14a0a70)) {
      do {
        iVar10 = *((int *)GEN_TOP((piVar11[3] + 0x174)));
        if (((iVar10 == 0) ||
            ((bVar7 = F_009a4da0(*((undefined4 *)GEN_TOP((iVar10 + 0x50))),*((undefined4 *)GEN_TOP((iVar10 + 0x54)))),
             iVar9 = (*(int *)(gen_frame + 0x12010)), bVar7 == 0 && ((*((byte *)GEN_TOP((iVar10 + 0x96))) & 1) == 0)))) &&
           (iVar9 < 0x800)) {
          ((int *)(gen_frame + 0x10000))[(int)(iVar9)] = piVar11[3];
          iVar9 = iVar9 + 1;
          (*(int *)(gen_frame + 0x12010)) = iVar9;
        }
        if (*((char *)GEN_TOP(((int)piVar11 + 0x11))) == '\0') {
          piVar4 = ((int *)GEN_TOP(piVar11[2]));
          if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
            cVar3 = *((char *)GEN_TOP((*piVar4 + 0x11)));
            piVar11 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
            while (cVar3 == '\0') {
              cVar3 = *((char *)GEN_TOP((*piVar4 + 0x11)));
              piVar11 = piVar4;
              piVar4 = ((int *)GEN_TOP(*piVar4));
            }
          }
          else {
            cVar3 = *((char *)GEN_TOP((piVar11[1] + 0x11)));
            piVar6 = ((int *)GEN_TOP(piVar11[1]));
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar3 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar11[2]))))) {
              cVar3 = *((char *)GEN_TOP((piVar11[1] + 0x11)));
              piVar6 = ((int *)GEN_TOP(piVar11[1]));
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != REFG(int * PTR32, 0x14a0a70));
    }
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        puVar5 = ((undefined4 *)GEN_TOP(((int *)(gen_frame + 0x10000))[(int)(iVar10)]));
        if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
          iVar9 = (*(int *)(gen_frame + 0x12010));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    piVar11 = ((int *)GEN_TOP(*REFG(int * PTR32, 0x14a0a80)));
    (*(int *)(gen_frame + 0x12010)) = 0;
    if (piVar11 != REFG(int * PTR32, 0x14a0a80)) {
      do {
        F_009d9590(((undefined *)GEN_TOP(piVar11[3])) GEN_EDX_ARG);
        iVar9 = piVar11[3];
        if ((*((byte *)GEN_TOP((iVar9 + 0x96))) & 0x10) != 0) {
          uVar8 = *((uint *)GEN_TOP((iVar9 + 0x54)));
          (*(float *)(gen_frame + 0x12008)) = gen_bits2f(iVar9);
          (*(int *)(gen_frame + 0x12000)) = *((int *)GEN_TOP((iVar9 + 0x50)));
          if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
            F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
            F_00c47de6(((code *)REFP(0x107c350)));
          }
          if ((((((0x7ff < uVar8) || ((*(int *)(gen_frame + 0x12000)) == 0)) ||
                (iVar10 = uVar8 * 0x68, iVar9 = iVar10 + 0x1000 + REFG(int, 0x14a0eb0),
                *((int *)GEN_TOP((iVar10 + 0x1040 + REFG(int, 0x14a0eb0)))) != (*(int *)(gen_frame + 0x12000)))) ||
               (iVar10 = *((int *)GEN_TOP((iVar9 + 0x3c))), iVar10 == 3)) ||
              ((iVar10 != 4 &&
               ((iVar9 = *((int *)GEN_TOP((iVar9 + 0x30))), iVar9 == 0 ||
                (((*((uint *)GEN_TOP((iVar9 + 0x1d0))) & 0x40000) != 0 && (*((int *)GEN_TOP((iVar9 + 0x1e0))) == 0))))))))
             && ((*((byte *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x12008))) + 0x96))) & 1) == 0)) {
            ((int *)(gen_frame + 0x10000))[(int)((*(int *)(gen_frame + 0x12010)))] = piVar11[3];
            (*(int *)(gen_frame + 0x12010)) = (*(int *)(gen_frame + 0x12010)) + 1;
          }
        }
        if (*((char *)GEN_TOP(((int)piVar11 + 0x11))) == '\0') {
          piVar4 = ((int *)GEN_TOP(piVar11[2]));
          if (*((char *)GEN_TOP(((int)piVar4 + 0x11))) == '\0') {
            cVar3 = *((char *)GEN_TOP((*piVar4 + 0x11)));
            piVar11 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
            while (cVar3 == '\0') {
              cVar3 = *((char *)GEN_TOP((*piVar4 + 0x11)));
              piVar11 = piVar4;
              piVar4 = ((int *)GEN_TOP(*piVar4));
            }
          }
          else {
            cVar3 = *((char *)GEN_TOP((piVar11[1] + 0x11)));
            piVar6 = ((int *)GEN_TOP(piVar11[1]));
            piVar4 = piVar11;
            while ((piVar11 = piVar6, cVar3 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar11[2]))))) {
              cVar3 = *((char *)GEN_TOP((piVar11[1] + 0x11)));
              piVar6 = ((int *)GEN_TOP(piVar11[1]));
              piVar4 = piVar11;
            }
          }
        }
      } while (piVar11 != REFG(int * PTR32, 0x14a0a80));
    }
    iVar9 = 0;
    if (0 < (*(int *)(gen_frame + 0x12010))) {
      do {
        this = ((undefined *)GEN_TOP(((int *)(gen_frame + 0x10000))[(int)(iVar9)]));
        if (this != ((undefined *)GEN_TOP(0x0))) {
          F_009cfa70(this GEN_EDX_ARG);
          F_00406ad0(this);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (*(int *)(gen_frame + 0x12010)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x14a0a8c));
    (*(bool *)(gen_frame + 0x1200c)) = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x30))) == 0;
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    iVar9 = REFG(int, 0x14a09a8);
    REFG(undefined1, 0x14a22cc) = (*(bool *)(gen_frame + 0x1200c));
    if ((REFG(int, 0x137104c) != 0) &&
       (uVar8 = F_00414500(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,0x6f), iVar10 = REFG(int, 0x1371298),
       *((int *)GEN_TOP((uVar8 + 0x14))) != 0)) {
      uVar1 = *((undefined4 *)GEN_TOP((iVar9 + 0xd8)));
      uVar2 = *((undefined4 *)GEN_TOP((iVar9 + 0xdc)));
      *((undefined4 *)GEN_TOP((REFG(int, 0x1371298) + 0x10))) = *((undefined4 *)GEN_TOP((iVar9 + 0xd4)));
      *((undefined4 *)GEN_TOP((iVar10 + 0x14))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar10 + 0x18))) = uVar2;
      iVar10 = REFG(int, 0x1371298);
      uVar1 = *((undefined4 *)GEN_TOP((iVar9 + 0xe4)));
      uVar2 = *((undefined4 *)GEN_TOP((iVar9 + 0xe8)));
      *((undefined4 *)GEN_TOP((REFG(int, 0x1371298) + 0x20))) = *((undefined4 *)GEN_TOP((iVar9 + 0xe0)));
      *((undefined4 *)GEN_TOP((iVar10 + 0x24))) = uVar1;
      *((undefined4 *)GEN_TOP((iVar10 + 0x28))) = uVar2;
    }
    (*(float *)(gen_frame + 0x12008)) = REFG(float, 0x14a0718);
    if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
      F_00994de0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
      F_00c47de6(((code *)REFP(0x107c350)));
    }
    fVar12 = (float10)REFG(int, 0x14a0eb4);
    if (REFG(int, 0x14a0eb4) < 0) {
      fVar12 = GEN_X87(fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    REFG(undefined4, 0x14a22c0) = 0;
    REFG(undefined4, 0x14a1ebc) = 0;
    *(float *)&REFG(undefined, 0x14a0eb8) =
         ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x12008)) * (float10)*(double *)&REFG(undefined, 0x10943d8)) / fVar12)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x68))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x50))))(REFG(int * PTR32, 0x14a0ea8) GEN_EDX_ARG);
    F_009789e0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    F_009d8d50(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
    uVar8 = F_009d8ed0(&REFG(float, 0x14a0d58) GEN_EDX_ARG);
  }
  return uVar8;
}

/* ref: Apricot::Engine::Data::Communicator::Model::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Communicator::Texture::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  undefined4 * puVar1;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((in_ecx + 4)));
  if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = &REFG(undefined4, 0x14a0a38);
  }
  return (uint)puVar1;
}

/* ref: Apricot::Engine::Data::Communicator::FunctionCurve::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((uint * PTR32 *)GEN_TOP((in_ecx + 4))) == ((uint *)GEN_TOP(0x0))) {
    return (REFG(undefined4, 0x14a0a38) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
  }
  return (**((uint * PTR32 *)GEN_TOP((in_ecx + 4))) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::ValueFunctionCurve::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x40;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9e00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LaserParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9e10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::PolygonParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9e60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf2 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009d9ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x90)));
}

/* ref: Apricot::Engine::Data::Communicator::DecalRingParticle::vf3 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009d9ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x94)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009d9f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x18))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009d9f30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x19))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009d9f40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x1a))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1b)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9f60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf7 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d9f70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9d9f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4 + param_2 * 4)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9f80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9f90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9fa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: Apricot::Engine::Data::Runtime::Binder::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9fb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009d9fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9d9fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = param_2;
  return param_1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009d9ff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9d9ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da000(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x9c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf18 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009da010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((int *)GEN_TOP((in_ecx + 0x9c))) = *((int *)GEN_TOP((in_ecx + 0x9c))) + 1;
  return;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf19 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009da020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((int *)GEN_TOP((in_ecx + 0x9c))) = *((int *)GEN_TOP((in_ecx + 0x9c))) - 1;
  return;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf33 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da030(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x4c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf34 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da040(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x50)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf35 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da050(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x54)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf36 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x58)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf37 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da070(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x5c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf38 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf39 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 100)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf40 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da0a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x68)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf41 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da0b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x6c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf42 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da0c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x70)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf43 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da0d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x74)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf44 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da0e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x78)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf45 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da0f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da0f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x7c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf46 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x80)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf47 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da110(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x84)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf48 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da120(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x88)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf49 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x8c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf50 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da140(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x90)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da150(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf29 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x3c)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf30 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x40)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf31 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da180(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x44)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf32 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x48)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf51 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf52 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da1b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf53 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da1c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf54 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da1d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf55 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da1e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 5 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf56 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da1f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x30)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf57 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da200(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf58 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 6 & 0x1f;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf59 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 0xb & 0x1ff;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 0x14 & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf61 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x3b))) & 0xf;
}

/* ref: Apricot::Engine::Data::Runtime::Document::vf62 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x38))) >> 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da270(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 9)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 10)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009da290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0xb))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009da2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0xc))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da2b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((short *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da2c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((short *)GEN_TOP((in_ecx + 6)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da2d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da2e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da2f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da300(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Effector::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Model::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da320(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009da340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9da340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da350(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0xd)));
}

/* ref: Apricot::Engine::Data::Runtime::Scheduler::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009da360(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9da360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 8))) + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Runtime::Texture::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8))) >> 0x10 | (*((uint *)GEN_TOP((in_ecx + 0xc))) & 0xff) << 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)((ulonglong)*(undefined8 *)(this + 8) >> 0x28);
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da3c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8))) & 0xff;
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da3d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009da3e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9da3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x2a + *((int *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: Apricot::Engine::Data::Runtime::Timeline::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009da3f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9da3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0xa4 + *((int *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da410(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::FunctionCurve::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (**((uint * PTR32 *)GEN_TOP((in_ecx + 4))) >> 9 & 0xffff) * 8 + 0x13 & 0xfffffff0;
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf1 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::Value::vf2 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da470(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::ValueFunctionCurve::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da480(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xc;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da4a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da4b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da4c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da4d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf8 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009da4e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((ushort *)GEN_TOP((in_ecx + 4))) & 0x380) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf9 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009da500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (*((ushort *)GEN_TOP((in_ecx + 4))) & 0xc00) != 0;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((ushort *)GEN_TOP((in_ecx + 4))) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf12 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 6))) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color1::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x10;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 4 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da5b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 7 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 0xc & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da5e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((ushort *)GEN_TOP((in_ecx + 4))) >> 0xe);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Color2::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 6))) & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 4 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 6 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 8 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Normal::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4))) >> 2 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((byte *)GEN_TOP((in_ecx + 4))) >> 5);
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Reflection::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da6a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da6b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da6c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 1 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da6d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 2 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da6e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 3 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da6f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 4 & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 5 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 8 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 10 & 3;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((ushort *)GEN_TOP((in_ecx + 4))) >> 0xc & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Distortion::vf11 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da740(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 4))) >> 1 & 7;
}

/* ref: Apricot::Engine::Data::Runtime::TextureProperty_Palette::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::LaserParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x1c;
}

/* ref: Apricot::Engine::Data::Runtime::LightModelParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da7a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::PolygonParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da7b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009da7c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 4))) != '\0';
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf2 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da7d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((char *)GEN_TOP((in_ecx + 5)));
}

/* ref: Apricot::Engine::Data::Runtime::PowderParticle::vf3 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da7e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 8)));
}

/* ref: Apricot::Engine::Data::Runtime::WindmillParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da7f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::DecalParticle::vf1 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 4)));
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009da810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf2 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: Apricot::Engine::Data::Runtime::DecalRingParticle::vf3 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_009da830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9da830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_009da840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009da840(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9da840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar3;
  param_1[8] = (float)fVar2;
  param_1[1] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = (float)fVar3;
  param_1[0xb] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xf] = fVar1;
  return (uint)param_1;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf1 */
GEN_OWN GEN_NOFRAME unsigned int F_009da8e0(void)
{
  GEN_ENTER(0x9da8e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_009da8f0(void)
{
  GEN_ENTER(0x9da8f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf8 */
GEN_OWN GEN_NOFRAME uint F_009da900(void)
{
  GEN_ENTER(0x9da900u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_009da910(void)
{
  GEN_ENTER(0x9da910u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf25 */
GEN_OWN GEN_NOFRAME unsigned int F_009da920(void)
{
  GEN_ENTER(0x9da920u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_009da930(void)
{
  GEN_ENTER(0x9da930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf27 */
GEN_OWN GEN_NOFRAME unsigned int F_009da940(void)
{
  GEN_ENTER(0x9da940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_009da950(void)
{
  GEN_ENTER(0x9da950u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf29 */
GEN_OWN GEN_NOFRAME unsigned int F_009da960(void)
{
  GEN_ENTER(0x9da960u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::InstanceBase::vf30 */
GEN_OWN GEN_NOFRAME unsigned int F_009da970(void)
{
  GEN_ENTER(0x9da970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::Engine::Instance::ParticleInstance::vf8 */
GEN_OWN GEN_NOFRAME uint F_009da980(void)
{
  GEN_ENTER(0x9da980u, 0u, 0u, 0u, 0u);
  return 7;
}

/* ref: FUN_009da9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009da9c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9da9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x58))) = param_2;
  return param_2;
}

/* ref: Apricot::VfxLightInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009daa10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9daa10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10de540));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::InterfaceBase::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009daa50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9daa50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009dab00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dab00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dab00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009dab30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dab30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  return (uint)this;
}

/* ref: FUN_009dab60 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dab60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return;
}

/* ref: Apricot::ILoaderListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dabd0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dabd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10de534));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::IListenner::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009dac10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dac10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: Apricot::IListenner::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_009dac20(void)
{
  GEN_ENTER(0x9dac20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf3 */
GEN_OWN GEN_NOFRAME unsigned int F_009dac30(void)
{
  GEN_ENTER(0x9dac30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf4 */
GEN_OWN GEN_NOFRAME unsigned int F_009dac40(void)
{
  GEN_ENTER(0x9dac40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf5 */
GEN_OWN GEN_NOFRAME unsigned int F_009dac50(void)
{
  GEN_ENTER(0x9dac50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf6 */
GEN_OWN GEN_NOFRAME unsigned int F_009dac60(void)
{
  GEN_ENTER(0x9dac60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf7 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dac70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Apricot::IListenner::vf8 */
GEN_OWN GEN_NOFRAME uint F_009dac80(void)
{
  GEN_ENTER(0x9dac80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_009dac90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dac90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0x107fc63;
}

/* ref: Apricot::IListenner::vf10 */
GEN_OWN GEN_NOFRAME byte F_009daca0(void)
{
  GEN_ENTER(0x9daca0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf11 */
GEN_OWN GEN_NOFRAME unsigned int F_009dacb0(void)
{
  GEN_ENTER(0x9dacb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf12 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009dacc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9dacc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Apricot::IListenner::vf13 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_009dacd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9dacd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Apricot::IListenner::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_009dace0(void)
{
  GEN_ENTER(0x9dace0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Apricot::IListenner::vf25 */
GEN_OWN GEN_NOFRAME uint F_009dacf0(void)
{
  GEN_ENTER(0x9dacf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IListenner::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dad00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[36])REFP(0x10de564));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009dad30 */
GEN_OWN GEN_FRAME float10 F_009dad30(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9dad30u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1)))));
}

/* ref: FUN_009dad50 */
GEN_OWN GEN_FRAME uint F_009dad50(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x9dad50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return (int)((double)param_1 * *(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_009dad70 */
GEN_OWN GEN_FRAME float10 F_009dad70(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dad70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return GEN_X87((float10)(float)((float10)(int)(char)param_1 * (float10)*(double *)&REFG(undefined, 0x10928e8)));
}

/* ref: FUN_009dadc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dadc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dadc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_009dae00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dae00(GEN_P(ushort * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x9dae00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  *param_1 = (ushort)(param_2 & 3) | (short)param_4 * 4;
  param_1[1] = (ushort)param_3;
  return (uint)param_1;
}

/* ref: FUN_009dae30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009dae30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9dae30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  ushort * puVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  *((undefined2 *)GEN_TOP(((int)this + 2))) = 0xffff;
  *(undefined2 *)this = 1;
  piVar3 = param_1;
  if (param_2 != 0) {
    do {
      iVar1 = *piVar3;
      puVar2 = (ushort *)(piVar3 + 2);
      if (iVar1 == 0x5374546d) {
        *(ushort *)this = *puVar2 * 4 | *(ushort *)this & 3;
      }
      else if (iVar1 == 0x546c4e6f) {
        *((ushort *)GEN_TOP(((int)this + 2))) = *puVar2;
      }
      else if (iVar1 == 0x62456e61) {
        *(ushort *)this = *(ushort *)this ^ (*puVar2 ^ *(ushort *)this) & 3;
      }
      uVar4 = uVar4 + 8 + (piVar3[1] + 3U & 0xfffffffc);
      piVar3 = ((int *)GEN_TOP(((int)puVar2 + (piVar3[1] + 3U & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_009daec0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009daec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9daec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *((byte *)GEN_TOP(((int)this + 1))) = param_1[1];
  *((byte *)GEN_TOP(((int)this + 2))) = param_1[2];
  *((byte *)GEN_TOP(((int)this + 3))) = param_1[3];
  *((byte *)GEN_TOP(((int)this + 4))) = param_1[4];
  *((undefined2 *)GEN_TOP(((int)this + 6))) = *(undefined2 *)(param_1 + 6);
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 10)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009daf30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009daf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9daf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  int iVar1;
  byte * pbVar2;
  undefined4 * puVar3;
  
  *(byte *)this = *(byte *)this ^ (*param_1 ^ *(byte *)this) & 1;
  *(byte *)this = (*param_1 ^ *(byte *)this) & 2 ^ *(byte *)this;
  *((byte *)GEN_TOP(((int)this + 1))) = param_1[1];
  *((byte *)GEN_TOP(((int)this + 2))) = param_1[2];
  *((byte *)GEN_TOP(((int)this + 3))) = param_1[3];
  *((byte *)GEN_TOP(((int)this + 4))) = param_1[4];
  *((undefined2 *)GEN_TOP(((int)this + 6))) = *(undefined2 *)(param_1 + 6);
  *((undefined2 *)GEN_TOP(((int)this + 8))) = *(undefined2 *)(param_1 + 8);
  pbVar2 = param_1 + 10;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 10)));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *(undefined4 *)pbVar2;
    pbVar2 = pbVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_009dafa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dafa0(GEN_P(byte * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3), GEN_P(byte param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5), GEN_P(byte param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7), GEN_P(undefined4 param_9, unsigned int gen_a8), GEN_P(undefined4 param_10, unsigned int gen_a9))
{
  GEN_ENTER(0x9dafa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  GEN_PIN(byte param_5 = (byte)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  GEN_PIN(byte param_7 = (byte)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a9;)
  byte * pbVar1;
  
  param_1[2] = param_5;
  *param_1 = (param_3 & 1) * '\x02' | *param_1 & 0xfc | param_2 & 1;
  param_1[1] = param_4;
  param_1[3] = param_6;
  *(undefined2 *)(param_1 + 6) = (undefined2)param_8;
  param_1[4] = param_7;
  pbVar1 = param_1 + 10;
  *(undefined2 *)(param_1 + 8) = (undefined2)param_9;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  F_00c49908(pbVar1,0x20,param_10);
  return (uint)param_1;
}

/* ref: FUN_009db020 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009db020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 1))) = 0xffffffff;
  *(byte *)this = *(byte *)this & 0xfd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 6))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1e))) = 0;
  uVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x22))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x26))) = 0;
  puVar3 = param_1;
  if (param_2 != 0) {
    do {
      uVar1 = *puVar3;
      puVar2 = puVar3 + 2;
      if (uVar1 < 0x45664e70) {
        if (uVar1 == 0x45664e6f) {
          *((char *)GEN_TOP(((int)this + 2))) = (char)*puVar2;
        }
        else if (uVar1 == 0x42644e6f) {
          *((char *)GEN_TOP(((int)this + 3))) = (char)*puVar2;
        }
        else if (uVar1 == 0x436c4e6f) {
          *((char *)GEN_TOP(((int)this + 4))) = (char)*puVar2;
        }
        else if (uVar1 == 0x4564546d) {
          uVar1 = *puVar2;
          *((short *)GEN_TOP(((int)this + 8))) = (short)uVar1;
          *(byte *)this = *(byte *)this ^ (((short)uVar1 == -1) * '\x02' ^ *(byte *)this) & 2;
        }
      }
      else if (uVar1 == 0x456d4e6f) {
        *((char *)GEN_TOP(((int)this + 1))) = (char)*puVar2;
      }
      else if (uVar1 == 0x5374546d) {
        *((short *)GEN_TOP(((int)this + 6))) = (short)*puVar2;
      }
      else if (uVar1 == 0x62456e61) {
        *(byte *)this = *(byte *)this ^ (*puVar2 != 0 ^ *(byte *)this) & 1;
      }
      uVar4 = uVar4 + 8 + (puVar3[1] + 3 & 0xfffffffc);
      puVar3 = ((uint *)GEN_TOP(((int)puVar2 + (puVar3[1] + 3 & 0xfffffffc))));
    } while (uVar4 < param_2);
  }
  return 0;
}

/* ref: FUN_009db150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db150(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_009db180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db180(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9db180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009db1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db1b0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9db1b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_009db1e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db1e0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] * (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009db210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db210(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9db210u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)((float10)in_ecx[2] * fVar1);
  param_2[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)param_2;
}

/* ref: FUN_009db240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db240(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9db240u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  param_2[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)param_2;
}

/* ref: FUN_009db270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db270u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*((float *)GEN_TOP(((int)this + 4))))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*((float *)GEN_TOP(((int)this + 8))))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] + (float10)*((float *)GEN_TOP(((int)this + 0xc))))));
  return (uint)param_1;
}

/* ref: FUN_009db2a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) - (float10)param_2[2])));
  param_1[3] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0xc))) - (float10)param_2[3])));
  return (uint)param_1;
}

/* ref: FUN_009db2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*((float *)GEN_TOP(((int)this + 4))))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*((float *)GEN_TOP(((int)this + 8))))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] * (float10)*((float *)GEN_TOP(((int)this + 0xc))))));
  return (uint)param_1;
}

/* ref: FUN_009db320 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db320(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9db320u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined4 uVar1;
  
  *param_2 = *in_ecx;
  uVar1 = in_ecx[1];
  param_2[3] = (undefined4)gen_fl2bits(param_3);
  param_2[1] = uVar1;
  param_2[2] = in_ecx[2];
  return (uint)param_2;
}

/* ref: FUN_009db350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db350(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_009db370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db370(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9db370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db3a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db3a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9db3a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_009db3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db3d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db400(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *in_ecx = (float)((float10)*param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] * (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_009db430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db430(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9db430u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)param_2;
}

/* ref: FUN_009db460 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db460(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x9db460u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)((float10)*in_ecx / fVar1);
  param_2[1] = (float)((float10)in_ecx[1] / fVar1);
  param_2[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)param_2;
}

/* ref: FUN_009db490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*((float *)GEN_TOP(((int)this + 4))))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*((float *)GEN_TOP(((int)this + 8))))));
  return (uint)param_1;
}

/* ref: FUN_009db4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) - (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_009db4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*param_2 * (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] * (float10)*((float *)GEN_TOP(((int)this + 4))))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] * (float10)*((float *)GEN_TOP(((int)this + 8))))));
  return (uint)param_1;
}

/* ref: FUN_009db520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db520u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  *param_1 = (float)((float10)*(float *)((int)(uintptr_t)this) / (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 4))) / (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 8))) / (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_009db550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009db550(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[4];
  in_ecx[4] = param_2[5];
  in_ecx[5] = param_2[6];
  in_ecx[6] = param_2[8];
  in_ecx[7] = param_2[9];
  in_ecx[8] = param_2[10];
  in_ecx[9] = param_2[0xc];
  in_ecx[10] = param_2[0xd];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_009db5b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009db5b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  return 0;
}

/* ref: FUN_009db630 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009db630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db6a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_009db6a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_009db720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x9db720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_009db740 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9db740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_009db770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9db770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9db790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_009db7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8), GEN_P(undefined4 param_9, unsigned int gen_a9), GEN_P(undefined4 param_10, unsigned int gen_a10))
{
  GEN_ENTER(0x9db7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  GEN_PIN(undefined4 param_9 = (undefined4)gen_a9;)
  GEN_PIN(undefined4 param_10 = (undefined4)gen_a10;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_8;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_9;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_10;
  return (uint)this;
}

/* ref: FUN_009db810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0xc + param_2 * 4)));
}

/* ref: FUN_009db820 */
GEN_OWN GEN_FRAME uint F_009db820(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    piVar1 = ((int *)GEN_TOP(F_00404230()));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009db850 */
GEN_OWN GEN_FRAME uint F_009db850(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9db850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009db890 */
GEN_OWN GEN_FRAME uint F_009db890(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9db890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if ((REFG(undefined * PTR32, 0x14a0a14) != ((code *)GEN_TOP(0x0))) && (param_1 != 0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a14))(param_1,4,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009db8c0 */
GEN_OWN GEN_FRAME unsigned int F_009db8c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9db8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0))) && (param_1 != 0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return;
}

/* ref: Apricot::ApricotMemoryObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db8e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::IVertexBuffer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::IIndexBuffer::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db970(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::ITexture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db9b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::IScreenCopyTexture::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009db9f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9db9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::IVertexShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dba30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dba30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Apricot::IPixelShader::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dba70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dba70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009dbaa0 */
GEN_OWN GEN_FRAME byte F_009dbaa0(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbaa0u, gen_a0, gen_a1, 0u, 0u);
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
      return (int)(iVar2 >> 0x1f | 1U) < 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  } while (3 < uVar1);
  return 0;
}

/* ref: FUN_009dbb30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbb30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dbb90 */
GEN_OWN GEN_FRAME float10 GEN_STDCALL F_009dbb90(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x9dbb90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c4f2dd();
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_2 - (float10)param_1) *
                          (float10)(float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0))
                         + (float10)param_1))));
}

/* ref: FUN_009dbbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dbcd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbcd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbcf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbcf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009dbd50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbd50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10de554));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009dbda0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbda0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_009dbdc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbdc0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_009dbde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbe10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dbe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbe40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbe40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbe70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dbe70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbe70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbed0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dbed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbf00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dbf30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbf30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbf90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dbf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbf90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dbfc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dbfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dbfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  *((int * PTR32 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_FWD);
  }
  return (uint)this;
}

/* ref: FUN_009dbff0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dbff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dbff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  return;
}

/* ref: FUN_009dc090 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc090(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: InterfaceHolder_VInputLayout_Kernel_Graphics_Client_Apricot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de728));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[1] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: InterfaceHolder_VVertexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc100(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de730));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[1] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: InterfaceHolder_VIndexBuffer_Kernel_Graphics_Client_Apricot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de738));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[1] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: InterfaceHolder_VTexture_Kernel_Graphics_Client_Apricot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc1a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de74c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[1] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: InterfaceHolder_VVertexShader_Kernel_Graphics_Client_Apricot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc1f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de754));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[1] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: InterfaceHolder_VPixelShader_Kernel_Graphics_Client_Apricot::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc240(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de75c));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[1] = 0;
  }
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de5f8));
  if (((param_2 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != ((code *)GEN_TOP(0x0)))) {
    ((code *)REFG(gen_code32, 0x14a0a18))(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VUITargetLinkLineManager_Vfx_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de764));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VChannelingLineManager_Vfx_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc2c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de76c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Singleton_VTargetRingManager_Vfx_Graphics_Client_Graphics::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc2f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10de774));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_009dc390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc390(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc430(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_009dc4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc4c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc4f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_009dc510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc510(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc530(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc550(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc570(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc590(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc5d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc5f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc5f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc610(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_009dc640 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009dc640(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_009dc680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc680(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_009dc6a0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_009dc6a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_009dbaa0(param_1,param_2);
  return bVar1;
}

/* ref: FUN_009dc6c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc6c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc720 */
GEN_OWN GEN_FRAME uint F_009dc720(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_009dc760 */
GEN_OWN GEN_FRAME uint F_009dc760(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_009dc790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc790(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc7c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc7f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc7f0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc820(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc850(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc880(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc8b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc8b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc8d0 */
GEN_OWN GEN_FRAME uint F_009dc8d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x28;
}

/* ref: FUN_009dc8e0 */
GEN_OWN GEN_FRAME uint F_009dc8e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x29;
}

/* ref: FUN_009dc8f0 */
GEN_OWN GEN_FRAME uint F_009dc8f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_009dc900 */
GEN_OWN GEN_FRAME uint F_009dc900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_009dc910 */
GEN_OWN GEN_FRAME uint F_009dc910(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_009dc920 */
GEN_OWN GEN_FRAME uint F_009dc920(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x29)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x29)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_009dc950 */
GEN_OWN GEN_FRAME uint F_009dc950(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dc950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x29)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x29)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_009dc970 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009dc970(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 * 0x2c != 0) {
    piVar1 = ((int *)GEN_TOP(F_00404230()));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1 * 0x2c,4);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_009dc9a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc9a0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dc9d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dc9d0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dc9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dca00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dca00(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dca00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dca30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009dca30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dca30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009dca50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009dca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_009dca70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dca70(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dcba0 */
GEN_OWN GEN_FRAME uint F_009dcba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dcba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_009dcbd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dcbd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x9dcbd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009dcbe0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_009dcbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x9dcbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x29))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x29))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x29)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x29)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x29)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x29)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_009dcc30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009dcc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dcc30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009dcc50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_009dcc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x9dcc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_009dcc90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_009dcc90(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dcc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009dccd0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009dccd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dccd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0xca);
  return uVar1;
}

/* ref: FUN_009dcd00 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009dcd00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dcd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0xca);
  return (uint)uVar1;
}

/* ref: FUN_009dcd60 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_009dcd60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x9dcd60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_009dcd90 */
GEN_OWN GEN_FRAME uint F_009dcd90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dcd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: FUN_009dcda0 */
GEN_OWN GEN_FRAME uint F_009dcda0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dcda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_009dcdb0 */
GEN_OWN GEN_FRAME uint F_009dcdb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dcdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: FUN_009dcdc0 */
GEN_OWN GEN_FRAME uint F_009dcdc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dcdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: FUN_009dcdd0 */
GEN_OWN GEN_FRAME uint F_009dcdd0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x9dcdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x11)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x11)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

