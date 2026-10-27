#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00bfa370 */
uint F_00bfa370(unsigned int gen_a0)
{
  GEN_ENTER(0xbfa370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  ushort uVar6;
  uint uVar7;
  ushort * puVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  iVar3 = *(int *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = *(undefined * PTR32 *)((int)this + 0x10);
  F_0063a290(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x30)),(uint)*(ushort *)(iVar3 + 2));
  iVar4 = *(int *)((int)this + 0x18);
  *(float *)(iVar4 + 0x40) = (*(float *)(gen_frame + 0x60));
  *(float *)(iVar4 + 0x44) = (*(float *)(gen_frame + 0x64));
  *(float *)(iVar4 + 0x48) = (*(float *)(gen_frame + 0x68));
  F_004ee9d0((int)this + 0x60,(int)this + 0x30,((undefined1 *)(gen_frame + 0x30)));
  F_004ee9d0((int)this + 0x70,(int)this + 0x40,((undefined1 *)(gen_frame + 0x30)));
  F_004ee9d0((int)this + 0x80,(int)this + 0x50,((undefined1 *)(gen_frame + 0x30)));
  uVar6 = *(short *)((int)this + 0xb8) - 1;
  (*(uint *)(gen_frame + 0x20)) = 1;
  if (1 < uVar6) {
    uVar7 = uVar6 - 1 & 0xffff;
    puVar8 = (ushort *)(iVar3 + 4);
    (*(uint *)(gen_frame + 0x24)) = uVar7;
    (*(int *)(gen_frame + 0x28)) = 0x60;
    (*(uint *)(gen_frame + 0x20)) = uVar7 + 1 & 0xffff;
    do {
      F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x2c)),((undefined1 *)(gen_frame + 0x30)),(uint)*puVar8);
      pfVar1 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + 0x40 + *(int *)((int)this + 0x18))));
      *pfVar1 = (*(float *)(gen_frame + 0x60));
      pfVar1[1] = (*(float *)(gen_frame + 0x64));
      puVar8 = puVar8 + 1;
      uVar7 = (*(uint *)(gen_frame + 0x24)) - 1;
      (*(uint *)(gen_frame + 0x24)) = uVar7;
      pfVar1[2] = (*(float *)(gen_frame + 0x68));
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x60;
    } while (uVar7 != 0);
  }
  F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)this + 0x90,((undefined1 *)(gen_frame + 0x30)));
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  fVar2 = *((float *)GEN_TOP((((*(uint *)(gen_frame + 0x20)) & 0xffff) * 0xa0 + 0x8c + *(int *)((int)this + 0x1c))));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar2)));
  pfVar1 = ((float *)GEN_TOP((((*(uint *)(gen_frame + 0x20)) & 0xffff) * 0x60 + 0x40 + *(int *)((int)this + 0x18))));
  fVar9 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar9);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8)));
  *pfVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x60)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x0))))));
  pfVar1[1] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x64)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar9))));
  pfVar1[2] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8))))));
  puVar5 = *(undefined4 * PTR32 *)((int)this + 0x18);
  puVar5[4] = *puVar5;
  puVar5[5] = puVar5[1];
  puVar5[6] = puVar5[2];
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)pfVar1;
}

/* ref: FUN_00bfa530 */
unsigned int F_00bfa530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xbfa530u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int iVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  pfVar8 = *(float * PTR32 *)(param_1 + 0x18);
  (*(float *)(gen_frame + 0x40)) = *pfVar8;
  (*(float *)(gen_frame + 0x44)) = 0.0;
  (*(int *)(gen_frame + 0x3c)) = param_1;
  (*(float *)(gen_frame + 0x48)) = pfVar8[2];
  F_0046f390(&(*(float *)(gen_frame + 0x40)));
  fVar2 = pfVar8[4];
  (*(float *)(gen_frame + 0x84)) = fVar2;
  fVar7 = *pfVar8;
  (*(float *)(gen_frame + 0x50)) = fVar7;
  fVar11 = (float10)fVar2;
  fVar2 = pfVar8[1];
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar1 = pfVar8[2];
  fVar12 = (float10)param_8;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  *pfVar8 = ((float)GEN_TOF((fVar12 * ((float10)pfVar8[0x10] - fVar11) + fVar11)));
  fVar3 = pfVar8[5];
  (*(float *)(gen_frame + 0x84)) = fVar3;
  fVar11 = (float10)fVar3;
  pfVar8[1] = ((float)GEN_TOF((fVar11 + fVar12 * ((float10)pfVar8[0x11] - fVar11))));
  fVar3 = pfVar8[6];
  (*(float *)(gen_frame + 0x84)) = fVar3;
  fVar11 = (float10)fVar3;
  pfVar8[2] = ((float)GEN_TOF((fVar11 + ((float10)pfVar8[0x12] - fVar11) * fVar12)));
  pfVar8 = *(float * PTR32 *)(param_1 + 0x18);
  fVar7 = (float)((float10)*pfVar8 - (float10)fVar7);
  (*(float *)(gen_frame + 0x20)) = fVar7;
  fVar2 = (float)((float10)pfVar8[1] - (float10)fVar2);
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar1 = (float)((float10)pfVar8[2] - (float10)fVar1);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar11 = (float10)param_9;
  fVar7 = (float)(fVar11 * (float10)fVar7);
  (*(float *)(gen_frame + 0x20)) = fVar7;
  fVar2 = (float)((float10)fVar2 * fVar11);
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar1 = (float)(fVar11 * (float10)fVar1);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar3 = ((float)GEN_TOF(((float10)param_4[2] * (float10)(*(float *)(gen_frame + 0x48)) +
                 ((float10)(*(float *)(gen_frame + 0x40)) * (float10)*param_4 + (float10)param_4[1] * (float10)(*(float *)(gen_frame + 0x44))))));
  (*(float *)(gen_frame + 0x84)) = fVar3;
  pfVar8 = &(*(float *)(gen_frame + 0x6c));
  fVar3 = ((float)GEN_TOF((((float10)1 - (float10)fVar3) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x6c)) = fVar3;
  fVar4 = *(float *)(param_1 + 0xb4);
  (*(float *)(gen_frame + 0x88)) = fVar4;
  if (!((float10)fVar4 < (float10)fVar3)) {
    pfVar8 = &(*(float *)(gen_frame + 0x88));
  }
  fVar3 = *pfVar8;
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1087f04);
  pfVar8 = &(*(float *)(gen_frame + 0x88));
  (*(float *)(gen_frame + 0x88)) = (float)((float10)fVar3 + (float10)param_10);
  if (!((float10)(float)((float10)fVar3 + (float10)param_10) < (float10)1)) {
    pfVar8 = &(*(float *)(gen_frame + 0x84));
  }
  uVar5 = *(ushort *)(param_1 + 0xb8);
  *(float *)(param_1 + 0xb4) = *pfVar8;
  if (1 < uVar5) {
    fVar12 = (float10)fVar1;
    fVar11 = (float10)fVar2;
    iVar10 = 0x60;
    fVar13 = (float10)fVar7;
    (*(float *)(gen_frame + 0xc)) = 2.8026e-45;
    (*(float *)(gen_frame + 0x84)) = gen_bits2f(uVar5 - 1 & 0xffff);
    do {
      iVar6 = *(int *)(param_1 + 0x18);
      fVar7 = *(float *)(iVar10 + 0x54 + iVar6);
      if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
        fVar7 = gen_bits2f(uVar5 - 1);
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0xc));
        pfVar8 = &(*(float *)(gen_frame + 0x88));
        if ((int)gen_fl2bits(fVar7) <= (int)gen_fl2bits((*(float *)(gen_frame + 0xc)))) {
          pfVar8 = &(*(float *)(gen_frame + 0x8c));
        }
        iVar9 = (int)gen_fl2bits(*pfVar8) * 0x60;
        fVar7 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)((*(int *)(gen_frame + 0x3c)) + 0xac)) * (float10)param_6)));
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar14 = (float10)fVar7;
        (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF((fVar14 * (float10)*(float *)(iVar10 + 0x20 + iVar6))));
        (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)*(float *)(iVar10 + 0x24 + iVar6) * fVar14)));
        (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF((fVar14 * (float10)*(float *)(iVar10 + 0x28 + iVar6))));
        fVar7 = *(float *)(iVar10 + 0x5c + iVar6);
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar14 = (float10)fVar7;
        *(float *)(iVar10 + 0x30 + iVar6) = (float)(fVar14 * (float10)*param_2);
        *(float *)(iVar10 + 0x34 + iVar6) = (float)((float10)param_2[1] * fVar14);
        *(float *)(iVar10 + 0x38 + iVar6) = (float)(fVar14 * (float10)param_2[2]);
        fVar7 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + -0x60 + iVar6) -
                       (float10)*(float *)(iVar9 + iVar6))));
        (*(float *)(gen_frame + 0x50)) = fVar7;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + -0x5c + iVar6) -
                       (float10)*(float *)(iVar9 + 4 + iVar6))));
        (*(float *)(gen_frame + 0x54)) = fVar2;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar10 + -0x58 + iVar6) -
                       (float10)*(float *)(iVar9 + 8 + iVar6))));
        (*(float *)(gen_frame + 0x58)) = fVar1;
        fVar7 = (float)(fVar13 + (float10)fVar7);
        (*(float *)(gen_frame + 0x50)) = fVar7;
        fVar2 = (float)(fVar11 + (float10)fVar2);
        (*(float *)(gen_frame + 0x54)) = fVar2;
        fVar1 = (float)(fVar12 + (float10)fVar1);
        (*(float *)(gen_frame + 0x58)) = fVar1;
        fVar3 = param_3[2];
        (*(float *)(gen_frame + 0x8c)) = fVar3;
        fVar4 = param_3[1];
        (*(float *)(gen_frame + 0x88)) = fVar4;
        fVar11 = (float10)fVar3;
        fVar12 = (float10)fVar2;
        fVar13 = (float10)fVar4;
        fVar14 = (float10)fVar1;
        fVar2 = *param_3;
        (*(float *)(gen_frame + 0x88)) = fVar2;
        fVar15 = (float10)fVar2;
        fVar16 = (float10)fVar7;
        fVar17 = (float10)(float)(fVar15 * fVar14 - fVar16 * fVar11);
        fVar15 = (float10)(float)(fVar16 * fVar13 - fVar15 * fVar12);
        (*(float *)(gen_frame + 0x10)) = (float)(fVar17 * fVar14 - fVar15 * fVar12);
        fVar11 = (float10)(float)(fVar12 * fVar11 - fVar14 * fVar13);
        (*(float *)(gen_frame + 0x14)) = (float)(fVar15 * fVar16 - fVar11 * fVar14);
        (*(float *)(gen_frame + 0x18)) = (float)(fVar12 * fVar11 - fVar17 * fVar16);
        F_0046f390(&(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)(*(float *)(gen_frame + 0x70)));
        (*(float *)(gen_frame + 0x44)) = (float)((float10)param_3[1] - (float10)(*(float *)(gen_frame + 0x74)));
        (*(float *)(gen_frame + 0x48)) = (float)((float10)param_3[2] - (float10)(*(float *)(gen_frame + 0x78)));
        fVar11 = (float10)(float)((float10)param_3[1] - (float10)(*(float *)(gen_frame + 0x74)));
        fVar12 = (float10)(float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)(*(float *)(gen_frame + 0x70)));
        fVar13 = (float10)(float)((float10)param_3[2] - (float10)(*(float *)(gen_frame + 0x78)));
        fVar7 = ((float)GEN_TOF((fVar13 * (float10)(*(float *)(gen_frame + 0x18)) +
                       ((float10)(*(float *)(gen_frame + 0x14)) * fVar11 + fVar12 * (float10)(*(float *)(gen_frame + 0x10))))));
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar14 = (float10)fVar7;
        fVar7 = REFG(float, 0x1090708);
        if ((float10)0 <= fVar14) {
          fVar7 = REFG(float, 0x1087f04);
        }
        (*(float *)(gen_frame + 0x6c)) = fVar7;
        fVar15 = (float10)fVar7;
        (*(float *)(gen_frame + 0x10)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x14)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar15);
        fVar7 = ((float)GEN_TOF(((fVar12 * fVar12 + fVar11 * fVar11) + fVar13 * fVar13)));
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar2 = (float)(fVar15 * fVar14);
        (*(float *)(gen_frame + 0x8c)) = fVar2;
        (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF((((float10)fVar2 * (float10)*(float *)(iVar10 + 0x58 + iVar6)) *
                          (float10)fVar7)));
        F_0046f390(&(*(float *)(gen_frame + 0x40)));
        fVar7 = *(float *)((*(int *)(gen_frame + 0x3c)) + 0xb4);
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar11 = (float10)fVar7;
        fVar7 = (float)((float10)(*(float *)(gen_frame + 0x88)) * fVar11);
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar12 = (float10)fVar7;
        fVar7 = ((float)GEN_TOF(((fVar11 + (float10)REFG(double, 0x1088130)) * (float10)REFG(double, 0x1088108))));
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar7 = (float)((float10)(*(float *)(gen_frame + 0x88)) * (float10)fVar7);
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        fVar11 = (float10)fVar7;
        *(float *)(iVar10 + 0x30 + iVar6) =
             ((float)GEN_TOF(((float10)*(float *)(iVar10 + 0x30 + iVar6) +
                    (float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x10))))));
        *(float *)(iVar10 + 0x34 + iVar6) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar12) +
                    (float10)*(float *)(iVar10 + 0x34 + iVar6))));
        *(float *)(iVar10 + 0x38 + iVar6) =
             ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x18))) +
                    (float10)*(float *)(iVar10 + 0x38 + iVar6))));
        *(float *)(iVar10 + 0x30 + iVar6) =
             ((float)GEN_TOF(((float10)*(float *)(iVar10 + 0x30 + iVar6) +
                    (float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x40))))));
        *(float *)(iVar10 + 0x34 + iVar6) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar11) +
                    (float10)*(float *)(iVar10 + 0x34 + iVar6))));
        *(float *)(iVar10 + 0x38 + iVar6) =
             ((float)GEN_TOF(((float10)(float)(fVar11 * (float10)(*(float *)(gen_frame + 0x48))) +
                    (float10)*(float *)(iVar10 + 0x38 + iVar6))));
        fVar7 = *(float *)((*(int *)(gen_frame + 0x3c)) + 0xb0);
        fVar2 = ((float)GEN_TOF(((float10)param_5 *
                       ((float10)*(float *)(iVar10 + 0x54 + iVar6) * (float10)param_7))));
        (*(float *)(gen_frame + 0x8c)) = fVar2;
        fVar11 = (float10)fVar2;
        fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)*(float *)(iVar10 + 0x30 + iVar6)))) +
                       (float10)(*(float *)(gen_frame + 0x70)))));
        (*(float *)(gen_frame + 0x70)) = fVar2;
        fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar10 + 0x34 + iVar6) * fVar11))) +
                       (float10)(*(float *)(gen_frame + 0x74)))));
        (*(float *)(gen_frame + 0x74)) = fVar1;
        fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)*(float *)(iVar10 + 0x38 + iVar6)))) +
                       (float10)(*(float *)(gen_frame + 0x78)))));
        (*(float *)(gen_frame + 0x78)) = fVar3;
        if (0.0 <= fVar7) {
          fVar4 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                         (float10)fVar3 * (float10)fVar3)));
          (*(float *)(gen_frame + 0x8c)) = fVar4;
          fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
          (*(float *)(gen_frame + 0x8c)) = fVar4;
          fVar11 = (float10)fVar7;
          if (fVar11 < (float10)fVar4) {
            fVar7 = (float)(fVar11 / (float10)fVar4);
            (*(float *)(gen_frame + 0x8c)) = fVar7;
            fVar11 = (float10)fVar7;
            (*(float *)(gen_frame + 0x70)) = (float)(fVar11 * (float10)fVar2);
            (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar1 * fVar11);
            (*(float *)(gen_frame + 0x78)) = (float)(fVar11 * (float10)fVar3);
          }
        }
        fVar14 = (float10)param_5;
        fVar13 = (float10)(*(float *)(gen_frame + 0x20));
        fVar7 = ((float)GEN_TOF((fVar13 + (float10)*(float *)(iVar10 + iVar6))));
        (*(float *)(gen_frame + 0x8c)) = fVar7;
        *(float *)(iVar10 + iVar6) = fVar7;
        fVar11 = (float10)(*(float *)(gen_frame + 0x24));
        *(float *)(iVar10 + 4 + iVar6) = ((float)GEN_TOF((fVar11 + (float10)*(float *)(iVar10 + 4 + iVar6))));
        fVar12 = (float10)(*(float *)(gen_frame + 0x28));
        *(float *)(iVar10 + 8 + iVar6) = ((float)GEN_TOF((fVar12 + (float10)*(float *)(iVar10 + 8 + iVar6))));
        *(float *)(iVar10 + 0x10 + iVar6) = fVar7;
        *(undefined4 *)(iVar10 + 0x14 + iVar6) = *(undefined4 *)(iVar10 + 4 + iVar6);
        *(undefined4 *)(iVar10 + 0x18 + iVar6) = *(undefined4 *)(iVar10 + 8 + iVar6);
        *(float *)(iVar10 + iVar6) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x70)) * fVar14) +
                    (float10)*(float *)(iVar10 + iVar6))));
        *(float *)(iVar10 + 4 + iVar6) =
             ((float)GEN_TOF(((float10)*(float *)(iVar10 + 4 + iVar6) +
                    (float10)(float)((float10)(*(float *)(gen_frame + 0x74)) * fVar14))));
        *(float *)(iVar10 + 8 + iVar6) =
             ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x78)) * fVar14) +
                    (float10)*(float *)(iVar10 + 8 + iVar6))));
        *(undefined4 *)(iVar10 + 0x30 + iVar6) = 0;
        *(undefined4 *)(iVar10 + 0x34 + iVar6) = 0;
        *(undefined4 *)(iVar10 + 0x38 + iVar6) = 0;
      }
      (*(float *)(gen_frame + 0xc)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 1);
      iVar10 = iVar10 + 0x60;
      fVar7 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x84))) - 1);
      (*(float *)(gen_frame + 0x84)) = fVar7;
      param_1 = (*(int *)(gen_frame + 0x3c));
    } while (fVar7 != 0.0);
  }
  return 0;
}

/* ref: FUN_00bfab80 */
unsigned int F_00bfab80(unsigned int gen_a0)
{
  GEN_ENTER(0xbfab80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float fVar10;
  ushort uVar11;
  float * PTR32 * ppfVar12;
  undefined * pvVar13;
  float * pfVar14;
  float * pfVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  
  uVar11 = *(ushort *)((int)this + 0xb8);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if (1 < uVar11) {
    (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
    iVar16 = 0xa0;
    (*(int *)(gen_frame + 0x28)) = 0x60;
    (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)(uVar11 - 1 & 0xffff);
    pvVar13 = this;
    do {
      pfVar14 = ((float *)GEN_TOP((*(int *)((int)pvVar13 + 0x18) + (*(int *)(gen_frame + 0x28)))));
      *pfVar14 = (float)((float10)pfVar14[0xc] + (float10)*pfVar14);
      pfVar14[1] = (float)((float10)pfVar14[0xd] + (float10)pfVar14[1]);
      fVar3 = (float)((float10)pfVar14[2] + (float10)pfVar14[0xe]);
      (*(float *)(gen_frame + 0x18)) = fVar3;
      pfVar14[2] = fVar3;
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar14[-3])));
      fVar4 = pfVar14[-0x18];
      (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar1;
      (*(float *)(gen_frame + 0x20)) = fVar4;
      pfVar15 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar14[0x15])));
      (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar15;
      fVar5 = *pfVar14;
      fVar6 = pfVar14[-0x17];
      (*(float *)(gen_frame + 0x1c)) = fVar6;
      fVar7 = pfVar14[1];
      fVar8 = pfVar14[-0x16];
      (*(float *)(gen_frame + 0x18)) = fVar8;
      fVar17 = (float10)(float)((float10)fVar6 - (float10)fVar7);
      fVar18 = (float10)(float)((float10)fVar4 - (float10)fVar5);
      fVar19 = (float10)(float)((float10)fVar8 - (float10)fVar3);
      pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar19 * fVar19 + (fVar18 * fVar18 + fVar17 * fVar17)))))));
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar9;
      pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9)))))))));
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar9;
      ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x10));
      if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))) < REFG(double, 0x1094438))) {
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x24));
      }
      pfVar9 = *ppfVar12;
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar9;
      fVar10 = *((float *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x8c + iVar16)));
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9)));
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x60;
      iVar16 = iVar16 + 0xa0;
      pfVar9 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x14)) - 1);
      (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar9;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar15)));
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)fVar10 - fVar17) / ((fVar19 + fVar18) * fVar17)))))));
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 * fVar19))));
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar1;
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      fVar20 = (float10)(float)((float10)fVar4 - (float10)fVar5);
      fVar21 = (float10)(float)((float10)fVar6 - (float10)fVar7);
      fVar22 = (float10)(float)((float10)fVar8 - (float10)fVar3);
      pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar17 * fVar18))));
      (*(float * PTR32 *)(gen_frame + 0x24)) = pfVar1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar1)));
      pfVar14[-0x18] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar20 * fVar19))));
      pfVar14[-0x17] = ((float)GEN_TOF(((float10)fVar6 + (float10)(float)(fVar21 * fVar19))));
      pfVar14[-0x16] = ((float)GEN_TOF(((float10)fVar8 + (float10)(float)(fVar22 * fVar19))));
      *pfVar14 = ((float)GEN_TOF(((float10)*pfVar14 - (float10)(float)(fVar17 * fVar20))));
      pfVar14[1] = ((float)GEN_TOF(((float10)pfVar14[1] - (float10)(float)(fVar17 * fVar21))));
      pfVar14[2] = ((float)GEN_TOF(((float10)pfVar14[2] - (float10)(float)(fVar17 * fVar22))));
      pfVar14[0xc] = 0.0;
      pfVar14[0xd] = 0.0;
      pfVar14[0xe] = 0.0;
      pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    } while (pfVar9 != (float *)0x0);
  }
  pfVar1 = *(float * PTR32 *)((int)this + 0x18);
  (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar1;
  if (1 < uVar11) {
    (*(float * PTR32 *)(gen_frame + 0x24)) = (float *)0xa0;
    (*(int *)(gen_frame + 0x28)) = 0x60;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar11 - 1 & 0xffff);
    do {
      pfVar15 = ((float *)GEN_TOP((*(int *)((int)this + 0x18) + (*(int *)(gen_frame + 0x28)))));
      fVar3 = pfVar15[0x15];
      if (GEN_ISNAN(fVar3) == (GEN_ISNAN(fVar3) || fVar3 == 0.0)) {
        fVar3 = *pfVar15;
        iVar16 = *(int *)((int)this + 0x1c);
        fVar4 = *pfVar1;
        (*(float * PTR32 *)(gen_frame + 0x8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
        fVar5 = pfVar15[1];
        fVar6 = pfVar1[1];
        fVar7 = pfVar15[2];
        fVar8 = pfVar1[2];
        fVar17 = (float10)(float)((float10)fVar5 - (float10)fVar6);
        fVar18 = (float10)(float)((float10)fVar3 - (float10)fVar4);
        fVar19 = (float10)(float)((float10)fVar7 - (float10)fVar8);
        pfVar9 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar19 * fVar19 +
                                                      (fVar18 * fVar18 + fVar17 * fVar17))))))))));
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x8));
        (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar9;
        if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))) < REFG(double, 0x1094438))) {
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x14));
        }
        pfVar9 = *ppfVar12;
        (*(float * PTR32 *)(gen_frame + 0xc)) = (float *)0x0;
        ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0x14));
        pfVar14 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)(*(float * PTR32 *)(gen_frame + 0x24)) + iVar16 + 0x90) -
                                  (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9)))))))));
        (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar14;
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14))) < (float10)0)) {
          ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc));
        }
        fVar17 = (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar12))) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar9))));
        fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar3 - (float10)fVar4))))
                       + (float10)*pfVar15)));
        fVar18 = (float10)fVar3;
        *pfVar15 = fVar3;
        fVar3 = ((float)GEN_TOF(((float10)pfVar15[1] +
                       (float10)((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar6) * fVar17))))))
        ;
        fVar19 = (float10)fVar3;
        pfVar15[1] = fVar3;
        fVar3 = ((float)GEN_TOF(((float10)pfVar15[2] +
                       (float10)((float)GEN_TOF((fVar17 * (float10)(float)((float10)fVar7 - (float10)fVar8)))))))
        ;
        fVar17 = (float10)fVar3;
        pfVar15[2] = fVar3;
        fVar20 = (float10)*(float *)((int)(*(float * PTR32 *)(gen_frame + 0x24)) + iVar16 + 0x88);
        *pfVar15 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar20 * (float10)(float)((float10)pfVar15[0x10] -
                                                                     fVar18)))) + fVar18)));
        pfVar15[1] = ((float)GEN_TOF((fVar19 + (float10)((float)GEN_TOF(((float10)(float)((float10)pfVar15[0x11] -
                                                                       fVar19) * fVar20))))));
        pfVar15[2] = ((float)GEN_TOF((fVar17 + (float10)((float)GEN_TOF((fVar20 * (float10)(float)((float10)pfVar15[
                                                  0x12] - fVar17)))))));
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x60;
      (*(float * PTR32 *)(gen_frame + 0x24)) = (*(float * PTR32 *)(gen_frame + 0x24)) + 0x28;
      uVar2 = (int)gen_fl2bits((*(float *)(gen_frame + 0x18))) - 1;
      (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar2);
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00bfaf20 */
unsigned int F_00bfaf20(unsigned int gen_a0)
{
  GEN_ENTER(0xbfaf20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (1 < *(ushort *)((int)this + 0xb8)) {
    iVar3 = 0x60;
    uVar4 = *(ushort *)((int)this + 0xb8) - 1 & 0xffff;
    do {
      pfVar1 = ((float *)GEN_TOP((*(int *)((int)this + 0x18) + iVar3)));
      iVar2 = *(int *)((int)this + 0x18) + iVar3;
      iVar3 = iVar3 + 0x60;
      uVar4 = uVar4 - 1;
      *(float *)(iVar2 + 0x20) = ((float)GEN_TOF(((float10)*pfVar1 - (float10)*(float *)(iVar2 + 0x10))));
      *(float *)(iVar2 + 0x24) =
           ((float)GEN_TOF(((float10)*(float *)(iVar2 + 4) - (float10)*(float *)(iVar2 + 0x14))));
      *(float *)(iVar2 + 0x28) =
           ((float)GEN_TOF(((float10)*(float *)(iVar2 + 8) - (float10)*(float *)(iVar2 + 0x18))));
    } while (uVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00bfaf70 */
unsigned int F_00bfaf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xbfaf70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  float fVar2;
  ushort uVar3;
  int * piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar3 = *(ushort *)(param_1 + 0xb8);
  (*(int *)(gen_frame + 0x28)) = 1;
  if (1 < uVar3) {
    (*(int *)(gen_frame + 0x24)) = 0xa0;
    (*(int *)(gen_frame + 0x18)) = 0x60;
    do {
      iVar11 = *(int *)(param_1 + 0x18) + (*(int *)(gen_frame + 0x18));
      fVar2 = *(float *)(iVar11 + 0x54);
      (*(int *)(gen_frame + 0x1c)) = iVar11;
      if (GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0)) {
        uVar10 = param_2[1] - *param_2 >> 3;
        (*(float *)(gen_frame + 0x10)) = 0.0;
        (*(uint *)(gen_frame + 0x8)) = uVar10;
        (*(uint *)(gen_frame + 0x20)) = 0;
        uVar12 = 1;
        if (uVar10 != 0) {
          (*(float *)(gen_frame + 0x10)) = gen_bits2f(uVar10);
          do {
            iVar6 = (*(int *)(gen_frame + 0x1c));
            if (((ushort)(*(int *)(gen_frame + 0x28)) < *(ushort *)(param_1 + 0xb8)) &&
               (iVar7 = *(int *)(param_1 + 0x1c) + (*(int *)(gen_frame + 0x24)), (*(uint *)(iVar7 + 0x80) & uVar12) != 0)
               ) {
              if ((char)param_4 == '\0') {
LAB_00bfb027: ;
                uVar10 = (*(uint *)(gen_frame + 0x14));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
                (*(uint *)(gen_frame + 0x14)) = uVar10 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 1;
                (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),1);
                if ((*(uint *)(iVar7 + 0x84) & uVar12) == 0) goto LAB_00bfb027;
              }
              puVar1 = (undefined4 *)(*param_2 + (*(uint *)(gen_frame + 0x20)) * 8);
              piVar4 = (int *)*puVar1;
              ((code *)*(gen_code32 *)(*piVar4 + 0x1c))
                        (piVar4,(*(int *)(gen_frame + 0x1c)),(uint)*(ushort *)(puVar1 + 1),(*(uint *)(gen_frame + 0x14)),param_1 + 0xa0);
              uVar10 = (*(uint *)(gen_frame + 0x8));
              iVar11 = iVar6;
            }
            uVar8 = (*(uint *)(gen_frame + 0x20)) + 1;
            uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
            (*(uint *)(gen_frame + 0x20)) = uVar8;
          } while (uVar8 < uVar10);
        }
        uVar12 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 3;
        bVar5 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) & 0x1f;
        uVar10 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        (*(uint *)(gen_frame + 0x8)) = uVar12;
        (*(uint *)(gen_frame + 0x20)) = 0;
        if (uVar12 != 0) {
          do {
            iVar6 = (*(int *)(gen_frame + 0x1c));
            uVar8 = (*(uint *)(gen_frame + 0x20));
            if (((ushort)(*(int *)(gen_frame + 0x28)) < *(ushort *)(param_1 + 0xb8)) &&
               (iVar7 = *(int *)(param_1 + 0x1c) + (*(int *)(gen_frame + 0x24)), iVar11 = iVar6,
               (*(uint *)(iVar7 + 0x80) & uVar10) != 0)) {
              if ((char)param_4 == '\0') {
LAB_00bfb0de: ;
                uVar12 = (*(uint *)(gen_frame + 0xc));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
                (*(uint *)(gen_frame + 0xc)) = uVar12 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 1;
                (*(uint *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0xc)), 1, 3),1);
                if ((*(uint *)(iVar7 + 0x84) & uVar10) == 0) goto LAB_00bfb0de;
              }
              piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xbc) + (*(uint *)(gen_frame + 0x20)) * 8)));
              ((code *)*(gen_code32 *)(*piVar4 + 0x1c))
                        (piVar4,(*(int *)(gen_frame + 0x1c)),
                         (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0xbc) + (*(uint *)(gen_frame + 0x20)) * 8 + 4))),(*(uint *)(gen_frame + 0xc)),
                         param_1 + 0xa0);
              uVar12 = (*(uint *)(gen_frame + 0x8));
              uVar8 = (*(uint *)(gen_frame + 0x20));
            }
            uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
            (*(uint *)(gen_frame + 0x20)) = uVar8 + 1;
          } while (uVar8 + 1 < uVar12);
        }
        if ((char)param_3 != '\0') {
          fVar2 = *(float *)(iVar11 + 0x50);
          (*(float *)(gen_frame + 0x10)) = fVar2;
          if ((float10)*(float *)(iVar11 + 4) < (float10)fVar2) {
            *(float *)(iVar11 + 4) = fVar2;
            fVar2 = *(float *)(iVar11 + 0x24);
            (*(float *)(gen_frame + 0x4)) = fVar2;
            (*(float *)(gen_frame + 0x0)) = 0.0;
            pfVar9 = &(*(float *)(gen_frame + 0x4));
            if (!(0.0 < fVar2)) {
              pfVar9 = &(*(float *)(gen_frame + 0x0));
            }
            *(float *)(iVar11 + 0x24) = *pfVar9;
          }
        }
      }
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x60;
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0xa0;
      iVar11 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar11;
    } while ((ushort)iVar11 < uVar3);
  }
  return 0;
}

/* ref: FUN_00bfb1a0 */
unsigned int F_00bfb1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xbfb1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ushort uVar8;
  code * pcVar9;
  byte bVar10;
  int * piVar11;
  uint uVar12;
  int * PTR32 * ppiVar13;
  float * pfVar14;
  int * piVar15;
  int iVar16;
  int * piVar17;
  float * pfVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x18)) = (uint)*(ushort *)(param_1 + 0xb8);
  (*(int *)(gen_frame + 0x54)) = 1;
  if (1 < *(ushort *)(param_1 + 0xb8)) {
    (*(int *)(gen_frame + 0x58)) = 0xa0;
    (*(int *)(gen_frame + 0x50)) = 0x60;
    do {
      pfVar18 = ((float *)GEN_TOP((*(int *)(param_1 + 0x18) + (*(int *)(gen_frame + 0x50)))));
      fVar1 = pfVar18[0x15];
      if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
        (*(float *)(gen_frame + 0x68)) = gen_bits2f(*(int *)(param_1 + 0x1c) + (*(int *)(gen_frame + 0x58)));
        piVar15 = (int *)0x0;
        piVar11 = (int *)(param_2[1] - *param_2 >> 3);
        (*(int * PTR32 *)(gen_frame + 0x70)) = piVar11;
        (*(int * PTR32 *)(gen_frame + 0x6c)) = (int *)0x0;
        (*(uint *)(gen_frame + 0x74)) = 1;
        if (piVar11 != (int *)0x0) {
          (*(int * PTR32 *)(gen_frame + 0x78)) = piVar11;
          do {
            if (((ushort)(*(int *)(gen_frame + 0x54)) < *(ushort *)(param_1 + 0xb8)) &&
               (iVar16 = (*(int *)(gen_frame + 0x58)) + *(int *)(param_1 + 0x1c),
               (*(uint *)(iVar16 + 0x80) & (*(uint *)(gen_frame + 0x74))) != 0)) {
              if ((char)param_4 == '\0') {
LAB_00bfb27b: ;
                uVar12 = (*(uint *)(gen_frame + 0x48));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 0;
                (*(uint *)(gen_frame + 0x48)) = uVar12 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x48)) + 0)) = 1;
                (*(uint *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x48)), 1, 3),1);
                if ((*(uint *)(iVar16 + 0x84) & (*(uint *)(gen_frame + 0x74))) == 0) goto LAB_00bfb27b;
              }
              piVar11 = *(int * PTR32 *)(*param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x6c))) * 8);
              uVar8 = *(ushort *)(*param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x6c))) * 8 + 4);
              fVar1 = pfVar18[0x14];
              pcVar9 = *(gen_code32 *)(*piVar11 + 0x20);
              (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar11;
              uVar12 = (*pcVar9)(piVar11,pfVar18 + -0x18,pfVar18,(undefined4)gen_fl2bits(fVar1),
                                 (uint)uVar8,(*(uint *)(gen_frame + 0x48)),param_1 + 0xa0,1);
              piVar11 = (*(int * PTR32 *)(gen_frame + 0x70));
              if ((char)uVar12 != '\0') {
                fVar1 = *pfVar18;
                (*(float *)(gen_frame + 0x5c)) = fVar1;
                (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
                fVar2 = (float)((float10)fVar1 - (float10)pfVar18[-0x18]);
                (*(float *)(gen_frame + 0x20)) = fVar2;
                fVar3 = pfVar18[1];
                (*(float *)(gen_frame + 0x64)) = fVar3;
                fVar4 = (float)((float10)fVar3 - (float10)pfVar18[-0x17]);
                (*(float *)(gen_frame + 0x24)) = fVar4;
                fVar5 = pfVar18[2];
                (*(float *)(gen_frame + 0x60)) = fVar5;
                fVar6 = (float)((float10)fVar5 - (float10)pfVar18[-0x16]);
                (*(float *)(gen_frame + 0x28)) = fVar6;
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                                        ((float10)fVar2 * (float10)fVar2 +
                                        (float10)fVar4 * (float10)fVar4)))))));
                (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar15;
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)))))))));
                (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar15;
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x14));
                if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < REFG(double, 0x1094438))) {
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x7c));
                }
                piVar15 = *ppiVar13;
                (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar15;
                fVar7 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x68))) + 0x8c);
                (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
                fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)));
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x7c));
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar7 - fVar19))));
                (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar15;
                if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < (float10)0)) {
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x8));
                }
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar13))) / fVar19))));
                (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar15;
                fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)));
                *pfVar18 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar19 * (float10)fVar2))));
                pfVar18[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar4 * fVar19))));
                pfVar18[2] = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar19 * (float10)fVar6))));
              }
            }
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x74)) < 0);
            piVar17 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x6c)) + 1);
            (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar17;
            piVar15 = (*(int * PTR32 *)(gen_frame + 0x78));
          } while (piVar17 < piVar11);
        }
        piVar11 = ((int *)GEN_TOP((*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 3)));
        bVar10 = (byte)piVar15 & 0x1f;
        (*(uint *)(gen_frame + 0x74)) = 1 << bVar10 | 1U >> 0x20 - bVar10;
        (*(int * PTR32 *)(gen_frame + 0x6c)) = piVar11;
        (*(int * PTR32 *)(gen_frame + 0x7c)) = (int *)0x0;
        if (piVar11 != (int *)0x0) {
          do {
            if (((ushort)(*(int *)(gen_frame + 0x54)) < *(ushort *)(param_1 + 0xb8)) &&
               (iVar16 = (*(int *)(gen_frame + 0x58)) + *(int *)(param_1 + 0x1c), piVar11 = (*(int * PTR32 *)(gen_frame + 0x6c)),
               (*(uint *)(iVar16 + 0x80) & (*(uint *)(gen_frame + 0x74))) != 0)) {
              if ((char)param_4 == '\0') {
LAB_00bfb462: ;
                uVar12 = (*(uint *)(gen_frame + 0x4c));
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 0;
                (*(uint *)(gen_frame + 0x4c)) = uVar12 & 0xffffff00;
              }
              else {
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = 1;
                (*(uint *)(gen_frame + 0x4c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4c)), 1, 3),1);
                if ((*(uint *)(iVar16 + 0x84) & (*(uint *)(gen_frame + 0x74))) == 0) goto LAB_00bfb462;
              }
              piVar11 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xbc) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x7c))) * 8)));
              (*(int * PTR32 *)(gen_frame + 0x78)) = piVar11;
              uVar12 = ((code *)*(gen_code32 *)(*piVar11 + 0x20))
                                 (piVar11,pfVar18 + -0x18,pfVar18,
                                  (undefined4)gen_fl2bits(pfVar18[0x14]),
                                  (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0xbc) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x7c))) * 8 + 4))),(*(uint *)(gen_frame + 0x4c))
                                  ,param_1 + 0xa0,1);
              piVar11 = (*(int * PTR32 *)(gen_frame + 0x6c));
              if ((char)uVar12 != '\0') {
                fVar1 = *pfVar18;
                (*(float *)(gen_frame + 0x5c)) = fVar1;
                (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x110e1b8)));
                fVar2 = (float)((float10)fVar1 - (float10)pfVar18[-0x18]);
                (*(float *)(gen_frame + 0x30)) = fVar2;
                fVar3 = pfVar18[1];
                (*(float *)(gen_frame + 0x64)) = fVar3;
                fVar4 = (float)((float10)fVar3 - (float10)pfVar18[-0x17]);
                (*(float *)(gen_frame + 0x34)) = fVar4;
                fVar5 = pfVar18[2];
                (*(float *)(gen_frame + 0x60)) = fVar5;
                fVar6 = (float)((float10)fVar5 - (float10)pfVar18[-0x16]);
                (*(float *)(gen_frame + 0x38)) = fVar6;
                fVar7 = ((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                               ((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4))));
                (*(int * PTR32 *)(gen_frame + 0x78)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar7)));
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar7))))));
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0xc));
                (*(int * PTR32 *)(gen_frame + 0x70)) = piVar15;
                if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < REFG(double, 0x1094438))) {
                  ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x70));
                }
                piVar15 = *ppiVar13;
                (*(int * PTR32 *)(gen_frame + 0x78)) = piVar15;
                fVar7 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x68))) + 0x8c);
                (*(float *)(gen_frame + 0x1c)) = 0.0;
                fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15)));
                ppiVar13 = &(*(int * PTR32 *)(gen_frame + 0x70));
                piVar15 = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar7 - fVar19))));
                (*(int * PTR32 *)(gen_frame + 0x70)) = piVar15;
                if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(piVar15))) < (float10)0)) {
                  ppiVar13 = (int * PTR32 *)&(*(float *)(gen_frame + 0x1c));
                }
                fVar7 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppiVar13))) / fVar19);
                (*(int * PTR32 *)(gen_frame + 0x78)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar7)));
                fVar19 = (float10)fVar7;
                *pfVar18 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar19 * (float10)fVar2))));
                pfVar18[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar4 * fVar19))));
                pfVar18[2] = ((float)GEN_TOF(((float10)fVar5 + (float10)(float)(fVar19 * (float10)fVar6))));
              }
            }
            (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0x74)) < 0);
            piVar15 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x7c)) + 1);
            (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar15;
          } while (piVar15 < piVar11);
        }
        if ((char)param_3 != '\0') {
          fVar1 = pfVar18[0x14];
          (*(float *)(gen_frame + 0x68)) = fVar1;
          if ((float10)pfVar18[1] < (float10)fVar1) {
            pfVar18[1] = fVar1;
            fVar1 = pfVar18[9];
            (*(float *)(gen_frame + 0x10)) = fVar1;
            (*(float *)(gen_frame + 0x4)) = 0.0;
            pfVar14 = &(*(float *)(gen_frame + 0x10));
            if (!(0.0 < fVar1)) {
              pfVar14 = &(*(float *)(gen_frame + 0x4));
            }
            pfVar18[9] = *pfVar14;
          }
        }
      }
      (*(int *)(gen_frame + 0x50)) = (*(int *)(gen_frame + 0x50)) + 0x60;
      (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 0xa0;
      iVar16 = (*(int *)(gen_frame + 0x54)) + 1;
      (*(int *)(gen_frame + 0x54)) = iVar16;
    } while ((ushort)iVar16 < (ushort)(*(uint *)(gen_frame + 0x18)));
  }
  return 0;
}

/* ref: FUN_00bfb640 */
unsigned int F_00bfb640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbfb640u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_c;
  
  puVar4 = &(*(undefined4 *)&gen_args[1]);
  if ((ushort)(*(undefined4 *)&gen_args[2]) <= (ushort)(*(undefined4 *)&gen_args[1])) {
    puVar4 = &(*(undefined4 *)&gen_args[2]);
  }
  puVar5 = &(*(undefined4 *)&gen_args[1]);
  if ((ushort)(*(undefined4 *)&gen_args[1]) <= (ushort)(*(undefined4 *)&gen_args[2])) {
    puVar5 = &(*(undefined4 *)&gen_args[2]);
  }
  uVar7 = 1 << ((byte)*(undefined2 *)puVar4 & 0x1f);
  uVar8 = 1 << ((byte)*(undefined2 *)puVar5 & 0x1f);
  local_c = 0;
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) != 0) {
    bVar3 = (byte)*(undefined2 *)puVar5 - (byte)*(undefined2 *)puVar4;
    iVar6 = 0;
    do {
      puVar1 = ((uint *)GEN_TOP((iVar6 + 0x80 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar8) >> (bVar3 & 0x1f) | (uVar2 & uVar7) << (bVar3 & 0x1f) |
                uVar2 & ~uVar7 & ~uVar8;
      puVar1 = ((uint *)GEN_TOP((iVar6 + 0x84 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))))));
      uVar2 = *puVar1;
      iVar6 = iVar6 + 0xa0;
      *puVar1 = (uVar2 & uVar8) >> (bVar3 & 0x1f) | (uVar2 & uVar7) << (bVar3 & 0x1f) |
                uVar2 & ~uVar7 & ~uVar8;
      local_c = local_c + 1;
    } while (local_c < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))));
  }
  return 0;
}

/* ref: FUN_00bfb740 */
byte F_00bfb740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbfb740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xbc);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bfb7a0 */
byte F_00bfb7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbfb7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  piVar3 = (int *)*param_1;
  uVar1 = param_1[1] - (int)((int)(uintptr_t)piVar3) >> 3;
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (((*piVar3 == param_2) && ((ushort)param_3 < *(ushort *)((int)this + 0xb8))) &&
         ((*((uint *)GEN_TOP(((uint)(ushort)param_3 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c)))) &
          1 << ((byte)uVar2 & 0x1f)) != 0)) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < uVar1);
  }
  param_1 = *(int * PTR32 *)((int)this + 0xbc);
  uVar1 = *(int *)((int)this + 0xc0) - (int)((int)(uintptr_t)param_1) >> 3;
  local_8 = 0;
  if (uVar1 != 0) {
    do {
      if (((*param_1 == param_2) && ((ushort)param_3 < *(ushort *)((int)this + 0xb8))) &&
         ((*((uint *)GEN_TOP(((uint)(ushort)param_3 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c)))) &
          1 << ((byte)uVar2 & 0x1f)) != 0)) {
        return 1;
      }
      param_1 = param_1 + 2;
      local_8 = local_8 + 1;
      uVar2 = uVar2 + 1;
    } while (local_8 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bfb890 */
byte F_00bfb890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbfb890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xbc);
    do {
      if (*piVar2 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bfb8d0 */
unsigned int F_00bfb8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbfb8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int * piVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((param_1 != 0) && ((ushort)param_3 < *(ushort *)((int)this + 0xb8))) {
    iVar4 = *(int *)((int)this + 0x20);
    uVar5 = param_3 & 0xffff;
    if (*(int *)(iVar4 + 0x48 + uVar5 * 0x50) != 4) {
      iVar1 = (uint)*(ushort *)(iVar4 + 0x48 + uVar5 * 0x50) + uVar5 * 0x14;
      *(int *)(iVar4 + 0x38 + iVar1 * 4) = param_1;
      (*(int *)(gen_frame + 0x58)) = iVar1;
      F_00bff950(this,((undefined1 *)(gen_frame + 0x0)),param_3);
      (*(float *)(gen_frame + 0x40)) = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x44)) = (float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x48)) = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x38)));
      fVar6 = (float10)(float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x34)));
      fVar7 = (float10)(float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x30)));
      fVar8 = (float10)(float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x38)));
      (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF((fVar8 * (float10)(*(float *)(gen_frame + 0x18)) +
                        (fVar7 * (float10)(*(float *)(gen_frame + 0x10)) + fVar6 * (float10)(*(float *)(gen_frame + 0x14))))));
      fVar3 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) * fVar6 + (float10)(*(float *)(gen_frame + 0x20)) * fVar7) +
                     (float10)(*(float *)(gen_frame + 0x28)) * fVar8)));
      (*(float *)(gen_frame + 0x5c)) = fVar3;
      fVar6 = F_00c4d1fa((float10)fVar3);
      (*(float *)(gen_frame + 0x5c)) = (float)fVar6;
      *((float *)GEN_TOP((*(int *)((int)this + 0x20) + 0x28 + (*(int *)(gen_frame + 0x58)) * 4))) = (float)fVar6;
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x48 + uVar5 * 0x50)));
      *piVar2 = *piVar2 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bfbba0 */
uint F_00bfbba0(unsigned int gen_a0)
{
  GEN_ENTER(0xbfbba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bfbbe0 */
unsigned int F_00bfbbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xbfbbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  if (*(char *)(param_1 + 0xba) == '\0') {
    F_00bfaf70(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else if (*(char *)(param_1 + 0xba) == '\x01') {
    F_00bfb1a0(param_1,param_2,param_3,param_4,param_5,param_6);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bfbc40 */
unsigned int F_00bfbc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbfbc40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ushort)(*(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3);
  if (((ushort)param_1 < uVar4) && ((ushort)param_2 < uVar4)) {
    iVar2 = *(int *)((int)this + 0xbc);
    iVar5 = (uint)(ushort)param_1 * 8;
    iVar6 = (uint)(ushort)param_2 * 8;
    uVar3 = *(undefined4 *)(iVar2 + iVar5);
    *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar6 + iVar2);
    *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0xbc)))) = uVar3;
    iVar2 = *(int *)((int)this + 0xbc);
    uVar1 = *(undefined2 *)(iVar2 + 4 + iVar5);
    *(undefined2 *)(iVar2 + 4 + iVar5) = *(undefined2 *)(iVar6 + 4 + iVar2);
    *((undefined2 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0xbc)))) = uVar1;
    F_00bfb640(this,param_3,param_4);
  }
  return 0;
}

/* ref: FUN_00bfbcd0 */
uint F_00bfbcd0(float gen_a0)
{
  GEN_ENTER(0xbfbcd0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bfe5f0 */
uint F_00bfe5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbfe5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  int * piVar5;
  uint uVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar6 = *(int *)((int)this + 0xd0) - *(int *)((int)this + 0xcc) >> 3;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(uint *)(gen_frame + 0x10)) = uVar6;
  (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1088068);
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar8 = 0;
  if (uVar6 != 0) {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x18)) = 0.0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0xcc) + (*(uint *)(gen_frame + 0x2c)) * 8)));
      piVar5 = (int *)*puVar1;
      pfVar2 = ((float *)GEN_TOP(((uint)*(ushort *)(puVar1 + 1) * 0xa0 + 0x40 +
                        *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x1c))));
      ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,&(*(float *)(gen_frame + 0x0)),pfVar2 + 0xc);
      pfVar7 = &(*(float *)(gen_frame + 0x28));
      fVar3 = ((float)GEN_TOF(((float10)pfVar2[2] * (float10)(*(float *)(gen_frame + 0x8)) +
                     ((float10)(*(float *)(gen_frame + 0x0)) * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)(*(float *)(gen_frame + 0x4)))
                     )));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      fVar3 = ((float)GEN_TOF(ABS((float10)fVar3)));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      fVar3 = ((float)GEN_TOF((((float10)fVar3 - (float10)*(double *)&REFG(undefined, 0x10919f0)) *
                     (float10)*(double *)&REFG(undefined, 0x1094788))));
      (*(float *)(gen_frame + 0x28)) = fVar3;
      if (!((float10)fVar3 < (float10)1)) {
        pfVar7 = &(*(float *)(gen_frame + 0x1c));
      }
      if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar7)) {
        pfVar7 = &(*(float *)(gen_frame + 0x18));
      }
      fVar3 = *pfVar7;
      (*(float *)(gen_frame + 0x28)) = (float)((float10)1 - (float10)fVar3);
      fVar9 = (float10)(*(float *)(gen_frame + 0x24));
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
      fVar3 = ((float)GEN_TOF(((float10)(float)((float10)1 - (float10)fVar3) * fVar9)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar4 = pfVar2[4];
      (*(float *)(gen_frame + 0x28)) = fVar4;
      fVar9 = (float10)fVar4;
      fVar10 = (float10)fVar3;
      pfVar2[4] = ((float)GEN_TOF((fVar10 * ((float10)(*(float *)(gen_frame + 0x0)) - fVar9) + fVar9)));
      (*(float *)(gen_frame + 0x14)) = pfVar2[5];
      fVar9 = (float10)pfVar2[5];
      pfVar2[5] = ((float)GEN_TOF((fVar9 + fVar10 * ((float10)(*(float *)(gen_frame + 0x4)) - fVar9))));
      (*(float *)(gen_frame + 0x14)) = pfVar2[6];
      fVar9 = (float10)pfVar2[6];
      fVar3 = ((float)GEN_TOF((fVar9 + ((float10)(*(float *)(gen_frame + 0x8)) - fVar9) * fVar10)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      pfVar2[6] = fVar3;
      pfVar2[8] = (float)((float10)fVar3 * (float10)pfVar2[1] -
                         (float10)pfVar2[2] * (float10)pfVar2[5]);
      pfVar2[9] = (float)((float10)pfVar2[4] * (float10)pfVar2[2] -
                         (float10)pfVar2[6] * (float10)*pfVar2);
      pfVar2[10] = (float)((float10)pfVar2[5] * (float10)*pfVar2 -
                          (float10)pfVar2[4] * (float10)pfVar2[1]);
      F_0046f390(pfVar2 + 8);
      pfVar2[4] = (float)((float10)pfVar2[9] * (float10)pfVar2[2] -
                         (float10)pfVar2[10] * (float10)pfVar2[1]);
      pfVar2[5] = (float)((float10)pfVar2[10] * (float10)*pfVar2 -
                         (float10)pfVar2[8] * (float10)pfVar2[2]);
      pfVar2[6] = (float)((float10)pfVar2[8] * (float10)pfVar2[1] -
                         (float10)pfVar2[9] * (float10)*pfVar2);
      F_0046f390(pfVar2 + 4);
      uVar8 = (*(uint *)(gen_frame + 0x2c)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar8;
    } while (uVar8 < (*(uint *)(gen_frame + 0x10)));
  }
  return uVar8;
}

/* ref: FUN_00bfe7f0 */
unsigned int F_00bfe7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbfe7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  if ((param_1 != 0) && ((int)(uint)(ushort)param_2 < (int)(*(ushort *)((int)this + 0xb8) - 1))) {
    iVar1 = *(int *)((int)this + 0xcc);
    if (iVar1 != *(int *)((int)this + 0xd0)) {
      uVar3 = (*(int *)((int)this + 0xd0) - iVar1 >> 3) - 1;
      uVar4 = 0;
      while ((*(int *)(iVar1 + (uint)uVar4 * 8) != param_1 ||
             (*(ushort *)(iVar1 + (uint)uVar4 * 8 + 4) != (ushort)param_2))) {
        uVar4 = uVar4 + 1;
        if ((ushort)uVar3 < uVar4) {
          return 0;
        }
      }
      iVar2 = (uVar3 & 0xffff) * 8;
      *(undefined4 *)(iVar1 + (uint)uVar4 * 8) = *(undefined4 *)(iVar1 + iVar2);
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xcc) + 4 + (uint)uVar4 * 8))) =
           *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xcc) + 4 + iVar2)));
      if (*(int *)((int)this + 0xcc) != *(int *)((int)this + 0xd0)) {
        *(int *)((int)this + 0xd0) = *(int *)((int)this + 0xd0) + -8;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bfe8a0 */
uint F_00bfe8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbfe8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  uVar2 = *(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3;
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xbc);
    while ((*piVar4 != param_1 || (*(ushort *)(piVar4 + 1) != param_2))) {
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
      if (uVar2 <= uVar5) {
        return uVar2;
      }
    }
    piVar4 = ((int *)GEN_TOP((*(int * PTR32 *)((int)this + 0xbc))[uVar5 * 2]));
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbc) + uVar5 * 8))) = 0;
    }
    uVar3 = uVar5;
    if (uVar5 < (*(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3) - 1U) {
      do {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbc) + uVar3 * 8)));
        *puVar1 = puVar1[2];
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xbc) + uVar3 * 8 + 4))) =
             *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xbc) + 0xc + uVar3 * 8)));
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xbc) + uVar3 * 8 + 6))) =
             *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xbc) + 0xe + uVar3 * 8)));
        uVar3 = uVar3 + 1;
      } while (uVar3 < (*(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3) - 1U);
    }
    F_00bf97a0(this,uVar5);
    uVar3 = *(uint *)((int)this + 0xc0);
    if (*(uint *)((int)this + 0xbc) != uVar3) {
      uVar3 = uVar3 - 8;
      *(uint *)((int)this + 0xc0) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bfe990 */
uint F_00bfe990(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbfe990u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float fVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = *(undefined * PTR32 *)((int)param_1 + 0x10);
  pfVar5 = *(float * PTR32 *)((int)param_1 + 0x18);
  (*(float *)(gen_frame + 0x60)) = *pfVar5;
  (*(float *)(gen_frame + 0x64)) = pfVar5[1];
  uVar3 = *(short *)((int)param_1 + 0xb8) - 1;
  (*(float *)(gen_frame + 0x68)) = pfVar5[2];
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = param_1;
  (*(float *)(gen_frame + 0x90)) = 0.0;
  (*(float *)(gen_frame + 0x94)) = 0.0;
  (*(float *)(gen_frame + 0x98)) = 0.0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0xac)) = 0;
    (*(int *)(gen_frame + 0xa4)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0xa8)) = ((ushort *)GEN_TOP((*(int *)((int)param_1 + 0x14) + 2)));
    (*(uint *)(gen_frame + 0x78)) = (uint)uVar3;
    do {
      pfVar5 = ((float *)GEN_TOP(((*(int *)(gen_frame + 0xac)) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x18))));
      iVar6 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x1c) + (*(int *)(gen_frame + 0xa4));
      (*(float *)(gen_frame + 0x80)) = *pfVar5;
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x84)) = fVar1;
      fVar16 = pfVar5[2];
      (*(uint *)(gen_frame + 0x7c)) = iVar6 + 0x40;
      (*(float *)(gen_frame + 0x88)) = fVar16;
      if ((char)param_2 != '\0') {
        (*(float *)(gen_frame + 0x40)) = (float)((float10)pfVar5[0x18] - (float10)*pfVar5);
        (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar5[0x19] - (float10)fVar1);
        (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar5[0x1a] - (float10)fVar16);
        F_0046f390(&(*(float *)(gen_frame + 0x40)));
        fVar1 = *(float *)(iVar6 + 0x8c);
        (*(float *)(gen_frame + 0xcc)) = fVar1;
        fVar7 = (float10)fVar1;
        fVar9 = (float10)(*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x90)) = (float)(fVar7 * fVar9);
        fVar8 = (float10)(*(float *)(gen_frame + 0x94));
        (*(float *)(gen_frame + 0x94)) = (float)(fVar8 * fVar7);
        fVar10 = (float10)(*(float *)(gen_frame + 0x98));
        (*(float *)(gen_frame + 0x98)) = (float)(fVar7 * fVar10);
        (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x40));
        fVar1 = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar9) + (float10)(*(float *)(gen_frame + 0x60)))));
        (*(float *)(gen_frame + 0x80)) = fVar1;
        (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x44));
        fVar16 = ((float)GEN_TOF(((float10)(float)(fVar8 * fVar7) + (float10)(*(float *)(gen_frame + 0x64)))));
        (*(float *)(gen_frame + 0x84)) = fVar16;
        (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x48));
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar10) + (float10)(*(float *)(gen_frame + 0x68)))));
        (*(float *)(gen_frame + 0x88)) = fVar2;
        *(float *)((*(uint *)(gen_frame + 0x7c)) + 0x30) = fVar1;
        *(float *)((*(uint *)(gen_frame + 0x7c)) + 0x34) = fVar16;
        *(float *)((*(uint *)(gen_frame + 0x7c)) + 0x38) = fVar2;
        (*(float *)(gen_frame + 0x68)) = fVar2;
        (*(float *)(gen_frame + 0x60)) = fVar1;
        (*(float *)(gen_frame + 0x64)) = fVar16;
      }
      if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114)))
      {
        F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xd0)),(uint)*(*(ushort * PTR32 *)(gen_frame + 0xa8)));
        uVar4 = (*(uint *)(gen_frame + 0x7c));
        (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x100));
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x104));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x108));
        (*(float *)(gen_frame + 0x100)) = 0.0;
        (*(float *)(gen_frame + 0x104)) = 0.0;
        (*(float *)(gen_frame + 0x108)) = 0.0;
        F_004eeed0(&(*(float *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x7c)));
        F_004eeed0(&(*(float *)(gen_frame + 0xb0)),(uint)((undefined1 *)(gen_frame + 0xd0)));
        fVar9 = (float10)(*(float *)(gen_frame + 0x4));
        fVar10 = (float10)(*(float *)(gen_frame + 0x0));
        fVar7 = (float10)(*(float *)(gen_frame + 0x8));
        fVar8 = (float10)(*(float *)(gen_frame + 0xc));
        fVar1 = ((float)GEN_TOF((fVar8 * (float10)(*(float *)(gen_frame + 0xbc)) +
                       (fVar7 * (float10)(*(float *)(gen_frame + 0xb8)) +
                       ((float10)(*(float *)(gen_frame + 0xb4)) * fVar9 + fVar10 * (float10)(*(float *)(gen_frame + 0xb0)))))));
        (*(float *)(gen_frame + 0xcc)) = fVar1;
        fVar16 = REFG(float, 0x1090708);
        if ((float10)0 <= (float10)fVar1) {
          fVar16 = REFG(float, 0x1087f04);
        }
        fVar11 = (float10)(*(float *)(gen_frame + 0xb0));
        (*(float *)(gen_frame + 0x70)) = fVar16;
        fVar12 = (float10)fVar16;
        (*(float *)(gen_frame + 0xb0)) = (float)(fVar12 * fVar11);
        fVar1 = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0xb4)));
        (*(float *)(gen_frame + 0xb4)) = fVar1;
        fVar13 = (float10)(*(float *)(gen_frame + 0xb8));
        (*(float *)(gen_frame + 0xb8)) = (float)(fVar13 * fVar12);
        fVar14 = (float10)(*(float *)(gen_frame + 0xbc));
        (*(float *)(gen_frame + 0xbc)) = (float)(fVar14 * fVar12);
        fVar15 = (float10)param_3;
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar15 * ((float10)(float)(fVar12 * fVar11) - fVar10) + fVar10)));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)fVar1 - fVar9) * fVar15 + fVar9)));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)(float)(fVar13 * fVar12) - fVar7) * fVar15 + fVar7)));
        (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)(float)(fVar14 * fVar12) - fVar8) * fVar15 + fVar8)));
        (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x80)) + fVar15 * ((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x80))))));
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x84)) + fVar15 * ((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x84))))));
        (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x88)) + ((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x88))) * fVar15)));
        F_004ef0c0(uVar4,(uint)&(*(float *)(gen_frame + 0x10)));
        *(float *)(uVar4 + 0x34) = (*(float *)(gen_frame + 0x34));
        *(float *)(uVar4 + 0x30) = (*(float *)(gen_frame + 0x30));
        *(float *)(uVar4 + 0x38) = (*(float *)(gen_frame + 0x38));
        (*(float *)(gen_frame + 0xcc)) = (float)((float10)1 - (float10)param_3);
        fVar9 = (float10)(float)((float10)1 - (float10)param_3);
        pfVar5[8] = (float)(fVar9 * (float10)pfVar5[8]);
        pfVar5[9] = (float)((float10)pfVar5[9] * fVar9);
        pfVar5[10] = (float)(fVar9 * (float10)pfVar5[10]);
      }
      (*(int *)(gen_frame + 0xa4)) = (*(int *)(gen_frame + 0xa4)) + 0xa0;
      (*(int *)(gen_frame + 0xac)) = (*(int *)(gen_frame + 0xac)) + 0x60;
      (*(ushort * PTR32 *)(gen_frame + 0xa8)) = (*(ushort * PTR32 *)(gen_frame + 0xa8)) + 1;
      uVar4 = (*(uint *)(gen_frame + 0x78)) - 1;
      (*(uint *)(gen_frame + 0x78)) = uVar4;
    } while (uVar4 != 0);
  }
  uVar4 = F_00bfe5f0((*(undefined * PTR32 *)(gen_frame + 0x74)));
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return uVar4;
}

/* ref: FUN_00bff050 */
uint F_00bff050(unsigned int gen_a0)
{
  GEN_ENTER(0xbff050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110e274));
  iVar1 = *(int *)((int)this + 0xcc);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xd4) - iVar1 >> 3) * 8,200);
  }
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  iVar1 = *(int *)((int)this + 0xbc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc4) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  return uVar2;
}

/* ref: FUN_00bff0e0 */
unsigned int F_00bff0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbff0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xbc) + uVar2 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xbc) + uVar2 * 8))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xc0) - *(int *)((int)this + 0xbc) >> 3));
  }
  if (*(int *)((int)this + 0xbc) != *(int *)((int)this + 0xc0)) {
    *(int *)((int)this + 0xc0) = *(int *)((int)this + 0xbc);
  }
  return 0;
}

/* ref: FUN_00bff170 */
uint F_00bff170(unsigned int gen_a0)
{
  GEN_ENTER(0xbff170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110e274));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302c70);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302c74);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302c78);
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302c80);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302c84);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302c88);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1302c90);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1302c94);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1302c98);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302c70);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302c74);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302c78);
  *(undefined4 *)((int)this + 0x70) = REFG(float, 0x1302c80);
  *(undefined4 *)((int)this + 0x74) = REFG(float, 0x1302c84);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x78) = REFG(float, 0x1302c88);
  *(undefined4 *)((int)this + 0x80) = REFG(float, 0x1302c90);
  *(undefined4 *)((int)this + 0x84) = REFG(float, 0x1302c94);
  *(undefined4 *)((int)this + 0x88) = REFG(float, 0x1302c98);
  *(undefined4 *)((int)this + 0x90) = REFG(float, 0x1302c70);
  *(undefined4 *)((int)this + 0x94) = REFG(float, 0x1302c74);
  *(undefined4 *)((int)this + 0x98) = REFG(float, 0x1302c78);
  *(undefined4 *)((int)this + 0xa4) = uVar1;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  uVar1 = REFG(float, 0x110e278);
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xba) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  return (uint)this;
}

/* ref: FUN_00bff330 */
byte F_00bff330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbff330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (param_1 != 0) {
    if ((int)(uint)(ushort)param_2 < (int)(*(ushort *)((int)this + 0xb8) - 1)) {
      (*(ushort *)(gen_frame + 0x8)) = (ushort)param_2;
      (*(int *)(gen_frame + 0x4)) = param_1;
      F_00c00210((undefined *)((int)this + 0xcc),&(*(int *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bff380 */
uint F_00bff380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbff380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  iVar1 = *(int *)((int)this + 0xc0);
  iVar2 = *(int *)((int)this + 0xbc);
  (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_2;
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  (*(ushort *)(gen_frame + 0xa)) = (short)(iVar1 - iVar2 >> 3) + (short)param_3;
  F_00bc0510((undefined *)((int)this + 0xbc),&(*(int * PTR32 *)(gen_frame + 0x4)));
  return (uint)(*(ushort *)(gen_frame + 0xa));
}

/* ref: FUN_00bff3f0 */
uint F_00bff3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbff3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  ushort * puVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  uVar6 = (*(uint *)&gen_args[4]);
  uVar3 = (ushort)(*(uint *)&gen_args[4]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(*(uint *)&gen_args[2]);
  (*(ushort *)(gen_frame + 0x6)) = (ushort)(*(uint *)&gen_args[4]);
  F_00bc0510(piVar1,&(*(int * PTR32 *)(gen_frame + 0x0)));
  iVar2 = *piVar1;
  uVar4 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) - iVar2 >> 3) - 1;
  uVar6 = (uVar6 & 0xffff) - ((*(uint *)&gen_args[3]) & 0xffff);
  (*(uint *)&gen_args[2]) = uVar4;
  (*(int * PTR32 *)&gen_args[1]) = (int *)uVar4;
  (*(uint *)&gen_args[4]) = uVar6;
  puVar5 = &(*(uint *)&gen_args[4]);
  if (uVar4 <= uVar6) {
    puVar5 = (uint *)&(*(int * PTR32 *)&gen_args[1]);
  }
  uVar6 = *puVar5;
  if (uVar6 != 0) {
    puVar7 = (ushort *)(iVar2 + -2 + uVar6 * 8);
    do {
      if (*puVar7 < uVar3) break;
      puVar7 = puVar7 + -4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; uVar6 < uVar4; uVar4 = uVar4 - 1) {
    *(undefined4 *)(*piVar1 + uVar4 * 8) = *(undefined4 *)(*piVar1 + -8 + uVar4 * 8);
    *(undefined2 *)(*piVar1 + uVar4 * 8 + 4) = *(undefined2 *)(*piVar1 + -4 + uVar4 * 8);
    *(undefined2 *)(*piVar1 + uVar4 * 8 + 6) = *(undefined2 *)(*piVar1 + -2 + uVar4 * 8);
  }
  *(int * PTR32 *)(*piVar1 + uVar6 * 8) = (*(int * PTR32 *)(gen_frame + 0x0));
  *(undefined2 *)(*piVar1 + 4 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x4));
  *(ushort *)(*piVar1 + 6 + uVar6 * 8) = (*(ushort *)(gen_frame + 0x6));
  uVar6 = ((*(uint *)&gen_args[3]) & 0xffff) + uVar6;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00bf96f0((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar6);
  }
  return uVar6;
}

/* ref: FUN_00bff510 */
uint F_00bff510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbff510u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bff520 */
uint F_00bff520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbff520u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bff5a0 */
uint F_00bff5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbff5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,200);
  return (uint)uVar1;
}

/* ref: FUN_00bff5d0 */
uint F_00bff5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbff5d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,200);
  return uVar1;
}

/* ref: FUN_00bff610 */
uint F_00bff610(unsigned int gen_a0)
{
  GEN_ENTER(0xbff610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 0x60;
}

/* ref: FUN_00bff620 */
uint F_00bff620(unsigned int gen_a0)
{
  GEN_ENTER(0xbff620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 0xa0;
}

/* ref: FUN_00bff630 */
uint F_00bff630(unsigned int gen_a0)
{
  GEN_ENTER(0xbff630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 0x50;
}

/* ref: FUN_00bff640 */
uint F_00bff640(unsigned int gen_a0)
{
  GEN_ENTER(0xbff640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 2;
}

/* ref: FUN_00bff650 */
uint F_00bff650(unsigned int gen_a0)
{
  GEN_ENTER(0xbff650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bff660 */
uint F_00bff660(unsigned int gen_a0)
{
  GEN_ENTER(0xbff660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bff6a0 */
unsigned int F_00bff6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbff6a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return 0;
}

/* ref: FUN_00bff700 */
uint F_00bff700(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbff700u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)((float10)param_2[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_2[3]);
  return (uint)param_1;
}

/* ref: FUN_00bff730 */
uint F_00bff730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbff730u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_00bff760 */
uint F_00bff760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbff760u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  F_00b67660(param_1,param_2,param_3,param_4);
  return param_1;
}

/* ref: FUN_00bff930 */
uint F_00bff930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbff930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00bff950 */
uint F_00bff950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbff950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  undefined * pvVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  float fVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  fVar7 = gen_bits2f((uint)(ushort)param_2);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    (*(float *)(gen_frame + 0x3c)) = fVar7;
    if (fVar7 == gen_bits2f(*(ushort *)((int)this + 0xb8) - 1)) {
      puVar8 = (undefined4 *)
               F_00623320(*(undefined * PTR32 *)((int)this + 0x10),
                            (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + (int)gen_fl2bits(fVar7) * 2))));
      puVar5 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar8 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)));
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      puVar5 = ((undefined4 *)(gen_frame + 0xc0));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      pfVar4 = (float *)F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90,((undefined4 *)(gen_frame + 0xc0)));
      (*(float *)(gen_frame + 0x20)) = *pfVar4;
      (*(float *)(gen_frame + 0x24)) = pfVar4[1];
      (*(float *)(gen_frame + 0x28)) = pfVar4[2];
      F_0046f390(&(*(float *)(gen_frame + 0x20)));
      fVar7 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) * 0xa0 + 0x8c + *(int *)((int)pvVar3 + 0x1c))));
      puVar8 = ((undefined4 *)(gen_frame + 0xc0));
      (*(float *)(gen_frame + 0x3c)) = fVar7;
      fVar10 = (float10)fVar7;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar10);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x28)));
      fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(float)(fVar10 * (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x20)) = fVar7;
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar10))));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(float)(fVar10 * (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      (*(float *)(gen_frame + 0xf0)) = fVar7;
      (*(float *)(gen_frame + 0xf4)) = fVar1;
      (*(float *)(gen_frame + 0xf8)) = fVar2;
      puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
    }
    else {
      puVar8 = (undefined4 *)
               F_00623320(*(undefined * PTR32 *)((int)this + 0x10),
                            (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + 2 + (int)gen_fl2bits(fVar7) * 2))));
      puVar5 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar8 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)));
      puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
    }
  }
  else {
    puVar8 = &REFG(float, 0x1302d00);
    puVar5 = param_1;
  }
  puVar9 = puVar5;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar5;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)puVar5;
}

/* ref: FUN_00bffd10 */
byte F_00bffd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbffd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(ushort *)((int)this + 0xb8) <= (ushort)param_2) {
    return 0;
  }
  return (*((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x80 + *(int *)((int)this + 0x1c)))) &
         1 << ((byte)param_1 & 0x1f)) != 0;
}

/* ref: FUN_00bffd50 */
byte F_00bffd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbffd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(ushort *)((int)this + 0xb8) <= (ushort)param_2) {
    return 0;
  }
  return (*((uint *)GEN_TOP(((uint)(ushort)param_2 * 0xa0 + 0x84 + *(int *)((int)this + 0x1c)))) &
         1 << ((byte)param_1 & 0x1f)) != 0;
}

/* ref: FUN_00bffd90 */
uint F_00bffd90(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbffd90u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[1]);
  (*(float *)(gen_frame + 0x4)) = (*(float *)&gen_args[0]);
  pfVar1 = &(*(float *)(gen_frame + 0x8));
  if (!((float10)(*(float *)&gen_args[0]) < (float10)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!((float10)*pfVar1 < (float10)(*(float *)&gen_args[2]))) {
    pfVar2 = &(*(float *)&gen_args[0]);
  }
  return (uint)pfVar2;
}

/* ref: FUN_00bffe20 */
uint F_00bffe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbffe20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: std::allocator<std::_Container_proxy>::construct_00bffe60 */
unsigned int F_00bffe60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbffe60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bffeb0 */
unsigned int F_00bffeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbffeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bffee0 */
unsigned int F_00bffee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbffee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00bfff10 */
uint F_00bfff10(float gen_a0)
{
  GEN_ENTER(0xbfff10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bfff70 */
unsigned int F_00bfff70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbfff70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bfffa0 */
uint F_00bfffa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbfffa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bfffe0 */
unsigned int F_00bfffe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbfffe0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00c00020 */
uint F_00c00020(unsigned int gen_a0)
{
  GEN_ENTER(0xc00020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00c00060 */
uint F_00c00060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar3 = F_004296a0(param_1 * 8,0,200);
    F_00bfffe0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    }
    uVar4 = uVar3 + (iVar2 - iVar1 >> 3) * 8;
    *(uint *)this = uVar3;
    *(uint *)((int)this + 8) = param_1 * 8 + uVar3;
    *(uint *)((int)this + 4) = uVar4;
  }
  return uVar4;
}

/* ref: FUN_00c00110 */
uint F_00c00110(unsigned int gen_a0)
{
  GEN_ENTER(0xc00110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 3) * 8,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00c00150 */
uint F_00c00150(unsigned int gen_a0)
{
  GEN_ENTER(0xc00150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1);
  }
  return uVar1;
}

/* ref: FUN_00c00170 */
uint F_00c00170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00c00060(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00c00060(this,uVar2);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::BoneChain::vf0 */
uint F_00c001e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc001e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bff050(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00c00210 */
uint F_00c00210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar4) && (*(undefined4 * PTR32 *)this <= param_1)) {
    iVar5 = (int)param_1 - (int)*(undefined4 * PTR32 *)((int)(uintptr_t)this) >> 3;
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      puVar4 = (undefined4 *)F_00c00170(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = *(int *)this;
      *puVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      uVar3 = *(uint *)(iVar2 + 4 + iVar5 * 8);
      puVar1[1] = uVar3;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar3;
    }
  }
  else {
    if (puVar4 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00c00170(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_1;
      puVar4[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return (uint)puVar4;
}

/* ref: FUN_00c00290 */
uint F_00c00290(unsigned int gen_a0)
{
  GEN_ENTER(0xc00290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  for (uVar2 = param_1; 0xf < uVar2; uVar2 = uVar2 + 1 >> 1) {
    iVar1 = iVar1 + 1;
  }
  if (uVar2 < 8) {
    return uVar2;
  }
  return iVar1 * 8 + 8U | uVar2 - 8;
}

/* ref: FUN_00c002c0 */
uint F_00c002c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc002c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (int)param_1 >> 3 & 0x1f;
  uVar1 = param_1;
  if (uVar2 != 0) {
    uVar1 = (param_1 & 7) + 8 << ((char)uVar2 - 1U & 0x1f);
  }
  return uVar1;
}

/* ref: FUN_00c002e0 */
uint F_00c002e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc002e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  for (uVar1 = param_1; 0xff < uVar1; uVar1 = uVar1 >> 8) {
    iVar2 = iVar2 + 8;
  }
  return (uint)(byte)(&REFG(undefined, 0x110e498))[(int)(uVar1)] + iVar2;
}

/* ref: FUN_00c00310 */
uint F_00c00310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00310u, gen_a0, gen_a1, 0u, 0u);
  double * param_1 = (double *)(uintptr_t)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  bool bVar1;
  
  if (*(int *)(param_1 + 1) != *(int *)(param_2 + 1)) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(int *)(param_1 + 1))) {
  case 0: ;
    return 1;
  default: ;
    return (uint)(*(int *)param_1 == *(int *)param_2);
  case 3: ;
    break;
  }
  bVar1 = GEN_ISNAN(*param_1) || GEN_ISNAN(*param_2);
  if (bVar1 == (bVar1 || *param_1 == *param_2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c00370 */
uint F_00c00370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00370u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte * pbVar1;
  double * pdVar2;
  int iVar3;
  double dVar4;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[0]);
  dVar4 = F_00c52474((*(byte * PTR32 *)&gen_args[0]),&(*(byte * PTR32 *)&gen_args[0]));
  pdVar2 = (*(double * PTR32 *)&gen_args[1]);
  *(*(double * PTR32 *)&gen_args[1]) = dVar4;
  if ((*(byte * PTR32 *)&gen_args[0]) == pbVar1) {
    return 0;
  }
  if ((*(*(byte * PTR32 *)&gen_args[0]) == 0x78) || (*(*(byte * PTR32 *)&gen_args[0]) == 0x58)) {
    (*(double * PTR32 *)&gen_args[1]) = (double *)F_00c4abb6((char *)pbVar1,(char * PTR32 *)&(*(byte * PTR32 *)&gen_args[0]),0x10);
    dVar4 = (double)(int)(*(double * PTR32 *)&gen_args[1]);
    if ((int)(*(double * PTR32 *)&gen_args[1]) < 0) {
      dVar4 = dVar4 + *(double *)&REFG(double, 0x10b8de8);
    }
    *pdVar2 = dVar4;
  }
  if (*(*(byte * PTR32 *)&gen_args[0]) == 0) {
    return 1;
  }
  iVar3 = F_00c4873c((uint)*(*(byte * PTR32 *)&gen_args[0]));
  pbVar1 = (*(byte * PTR32 *)&gen_args[0]);
  while (iVar3 != 0) {
    (*(byte * PTR32 *)&gen_args[0]) = pbVar1 + 1;
    iVar3 = F_00c4873c((uint)*(*(byte * PTR32 *)&gen_args[0]));
    pbVar1 = (*(byte * PTR32 *)&gen_args[0]);
  }
  return (uint)(*pbVar1 == 0);
}

/* ref: FUN_00c00420 */
uint F_00c00420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00420u, gen_a0, gen_a1, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  uint uVar4;
  
  puVar2 = *(uint * PTR32 *)(in_esi + 8);
  pcVar3 = in_edx;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00c05a80(in_esi,in_edx,(int)pcVar3 - (int)(in_edx + 1));
  *puVar2 = uVar4;
  puVar2[2] = 4;
  uVar4 = *(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8);
  if ((int)uVar4 < 0x11) {
    uVar4 = F_00bb8d50(in_esi,1);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  return uVar4;
}

/* ref: FUN_00c00470 */
uint F_00c00470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc00470u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  char cVar2;
  uint * puVar3;
  double * pdVar4;
  undefined4 uVar5;
  uint uVar6;
  char * pcVar7;
  char * pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x0));
  puVar3 = *(uint * PTR32 *)(param_1 + 8);
  (*(int *)(gen_frame + 0x0)) = param_3;
  iVar9 = 1;
  (*(int *)(gen_frame + 0x10)) = 1;
  pcVar7 = &REFG(undefined1, 0x14c5be4);
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  uVar6 = F_00c05a80(param_1,&REFG(undefined1, 0x14c5be4),pcVar8 + -0x14c5be4);
  *puVar3 = uVar6;
  puVar3[2] = 4;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
    F_00bb8d50(param_1,1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  (*(uint *)(gen_frame + 0xc)) = F_00c51da0(param_2,0x25);
  pcVar7 = param_2;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    iVar10 = (*(int *)(gen_frame + 0x0)) + -4;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + -8;
    do {
      puVar3 = *(uint * PTR32 *)(param_1 + 8);
      uVar6 = F_00c05a80(param_1,pcVar7,(*(uint *)(gen_frame + 0xc)) - (int)pcVar7);
      *puVar3 = uVar6;
      puVar3[2] = 4;
      if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
        F_00bb8d50(param_1,1);
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
      pdVar4 = *(double * PTR32 *)(param_1 + 8);
      switch((unsigned int)(uintptr_t)(*(undefined1 *)((*(uint *)(gen_frame + 0xc)) + 1))) {
      case 0x25: ;
        F_00c00420(&REFG(undefined, 0x13476bc),param_1);
        break;
      default: ;
        ((char *)(gen_frame + 0x4))[1] = *(undefined1 *)((*(uint *)(gen_frame + 0xc)) + 1);
        pcVar7 = ((char *)(gen_frame + 0x4));
        ((char *)(gen_frame + 0x4))[0] = '%';
        ((char *)(gen_frame + 0x4))[2] = 0;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        uVar6 = F_00c05a80(param_1,((char *)(gen_frame + 0x4)),(int)pcVar7 - (int)(((char *)(gen_frame + 0x4)) + 1));
        *(uint *)pdVar4 = uVar6;
        *(uint *)(pdVar4 + 1) = 4;
        iVar9 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8);
        bVar13 = SBORROW4(iVar9,0x10);
        bVar12 = iVar9 + -0x10 < 0;
        bVar11 = iVar9 == 0x10;
        goto LAB_00c0066d;
      case 99: ;
        uVar1 = *(undefined1 *)(iVar10 + 4);
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        (*(undefined1 *)(gen_frame + 0x8)) = uVar1;
        (*(undefined1 *)(gen_frame + 0x9)) = 0;
        F_00c00420(&(*(undefined1 *)(gen_frame + 0x8)),param_1);
        break;
      case 100: ;
        iVar9 = *(int *)(iVar10 + 4);
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        *pdVar4 = (double)iVar9;
        *(uint *)(pdVar4 + 1) = 3;
        iVar9 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8);
        bVar13 = SBORROW4(iVar9,0x10);
        bVar12 = iVar9 + -0x10 < 0;
        bVar11 = iVar9 == 0x10;
        goto LAB_00c0066d;
      case 0x66: ;
        *pdVar4 = *(double *)((*(int *)(gen_frame + 0x0)) + 8);
        *(uint *)(pdVar4 + 1) = 3;
        iVar9 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8);
        iVar10 = iVar10 + 8;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 8;
        bVar13 = SBORROW4(iVar9,0x10);
        bVar12 = iVar9 + -0x10 < 0;
        bVar11 = iVar9 == 0x10;
LAB_00c0066d: ;
        if (bVar11 || bVar13 != bVar12) {
          F_00bb8d50(param_1,1);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
        break;
      case 0x70: ;
        uVar5 = *(undefined4 *)(iVar10 + 4);
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        F_00c4720f(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x13476b8),uVar5);
        F_00c00420(((undefined1 *)(gen_frame + 0x14)),param_1);
        break;
      case 0x73: ;
        pcVar7 = *(char * PTR32 *)(iVar10 + 4);
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 4;
        iVar10 = iVar10 + 4;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = ((char *)REFP(0x13476b0));
        }
        F_00c00420(pcVar7,param_1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 2;
      pcVar7 = (char *)((*(uint *)(gen_frame + 0xc)) + 2);
      (*(uint *)(gen_frame + 0xc)) = F_00c51da0(pcVar7,0x25);
      iVar9 = (*(int *)(gen_frame + 0x10));
    } while ((*(uint *)(gen_frame + 0xc)) != 0);
  }
  puVar3 = *(uint * PTR32 *)(param_1 + 8);
  pcVar8 = pcVar7;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar6 = F_00c05a80(param_1,pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
  *puVar3 = uVar6;
  puVar3[2] = 4;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
    F_00bb8d50(param_1,1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  F_00c03460(param_1,iVar9 + 1,(*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 4) + -1);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar9 * -0x10;
  iVar9 = *((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)&(*(int *)(gen_frame + 0x0)));
  return iVar9 + 0x10;
}

/* ref: FUN_00c00790 */
uint F_00c00790(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc00790u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c007b0 */
uint F_00c007b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc007b0u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  char cVar1;
  char * pcVar2;
  gen_size32 _Count;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  
  if (*param_2 == '=') {
    pcVar2 = F_00c52620(param_1,param_2 + 1,param_3);
    param_1[param_3 - 1] = '\0';
    return (uint)pcVar2;
  }
  if (*param_2 != '@') {
    _Count = F_00c525d0(param_2,&REFG(undefined, 0x13476c4));
    *(undefined8 *)param_1 = (*(undefined8 *)((char *)REFP(0x013476c8) + 0));
    if (param_3 - 0x11 < _Count) {
      _Count = param_3 - 0x11;
    }
    *(undefined2 *)(param_1 + 8) = (*(undefined2 *)((char *)REFP(0x013476c8) + 8));
    pcVar2 = param_2;
    if (param_2[_Count] == '\0') {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = pcVar2 - (int)param_2;
      pcVar5 = param_1 + -1;
      do {
        pcVar7 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
        pcVar6 = param_2;
      } while (*pcVar7 != '\0');
    }
    else {
      F_00c52490(param_1,param_2,_Count);
      pcVar6 = (char *)&REFG(undefined4, 0x13476d4);
      pcVar5 = (char *)&REFG(undefined4, 0x13476d4);
      do {
        pcVar2 = pcVar5;
        pcVar5 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2 = pcVar2 + -0x13476d3;
      pcVar5 = param_1 + -1;
      do {
        pcVar7 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar7 != '\0');
    }
    for (uVar3 = (uint)((int)(uintptr_t)pcVar2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = (uint)pcVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    pcVar2 = (char *)&REFG(undefined4, 0x13476d8);
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = pcVar5 + -0x13476d7;
    pcVar2 = param_1 + -1;
    do {
      pcVar7 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)&REFG(undefined4, 0x13476d8);
    for (uVar3 = (uint)((int)(uintptr_t)pcVar5) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = (uint)pcVar5 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar2 = pcVar2 + 1;
    }
    return (uint)pcVar5;
  }
  pcVar5 = param_2 + 1;
  pcVar2 = pcVar5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  *param_1 = REFG(char, 0x14c5be5);
  pcVar7 = pcVar5;
  if (param_3 - 8 < (uint)((int)pcVar2 - (int)(param_2 + 2))) {
    pcVar5 = pcVar5 + (((int)pcVar2 - (int)(param_2 + 2)) - (param_3 - 8));
    pcVar2 = &REFG(undefined1, 0x13476c0);
    do {
      pcVar7 = pcVar2;
      pcVar2 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    pcVar2 = param_1 + -1;
    do {
      pcVar6 = pcVar2 + 1;
      pcVar2 = pcVar2 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = &REFG(undefined1, 0x13476c0);
    for (uVar3 = (uint)(pcVar7 + -0x13476bf) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar2 = pcVar2 + 4;
    }
    for (uVar3 = (uint)(pcVar7 + -0x13476bf) & 3; pcVar7 = pcVar5, uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar2 = pcVar2 + 1;
    }
  }
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar5 - (int)pcVar7;
  pcVar2 = param_1 + -1;
  do {
    pcVar5 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar5 != '\0');
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  return uVar3;
}

/* ref: FUN_00c00940 */
uint F_00c00940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00940u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xfc;
  uVar2 = *(byte *)(param_2 + 4) - 4;
  iVar3 = param_2;
  if (6 < uVar2) {
    return uVar2;
  }
switchD_00c00960_switchD: ;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar3;
    return uVar2;
  case 2: ;
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar3;
    return uVar2;
  case 3: ;
    goto switchD_00c00960_caseD_3;
  case 4: ;
    uVar2 = *(uint *)(param_1 + 0x24);
    *(uint *)(iVar3 + 0x6c) = uVar2;
    *(int *)(param_1 + 0x24) = iVar3;
    return uVar2;
  case 5: ;
    *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar3;
    break;
  case 6: ;
    if ((3 < (*(int * PTR32 *)(iVar3 + 8))[2]) &&
       (iVar1 = **(int * PTR32 *)(iVar3 + 8), (*(byte *)(iVar1 + 5) & 3) != 0)) {
      F_00c00940(param_1,iVar1);
    }
    uVar2 = iVar3 + 0x10;
    if (*(uint *)(iVar3 + 8) == uVar2) {
      *(byte *)(iVar3 + 5) = *(byte *)(iVar3 + 5) | 4;
      return uVar2;
    }
  }
  return uVar2;
switchD_00c00960_caseD_3: ;
  uVar2 = *(uint *)(iVar3 + 8);
  *(byte *)(iVar3 + 5) = *(byte *)(iVar3 + 5) | 4;
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 5) & 3) != 0)) {
    uVar2 = F_00c00940(param_1,uVar2);
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if ((*(byte *)(iVar3 + 5) & 3) == 0) {
    return uVar2;
  }
  *(byte *)(iVar3 + 5) = *(byte *)(iVar3 + 5) & 0xfc;
  uVar2 = *(byte *)(iVar3 + 4) - 4;
  if (6 < uVar2) {
    return uVar2;
  }
  goto switchD_00c00960_switchD;
}

/* ref: FUN_00c00a50 */
uint F_00c00a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00a50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  puVar3 = *(undefined4 * PTR32 *)(iVar1 + 0x70);
  for (puVar6 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(iVar1 + 0x70))); puVar6 != (undefined4 *)0x0;
      puVar6 = (undefined4 *)*puVar6) {
    if ((((*(byte *)((int)puVar6 + 5) & 3) != 0) || (param_2 != 0)) &&
       ((*(byte *)((int)puVar6 + 5) & 8) == 0)) {
      iVar2 = puVar6[2];
      if (((iVar2 == 0) || ((*(byte *)(iVar2 + 6) & 4) != 0)) ||
         (uVar4 = F_00c02b30(iVar2,2,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc4)))), uVar4 == 0
         )) {
        *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) | 8;
      }
      else {
        *(byte *)((int)puVar6 + 5) = *(byte *)((int)puVar6 + 5) | 8;
        iVar2 = puVar6[4];
        *puVar3 = *puVar6;
        uVar5 = uVar5 + 0x18 + iVar2;
        if (*(undefined4 * PTR32 *)(iVar1 + 0x30) == (undefined4 *)0x0) {
          *puVar6 = puVar6;
        }
        else {
          *puVar6 = **(undefined4 * PTR32 *)(iVar1 + 0x30);
          **(undefined4 * PTR32 *)(iVar1 + 0x30) = puVar6;
        }
        *(undefined4 * PTR32 *)(iVar1 + 0x30) = puVar6;
        puVar6 = puVar3;
      }
    }
    puVar3 = puVar6;
  }
  return uVar5;
}

/* ref: FUN_00c00af0 */
uint F_00c00af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00af0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_2 + 8);
  bVar6 = false;
  bVar7 = false;
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 5) & 3) != 0)) {
    F_00c00940(param_1,iVar5);
  }
  iVar5 = *(int *)(param_2 + 8);
  if ((((iVar5 != 0) && ((*(byte *)(iVar5 + 6) & 8) == 0)) &&
      (piVar2 = (int *)F_00c02b30(iVar5,3,*(undefined4 *)(param_1 + 200)), piVar2 != (int *)0x0))
     && (piVar2[2] == 4)) {
    uVar3 = F_00c51da0(*piVar2 + 0x10,0x6b);
    bVar6 = uVar3 != 0;
    uVar3 = F_00c51da0(*piVar2 + 0x10,0x76);
    bVar7 = uVar3 != 0;
    if ((bVar6) || (bVar7)) {
      *(byte *)(param_2 + 5) = (bVar7 * '\x02' | bVar6) * '\b' | *(byte *)(param_2 + 5) & 0xe7;
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = param_2;
    }
    if (bVar6) {
      if (bVar7) {
        return 1;
      }
    }
    else if (bVar7) goto LAB_00c00c05;
  }
  iVar5 = *(int *)(param_2 + 0x1c);
  if (iVar5 != 0) {
    iVar4 = iVar5 << 4;
    do {
      iVar4 = iVar4 + -0x10;
      piVar2 = ((int *)GEN_TOP((*(int *)(param_2 + 0xc) + iVar4)));
      iVar5 = iVar5 + -1;
      if ((3 < piVar2[2]) && (iVar1 = *piVar2, (*(byte *)(iVar1 + 5) & 3) != 0)) {
        F_00c00940(param_1,iVar1);
      }
    } while (iVar5 != 0);
  }
LAB_00c00c05: ;
  iVar5 = 1 << (*(byte *)(param_2 + 7) & 0x1f);
  if (iVar5 != 0) {
    iVar4 = iVar5 << 5;
    do {
      iVar4 = iVar4 + -0x20;
      piVar2 = ((int *)GEN_TOP((*(int *)(param_2 + 0x10) + iVar4)));
      iVar5 = iVar5 + -1;
      if (piVar2[2] == 0) {
        if (3 < piVar2[6]) {
          piVar2[6] = 0xb;
        }
      }
      else {
        if (((!bVar6) && (3 < piVar2[6])) && ((*(byte *)(piVar2[4] + 5) & 3) != 0)) {
          F_00c00940(param_1,piVar2[4]);
        }
        if (((!bVar7) && (3 < piVar2[2])) && ((*(byte *)(*piVar2 + 5) & 3) != 0)) {
          F_00c00940(param_1,*piVar2);
        }
      }
    } while (iVar5 != 0);
  }
  if ((!bVar6) && (!bVar7)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c00ca0 */
uint F_00c00ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(in_esi + 0x20) != 0) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)(in_esi + 0x20) + 5)));
    *pbVar1 = *pbVar1 & 0xfc;
  }
  iVar6 = 0;
  if (0 < *(int *)(in_esi + 0x28)) {
    iVar5 = 0;
    do {
      piVar4 = ((int *)GEN_TOP((*(int *)(in_esi + 8) + iVar5)));
      if ((3 < piVar4[2]) && (iVar3 = *piVar4, (*(byte *)(iVar3 + 5) & 3) != 0)) {
        F_00c00940(param_2,iVar3);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < *(int *)(in_esi + 0x28));
  }
  piVar4 = (int *)0x0;
  if (0 < *(int *)(in_esi + 0x24)) {
    do {
      if (*((int *)GEN_TOP((*(int *)(in_esi + 0x1c) + (int)((int)(uintptr_t)piVar4) * 4))) != 0) {
        pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_esi + 0x1c) + (int)((int)(uintptr_t)piVar4) * 4))) + 5)));
        *pbVar1 = *pbVar1 & 0xfc;
      }
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((int)piVar4 < *(int *)(in_esi + 0x24));
  }
  iVar6 = 0;
  if (0 < *(int *)(in_esi + 0x34)) {
    do {
      piVar4 = ((int *)GEN_TOP((*(int *)(in_esi + 0x10) + iVar6 * 4)));
      if ((*((int *)GEN_TOP((*(int *)(in_esi + 0x10) + iVar6 * 4))) != 0) &&
         (piVar4 = (int *)*piVar4, (*(byte *)((int)piVar4 + 5) & 3) != 0)) {
        piVar4 = (int *)F_00c00940(param_2,piVar4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_esi + 0x34));
  }
  iVar6 = 0;
  if (0 < *(int *)(in_esi + 0x38)) {
    piVar4 = (int *)0x0;
    do {
      if (*((int *)GEN_TOP(((int)piVar4 + *(int *)(in_esi + 0x18)))) != 0) {
        piVar2 = ((int *)GEN_TOP((*(int *)(in_esi + 0x18) + (int)piVar4)));
        *(byte *)(*piVar2 + 5) = *(byte *)(*piVar2 + 5) & 0xfc;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar6 < *(int *)(in_esi + 0x38));
  }
  return (uint)piVar4;
}

/* ref: FUN_00c00d70 */
uint F_00c00d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00d70u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  int * piVar4;
  
  uVar1 = *(uint *)(in_esi + 0xc);
  if ((*(byte *)(uVar1 + 5) & 3) != 0) {
    uVar1 = F_00c00940(param_2,uVar1);
  }
  if (*(char *)(in_esi + 6) == '\0') {
    uVar1 = *(uint *)(in_esi + 0x10);
    if ((*(byte *)(uVar1 + 5) & 3) != 0) {
      uVar1 = F_00c00940(param_2,uVar1);
    }
    iVar2 = 0;
    if (*(char *)(in_esi + 7) != '\0') {
      puVar3 = (uint *)(in_esi + 0x14);
      do {
        uVar1 = *puVar3;
        if ((*(byte *)(uVar1 + 5) & 3) != 0) {
          uVar1 = F_00c00940(param_2,uVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < (int)(uint)*(byte *)(in_esi + 7));
    }
  }
  else {
    iVar2 = 0;
    if (*(char *)(in_esi + 7) != '\0') {
      piVar4 = (int *)(in_esi + 0x18);
      do {
        if ((3 < piVar4[2]) && ((*(byte *)(*piVar4 + 5) & 3) != 0)) {
          F_00c00940(param_2,*piVar4);
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar2 < (int)(uint)*(byte *)(in_esi + 7));
      return (uint)*(byte *)(in_esi + 7);
    }
  }
  return uVar1;
}

/* ref: FUN_00c00e80 */
uint F_00c00e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc00e80u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  if ((3 < *(int *)(in_edi + 0x50)) && ((*((byte *)GEN_TOP((*(int *)(in_edi + 0x48) + 5))) & 3) != 0)) {
    F_00c00940(param_2,*(int *)(in_edi + 0x48));
  }
  puVar4 = *(uint * PTR32 *)(in_edi + 8);
  for (uVar3 = *(uint *)(in_edi + 0x28); uVar3 <= *(uint *)(in_edi + 0x14); uVar3 = uVar3 + 0x18) {
    if (puVar4 < *(uint * PTR32 *)(uVar3 + 8)) {
      puVar4 = *(uint * PTR32 *)(uVar3 + 8);
    }
  }
  puVar5 = *(uint * PTR32 *)(in_edi + 0x20);
  if (puVar5 < *(uint * PTR32 *)(in_edi + 8)) {
    do {
      if ((3 < (int)puVar5[2]) && (uVar3 = *puVar5, (*(byte *)(uVar3 + 5) & 3) != 0)) {
        uVar3 = F_00c00940(param_2,uVar3);
      }
      puVar5 = puVar5 + 4;
    } while (puVar5 < *(uint * PTR32 *)(in_edi + 8));
  }
  if (puVar5 <= puVar4) {
    uVar3 = 0;
    do {
      puVar5[2] = 0;
      puVar5 = puVar5 + 4;
    } while (puVar5 <= puVar4);
  }
  iVar1 = *(int *)(in_edi + 0x20);
  iVar2 = *(int *)(in_edi + 0x30);
  if (iVar2 < 0x4e21) {
    if ((((*(int *)(in_edi + 0x14) - *(int *)(in_edi + 0x28)) / 0x18) * 4 < iVar2) && (0x10 < iVar2)
       ) {
      F_00bb8cd0(in_edi,iVar2 / 2);
    }
    uVar3 = *(uint *)(in_edi + 0x2c);
    if ((((int)puVar4 - iVar1 >> 4) * 4 < (int)uVar3) && (0x5a < (int)uVar3)) {
      uVar3 = F_00bb8c70(in_edi,(int)uVar3 / 2);
    }
  }
  return uVar3;
}

/* ref: FUN_00c00f70 */
uint F_00c00f70(unsigned int gen_a0)
{
  GEN_ENTER(0xc00f70u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_esi;
  uint uVar1;
  
  in_esi = *(int *)(in_eax + 0x24);
  *(byte *)(in_esi + 5) = *(byte *)(in_esi + 5) | 4;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_esi + 4))) {
  case 5: ;
    *(undefined4 *)(in_eax + 0x24) = *(undefined4 *)(in_esi + 0x18);
    uVar1 = F_00c00af0(in_eax,in_esi);
    if (uVar1 != 0) {
      *(byte *)(in_esi + 5) = *(byte *)(in_esi + 5) & 0xfb;
    }
    return (*(int *)(in_esi + 0x1c) + 2 + (1 << (*(byte *)(in_esi + 7) & 0x1f)) * 2) * 0x10;
  case 6: ;
    break;
  default: ;
    return 0;
  case 8: ;
    *(undefined4 *)(in_eax + 0x24) = *(undefined4 *)(in_esi + 0x6c);
    *(undefined4 *)(in_esi + 0x6c) = *(undefined4 *)(in_eax + 0x28);
    *(int *)(in_eax + 0x28) = in_esi;
    *(byte *)(in_esi + 5) = *(byte *)(in_esi + 5) & 0xfb;
    F_00c00e80(in_esi,in_eax);
    return *(int *)(in_esi + 0x2c) * 0x10 + (*(int *)(in_esi + 0x30) + 5) * 0x18;
  case 9: ;
    *(undefined4 *)(in_eax + 0x24) = *(undefined4 *)(in_esi + 0x44);
    F_00c00ca0(in_esi,in_eax);
    return (*(int *)(in_esi + 0x38) * 3 + *(int *)(in_esi + 0x28) * 4 + *(int *)(in_esi + 0x34) +
            *(int *)(in_esi + 0x30) + *(int *)(in_esi + 0x2c) + *(int *)(in_esi + 0x24)) * 4 + 0x4c;
  }
  *(undefined4 *)(in_eax + 0x24) = *(undefined4 *)(in_esi + 8);
  F_00c00d70(in_esi,in_eax);
  if (*(char *)(in_esi + 6) != '\0') {
    return (uint)*(byte *)(in_esi + 7) * 0x10 + 0x18;
  }
  return (uint)*(byte *)(in_esi + 7) * 4 + 0x14;
}

/* ref: FUN_00c010d0 */
unsigned int F_00c010d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc010d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * pbVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1;
  do {
    if (iVar3 == 0) {
      return 0;
    }
    iVar6 = *(int *)(iVar3 + 0x1c);
    if (((*(byte *)(iVar3 + 5) & 0x10) != 0) && (iVar6 != 0)) {
      iVar5 = iVar6 << 4;
      do {
        iVar5 = iVar5 + -0x10;
        iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0xc) + 8 + iVar5)));
        piVar4 = ((int *)GEN_TOP((*(int *)(iVar3 + 0xc) + iVar5)));
        iVar6 = iVar6 + -1;
        if (3 < iVar2) {
          if (iVar2 == 4) {
            *(byte *)(*piVar4 + 5) = *(byte *)(*piVar4 + 5) & 0xfc;
          }
          else if (((*(byte *)(*piVar4 + 5) & 3) != 0) ||
                  ((iVar2 == 7 && ((*(byte *)(*piVar4 + 5) & 8) != 0)))) {
            piVar4[2] = 0;
          }
        }
      } while (iVar6 != 0);
    }
    iVar6 = 1 << (*(byte *)(iVar3 + 7) & 0x1f);
    if (iVar6 != 0) {
      iVar5 = iVar6 << 5;
      do {
        iVar5 = iVar5 + -0x20;
        piVar4 = ((int *)GEN_TOP((*(int *)(iVar3 + 0x10) + iVar5)));
        iVar6 = iVar6 + -1;
        if (piVar4[2] != 0) {
          if (piVar4[6] < 4) {
LAB_00c01177: ;
            iVar2 = piVar4[2];
            if (3 < iVar2) {
              if (iVar2 == 4) {
                *(byte *)(*piVar4 + 5) = *(byte *)(*piVar4 + 5) & 0xfc;
              }
              else if (((*(byte *)(*piVar4 + 5) & 3) != 0) ||
                      ((iVar2 == 7 && ((*(byte *)(*piVar4 + 5) & 8) != 0)))) goto LAB_00c0119c;
            }
          }
          else {
            if (piVar4[6] == 4) {
              pbVar1 = (byte *)(piVar4[4] + 5);
              *pbVar1 = *pbVar1 & 0xfc;
              goto LAB_00c01177;
            }
            if ((*(byte *)(piVar4[4] + 5) & 3) == 0) goto LAB_00c01177;
LAB_00c0119c: ;
            piVar4[2] = 0;
            if (3 < piVar4[6]) {
              piVar4[6] = 0xb;
            }
          }
        }
      } while (iVar6 != 0);
    }
    iVar3 = *(int *)(iVar3 + 0x18);
  } while( true );
}

/* ref: FUN_00c011d0 */
uint F_00c011d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc011d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_eax + 4))) {
  case 4: ;
    piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 4)));
    *piVar1 = *piVar1 + -1;
    uVar2 = F_00c11930(in_ecx,in_eax,*(int *)(in_eax + 0xc) + 0x11,0);
    return uVar2;
  case 5: ;
    uVar2 = F_00c05080(in_ecx,in_eax);
    return uVar2;
  case 6: ;
    uVar2 = F_00c05f50(in_ecx,in_eax);
    return uVar2;
  case 7: ;
    in_eax = F_00c11930(in_ecx,in_eax,*(int *)(in_eax + 0x10) + 0x18,0);
    break;
  case 8: ;
    uVar2 = F_00bb88f0(in_ecx,in_eax);
    return uVar2;
  case 9: ;
    uVar2 = F_00c05eb0(in_ecx,in_eax);
    return uVar2;
  case 10: ;
    uVar2 = F_00c05d60(in_ecx,in_eax);
    return uVar2;
  }
  return in_eax;
}

/* ref: FUN_00c01270 */
uint F_00c01270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01270u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  undefined4 * in_eax;
  int iVar3;
  undefined4 * puVar4;
  
  iVar2 = *(int *)(param_1 + 0x10);
  bVar1 = *(byte *)(iVar2 + 0x14);
  in_eax = (undefined4 *)*param_2;
  puVar4 = param_2;
  iVar3 = param_3;
  while ((in_eax != (undefined4 *)0x0 && (iVar3 != 0))) {
    if (*(char *)(in_eax + 1) == '\b') {
      F_00c01270(param_1,in_eax + 0x1a,0xfffffffd);
    }
    if ((byte)((bVar1 ^ 3) & (*(byte *)((int)in_eax + 5) ^ 3)) == 0) {
      *puVar4 = *in_eax;
      if (in_eax == *(undefined4 * PTR32 *)(iVar2 + 0x1c)) {
        *(undefined4 *)(iVar2 + 0x1c) = *in_eax;
      }
      F_00c011d0(in_eax,param_1);
    }
    else {
      *(byte *)((int)in_eax + 5) = *(byte *)(iVar2 + 0x14) & 3 | *(byte *)((int)in_eax + 5) & 0xf8;
      puVar4 = in_eax;
    }
    in_eax = (undefined4 *)*puVar4;
    iVar3 = iVar3 + -1;
  }
  return (uint)puVar4;
}

/* ref: FUN_00c01300 */
uint F_00c01300(unsigned int gen_a0)
{
  GEN_ENTER(0xc01300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(iVar1 + 8);
  if ((*(uint *)(iVar1 + 4) < (uint)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2)) && (0x40 < iVar2)) {
    F_00c05920(param_1,iVar2 / 2);
  }
  uVar3 = *(uint *)(iVar1 + 0x3c);
  if (0x40 < uVar3) {
    uVar4 = uVar3 >> 1;
    if (uVar4 + 1 < 0xfffffffe) {
      uVar3 = F_00c11930(param_1,*(undefined4 *)(iVar1 + 0x34),uVar3,uVar4);
      *(uint *)(iVar1 + 0x3c) = uVar4;
      *(uint *)(iVar1 + 0x34) = uVar3;
      return uVar3;
    }
    uVar3 = F_00c11910(param_1);
    *(uint *)(iVar1 + 0x3c) = uVar4;
    *(uint *)(iVar1 + 0x34) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00c01380 */
uint F_00c01380(unsigned int gen_a0)
{
  GEN_ENTER(0xc01380u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined1 uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  iVar2 = *(int *)(in_esi + 0x10);
  piVar3 = *(int * PTR32 *)(iVar2 + 0x30);
  piVar4 = (int *)*piVar3;
  if (piVar4 == piVar3) {
    *(undefined4 *)(iVar2 + 0x30) = 0;
  }
  else {
    *piVar3 = *piVar4;
  }
  *piVar4 = **(undefined4 * PTR32 *)(iVar2 + 0x70);
  **(int * PTR32 *)(iVar2 + 0x70) = (int)piVar4;
  uVar9 = piVar4[2];
  *(byte *)((int)piVar4 + 5) = *(byte *)(iVar2 + 0x14) & 3 | *(byte *)((int)piVar4 + 5) & 0xf8;
  if ((uVar9 != 0) && ((*(byte *)(uVar9 + 6) & 4) == 0)) {
    puVar8 = (undefined4 *)F_00c02b30(uVar9,2,*((undefined4 *)GEN_TOP((*(int *)(in_esi + 0x10) + 0xc4))));
    uVar9 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      uVar5 = *(undefined4 *)(iVar2 + 0x40);
      uVar1 = *(undefined1 *)(in_esi + 0x39);
      *(undefined1 *)(in_esi + 0x39) = 0;
      *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x44) * 2;
      puVar6 = *(undefined4 * PTR32 *)(in_esi + 8);
      *puVar6 = *puVar8;
      puVar6[1] = puVar8[1];
      puVar6[2] = puVar8[2];
      iVar7 = *(int *)(in_esi + 8);
      *(int * PTR32 *)(iVar7 + 0x10) = piVar4;
      *(undefined4 *)(iVar7 + 0x18) = 7;
      *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x20;
      uVar9 = F_00bb9600(in_esi,*(int *)(in_esi + 8) + -0x20,0);
      *(undefined1 *)(in_esi + 0x39) = uVar1;
      *(undefined4 *)(iVar2 + 0x40) = uVar5;
    }
  }
  return uVar9;
}

/* ref: FUN_00c01440 */
uint F_00c01440(unsigned int gen_a0)
{
  GEN_ENTER(0xc01440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar1 = *(int *)(uVar2 + 0x30);
  while (iVar1 != 0) {
    uVar2 = F_00c01380(param_1);
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x30)));
  }
  return uVar2;
}

/* ref: FUN_00c01460 */
uint F_00c01460(unsigned int gen_a0)
{
  GEN_ENTER(0xc01460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x10);
  *(undefined1 *)(piVar1 + 5) = 0x43;
  uVar2 = F_00c01270(param_1,piVar1 + 7,0xfffffffd);
  iVar3 = 0;
  if (0 < piVar1[2]) {
    do {
      uVar2 = F_00c01270(param_1,*piVar1 + iVar3 * 4,0xfffffffd);
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar1[2]);
  }
  return uVar2;
}

/* ref: FUN_00c014a0 */
uint F_00c014a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc014a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  puVar2 = (uint *)(param_1 + 0x98);
  iVar3 = 9;
  do {
    uVar1 = *puVar2;
    if ((uVar1 != 0) && ((*(byte *)(uVar1 + 5) & 3) != 0)) {
      uVar1 = F_00c00940(param_1,uVar1);
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_00c014e0 */
uint F_00c014e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc014e0u, gen_a0, 0u, 0u, 0u);
  int in_edi = (int)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(in_edi + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  if ((*((byte *)GEN_TOP((*(int *)(iVar1 + 0x70) + 5))) & 3) != 0) {
    F_00c00940(iVar1,*(int *)(iVar1 + 0x70));
  }
  if ((3 < *((int *)GEN_TOP((*(int *)(iVar1 + 0x70) + 0x50)))) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x70) + 0x48))), (*(byte *)(iVar2 + 5) & 3) != 0)) {
    F_00c00940(iVar1,iVar2);
  }
  if ((3 < *((int *)GEN_TOP((*(int *)(in_edi + 0x10) + 0x68)))) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)(in_edi + 0x10) + 0x60))), (*(byte *)(iVar2 + 5) & 3) != 0)) {
    F_00c00940(iVar1,iVar2);
  }
  uVar3 = F_00c014a0(iVar1);
  *(undefined1 *)(iVar1 + 0x15) = 1;
  return uVar3;
}

/* ref: FUN_00c01550 */
unsigned int F_00c01550(unsigned int gen_a0)
{
  GEN_ENTER(0xc01550u, gen_a0, 0u, 0u, 0u);
  int in_edi = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  for (iVar1 = *(int *)(in_edi + 0x8c); iVar1 != in_edi + 0x78; iVar1 = *(int *)(iVar1 + 0x14)) {
    if ((((*(byte *)(iVar1 + 5) & 7) == 0) && (3 < (*(int * PTR32 *)(iVar1 + 8))[2])) &&
       (iVar2 = **(int * PTR32 *)(iVar1 + 8), (*(byte *)(iVar2 + 5) & 3) != 0)) {
      F_00c00940(in_edi,iVar2);
    }
  }
  return 0;
}

/* ref: FUN_00c01590 */
uint F_00c01590(unsigned int gen_a0)
{
  GEN_ENTER(0xc01590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_edi;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  int local_4;
  
  in_edi = *(int *)(param_1 + 0x10);
  F_00c01550(in_edi);
  iVar1 = *(int *)(in_edi + 0x24);
  while (iVar1 != 0) {
    F_00c00f70(in_edi);
    iVar1 = *(int *)(in_edi + 0x24);
  }
  *(undefined4 *)(in_edi + 0x24) = *(undefined4 *)(in_edi + 0x2c);
  *(undefined4 *)(in_edi + 0x2c) = 0;
  if ((*(byte *)(param_1 + 5) & 3) != 0) {
    F_00c00940(in_edi,param_1);
  }
  F_00c014a0(in_edi);
  iVar1 = *(int *)(in_edi + 0x24);
  while (iVar1 != 0) {
    F_00c00f70(in_edi);
    iVar1 = *(int *)(in_edi + 0x24);
  }
  iVar1 = *(int *)(in_edi + 0x28);
  *(int *)(in_edi + 0x24) = iVar1;
  *(undefined4 *)(in_edi + 0x28) = 0;
  while (iVar1 != 0) {
    F_00c00f70(in_edi);
    iVar1 = *(int *)(in_edi + 0x24);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  local_4 = 0;
  puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x70);
  for (puVar4 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(iVar1 + 0x70))); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    if (((*(byte *)((int)puVar4 + 5) & 3) != 0) && ((*(byte *)((int)puVar4 + 5) & 8) == 0)) {
      iVar6 = puVar4[2];
      if ((iVar6 == 0) ||
         (((*(byte *)(iVar6 + 6) & 4) != 0 ||
          (uVar3 = F_00c02b30(iVar6,2,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc4)))),
          uVar3 == 0)))) {
        *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) | 8;
      }
      else {
        *(byte *)((int)puVar4 + 5) = *(byte *)((int)puVar4 + 5) | 8;
        local_4 = local_4 + 0x18 + puVar4[4];
        *puVar2 = *puVar4;
        if (*(undefined4 * PTR32 *)(iVar1 + 0x30) == (undefined4 *)0x0) {
          *puVar4 = puVar4;
        }
        else {
          *puVar4 = **(undefined4 * PTR32 *)(iVar1 + 0x30);
          **(undefined4 * PTR32 *)(iVar1 + 0x30) = puVar4;
        }
        *(undefined4 * PTR32 *)(iVar1 + 0x30) = puVar4;
        puVar4 = puVar2;
      }
    }
    puVar2 = puVar4;
  }
  piVar5 = *(int * PTR32 *)(in_edi + 0x30);
  if (piVar5 != (int *)0x0) {
    do {
      piVar5 = (int *)*piVar5;
      *(byte *)((int)piVar5 + 5) = *(byte *)((int)piVar5 + 5) & 0xf8 | *(byte *)(in_edi + 0x14) & 3;
      F_00c00940(in_edi,piVar5);
    } while (piVar5 != (int *)*(int *)(in_edi + 0x30));
  }
  iVar6 = 0;
  iVar1 = *(int *)(in_edi + 0x24);
  while (iVar1 != 0) {
    uVar3 = F_00c00f70(in_edi);
    iVar6 = iVar6 + uVar3;
    iVar1 = *(int *)(in_edi + 0x24);
  }
  F_00c010d0(*(undefined4 *)(in_edi + 0x2c));
  *(byte *)(in_edi + 0x14) = *(byte *)(in_edi + 0x14) ^ 3;
  *(undefined4 *)(in_edi + 0x18) = 0;
  *(uint *)(in_edi + 0x20) = in_edi + 0x1cU;
  *(undefined1 *)(in_edi + 0x15) = 2;
  *(int *)(in_edi + 0x48) = (*(int *)(in_edi + 0x44) - iVar6) - local_4;
  return in_edi + 0x1cU;
}

/* ref: FUN_00c01710 */
uint F_00c01710(unsigned int gen_a0)
{
  GEN_ENTER(0xc01710u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_eax_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  in_eax_00 = *(int * PTR32 *)(in_eax + 0x10);
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)in_eax_00 + 0x15))) {
  case 0: ;
    F_00c014e0(in_eax);
    return 0;
  case 1: ;
    break;
  case 2: ;
    iVar2 = in_eax_00[6];
    iVar1 = in_eax_00[0x11];
    in_eax_00[6] = iVar2 + 1;
    F_00c01270(in_eax,*in_eax_00 + iVar2 * 4,0xfffffffd);
    if (in_eax_00[2] <= in_eax_00[6]) {
      *(undefined1 *)((int)in_eax_00 + 0x15) = 3;
    }
    in_eax_00[0x12] = in_eax_00[0x12] + (in_eax_00[0x11] - iVar1);
    return 10;
  case 3: ;
    iVar2 = in_eax_00[0x11];
    piVar4 = (int *)F_00c01270(in_eax,in_eax_00[8],0x28);
    in_eax_00[8] = (int)piVar4;
    if (*piVar4 == 0) {
      F_00c01300(in_eax);
      *(undefined1 *)((int)in_eax_00 + 0x15) = 4;
    }
    in_eax_00[0x12] = in_eax_00[0x12] + (in_eax_00[0x11] - iVar2);
    return 400;
  case 4: ;
    if (in_eax_00[0xc] != 0) {
      F_00c01380(in_eax);
      if (100 < (uint)in_eax_00[0x12]) {
        in_eax_00[0x12] = in_eax_00[0x12] - 100;
      }
      return 100;
    }
    *(undefined1 *)((int)in_eax_00 + 0x15) = 0;
    in_eax_00[0x13] = 0;
  default: ;
    return 0;
  }
  if (in_eax_00[9] == 0) {
    F_00c01590(in_eax);
    return 0;
  }
  uVar3 = F_00c00f70(in_eax_00);
  return uVar3;
}

/* ref: FUN_00c01810 */
uint F_00c01810(unsigned int gen_a0)
{
  GEN_ENTER(0xc01810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(iVar1 + 0x54) * 10;
  if (iVar3 == 0) {
    iVar3 = 0x7ffffffe;
  }
  *(int *)(iVar1 + 0x4c) =
       *(int *)(iVar1 + 0x4c) + (*(int *)(iVar1 + 0x44) - *(int *)(iVar1 + 0x40));
  do {
    uVar2 = F_00c01710(param_1);
    iVar3 = iVar3 - uVar2;
    if (*(char *)(iVar1 + 0x15) == '\0') goto LAB_00c01877;
  } while (0 < iVar3);
  if (*(char *)(iVar1 + 0x15) != '\0') {
    uVar2 = *(uint *)(iVar1 + 0x4c);
    if (uVar2 < 0x400) {
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x44) + 0x400;
      return uVar2;
    }
    *(uint *)(iVar1 + 0x4c) = uVar2 - 0x400;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x44);
    return uVar2 - 0x400;
  }
LAB_00c01877: ;
  *(uint *)(iVar1 + 0x40) = (*(uint *)(iVar1 + 0x48) / 100) * *(int *)(iVar1 + 0x50);
  return *(uint *)(iVar1 + 0x48) * 0x51eb851f;
}

/* ref: FUN_00c01890 */
uint F_00c01890(unsigned int gen_a0)
{
  GEN_ENTER(0xc01890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(byte *)(iVar2 + 0x15) < 2) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(int *)(iVar2 + 0x20) = iVar2 + 0x1c;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x28) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined1 *)(iVar2 + 0x15) = 2;
  }
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 != '\x04') {
    F_00c01710(param_1);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  F_00c014e0(param_1);
  cVar1 = *(char *)(iVar2 + 0x15);
  while (cVar1 != '\0') {
    F_00c01710(param_1);
    cVar1 = *(char *)(iVar2 + 0x15);
  }
  *(uint *)(iVar2 + 0x40) = (*(uint *)(iVar2 + 0x48) / 100) * *(int *)(iVar2 + 0x50);
  return *(uint *)(iVar2 + 0x48) * 0x51eb851f;
}

/* ref: FUN_00c01900 */
uint F_00c01900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01900u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar1 + 0x15) == '\x01') {
    uVar2 = F_00c00940(iVar1,param_3);
    return uVar2;
  }
  uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(param_2 + 5)) & 0xfffffff8;
  *(byte *)(param_2 + 5) = *(byte *)(iVar1 + 0x14) & 3 | (byte)uVar2;
  return uVar2;
}

/* ref: FUN_00c01940 */
uint F_00c01940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc01940u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) & 0xfb;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(iVar1 + 0x28);
  *(uint *)(iVar1 + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00c01960 */
byte F_00c01960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01960u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 * PTR32 *)(iVar1 + 0x1c) = param_2;
  bVar2 = *(byte *)(iVar1 + 0x14) & 3;
  *(byte *)((int)param_2 + 5) = bVar2;
  *(undefined1 *)(param_2 + 1) = (undefined1)param_3;
  return bVar2;
}

/* ref: FUN_00c01990 */
uint F_00c01990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc01990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 * PTR32 *)(iVar2 + 0x1c) = param_2;
  bVar1 = *(byte *)((int)param_2 + 5);
  if ((bVar1 & 7) == 0) {
    if (*(char *)(iVar2 + 0x15) == '\x01') {
      *(byte *)((int)param_2 + 5) = bVar1 | 4;
      if ((3 < ((int *)param_2[2])[2]) &&
         (iVar2 = *(int *)param_2[2], (*(byte *)(iVar2 + 5) & 3) != 0)) {
        uVar3 = F_00c01900(param_1,param_2,iVar2);
        return uVar3;
      }
    }
    else {
      *(byte *)((int)param_2 + 5) = *(byte *)(iVar2 + 0x14) & 3 | bVar1 & 0xf8;
    }
  }
  return (uint)param_2;
}

/* ref: FUN_00c01a30 */
uint F_00c01a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc01a30u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_edx = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)(in_eax + 4);
  if ((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) == '\0')) {
    if (in_eax == *(int *)(in_edx + 0x14)) {
      *(undefined4 *)(in_eax + 0xc) = *(undefined4 *)(in_edx + 0x18);
    }
    iVar3 = (*(int *)(in_eax + 0xc) - *((int *)GEN_TOP((*(int *)(*piVar1 + 0x10) + 0xc))) >> 2) + -1;
    if (-1 < iVar3) {
      iVar2 = *((int *)GEN_TOP((*(int *)(*piVar1 + 0x10) + 0x14)));
      if (iVar2 != 0) {
        return *(uint *)(iVar2 + iVar3 * 4);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c01a80 */
uint F_00c01a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc01a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) || (iVar1 = param_3, iVar2 = param_2, param_3 == 0)) {
    iVar1 = 0;
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x44) = iVar2;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(char *)(param_1 + 0x38) = (char)iVar1;
  return 1;
}

/* ref: FUN_00c01ab0 */
uint F_00c01ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xc01ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 0x44);
}

/* ref: FUN_00c01ac0 */
uint F_00c01ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xc01ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 0x38);
}

/* ref: FUN_00c01ad0 */
uint F_00c01ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xc01ad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 0x3c);
}

/* ref: FUN_00c01ae0 */
uint F_00c01ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01ae0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (uVar1 <= *(uint *)(param_1 + 0x28)) break;
      iVar2 = iVar2 + -1;
      if (*((char *)GEN_TOP((**(int * PTR32 *)(uVar1 + 4) + 6))) == '\0') {
        iVar2 = iVar2 - *(int *)(uVar1 + 0x14);
      }
      uVar1 = uVar1 - 0x18;
    } while (0 < iVar2);
  }
  if (iVar2 == 0) {
    if (*(uint *)(param_1 + 0x28) < uVar1) {
      *(int *)(param_3 + 0x60) = (int)(uVar1 - *(uint *)(param_1 + 0x28)) / 0x18;
      return 1;
    }
  }
  else if (iVar2 < 0) {
    *(undefined4 *)(param_3 + 0x60) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00c01b80 */
uint F_00c01b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01b80u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)in_esi[1];
  if (((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) == '\0')) &&
     (iVar3 = *(int *)(*piVar1 + 0x10), iVar3 != 0)) {
    if (in_esi == *(int * PTR32 *)(param_3 + 0x14)) {
      in_esi[3] = *(int *)(param_3 + 0x18);
    }
    uVar2 = F_00c05f90(iVar3,in_edi,
                         (in_esi[3] - *((int *)GEN_TOP((*(int *)(*piVar1 + 0x10) + 0xc))) >> 2) + -1);
    if (uVar2 != 0) {
      return uVar2;
    }
  }
  if (in_esi == *(int * PTR32 *)(param_3 + 0x14)) {
    iVar3 = *(int *)(param_3 + 8);
  }
  else {
    iVar3 = in_esi[7];
  }
  if ((in_edi <= iVar3 - *in_esi >> 4) && (0 < in_edi)) {
    return 0x13476dc;
  }
  return 0;
}

/* ref: FUN_00c01bf0 */
uint F_00c01bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01bf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * in_esi;
  uint uVar1;
  
  in_esi = ((int *)GEN_TOP((*(int *)(param_1 + 0x28) + *(int *)(param_2 + 0x60) * 0x18)));
  uVar1 = F_00c01b80(in_esi,param_3,param_1);
  if (uVar1 != 0) {
    F_00b9a5e0(param_1,param_3 * 0x10 + -0x10 + *in_esi);
  }
  return uVar1;
}

/* ref: FUN_00c01c40 */
uint F_00c01c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01c40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * in_esi;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  in_esi = ((int *)GEN_TOP((*(int *)(param_1 + 0x28) + *(int *)(param_2 + 0x60) * 0x18)));
  uVar3 = F_00c01b80(in_esi,param_3,param_1);
  if (uVar3 != 0) {
    iVar2 = *(int *)(param_1 + 8);
    puVar1 = (undefined4 *)(param_3 * 0x10 + -0x10 + *in_esi);
    *puVar1 = *(undefined4 *)(iVar2 + -0x10);
    puVar1[1] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[2] = *(undefined4 *)(iVar2 + -8);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return uVar3;
}

/* ref: FUN_00c01c90 */
uint F_00c01c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc01c90u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  uint uVar1;
  undefined * puVar2;
  
  if (*(char *)(in_ecx + 6) != '\0') {
    *(undefined * PTR32 *)(in_eax + 0x10) = &REFG(undefined, 0x13476ec);
    *(undefined4 *)(in_eax + 0x1c) = 0xffffffff;
    *(undefined4 *)(in_eax + 0x20) = 0xffffffff;
    *(undefined * PTR32 *)(in_eax + 0xc) = &REFG(undefined, 0x13476f4);
    uVar1 = F_00c007b0(in_eax + 0x24,*(undefined4 *)(in_eax + 0x10),0x3c);
    return uVar1;
  }
  *(int *)(in_eax + 0x10) = *((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x20))) + 0x10;
  *(undefined4 *)(in_eax + 0x1c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x3c)));
  *(undefined4 *)(in_eax + 0x20) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x40)));
  puVar2 = &REFG(undefined, 0x13476f8);
  if (*(int *)(in_eax + 0x1c) != 0) {
    puVar2 = &REFG(undefined, 0x1347700);
  }
  *(undefined * PTR32 *)(in_eax + 0xc) = puVar2;
  uVar1 = F_00c007b0(in_eax + 0x24,*(undefined4 *)(in_eax + 0x10),0x3c);
  return uVar1;
}

/* ref: FUN_00c01d50 */
uint F_00c01d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc01d50u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((param_2 == 0) || (*(char *)(param_2 + 6) != '\0')) {
    *((undefined4 *)GEN_TOP((*(int *)(in_edi + 8) + 8))) = 0;
  }
  else {
    uVar3 = F_00c05020(in_edi,0,0);
    iVar1 = *((int *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x14)));
    if (0 < *((int *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x30)))) {
      do {
        puVar4 = (undefined4 *)F_00c05310(in_edi,uVar3,*(undefined4 *)(iVar1 + iVar5 * 4));
        *puVar4 = 1;
        puVar4[2] = 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *((int *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x30))));
    }
    puVar2 = *(uint * PTR32 *)(in_edi + 8);
    *puVar2 = uVar3;
    puVar2[2] = 5;
  }
  uVar3 = *(int *)(in_edi + 0x1c) - *(int *)(in_edi + 8);
  if ((int)uVar3 < 0x11) {
    uVar3 = F_00bb8d50(in_edi,1);
  }
  *(int *)(in_edi + 8) = *(int *)(in_edi + 8) + 0x10;
  return uVar3;
}

/* ref: FUN_00c01de0 */
uint F_00c01de0(unsigned int gen_a0)
{
  GEN_ENTER(0xc01de0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  byte bVar1;
  int iVar2;
  
  if (*(byte *)(in_eax + 0x4b) < 0xfb) {
    bVar1 = *(byte *)(in_eax + 0x4a);
    if (((bVar1 & 1) + (uint)*(byte *)(in_eax + 0x49) <= (uint)*(byte *)(in_eax + 0x4b)) &&
       ((((bVar1 & 4) == 0 || ((bVar1 & 1) != 0)) &&
        (*(int *)(in_eax + 0x24) <= (int)(uint)*(byte *)(in_eax + 0x48))))) {
      iVar2 = *(int *)(in_eax + 0x2c);
      if ((((*(int *)(in_eax + 0x30) == iVar2) || (*(int *)(in_eax + 0x30) == 0)) && (0 < iVar2)) &&
         (((byte)*((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + -4 + iVar2 * 4))) & 0x3f) == 0x1e)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c01e40 */
uint F_00c01e40(unsigned int gen_a0)
{
  GEN_ENTER(0xc01e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 & 0x3f;
  if ((0x1b < uVar1) && ((uVar1 < 0x1f || (uVar1 == 0x22)))) {
    return (uint)((param_1 & 0xff800000) == 0);
  }
  return 0;
}

/* ref: FUN_00c01e70 */
uint F_00c01e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01e70u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  bool bVar1;
  
  if (param_3 == 0) {
    if (param_1 != 0) {
      return 0;
    }
  }
  else if (param_3 == 2) {
    if ((int)(uint)*(byte *)(param_2 + 0x4b) <= (int)param_1) {
      return 0;
    }
  }
  else if (param_3 == 3) {
    if ((param_1 & 0x100) == 0) {
      bVar1 = (int)param_1 < (int)(uint)*(byte *)(param_2 + 0x4b);
    }
    else {
      bVar1 = (int)(param_1 & 0xfffffeff) < *(int *)(param_2 + 0x28);
    }
    if (!bVar1) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c01ec0 */
uint F_00c01ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc01ec0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  int local_18;
  uint local_14;
  int local_10;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  local_10 = iVar2 + -1;
  uVar4 = F_00c01de0(param_1);
  if (uVar4 == 0) {
    return 0;
  }
  local_18 = 0;
  if (param_2 < 1) {
LAB_00c022ff: ;
    return *((uint *)GEN_TOP((*(int *)(param_1 + 0xc) + local_10 * 4)));
  }
  iVar3 = *(int *)(param_1 + 0xc);
LAB_00c01f01: ;
  uVar4 = *(uint *)(iVar3 + local_18 * 4);
  uVar6 = uVar4 & 0x3f;
  uVar8 = 0;
  uVar7 = uVar4 >> 6 & 0xff;
  local_14 = 0;
  if (0x25 < uVar6) {
    return 0;
  }
  if (*(byte *)(param_1 + 0x4b) <= uVar7) {
    return 0;
  }
  bVar1 = (&REFG(undefined, 0x110f47c))[(int)(uVar6)];
  if ((bVar1 & 3) == 0) {
    uVar8 = uVar4 >> 0x17;
    local_14 = uVar4 >> 0xe & 0x1ff;
    uVar4 = F_00c01e70(uVar8,param_1,bVar1 >> 4 & 3);
    if (uVar4 == 0) {
      return 0;
    }
    uVar4 = F_00c01e70(local_14,param_1,bVar1 >> 2 & 3);
    if (uVar4 == 0) {
      return 0;
    }
  }
  else if ((bVar1 & 3) == 1) {
    uVar8 = uVar4 >> 0xe;
    if (((bVar1 & 0x30) == 0x30) && (*(int *)(param_1 + 0x28) <= (int)uVar8)) {
      return 0;
    }
  }
  else if ((bVar1 & 3) == 2) {
    uVar8 = (uVar4 >> 0xe) - 0x1ffff;
    if ((bVar1 & 0x30) == 0x20) {
      iVar9 = ((uVar4 >> 0xe) - 0x1fffe) + local_18;
      if (iVar9 < 0) {
        return 0;
      }
      if (iVar2 <= iVar9) {
        return 0;
      }
      if (0 < iVar9) {
        uVar4 = 0;
        if (0 < iVar9) {
          puVar5 = (uint *)(iVar3 + -4 + iVar9 * 4);
          do {
            if ((((byte)*puVar5 & 0x3f) != 0x22) || ((*puVar5 & 0x7fc000) != 0)) break;
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + -1;
          } while ((int)uVar4 < iVar9);
        }
        if ((uVar4 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  if ((((&REFG(undefined, 0x110f47c))[(int)(uVar6)] & 0x40) != 0) && (uVar7 == param_3)) {
    local_10 = local_18;
  }
  if ((char)(&REFG(undefined, 0x110f47c))[(int)(uVar6)] < '\0') {
    if (iVar2 <= local_18 + 2) {
      return 0;
    }
    if (((byte)*(undefined4 *)(iVar3 + 4 + local_18 * 4) & 0x3f) != 0x16) {
      return 0;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 2: ;
    if (local_14 == 1) {
      if (iVar2 <= local_18 + 2) {
        return 0;
      }
      uVar4 = *(uint *)(iVar3 + 4 + local_18 * 4);
      if ((((byte)uVar4 & 0x3f) == 0x22) && ((uVar4 & 0x7fc000) == 0)) {
        return 0;
      }
    }
    break;
  case 3: ;
    if (((int)uVar7 <= (int)param_3) && ((int)param_3 <= (int)uVar8)) {
      local_10 = local_18;
    }
    break;
  case 4: ;
  case 8: ;
    bVar11 = SBORROW4(uVar8,(uint)*(byte *)(param_1 + 0x48));
    bVar10 = (int)(uVar8 - *(byte *)(param_1 + 0x48)) < 0;
    goto LAB_00c022e2;
  case 5: ;
  case 7: ;
    if (*((int *)GEN_TOP((uVar8 * 0x10 + 8 + *(int *)(param_1 + 8)))) != 4) {
      return 0;
    }
    break;
  case 0xb: ;
    if ((uint)*(byte *)(param_1 + 0x4b) <= uVar7 + 1) {
      return 0;
    }
    if (param_3 == uVar7 + 1) {
      local_10 = local_18;
    }
    break;
  case 0x15: ;
    bVar11 = SBORROW4(uVar8,local_14);
    bVar10 = (int)(uVar8 - local_14) < 0;
    goto LAB_00c022e2;
  case 0x16: ;
    goto switchD_00c02090_caseD_16;
  case 0x1c: ;
  case 0x1d: ;
    if ((uVar8 != 0) && ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)((uVar8 - 1) + uVar7))) {
      return 0;
    }
    if (local_14 == 0) {
      uVar4 = F_00c01e40(*(undefined4 *)(iVar3 + 4 + local_18 * 4));
      if (uVar4 == 0) {
        return 0;
      }
    }
    else if ((local_14 != 1) &&
            ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)((local_14 - 2) + uVar7))) {
      return 0;
    }
    if ((int)uVar7 <= (int)param_3) {
      local_10 = local_18;
    }
    break;
  case 0x1e: ;
    if (0 < (int)(uVar8 - 1)) goto LAB_00c022d8;
    break;
  case 0x1f: ;
  case 0x20: ;
    if ((uint)*(byte *)(param_1 + 0x4b) <= uVar7 + 3) {
      return 0;
    }
    goto switchD_00c02090_caseD_16;
  case 0x21: ;
    if (local_14 == 0) {
      return 0;
    }
    if ((uint)*(byte *)(param_1 + 0x4b) <= local_14 + 2 + uVar7) {
      return 0;
    }
    if ((int)(uVar7 + 2) <= (int)param_3) {
      local_10 = local_18;
    }
    break;
  case 0x22: ;
    if ((0 < (int)uVar8) && ((int)(uint)*(byte *)(param_1 + 0x4b) <= (int)(uVar8 + uVar7))) {
      return 0;
    }
    if (local_14 == 0) {
      local_18 = local_18 + 1;
      bVar11 = SBORROW4(local_18,iVar2 + -1);
      bVar10 = local_18 - (iVar2 + -1) < 0;
      goto LAB_00c022e2;
    }
    break;
  case 0x24: ;
    if (*(int *)(param_1 + 0x34) <= (int)uVar8) {
      return 0;
    }
    uVar4 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + uVar8 * 4))) + 0x48)));
    if (iVar2 <= (int)(uVar4 + local_18)) {
      return 0;
    }
    iVar9 = 1;
    if (uVar4 != 0) {
      puVar5 = (uint *)(iVar3 + 4 + local_18 * 4);
      do {
        if (((*puVar5 & 0x3f) != 4) && ((*puVar5 & 0x3f) != 0)) {
          return 0;
        }
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar9 <= (int)uVar4);
    }
    if (param_3 != 0xff) {
      local_18 = uVar4 + local_18;
    }
    break;
  case 0x25: ;
    if ((*(byte *)(param_1 + 0x4a) & 2) == 0) {
      return 0;
    }
    if ((*(byte *)(param_1 + 0x4a) & 4) != 0) {
      return 0;
    }
    if ((uVar8 == 0) &&
       (uVar4 = F_00c01e40(*(undefined4 *)(iVar3 + 4 + local_18 * 4)), uVar4 == 0)) {
      return 0;
    }
LAB_00c022d8: ;
    iVar9 = (uVar8 - 2) + uVar7;
    bVar11 = SBORROW4(iVar9,(uint)*(byte *)(param_1 + 0x4b));
    bVar10 = (int)(iVar9 - (uint)*(byte *)(param_1 + 0x4b)) < 0;
LAB_00c022e2: ;
    if (bVar11 == bVar10) {
      return 0;
    }
  }
switchD_00c02090_caseD_6: ;
  local_18 = local_18 + 1;
  if (param_2 <= local_18) goto LAB_00c022ff;
  goto LAB_00c01f01;
switchD_00c02090_caseD_16: ;
  iVar9 = uVar8 + 1 + local_18;
  if (((param_3 != 0xff) && (local_18 < iVar9)) && (iVar9 <= param_2)) {
    local_18 = uVar8 + local_18;
  }
  goto switchD_00c02090_caseD_6;
}

/* ref: FUN_00c02380 */
uint F_00c02380(unsigned int gen_a0)
{
  GEN_ENTER(0xc02380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c01ec0(param_1,*(undefined4 *)(param_1 + 0x2c),0xff);
  return (uint)(uVar1 != 0);
}

/* ref: FUN_00c023a0 */
uint F_00c023a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc023a0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int * piVar1;
  
  if (((in_eax & 0x100) != 0) &&
     (piVar1 = ((int *)GEN_TOP(((in_eax & 0xfffffeff) * 0x10 + *(int *)(in_ecx + 8)))), piVar1[2] == 4)) {
    return *piVar1 + 0x10;
  }
  return 0x134771c;
}

/* ref: FUN_00c023d0 */
uint F_00c023d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc023d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_3;
  if (*((int *)GEN_TOP((*(int *)(param_2 + 4) + 8))) == 6) {
    while( true ) {
      piVar1 = *(int * PTR32 *)(param_2 + 4);
      if (*(char *)(*piVar1 + 6) != '\0') break;
      in_ecx = *(int *)(*piVar1 + 0x10);
      if (piVar1[2] == 6) {
        if (param_2 == *(int *)(param_1 + 0x14)) {
          *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
        }
        iVar4 = (*(int *)(param_2 + 0xc) - *((int *)GEN_TOP((*(int *)(*piVar1 + 0x10) + 0xc))) >> 2) + -1;
      }
      else {
        iVar4 = -1;
      }
      uVar2 = F_00c05f90(in_ecx,uVar3 + 1,iVar4);
      *param_4 = uVar2;
      if (uVar2 != 0) {
        return 0x1347720;
      }
      uVar2 = F_00c01ec0(in_ecx,iVar4,uVar3);
      switch((unsigned int)(uintptr_t)(uVar2 & 0x3f)) {
      case 0: ;
        uVar3 = uVar2 >> 0x17;
        if ((uVar2 >> 6 & 0xff) <= uVar3) {
          return 0;
        }
        if (*((int *)GEN_TOP((*(int *)(param_2 + 4) + 8))) != 6) {
          return 0;
        }
        break;
      default: ;
        goto switchD_00c0245f_caseD_1;
      case 4: ;
        if (*(int *)(in_ecx + 0x1c) == 0) {
          *param_4 = (uint)&REFG(undefined, 0x1347738);
          return 0x134773c;
        }
        *param_4 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x1c) + (uVar2 >> 0x17) * 4))) + 0x10;
        return 0x134773c;
      case 5: ;
        *param_4 = *((int *)GEN_TOP(((uVar2 >> 0xe) * 0x10 + *(int *)(in_ecx + 8)))) + 0x10;
        return 0x1347728;
      case 6: ;
        uVar3 = F_00c023a0(uVar2 >> 0xe & 0x1ff,in_ecx);
        *param_4 = uVar3;
        return 0x1347730;
      case 0xb: ;
        uVar3 = F_00c023a0(uVar2 >> 0xe & 0x1ff,in_ecx);
        *param_4 = uVar3;
        return 0x1347744;
      }
    }
  }
switchD_00c0245f_caseD_1: ;
  return 0;
}

/* ref: FUN_00c02550 */
uint F_00c02550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02550u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_edi = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((*(int * PTR32 *)(in_ecx + 4))[2] != 6) || (*((char *)GEN_TOP((**(int * PTR32 *)(in_ecx + 4) + 6))) != '\0')) ||
      (*(int *)(in_ecx + 0x14) < 1)) &&
     (((*(int * PTR32 *)(in_ecx + -0x14))[2] == 6 && (*((char *)GEN_TOP((**(int * PTR32 *)(in_ecx + -0x14) + 6))) == '\0'))))
  {
    piVar1 = *(int * PTR32 *)(in_ecx + -0x14);
    if ((piVar1[2] == 6) && (*(char *)(*piVar1 + 6) == '\0')) {
      if (in_ecx + -0x18 == *(int *)(in_edi + 0x14)) {
        *(undefined4 *)(in_ecx + -0xc) = *(undefined4 *)(in_edi + 0x18);
      }
      iVar2 = (*(int *)(in_ecx + -0xc) - *((int *)GEN_TOP((*(int *)(*piVar1 + 0x10) + 0xc))) >> 2) + -1;
    }
    else {
      iVar2 = -1;
    }
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*piVar1 + 0x10) + 0xc))) + iVar2 * 4)));
    uVar4 = uVar3 & 0x3f;
    if (((uVar4 == 0x1c) || (uVar4 == 0x1d)) || (uVar4 == 0x21)) {
      uVar3 = F_00c023d0(in_edi,in_ecx + -0x18,uVar3 >> 6 & 0xff,param_3);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_00c02620 */
uint F_00c02620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02620u, gen_a0, gen_a1, 0u, 0u);
  int in_edi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc));
  iVar2 = *(int *)(in_edi + 0x14);
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  piVar3 = *(int * PTR32 *)(iVar2 + 4);
  if ((piVar3[2] == 6) && (*(char *)(*piVar3 + 6) == '\0')) {
    uVar1 = F_00c01a30(iVar2,in_edi);
    if (((*(int * PTR32 *)(iVar2 + 4))[2] == 6) &&
       (iVar2 = **(int * PTR32 *)(iVar2 + 4), *(char *)(iVar2 + 6) == '\0')) {
      iVar2 = *(int *)(iVar2 + 0x10);
    }
    else {
      iVar2 = 0;
    }
    F_00c007b0(((undefined1 *)(gen_frame + 0x10)),*(int *)(iVar2 + 0x20) + 0x10,0x3c);
    piVar3 = (int *)F_00c00790(in_edi,((char *)REFP(0x13477f4)),((undefined1 *)(gen_frame + 0x10)),uVar1,(*(undefined4 *)(gen_frame + 0xc)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)piVar3;
}

/* ref: FUN_00c026b0 */
uint F_00c026b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc026b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    puVar3 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x74))));
    if (puVar3[2] != 6) {
                    
      F_00bb93a0(param_1,5);
    }
    puVar1 = *(undefined4 * PTR32 *)(param_1 + 8);
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    puVar1[2] = puVar1[-2];
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar2 + -0x10) = *puVar3;
    *(undefined4 *)(iVar2 + -0xc) = puVar3[1];
    *(undefined4 *)(iVar2 + -8) = puVar3[2];
    if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
      F_00bb8d50(param_1,1);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
    F_00bb9600(param_1,*(int *)(param_1 + 8) + -0x20,1);
  }
                    
  F_00bb93a0(param_1,2);
}

/* ref: FUN_00c02740 */
uint F_00c02740(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc02740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c00470(param_1,param_2,((undefined *)&gen_args[2]));
  F_00c02620(param_1,uVar1);
  uVar1 = F_00c026b0(param_1);
  return uVar1;
}

/* ref: FUN_00c02770 */
uint F_00c02770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc02770u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint local_4;
  
  local_4 = 1;
  if (param_4 != 0) {
    cVar1 = *param_3;
    pcVar3 = param_3;
    while (cVar1 != '\0') {
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case 'L': ;
      case 'f': ;
        break;
      default: ;
        local_4 = 0;
        break;
      case 'S': ;
        F_00c01c90(in_esi,param_4);
        break;
      case 'l': ;
        if (param_5 == 0) {
          *(undefined4 *)(in_esi + 0x14) = 0xffffffff;
        }
        else {
          uVar2 = F_00c01a30(param_5,param_2);
          *(uint *)(in_esi + 0x14) = uVar2;
        }
        break;
      case 'n': ;
        if (param_5 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = F_00c02550(param_5,param_2,in_esi + 4);
        }
        *(uint *)(in_esi + 8) = uVar2;
        if (uVar2 == 0) {
          *(undefined * PTR32 *)(in_esi + 8) = &REFG(undefined, 0x14c5be7);
          *(undefined4 *)(in_esi + 4) = 0;
        }
        break;
      case 'u': ;
        *(uint *)(in_esi + 0x18) = (uint)*(byte *)(param_4 + 7);
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    return local_4;
  }
  *(undefined * PTR32 *)(in_esi + 8) = &REFG(undefined, 0x14c5be6);
  *(undefined * PTR32 *)(in_esi + 4) = &REFG(undefined, 0x14c5be6);
  *(undefined4 *)(in_esi + 0x14) = 0xffffffff;
  *(undefined4 *)(in_esi + 0x1c) = 0xffffffff;
  *(undefined4 *)(in_esi + 0x20) = 0xffffffff;
  *(undefined * PTR32 *)(in_esi + 0xc) = &REFG(undefined, 0x1347704);
  *(char * PTR32 *)(in_esi + 0x10) = ((char *)REFP(0x134770c));
  F_00c007b0(in_esi + 0x24,((char *)REFP(0x134770c)),0x3c);
  *(undefined4 *)(in_esi + 0x18) = 0;
  return 1;
}

/* ref: FUN_00c028c0 */
uint F_00c028c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc028c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char * pcVar7;
  
  iVar6 = 0;
  iVar5 = 0;
  if (*param_2 == '>') {
    iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 8) + -0x10)));
    pcVar7 = param_2 + 1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  }
  else {
    iVar1 = *(int *)(param_3 + 0x60);
    pcVar7 = param_2;
    if (iVar1 != 0) {
      iVar6 = **((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 4 + iVar1 * 0x18)));
      iVar5 = *(int *)(param_1 + 0x28) + iVar1 * 0x18;
    }
  }
  uVar3 = F_00c02770(param_3,param_1,pcVar7,iVar6,iVar5);
  uVar4 = F_00c51da0(pcVar7,0x66);
  if (uVar4 != 0) {
    piVar2 = *(int * PTR32 *)(param_1 + 8);
    if (iVar6 == 0) {
      piVar2[2] = 0;
    }
    else {
      *piVar2 = iVar6;
      piVar2[2] = 6;
    }
    if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
      F_00bb8d50(param_1,1);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  uVar4 = F_00c51da0(pcVar7,0x4c);
  if (uVar4 != 0) {
    F_00c01d50(param_1,iVar6);
  }
  return uVar3;
}

/* ref: FUN_00c02970 */
uint F_00c02970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * puVar1;
  uint * puVar2;
  uint uVar3;
  
  puVar1 = (&REFG(undefined * PTR32, 0x110e598))[(int)(*(int *)(param_2 + 8))];
  puVar2 = *(uint * PTR32 *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  uVar3 = *puVar2;
  do {
    if (puVar2[2] <= uVar3) {
LAB_00c029ab: ;
      uVar3 = F_00c02740(param_1,((char *)REFP(0x1347770)),param_3,puVar1);
      return uVar3;
    }
    if (param_2 == uVar3) {
      uVar3 = F_00c023d0(param_1,puVar2,(int)(param_2 - *(int *)(param_1 + 0xc)) >> 4,&(*(undefined4 *)(gen_frame + 0xc)));
      if (uVar3 != 0) {
        uVar3 = F_00c02740(param_1,((char *)REFP(0x134774c)),param_3,uVar3,
                             (*(undefined4 *)(gen_frame + 0xc)),puVar1);
        return uVar3;
      }
      goto LAB_00c029ab;
    }
    uVar3 = uVar3 + 0x10;
  } while( true );
}

/* ref: FUN_00c02a00 */
uint F_00c02a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(param_2 + 8) == 4) || (iVar2 = param_2, *(int *)(param_2 + 8) == 3)) {
    iVar2 = param_3;
  }
  uVar1 = F_00c02970(param_1,iVar2,((char *)REFP(0x134778c)));
  return uVar1;
}

/* ref: FUN_00c02a30 */
uint F_00c02a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = F_00c02bc0(param_2,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = param_2;
  if (uVar1 != 0) {
    uVar2 = param_3;
  }
  uVar1 = F_00c02970(param_1,uVar2,((char *)REFP(0x1347798)));
  return uVar1;
}

/* ref: FUN_00c02a70 */
uint F_00c02a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * puVar1;
  
  puVar1 = (&REFG(undefined * PTR32, 0x110e598))[(int)(*(int *)(param_2 + 8))];
  if (puVar1[2] == (&REFG(undefined * PTR32, 0x110e598))[(int)(*(int *)(param_3 + 8))][2]) {
    F_00c02740(param_1,((char *)REFP(0x13477b0)),puVar1);
    return 0;
  }
  F_00c02740(param_1,((char *)REFP(0x13477d4)),puVar1,
               (&REFG(undefined * PTR32, 0x110e598))[(int)(*(int *)(param_3 + 8))]);
  return 0;
}

/* ref: FUN_00c02ad0 */
unsigned int F_00c02ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xc02ad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * pbVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0xbc;
  do {
    pcVar3 = *(char * PTR32 *)(&REFG(undefined, 0x110e50c) + iVar6);
    pcVar4 = pcVar3;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    uVar5 = F_00c05a80(param_1,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
    *((uint *)GEN_TOP((iVar6 + *(int *)(param_1 + 0x10)))) = uVar5;
    pbVar1 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar6))) + 5)));
    *pbVar1 = *pbVar1 | 0x20;
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x100);
  return 0;
}

/* ref: FUN_00c02b30 */
uint F_00c02b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02b30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c051b0(param_1,param_3);
  if (*(int *)(uVar1 + 8) == 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | '\x01' << ((byte)param_2 & 0x1f);
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c02b60 */
uint F_00c02b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc02b60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[2];
  if (iVar1 == 5) {
    iVar1 = *(int *)(*param_2 + 8);
  }
  else if (iVar1 == 7) {
    iVar1 = *(int *)(*param_2 + 8);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x98 + iVar1 * 4)));
  }
  if (iVar1 != 0) {
    uVar2 = F_00c051b0(iVar1,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xbc + param_3 * 4))));
    return uVar2;
  }
  return 0x110e488;
}

/* ref: FUN_00c02bc0 */
uint F_00c02bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02bc0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  piVar2 = param_1;
  if (param_1[2] != 3) {
    if (param_1[2] == 4) {
      uVar1 = F_00c00370(*param_1 + 0x10,&(*(undefined8 *)(gen_frame + 0x8)));
      if (uVar1 != 0) {
        *param_2 = (*(undefined8 *)(gen_frame + 0x8));
        *(undefined4 *)(param_2 + 1) = 3;
        return (uint)param_2;
      }
    }
    piVar2 = (int *)0x0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00c02c10 */
uint F_00c02c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0xc));
  if (param_2[2] != 3) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)((char *)(gen_frame + 0xc)) ^ (uint)((char *)(gen_frame + 0xc)));
    return 0;
  }
  F_00c4720f(((char *)(gen_frame + 0xc)),((char *)REFP(0x13478f0)),(int)*(undefined8 *)param_2,
           (int)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_2) >> 0x20));
  pcVar2 = ((char *)(gen_frame + 0xc));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00c05a80(param_1,((char *)(gen_frame + 0xc)),(int)pcVar2 - (int)(((char *)(gen_frame + 0xc)) + 1));
  *param_2 = uVar3;
  param_2[2] = 4;
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)((char *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00c02ca0 */
uint F_00c02ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc02ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_EAX = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)(in_esi + 0x38);
  uVar2 = *(uint *)(in_esi + 0x18);
  *(uint *)(in_esi + 0x18) = param_2;
  if (((bVar1 & 8) != 0) && (*(int *)(in_esi + 0x40) == 0)) {
    *(undefined4 *)(in_esi + 0x40) = *(undefined4 *)(in_esi + 0x3c);
    in_EAX = F_00bb8d80(in_esi,3,0xffffffff);
  }
  if ((bVar1 & 4) != 0) {
    iVar5 = *((int *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(in_esi + 0x14) + 4))) + 0x10)));
    iVar3 = *(int *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x14);
    uVar4 = ((int)(param_2 - iVar3) >> 2) - 1;
    if (iVar5 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar5 + uVar4 * 4);
    }
    if ((uVar4 != 0) && (uVar2 < param_2)) {
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *((int *)GEN_TOP((iVar5 + -4 + ((int)(uVar2 - iVar3) >> 2) * 4)));
      }
      if (iVar6 == iVar5) {
        return uVar4;
      }
    }
    in_EAX = F_00bb8d80(in_esi,2,iVar6);
  }
  return in_EAX;
}

/* ref: FUN_00c02d30 */
uint F_00c02d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc02d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = *(undefined4 * PTR32 *)(param_3 + 8);
  *puVar2 = *param_5;
  puVar2[1] = param_5[1];
  puVar2[2] = param_5[2];
  iVar3 = *(int *)(param_3 + 8);
  *(undefined4 *)(iVar3 + 0x10) = *param_2;
  *(undefined4 *)(iVar3 + 0x14) = param_2[1];
  *(undefined4 *)(iVar3 + 0x18) = param_2[2];
  iVar3 = *(int *)(param_3 + 8);
  *(undefined4 *)(iVar3 + 0x20) = *param_1;
  *(undefined4 *)(iVar3 + 0x24) = param_1[1];
  *(undefined4 *)(iVar3 + 0x28) = param_1[2];
  if (*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 8) < 0x31) {
    F_00bb8d50(param_3,3);
  }
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 0x30;
  F_00bb9600(param_3,*(int *)(param_3 + 8) + -0x30,1);
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -0x10;
  puVar2 = *(undefined4 * PTR32 *)(param_3 + 8);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x20) + (param_4 - iVar1))));
  *puVar5 = *puVar2;
  puVar5[1] = puVar2[1];
  uVar4 = puVar2[2];
  puVar5[2] = uVar4;
  return uVar4;
}

/* ref: FUN_00c02de0 */
uint F_00c02de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc02de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int in_esi = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 8);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  iVar2 = *(int *)(in_esi + 8);
  *(undefined4 *)(iVar2 + 0x10) = *param_5;
  *(undefined4 *)(iVar2 + 0x14) = param_5[1];
  *(undefined4 *)(iVar2 + 0x18) = param_5[2];
  iVar2 = *(int *)(in_esi + 8);
  *(undefined4 *)(iVar2 + 0x20) = *in_edx;
  *(undefined4 *)(iVar2 + 0x24) = in_edx[1];
  *(undefined4 *)(iVar2 + 0x28) = in_edx[2];
  iVar2 = *(int *)(in_esi + 8);
  *(undefined4 *)(iVar2 + 0x30) = *in_ecx;
  *(undefined4 *)(iVar2 + 0x34) = in_ecx[1];
  *(undefined4 *)(iVar2 + 0x38) = in_ecx[2];
  if (*(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8) < 0x41) {
    F_00bb8d50(in_esi,4);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x40;
  uVar3 = F_00bb9600(in_esi,*(int *)(in_esi + 8) + -0x40,0);
  return uVar3;
}

/* ref: FUN_00c02e80 */
uint F_00c02e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc02e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int local_4;
  
  local_4 = 0;
  piVar5 = param_2;
  do {
    if (piVar5[2] == 5) {
      iVar1 = *piVar5;
      puVar2 = (undefined4 *)F_00c051f0(iVar1,param_3);
      if (((puVar2[2] != 0) || (iVar1 = *(int *)(iVar1 + 8), iVar1 == 0)) ||
         ((*(byte *)(iVar1 + 6) & 1) != 0)) {
LAB_00c02edb: ;
        *param_4 = *puVar2;
        param_4[1] = puVar2[1];
        param_4[2] = puVar2[2];
        return (uint)param_4;
      }
      piVar3 = (int *)F_00c02b30(iVar1,0,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xbc))));
      if (piVar3 == (int *)0x0) goto LAB_00c02edb;
    }
    else {
      piVar3 = (int *)F_00c02b60(param_1,piVar5,0);
      if (piVar3[2] == 0) {
        F_00c02970(param_1,piVar5,((char *)REFP(0x13478f8)));
      }
    }
    if (piVar3[2] == 6) {
      uVar4 = F_00c02d30(param_3,piVar5,param_1,param_4,piVar3);
      return uVar4;
    }
    local_4 = local_4 + 1;
    piVar5 = piVar3;
    if (99 < local_4) {
      uVar4 = F_00c02740(param_1,((char *)REFP(0x1347900)));
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00c02f70 */
uint F_00c02f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc02f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int iVar1;
  int iVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int local_8;
  
  local_8 = 0;
  piVar6 = param_2;
  do {
    if (piVar6[2] == 5) {
      iVar1 = *piVar6;
      puVar3 = (uint *)F_00c052a0(param_1,iVar1,param_3);
      if ((((puVar3[2] != 0) || (iVar2 = *(int *)(iVar1 + 8), iVar2 == 0)) ||
          ((*(byte *)(iVar2 + 6) & 2) != 0)) ||
         (piVar4 = (int *)F_00c02b30(iVar2,1,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0xc0)))),
         piVar4 == (int *)0x0)) {
        *puVar3 = *param_4;
        puVar3[1] = param_4[1];
        puVar3[2] = param_4[2];
        if ((int)param_4[2] < 4) {
          return (uint)param_4;
        }
        uVar5 = *param_4;
        if ((*(byte *)(uVar5 + 5) & 3) == 0) {
          return uVar5;
        }
        if ((*(byte *)(iVar1 + 5) & 4) == 0) {
          return uVar5;
        }
        uVar5 = F_00c01940(param_1,iVar1);
        return uVar5;
      }
    }
    else {
      piVar4 = (int *)F_00c02b60(param_1,piVar6,1);
      if (piVar4[2] == 0) {
        F_00c02970(param_1,piVar6,((char *)REFP(0x1347914)));
      }
    }
    if (piVar4[2] == 6) {
      uVar5 = F_00c02de0(param_4,param_3,param_1,piVar4,piVar6);
      return uVar5;
    }
    local_8 = local_8 + 1;
    piVar6 = piVar4;
  } while (local_8 < 100);
  uVar5 = F_00c02740(param_1,((char *)REFP(0x134791c)));
  return uVar5;
}

/* ref: FUN_00c03090 */
uint F_00c03090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc03090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_esi = (undefined4)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c02b60(in_esi,param_3,in_edi);
  if (*(int *)(uVar1 + 8) == 0) {
    uVar1 = F_00c02b60(in_esi,param_4,in_edi);
    if (*(int *)(uVar1 + 8) == 0) {
      return 0;
    }
  }
  F_00c02d30(param_4,param_3,in_esi,param_5,uVar1);
  return 1;
}

/* ref: FUN_00c030e0 */
uint F_00c030e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc030e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((in_edi != 0) &&
      (bVar1 = (byte)(1 << ((byte)in_esi & 0x1f)), (*(byte *)(in_edi + 6) & bVar1) == 0)) &&
     (uVar2 = F_00c02b30(in_edi,in_esi,
                           *((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x10) + 0xbc + in_esi * 4)))),
     uVar2 != 0)) {
    if (in_edi == param_4) {
      return uVar2;
    }
    if (((param_4 != 0) && ((*(byte *)(param_4 + 6) & bVar1) == 0)) &&
       (uVar3 = F_00c02b30(param_4,in_esi,
                             *((undefined4 *)GEN_TOP((*(int *)(param_3 + 0x10) + 0xbc + in_esi * 4)))),
       uVar3 != 0)) {
      uVar3 = F_00c00310(uVar2,uVar3);
      return -(uint)(uVar3 != 0) & uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c03170 */
uint F_00c03170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc03170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00c02b60(in_eax,param_2,param_4);
  if (*(int *)(uVar2 + 8) != 0) {
    uVar3 = F_00c02b60(in_eax,param_3,param_4);
    uVar3 = F_00c00310(uVar2,uVar3);
    if (uVar3 != 0) {
      F_00c02d30(param_3,param_2,in_eax,*(undefined4 *)(in_eax + 8),uVar2);
      iVar1 = (*(int * PTR32 *)(in_eax + 8))[2];
      if ((iVar1 != 0) && ((iVar1 != 1 || (**(int * PTR32 *)(in_eax + 8) != 0)))) {
        return 1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c031f0 */
uint F_00c031f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc031f0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char * _Str1;
  char * _Str2;
  
  iVar5 = *(int *)(in_eax + 0xc);
  iVar6 = *(int *)(in_ecx + 0xc);
  _Str2 = (char *)(in_eax + 0x10);
  _Str1 = (char *)(in_ecx + 0x10);
  uVar2 = F_00c527e2(_Str1,_Str2);
  if (uVar2 == 0) {
    while( true ) {
      pcVar3 = _Str1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar4 = (int)pcVar3 - (int)(_Str1 + 1);
      if (iVar4 == iVar5) {
        return (uint)(iVar4 != iVar6);
      }
      if (iVar4 == iVar6) break;
      iVar4 = iVar4 + 1;
      _Str2 = _Str2 + iVar4;
      _Str1 = _Str1 + iVar4;
      iVar6 = iVar6 - iVar4;
      iVar5 = iVar5 - iVar4;
      uVar2 = F_00c527e2(_Str1,_Str2);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: FUN_00c03260 */
uint F_00c03260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc03260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  double dVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != *(int *)(param_3 + 1)) {
    uVar3 = F_00c02a70(param_1,param_2,param_3);
    return uVar3;
  }
  if (iVar2 == 3) {
    dVar1 = *param_3;
    if ((!GEN_ISNAN(dVar1) && !GEN_ISNAN(*param_2)) && (!(dVar1 < *param_2) && dVar1 != *param_2)) {
      return 1;
    }
    return 0;
  }
  if (iVar2 == 4) {
    uVar3 = F_00c031f0(*(undefined4 *)param_3,*(undefined4 *)param_2);
    return (uint)((int)uVar3 < 0);
  }
  uVar3 = F_00c03170(param_1,param_2,param_3,0xd);
  if (uVar3 == 0xffffffff) {
    uVar3 = F_00c02a70(param_1,param_2,param_3);
  }
  return uVar3;
}

/* ref: FUN_00c032f0 */
uint F_00c032f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc032f0u, gen_a0, gen_a1, gen_a2, 0u);
  double * in_esi = (double *)(uintptr_t)gen_a0;
  double * in_edi = (double *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_edi + 1);
  if (iVar1 == *(int *)(in_esi + 1)) {
    if (iVar1 == 3) {
      if (!(*in_edi <= *in_esi)) {
        return 0;
      }
      return 1;
    }
    if (iVar1 == 4) {
      uVar2 = F_00c031f0(*(undefined4 *)in_esi,*(undefined4 *)in_edi);
      return (uint)((int)uVar2 < 1);
    }
    uVar2 = F_00c03170(param_3,in_edi,in_esi,0xe);
    if (uVar2 != 0xffffffff) {
      return uVar2;
    }
    uVar2 = F_00c03170(param_3,in_esi,in_edi,0xd);
    if (uVar2 != 0xffffffff) {
      return (uint)(uVar2 == 0);
    }
  }
  uVar2 = F_00c02a70(param_3,in_edi,in_esi);
  return uVar2;
}

/* ref: FUN_00c03370 */
uint F_00c03370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc03370u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 1))) {
  case 0: ;
    goto switchD_00c03384_caseD_0;
  default: ;
    return (uint)(*(int *)param_2 == *(int *)param_3);
  case 2: ;
    return (uint)(*(int *)param_2 == *(int *)param_3);
  case 3: ;
    bVar3 = GEN_ISNAN(*param_2) || GEN_ISNAN(*param_3);
    if (bVar3 == (bVar3 || *param_2 == *param_3)) {
      return 0;
    }
    return 1;
  case 5: ;
  case 7: ;
    if (*(int *)param_2 != *(int *)param_3) {
      uVar2 = F_00c030e0(4,*(undefined4 *)(*(int *)param_2 + 8),param_1,
                           *(undefined4 *)(*(int *)param_3 + 8));
      if (uVar2 == 0) {
        return 0;
      }
      F_00c02d30(param_3,param_2,param_1,*(undefined4 *)(param_1 + 8),uVar2);
      iVar1 = (*(int * PTR32 *)(param_1 + 8))[2];
      if (iVar1 == 0) {
        return 0;
      }
      if (iVar1 != 1) {
        return 1;
      }
      if (**(int * PTR32 *)(param_1 + 8) == 0) {
        return 0;
      }
      return 1;
    }
switchD_00c03384_caseD_0: ;
    return 1;
  }
}

/* ref: FUN_00c03460 */
unsigned int F_00c03460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc03460u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  uint * puVar6;
  int local_c;
  int local_8;
  
  do {
    iVar5 = (param_3 + 1) * 0x10 + *(int *)(param_1 + 0xc);
    iVar3 = 2;
    if (((*(int *)(iVar5 + -0x18) == 4) || (*(int *)(iVar5 + -0x18) == 3)) &&
       ((*(int *)(iVar5 + -8) == 4 || (uVar2 = F_00c02c10(param_1,iVar5 + -0x10), uVar2 != 0)))) {
      local_c = *((int *)GEN_TOP((*(int *)(iVar5 + -0x10) + 0xc)));
      if (local_c == 0) {
        if (*(int *)(iVar5 + -0x18) != 4) {
          F_00c02c10(param_1,iVar5 + -0x20);
        }
      }
      else {
        iVar3 = 1;
        local_8 = 1;
        if (1 < param_2) {
          piVar4 = (int *)(iVar5 + -0x20);
          do {
            if ((piVar4[2] != 4) &&
               (uVar2 = F_00c02c10(param_1,piVar4), local_8 = iVar3, uVar2 == 0)) break;
            uVar2 = *(uint *)(*piVar4 + 0xc);
            if (-local_c - 3U <= uVar2) {
              F_00c02740(param_1,((char *)REFP(0x1347930)));
            }
            local_c = local_c + uVar2;
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + -4;
            local_8 = iVar3;
          } while (iVar3 < param_2);
        }
        uVar2 = F_00c06140(param_1,*(int *)(param_1 + 0x10) + 0x34,local_c);
        iVar3 = 0;
        if (0 < local_8) {
          piVar4 = (int *)(iVar5 + local_8 * -0x10);
          local_c = local_8;
          do {
            iVar1 = *(int *)(*piVar4 + 0xc);
            F_00c46aa0(uVar2 + iVar3,*piVar4 + 0x10,iVar1);
            local_c = local_c + -1;
            iVar3 = iVar3 + iVar1;
            piVar4 = piVar4 + 4;
          } while (0 < local_c);
        }
        puVar6 = (uint *)(iVar5 + local_8 * -0x10);
        uVar2 = F_00c05a80(param_1,uVar2,iVar3);
        *puVar6 = uVar2;
        puVar6[2] = 4;
        iVar3 = local_8;
      }
    }
    else {
      iVar1 = iVar5 + -0x10;
      iVar5 = iVar5 + -0x20;
      uVar2 = F_00c02b60(param_1,iVar5,0xf);
      if ((*(int *)(uVar2 + 8) == 0) &&
         (uVar2 = F_00c02b60(param_1,iVar1,0xf), *(int *)(uVar2 + 8) == 0)) {
        F_00c02a00(param_1,iVar5,iVar1);
      }
      else {
        F_00c02d30(iVar1,iVar5,param_1,iVar5,uVar2);
      }
    }
    param_3 = param_3 + (1 - iVar3);
    param_2 = param_2 + (1 - iVar3);
    if (param_2 < 2) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00c03850 */
uint F_00c03850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc03850u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float10 fVar2;
  uint uVar3;
  int iVar4;
  double * pdVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 * puVar12;
  int iVar13;
  uint * puVar14;
  double * pdVar15;
  double * pdVar16;
  ulonglong * puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  char * pcVar24;
  
LAB_00c0385c: ;
  iVar18 = *(int *)(param_1 + 0xc);
  iVar11 = **((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4)));
  iVar13 = *((int *)GEN_TOP((*(int *)(iVar11 + 0x10) + 8)));
  puVar14 = *(uint * PTR32 *)(param_1 + 0x18);
switchD_00c038db_default: ;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
  uVar9 = *(*(uint * PTR32 *)(gen_frame + 0xc));
  puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
  if ((*(byte *)(param_1 + 0x38) & 0xc) != 0) {
    piVar7 = (int *)(param_1 + 0x40);
    *piVar7 = *piVar7 + -1;
    if ((*piVar7 == 0) || ((*(byte *)(param_1 + 0x38) & 4) != 0)) {
      uVar3 = F_00c02ca0(param_1,puVar14);
      if (*(char *)(param_1 + 6) == '\x01') {
        *(uint * PTR32 *)(param_1 + 0x18) = (*(uint * PTR32 *)(gen_frame + 0xc));
        return uVar3;
      }
      iVar18 = *(int *)(param_1 + 0xc);
    }
  }
  uVar3 = uVar9 >> 6 & 0xff;
  iVar4 = uVar3 * 0x10;
  pdVar15 = (double *)(iVar4 + iVar18);
  switch((unsigned int)(uintptr_t)(uVar9 & 0x3f)) {
  case 0: ;
    puVar8 = ((undefined4 *)GEN_TOP(((uVar9 >> 0x17) * 0x10 + iVar18)));
    goto LAB_00c038ea;
  case 1: ;
    puVar8 = ((undefined4 *)GEN_TOP(((uVar9 >> 0xe) * 0x10 + iVar13)));
LAB_00c038ea: ;
    *(undefined4 *)pdVar15 = *puVar8;
    *(undefined4 *)((int)pdVar15 + 4) = puVar8[1];
    *(undefined4 *)(pdVar15 + 1) = puVar8[2];
    goto switchD_00c038db_default;
  case 2: ;
    *(uint *)pdVar15 = uVar9 >> 0x17;
    *(undefined4 *)(pdVar15 + 1) = 1;
    if ((uVar9 & 0x7fc000) != 0) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 2;
    }
    goto switchD_00c038db_default;
  case 3: ;
    pdVar5 = ((double *)GEN_TOP(((uVar9 >> 0x17) * 0x10 + iVar18)));
    do {
      *(undefined4 *)(pdVar5 + 1) = 0;
      pdVar5 = pdVar5 + -2;
    } while (pdVar15 <= pdVar5);
    goto switchD_00c038db_default;
  case 4: ;
    puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((iVar11 + 0x14 + (uVar9 >> 0x17) * 4))) + 8)));
    *(undefined4 *)pdVar15 = *puVar8;
    *(undefined4 *)((int)pdVar15 + 4) = puVar8[1];
    *(undefined4 *)(pdVar15 + 1) = puVar8[2];
    goto switchD_00c038db_default;
  case 5: ;
    ((undefined4 *)(gen_frame + 0x48))[0] = *(undefined4 *)(iVar11 + 0xc);
    (*(undefined4 *)(gen_frame + 0x50)) = 5;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    F_00c02e80(param_1,((undefined4 *)(gen_frame + 0x48)),(uVar9 >> 0xe) * 0x10 + iVar13,pdVar15);
    iVar18 = *(int *)(param_1 + 0xc);
    goto switchD_00c038db_default;
  case 6: ;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    uVar3 = uVar9 >> 0xe;
    if ((uVar3 & 0x100) == 0) {
      iVar4 = (uVar3 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar3 & 0xff) * 0x10 + iVar13;
    }
    F_00c02e80(param_1,(uVar9 >> 0x17) * 0x10 + iVar18,iVar4,pdVar15);
    iVar18 = *(int *)(param_1 + 0xc);
    goto switchD_00c038db_default;
  case 7: ;
    ((undefined4 *)(gen_frame + 0x58))[0] = *(undefined4 *)(iVar11 + 0xc);
    (*(undefined4 *)(gen_frame + 0x60)) = 5;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    F_00c02f70(param_1,((undefined4 *)(gen_frame + 0x58)),(uVar9 >> 0xe) * 0x10 + iVar13,pdVar15);
    iVar18 = *(int *)(param_1 + 0xc);
    goto switchD_00c038db_default;
  case 8: ;
    iVar4 = *((int *)GEN_TOP((iVar11 + 0x14 + (uVar9 >> 0x17) * 4)));
    puVar8 = *(undefined4 * PTR32 *)(iVar4 + 8);
    *puVar8 = *(undefined4 *)pdVar15;
    puVar8[1] = *(undefined4 *)((int)pdVar15 + 4);
    puVar8[2] = *(undefined4 *)(pdVar15 + 1);
    if (((3 < *(int *)(pdVar15 + 1)) && ((*(byte *)(*(int *)pdVar15 + 5) & 3) != 0)) &&
       ((*(byte *)(iVar4 + 5) & 4) != 0)) {
      F_00c01900(param_1,iVar4,*(int *)pdVar15);
    }
    goto switchD_00c038db_default;
  case 9: ;
    uVar3 = uVar9 >> 0xe;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    if ((uVar3 & 0x100) == 0) {
      iVar4 = (uVar3 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar3 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0x17;
    if ((uVar9 & 0x100) == 0) {
      F_00c02f70(param_1,pdVar15,uVar9 * 0x10 + iVar18,iVar4);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    else {
      F_00c02f70(param_1,pdVar15,(uVar9 & 0xff) * 0x10 + iVar13,iVar4);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 10: ;
    uVar3 = F_00c002c0(uVar9 >> 0xe & 0x1ff);
    uVar9 = F_00c002c0(uVar9 >> 0x17);
    uVar9 = F_00c05020(param_1,uVar9,uVar3);
    *(uint *)pdVar15 = uVar9;
    *(undefined4 *)(pdVar15 + 1) = 5;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    bVar21 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44))) < *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40)))
    ;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
    goto LAB_00c047c8;
  case 0xb: ;
    iVar4 = (uVar9 >> 0x17) * 0x10;
    iVar19 = iVar4 + iVar18;
    *(undefined4 *)(pdVar15 + 2) = *(undefined4 *)(iVar4 + iVar18);
    *(undefined4 *)((int)pdVar15 + 0x14) = *(undefined4 *)(iVar19 + 4);
    *(undefined4 *)(pdVar15 + 3) = *(undefined4 *)(iVar19 + 8);
    uVar9 = uVar9 >> 0xe;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = (uVar9 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    F_00c02e80(param_1,iVar19,iVar18,pdVar15);
    iVar18 = *(int *)(param_1 + 0xc);
    goto switchD_00c038db_default;
  case 0xc: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = (double *)(uVar3 * 0x10 + iVar18);
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar16 + *pdVar5;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,5);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0xd: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = (double *)(uVar3 * 0x10 + iVar18);
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar5 - *pdVar16;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,6);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0xe: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = (double *)(uVar3 * 0x10 + iVar18);
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar16 * *pdVar5;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,7);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0xf: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = (double *)(uVar3 * 0x10 + iVar18);
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      *pdVar15 = *pdVar5 / *pdVar16;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,8);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x10: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = (double *)(uVar3 * 0x10 + iVar18);
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      dVar23 = *pdVar5 / *pdVar16;
      dVar22 = gen_bits2d(REFG(ulonglong, 0x110e620) | REFG(ulonglong, 0x110e628) & (ulonglong)gen_d2bits(dVar23));
      dVar22 = (dVar23 + dVar22) - dVar22;
      *pdVar15 = *pdVar5 - (dVar22 - gen_bits2d(-(ulonglong)
                                                 !(dVar22 - dVar23 <=
                                                  gen_bits2d(REFG(ulonglong, 0x110e628) &
                                                             (ulonglong)gen_d2bits(dVar23))) &
                                                REFG(ulonglong, 0x1088130))) * *pdVar16;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,9);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x11: ;
    uVar3 = uVar9 >> 0x17;
    if ((uVar3 & 0x100) == 0) {
      pdVar5 = (double *)(uVar3 * 0x10 + iVar18);
    }
    else {
      pdVar5 = ((double *)GEN_TOP(((uVar3 & 0xff) * 0x10 + iVar13)));
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0x1ff) * 0x10 + iVar18)));
    }
    else {
      pdVar16 = ((double *)GEN_TOP(((uVar9 & 0xff) * 0x10 + iVar13)));
    }
    if ((*(int *)(pdVar5 + 1) == 3) && (*(int *)(pdVar16 + 1) == 3)) {
      fVar2 = ((float10)GEN_TOD(pow((float10)*pdVar5,(float10)*pdVar16)));
      *pdVar15 = (double)fVar2;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      F_00c03630(pdVar5,pdVar15,param_1,pdVar16,10);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x12: ;
    puVar17 = ((ulonglong *)GEN_TOP(((uVar9 >> 0x17) * 0x10 + iVar18)));
    if ((int)puVar17[1] == 3) {
      *pdVar15 = gen_bits2d(*puVar17 ^ REFG(ulonglong, 0x110e610));
      *(undefined4 *)(pdVar15 + 1) = 3;
      goto switchD_00c038db_default;
    }
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = puVar17;
    if ((int)puVar17[1] == 3) {
LAB_00c03fbd: ;
      if (((int)puVar17[1] == 3) ||
         (((int)puVar17[1] == 4 && (uVar9 = F_00c00370((int)*puVar17 + 0x10,((undefined1 *)(gen_frame + 0x40))), uVar9 != 0)
          ))) {
        *pdVar15 = gen_bits2d(*(*(ulonglong * PTR32 *)(gen_frame + 0x1c)) ^ REFG(ulonglong, 0x110e610));
        *(undefined4 *)(pdVar15 + 1) = 3;
        iVar18 = *(int *)(param_1 + 0xc);
        goto switchD_00c038db_default;
      }
    }
    else if (((int)puVar17[1] == 4) &&
            (uVar9 = F_00c00370((int)*puVar17 + 0x10,&(*(ulonglong *)(gen_frame + 0x28))), uVar9 != 0)) {
      (*(ulonglong *)(gen_frame + 0x68)) = (*(ulonglong *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0x70)) = 3;
      (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = &(*(ulonglong *)(gen_frame + 0x68));
      goto LAB_00c03fbd;
    }
    uVar9 = F_00c02b60(param_1,puVar17,0xb);
    if ((*(int *)(uVar9 + 8) == 0) &&
       (uVar9 = F_00c02b60(param_1,puVar17,0xb), *(int *)(uVar9 + 8) == 0)) {
      F_00c02a30(param_1,puVar17,puVar17);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    else {
      F_00c02d30(puVar17,puVar17,param_1,pdVar15,uVar9);
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x13: ;
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar4 = *(int *)(iVar19 + 8 + iVar18);
    if ((iVar4 == 0) || ((iVar4 == 1 && (*(int *)(iVar19 + iVar18) == 0)))) {
      *(undefined4 *)pdVar15 = 1;
      *(undefined4 *)(pdVar15 + 1) = 1;
    }
    else {
      *(undefined4 *)pdVar15 = 0;
      *(undefined4 *)(pdVar15 + 1) = 1;
    }
    goto switchD_00c038db_default;
  case 0x14: ;
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar4 = *(int *)(iVar19 + 8 + iVar18);
    piVar7 = (int *)(iVar19 + iVar18);
    if (iVar4 == 4) {
      dVar22 = (double)*(int *)(*piVar7 + 0xc);
      if (*(int *)(*piVar7 + 0xc) < 0) {
        dVar22 = dVar22 + *(double *)&REFG(double, 0x10b8de8);
      }
      *pdVar15 = dVar22;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else if (iVar4 == 5) {
      uVar9 = F_00c05400(*piVar7);
      *pdVar15 = (double)(int)uVar9;
      *(undefined4 *)(pdVar15 + 1) = 3;
    }
    else {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      uVar9 = F_00c03090(param_1,0xc,piVar7,&REFG(undefined, 0x110e488),pdVar15);
      if (uVar9 == 0) {
        F_00c02970(param_1,piVar7,((char *)REFP(0x1347948)));
      }
      iVar18 = *(int *)(param_1 + 0xc);
    }
    goto switchD_00c038db_default;
  case 0x15: ;
    uVar3 = uVar9 >> 0xe & 0x1ff;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    F_00c03460(param_1,(uVar3 - (uVar9 >> 0x17)) + 1,uVar3);
    if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
      F_00c01810(param_1);
    }
    iVar18 = *(int *)(param_1 + 0xc);
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar20 = iVar19 + iVar18;
    *(undefined4 *)(iVar4 + iVar18) = *(undefined4 *)(iVar19 + iVar18);
    *(undefined4 *)(iVar4 + 4 + iVar18) = *(undefined4 *)(iVar20 + 4);
    *(undefined4 *)(iVar4 + 8 + iVar18) = *(undefined4 *)(iVar20 + 8);
    goto switchD_00c038db_default;
  case 0x16: ;
    goto switchD_00c038db_caseD_16;
  case 0x17: ;
    uVar6 = uVar9 >> 0x17;
    if ((uVar6 & 0x100) == 0) {
      iVar4 = uVar6 * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar6 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0xe;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = (uVar9 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    if ((*(int *)(iVar4 + 8) == *(int *)(iVar18 + 8)) &&
       (uVar9 = F_00c03370(param_1,iVar4,iVar18), uVar9 != 0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    if (uVar9 == uVar3) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    iVar18 = *(int *)(param_1 + 0xc);
    puVar14 = puVar14 + 1;
    goto switchD_00c038db_default;
  case 0x18: ;
    uVar6 = uVar9 >> 0xe;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    if ((uVar6 & 0x100) == 0) {
      iVar4 = (uVar6 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar6 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0x17;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = uVar9 * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = F_00c03260(param_1,iVar18,iVar4);
    if (uVar9 == uVar3) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
    iVar18 = *(int *)(param_1 + 0xc);
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
    goto switchD_00c038db_default;
  case 0x19: ;
    uVar6 = uVar9 >> 0xe;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    if ((uVar6 & 0x100) == 0) {
      iVar4 = (uVar6 & 0x1ff) * 0x10 + iVar18;
    }
    else {
      iVar4 = (uVar6 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = uVar9 >> 0x17;
    if ((uVar9 & 0x100) == 0) {
      iVar18 = uVar9 * 0x10 + iVar18;
    }
    else {
      iVar18 = (uVar9 & 0xff) * 0x10 + iVar13;
    }
    uVar9 = F_00c032f0(iVar4,iVar18,param_1);
    if (uVar9 == uVar3) {
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
    iVar18 = *(int *)(param_1 + 0xc);
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
    goto switchD_00c038db_default;
  case 0x1a: ;
    if ((*(int *)(pdVar15 + 1) == 0) || ((*(int *)(pdVar15 + 1) == 1 && (*(int *)pdVar15 == 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != (uVar9 >> 0xe & 0x1ff)) {
LAB_00c04601: ;
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((*puVar14 >> 0xe) - 0x1fffe);
    }
    break;
  case 0x1b: ;
    iVar19 = (uVar9 >> 0x17) * 0x10;
    iVar4 = *(int *)(iVar19 + 8 + iVar18);
    piVar7 = (int *)(iVar19 + iVar18);
    if ((iVar4 == 0) || ((iVar4 == 1 && (*piVar7 == 0)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if (uVar3 != (uVar9 >> 0xe & 0x1ff)) {
      *(int *)pdVar15 = *piVar7;
      *(int *)((int)pdVar15 + 4) = piVar7[1];
      *(int *)(pdVar15 + 1) = piVar7[2];
      goto LAB_00c04601;
    }
    break;
  case 0x1c: ;
    iVar18 = (uVar9 >> 0xe & 0x1ff) - 1;
    if (uVar9 >> 0x17 != 0) {
      *(double * PTR32 *)(param_1 + 8) = pdVar15 + (uVar9 >> 0x17) * 2;
    }
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    uVar9 = F_00bb9430(param_1,pdVar15,iVar18);
    if (uVar9 == 0) {
      param_2 = param_2 + 1;
      goto LAB_00c0385c;
    }
    if (uVar9 - 1 != 0) {
      return uVar9 - 1;
    }
    if (-1 < iVar18) {
      *(undefined4 *)(param_1 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8)));
    }
    iVar18 = *(int *)(param_1 + 0xc);
    goto switchD_00c038db_default;
  case 0x1d: ;
    if (uVar9 >> 0x17 != 0) {
      *(double * PTR32 *)(param_1 + 8) = pdVar15 + (uVar9 >> 0x17) * 2;
    }
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    uVar9 = F_00bb9430(param_1,pdVar15,0xffffffff);
    if (uVar9 != 0) {
      if (uVar9 - 1 != 0) {
        return uVar9 - 1;
      }
      iVar18 = *(int *)(param_1 + 0xc);
      goto switchD_00c038db_default;
    }
    piVar7 = *(int * PTR32 *)(param_1 + 0x14);
    puVar8 = (undefined4 *)piVar7[1];
    iVar18 = piVar7[-5];
    if (*(int *)(param_1 + 0x68) != 0) {
      F_00c05da0(param_1,piVar7[-6]);
    }
    iVar11 = piVar7[-5] + (*piVar7 - (int)((int)(uintptr_t)puVar8) >> 4) * 0x10;
    piVar7[-6] = iVar11;
    iVar13 = 0;
    *(int *)(param_1 + 0xc) = iVar11;
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (puVar8 < *(undefined4 * PTR32 *)(param_1 + 8)) {
      iVar11 = 0;
      puVar12 = puVar8;
      do {
        *(undefined4 *)(iVar11 + iVar18) = *puVar12;
        *(undefined4 *)(iVar11 + 4 + iVar18) = puVar12[1];
        *(undefined4 *)(iVar11 + 8 + iVar18) = puVar12[2];
        iVar13 = (*(uint *)(gen_frame + 0x20)) + 1;
        iVar11 = iVar13 * 0x10;
        puVar12 = puVar8 + iVar13 * 4;
        (*(uint *)(gen_frame + 0x20)) = iVar13;
      } while (puVar12 < *(undefined4 * PTR32 *)(param_1 + 8));
    }
    iVar18 = iVar13 * 0x10 + iVar18;
    *(int *)(param_1 + 8) = iVar18;
    piVar7[-4] = iVar18;
    iVar18 = *(int *)(param_1 + 0x18);
    piVar7[-1] = piVar7[-1] + 1;
    piVar7[-3] = iVar18;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0x18;
    goto LAB_00c0385c;
  case 0x1e: ;
    goto switchD_00c038db_caseD_1e;
  case 0x1f: ;
    dVar22 = pdVar15[4] + *pdVar15;
    if (*(double *)&REFG(undefined, 0x108bec8) < pdVar15[4]) {
      bVar21 = dVar22 <= pdVar15[2];
    }
    else {
      bVar21 = pdVar15[2] <= dVar22;
    }
    if (bVar21) {
      *pdVar15 = dVar22;
      *(undefined4 *)(pdVar15 + 1) = 3;
      pdVar15[6] = dVar22;
      *(undefined4 *)(pdVar15 + 7) = 3;
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((uVar9 >> 0xe) - 0x1fffe);
    }
    goto switchD_00c038db_default;
  case 0x20: ;
    (*(double * PTR32 *)(gen_frame + 0x18)) = pdVar15 + 4;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    if (*(int *)(pdVar15 + 1) == 3) {
LAB_00c044cb: ;
      if (*(int *)(pdVar15 + 3) != 3) {
        if ((*(int *)(pdVar15 + 3) != 4) ||
           (uVar3 = F_00c00370(*(int *)(pdVar15 + 2) + 0x10,&(*(double *)(gen_frame + 0x38))), uVar3 == 0)) {
          pcVar24 = ((char *)REFP(0x1347980));
          goto LAB_00c0452b;
        }
        pdVar15[2] = (*(double *)(gen_frame + 0x38));
        *(undefined4 *)(pdVar15 + 3) = 3;
      }
      if ((*(int *)(pdVar15 + 5) != 3) &&
         ((*(double * PTR32 *)(gen_frame + 0x18)) = (double *)F_00c02bc0((*(double * PTR32 *)(gen_frame + 0x18)),(*(double * PTR32 *)(gen_frame + 0x18))), (*(double * PTR32 *)(gen_frame + 0x18)) == (double *)0x0)) {
        pcVar24 = ((char *)REFP(0x13479a0));
        goto LAB_00c0452b;
      }
    }
    else {
      if ((*(int *)(pdVar15 + 1) == 4) &&
         (uVar3 = F_00c00370(*(int *)pdVar15 + 0x10,&(*(double *)(gen_frame + 0x30))), uVar3 != 0)) {
        *pdVar15 = (*(double *)(gen_frame + 0x30));
        *(undefined4 *)(pdVar15 + 1) = 3;
        goto LAB_00c044cb;
      }
      pcVar24 = ((char *)REFP(0x1347958));
LAB_00c0452b: ;
      F_00c02740(param_1,pcVar24);
    }
    *pdVar15 = *pdVar15 - *(*(double * PTR32 *)(gen_frame + 0x18));
    *(undefined4 *)(pdVar15 + 1) = 3;
switchD_00c038db_caseD_16: ;
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + ((uVar9 >> 0xe) - 0x1fffe);
    goto switchD_00c038db_default;
  case 0x21: ;
    *(undefined4 *)(pdVar15 + 10) = *(undefined4 *)(pdVar15 + 4);
    *(undefined4 *)((int)pdVar15 + 0x54) = *(undefined4 *)((int)pdVar15 + 0x24);
    *(undefined4 *)(pdVar15 + 0xb) = *(undefined4 *)(pdVar15 + 5);
    *(undefined4 *)(pdVar15 + 8) = *(undefined4 *)(pdVar15 + 2);
    *(undefined4 *)((int)pdVar15 + 0x44) = *(undefined4 *)((int)pdVar15 + 0x14);
    *(undefined4 *)(pdVar15 + 9) = *(undefined4 *)(pdVar15 + 3);
    *(undefined4 *)(pdVar15 + 6) = *(undefined4 *)pdVar15;
    *(undefined4 *)((int)pdVar15 + 0x34) = *(undefined4 *)((int)pdVar15 + 4);
    *(undefined4 *)(pdVar15 + 7) = *(undefined4 *)(pdVar15 + 1);
    *(double * PTR32 *)(param_1 + 8) = pdVar15 + 0xc;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    F_00bb9600(param_1,pdVar15 + 6,uVar9 >> 0xe & 0x1ff);
    iVar18 = *(int *)(param_1 + 0xc);
    puVar8 = ((undefined4 *)GEN_TOP(((uVar3 + 3) * 0x10 + iVar18)));
    *(undefined4 *)(param_1 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8)));
    if (puVar8[2] != 0) {
      puVar8[-4] = *puVar8;
      puVar8[-3] = puVar8[1];
      puVar8[-2] = puVar8[2];
      goto LAB_00c04601;
    }
    break;
  case 0x22: ;
    (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = (ulonglong *)(uVar9 >> 0x17);
    uVar9 = uVar9 >> 0xe & 0x1ff;
    if ((*(ulonglong * PTR32 *)(gen_frame + 0x1c)) == (ulonglong *)0x0) {
      (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = ((ulonglong *)GEN_TOP(((*(int *)(param_1 + 8) - (int)((int)(uintptr_t)pdVar15) >> 4) - 1)));
      *(undefined4 *)(param_1 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8)));
    }
    if (uVar9 == 0) {
      uVar9 = *puVar14;
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 2;
    }
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc));
    if (*(int *)(pdVar15 + 1) == 5) {
      iVar19 = *(int *)pdVar15;
      iVar4 = uVar9 * 0x32 + -0x32 + (int)(*(ulonglong * PTR32 *)(gen_frame + 0x1c));
      if (*(int *)(iVar19 + 0x1c) < iVar4) {
        F_00c05640(param_1,iVar19,iVar4);
      }
      if (0 < (int)(*(ulonglong * PTR32 *)(gen_frame + 0x1c))) {
        pdVar15 = pdVar15 + (int)((int)(uintptr_t)(*(ulonglong * PTR32 *)(gen_frame + 0x1c))) * 2;
        do {
          puVar8 = (undefined4 *)F_00c05310(param_1,iVar19,iVar4);
          *puVar8 = *(undefined4 *)pdVar15;
          puVar8[1] = *(undefined4 *)((int)pdVar15 + 4);
          iVar4 = iVar4 + -1;
          puVar8[2] = *(undefined4 *)(pdVar15 + 1);
          if (((3 < *(int *)(pdVar15 + 1)) && ((*(byte *)(*(int *)pdVar15 + 5) & 3) != 0)) &&
             ((*(byte *)(iVar19 + 5) & 4) != 0)) {
            F_00c01940(param_1,iVar19);
          }
          (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = (ulonglong *)((int)(*(ulonglong * PTR32 *)(gen_frame + 0x1c)) - 1);
          pdVar15 = pdVar15 + -2;
        } while (0 < (int)(*(ulonglong * PTR32 *)(gen_frame + 0x1c)));
      }
    }
    goto switchD_00c038db_default;
  case 0x23: ;
    F_00c05da0(param_1,pdVar15);
    goto switchD_00c038db_default;
  case 0x24: ;
    iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar11 + 0x10) + 0x10))) + (uVar9 >> 0xe) * 4)));
    (*(uint *)(gen_frame + 0x20)) = (uint)*(byte *)(iVar4 + 0x48);
    uVar9 = F_00c05c10(param_1,(*(uint *)(gen_frame + 0x20)),*(undefined4 *)(iVar11 + 0xc));
    *(int *)(uVar9 + 0x10) = iVar4;
    if ((*(uint *)(gen_frame + 0x20)) != 0) {
      (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = (ulonglong *)(uVar9 + 0x14);
      do {
        uVar3 = *puVar14 >> 0x17;
        if (((byte)*puVar14 & 0x3f) == 4) {
          uVar3 = *(uint *)(iVar11 + 0x14 + uVar3 * 4);
        }
        else {
          uVar3 = F_00c05cb0(param_1,uVar3 * 0x10 + iVar18);
        }
        puVar14 = puVar14 + 1;
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
        *(uint *)(*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = uVar3;
        (*(ulonglong * PTR32 *)(gen_frame + 0x1c)) = (ulonglong *)((int)(*(ulonglong * PTR32 *)(gen_frame + 0x1c)) + 4);
      } while ((*(uint *)(gen_frame + 0x20)) != 0);
    }
    *(uint *)pdVar15 = uVar9;
    *(undefined4 *)(pdVar15 + 1) = 6;
    *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
    bVar21 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44))) < *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40)))
    ;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
LAB_00c047c8: ;
    if (!bVar21) {
      F_00c01810(param_1);
    }
    iVar18 = *(int *)(param_1 + 0xc);
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc));
    goto switchD_00c038db_default;
  case 0x25: ;
    piVar7 = *(int * PTR32 *)(param_1 + 0x14);
    iVar19 = (uVar9 >> 0x17) - 1;
    iVar20 = ((*piVar7 - piVar7[1] >> 4) - (uint)*((byte *)GEN_TOP((*(int *)(iVar11 + 0x10) + 0x49)))) + -1;
    if (iVar19 == -1) {
      *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
      if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) <= iVar20 * 0x10) {
        F_00bb8d50(param_1,iVar20);
      }
      iVar18 = *(int *)(param_1 + 0xc);
      pdVar15 = (double *)(iVar4 + iVar18);
      *(double * PTR32 *)(param_1 + 8) = pdVar15 + iVar20 * 2;
      iVar19 = iVar20;
    }
    (*(uint *)(gen_frame + 0x20)) = 0;
    if (0 < iVar19) {
      iVar4 = iVar20 * -0x10;
      pdVar15 = pdVar15 + 1;
      do {
        if ((int)(*(uint *)(gen_frame + 0x20)) < iVar20) {
          iVar10 = *piVar7 + iVar4;
          *(undefined4 *)(pdVar15 + -1) = *(undefined4 *)(*piVar7 + iVar4);
          *(undefined4 *)((int)pdVar15 + -4) = *(undefined4 *)(iVar10 + 4);
          *(undefined4 *)pdVar15 = *(undefined4 *)(iVar10 + 8);
        }
        else {
          *(undefined4 *)pdVar15 = 0;
        }
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 1;
        iVar4 = iVar4 + 0x10;
        pdVar15 = pdVar15 + 2;
      } while ((int)(*(uint *)(gen_frame + 0x20)) < iVar19);
    }
  default: ;
    goto switchD_00c038db_default;
  }
  (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar14;
  puVar14 = (*(uint * PTR32 *)(gen_frame + 0xc)) + 1;
  goto switchD_00c038db_default;
switchD_00c038db_caseD_1e: ;
  if (uVar9 >> 0x17 != 0) {
    *(double * PTR32 *)(param_1 + 8) = pdVar15 + (uVar9 >> 0x17) * 2 + -2;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    F_00c05da0(param_1,iVar18);
  }
  *(uint * PTR32 *)(param_1 + 0x18) = puVar14;
  uVar9 = F_00bb90b0(param_1,pdVar15);
  param_2 = param_2 + -1;
  if (param_2 == 0) {
    return uVar9;
  }
  if (uVar9 != 0) {
    *(undefined4 *)(param_1 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8)));
  }
  goto LAB_00c0385c;
}

/* ref: FUN_00c04a40 */
uint F_00c04a40(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc04a40u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  if ((GEN_ISNAN((*(double *)&gen_args[1])) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) !=
      ((GEN_ISNAN((*(double *)&gen_args[1])) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || (*(double *)&gen_args[1]) == *(double *)&REFG(undefined, 0x108bec8))) {
    return *(uint *)((*(int *)&gen_args[0]) + 0x10);
  }
  return ((uint)((*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4)) + (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 0))) % ((1 << (*(byte *)((*(int *)&gen_args[0]) + 7) & 0x1f)) - 1U | 1))
         * 0x20 + *(int *)((*(int *)&gen_args[0]) + 0x10);
}

/* ref: FUN_00c04a80 */
uint F_00c04a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04a80u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  double * in_edx = (double *)(uintptr_t)gen_a1;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_edx + 1))) {
  case 1: ;
    return ((1 << (*(byte *)(in_eax + 7) & 0x1f)) - 1U & *(uint *)in_edx) * 0x20 +
           *(int *)(in_eax + 0x10);
  default: ;
    return (*(uint *)((int)(uintptr_t)in_edx) % ((1 << (*(byte *)(in_eax + 7) & 0x1f)) - 1U | 1)) * 0x20 +
           *(int *)(in_eax + 0x10);
  case 3: ;
    uVar1 = F_00c04a40(in_eax,*in_edx);
    return uVar1;
  case 4: ;
    return ((1 << (*(byte *)(in_eax + 7) & 0x1f)) - 1U & *(uint *)(*(int *)in_edx + 8)) * 0x20 +
           *(int *)(in_eax + 0x10);
  }
}

/* ref: FUN_00c04b10 */
uint F_00c04b10(unsigned int gen_a0)
{
  GEN_ENTER(0xc04b10u, gen_a0, 0u, 0u, 0u);
  double * in_eax = (double *)(uintptr_t)gen_a0;
  double dVar1;
  bool bVar2;
  double dVar3;
  
  if (*(int *)(in_eax + 1) == 3) {
    dVar1 = *in_eax;
    dVar3 = (double)(int)ROUND(dVar1);
    bVar2 = GEN_ISNAN(dVar3) || GEN_ISNAN(dVar1);
    if (bVar2 != (bVar2 || dVar3 == dVar1)) {
      return (int)ROUND(dVar1);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c04b50 */
uint F_00c04b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04b50u, gen_a0, gen_a1, gen_a2, 0u);
  double * in_edi = (double *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(in_edi + 1) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(in_edi + 1) == 3) {
    dVar2 = *in_edi;
    iVar1 = (int)ROUND(dVar2);
    bVar5 = GEN_ISNAN((double)iVar1) || GEN_ISNAN(dVar2);
    if (((bVar5 != (bVar5 || (double)iVar1 == dVar2)) && (0 < iVar1)) &&
       (iVar1 <= *(int *)(param_3 + 0x1c))) {
      return iVar1 - 1;
    }
  }
  uVar3 = F_00c04a80(param_3,in_edi);
  while( true ) {
    uVar4 = F_00c00310((int *)(uVar3 + 0x10),in_edi);
    if ((uVar4 != 0) ||
       (((*(int *)(uVar3 + 0x18) == 0xb && (3 < *(int *)(in_edi + 1))) &&
        (*(int *)(uVar3 + 0x10) == *(int *)in_edi)))) break;
    uVar3 = *(uint *)(uVar3 + 0x1c);
    if (uVar3 == 0) {
      F_00c02740(param_2,((char *)REFP(0x13479bc)));
      return 0;
    }
  }
  return ((int)(uVar3 - *(int *)(param_3 + 0x10)) >> 5) + *(int *)(param_3 + 0x1c);
}

/* ref: FUN_00c04c10 */
uint F_00c04c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  uVar2 = F_00c04b50(param_3,param_1,param_2);
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar3 = uVar2 + 1;
  if (iVar3 < iVar6) {
    piVar5 = ((int *)GEN_TOP((iVar3 * 0x10 + 8 + *(int *)(param_2 + 0xc))));
    do {
      if (*piVar5 != 0) {
        *(undefined4 *)(param_3 + 1) = 3;
        *param_3 = (double)(iVar3 + 1);
        puVar4 = ((undefined4 *)GEN_TOP((iVar3 * 0x10 + *(int *)(param_2 + 0xc))));
        *(undefined4 *)(param_3 + 2) = *puVar4;
        *(undefined4 *)((int)param_3 + 0x14) = puVar4[1];
        *(undefined4 *)(param_3 + 3) = puVar4[2];
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar3 < iVar6);
  }
  iVar3 = iVar3 - iVar6;
  iVar6 = 1 << (*(byte *)(param_2 + 7) & 0x1f);
  if (iVar3 < iVar6) {
    iVar1 = *(int *)(param_2 + 0x10);
    piVar5 = (int *)(iVar3 * 0x20 + 8 + iVar1);
    do {
      if (*piVar5 != 0) {
        iVar3 = iVar3 * 0x20;
        *(undefined4 *)param_3 = *(undefined4 *)(iVar1 + 0x10 + iVar3);
        *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(iVar1 + 0x14 + iVar3);
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(iVar1 + 0x18 + iVar3);
        iVar6 = *(int *)(param_2 + 0x10) + iVar3;
        *(undefined4 *)(param_3 + 2) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + iVar3)));
        *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)(iVar6 + 4);
        *(undefined4 *)(param_3 + 3) = *(undefined4 *)(iVar6 + 8);
        return 1;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 8;
    } while (iVar3 < iVar6);
  }
  return 0;
}

/* ref: FUN_00c04cf0 */
uint F_00c04cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04cf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = param_2;
  uVar4 = 0;
  uVar3 = 0;
  uVar5 = 0;
  uVar2 = 1;
  if (0 < (int)*param_2) {
    uVar3 = 0;
    param_2 = (uint *)in_eax;
    do {
      if ((0 < (int)*param_2) && (uVar4 = uVar4 + *param_2, (int)uVar2 / 2 < (int)uVar4)) {
        uVar3 = uVar4;
        uVar5 = uVar2;
      }
      if (uVar4 == *puVar1) break;
      param_2 = param_2 + 1;
      uVar2 = uVar2 * 2;
    } while ((int)uVar2 / 2 < (int)*puVar1);
  }
  *puVar1 = uVar5;
  return uVar3;
}

/* ref: FUN_00c04d50 */
uint F_00c04d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04d50u, gen_a0, gen_a1, 0u, 0u);
  double * in_eax = (double *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(in_eax + 1) == 3) {
    dVar3 = *in_eax;
    iVar2 = (int)ROUND(dVar3);
    bVar5 = GEN_ISNAN((double)iVar2) || GEN_ISNAN(dVar3);
    if (((bVar5 != (bVar5 || (double)iVar2 == dVar3)) && (0 < iVar2)) && (iVar2 < 0x4000001)) {
      uVar4 = F_00c002e0(iVar2 + -1);
      piVar1 = (int *)(param_2 + 4 + uVar4 * 4);
      *piVar1 = *piVar1 + 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c04db0 */
uint F_00c04db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc04db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint local_4;
  
  iVar6 = 0;
  iVar4 = 1;
  local_4 = 0;
  iVar2 = 1;
  do {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar3 = 0;
    if (iVar1 < iVar2) {
      if (iVar1 < iVar4) {
        return local_4;
      }
LAB_00c04de1: ;
      iVar1 = (iVar1 - iVar4) + 1;
      piVar5 = ((int *)GEN_TOP((iVar4 * 0x10 + -8 + *(int *)(param_1 + 0xc))));
      iVar4 = iVar4 + iVar1;
      do {
        if (*piVar5 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar5 = piVar5 + 4;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    else {
      iVar1 = iVar2;
      if (iVar4 <= iVar2) goto LAB_00c04de1;
    }
    piVar5 = (int *)(param_2 + iVar6 * 4);
    *piVar5 = *piVar5 + iVar3;
    local_4 = local_4 + iVar3;
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 * 2;
    if (0x1a < iVar6) {
      return local_4;
    }
  } while( true );
}

/* ref: FUN_00c04e30 */
uint F_00c04e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_1c;
  uint local_18;
  
  iVar5 = 1 << (*(byte *)(param_1 + 7) & 0x1f);
  local_18 = 0;
  local_1c = 0;
  if (iVar5 == 0) {
    *param_3 = *param_3;
    return 0;
  }
  iVar6 = iVar5 << 5;
  do {
    iVar6 = iVar6 + -0x20;
    iVar3 = *(int *)(param_1 + 0x10) + iVar6;
    iVar5 = iVar5 + -1;
    if (*(int *)(iVar3 + 8) != 0) {
      if (*(int *)(iVar3 + 0x18) == 3) {
        dVar2 = *(double *)(iVar3 + 0x10);
        iVar3 = (int)ROUND(dVar2);
        bVar7 = GEN_ISNAN((double)iVar3) || GEN_ISNAN(dVar2);
        if (((bVar7 == (bVar7 || (double)iVar3 == dVar2)) || (iVar3 < 1)) || (0x4000000 < iVar3))
        goto LAB_00c04ec6;
        uVar4 = F_00c002e0(iVar3 + -1);
        piVar1 = (int *)(param_2 + 4 + uVar4 * 4);
        *piVar1 = *piVar1 + 1;
        iVar3 = 1;
      }
      else {
LAB_00c04ec6: ;
        iVar3 = 0;
      }
      local_1c = local_1c + iVar3;
      local_18 = local_18 + 1;
    }
    if (iVar5 == 0) {
      *param_3 = *param_3 + local_1c;
      return local_18;
    }
  } while( true );
}

/* ref: FUN_00c04f00 */
uint F_00c04f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (in_edi + 1U < 0x10000000) {
    uVar1 = F_00c11930(in_eax,*(undefined4 *)(in_esi + 0xc),*(int *)(in_esi + 0x1c) << 4,
                         in_edi << 4);
  }
  else {
    uVar1 = F_00c11910(in_eax);
  }
  iVar2 = *(int *)(in_esi + 0x1c);
  *(uint *)(in_esi + 0xc) = uVar1;
  if (iVar2 < in_edi) {
    uVar1 = iVar2 << 4;
    iVar2 = in_edi - iVar2;
    do {
      *((undefined4 *)GEN_TOP((*(int *)(in_esi + 0xc) + 8 + uVar1))) = 0;
      uVar1 = uVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(in_esi + 0x1c) = in_edi;
  return uVar1;
}

/* ref: FUN_00c04f60 */
uint F_00c04f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc04f60u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (in_eax == 0) {
    *(undefined * PTR32 *)(in_edi + 0x10) = &REFG(undefined, 0x110e630);
    *(undefined1 *)(in_edi + 7) = 0;
    *(undefined4 *)(in_edi + 0x14) = *(undefined4 *)(in_edi + 0x10);
    return 0;
  }
  uVar1 = F_00c002e0(in_eax + -1);
  if (0x1a < (int)(uVar1 + 1)) {
    F_00c02740(param_3,((char *)REFP(0x13479d4)));
  }
  bVar2 = (byte)(uVar1 + 1);
  iVar5 = 1 << (bVar2 & 0x1f);
  if (iVar5 + 1U < 0x8000000) {
    uVar1 = F_00c11930(param_3,0,0,iVar5 << 5);
  }
  else {
    uVar1 = F_00c11910(param_3);
  }
  *(uint *)(in_edi + 0x10) = uVar1;
  if (0 < iVar5) {
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      uVar1 = *(int *)(in_edi + 0x10) + iVar3;
      iVar3 = iVar3 + 0x20;
      iVar4 = iVar4 + -1;
      *(undefined4 *)(uVar1 + 0x1c) = 0;
      *(undefined4 *)(uVar1 + 0x18) = 0;
      *(undefined4 *)(uVar1 + 8) = 0;
    } while (iVar4 != 0);
  }
  *(byte *)(in_edi + 7) = bVar2;
  *(int *)(in_edi + 0x14) = iVar5 * 0x20 + *(int *)(in_edi + 0x10);
  return uVar1;
}

/* ref: FUN_00c05020 */
uint F_00c05020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_esi;
  
  in_esi = F_00c11930(param_1,0,0,0x20);
  F_00c01960(param_1,in_esi,5);
  *(undefined4 *)(in_esi + 8) = 0;
  *(undefined1 *)(in_esi + 6) = 0xff;
  *(undefined4 *)(in_esi + 0xc) = 0;
  *(undefined4 *)(in_esi + 0x1c) = 0;
  *(undefined1 *)(in_esi + 7) = 0;
  *(undefined * PTR32 *)(in_esi + 0x10) = &REFG(undefined, 0x110e630);
  F_00c04f00(param_1,in_esi,param_2);
  F_00c04f60(param_3,in_esi,param_1);
  return in_esi;
}

/* ref: FUN_00c05080 */
uint F_00c05080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(param_2 + 0x10) != &REFG(undefined, 0x110e630)) {
    F_00c11930(param_1,*(undefined * PTR32 *)(param_2 + 0x10),(1 << (*(byte *)(param_2 + 7) & 0x1f)) << 5
                 ,0);
  }
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x1c) << 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x20,0);
  return uVar1;
}

/* ref: FUN_00c05110 */
uint F_00c05110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05110u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  bool bVar2;
  double dVar3;
  int local_8;
  int uStack_4;
  
  if (param_2 - 1U < *(uint *)(param_1 + 0x1c)) {
    return *(int *)(param_1 + 0xc) + -0x10 + param_2 * 0x10;
  }
  dVar3 = (double)param_2;
  if ((GEN_ISNAN(dVar3) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) ==
      ((GEN_ISNAN(dVar3) || GEN_ISNAN(*(double *)&REFG(undefined, 0x108bec8))) || dVar3 == *(double *)&REFG(undefined, 0x108bec8))) {
    local_8 = (int)(ulonglong)gen_d2bits(dVar3);
    uStack_4 = (int)((ulonglong)gen_d2bits(dVar3) >> 0x20);
    uVar1 = ((uint)(uStack_4 + local_8) % ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U | 1)) * 0x20
            + *(int *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  while ((*(int *)(uVar1 + 0x18) != 3 ||
         (bVar2 = GEN_ISNAN(*(double *)(uVar1 + 0x10)) || GEN_ISNAN(dVar3),
         bVar2 == (bVar2 || *(double *)(uVar1 + 0x10) == dVar3)))) {
    uVar1 = *(uint *)(uVar1 + 0x1c);
    if (uVar1 == 0) {
      return 0x110e488;
    }
  }
  return uVar1;
}

/* ref: FUN_00c051b0 */
uint F_00c051b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc051b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((1 << (*(byte *)(param_1 + 7) & 0x1f)) - 1U & *(uint *)(param_2 + 8)) * 0x20 +
          *(int *)(param_1 + 0x10);
  while ((*(int *)(uVar1 + 0x18) != 4 || (*(int *)(uVar1 + 0x10) != param_2))) {
    uVar1 = *(uint *)(uVar1 + 0x1c);
    if (uVar1 == 0) {
      return 0x110e488;
    }
  }
  return uVar1;
}

/* ref: FUN_00c051f0 */
uint F_00c051f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc051f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    return 0x110e488;
  }
  if (iVar1 == 3) {
    dVar5 = (double)(int)ROUND(*param_2);
    bVar4 = GEN_ISNAN(dVar5) || GEN_ISNAN(*param_2);
    if (bVar4 != (bVar4 || dVar5 == *param_2)) {
      uVar2 = F_00c05110(param_1,(int)ROUND(*param_2));
      return uVar2;
    }
  }
  else if (iVar1 == 4) {
    uVar2 = F_00c051b0(param_1,*(undefined4 *)param_2);
    return uVar2;
  }
  uVar2 = F_00c04a80(param_1,param_2);
  do {
    uVar3 = F_00c00310(uVar2 + 0x10,param_2);
    if (uVar3 != 0) {
      return uVar2;
    }
    uVar2 = *(uint *)(uVar2 + 0x1c);
  } while (uVar2 != 0);
  return 0x110e488;
}

/* ref: FUN_00c052a0 */
uint F_00c052a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc052a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  undefined * puVar1;
  uint uVar2;
  char * pcVar3;
  
  puVar1 = (undefined *)F_00c051f0(param_2,param_3);
  *(undefined1 *)(param_2 + 6) = 0;
  if (puVar1 != &REFG(undefined, 0x110e488)) {
    return (uint)puVar1;
  }
  if (*(int *)(param_3 + 1) == 0) {
    pcVar3 = ((char *)REFP(0x13479e4));
  }
  else {
    if ((*(int *)(param_3 + 1) != 3) || (!GEN_ISNAN(*param_3))) goto LAB_00c052f3;
    pcVar3 = ((char *)REFP(0x13479f8));
  }
  F_00c02740(param_1,pcVar3);
LAB_00c052f3: ;
  uVar2 = F_00c057c0(param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00c05310 */
uint F_00c05310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00c05110(param_2,param_3);
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    (*(double *)(gen_frame + 0x0)) = (double)param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    puVar1 = (undefined *)F_00c057c0(param_1,param_2,&(*(double *)(gen_frame + 0x0)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00c05400 */
uint F_00c05400(unsigned int gen_a0)
{
  GEN_ENTER(0xc05400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((uVar3 == 0) || (*((int *)GEN_TOP((uVar3 * 0x10 + -8 + *(int *)(param_1 + 0xc)))) != 0)) {
    if (*(undefined * PTR32 *)(param_1 + 0x10) != &REFG(undefined, 0x110e630)) {
      uVar2 = F_00c05110(param_1,uVar3 + 1);
      iVar1 = *(int *)(uVar2 + 8);
      uVar2 = uVar3 + 1;
      while( true ) {
        if (iVar1 == 0) {
          uVar5 = uVar2 - uVar3;
          while (1 < uVar5) {
            uVar7 = uVar3 + uVar2 >> 1;
            uVar5 = F_00c05110(param_1,uVar7);
            uVar4 = uVar7;
            if (*(int *)(uVar5 + 8) == 0) {
              uVar4 = uVar3;
              uVar2 = uVar7;
            }
            uVar3 = uVar4;
            uVar5 = uVar2 - uVar4;
          }
          return uVar3;
        }
        uVar5 = uVar2 * 2;
        if (0x7ffffffd < uVar5) break;
        uVar3 = F_00c05110(param_1,uVar5);
        iVar1 = *(int *)(uVar3 + 8);
        uVar3 = uVar2;
        uVar2 = uVar5;
      }
      iVar6 = 1;
      uVar3 = F_00c05110(param_1,1);
      iVar1 = *(int *)(uVar3 + 8);
      while (iVar1 != 0) {
        iVar6 = iVar6 + 1;
        uVar3 = F_00c05110(param_1,iVar6);
        iVar1 = *(int *)(uVar3 + 8);
      }
      return iVar6 - 1;
    }
  }
  else {
    uVar2 = uVar3;
    uVar4 = 0;
    uVar5 = uVar3;
    while (uVar3 = uVar4, 1 < uVar5) {
      uVar4 = uVar3 + uVar2 >> 1;
      if (*((int *)GEN_TOP((uVar4 * 0x10 + -8 + *(int *)(param_1 + 0xc)))) == 0) {
        uVar2 = uVar4;
        uVar4 = uVar3;
      }
      uVar5 = uVar2 - uVar4;
    }
  }
  return uVar3;
}

/* ref: FUN_00c05460 */
uint F_00c05460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc05460u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  double * pdVar9;
  char * pcVar10;
  
  bVar1 = *(byte *)(in_eax + 7);
  iVar7 = *(int *)(in_eax + 0x1c);
  puVar2 = *(undefined * PTR32 *)(in_eax + 0x10);
  if (iVar7 < param_3) {
    F_00c04f00(param_2,in_eax,param_3);
  }
  F_00c04f60(param_4,in_eax,param_2);
  if (param_3 < iVar7) {
    iVar3 = param_3 << 4;
    uVar5 = param_3 + 1;
    (*(int *)(gen_frame + 0xc)) = iVar7 - param_3;
    *(int *)(in_eax + 0x1c) = param_3;
    uVar8 = uVar5;
    param_3 = iVar3;
    do {
      puVar6 = ((undefined4 *)GEN_TOP((*(int *)(in_eax + 0xc) + param_3)));
      if (*((int *)GEN_TOP((*(int *)(in_eax + 0xc) + 8 + param_3))) != 0) {
        puVar4 = (undefined4 *)F_00c05110(in_eax,uVar8);
        if (puVar4 == (undefined4 *)&REFG(undefined, 0x110e488)) {
          (*(double *)(gen_frame + 0x20)) = (double)(int)uVar8;
          (*(undefined4 *)(gen_frame + 0x28)) = 3;
          puVar4 = (undefined4 *)F_00c057c0(param_2,in_eax,&(*(double *)(gen_frame + 0x20)));
        }
        *puVar4 = *puVar6;
        puVar4[1] = puVar6[1];
        puVar4[2] = puVar6[2];
      }
      param_3 = param_3 + 0x10;
      uVar8 = uVar8 + 1;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    } while ((*(int *)(gen_frame + 0xc)) != 0);
    if (uVar5 < 0x10000000) {
      uVar5 = F_00c11930(param_2,*(undefined4 *)(in_eax + 0xc),iVar7 << 4,iVar3);
      *(uint *)(in_eax + 0xc) = uVar5;
    }
    else {
      uVar5 = F_00c11910(param_2);
      *(uint *)(in_eax + 0xc) = uVar5;
    }
  }
  uVar5 = 1 << (bVar1 & 0x1f);
  iVar7 = uVar5 - 1;
  if (-1 < iVar7) {
    pdVar9 = (double *)(puVar2 + iVar7 * 0x20 + 0x10);
    do {
      if (*(int *)(pdVar9 + -1) != 0) {
        puVar6 = (undefined4 *)F_00c051f0(in_eax,pdVar9);
        *(undefined1 *)(in_eax + 6) = 0;
        if (puVar6 == (undefined4 *)&REFG(undefined, 0x110e488)) {
          if (*(int *)(pdVar9 + 1) == 0) {
            pcVar10 = ((char *)REFP(0x13479e4));
LAB_00c055e1: ;
            F_00c02740(param_2,pcVar10);
          }
          else if ((*(int *)(pdVar9 + 1) == 3) && (GEN_ISNAN(*pdVar9))) {
            pcVar10 = ((char *)REFP(0x13479f8));
            goto LAB_00c055e1;
          }
          puVar6 = (undefined4 *)F_00c057c0(param_2,in_eax,pdVar9);
        }
        *puVar6 = *(undefined4 *)(pdVar9 + -2);
        puVar6[1] = *(undefined4 *)((int)pdVar9 + -0xc);
        puVar6[2] = *(undefined4 *)(pdVar9 + -1);
      }
      iVar7 = iVar7 + -1;
      pdVar9 = pdVar9 + -4;
    } while (-1 < iVar7);
  }
  if (puVar2 != &REFG(undefined, 0x110e630)) {
    uVar5 = F_00c11930(param_2,puVar2,uVar5 << 5,0);
  }
  return uVar5;
}

/* ref: FUN_00c05640 */
uint F_00c05640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(param_2 + 0x10) == &REFG(undefined, 0x110e630)) {
    uVar1 = F_00c05460(param_2,param_1,param_3,0);
    return uVar1;
  }
  uVar1 = F_00c05460(param_2,param_1,param_3,1 << (*(byte *)(param_2 + 7) & 0x1f));
  return uVar1;
}

/* ref: FUN_00c05690 */
uint F_00c05690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((int *)(gen_frame + 0x18))[0] = 0;
  ((int *)(gen_frame + 0x18))[1] = 0;
  ((int *)(gen_frame + 0x18))[2] = 0;
  ((int *)(gen_frame + 0x18))[3] = 0;
  ((int *)(gen_frame + 0x18))[4] = 0;
  ((int *)(gen_frame + 0x18))[5] = 0;
  ((int *)(gen_frame + 0x18))[6] = 0;
  ((int *)(gen_frame + 0x18))[7] = 0;
  ((int *)(gen_frame + 0x18))[8] = 0;
  ((int *)(gen_frame + 0x18))[9] = 0;
  ((int *)(gen_frame + 0x18))[10] = 0;
  ((int *)(gen_frame + 0x18))[0xb] = 0;
  ((int *)(gen_frame + 0x18))[0xc] = 0;
  ((int *)(gen_frame + 0x18))[0xd] = 0;
  ((int *)(gen_frame + 0x18))[0xe] = 0;
  ((int *)(gen_frame + 0x18))[0xf] = 0;
  ((int *)(gen_frame + 0x18))[0x10] = 0;
  ((int *)(gen_frame + 0x18))[0x11] = 0;
  ((int *)(gen_frame + 0x18))[0x12] = 0;
  ((int *)(gen_frame + 0x18))[0x13] = 0;
  ((int *)(gen_frame + 0x18))[0x14] = 0;
  ((int *)(gen_frame + 0x18))[0x15] = 0;
  ((int *)(gen_frame + 0x18))[0x16] = 0;
  ((int *)(gen_frame + 0x18))[0x17] = 0;
  ((int *)(gen_frame + 0x18))[0x18] = 0;
  ((int *)(gen_frame + 0x18))[0x19] = 0;
  uVar2 = F_00c04db0(in_edi,&(*(undefined4 *)(gen_frame + 0x14)));
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  uVar3 = F_00c04e30(in_edi,&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x4)));
  if (*(int *)(param_3 + 1) == 3) {
    dVar1 = *param_3;
    (*(double *)(gen_frame + 0xc)) = dVar1;
    iVar5 = (int)ROUND(dVar1);
    (*(int *)(gen_frame + 0x8)) = iVar5;
    bVar6 = GEN_ISNAN((double)iVar5) || GEN_ISNAN(dVar1);
    if (((bVar6 != (bVar6 || (double)iVar5 == dVar1)) && (0 < iVar5)) && (iVar5 < 0x4000001)) {
      uVar4 = F_00c002e0(iVar5 + -1);
      ((int *)(gen_frame + 0x18))[(int)(uVar4)] = ((int *)(gen_frame + 0x18))[(int)(uVar4)] + 1;
      iVar5 = 1;
      goto LAB_00c0577f;
    }
  }
  iVar5 = 0;
LAB_00c0577f: ;
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + iVar5;
  uVar4 = F_00c04cf0(&(*(undefined4 *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x4)));
  uVar2 = F_00c05460(in_edi,param_2,(*(uint *)(gen_frame + 0x4)),((uVar2 + uVar3) - uVar4) + 1);
  return uVar2;
}

/* ref: FUN_00c057c0 */
uint F_00c057c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc057c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  undefined8 * puVar2;
  uint uVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  
  puVar2 = (undefined8 *)F_00c04a80(param_2,param_3);
  if ((*(int *)(puVar2 + 1) == 0) && (puVar5 = puVar2, puVar2 != (undefined8 *)&REFG(undefined, 0x110e630))) {
LAB_00c05886: ;
    *(int *)(puVar5 + 2) = *param_3;
    *(int *)((int)puVar5 + 0x14) = param_3[1];
    *(int *)(puVar5 + 3) = param_3[2];
    if (((3 < param_3[2]) && ((*(byte *)(*param_3 + 5) & 3) != 0)) &&
       ((*(byte *)(param_2 + 5) & 4) != 0)) {
      F_00c01940(param_1,param_2);
    }
    return (uint)puVar5;
  }
  if (*(uint *)(param_2 + 0x10) < *(uint *)(param_2 + 0x14)) {
    do {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x20;
      puVar5 = *(undefined8 * PTR32 *)(param_2 + 0x14);
      if (*(int *)(puVar5 + 3) == 0) {
        if (puVar5 == (undefined8 *)0x0) goto LAB_00c05812;
        puVar4 = (undefined8 *)F_00c04a80(param_2,puVar2 + 2);
        if (puVar4 == puVar2) {
          *(undefined4 *)((int)puVar5 + 0x1c) = *(undefined4 *)((int)puVar2 + 0x1c);
          *(undefined8 * PTR32 *)((int)puVar2 + 0x1c) = puVar5;
        }
        else {
          puVar1 = *(undefined8 * PTR32 *)((int)puVar4 + 0x1c);
          while (puVar1 != puVar2) {
            puVar4 = *(undefined8 * PTR32 *)((int)puVar4 + 0x1c);
            puVar1 = *(undefined8 * PTR32 *)((int)puVar4 + 0x1c);
          }
          *(undefined8 * PTR32 *)((int)puVar4 + 0x1c) = puVar5;
          *puVar5 = *puVar2;
          puVar5[1] = puVar2[1];
          puVar5[2] = puVar2[2];
          puVar5[3] = puVar2[3];
          *(undefined4 *)((int)puVar2 + 0x1c) = 0;
          *(undefined4 *)(puVar2 + 1) = 0;
          puVar5 = puVar2;
        }
        goto LAB_00c05886;
      }
    } while (*(undefined8 * PTR32 *)(param_2 + 0x10) < puVar5);
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -0x20;
LAB_00c05812: ;
  F_00c05690(param_2,param_1,param_3);
  uVar3 = F_00c052a0(param_1,param_2,param_3);
  return uVar3;
}

/* ref: FUN_00c058d0 */
uint F_00c058d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc058d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * puVar1;
  
  puVar1 = (undefined *)F_00c051b0(param_2,param_3);
  if (puVar1 == &REFG(undefined, 0x110e488)) {
    ((undefined4 *)(gen_frame + 0x0))[0] = param_3;
    (*(undefined4 *)(gen_frame + 0x8)) = 4;
    puVar1 = (undefined *)F_00c057c0(param_1,param_2,((undefined4 *)(gen_frame + 0x0)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00c05920 */
uint F_00c05920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int local_4;
  
  uVar6 = *(uint *)((*(int *)&gen_args[0]) + 0x10);
  if (*(char *)(uVar6 + 0x15) != '\x02') {
    if ((*(int *)&gen_args[1]) + 1U < 0x40000000) {
      puVar3 = (undefined4 *)F_00c11930((*(int *)&gen_args[0]),0,0,(*(int *)&gen_args[1]) * 4);
    }
    else {
      puVar3 = (undefined4 *)F_00c11910((*(int *)&gen_args[0]));
    }
    piVar1 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x10);
    iVar5 = (*(int *)&gen_args[1]);
    puVar7 = puVar3;
    if (0 < (*(int *)&gen_args[1])) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
    }
    local_4 = 0;
    if (0 < piVar1[2]) {
      do {
        piVar4 = *(int * PTR32 *)(*piVar1 + local_4 * 4);
        if (piVar4 != (int *)0x0) {
          do {
            piVar2 = (int *)*piVar4;
            uVar6 = piVar4[2] & (*(int *)&gen_args[1]) - 1U;
            *piVar4 = puVar3[uVar6];
            puVar3[uVar6] = piVar4;
            piVar4 = piVar2;
          } while (piVar2 != (int *)0x0);
        }
        local_4 = local_4 + 1;
      } while (local_4 < piVar1[2]);
    }
    uVar6 = F_00c11930((*(int *)&gen_args[0]),*piVar1,piVar1[2] * 4,0);
    *piVar1 = (int)puVar3;
    piVar1[2] = (*(int *)&gen_args[1]);
  }
  return uVar6;
}

/* ref: FUN_00c059e0 */
uint F_00c059e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc059e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (0xffffffed < in_edi + 1U) {
    F_00c11910(param_2);
  }
  puVar2 = (undefined4 *)F_00c11930(param_2,0,0,in_edi + 0x11);
  puVar2[3] = in_edi;
  puVar2[2] = param_4;
  *(byte *)((int)puVar2 + 5) = *((byte *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x14))) & 3;
  *(undefined1 *)(puVar2 + 1) = 4;
  *(undefined1 *)((int)puVar2 + 6) = 0;
  F_00c46aa0(puVar2 + 4,param_3,in_edi);
  *(undefined1 *)((int)puVar2 + in_edi + 0x10) = 0;
  piVar1 = *(int * PTR32 *)(param_2 + 0x10);
  uVar3 = param_4 & piVar1[2] - 1U;
  *puVar2 = *(undefined4 *)(*piVar1 + uVar3 * 4);
  *(undefined4 * PTR32 *)(*piVar1 + uVar3 * 4) = puVar2;
  piVar1[1] = piVar1[1] + 1;
  uVar3 = piVar1[2];
  if ((uVar3 < (uint)piVar1[1]) && ((int)uVar3 < 0x3fffffff)) {
    F_00c05920(param_2,uVar3 * 2);
  }
  return (uint)puVar2;
}

/* ref: FUN_00c05a80 */
uint F_00c05a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  uVar2 = (param_3 >> 5) + 1;
  uVar5 = param_3;
  for (uVar3 = param_3; uVar2 <= uVar3; uVar3 = uVar3 - uVar2) {
    uVar5 = uVar5 ^ (uint)*((byte *)GEN_TOP(((int)param_2 + (uVar3 - 1)))) + uVar5 * 0x20 + (uVar5 >> 2);
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + ((*(int * PTR32 *)(param_1 + 0x10))[2] - 1U & uVar5) * 4)));
  do {
    if (puVar1 == (undefined4 *)0x0) {
      uVar3 = F_00c059e0(param_3,param_1,param_2,uVar5);
      return uVar3;
    }
    if (puVar1[3] == param_3) {
      piVar4 = puVar1 + 4;
      piVar6 = param_2;
      for (uVar3 = param_3; 3 < uVar3; uVar3 = uVar3 - 4) {
        if (*piVar6 != *piVar4) goto LAB_00c05b20;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      if ((uVar3 == 0) ||
         (((char)*piVar4 == (char)*piVar6 &&
          ((uVar3 < 2 ||
           ((*(char *)((int)piVar4 + 1) == *(char *)((int)piVar6 + 1) &&
            ((uVar3 < 3 || (*(char *)((int)piVar4 + 2) == *(char *)((int)piVar6 + 2))))))))))) {
        if ((*(byte *)((int)puVar1 + 5) & 3 & ~*((byte *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x14)))) != 0) {
          *(byte *)((int)puVar1 + 5) = *(byte *)((int)puVar1 + 5) ^ 3;
        }
        return (uint)puVar1;
      }
    }
LAB_00c05b20: ;
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

/* ref: FUN_00c05b70 */
uint F_00c05b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05b70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  undefined4 * puVar2;
  
  if (0xffffffe5 < param_2) {
    F_00c11910(param_1);
  }
  puVar2 = (undefined4 *)F_00c11930(param_1,0,0,param_2 + 0x18);
  bVar1 = *((byte *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x14)));
  puVar2[4] = param_2;
  *(byte *)((int)puVar2 + 5) = bVar1 & 3;
  *(undefined1 *)(puVar2 + 1) = 7;
  puVar2[2] = 0;
  puVar2[3] = param_3;
  *puVar2 = **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70)));
  **((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70))) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c05bd0 */
uint F_00c05bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,param_2 * 0x10 + 0x18);
  F_00c01960(param_1,uVar1,6);
  *(char *)(uVar1 + 7) = (char)param_2;
  *(undefined1 *)(uVar1 + 6) = 1;
  *(undefined4 *)(uVar1 + 0xc) = param_3;
  return uVar1;
}

/* ref: FUN_00c05c10 */
uint F_00c05c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = param_2 * 4 + 0x14;
  uVar1 = F_00c11930(param_1,0,0,iVar3);
  F_00c01960(param_1,uVar1,6);
  *(undefined1 *)(uVar1 + 6) = 0;
  *(undefined4 *)(uVar1 + 0xc) = param_3;
  *(char *)(uVar1 + 7) = (char)param_2;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(iVar3 + uVar1);
    iVar3 = param_2;
    do {
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = 0;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00c05c70 */
uint F_00c05c70(unsigned int gen_a0)
{
  GEN_ENTER(0xc05c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,0x20);
  F_00c01960(param_1,uVar1,10);
  *(uint *)(uVar1 + 8) = uVar1 + 0x10;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  return uVar1;
}

/* ref: FUN_00c05cb0 */
uint F_00c05cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05cb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x68);
  piVar4 = (int *)(param_1 + 0x68);
  while (iVar2 != 0) {
    piVar5 = (int *)*piVar4;
    if ((uint)piVar5[2] < param_2) break;
    if (piVar5[2] == param_2) {
      if ((~*(byte *)(iVar3 + 0x14) & *(byte *)((int)piVar5 + 5) & 3) == 0) {
        return (uint)piVar5;
      }
      *(byte *)((int)piVar5 + 5) = *(byte *)((int)piVar5 + 5) ^ 3;
      return (uint)piVar5;
    }
    piVar4 = piVar5;
    iVar2 = *piVar5;
  }
  piVar5 = (int *)F_00c11930(param_1,0,0,0x20);
  *(undefined1 *)(piVar5 + 1) = 10;
  bVar1 = *(byte *)(iVar3 + 0x14);
  piVar5[2] = param_2;
  *(byte *)((int)piVar5 + 5) = bVar1 & 3;
  *piVar5 = *piVar4;
  *piVar4 = (int)piVar5;
  piVar5[4] = iVar3 + 0x78;
  iVar2 = *(int *)(iVar3 + 0x8c);
  piVar5[5] = iVar2;
  *(int * PTR32 *)(iVar2 + 0x10) = piVar5;
  *(int * PTR32 *)(iVar3 + 0x8c) = piVar5;
  return (uint)piVar5;
}

/* ref: FUN_00c05d60 */
uint F_00c05d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)(param_2 + 0x10);
  if (*(int * PTR32 *)(param_2 + 8) != piVar1) {
    *((int *)GEN_TOP((*(int *)(param_2 + 0x14) + 0x10))) = *piVar1;
    *(undefined4 *)(*piVar1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  uVar2 = F_00c11930(param_1,param_2,0x20,0);
  return uVar2;
}

/* ref: FUN_00c05da0 */
unsigned int F_00c05da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  iVar2 = *(int *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x10);
  while ((iVar2 != 0 && (puVar4 = *(undefined4 * PTR32 *)(param_1 + 0x68), param_2 <= (uint)puVar4[2]))) {
    *(undefined4 *)(param_1 + 0x68) = *puVar4;
    piVar1 = puVar4 + 4;
    if ((~*(byte *)(iVar3 + 0x14) & *(byte *)((int)puVar4 + 5) & 3) == 0) {
      *(int *)(puVar4[5] + 0x10) = *piVar1;
      *(undefined4 *)(*piVar1 + 0x14) = puVar4[5];
      piVar5 = (int *)puVar4[2];
      *piVar1 = *piVar5;
      puVar4[5] = piVar5[1];
      puVar4[6] = piVar5[2];
      puVar4[2] = piVar1;
      F_00c01990(param_1,puVar4);
    }
    else {
      if ((int *)puVar4[2] != piVar1) {
        *(int *)(puVar4[5] + 0x10) = *piVar1;
        *(undefined4 *)(*piVar1 + 0x14) = puVar4[5];
      }
      F_00c11930(param_1,puVar4,0x20,0);
    }
    iVar2 = *(int *)(param_1 + 0x68);
  }
  return 0;
}

/* ref: FUN_00c05e50 */
uint F_00c05e50(unsigned int gen_a0)
{
  GEN_ENTER(0xc05e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c11930(param_1,0,0,0x4c);
  F_00c01960(param_1,uVar1,9);
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0x28) = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  *(undefined4 *)(uVar1 + 0x2c) = 0;
  *(undefined4 *)(uVar1 + 0x30) = 0;
  *(undefined4 *)(uVar1 + 0x24) = 0;
  *(undefined1 *)(uVar1 + 0x48) = 0;
  *(undefined4 *)(uVar1 + 0x1c) = 0;
  *(undefined1 *)(uVar1 + 0x49) = 0;
  *(undefined1 *)(uVar1 + 0x4a) = 0;
  *(undefined1 *)(uVar1 + 0x4b) = 0;
  *(undefined4 *)(uVar1 + 0x14) = 0;
  *(undefined4 *)(uVar1 + 0x38) = 0;
  *(undefined4 *)(uVar1 + 0x18) = 0;
  *(undefined4 *)(uVar1 + 0x3c) = 0;
  *(undefined4 *)(uVar1 + 0x40) = 0;
  *(undefined4 *)(uVar1 + 0x20) = 0;
  return uVar1;
}

/* ref: FUN_00c05eb0 */
uint F_00c05eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 0x2c) * 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x10),*(int *)(param_2 + 0x34) * 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 8),*(int *)(param_2 + 0x28) << 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0x30) * 4,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x18),*(int *)(param_2 + 0x38) * 0xc,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x1c),*(int *)(param_2 + 0x24) * 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x4c,0);
  return uVar1;
}

/* ref: FUN_00c05f50 */
uint F_00c05f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc05f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(char *)(param_2 + 6) != '\0') {
    uVar1 = F_00c11930(param_1,param_2,(uint)*(byte *)(param_2 + 7) * 0x10 + 0x18,0);
    return uVar1;
  }
  uVar1 = F_00c11930(param_1,param_2,(uint)*(byte *)(param_2 + 7) * 4 + 0x14,0);
  return uVar1;
}

/* ref: FUN_00c05f90 */
uint F_00c05f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc05f90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x18) + 8)));
    iVar3 = param_2;
    do {
      if (param_3 < piVar2[-1]) {
        return 0;
      }
      if ((param_3 < *piVar2) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
        return *((int *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar1 * 0xc))) + 0x10;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  return 0;
}

/* ref: FUN_00c05fe0 */
uint F_00c05fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xc05fe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pbVar3 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[2])))((*(int * PTR32 *)&gen_args[0])[4],(*(int * PTR32 *)&gen_args[0])[3],&(*(int * PTR32 *)&gen_args[0]))));
  if ((pbVar3 != (byte *)0x0) && ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0)) {
    piVar2[1] = (int)pbVar3;
    *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) + -1;
    bVar1 = *pbVar3;
    piVar2[1] = (int)(pbVar3 + 1);
    return (uint)bVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00c06020 */
uint F_00c06020(unsigned int gen_a0)
{
  GEN_ENTER(0xc06020u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  byte bVar1;
  int * piVar2;
  byte * pbVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (*(*(int * PTR32 *)&gen_args[0]) != 0) {
LAB_00c06069: ;
    return (uint)*(byte *)piVar2[1];
  }
  pbVar3 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[2])))((*(int * PTR32 *)&gen_args[0])[4],(*(int * PTR32 *)&gen_args[0])[3],&(*(int * PTR32 *)&gen_args[0]))));
  if ((pbVar3 != (byte *)0x0) && ((*(int * PTR32 *)&gen_args[0]) != (int *)0x0)) {
    piVar2[1] = (int)pbVar3;
    *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) + -1;
    bVar1 = *pbVar3;
    piVar2[1] = (int)(pbVar3 + 1);
    if (bVar1 != 0xffffffff) {
      *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]);
      piVar2[1] = (int)pbVar3;
      goto LAB_00c06069;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c06080 */
uint F_00c06080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc06080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  param_2[4] = param_1;
  param_2[2] = param_3;
  param_2[3] = param_4;
  *param_2 = 0;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: FUN_00c060b0 */
uint F_00c060b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc060b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (*(int *)&gen_args[1]);
  uVar3 = (*(uint *)&gen_args[2]);
  do {
    if (uVar3 == 0) {
      return 0;
    }
    if (*(*(uint * PTR32 *)&gen_args[0]) == 0) {
      pbVar2 = ((byte *)GEN_TOP((*((code *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2])))((*(uint * PTR32 *)&gen_args[0])[4],(*(uint * PTR32 *)&gen_args[0])[3],&(*(uint *)&gen_args[2]))));
      if (pbVar2 == (byte *)0x0) {
        return uVar3;
      }
      if ((*(uint *)&gen_args[2]) == 0) {
        return uVar3;
      }
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)pbVar2;
      *(*(uint * PTR32 *)&gen_args[0]) = (*(uint *)&gen_args[2]) - 1;
      bVar1 = *pbVar2;
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)(pbVar2 + 1);
      if (bVar1 == 0xffffffff) {
        return uVar3;
      }
      *(*(uint * PTR32 *)&gen_args[0]) = (*(uint *)&gen_args[2]);
      (*(uint * PTR32 *)&gen_args[0])[1] = (uint)pbVar2;
    }
    if (*((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) == 0xffffffff) {
      return uVar3;
    }
    uVar5 = *(*(uint * PTR32 *)&gen_args[0]);
    if (uVar3 <= *(*(uint * PTR32 *)&gen_args[0])) {
      uVar5 = uVar3;
    }
    F_00c46aa0(iVar4,((byte *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])),uVar5);
    *(*(uint * PTR32 *)&gen_args[0]) = *(*(uint * PTR32 *)&gen_args[0]) - uVar5;
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + uVar5;
    iVar4 = iVar4 + uVar5;
    uVar3 = uVar3 - uVar5;
  } while( true );
}

/* ref: FUN_00c06140 */
uint F_00c06140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc06140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if (param_3 <= param_2[2]) {
    return *param_2;
  }
  uVar2 = param_3;
  if (param_3 < 0x20) {
    uVar2 = 0x20;
  }
  if (uVar2 + 1 < 0xfffffffe) {
    uVar1 = F_00c11930(param_1,*param_2,param_2[2],uVar2);
    param_2[2] = uVar2;
    *param_2 = uVar1;
    return uVar1;
  }
  uVar1 = F_00c11910(param_1);
  param_2[2] = uVar2;
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_00c061c0 */
uint F_00c061c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc061c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)((undefined1 *)(gen_frame + 0x0));
  uVar1 = F_00c072c0(((undefined1 *)(gen_frame + 0x0)),(uint)*(byte *)(in_esi + 6));
  if (in_esi[4] == 0) {
    uVar1 = (*(code *)in_esi[1])(*in_esi,((undefined1 *)(gen_frame + 0x0)),0xc,in_esi[2]);
    in_esi[4] = uVar1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc)) ^ (uint)((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00c06230 */
uint F_00c06230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc06230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  undefined1 * puVar4;
  uint uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x21c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(undefined1 * PTR32 *)(gen_frame + 0xc));
  (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = param_1;
  (*(uint *)(gen_frame + 0x14)) = param_2;
  if (param_3[5] == 0) {
    puVar2 = param_1;
    if (param_3[4] == 0) {
      puVar2 = ((undefined1 *)GEN_TOP((*(code *)param_3[1])(*param_3,param_1,param_2 * (int)this,param_3[2])));
      param_3[4] = puVar2;
    }
  }
  else {
    uVar6 = param_2 * (int)this;
    (*(uint *)(gen_frame + 0x18)) = uVar6;
    if (uVar6 < 0x201) {
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x1c));
    }
    else {
      puVar2 = (undefined1 *)F_00c11930(*param_3,0,0,uVar6);
      (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = puVar2;
    }
    F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(undefined1 * PTR32 *)(gen_frame + 0x10)),uVar6);
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (*(undefined1 * PTR32 *)(gen_frame + 0xc)) + uVar6;
    uVar5 = param_2;
    for (puVar2 = (*(undefined1 * PTR32 *)(gen_frame + 0xc)); puVar2 < (*(undefined1 * PTR32 *)(gen_frame + 0xc)) + uVar6; puVar2 = puVar2 + uVar5) {
      iVar3 = 0;
      if (param_2 >> 1 != 0) {
        puVar4 = puVar2 + (uVar5 - 1);
        do {
          uVar1 = *puVar4;
          *puVar4 = puVar2[iVar3];
          puVar2[iVar3] = uVar1;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + -1;
          uVar5 = (*(uint *)(gen_frame + 0x14));
        } while (iVar3 < (int)(param_2 >> 1));
      }
    }
    if (param_3[4] == 0) {
      uVar6 = (*(code *)param_3[1])(*param_3,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x18)),param_3[2]);
      param_3[4] = uVar6;
    }
    puVar2 = (*(undefined1 * PTR32 *)(gen_frame + 0xc));
    if ((*(undefined1 * PTR32 *)(gen_frame + 0xc)) != ((undefined1 *)(gen_frame + 0x1c))) {
      puVar2 = (undefined1 *)F_00c11930(*param_3,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1,0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x21c)) ^ (uint)&(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
  return (uint)puVar2;
}

/* ref: FUN_00c06400 */
uint F_00c06400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06400u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if ((in_eax == 0) || (in_eax + 0x10 == 0)) {
    (*(int *)(gen_frame + 0xc)) = 0;
    uVar1 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,in_esi);
  }
  else {
    (*(int *)(gen_frame + 0xc)) = *(int *)(in_eax + 0xc) + 1;
    uVar1 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,in_esi);
    if (in_esi[4] == 0) {
      uVar1 = (*(code *)in_esi[1])(*in_esi,in_eax + 0x10,(*(int *)(gen_frame + 0xc)),in_esi[2]);
      in_esi[4] = uVar1;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00c06470 */
uint F_00c06470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0x28);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
  F_00c06230((undefined *)0x1,((undefined1 *)(gen_frame + 0xb)) + 1,4,in_eax);
  if (0 < iVar1) {
    iVar3 = 0;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*(int *)(param_2 + 8) + iVar3)));
      ((undefined1 *)(gen_frame + 0xb))[0] = *((undefined1 *)GEN_TOP((*(int *)(param_2 + 8) + 8 + iVar3)));
      F_00c06230((undefined *)0x1,((undefined1 *)(gen_frame + 0xb)),1,in_eax);
      iVar1 = *(int *)(puVar4 + 1);
      if (iVar1 == 1) {
        uVar6 = 1;
        puVar5 = (undefined8 *)((undefined1 *)(gen_frame + 0xb));
        ((undefined1 *)(gen_frame + 0xb))[0] = *(undefined1 *)puVar4;
LAB_00c06512: ;
        F_00c06230((undefined *)0x1,puVar5,uVar6,in_eax);
      }
      else {
        if (iVar1 == 3) {
          uVar6 = 8;
          puVar5 = &(*(undefined8 *)(gen_frame + 0x10));
          (*(undefined8 *)(gen_frame + 0x10)) = *puVar4;
          goto LAB_00c06512;
        }
        if (iVar1 == 4) {
          F_00c06400(*(undefined4 *)puVar4,in_eax);
        }
      }
      iVar3 = iVar3 + 0x10;
      iVar1 = (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) + -1;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_2 + 0x34);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb)) + 1)) = iVar1;
  uVar2 = F_00c06230((undefined *)0x1,((undefined1 *)(gen_frame + 0xb)) + 1,4,in_eax);
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      uVar2 = F_00c06700(*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + iVar3 * 4))),
                           *(undefined4 *)(param_2 + 0x20),in_eax);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return uVar2;
}

/* ref: FUN_00c06580 */
uint F_00c06580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06580u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined * this;
  int iVar5;
  
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined4 * PTR32 *)&gen_args[0])[3] == 0) {
    this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x30)));
  }
  else {
    this = (undefined *)0x0;
  }
  uVar1 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x14)));
  (*(undefined * PTR32 *)&gen_args[1]) = this;
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[1]),4,(*(undefined4 * PTR32 *)&gen_args[0]));
  F_00c06230(this,uVar1,4,(*(undefined4 * PTR32 *)&gen_args[0]));
  if ((*(undefined4 * PTR32 *)&gen_args[0])[3] == 0) {
    iVar4 = *(int *)(iVar2 + 0x38);
  }
  else {
    iVar4 = 0;
  }
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)iVar4;
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[1]),4,(*(undefined4 * PTR32 *)&gen_args[0]));
  if (0 < iVar4) {
    iVar5 = 0;
    do {
      F_00c06400(*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x18) + iVar5))),(*(undefined4 * PTR32 *)&gen_args[0]));
      (*(undefined * PTR32 *)&gen_args[1]) = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x18) + 4 + iVar5)));
      F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[1]),4,(*(undefined4 * PTR32 *)&gen_args[0]));
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP((*(int *)(iVar2 + 0x18) + 8 + iVar5)));
      F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
      iVar5 = iVar5 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(undefined4 * PTR32 *)&gen_args[0])[3] == 0) {
    (*(undefined * PTR32 *)&gen_args[1]) = *(undefined * PTR32 *)(iVar2 + 0x24);
  }
  else {
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x0;
  }
  iVar4 = (int)(*(undefined * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0xc)) = (int)(*(undefined * PTR32 *)&gen_args[1]);
  uVar3 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x1c) + iVar5 * 4)));
      if ((iVar4 == 0) || (iVar4 + 0x10 == 0)) {
        (*(int *)(gen_frame + 0xc)) = 0;
        uVar3 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
      }
      else {
        (*(int *)(gen_frame + 0xc)) = *(int *)(iVar4 + 0xc) + 1;
        uVar3 = F_00c06230((undefined *)0x1,&(*(int *)(gen_frame + 0xc)),4,(*(undefined4 * PTR32 *)&gen_args[0]));
        if ((*(undefined4 * PTR32 *)&gen_args[0])[4] == 0) {
          uVar3 = (*((code *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[1])))(*(*(undefined4 * PTR32 *)&gen_args[0]),iVar4 + 0x10,(*(int *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)&gen_args[0])[2]);
          (*(undefined4 * PTR32 *)&gen_args[0])[4] = uVar3;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(*(undefined * PTR32 *)&gen_args[1]));
  }
  return uVar3;
}

/* ref: FUN_00c06700 */
uint F_00c06700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc06700u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this;
  undefined4 uVar1;
  int iVar2;
  int in_eax;
  int in_eax_00;
  uint uVar3;
  
  in_eax = (*(int *)&gen_args[2]);
  iVar2 = (int)(*(undefined * PTR32 *)&gen_args[0]);
  in_eax_00 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if ((in_eax_00 == (*(int *)&gen_args[1])) || (*(int *)((*(int *)&gen_args[2]) + 0xc) != 0)) {
    in_eax_00 = 0;
  }
  F_00c06400(in_eax_00,(*(int *)&gen_args[2]));
  (*(undefined * PTR32 *)&gen_args[0]) = *(undefined * PTR32 *)(iVar2 + 0x3c);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  (*(undefined * PTR32 *)&gen_args[0]) = *(undefined * PTR32 *)(iVar2 + 0x40);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *(undefined1 *)(iVar2 + 0x48);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *(undefined1 *)(iVar2 + 0x49);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[0]) + 0)))) = *(undefined1 *)(iVar2 + 0x4a);
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[0]), 1, 3),*(undefined1 *)(iVar2 + 0x4b))));
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),1,in_eax);
  this = *(undefined * PTR32 *)(iVar2 + 0x2c);
  uVar1 = *(undefined4 *)(iVar2 + 0xc);
  (*(undefined * PTR32 *)&gen_args[0]) = this;
  F_00c06230((undefined *)0x1,&(*(undefined * PTR32 *)&gen_args[0]),4,in_eax);
  F_00c06230(this,uVar1,4,in_eax);
  F_00c06470(in_eax,iVar2);
  uVar3 = F_00c06580(in_eax,iVar2);
  return uVar3;
}

/* ref: FUN_00c06800 */
uint F_00c06800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc06800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)((byte *)(gen_frame + 0x4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)) = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_5;
  (*(uint *)(gen_frame + 0x14)) = 0;
  bVar1 = F_00c07300();
  (*(byte *)(gen_frame + 0x1c)) = (byte)param_6;
  (*(uint *)(gen_frame + 0x18)) = (uint)((byte)param_6 != bVar1);
  F_00c072c0(((undefined1 *)(gen_frame + 0x20)),param_6);
  if ((*(uint *)(gen_frame + 0x14)) == 0) {
    uVar2 = (*(code *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)))((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),((undefined1 *)(gen_frame + 0x20)),0xc,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)));
    (*(uint *)(gen_frame + 0x14)) = uVar2;
  }
  F_00c06700(param_2,0,((byte *)(gen_frame + 0x4)));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  F_00c47745((*(uint *)(gen_frame + 0x2c)) ^ (uint)((byte *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00c06960 */
uint F_00c06960(unsigned int gen_a0)
{
  GEN_ENTER(0xc06960u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00c060b0(in_esi[1],&(*(uint *)(gen_frame + 0xc)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  if ((int)(*(uint *)(gen_frame + 0xc)) < 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a38)));
                    
    F_00bb93a0(*in_esi,3);
  }
  return (*(uint *)(gen_frame + 0xc));
}

/* ref: FUN_00c06a20 */
uint F_00c06a20(unsigned int gen_a0)
{
  GEN_ENTER(0xc06a20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c060b0(in_esi[1],&(*(int *)(gen_frame + 0xc)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  if ((*(int *)(gen_frame + 0xc)) == 0) {
    return 0;
  }
  uVar1 = F_00c06140(*in_esi,in_esi[2],(*(int *)(gen_frame + 0xc)));
  uVar2 = F_00c060b0(in_esi[1],uVar1,(*(int *)(gen_frame + 0xc)));
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar1 = F_00c05a80(*in_esi,uVar1,(*(int *)(gen_frame + 0xc)) + -1);
  return uVar1;
}

/* ref: FUN_00c06ad0 */
uint F_00c06ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x40000000) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 4);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *(uint *)(param_2 + 0xc) = uVar2;
  *(uint *)(param_2 + 0x2c) = uVar1;
  uVar1 = F_00c060b0(in_eax[1],uVar2,uVar1 * 4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_eax,3);
  }
  return 0;
}

/* ref: FUN_00c06b60 */
uint F_00c06b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06b60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  
  iVar1 = (*(int *)&gen_args[1]);
  uVar2 = F_00c06960((*(undefined4 * PTR32 *)&gen_args[0]));
  if (uVar2 + 1 < 0x10000000) {
    uVar3 = F_00c11930(*(*(undefined4 * PTR32 *)&gen_args[0]),0,0,uVar2 << 4);
  }
  else {
    uVar3 = F_00c11910(*(*(undefined4 * PTR32 *)&gen_args[0]));
  }
  iVar5 = 0;
  *(uint *)(iVar1 + 8) = uVar3;
  *(uint *)(iVar1 + 0x28) = uVar2;
  if (0 < (int)uVar2) {
    iVar4 = 0;
    uVar3 = uVar2;
    do {
      *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)(iVar1 + 8)))) = 0;
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (0 < (int)uVar2) {
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      do {
        puVar6 = ((uint *)GEN_TOP((*(int *)(iVar1 + 8) + iVar5)));
        uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(int *)&gen_args[1]),1);
        if (uVar2 != 0) {
          F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                       ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
        }
        switch((unsigned int)(uintptr_t)((undefined1)(*(int *)&gen_args[1]))) {
        case 0: ;
          puVar6[2] = 0;
          break;
        case 1: ;
          uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(char *)(gen_frame + 0x3)),1);
          if (uVar2 != 0) {
            F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                         ((char *)REFP(0x1347a28)));
                    
            F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
          }
          puVar6[2] = 1;
          *puVar6 = (uint)((*(char *)(gen_frame + 0x3)) != '\0');
          break;
        default: ;
          F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                       ((char *)REFP(0x1347a44)));
                    
          F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
        case 3: ;
          uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(undefined8 *)(gen_frame + 0x8)),8);
          if (uVar2 != 0) {
            F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],
                         ((char *)REFP(0x1347a28)));
                    
            F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
          }
          *(undefined8 *)puVar6 = (*(undefined8 *)(gen_frame + 0x8));
          puVar6[2] = 3;
          break;
        case 4: ;
          uVar2 = F_00c06a20((*(undefined4 * PTR32 *)&gen_args[0]));
          *puVar6 = uVar2;
          puVar6[2] = 4;
        }
        iVar5 = iVar5 + 0x10;
        uVar2 = (*(uint *)(gen_frame + 0x4)) - 1;
        (*(uint *)(gen_frame + 0x4)) = uVar2;
      } while (uVar2 != 0);
    }
  }
  uVar2 = F_00c060b0((*(undefined4 * PTR32 *)&gen_args[0])[1],&(*(int *)&gen_args[1]),4);
  iVar5 = (*(int *)&gen_args[1]);
  if (uVar2 == 0) {
    if ((*(int *)&gen_args[1]) < 0) {
      F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],((char *)REFP(0x1347a38)));
                    
      F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
    }
    if ((*(int *)&gen_args[1]) + 1U < 0x40000000) {
      uVar2 = F_00c11930(*(*(undefined4 * PTR32 *)&gen_args[0]),0,0,(*(int *)&gen_args[1]) * 4);
    }
    else {
      uVar2 = F_00c11910(*(*(undefined4 * PTR32 *)&gen_args[0]));
    }
    *(uint *)(iVar1 + 0x10) = uVar2;
    uVar2 = 0;
    *(int *)(iVar1 + 0x34) = iVar5;
    if (0 < iVar5) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x10) + uVar2 * 4))) = 0;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < iVar5);
    }
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        uVar2 = F_00c070c0((*(undefined4 * PTR32 *)&gen_args[0]),*(undefined4 *)(iVar1 + 0x20));
        *((uint *)GEN_TOP((*(int *)(iVar1 + 0x10) + iVar4 * 4))) = uVar2;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    return uVar2;
  }
  F_00c00790(*(*(undefined4 * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(undefined4 * PTR32 *)&gen_args[0])[3],((char *)REFP(0x1347a28)));
                    
  F_00bb93a0(*(*(undefined4 * PTR32 *)&gen_args[0]),3);
}

/* ref: FUN_00c06e00 */
uint F_00c06e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc06e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int in_edi = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x40000000) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 4);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *(uint *)(in_edi + 0x14) = uVar2;
  *(uint *)(in_edi + 0x30) = uVar1;
  uVar1 = F_00c060b0(in_eax[1],uVar2,uVar1 * 4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_eax,3);
  }
  uVar1 = F_00c06960(in_eax);
  if (uVar1 + 1 < 0x15555556) {
    uVar2 = F_00c11930(*in_eax,0,0,uVar1 * 0xc);
  }
  else {
    uVar2 = F_00c11910(*in_eax);
  }
  *(uint *)(in_edi + 0x18) = uVar2;
  *(uint *)(in_edi + 0x38) = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    uVar2 = uVar1;
    do {
      *((undefined4 *)GEN_TOP((iVar3 + *(int *)(in_edi + 0x18)))) = 0;
      iVar3 = iVar3 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (0 < (int)uVar1) {
      iVar3 = 0;
      do {
        uVar2 = F_00c06a20(in_eax);
        *((uint *)GEN_TOP((*(int *)(in_edi + 0x18) + iVar3))) = uVar2;
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0x8)),4);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        if ((*(int *)(gen_frame + 0x8)) < 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a38)));
                    
          F_00bb93a0(*in_eax,3);
        }
        *((int *)GEN_TOP((*(int *)(in_edi + 0x18) + 4 + iVar3))) = (*(int *)(gen_frame + 0x8));
        uVar2 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0xc)),4);
        if (uVar2 != 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a28)));
                    
          F_00bb93a0(*in_eax,3);
        }
        if ((*(int *)(gen_frame + 0xc)) < 0) {
          F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],
                       ((char *)REFP(0x1347a38)));
                    
          F_00bb93a0(*in_eax,3);
        }
        *((int *)GEN_TOP((*(int *)(in_edi + 0x18) + 8 + iVar3))) = (*(int *)(gen_frame + 0xc));
        iVar3 = iVar3 + 0xc;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  uVar1 = F_00c060b0(in_eax[1],&(*(int *)(gen_frame + 0xc)),4);
  if (uVar1 != 0) {
    F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_eax,3);
  }
  if (-1 < (*(int *)(gen_frame + 0xc))) {
    if ((*(int *)(gen_frame + 0xc)) + 1U < 0x40000000) {
      uVar1 = F_00c11930(*in_eax,0,0,(*(int *)(gen_frame + 0xc)) * 4);
    }
    else {
      uVar1 = F_00c11910(*in_eax);
    }
    *(uint *)(in_edi + 0x1c) = uVar1;
    uVar1 = 0;
    *(int *)(in_edi + 0x24) = (*(int *)(gen_frame + 0xc));
    if (0 < (*(int *)(gen_frame + 0xc))) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x1c) + uVar1 * 4))) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (*(int *)(gen_frame + 0xc)));
    }
    iVar3 = 0;
    if (0 < (*(int *)(gen_frame + 0xc))) {
      do {
        uVar1 = F_00c06a20(in_eax);
        *((uint *)GEN_TOP((*(int *)(in_edi + 0x1c) + iVar3 * 4))) = uVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (*(int *)(gen_frame + 0xc)));
    }
    return uVar1;
  }
  F_00c00790(*in_eax,((char *)REFP(0x1347a0c)),in_eax[3],((char *)REFP(0x1347a38)));
                    
  F_00bb93a0(*in_eax,3);
}

/* ref: FUN_00c070c0 */
uint F_00c070c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc070c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * puVar1;
  int iVar2;
  int * in_esi;
  uint in_edi;
  uint uVar3;
  
  in_esi = (*(int * PTR32 *)&gen_args[0]);
  *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))) = *((short *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34))) + 1;
  if (200 < *((ushort *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x34)))) {
    F_00c00790(*(*(int * PTR32 *)&gen_args[0]),((char *)REFP(0x1347a0c)),(*(int * PTR32 *)&gen_args[0])[3],((char *)REFP(0x1347a54))
                );
                    
    F_00bb93a0(*in_esi,3);
  }
  in_edi = F_00c05e50(*(*(int * PTR32 *)&gen_args[0]));
  puVar1 = *(uint * PTR32 *)(*in_esi + 8);
  *puVar1 = in_edi;
  puVar1[2] = 9;
  iVar2 = *in_esi;
  if (*(int *)(iVar2 + 0x1c) - *(int *)(iVar2 + 8) < 0x11) {
    F_00bb8d50(iVar2,1);
  }
  *(int *)(*in_esi + 8) = *(int *)(*in_esi + 8) + 0x10;
  uVar3 = F_00c06a20(in_esi);
  *(uint *)(in_edi + 0x20) = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(in_edi + 0x20) = (*(undefined4 *)&gen_args[1]);
  }
  uVar3 = F_00c06960(in_esi);
  *(uint *)(in_edi + 0x3c) = uVar3;
  uVar3 = F_00c06960(in_esi);
  *(uint *)(in_edi + 0x40) = uVar3;
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x48) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x49) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x4a) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  uVar3 = F_00c060b0(in_esi[1],&(*(int * PTR32 *)&gen_args[0]),1);
  if (uVar3 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  *(undefined1 *)(in_edi + 0x4b) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0))));
  F_00c06ad0(in_esi,in_edi);
  F_00c06b60(in_esi,in_edi);
  F_00c06e00(in_esi,in_edi);
  uVar3 = F_00c02380(in_edi);
  if (uVar3 == 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a64)));
                    
    F_00bb93a0(*in_esi,3);
  }
  *(int *)(*in_esi + 8) = *(int *)(*in_esi + 8) + -0x10;
  *(short *)(*in_esi + 0x34) = *(short *)(*in_esi + 0x34) + -1;
  return in_edi;
}

/* ref: FUN_00c072c0 */
uint F_00c072c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc072c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = REFG(undefined4, 0x1347a98);
  *(undefined1 *)(param_1 + 1) = 0x51;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(bool *)((int)param_1 + 6) = (char)param_2 == 'l';
  *(undefined1 *)((int)param_1 + 7) = 4;
  *(undefined1 *)(param_1 + 2) = 4;
  *(undefined1 *)((int)param_1 + 9) = 4;
  *(undefined1 *)((int)param_1 + 10) = 8;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  return (uint)((int)param_1 + 10);
}

/* ref: FUN_00c07300 */
byte F_00c07300(void)
{
  GEN_ENTER(0xc07300u, 0u, 0u, 0u, 0u);
  return 0x6c;
}

/* ref: FUN_00c07310 */
uint F_00c07310(unsigned int gen_a0)
{
  GEN_ENTER(0xc07310u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_esi = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  ((int *)(gen_frame + 0x10))[3] = REFG(undefined4, 0x134ab78) ^ (uint)&(*(int *)(gen_frame + 0x4));
  uVar1 = in_esi[1];
  (*(int *)(gen_frame + 0x4)) = REFG(int, 0x1347a98);
  (*(undefined1 *)(gen_frame + 0x8)) = 0x51;
  (*(undefined1 *)(gen_frame + 0x9)) = 0;
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  (*(undefined1 *)(gen_frame + 0xb)) = 4;
  (*(undefined1 *)(gen_frame + 0xc)) = 4;
  (*(undefined1 *)(gen_frame + 0xd)) = 4;
  (*(undefined1 *)(gen_frame + 0xe)) = 8;
  (*(undefined1 *)(gen_frame + 0xf)) = 0;
  uVar2 = F_00c060b0(uVar1,((int *)(gen_frame + 0x10)),0xc);
  if (uVar2 != 0) {
    F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a28)))
    ;
                    
    F_00bb93a0(*in_esi,3);
  }
  uVar2 = 0xc;
  iVar3 = 0;
  do {
    if (*(int *)((int)&(*(int *)(gen_frame + 0x4)) + iVar3) != *(int *)((int)((int *)(gen_frame + 0x10)) + iVar3)) {
      F_00c00790(*in_esi,((char *)REFP(0x1347a0c)),in_esi[3],((char *)REFP(0x1347a70)));
                    
      F_00bb93a0(*in_esi,3);
    }
    uVar2 = uVar2 - 4;
    iVar3 = iVar3 + 4;
  } while (3 < uVar2);
  F_00c47745(((int *)(gen_frame + 0x10))[3] ^ (uint)&(*(int *)(gen_frame + 0x4)));
  return uVar2;
}

/* ref: FUN_00c073f0 */
uint F_00c073f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc073f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  cVar1 = *param_4;
  if ((cVar1 == '@') || (cVar1 == '=')) {
    pcVar3 = param_4 + 1;
  }
  else {
    pcVar3 = param_4;
    if (cVar1 == REFG(char, 0x1347a7c)) {
      (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)REFP(0x1347a84));
      goto LAB_00c07418;
    }
  }
  (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar3;
LAB_00c07418: ;
  (*(undefined4 *)(gen_frame + 0x0)) = param_1;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = param_3;
  F_00c07310(&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00c05a80(param_1,&REFG(undefined, 0x1347a94),2);
  uVar2 = F_00c070c0(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
  return uVar2;
}

/* ref: FUN_00c07460 */
unsigned int F_00c07460(float gen_a0)
{
  GEN_ENTER(0xc07460u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00c07480 */
unsigned int F_00c07480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c07620 */
uint F_00c07620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x32;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a880(this,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c07680 */
uint F_00c07680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x31;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a880(this,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c076e0 */
uint F_00c076e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc076e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined * this;
  ulonglong uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_2,REFG(undefined4, 0x108cc50));
    uVar4 = 0x2b3;
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    F_0046a880(this,uVar4,uVar2);
    uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    uVar2 = (uint)uVar3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_00c07ad0 */
uint F_00c07ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xf;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    this = (undefined *)F_00435440(uVar2,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00439fa0(this,param_2);
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::SocketWinsock::vf2 */
uint F_00c07b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07b30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  SOCKET s;
  int iVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  ((char *)(gen_frame + 0x8))[0] = '\x01';
  ((char *)(gen_frame + 0x8))[1] = '\0';
  ((char *)(gen_frame + 0x8))[2] = '\0';
  ((char *)(gen_frame + 0x8))[3] = '\0';
  *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int *)&gen_args[1]);
  iVar2 = ((*(int *)&gen_args[1]) != 0) + 1;
  if ((*(int *)&gen_args[1]) == 4) {
    iVar2 = 3;
  }
  s = gen_imp_socket(2,iVar2,(uint)((*(int *)&gen_args[1]) == 4));
  *((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) = s;
  if (s != 0xffffffff) {
    if (iVar2 == 2) {
      (*(int *)&gen_args[1]) = 0;
      iVar2 = gen_imp_WSAIoctl(s,0x9800000c,&(*(int *)&gen_args[1]),4,0,0,((undefined1 *)(gen_frame + 0x4)),0,0);
      if (iVar2 == -1) {
        iVar2 = gen_imp_WSAGetLastError();
        return -(uint)(iVar2 != 0x2733);
      }
    }
    else if (iVar1 == 6) {
      gen_imp_setsockopt(s,6,1,((char *)(gen_frame + 0x8)),4);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: Client::Network::Socket::SocketWinsock::vf3 */
uint F_00c07bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xc07bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_closesocket(*(SOCKET *)(this + 4));
  return 0;
}

/* ref: Client::Network::Socket::SocketWinsock::vf1 */
uint F_00c07c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc07c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 SVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  SVar1 = this[0x24];
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  if (SVar1 == (undefined1)0x0) {
    gen_imp_ioctlsocket(*(SOCKET *)(this + 4),-0x7ffb9982,(ulong *)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    this[0x24] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Client::Network::Socket::SocketWinsock::vf4 */
uint F_00c07c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  SOCKET s;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  s = *(SOCKET *)(this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
  gen_imp_setsockopt(s,0xffff,4,(char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)),4);
  uVar1 = gen_imp_bind(*(SOCKET *)(this + 4),param_1,param_2);
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf5 */
uint F_00c07c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = gen_imp_listen(*(SOCKET *)(this + 4),param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf6 */
uint F_00c07ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xc07ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_accept(*(SOCKET *)(this + 4),(undefined *)0x0,(int *)0x0);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    if (((iVar2 != 0x2714) && (iVar2 != 0x2733)) && (iVar2 != 0x2745)) {
      return 0xffffffff;
    }
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf7 */
uint F_00c07ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc07ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_connect(*(SOCKET *)(this + 4),param_1,param_2);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = (iVar2 != 0x2733) - 2;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf8 */
uint F_00c07d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_send(*(SOCKET *)(this + 4),param_1,param_2,0);
  if ((int)uVar1 < 0) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = -(uint)(iVar2 != 0x2733);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf9 */
uint F_00c07d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_recv(*(SOCKET *)(this + 4),param_1,param_2,0);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = (iVar2 != 0x2733) - 2;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf10 */
uint F_00c07d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc07d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  
  uVar1 = gen_imp_sendto(*(SOCKET *)(this + 4),param_1,param_2,0,param_3,param_4);
  if (uVar1 == 0xffffffff) {
    iVar2 = gen_imp_WSAGetLastError();
    uVar1 = -(uint)(iVar2 != 0x2733);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf11 */
uint F_00c07dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc07dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = gen_imp_recvfrom(*(SOCKET *)(this + 4),param_1,param_2,0,param_3,param_4);
  if (uVar1 == 0xffffffff) {
    gen_imp_WSAGetLastError();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Network::Socket::SocketWinsock::vf17 */
uint F_00c07e10(unsigned int gen_a0)
{
  GEN_ENTER(0xc07e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  SOCKET s;
  int iVar1;
  
  s = *(SOCKET *)(this + 4);
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x4)) = 4;
  iVar1 = gen_imp_getsockopt(s,0xffff,0x1007,(char *)&(*(uint *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: Client::Network::Socket::SocketWinsock::vf12 */
uint F_00c07e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = gen_imp_getpeername(*(SOCKET *)(this + 4),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if ((iVar1 != -1) && (iVar1 != 0x2736)) {
    return (-(uint)(iVar1 != 0x2749) & 0xffffe8b7) + 0x2749;
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf13 */
uint F_00c07eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc07eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = gen_imp_getsockname(*(SOCKET *)(this + 4),param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf14 */
uint F_00c07f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_setsockopt(*((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0xffff,0x1005,(char *)&(*(undefined4 *)&gen_args[1]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf15 */
uint F_00c07f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07f70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  iVar1 = gen_imp_setsockopt(*((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0xffff,0x1006,(char *)&(*(undefined4 *)&gen_args[1]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: Client::Network::Socket::SocketWinsock::vf16 */
uint F_00c07fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc07fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  
  (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(gen_imp_inet_addr((*(char * PTR32 *)&gen_args[1]))));
  iVar1 = gen_imp_setsockopt(*((SOCKET *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),0,9,(char *)&(*(char * PTR32 *)&gen_args[1]),4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = gen_imp_WSAGetLastError();
  if (iVar1 != -1) {
    if (iVar1 == 0x2726) {
      return 0x2726;
    }
    if (iVar1 != 0x2736) {
      return 0x1000;
    }
  }
  return 0x2736;
}

/* ref: FUN_00c08040 */
uint F_00c08040(void)
{
  GEN_ENTER(0xc08040u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x198)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x19c);
  uVar1 = gen_imp_WSAStartup(2,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x198)) ^ (uint)(uint)(gen_frame + 0x19c));
  return uVar1;
}

/* ref: FUN_00c08080 */
uint F_00c08080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc08080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined1 *)((int)this + 6) = (undefined1)param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 5) = (undefined1)param_2;
  *(undefined1 *)((int)this + 7) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00c080b0 */
uint F_00c080b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc080b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00c08120 */
byte F_00c08120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = *(byte *)(in_ecx + 4) | 0x40;
  *(byte *)(in_ecx + 7) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::vf3 */
uint F_00c08160(unsigned int gen_a0)
{
  GEN_ENTER(0xc08160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 5);
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::vf4 */
byte F_00c08170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (param_2 < (int)uVar1) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPSegment::vf0 */
uint F_00c081b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc081b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c081e0 */
uint F_00c081e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc081e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 6) = (undefined1)param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
  *(undefined2 *)((int)this + 4) = 0x640;
  *(undefined1 *)((int)this + 7) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_00c08210 */
uint F_00c08210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
  return (uint)this;
}

/* ref: FUN_00c08260 */
uint F_00c08260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  uVar1 = param_1[3];
  *(undefined1 * PTR32 *)((int)this + 0xc) = param_1 + 6;
  *(undefined1 *)((int)this + 7) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  *(int *)((int)this + 0x10) = param_2 + -6;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c082b0 */
uint F_00c082b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc082b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  uVar1 = param_1[3];
  *(undefined1 * PTR32 *)((int)this + 0xc) = param_1 + 4;
  *(undefined1 *)((int)this + 7) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  *(int *)((int)this + 0x10) = param_2 + -6;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c08300 */
uint F_00c08300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)((int)in_ecx + 6) = (undefined1)param_2;
  *(undefined2 *)(in_ecx + 1) = 0x608;
  *(undefined1 *)((int)in_ecx + 7) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return (uint)in_ecx;
}

/* ref: FUN_00c08330 */
uint F_00c08330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
  return (uint)this;
}

/* ref: FUN_00c08380 */
uint F_00c08380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)((int)in_ecx + 6) = (undefined1)param_2;
  *(undefined2 *)(in_ecx + 1) = 0x610;
  *(undefined1 *)((int)in_ecx + 7) = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return (uint)in_ecx;
}

/* ref: FUN_00c083b0 */
uint F_00c083b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc083b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf1 */
uint F_00c08450(unsigned int gen_a0)
{
  GEN_ENTER(0xc08450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x80) = 1;
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf2 */
uint F_00c08460(unsigned int gen_a0)
{
  GEN_ENTER(0xc08460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 0x7c))) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
  case 3: ;
    return 3;
  case 4: ;
  case 5: ;
    return 4;
  case 6: ;
    return 7;
  }
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf11 */
uint F_00c084b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc084b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x7c) != 4) {
    return 0x2749;
  }
  F_00ba6880(param_1,this + 0x82);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf12 */
uint F_00c084e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc084e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba7750(*(undefined * PTR32 *)(this + 0x74),param_1);
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf13 */
uint F_00c084f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc084f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba89b0(*(undefined * PTR32 *)(this + 0x74),param_1);
  return uVar1;
}

/* ref: FUN_00c08500 */
unsigned int F_00c08500(unsigned int gen_a0)
{
  GEN_ENTER(0xc08500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(char *)((int)this + 0x80) != '\0') && (*(int *)((int)this + 0x70) != 0)) &&
     ((code *)*(gen_code32 *)((int)this + 0x24) != (code *)0x0)) {
    ((code *)*(gen_code32 *)((int)this + 0x24))(*(int *)((int)this + 0x70));
  }
  return 0;
}

/* ref: FUN_00c08530 */
uint F_00c08530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(in_ecx + 0xd0);
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(in_ecx + 0xcc);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 0x40;
    *(char *)(param_2 + 7) = (char)uVar2;
    uVar3 = param_2;
  }
  return uVar3;
}

/* ref: FUN_00c08560 */
uint F_00c08560(unsigned int gen_a0)
{
  GEN_ENTER(0xc08560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xf8) = 0;
  *(undefined4 *)(in_ecx + 0x170) = 0;
  *(undefined4 *)(in_ecx + 0x120) = 0;
  *(undefined4 *)(in_ecx + 0x148) = 0;
  *(undefined4 *)(in_ecx + 0x198) = 0;
  return 0;
}

/* ref: FUN_00c08590 */
uint F_00c08590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != *(uint *)(in_ecx + 0x7c)) {
    *(uint *)(in_ecx + 0x7c) = param_2;
  }
  return param_2;
}

/* ref: FUN_00c085d0 */
unsigned int F_00c085d0(void)
{
  GEN_ENTER(0xc085d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c085e0 */
uint F_00c085e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc085e0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  if (5 < param_2) {
    bVar1 = *param_1;
    if ((char)bVar1 < '\0') {
      return 1;
    }
    if ((bVar1 & 8) != 0) {
      return 5;
    }
    if ((bVar1 & 0x20) != 0) {
      return 3;
    }
    if ((bVar1 & 0x10) != 0) {
      return 4;
    }
    if ((bVar1 & 0x40) != 0) {
      return (param_2 != 6) - 1 & 2;
    }
  }
  return 6;
}

/* ref: FUN_00c08640 */
unsigned int F_00c08640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xc08640u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  *(undefined1 *)((int)this + 6) = (undefined1)param_1;
  *(undefined1 *)((int)this + 7) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 1;
  *(undefined1 *)((int)this + 0xd) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0xe) = 1;
  *(undefined2 *)((int)this + 0x10) = (undefined2)param_3;
  *(undefined2 *)((int)this + 0x12) = (undefined2)param_4;
  *(undefined2 *)((int)this + 0x14) = (undefined2)param_5;
  *(undefined2 *)((int)this + 0x16) = (undefined2)param_6;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_7;
  *(undefined1 *)((int)this + 0x19) = (undefined1)param_8;
  *(undefined2 *)((int)this + 4) = 0x1680;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  *(undefined1 *)((int)this + 0x1a) = (undefined1)param_9;
  *(undefined1 *)((int)this + 0x1b) = (undefined1)param_10;
  return 0;
}

/* ref: FUN_00c086b0 */
unsigned int F_00c086b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc086b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  *(undefined1 *)((int)this + 4) = *param_1;
  *(undefined1 *)((int)this + 5) = param_1[1];
  *(undefined1 *)((int)this + 6) = param_1[2];
  *(undefined1 *)((int)this + 7) = param_1[3];
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  *(byte *)((int)this + 0xc) = (byte)param_1[4] >> 4;
  *(undefined1 *)((int)this + 0xd) = param_1[5];
  *(undefined1 *)((int)this + 0xe) = param_1[6];
  *(ushort *)((int)this + 0x10) = CONCAT11(param_1[8],param_1[9]);
  *(ushort *)((int)this + 0x12) = CONCAT11(param_1[10],param_1[0xb]);
  *(ushort *)((int)this + 0x14) = CONCAT11(param_1[0xc],param_1[0xd]);
  *(ushort *)((int)this + 0x16) = CONCAT11(param_1[0xe],param_1[0xf]);
  *(undefined1 *)((int)this + 0x18) = param_1[0x10];
  *(undefined1 *)((int)this + 0x19) = param_1[0x11];
  *(undefined1 *)((int)this + 0x1a) = param_1[0x12];
  *(undefined1 *)((int)this + 0x1b) = param_1[0x13];
  return 0;
}

/* ref: FUN_00c08780 */
uint F_00c08780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12010];
  undefined4 uVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x12008)) = 0xc0878d;
  (*(uint *)(gen_frame + 0x12008)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  if (((uVar2 == 0) || ((3 < (int)uVar2 && ((int)uVar2 < 6)))) &&
     (iVar5 = *(int *)((int)this + 0xd0), *(undefined4 *)((int)this + 0xd0) = 0, iVar5 != 0)) {
    uVar1 = *(undefined4 *)((int)this + 0xcc);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x40;
    *(char *)((int)param_1 + 7) = (char)uVar1;
  }
  if ((uVar2 == 0) || (uVar2 == 4)) {
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0xe0) = (int)_Var3;
    uVar4 = F_00427d90();
    *(ulonglong *)((int)this + 0xe8) = uVar4;
    uVar4 = F_00427e30();
    *(ulonglong *)((int)this + 0xf0) = uVar4;
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,((undefined1 *)(gen_frame + 0x10008)),0x2000);
  if ((char)uVar2 != '\0') {
    iVar5 = (int)this + 0x82;
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
    uVar2 = F_00baa590(*(undefined * PTR32 *)((int)this + 0x74),((undefined1 *)(gen_frame + 0x10008)),uVar2,iVar5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x12008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar2;
}

/* ref: FUN_00c08860 */
uint F_00c08860(unsigned int gen_a0)
{
  GEN_ENTER(0xc08860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
    uVar2 = F_00c08780(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_00c088c0 */
uint F_00c088c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc088c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  if (*(int *)((int)this + 0x7c) != 5) {
    *(undefined4 *)((int)this + 0x7c) = 5;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x20)));
  *(undefined4 *)((int)this + 0x198) = 1;
  *(int *)((int)this + 0x19c) = iVar1 * 2;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x180) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)((int)this + 0x188) = uVar4;
  uVar4 = F_00427e30();
  uVar2 = (uint)uVar4;
  *(ulonglong *)((int)this + 400) = uVar4;
  if (*(char *)((int)this + 0x80) == '\0') {
    iVar1 = *(int *)((int)this + 0x7c);
    while (iVar1 != 6) {
      uVar2 = F_00bada50();
      iVar1 = *(int *)((int)this + 0x7c);
    }
  }
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf3 */
uint F_00c08960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)(this + 0x74) + 0x24))),0);
  F_00baba80(*(undefined * PTR32 *)(this + 0x74));
  if (*(int *)(this + 0x7c) != 1) {
    *(undefined4 *)(this + 0x7c) = 1;
  }
  return 0;
}

/* ref: FUN_00c08990 */
uint F_00c08990(unsigned int gen_a0)
{
  GEN_ENTER(0xc08990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  bool bVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint local_c;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  local_c = 0;
  bVar3 = false;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar1 = (int *)piVar5[2];
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar4 == 0) {
        piVar2 = (int *)piVar1[5];
        if (piVar2 == (int *)0x0) {
          iVar6 = piVar1[4];
        }
        else {
          iVar6 = piVar2[1] - *piVar2;
        }
        local_c = local_c + iVar6;
LAB_00c089ed: ;
        piVar5 = (int *)*piVar5;
      }
      else {
        if (uVar4 != 4) goto LAB_00c089ed;
        if (local_c == 0) {
          bVar3 = true;
        }
        piVar5 = *(int * PTR32 *)((int)this + 0x1d0);
      }
    } while (piVar5 != *(undefined4 * PTR32 *)((int)this + 0x1d0));
    if (local_c != 0) {
      return local_c;
    }
    if (bVar3) {
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00c08a10 */
unsigned int F_00c08a10(unsigned int gen_a0)
{
  GEN_ENTER(0xc08a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar3 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar3[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x1ac));
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x1ac);
  piVar2 = (int *)*piVar3;
  *piVar3 = (int)piVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = 0;
  if (piVar2 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      piVar3 = (int *)*piVar2;
      F_00429760(piVar2,0xc,0x25c);
      piVar2 = piVar3;
    } while (piVar3 != (int *)*(int *)((int)this + 0x1ac));
  }
  return 0;
}

/* ref: FUN_00c08a80 */
unsigned int F_00c08a80(unsigned int gen_a0)
{
  GEN_ENTER(0xc08a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  return 0;
}

/* ref: FUN_00c08ae0 */
uint F_00c08ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc08ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x78;
  *(undefined4 *)((int)this + 0x30) = 0x2d;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  uVar1 = param_2;
  if (param_2 == 0) {
    uVar1 = F_00406b90(0x28,0,0);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00ba85b0(uVar1,1);
    }
  }
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(uint *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  F_00ba6710((int)this + 0x82);
  *(undefined2 *)((int)this + 0xc2) = 0;
  puVar2 = (undefined4 *)F_00406b90(0x2c,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0x20;
    puVar2[1] = 0x20;
    puVar2[2] = 0x400;
    puVar2[3] = 3;
    puVar2[4] = 0;
    puVar2[5] = 3;
    puVar2[6] = 3;
    puVar2[7] = 3;
    puVar2[8] = 2000;
    puVar2[9] = 600;
    puVar2[10] = 300;
  }
  *(undefined4 * PTR32 *)((int)this + 0xc4) = puVar2;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  F_00a1af40((undefined *)((int)this + 0xe0));
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  F_00a1af40((undefined *)((int)this + 0x108));
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  F_00a1af40((undefined *)((int)this + 0x130));
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  F_00a1af40((undefined *)((int)this + 0x158));
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  F_00a1af40((undefined *)((int)this + 0x180));
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined1 *)((int)this + 0x1a8) = 1;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1ac) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1bc) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1b8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1b8) + 4))) = *(int *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1c4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x1d4) = 0;
  uVar1 = F_004296a0(0xc,0,0x25c);
  *(uint *)((int)this + 0x1d0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))) = *(int *)((int)this + 0x1d0);
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = **(undefined4 * PTR32 *)((int)this + 0xc4);
  *(undefined4 *)((int)this + 0x1e0) = (*(undefined4 * PTR32 *)((int)this + 0xc4))[1];
  return (uint)this;
}

/* ref: FUN_00c08d70 */
uint F_00c08d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08d70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != '\0') {
    uVar1 = F_00406b90(0x28,0,0);
    if (uVar1 == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00ba85b0(uVar1,3);
    }
    uVar1 = F_00ba6e30(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))));
    if (uVar1 == 0) {
      uVar1 = REFG(undefined4, 0x14c5958);
    }
    (*(int * PTR32 *)&gen_args[1])[0x1c] = (int)this_00;
    F_00ba86b0(this_00,(*(int * PTR32 *)&gen_args[1]));
    F_00ba9ae0(this_00,uVar1);
    uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    if ((uVar1 != 0) && (*((gen_code32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != (code *)0x0)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(uVar1,this_00);
    }
    return uVar1;
  }
  if (*((int *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500))) + 4))) < 0x7fffffff) {
    uVar1 = F_00c0eda0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500))),&(*(int * PTR32 *)&gen_args[1]));
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c08e20 */
uint F_00c08e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc08e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  uint local_8;
  
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  uVar2 = 0;
  local_8 = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar1 = (int *)piVar5[2];
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar2 == 0) {
        piVar6 = (int *)piVar1[5];
        if (piVar6 == (int *)0x0) {
          iVar4 = piVar1[4];
          iVar3 = piVar1[3];
        }
        else {
          iVar4 = piVar6[1] - *piVar6;
          iVar3 = *piVar6;
        }
        F_00c46aa0(local_8 + param_1,iVar3,iVar4);
        local_8 = local_8 + iVar4;
        piVar6 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
          *(int * PTR32 *)piVar5[1] = piVar6;
          *(int *)(*piVar5 + 4) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + -1;
        }
        ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      }
      else if (uVar2 == 4) {
        if (local_8 == 0) {
          if (piVar5 != *(int * PTR32 *)((int)this + 0x1d0)) {
            *(int *)piVar5[1] = *piVar5;
            *(int *)(*piVar5 + 4) = piVar5[1];
            F_00429760(piVar5,0xc,0x25c);
            *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + -1;
          }
          ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
        }
        piVar6 = *(int * PTR32 *)((int)this + 0x1d0);
      }
      else {
        piVar6 = (int *)*piVar5;
      }
      uVar2 = local_8;
      piVar5 = piVar6;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x1d0));
  }
  return uVar2;
}

/* ref: FUN_00c08f30 */
uint F_00c08f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08f30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = F_00ba6930((*(undefined * PTR32 *)&gen_args[1]));
  uVar4 = (uint)(uVar5 >> 0x20);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8)));
  (*(ulonglong *)(gen_frame + 0x4)) = uVar5;
  uVar2 = F_00c0d000(this_00,&(*(ulonglong *)(gen_frame + 0x4)));
  uVar1 = *(uint *)((int)this_00 + 4);
  (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)uVar2;
  if (uVar2 != uVar1) {
    if ((*(uint *)(uVar2 + 0x14) <= uVar4) &&
       ((uVar4 != *(uint *)(uVar2 + 0x14) || (*(uint *)(uVar2 + 0x10) <= (uint)uVar5)))) {
      puVar3 = (uint *)&(*(undefined * PTR32 *)&gen_args[1]);
      goto LAB_00c08f7f;
    }
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 4)) = uVar1;
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(uVar1,(undefined4)(*(ulonglong *)(gen_frame + 0x4)));
  puVar3 = (uint *)((int)&(*(ulonglong *)(gen_frame + 0x4)) + 4);
LAB_00c08f7f: ;
  uVar2 = *puVar3;
  if (uVar2 != uVar1) {
    uVar1 = *(uint *)(uVar2 + 0x18);
    F_00c0e0e0(this_00,&(*(undefined * PTR32 *)&gen_args[1]),uVar2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c08fb0 */
uint F_00c08fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc08fb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) == 0) &&
      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc))))) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) <= *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0xc))))) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd8))) + 1;
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
    F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),&(*(int * PTR32 *)&gen_args[1]));
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) == 0) {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x24)));
        F_00c0cbc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))),uVar1,uVar1);
      }
    }
    F_00c08780((*(undefined * PTR32 *)&gen_args[0]),piVar5);
    uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
    return uVar4;
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
  iVar3 = *(int *)(iVar2 + 4);
  piVar5 = (int *)F_004296a0(0xc,0,0x25c);
  piVar5[1] = iVar3;
  *piVar5 = iVar2;
  if ((uint *)(piVar5 + 2) != (uint *)0x0) {
    piVar5[2] = (int)(*(int * PTR32 *)&gen_args[1]);
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))) + 1;
  *(int * PTR32 *)(iVar2 + 4) = piVar5;
  *(int * PTR32 *)piVar5[1] = piVar5;
  return (uint)piVar5;
}

/* ref: FUN_00c090e0 */
uint F_00c090e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc090e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  ulonglong uVar7;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x1c4);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    do {
      puVar1 = (undefined4 *)piVar5[2];
      piVar4 = (int *)(uint)*(byte *)((int)puVar1 + 6);
      if (piVar4 == ((int *)GEN_TOP(((*(int *)((int)this + 0xcc) + 1) % 0xff)))) {
        *(int * PTR32 *)((int)this + 0xcc) = piVar4;
        if ((char)param_1 == '\0') {
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
        }
        else {
          iVar2 = *(int *)((int)this + 0x1d0);
          iVar3 = *(int *)(iVar2 + 4);
          piVar4 = (int *)F_004296a0(0xc,0,0x25c);
          piVar4[1] = iVar3;
          *piVar4 = iVar2;
          if (piVar4 + 2 != (int *)0x0) {
            piVar4[2] = (int)puVar1;
          }
          if (*(int *)((int)this + 0x1d4) == -2) {
                    
            F_00c4579a("list<T> too long");
          }
          *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 1;
          *(int * PTR32 *)(iVar2 + 4) = piVar4;
          *(int * PTR32 *)piVar4[1] = piVar4;
        }
        piVar6 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1c4)) {
          *(int * PTR32 *)piVar5[1] = piVar6;
          *(int *)(*piVar5 + 4) = piVar5[1];
          uVar7 = F_00429760(piVar5,0xc,0x25c);
          piVar4 = (int *)uVar7;
          *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + -1;
        }
      }
      else {
        piVar6 = (int *)*piVar5;
      }
      piVar5 = piVar6;
    } while (piVar6 != *(int * PTR32 *)((int)this + 0x1c4));
  }
  return (uint)piVar4;
}

/* ref: FUN_00c091e0 */
uint F_00c091e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc091e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 8);
  puVar1[1] = *(undefined4 *)((int)this + 8);
  puVar1[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  F_00c0e8e0((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return ((*(char *)(gen_frame + 0x8)) != '\0') - 1;
}

/* ref: FUN_00c09240 */
unsigned int F_00c09240(unsigned int gen_a0)
{
  GEN_ENTER(0xc09240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      F_00429760(iVar2,piVar1[2] - iVar2,0x25c);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    F_00406ad0(piVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf4 */
uint F_00c092a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc092a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  
  if (this[0xc2] != (undefined1)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(this + 0x1f8) == 0) {
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x7c))) {
    case 0: ;
    case 1: ;
    case 6: ;
      F_00c08560(this);
      if (*(int *)(this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)(this + 0x74));
      }
    case 3: ;
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      break;
    case 2: ;
    case 4: ;
      iVar4 = (*(int *)(this + 200) + 1) % 0xff;
      (*(undefined2 *)(gen_frame + 0x4)) = 0x610;
      (*(undefined1 *)(gen_frame + 0x7)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
      *(int *)(this + 200) = iVar4;
      (*(undefined1 *)(gen_frame + 0x6)) = (char)iVar4;
      F_00c08fb0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      F_00c088c0(this);
      this[0xc2] = (undefined1)0x1;
      return 0;
    case 5: ;
      if (*(int *)(this + 0x198) == 0) {
        F_00c08a10(this);
        F_00c088c0(this);
        this[0xc2] = (undefined1)0x1;
        return 0;
      }
    }
  }
  else {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 4)));
    piVar5 = (int *)*piVar2;
    if (piVar5 != piVar2) {
      do {
        ((code *)*(gen_code32 *)(*(int *)piVar5[6] + 0x10))((int *)piVar5[6]);
        if (*(char *)((int)piVar5 + 0x21) == '\0') {
          piVar2 = (int *)piVar5[2];
          if (*(char *)((int)piVar2 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x21);
              piVar5 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar5[1] + 0x21);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
            while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
              cVar1 = *(char *)(piVar5[1] + 0x21);
              piVar3 = (int *)piVar5[1];
              piVar2 = piVar5;
            }
          }
        }
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 4))));
      this[0xc2] = (undefined1)0x1;
      return 0;
    }
  }
  this[0xc2] = (undefined1)0x1;
  return 0;
}

/* ref: FUN_00c09410 */
uint F_00c09410(unsigned int gen_a0)
{
  GEN_ENTER(0xc09410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  if (*(char *)((int)this + 0xc3) == '\0') {
    *(undefined1 *)((int)this + 0xc3) = 1;
    if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
      if (((*(char *)((int)this + 0x80) != '\0') && (*(int *)((int)this + 0x70) != 0)) &&
         ((code *)*(gen_code32 *)((int)this + 8) != (code *)0x0)) {
        ((code *)*(gen_code32 *)((int)this + 8))(*(int *)((int)this + 0x70),0);
      }
    }
    else {
      F_00c08d70(*(undefined * PTR32 *)((int)this + 0x78),this);
    }
  }
  else {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0xe0) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)((int)this + 0xe8) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)((int)this + 0xf0) = uVar5;
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x158) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)((int)this + 0x160) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)((int)this + 0x168) = uVar5;
  }
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x20)));
  *(undefined4 *)((int)this + 0xf8) = 1;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  _Var4 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0xe0) = (int)_Var4;
  uVar5 = F_00427d90();
  *(ulonglong *)((int)this + 0xe8) = uVar5;
  uVar5 = F_00427e30();
  uVar3 = (uint)uVar5;
  *(ulonglong *)((int)this + 0xf0) = uVar5;
  if (*(char *)((int)this + 0x1a8) != '\0') {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x20)));
    *(undefined4 *)((int)this + 0x170) = 1;
    *(int *)((int)this + 0x174) = iVar2 * 6;
    *(int *)((int)this + 0x178) = iVar2 * 6;
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x158) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)((int)this + 0x160) = uVar5;
    uVar5 = F_00427e30();
    uVar3 = (uint)uVar5;
    *(ulonglong *)((int)this + 0x168) = uVar5;
  }
  return uVar3;
}

/* ref: FUN_00c09570 */
uint F_00c09570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar3 = (int *)F_00c08f30(this,param_1 + 0x82);
  if (*(char *)((int)this + 0x80) == '\0') {
    piVar1 = *(int * PTR32 *)((int)this + 500);
    piVar2 = (int *)*piVar1;
    piVar3 = (int *)*piVar2;
    if (piVar3 != piVar2) {
      while (piVar3[2] != param_1) {
        piVar3 = (int *)*piVar3;
        if (piVar3 == piVar2) {
          return (uint)piVar3;
        }
      }
      if (piVar3 != piVar2) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        uVar4 = F_00429760(piVar3,0xc,0x25c);
        piVar3 = (int *)uVar4;
        piVar1 = piVar1 + 1;
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00c095e0 */
uint F_00c095e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc095e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  pvVar1 = (undefined *)F_00406b90(0x200,0,0);
  if (pvVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00c08ae0(pvVar1,0,*(undefined4 *)((int)this + 0x74),this);
  }
  pvVar1 = (undefined *)F_00ba6e30(*(undefined4 *)((int)this + 0x70));
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = REFG(void * PTR32, 0x14c5958);
  }
  uVar3 = F_00ba7110(pvVar1);
  puVar4 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar4 = *(undefined4 *)(uVar3 + 8);
  puVar4[1] = *(undefined4 *)(uVar3 + 8);
  puVar4[2] = *(undefined4 *)(uVar3 + 8);
  *(undefined2 *)(puVar4 + 4) = 0;
  if (puVar4 + 3 != (uint *)0x0) {
    puVar4[3] = uVar2;
  }
  F_00c0e8e0((undefined *)(uVar3 + 4),((undefined1 *)(gen_frame + 0xc)),puVar4,0);
  F_00ba6880((undefined *)(uVar2 + 0x82),param_1);
  if (*(int *)(uVar2 + 0x7c) != 1) {
    *(undefined4 *)(uVar2 + 0x7c) = 1;
  }
  uVar5 = F_00ba6930(param_1);
  pvVar1 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1f8);
  puVar4 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar4 = *(undefined4 *)((int)pvVar1 + 4);
  puVar4[1] = *(undefined4 *)((int)pvVar1 + 4);
  puVar4[2] = *(undefined4 *)((int)pvVar1 + 4);
  *(undefined2 *)(puVar4 + 8) = 0;
  if ((ulonglong *)(puVar4 + 4) != (ulonglong *)0x0) {
    *(ulonglong *)(puVar4 + 4) = uVar5;
    puVar4[6] = uVar2;
  }
  F_00c0e9c0(pvVar1,&(*(int *)(gen_frame + 0x14)),puVar4,0);
  return *(uint *)((*(int *)(gen_frame + 0x14)) + 0x18);
}

/* ref: FUN_00c09700 */
uint F_00c09700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc09700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  (*(ulonglong *)(gen_frame + 0x0)) = F_00ba6930(param_1);
  uVar4 = (uint)((*(ulonglong *)(gen_frame + 0x0)) >> 0x20);
  this_00 = *(undefined * PTR32 *)((int)this + 0x1f8);
  uVar1 = F_00c0d000(this_00,&(*(ulonglong *)(gen_frame + 0x0)));
  uVar3 = *(uint *)((int)this_00 + 4);
  (*(uint *)(gen_frame + 0x8)) = uVar1;
  if (uVar1 != uVar3) {
    if ((*(uint *)(uVar1 + 0x14) <= uVar4) &&
       ((uVar4 != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= (uint)(*(ulonglong *)(gen_frame + 0x0)))))) {
      puVar2 = &(*(uint *)(gen_frame + 0x8));
      goto LAB_00c09750;
    }
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x0)) + 4)) = uVar3;
  puVar2 = (uint *)((int)&(*(ulonglong *)(gen_frame + 0x0)) + 4);
LAB_00c09750: ;
  if (*puVar2 != uVar3) {
    return *(uint *)(*puVar2 + 0x18);
  }
  uVar3 = F_00c085e0(param_2,param_3);
  if (uVar3 != 1) {
    return 0;
  }
  uVar3 = F_00c095e0(this,param_1);
  return uVar3;
}

/* ref: FUN_00c097a0 */
uint F_00c097a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc097a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_EAX = 0;
  int * piVar6;
  uint uVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  iVar1 = *(int *)((int)this + 0x1bc);
  while( true ) {
    if (((iVar1 == 0) ||
        (in_EAX = *(uint *)((int)this + 0x1b0), *(int *)((int)this + 0x1dc) <= (int)in_EAX)) ||
       (*((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0xc))) < *(int *)((int)this + 0xd8))) {
      return in_EAX;
    }
    piVar6 = *(int * PTR32 *)((int)this + 0x1b8);
    piVar2 = *(int * PTR32 *)(*piVar6 + 8);
    piVar3 = (int *)*piVar6;
    if (piVar3 != piVar6) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00429760(piVar3,0xc,0x25c);
      *(int *)((int)this + 0x1bc) = *(int *)((int)this + 0x1bc) + -1;
    }
    *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + 1;
    iVar1 = *(int *)((int)this + 0x1ac);
    iVar4 = *(int *)(iVar1 + 4);
    piVar6 = (int *)F_004296a0(0xc,0,0x25c);
    piVar6[1] = iVar4;
    *piVar6 = iVar1;
    if (piVar6 + 2 != (int *)0x0) {
      piVar6[2] = (int)piVar2;
    }
    if (*(int *)((int)this + 0x1b0) == -2) break;
    *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar6;
    *(int * PTR32 *)piVar6[1] = piVar6;
    uVar7 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0: ;
    case 1: ;
    case 4: ;
    case 5: ;
      if (*(int *)((int)this + 0x120) == 0) {
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x24)));
        *(undefined4 *)((int)this + 0x120) = 1;
        *(undefined4 *)((int)this + 0x124) = uVar5;
        *(undefined4 *)((int)this + 0x128) = uVar5;
        _Var8 = F_00c4b7c2((__time64_t *)0x0);
        *(int *)((int)this + 0x108) = (int)_Var8;
        uVar9 = F_00427d90();
        *(ulonglong *)((int)this + 0x110) = uVar9;
        uVar9 = F_00427e30();
        *(ulonglong *)((int)this + 0x118) = uVar9;
      }
    }
    in_EAX = F_00c08780(this,piVar2);
    iVar1 = *(int *)((int)this + 0x1bc);
  }
                    
  F_00c4579a("list<T> too long");
}

/* ref: FUN_00c09930 */
uint F_00c09930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar3 = param_1;
  if ((*(byte *)(param_1 + 4) & 0x40) != 0) {
    uVar3 = (uint)*(byte *)(param_1 + 7);
    *(undefined4 *)((int)this + 0xd8) = 0;
    if (*(int *)((int)this + 0x7c) == 2) {
      *(undefined4 *)((int)this + 0x7c) = 4;
      F_00c09410(this);
    }
    piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
    if (piVar4 != *(int * PTR32 *)((int)this + 0x1ac)) {
      do {
        puVar1 = (undefined4 *)piVar4[2];
        uVar2 = (uint)*(byte *)((int)puVar1 + 6);
        if ((uVar2 == uVar3) ||
           (((uVar3 <= uVar2 || ((int)(uVar3 - uVar2) < 0x80)) &&
            ((uVar2 <= uVar3 || (0x7e < (int)(uVar2 - uVar3))))))) {
          piVar5 = (int *)*piVar4;
          if (piVar4 != *(int * PTR32 *)((int)this + 0x1ac)) {
            *(int * PTR32 *)piVar4[1] = piVar5;
            *(int *)(*piVar4 + 4) = piVar4[1];
            F_00429760(piVar4,0xc,0x25c);
            *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + -1;
          }
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        else {
          piVar5 = (int *)*piVar4;
        }
        piVar4 = piVar5;
      } while (piVar5 != *(int * PTR32 *)((int)this + 0x1ac));
    }
    uVar3 = F_00c097a0(this);
    if (*(int *)((int)this + 0x1b0) == 0) {
      *(undefined4 *)((int)this + 0x120) = 0;
      return uVar3;
    }
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x108) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)((int)this + 0x110) = uVar7;
    uVar7 = F_00427e30();
    uVar3 = (uint)uVar7;
    *(ulonglong *)((int)this + 0x118) = uVar7;
  }
  return uVar3;
}

/* ref: FUN_00c09a50 */
uint F_00c09a50(unsigned int gen_a0)
{
  GEN_ENTER(0xc09a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00c0eeb0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c09a90 */
uint F_00c09a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09a90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c0ece0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(int *)(gen_frame + 0x8)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    return 0xffffffff;
  }
  F_00c0d6f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  F_00c0eeb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_00c09af0 */
uint F_00c09af0(unsigned int gen_a0)
{
  GEN_ENTER(0xc09af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    in_EAX = F_00c09570(*(undefined * PTR32 *)((int)this + 0x78),this);
  }
  if ((*(char *)((int)this + 0x80) == '\0') || (*(int *)((int)this + 0x70) == 0)) {
    if (*(int *)((int)this + 0x70) == 0) {
      in_EAX = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
    }
  }
  else {
    in_EAX = 0;
    if ((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0) {
      in_EAX = ((code *)*(gen_code32 *)((int)this + 0x20))(*(int *)((int)this + 0x70));
      if (((char)in_EAX != '\0') &&
         (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70), puVar1 != (undefined4 *)0x0)) {
        uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        return uVar2;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00c09b50 */
uint F_00c09b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c09930(this,param_1);
  return uVar1;
}

/* ref: FUN_00c09b60 */
uint F_00c09b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((0 < *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x10)))) &&
     (param_1[2] = param_1[2] + 1, *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x10))) < param_1[2])) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    if (*(int *)((int)this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74));
    }
    if (*(int *)((int)this + 0x7c) != 6) {
      *(undefined4 *)((int)this + 0x7c) = 6;
    }
    uVar1 = F_00c09af0(this);
    return uVar1;
  }
  F_00c08780(this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  return uVar1;
}

/* ref: FUN_00c09bf0 */
uint F_00c09bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004296a0(0x14,0,0x25c);
  *(uint *)((int)this + 8) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
  *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x11))) = 1;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf10 */
uint F_00c09c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc09c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  
  this_00 = this + 0x1e4;
  iVar4 = *(int *)this_00;
  local_c = 0;
  if (iVar4 != *(int *)(this + 0x1e8)) {
    local_c = *(int *)(this + 0x1e8) - iVar4;
    iVar3 = local_c - param_2;
    if (iVar3 < 1) {
      F_00c46aa0(param_1,iVar4,local_c);
      iVar4 = *(int *)this_00;
      if (iVar4 != *(int *)(this + 0x1e8)) {
        F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
        *(int *)(this + 0x1e8) = iVar4;
      }
    }
    else {
      F_00c46aa0(param_1,iVar4,param_2);
      F_00c46e20(*(int *)this_00,*(int *)this_00 + param_2,iVar3);
      F_00bb6510(this_00,iVar3);
      local_c = param_2;
    }
  }
  bVar1 = false;
  do {
    if ((int)param_2 <= (int)local_c) {
      return local_c;
    }
    uVar2 = F_00c08990(this);
    if ((int)uVar2 < 0) {
      if (bVar1) {
        return local_c;
      }
    }
    else {
      bVar1 = true;
      if (uVar2 == 0) {
        if (local_c == 0) {
          F_00c08e20(this,0,0);
        }
        return local_c;
      }
      F_00bb6510(this_00,uVar2);
      iVar3 = param_2 - local_c;
      uVar2 = F_00c08e20(this,*(int *)this_00,uVar2);
      iVar4 = uVar2 - iVar3;
      if (iVar4 < 1) {
        F_00c46aa0(local_c + param_1,*(int *)this_00,uVar2);
        iVar4 = *(int *)this_00;
        if (iVar4 != *(int *)(this + 0x1e8)) {
          F_00c46e20(iVar4,*(int *)(this + 0x1e8),0);
          *(int *)(this + 0x1e8) = iVar4;
        }
        local_c = local_c + uVar2;
      }
      else {
        F_00c46aa0(local_c + param_1,*(int *)this_00,iVar3);
        F_00c46e20(*(int *)this_00,*(int *)this_00 + iVar3,iVar4);
        F_00bb6510(this_00,iVar4);
        local_c = local_c + iVar3;
      }
    }
    F_00bada50();
  } while( true );
}

/* ref: FUN_00c09dd0 */
uint F_00c09dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc09dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  int local_18;
  uint local_14;
  int local_c;
  
  piVar5 = *(int * PTR32 *)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
    local_18 = *(int *)(param_1 + 0xc);
    local_c = *(int *)(param_1 + 0x10);
  }
  else {
    local_18 = *piVar5;
    local_c = piVar5[1] - *piVar5;
  }
  if ((*(byte *)(param_1 + 4) & 0x40) == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = (uint)*(byte *)(param_1 + 7);
  }
  uVar4 = (uint)*(byte *)(local_c + -1 + local_18);
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar5[2];
      uVar3 = (uint)*(byte *)((int)puVar1 + 6);
      if ((uVar3 == local_14) ||
         ((((int)local_14 <= (int)uVar3 || ((int)(local_14 - uVar3) < 0x80)) &&
          (((int)uVar3 <= (int)local_14 || (0x7e < (int)(uVar3 - local_14))))))) {
        piVar2 = (int *)*piVar5;
        if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
          *(int * PTR32 *)piVar5[1] = piVar2;
          *(int *)(*piVar5 + 4) = piVar5[1];
          F_00429760(piVar5,0xc,0x25c);
          *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + -1;
        }
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        piVar5 = piVar2;
      }
      else {
        iVar6 = 0;
        bVar7 = local_c == 0;
        if (0 < local_c) {
          do {
            if (uVar3 == *(byte *)(iVar6 + local_18)) {
              piVar2 = (int *)*piVar5;
              if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
                *(int * PTR32 *)piVar5[1] = piVar2;
                *(int *)(*piVar5 + 4) = piVar5[1];
                F_00429760(piVar5,0xc,0x25c);
                *(int *)((int)this + 0x1b0) = *(int *)((int)this + 0x1b0) + -1;
              }
              ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
              piVar5 = piVar2;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_c);
          bVar7 = iVar6 == local_c;
        }
        if (bVar7) {
          piVar5 = (int *)*piVar5;
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x1ac));
  }
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      uVar3 = (uint)*(byte *)(piVar5[2] + 6);
      if ((((local_14 != uVar3) &&
           (((int)uVar3 <= (int)local_14 || ((int)(uVar3 - local_14) < 0x80)))) &&
          ((((int)local_14 <= (int)uVar3 || (0x7e < (int)(local_14 - uVar3))) && (uVar4 != uVar3))))
         && (((uVar4 < uVar3 && (0x7f < (int)(uVar3 - uVar4))) ||
             ((uVar3 < uVar4 && ((int)(uVar4 - uVar3) < 0x7f)))))) {
        F_00c09b60(this,piVar5[2]);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)((int)this + 0x1ac));
  }
  F_00c097a0(this);
  uVar4 = F_00c09930(this,param_1);
  return uVar4;
}

/* ref: FUN_00c09fb0 */
uint F_00c09fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc09fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  int * this_00;
  
  this_00 = (int *)0x0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0x640;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[3]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[4]);
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    this_00 = (int *)F_00406b90(0x10,0,0);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[1] = 0;
      this_00[2] = 0;
      F_00bb6510(this_00,(*(uint *)&gen_args[4]));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = this_00;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00c46aa0(*this_00,(*(uint *)&gen_args[3]),this_00[1] - *this_00);
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = (undefined1)(*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c0a050 */
uint F_00c0a050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc0a050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  int * this_00;
  
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 5))) = (byte)(*(undefined4 *)&gen_args[4]) + 6;
  this_00 = (int *)0x0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0x20;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = (undefined1)(*(undefined4 *)&gen_args[1]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = ((char)(*(undefined4 *)&gen_args[5]) != '\0') - 1 & (*(uint *)&gen_args[3]);
  if ((char)(*(undefined4 *)&gen_args[5]) == '\0') {
    uVar1 = (uint)(byte)(*(undefined4 *)&gen_args[4]);
  }
  else {
    uVar1 = 0;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar1;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    this_00 = (int *)F_00406b90(0x10,0,0);
    if (this_00 == (int *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      *this_00 = 0;
      this_00[1] = 0;
      this_00[2] = 0;
      F_00bb6510(this_00,(uint)(byte)(*(undefined4 *)&gen_args[4]));
    }
  }
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = this_00;
  if ((char)(*(undefined4 *)&gen_args[5]) != '\0') {
    F_00c46aa0(*this_00,(*(uint *)&gen_args[3]),this_00[1] - *this_00);
  }
  *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) | 0x40;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 7))) = (undefined1)(*(undefined4 *)&gen_args[2]);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf9 */
uint F_00c0a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0a100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((this[0xc2] == (undefined1)0x0) && (this[0xc3] != (undefined1)0x0)) {
    uVar4 = 0;
    (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP((*(int *)(this + 0xc4) + 8))) + -6;
    if (0 < param_2) {
      do {
        iVar5 = param_2 - uVar4;
        if ((*(int *)(gen_frame + 0x28)) < iVar5) {
          iVar5 = (*(int *)(gen_frame + 0x28));
        }
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0xcc);
        uVar2 = (*(undefined4 *)(gen_frame + 0x24));
        iVar3 = (*(int *)(this + 200) + 1) % 0xff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 0)) = (undefined1)*(undefined4 *)(this + 0xcc);
        (*(undefined1 *)(gen_frame + 0x13)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        (*(int *)(gen_frame + 0x18)) = param_1 + uVar4;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        (*(undefined2 *)(gen_frame + 0x10)) = 0x640;
        *(int *)(this + 200) = iVar3;
        (*(undefined1 *)(gen_frame + 0x12)) = (char)iVar3;
        (*(undefined4 *)(gen_frame + 0x24)) = uVar2;
        F_00c08fb0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x20));
        uVar4 = uVar4 + iVar5;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[5])REFP(0x110e73c));
        if ((*(int * PTR32 *)(gen_frame + 0x20)) != (int *)0x0) {
          iVar5 = *(*(int * PTR32 *)(gen_frame + 0x20));
          if (iVar5 != 0) {
            F_00429760(iVar5,(*(int * PTR32 *)(gen_frame + 0x20))[2] - iVar5,0x25c);
          }
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[2] = 0;
          F_00406ad0(piVar1);
        }
      } while ((int)uVar4 < param_2);
    }
    return uVar4;
  }
  return 0xffffffff;
}

/* ref: FUN_00c0a200 */
uint F_00c0a200(unsigned int gen_a0)
{
  GEN_ENTER(0xc0a200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined1 * puVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x1c8) != 0) {
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(undefined4 *)((int)this + 0xd4) = 0;
    (*(undefined1 * PTR32 *)(gen_frame + 0x1c)) = (undefined1 *)0x0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(int *)(gen_frame + 0x24)) = 0;
    F_00bb6510(&(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),*(undefined4 *)((int)this + 0x1c8));
    piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
    puVar4 = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
    if (piVar3 != *(int * PTR32 *)((int)this + 0x1c4)) {
      do {
        *puVar4 = *(undefined1 *)(piVar3[2] + 6);
        piVar3 = (int *)*piVar3;
        puVar4 = puVar4 + 1;
      } while (piVar3 != (int *)*(int *)((int)this + 0x1c4));
    }
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    (*(undefined1 *)(gen_frame + 0x8)) = 0x60;
    (*(undefined1 *)(gen_frame + 0xb)) = (char)iVar1;
    (*(char *)(gen_frame + 0x9)) = ((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c))) + 6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x14)) = (uint)(byte)((char)(*(undefined4 *)(gen_frame + 0x20)) - (char)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)));
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
    (*(undefined1 *)(gen_frame + 0xa)) = (char)((iVar1 + 1) % 0xff);
    (*(undefined1 * PTR32 *)(gen_frame + 0x10)) = (*(undefined1 * PTR32 *)(gen_frame + 0x1c));
    F_00c08780(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x18));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e754));
    if ((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) {
      iVar1 = *(*(int * PTR32 *)(gen_frame + 0x18));
      if (iVar1 != 0) {
        F_00429760(iVar1,(*(int * PTR32 *)(gen_frame + 0x18))[2] - iVar1,0x25c);
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      F_00406ad0(piVar3);
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
    uVar2 = 0;
    if ((*(undefined1 * PTR32 *)(gen_frame + 0x1c)) != (undefined1 *)0x0) {
      uVar5 = F_00429760((*(undefined1 * PTR32 *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x24)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x1c)),0x25c);
      uVar2 = (uint)uVar5;
    }
  }
  return uVar2;
}

/* ref: FUN_00c0a320 */
uint F_00c0a320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  uVar6 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
  if ((uVar6 == uVar5) ||
     ((((int)uVar5 <= (int)uVar6 || ((int)(uVar5 - uVar6) < 0x80)) &&
      (((int)uVar6 <= (int)uVar5 || (0x7e < (int)(uVar6 - uVar5))))))) goto LAB_00c0a4bd;
  if (uVar6 == (int)(uVar5 + 1) % 0xff) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) == 0) ||
       (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar6;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
      F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(int * PTR32 *)&gen_args[1]));
      F_00c090e0((*(undefined * PTR32 *)&gen_args[0]),1);
    }
    goto LAB_00c0a4bd;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))
  goto LAB_00c0a4bd;
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
  (*(char *)(gen_frame + 0x1b)) = '\0';
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
LAB_00c0a44b: ;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    uVar5 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x14));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x10));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0x1b)) != '\0') goto LAB_00c0a4b4;
      uVar6 = (uint)*(byte *)(piVar4[2] + 6);
      uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
      if (uVar5 == uVar6) {
LAB_00c0a437: ;
        (*(char *)(gen_frame + 0x1b)) = '\x01';
      }
      else if (((uVar6 <= uVar5) || ((int)(uVar6 - uVar5) < 0x80)) &&
              ((uVar5 <= uVar6 || (0x7e < (int)(uVar5 - uVar6))))) {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
        (*(uint *)(gen_frame + 0x14)) = uVar5;
        F_00c0f010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),&(*(uint *)(gen_frame + 0x10)),piVar4,&(*(uint *)(gen_frame + 0x14)));
        goto LAB_00c0a437;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    if ((*(char *)(gen_frame + 0x1b)) == '\0') goto LAB_00c0a44b;
  }
LAB_00c0a4b4: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 1;
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
LAB_00c0a4bd: ;
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x18))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))))))) {
    F_00c0a200((*(undefined * PTR32 *)&gen_args[0]));
    uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar5;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)));
  if ((iVar1 < 1) ||
     ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x14))), iVar2 != 0 && (iVar1 <= iVar2)))) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) == 0) {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x28)));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = 1;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))) = uVar3;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
      _Var7 = F_00c4b7c2((__time64_t *)0x0);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = (int)_Var7;
      uVar8 = F_00427d90();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = uVar8;
      uVar8 = F_00427e30();
      *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))) = uVar8;
    }
  }
  else {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))) = 0;
    if (iVar1 != 0) {
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
      (*(undefined1 *)(gen_frame + 0xb)) = (char)iVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
      (*(undefined2 *)(gen_frame + 0x8)) = 0x640;
      (*(undefined1 *)(gen_frame + 0xa)) = (char)((iVar1 + 1) % 0xff);
      F_00c08780((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
      uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
      return uVar5;
    }
  }
  uVar5 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
  return uVar5;
}

/* ref: FUN_00c0a5d0 */
uint F_00c0a5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0a5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1c8) != 0) {
    uVar2 = F_00c0a200(this);
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0xd0);
  *(undefined4 *)((int)this + 0xd0) = 0;
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    (*(undefined2 *)(gen_frame + 0x4)) = 0x640;
    (*(undefined1 *)(gen_frame + 0x7)) = (char)iVar1;
    (*(undefined1 *)(gen_frame + 0x6)) = (char)((iVar1 + 1) % 0xff);
    uVar2 = F_00c08780(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_00c0a640 */
uint F_00c0a640(unsigned int gen_a0)
{
  GEN_ENTER(0xc0a640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int iVar7;
  int * piVar8;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x7c))) {
  case 0: ;
  case 1: ;
  case 6: ;
    goto switchD_00c0a65d_caseD_0;
  case 3: ;
    if ((*(int *)((int)this + 0x198) != 0) &&
       (bVar3 = F_00c0cc30((undefined *)((int)this + 0x180)), bVar3 != 0)) {
      *(undefined4 *)((int)this + 0x198) = 0;
      F_00c08500(this);
      if (*(int *)((int)this + 0x7c) != 6) {
        *(undefined4 *)((int)this + 0x7c) = 6;
      }
    }
    break;
  case 5: ;
    if ((*(int *)((int)this + 0x198) != 0) &&
       ((*(int *)((int)this + 0x1b0) == 0 ||
        (bVar3 = F_00c0cc30((undefined *)((int)this + 0x180)), bVar3 != 0)))) {
      F_00c08560(this);
      if (*(int *)((int)this + 0x78) == 0) {
        F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74));
      }
      if (*(int *)((int)this + 0x7c) != 6) {
        *(undefined4 *)((int)this + 0x7c) = 6;
      }
      F_00c09af0(this);
      return 0;
    }
  case 4: ;
    if ((*(char *)((int)this + 0x80) != '\0') && (uVar5 = F_00c08990(this), -1 < (int)uVar5)) {
      uVar4 = uVar5;
      if ((int)uVar5 < 1) {
        uVar4 = 1;
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (undefined * PTR32 *)0x0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      F_00bb6510(&(*(undefined4 *)(gen_frame + 0xc)),uVar4);
      uVar2 = (*(undefined4 *)(gen_frame + 0xc));
      uVar5 = F_00c08e20(this,(*(undefined4 *)(gen_frame + 0xc)),uVar5);
      if (*(int *)((int)this + 0x70) != 0) {
        F_00badf20((undefined *)((int)this + 8),*(int *)((int)this + 0x70),uVar2,uVar5);
      }
      F_00bb4550(&(*(undefined4 *)(gen_frame + 0xc)));
    }
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0xe0));
  if ((bVar3 != 0) && (*(int *)((int)this + 0x1b0) == 0)) {
    iVar7 = (*(int *)((int)this + 200) + 1) % 0xff;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x608;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    *(int *)((int)this + 200) = iVar7;
    uVar6 = (undefined1)iVar7;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = uVar6;
    (*(uint *)(gen_frame + 0x14)) = (uint)CONCAT12(uVar6,0x608);
    F_00c08fb0(this,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)));
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x108));
  if ((bVar3 != 0) &&
     (piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac))), piVar8 != *(int * PTR32 *)((int)this + 0x1ac))) {
    do {
      F_00c09b60(this,piVar8[2]);
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)((int)this + 0x1ac));
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x130));
  if (bVar3 != 0) {
    F_00c0a5d0(this);
  }
  bVar3 = F_00c0cc30((undefined *)((int)this + 0x158));
  if (bVar3 != 0) {
    *(undefined4 *)((int)this + 0xf8) = 0;
    *(undefined4 *)((int)this + 0x170) = 0;
    *(undefined4 *)((int)this + 0x120) = 0;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x198) = 0;
    if (*(int *)((int)this + 0x78) == 0) {
      F_00ba74d0(*(undefined * PTR32 *)((int)this + 0x74));
    }
    if (*(int *)((int)this + 0x7c) != 6) {
      *(undefined4 *)((int)this + 0x7c) = 6;
    }
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      F_00c09570(*(undefined * PTR32 *)((int)this + 0x78),this);
    }
    if ((*(char *)((int)this + 0x80) == '\0') || (*(int *)((int)this + 0x70) == 0)) {
      if (*(int *)((int)this + 0x70) == 0) {
        (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
      }
    }
    else if ((((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0) &&
             (uVar5 = ((code *)*(gen_code32 *)((int)this + 0x20))(*(int *)((int)this + 0x70)),
             (char)uVar5 != '\0')) &&
            (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x70), puVar1 != (undefined4 *)0x0)) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      return 0;
    }
  }
switchD_00c0a65d_caseD_0: ;
  return 0;
}

/* ref: FUN_00c0a8a0 */
uint F_00c0a8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0a8a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined1 * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 * puVar15;
  uint uVar16;
  
  iVar14 = (*(int *)&gen_args[1]);
  iVar11 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  if (iVar11 != 1) {
    if (iVar11 == 3) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = (uint)*(byte *)((*(int *)&gen_args[1]) + 6);
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != 4) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 4;
      }
      F_00c0a5d0((*(undefined * PTR32 *)&gen_args[0]));
      F_00c09410((*(undefined * PTR32 *)&gen_args[0]));
      uVar16 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
      return uVar16;
    }
    if (iVar11 != 6) goto LAB_00c0aa81;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = (uint)*(byte *)((*(int *)&gen_args[1]) + 6);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) != 2) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 2;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))));
  }
  puVar15 = (undefined4 *)F_00406b90(0x2c,0,0);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    uVar7 = *(ushort *)((*(int *)&gen_args[1]) + 0x16);
    (*(uint *)(gen_frame + 0x2c)) = (uint)uVar7;
    bVar2 = *(byte *)((*(int *)&gen_args[1]) + 0x1b);
    (*(byte *)(gen_frame + 0x38)) = bVar2;
    bVar3 = *(byte *)((*(int *)&gen_args[1]) + 0x1a);
    uVar8 = *(ushort *)((*(int *)&gen_args[1]) + 0x14);
    uVar9 = *(ushort *)((*(int *)&gen_args[1]) + 0x12);
    (*(byte *)(gen_frame + 0x39)) = bVar3;
    bVar4 = *(byte *)((*(int *)&gen_args[1]) + 0x19);
    (*(byte *)(gen_frame + 0x3a)) = bVar4;
    bVar5 = *(byte *)((*(int *)&gen_args[1]) + 0x18);
    (*(byte *)(gen_frame + 0x3b)) = bVar5;
    bVar6 = *(byte *)((*(int *)&gen_args[1]) + 0xd);
    uVar10 = *(ushort *)((*(int *)&gen_args[1]) + 0x10);
    (*(uint *)(gen_frame + 0x30)) = (uint)uVar10;
    uVar12 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0)));
    (*(undefined4 *)(gen_frame + 0x34)) = uVar12;
    *puVar15 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1dc)));
    puVar15[1] = uVar12;
    puVar15[2] = (uint)uVar10;
    puVar15[3] = (uint)bVar6;
    puVar15[4] = (uint)bVar5;
    puVar15[5] = (uint)bVar4;
    puVar15[6] = (uint)bVar3;
    puVar15[7] = (uint)bVar2;
    puVar15[8] = (uint)uVar7;
    puVar15[9] = (uint)uVar9;
    puVar15[10] = (uint)uVar8;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) = puVar15;
  uVar12 = puVar15[7];
  (*(undefined4 *)(gen_frame + 0x1c)) = puVar15[6];
  (*(undefined4 *)(gen_frame + 0x20)) = puVar15[5];
  (*(undefined4 *)(gen_frame + 0x24)) = puVar15[4];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar15[8];
  (*(undefined4 *)(gen_frame + 0x34)) = puVar15[10];
  uVar13 = puVar15[3];
  (*(uint *)(gen_frame + 0x30)) = puVar15[9];
  (*(uint *)(gen_frame + 0x2c)) = puVar15[2];
  uVar16 = F_00c4f2dd();
  (*(undefined2 *)(gen_frame + 0x12)) = (undefined2)(*(uint *)(gen_frame + 0x30));
  (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)(*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)(gen_frame + 0x18)) = (undefined1)(*(undefined4 *)(gen_frame + 0x24));
  (*(undefined2 *)(gen_frame + 0x16)) = (undefined2)(*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
  (*(undefined1 *)(gen_frame + 0xc)) = 1;
  (*(undefined1 *)(gen_frame + 0xe)) = 1;
  (*(undefined1 *)(gen_frame + 0x1a)) = (undefined1)(*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined1 *)(gen_frame + 0x1b)) = (char)uVar12;
  (*(undefined2 *)(gen_frame + 0x4)) = 0x16c0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 200))) = (int)uVar16 % 0xff;
  puVar1 = (undefined1 *)((*(int *)&gen_args[1]) + 6);
  (*(undefined1 *)(gen_frame + 0x6)) = (char)((int)uVar16 % 0xff);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 0)) = (undefined1)uVar13;
  (*(undefined1 *)(gen_frame + 0xd)) = (undefined1)(*(int *)&gen_args[1]);
  (*(undefined2 *)(gen_frame + 0x14)) = (undefined2)(*(undefined4 *)(gen_frame + 0x34));
  (*(undefined1 *)(gen_frame + 0x19)) = (undefined1)(*(undefined4 *)(gen_frame + 0x20));
  (*(undefined1 *)(gen_frame + 0x7)) = *puVar1;
  F_00c08fb0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
LAB_00c0aa81: ;
  uVar16 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),iVar14);
  return uVar16;
}

/* ref: FUN_00c0aaa0 */
uint F_00c0aaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0aaa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  if (((iVar1 != 3) && (iVar1 != 6)) && (iVar1 != 5)) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 5;
  }
  uVar5 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc)));
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0ac6b;
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) == 0) ||
       (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xcc))) = uVar5;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]))));
      F_00c0ebd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0))),&(*(int * PTR32 *)&gen_args[1]));
      F_00c090e0((*(undefined * PTR32 *)&gen_args[0]),1);
    }
    F_00c0a5d0((*(undefined * PTR32 *)&gen_args[0]));
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1e0))) <= *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d4))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))))
  goto LAB_00c0ac6b;
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)))) {
LAB_00c0abf9: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4)));
    uVar3 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0ac62;
      uVar5 = (uint)*(byte *)(piVar4[2] + 6);
      uVar3 = (uint)*((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6)));
      if (uVar3 == uVar5) {
LAB_00c0abe5: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]));
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))),&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0abe5;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0abf9;
  }
LAB_00c0ac62: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))) + 1;
LAB_00c0ac6b: ;
  piVar4 = (*(int * PTR32 *)&gen_args[1]);
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x18))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd4))))))) {
    F_00c0a200((*(undefined * PTR32 *)&gen_args[0]));
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar3;
  }
  if ((0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0)))) &&
     ((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x14))), iVar1 == 0 ||
      (iVar1 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd0))))))) {
    F_00c08860((*(undefined * PTR32 *)&gen_args[0]));
    uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
    return uVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))) + 0x28)));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x148))) = 1;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c))) = uVar2;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) = (int)_Var6;
    uVar7 = F_00427d90();
    *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x138))) = uVar7;
    uVar7 = F_00427e30();
    *((ulonglong *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140))) = uVar7;
  }
  uVar3 = F_00c09930((*(undefined * PTR32 *)&gen_args[0]),piVar4);
  return uVar3;
}

/* ref: FUN_00c0ad40 */
uint F_00c0ad40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ad40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  uVar5 = (uint)*(byte *)((int)param_1 + 6);
  uVar3 = *(uint *)((int)this + 0xcc);
  if ((uVar5 == uVar3) ||
     ((((int)uVar3 <= (int)uVar5 || ((int)(uVar3 - uVar5) < 0x80)) &&
      (((int)uVar5 <= (int)uVar3 || (0x7e < (int)(uVar5 - uVar3))))))) goto LAB_00c0aecb;
  iVar1 = *(int *)((int)this + 0x1d4);
  if (uVar5 == (int)(uVar3 + 1) % 0xff) {
    if ((iVar1 == 0) || (*(int *)((int)this + 0x1c8) + iVar1 < *(int *)((int)this + 0x1e0))) {
      *(uint *)((int)this + 0xcc) = uVar5;
      F_00c090e0(this,0);
    }
    F_00c0a5d0(this);
    uVar3 = F_00c09930(this,param_1);
    return uVar3;
  }
  if (*(int *)((int)this + 0x1e0) <= iVar1 + *(int *)((int)this + 0x1c8)) goto LAB_00c0aecb;
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
  (*(char *)(gen_frame + 0xb)) = '\0';
  if (piVar4 == *(int * PTR32 *)((int)this + 0x1c4)) {
LAB_00c0ae5b: ;
    uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    iVar1 = *(int *)((int)this + 0x1c4);
    uVar3 = *(uint *)(iVar1 + 4);
    (*(uint *)(gen_frame + 0x0)) = uVar5;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    piVar4 = (int *)F_004296a0(0xc,0,0x25c);
    *piVar4 = iVar1;
    piVar4[1] = (*(uint *)(gen_frame + 0x4));
    if ((uint *)(piVar4 + 2) != (uint *)0x0) {
      piVar4[2] = (*(uint *)(gen_frame + 0x0));
    }
    if (*(int *)((int)this + 0x1c8) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *(int *)((int)this + 0x1c8) = *(int *)((int)this + 0x1c8) + 1;
    *(int * PTR32 *)(iVar1 + 4) = piVar4;
    *(int * PTR32 *)piVar4[1] = piVar4;
  }
  else {
    do {
      if ((*(char *)(gen_frame + 0xb)) != '\0') goto LAB_00c0aec4;
      uVar5 = (uint)*(byte *)(piVar4[2] + 6);
      uVar3 = (uint)*(byte *)((int)param_1 + 6);
      if (uVar3 == uVar5) {
LAB_00c0ae47: ;
        (*(char *)(gen_frame + 0xb)) = '\x01';
      }
      else if (((uVar5 <= uVar3) || ((int)(uVar5 - uVar3) < 0x80)) &&
              ((uVar3 <= uVar5 || (0x7e < (int)(uVar3 - uVar5))))) {
        uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        F_00c0f010((undefined *)((int)this + 0x1c4),&(*(uint *)(gen_frame + 0x0)),piVar4,&(*(uint *)(gen_frame + 0x4)));
        goto LAB_00c0ae47;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)((int)this + 0x1c4));
    if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00c0ae5b;
  }
LAB_00c0aec4: ;
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 1;
LAB_00c0aecb: ;
  if ((0 < *(int *)((int)this + 0xd4)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x18))), iVar1 == 0 ||
      (iVar1 < *(int *)((int)this + 0xd4))))) {
    F_00c0a200(this);
    uVar3 = F_00c09930(this,param_1);
    return uVar3;
  }
  if ((0 < *(int *)((int)this + 0xd0)) &&
     ((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x14))), iVar1 == 0 ||
      (iVar1 < *(int *)((int)this + 0xd0))))) {
    F_00c08860(this);
    uVar3 = F_00c09930(this,param_1);
    return uVar3;
  }
  if (*(int *)((int)this + 0x148) == 0) {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc4) + 0x28)));
    *(undefined4 *)((int)this + 0x148) = 1;
    *(undefined4 *)((int)this + 0x14c) = uVar2;
    *(undefined4 *)((int)this + 0x150) = 0;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x130) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)((int)this + 0x138) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)((int)this + 0x140) = uVar7;
  }
  uVar3 = F_00c09930(this,param_1);
  return uVar3;
}

/* ref: FUN_00c0b1d0 */
unsigned int F_00c0b1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc0b1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  undefined * this;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((byte *)(gen_frame + 0x4))[0x44] = (char)uVar1;
  ((byte *)(gen_frame + 0x4))[0x45] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x4))[0x46] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x47] = (char)(uVar1 >> 0x18);
  this = *(undefined * PTR32 *)(param_1 + 0x24);
  ((byte *)(gen_frame + 0x4))[0] = 0;
  ((byte *)(gen_frame + 0x4))[1] = 0;
  ((byte *)(gen_frame + 0x4))[2] = 0;
  ((byte *)(gen_frame + 0x4))[3] = 0;
  if (*(int *)((int)this + 0x1f8) != 0) {
    uVar2 = param_2;
    uVar3 = param_3;
    uVar1 = F_00ba7220(((byte *)(gen_frame + 0x4)) + 4,param_4,0);
    this = (undefined *)F_00c09700(this,uVar1,uVar2,uVar3);
    F_00ba6730();
  }
  if (this != (undefined *)0x0) {
    F_00c0afb0(this,param_2,param_3);
  }
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 68)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00c0b250 */
uint F_00c0b250(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  piVar3 = *(int * PTR32 *)((int)this + 8);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    do {
      piVar5 = piVar4;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar5 = (int *)piVar4[2];
        if (*(char *)((int)piVar5 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x11);
          piVar3 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x11);
            piVar5 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar2 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar5 = piVar2, cVar1 == '\0' && (piVar3 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar2 = (int *)piVar5[1];
            piVar3 = piVar5;
          }
        }
      }
      piVar3 = (int *)F_00c0a640((undefined *)piVar4[3]);
      piVar4 = piVar5;
    } while (piVar5 != *(int * PTR32 *)((int)this + 8));
  }
  return (uint)piVar3;
}

/* ref: FUN_00c0b2c0 */
uint F_00c0b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  undefined4 in_ecx;
  int * piVar7;
  ulonglong uVar8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x110e7b4));
  F_00c0a640(this);
  if (*(int *)((int)this + 0x78) == 0) {
    in_ecx = *(undefined4 *)((int)this + 0x70);
  }
  else {
    in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x78) + 0x70)));
  }
  pvVar3 = (undefined *)F_00ba6e30(in_ecx);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = REFG(void * PTR32, 0x14c5958);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar4 = F_00ba7110(pvVar3);
  F_00c0ece0((undefined *)(uVar4 + 4),&(*(int *)(gen_frame + 0x4)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)(uVar4 + 8)) {
    F_00c0d6f0((undefined *)(uVar4 + 4),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00c0eeb0((undefined *)(uVar4 + 4),&(*(int *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)));
  }
  if (*(int *)((int)this + 0xc4) != 0) {
    F_00406ad0(*(int *)((int)this + 0xc4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1ac)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1ac));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1b8)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1b8)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1b8));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c4)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1c4)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1c4));
  }
  piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1d0)));
  if (piVar7 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      puVar1 = (undefined4 *)piVar7[2];
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1d0));
  }
  piVar7 = *(int * PTR32 *)((int)this + 500);
  if (piVar7 != (int *)0x0) {
    piVar6 = (int *)*piVar7;
    piVar5 = (int *)*piVar6;
    *piVar6 = (int)piVar6;
    *(int *)(*piVar7 + 4) = *piVar7;
    piVar7[1] = 0;
    if (piVar5 != (int *)*piVar7) {
      do {
        piVar6 = (int *)*piVar5;
        F_00429760(piVar5,0xc,0x25c);
        piVar5 = piVar6;
      } while (piVar6 != (int *)*piVar7);
    }
    F_00429760(*piVar7,0xc,0x25c);
    F_00406ad0(piVar7);
  }
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x1f8);
  if (pvVar3 != (undefined *)0x0) {
    F_00c0ef70(pvVar3,&(*(int *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)pvVar3 + 4),
                 *(undefined4 * PTR32 *)((int)pvVar3 + 4));
    F_00429760(*(undefined4 *)((int)pvVar3 + 4),0x28,0x25c);
    F_00406ad0(pvVar3);
  }
  if ((*(int *)((int)this + 0x78) == 0) &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 0x74), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  iVar2 = *(int *)((int)this + 0x1e4);
  if (iVar2 != 0) {
    F_00429760(iVar2,*(int *)((int)this + 0x1ec) - iVar2,0x25c);
  }
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  piVar7 = *(int * PTR32 *)((int)this + 0x1d0);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1d0) + 4))) = *(int *)((int)this + 0x1d0);
  *(undefined4 *)((int)this + 0x1d4) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1d0)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1d0));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1d0),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1c4);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
  *(undefined4 *)((int)this + 0x1c8) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1c4)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1c4));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1c4),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1b8);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1b8) + 4))) = *(int *)((int)this + 0x1b8);
  *(undefined4 *)((int)this + 0x1bc) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1b8)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1b8));
  }
  F_00429760(*(undefined4 *)((int)this + 0x1b8),0xc,0x25c);
  piVar7 = *(int * PTR32 *)((int)this + 0x1ac);
  piVar6 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(undefined4 *)((int)this + 0x1b0) = 0;
  if (piVar6 != *(int * PTR32 *)((int)this + 0x1ac)) {
    do {
      piVar7 = (int *)*piVar6;
      F_00429760(piVar6,0xc,0x25c);
      piVar6 = piVar7;
    } while (piVar7 != (int *)*(int *)((int)this + 0x1ac));
  }
  uVar8 = F_00429760(*(undefined4 *)((int)this + 0x1ac),0xc,0x25c);
  F_00ba6730();
  return (uint)uVar8;
}

/* ref: FUN_00c0b630 */
uint F_00c0b630(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = *(uint *)((int)this + 0x74);
  if (*(int *)(uVar1 + 0x24) == 0) {
    this_00 = (undefined *)F_00ba6e30(*(undefined4 *)((int)this + 0x70));
    if (this_00 == (undefined *)0x0) {
      this_00 = REFG(void * PTR32, 0x14c5958);
    }
    pvVar2 = this;
    this_01 = (undefined *)F_00ba7110(this_00);
    F_00c091e0(this_01,pvVar2);
    gen_imp_InterlockedExchange(((LONG *)GEN_TOP((*(int *)((int)this + 0x74) + 0x24))),(LONG)this);
    F_00ba79d0(*(undefined4 *)((int)this + 0x74),((code *)REFP(0xc0b1d0)));
    F_00ba7aa0(*(undefined * PTR32 *)((int)this + 0x74),0,0xffffffff);
    uVar1 = F_00ba9ae0(*(undefined * PTR32 *)((int)this + 0x74),this_00);
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf5 */
uint F_00c0b6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0b6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c0b630(this);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf6 */
uint F_00c0b6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0b6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  F_00c0b630(this);
  if (this[0x80] == (undefined1)0x0) {
    puVar1 = (uint *)F_00406b90(0xc,0,0);
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1[1] = 0;
      uVar2 = F_004296a0(0xc,0,0x25c);
      *puVar1 = uVar2;
      *(uint *)uVar2 = uVar2;
      *(uint *)(*puVar1 + 4) = *puVar1;
    }
    *(uint * PTR32 *)(this + 500) = puVar1;
  }
  uVar2 = F_00406b90(0x10,0,0);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(uVar2 + 8) = 0;
    uVar3 = F_004296a0(0x28,0,0x25c);
    *(uint *)(uVar2 + 4) = uVar3;
    *(uint *)uVar3 = uVar3;
    *((int *)GEN_TOP((*(int *)(uVar2 + 4) + 4))) = *(int *)(uVar2 + 4);
    *((int *)GEN_TOP((*(int *)(uVar2 + 4) + 8))) = *(int *)(uVar2 + 4);
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x20))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 4) + 0x21))) = 1;
  }
  *(uint *)(this + 0x1f8) = uVar2;
  uVar2 = F_00ba7510(*(undefined * PTR32 *)(this + 0x74),param_1,param_2);
  return uVar2;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf7 */
uint F_00c0b770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0b770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  F_00c0b630(this);
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  while (iVar1 == 0) {
    F_00bada50();
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 500) + 4)));
  }
  piVar2 = *(int * PTR32 *)(this + 500);
  piVar3 = (int *)*piVar2;
  iVar1 = *(int *)(*piVar3 + 8);
  piVar4 = (int *)*piVar3;
  if (piVar4 != piVar3) {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    F_00429760(piVar4,0xc,0x25c);
    piVar2 = piVar2 + 1;
    *piVar2 = *piVar2 + -1;
  }
  *(undefined4 *)(iVar1 + 0x70) = param_2;
  F_00bb1770(param_1,iVar1);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RUDPImpl::vf8 */
uint F_00c0b7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0b7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  __time64_t _Var7;
  ulonglong uVar8;
  
  F_00c0b630(this);
  if ((this[0xc2] != (undefined1)0x0) || (this[0xc3] != (undefined1)0x0)) {
    return 0xffffffff;
  }
  F_00ba6880(this + 0x82,param_1);
  if (*(int *)(this + 0x7c) != 3) {
    *(undefined4 *)(this + 0x7c) = 3;
  }
  iVar1 = *(int *)(this + 0xc4);
  uVar2 = *(undefined4 *)(iVar1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0x20);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar1 + 0x28);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar1 + 0x24);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(iVar1 + 8);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(iVar1 + 0xc);
  uVar6 = F_00c4f2dd();
  *(int *)(this + 200) = (int)uVar6 % 0xff;
  F_00c08640(((undefined1 *)(gen_frame + 0x8)),(int)uVar6 % 0xff,(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),uVar2,
               uVar3,uVar4);
  F_00c08fb0(this,((undefined1 *)(gen_frame + 0x8)));
  *(undefined4 *)(this + 0x198) = 1;
  *(int *)(this + 0x19c) = *(int *)(this + 0x2c) * 1000;
  *(undefined4 *)(this + 0x1a0) = 0;
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)(this + 0x180) = (int)_Var7;
  uVar8 = F_00427d90();
  *(ulonglong *)(this + 0x188) = uVar8;
  uVar8 = F_00427e30();
  *(ulonglong *)(this + 400) = uVar8;
  if (this[0x80] == (undefined1)0x0) {
    bVar5 = F_00c0cc30(this + 0x180);
    while ((bVar5 != 0 && (F_00bada50(), *(int *)(this + 0x7c) != 4))) {
      bVar5 = F_00c0cc30(this + 0x180);
    }
    *(undefined4 *)(this + 0x198) = 0;
    if (*(int *)(this + 0x7c) != 4) {
      F_00c08a10(this);
      *(undefined4 *)(this + 0xd4) = 0;
      *(undefined4 *)(this + 0xd8) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
      *(undefined4 *)(this + 0x120) = 0;
      if (*(int *)(this + 0x7c) == 3) {
        F_00c08500(this);
      }
      else if (*(int *)(this + 0x7c) != 5) {
        return 0xffffffff;
      }
      if (*(int *)(this + 0x7c) != 6) {
        *(undefined4 *)(this + 0x7c) = 6;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf2 */
uint F_00c0b9b0(void)
{
  GEN_ENTER(0xc0b9b0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf2 */
uint F_00c0b9c0(void)
{
  GEN_ENTER(0xc0b9c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf2 */
uint F_00c0b9d0(void)
{
  GEN_ENTER(0xc0b9d0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf2 */
uint F_00c0b9e0(void)
{
  GEN_ENTER(0xc0b9e0u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf2 */
uint F_00c0b9f0(void)
{
  GEN_ENTER(0xc0b9f0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: FUN_00c0ba30 */
uint F_00c0ba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ba30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c0ba60 */
uint F_00c0ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ba60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c0bb20 */
uint F_00c0bb20(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a1af40(this);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return (uint)this;
}

/* ref: FUN_00c0bc00 */
uint F_00c0bc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xc0bc00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_10 = (undefined4)gen_a10;
  undefined4 param_11 = (undefined4)gen_a11;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined4 *)((int)this + 0x1c) = param_8;
  *(undefined4 *)((int)this + 0x20) = param_9;
  *(undefined4 *)((int)this + 0x24) = param_10;
  *(undefined4 *)((int)this + 0x28) = param_11;
  return (uint)this;
}

/* ref: FUN_00c0bda0 */
uint F_00c0bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf2 */
uint F_00c0bdc0(void)
{
  GEN_ENTER(0xc0bdc0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf4 */
byte F_00c0bdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0bdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if ((int)uVar1 <= param_2) {
    *param_1 = this[4];
    param_1[1] = this[5];
    param_1[2] = this[6];
    param_1[3] = this[7];
    param_1[4] = (undefined1)((char)this[0xc] << 4);
    param_1[5] = this[0xd];
    param_1[6] = this[0xe];
    param_1[7] = (undefined1)0x0;
    param_1[8] = this[0x11];
    param_1[9] = this[0x10];
    param_1[10] = this[0x13];
    param_1[0xb] = this[0x12];
    param_1[0xc] = this[0x15];
    param_1[0xd] = this[0x14];
    param_1[0xe] = this[0x17];
    param_1[0xf] = this[0x16];
    param_1[0x10] = this[0x18];
    param_1[0x11] = this[0x19];
    param_1[0x12] = this[0x1a];
    param_1[0x13] = this[0x1b];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c0bed0 */
byte F_00c0bed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0bef0 */
byte F_00c0bef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0bf10 */
uint F_00c0bf10(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0bf20 */
uint F_00c0bf20(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0bf30 */
uint F_00c0bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0bf60 */
uint F_00c0bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0bf90 */
uint F_00c0bf90(unsigned int gen_a0)
{
  GEN_ENTER(0xc0bf90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c0bfc0 */
uint F_00c0bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bfc0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00c0bfe0 */
byte F_00c0bfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0bfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c010 */
uint F_00c0c010(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c020 */
uint F_00c0c020(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0c030 */
uint F_00c0c030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c060 */
uint F_00c0c060(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00c0c070 */
uint F_00c0c070(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00c0c080 */
uint F_00c0c080(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c090 */
uint F_00c0c090(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0c0a0 */
uint F_00c0c0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0c0b0 */
uint F_00c0c0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00c0c0c0 */
uint F_00c0c0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0c0e0 */
uint F_00c0c0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c0e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00c0c120 */
uint F_00c0c120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c150 */
byte F_00c0c150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c190 */
uint F_00c0c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c0c1b0 */
byte F_00c0c1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c0c210 */
uint F_00c0c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c210u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c240 */
uint F_00c0c240(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c250 */
uint F_00c0c250(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c280 */
uint F_00c0c280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00c0c2b0 */
uint F_00c0c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c2c0 */
uint F_00c0c2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c2c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0c2e0 */
uint F_00c0c2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c2e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c340 */
unsigned int F_00c0c340(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00c0c390 */
uint F_00c0c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c3a0 */
uint F_00c0c3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00c0c3b0 */
uint F_00c0c3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00c0c3c0 */
uint F_00c0c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c0c3d0 */
uint F_00c0c3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c0c3e0 */
uint F_00c0c3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00c0c400 */
uint F_00c0c400(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c400u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00c0c420 */
uint F_00c0c420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c420u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c450 */
uint F_00c0c450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00c0c480 */
uint F_00c0c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c490 */
uint F_00c0c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0c4e0 */
uint F_00c0c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c4f0 */
uint F_00c0c4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c4f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c500 */
uint F_00c0c500(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c510 */
uint F_00c0c510(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c530 */
uint F_00c0c530(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c570 */
uint F_00c0c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c5a0 */
uint F_00c0c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c0c600 */
uint F_00c0c600(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c670 */
uint F_00c0c670(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00c0c6d0 */
uint F_00c0c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c6e0 */
uint F_00c0c6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c6f0 */
uint F_00c0c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c6f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c700 */
uint F_00c0c700(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c710 */
uint F_00c0c710(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c720 */
uint F_00c0c720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c740 */
uint F_00c0c740(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c750 */
uint F_00c0c750(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c760 */
uint F_00c0c760(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c7e0 */
uint F_00c0c7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c800 */
uint F_00c0c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c820 */
uint F_00c0c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c0c840 */
uint F_00c0c840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c860 */
uint F_00c0c860(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c870 */
uint F_00c0c870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00c0c890 */
uint F_00c0c890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00c0c8b0 */
uint F_00c0c8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c0c8c0 */
uint F_00c0c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf1 */
uint F_00c0c8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined1 AVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (((byte)this[4] & 0x40) == 0) {
      AVar2 = (undefined1)0xff;
    }
    else {
      AVar2 = this[7];
    }
    *(undefined *)((int)puVar1 + 6) = this[6];
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[5])REFP(0x110e724));
    *(undefined2 *)(puVar1 + 1) = 0x640;
    *(undefined *)((int)puVar1 + 7) = AVar2;
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::ACKSegment::vf0 */
uint F_00c0c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf3 */
uint F_00c0c960(unsigned int gen_a0)
{
  GEN_ENTER(0xc0c960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    return ((uint)(byte)this[5] + piVar1[1]) - *piVar1;
  }
  return (uint)(byte)this[5] + *(int *)(this + 0x10);
}

/* ref: Client::Network::Socket::RUDP2::DATSegment::vf4 */
byte F_00c0c980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0c980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 6,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 6,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::EAKSegment::vf4 */
byte F_00c0ca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ca30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  if (param_2 < (int)uVar2) {
    return 0;
  }
  *param_1 = this[4];
  param_1[1] = this[5];
  param_1[2] = this[6];
  param_1[3] = this[7];
  if (*(int *)(this + 0x14) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x14);
    F_00c46aa0(param_1 + 4,*piVar1,piVar1[1] - *piVar1);
    return 1;
  }
  F_00c46aa0(param_1 + 4,*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  return 1;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf1 */
uint F_00c0cae0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 NVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    NVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x608;
    *(undefined *)((int)puVar2 + 6) = NVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e76c));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::NULSegment::vf0 */
uint F_00c0cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf1 */
uint F_00c0cb50(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 RVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    RVar1 = this[6];
    *(undefined2 *)(puVar2 + 1) = 0x610;
    *(undefined *)((int)puVar2 + 6) = RVar1;
    *(undefined1 *)((int)puVar2 + 7) = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[5])REFP(0x110e784));
    return (uint)puVar2;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::RSTSegment::vf0 */
uint F_00c0cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cbc0 */
uint F_00c0cbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __time64_t _Var1;
  ulonglong uVar2;
  
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00c0cc30 */
byte F_00c0cc30(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cc30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  __time64_t _Var2;
  
  if (*(int *)((int)this + 0x18) == 1) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x1c) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      if (*(int *)((int)this + 0x20) == 0) {
        *(undefined4 *)((int)this + 0x18) = 0;
        return 1;
      }
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      *(undefined4 *)((int)this + 0x18) = 2;
      return 1;
    }
  }
  else if (*(int *)((int)this + 0x18) == 2) {
    uVar1 = F_00427d90();
    if (((int)(uVar1 >> 0x20) - *(int *)((int)this + 0xc) !=
         (uint)((uint)uVar1 < *(uint *)((int)this + 8))) ||
       (*(uint *)((int)this + 0x20) <= (uint)uVar1 - *(uint *)((int)this + 8))) {
      _Var2 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)this = (int)_Var2;
      uVar1 = F_00427d90();
      *(ulonglong *)((int)this + 8) = uVar1;
      uVar1 = F_00427e30();
      *(ulonglong *)((int)this + 0x10) = uVar1;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf1 */
uint F_00c0cce0(unsigned int gen_a0)
{
  GEN_ENTER(0xc0cce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 SVar1;
  undefined1 SVar2;
  undefined1 SVar3;
  undefined1 SVar4;
  undefined1 SVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined4 * puVar10;
  
  puVar10 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar10 != (undefined4 *)0x0) {
    SVar1 = this[0x1b];
    SVar2 = this[0x1a];
    SVar3 = this[0x19];
    SVar4 = this[0x18];
    uVar6 = *(undefined2 *)(this + 0x14);
    uVar7 = *(undefined2 *)(this + 0x12);
    uVar8 = *(undefined2 *)(this + 0x10);
    uVar9 = *(undefined2 *)(this + 0x16);
    SVar5 = this[0xd];
    *(undefined *)((int)puVar10 + 6) = this[6];
    *(undefined1 *)((int)puVar10 + 7) = 0;
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 1;
    *(undefined1 *)((int)puVar10 + 0xe) = 1;
    *(undefined2 *)(puVar10 + 4) = uVar8;
    *(undefined2 *)((int)puVar10 + 0x12) = uVar7;
    *(undefined2 *)(puVar10 + 5) = uVar6;
    *(undefined *)(puVar10 + 6) = SVar4;
    *(undefined2 *)((int)puVar10 + 0x16) = uVar9;
    *(undefined *)((int)puVar10 + 0x19) = SVar3;
    *(undefined *)((int)puVar10 + 0xd) = SVar5;
    *(undefined2 *)(puVar10 + 1) = 0x1680;
    *puVar10 = (*(undefined * PTR32 (*)[5])REFP(0x110e79c));
    *(undefined *)((int)puVar10 + 0x1a) = SVar2;
    *(undefined *)((int)puVar10 + 0x1b) = SVar1;
    return (uint)puVar10;
  }
  return 0;
}

/* ref: Client::Network::Socket::RUDP2::SYNSegment::vf0 */
uint F_00c0cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x110e70c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c0cdf0 */
byte F_00c0cdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0cdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce10 */
byte F_00c0ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce40 */
byte F_00c0ce40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc0ce40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c0ce80 */
uint F_00c0ce80(unsigned int gen_a0)
{
  GEN_ENTER(0xc0ce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c0ce90 */
uint F_00c0ce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0ce90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c0cea0 */
uint F_00c0cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc0cea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

