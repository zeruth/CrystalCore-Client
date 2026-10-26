#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00b72970 */
unsigned int F_00b72970(unsigned int gen_a0)
{
  GEN_ENTER(0xb72970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)((int)this + 0x154);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  if (0.0 < fVar1) {
    fVar2 = *(float *)((int)this + 0x100);
    fVar3 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    (*(float *)(gen_frame + 0xc)) = fVar2;
    (*(float *)(gen_frame + 0x14)) = fVar3;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    if ((float10)fVar3 < (float10)fVar1) {
      fVar1 = (float)((float10)0 - (float10)fVar2);
      (*(float *)(gen_frame + 0x18)) = fVar1;
      fVar6 = F_00aae710(fVar1);
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((fVar6 * (float10)(*(float *)(gen_frame + 0x14))) / (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0xc)))));
    }
    fVar1 = *(float *)((int)this + 0x118);
    pfVar5 = (float *)((int)this + 0x118);
    (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x18));
    if ((float10)(*(float *)(gen_frame + 0x18)) < (float10)fVar1) {
      pfVar5 = &(*(float *)(gen_frame + 0xc));
    }
    if (!((float10)*(float *)((int)this + 0x114) < (float10)*pfVar5)) {
      pfVar5 = (float *)((int)this + 0x114);
    }
    *(float *)((int)this + 0x100) = *pfVar5;
  }
  fVar2 = *(float *)((int)this + 0x120);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar1 = *(float *)((int)this + 0x128);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar7 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  pfVar5 = &(*(float *)(gen_frame + 0xc));
  fVar2 = ((float)GEN_TOF((((float10)fVar2 * fVar6) * fVar7)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar3 = *(float *)((int)this + 0x124);
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)*(double *)&REFG(undefined, 0x10943d8))));
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar4 = (float)((float10)fVar4 * (float10)REFG(double, 0x1094800));
  (*(float *)(gen_frame + 0xc)) = fVar4;
  if (!((float10)fVar4 < (float10)1)) {
    pfVar5 = &(*(float *)(gen_frame + 0x14));
  }
  fVar1 = (float)((float10)fVar2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar8 = F_00aae710(fVar1);
  fVar1 = (float)(fVar8 * (float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar8 = F_00aae710(fVar1);
  fVar1 = *(float *)((int)this + 300);
  *(float *)((int)this + 0x128) = (float)fVar8;
  fVar2 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  fVar2 = (float)((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10943d8));
  (*(float *)(gen_frame + 0xc)) = fVar2;
  pfVar5 = &(*(float *)(gen_frame + 0xc));
  fVar2 = (float)((float10)fVar2 * (float10)REFG(double, 0x1094800));
  (*(float *)(gen_frame + 0xc)) = fVar2;
  if (!((float10)fVar2 < (float10)1)) {
    pfVar5 = &(*(float *)(gen_frame + 0x14));
  }
  fVar6 = F_00aae710(((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar6 * (float10)fVar3) * fVar7))) - (float10)fVar1))))
  ;
  fVar6 = F_00aae710((float)(fVar6 * (float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x10))));
  *(float *)((int)this + 300) = (float)fVar6;
  return 0;
}

/* ref: FUN_00b72b50 */
uint F_00b72b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb72b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float fVar10;
  
  fVar10 = *param_3;
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar10 - (float10)fVar1);
  fVar2 = param_3[1];
  fVar3 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = param_3[2];
  fVar5 = param_2[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar10 - (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar10 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0xfc) = fVar10;
  fVar10 = F_00aae920(&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(-(float10)fVar10));
  pfVar7 = (float *)((int)this + 0x118);
  pfVar8 = (float *)((int)this + 0x114);
  pfVar6 = &(*(float *)(gen_frame + 0x2c));
  if (!((float10)((float)GEN_TOF(-(float10)fVar10)) < (float10)*pfVar7)) {
    pfVar6 = pfVar7;
  }
  if (!((float10)*pfVar8 < (float10)*pfVar6)) {
    pfVar6 = pfVar8;
  }
  fVar1 = *(float *)((int)this + 0x120);
  fVar10 = *pfVar6;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1080228);
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  *(float *)((int)this + 0x100) = fVar10;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) +
                 ((float10)fVar1 * fVar9) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar10 = ((float)GEN_TOF(((fVar9 * (float10)*(float *)((int)this + 0x124)) * (float10)REFG(double, 0x1088108) +
                  (float10)fVar10)));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  if ((float10)fVar10 < (float10)*pfVar7) {
    pfVar7 = &(*(float *)(gen_frame + 0x2c));
  }
  if ((float10)*pfVar8 < (float10)*pfVar7) {
    pfVar8 = pfVar7;
  }
  fVar10 = *pfVar8;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x10a509c));
  F_00b6a690(param_1,&(*(float *)(gen_frame + 0x10)),fVar1,GEN_TOF(gen_bits2f((uint)gen_fl2bits(fVar10) ^ REFG(uint, 0x10920d0))));
  return param_1;
}

/* ref: FUN_00b72ca0 */
uint F_00b72ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb72ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  float fVar12;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_3;
  fVar12 = *param_7;
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_2;
  fVar1 = *param_6;
  (*(float * PTR32 *)(gen_frame + 0x24)) = param_6;
  (*(float * PTR32 *)(gen_frame + 0x28)) = param_7;
  (*(float *)(gen_frame + 0x58)) = param_5;
  (*(float *)(gen_frame + 0x70)) = 0.0;
  (*(float *)(gen_frame + 0x74)) = 0.0;
  (*(float *)(gen_frame + 0x78)) = param_5;
  F_00b6a690(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x70)),fVar1,fVar12);
  fVar12 = *(*(float * PTR32 *)(gen_frame + 0x2c));
  fVar1 = *param_4;
  (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x5c)) = 0.0;
  fVar12 = (float)((float10)fVar12 - (float10)fVar1);
  (*(float *)(gen_frame + 0x70)) = fVar12;
  fVar1 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x2c))[1] - (float10)param_4[1]);
  (*(float *)(gen_frame + 0x74)) = fVar1;
  pfVar6 = &(*(float *)(gen_frame + 0x54));
  fVar2 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x2c))[2] - (float10)param_4[2]);
  (*(float *)(gen_frame + 0x78)) = fVar2;
  (*(float *)(gen_frame + 0x30)) = fVar12;
  (*(float *)(gen_frame + 0x34)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) / ((float10)REFG(float, 0x133d290) / (float10)*(double *)&REFG(undefined, 0x10944e0)))));
  (*(float *)(gen_frame + 0x54)) = fVar3;
  if (!((float10)fVar3 < (float10)1)) {
    pfVar6 = &(*(float *)(gen_frame + 0x8c));
  }
  if (!(0.0 < *pfVar6)) {
    pfVar6 = &(*(float *)(gen_frame + 0x5c));
  }
  F_0046f390(&(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x60)) = (float)((float10)REFG(float, 0x1302c88) * (float10)(*(float *)(gen_frame + 0x74)) -
                    (float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0x78)));
  (*(float *)(gen_frame + 0x64)) = (float)((float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x78)) -
                    (float10)(*(float *)(gen_frame + 0x70)) * (float10)REFG(float, 0x1302c88));
  (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x70)) * (float10)REFG(float, 0x1302c84) -
                    (float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x74)));
  fVar12 = (float)((float10)*pfVar6 * (float10)*(double *)&REFG(undefined, 0x10f4958) -
                  (float10)*(double *)&REFG(undefined, 0x10f4950));
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  uVar5 = F_0046f390(&(*(float *)(gen_frame + 0x60)));
  F_004ef1c0(((undefined1 *)(gen_frame + 0x90)),uVar5,fVar12);
  F_004eea10(&(*(float *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x90)));
  iVar4 = *(int *)(param_1 + 0xd0);
  fVar12 = *(float *)(iVar4 + 0xa4);
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  fVar1 = *(float *)(iVar4 + 0xa8);
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar12 = ((float)GEN_TOF((((float10)fVar12 * (float10)REFG(double, 0x1088108)) / (float10)fVar1)));
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  fVar7 = F_00b6d440(fVar12,&(*(float *)(gen_frame + 0x30)),1,(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x5c)) = (float)fVar7;
  fVar12 = *((float *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xa4)));
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  fVar12 = (float)((float10)fVar12 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x8c)) = fVar12;
  fVar7 = F_00b6d440(fVar12,&(*(float *)(gen_frame + 0x30)),0,(*(float *)(gen_frame + 0x58)));
  fVar12 = *(float *)(param_1 + 0x104);
  (*(float *)(gen_frame + 0x8c)) = (float)fVar7;
  if ((GEN_ISNAN(fVar12) == (GEN_ISNAN(fVar12) || fVar12 == 0.0)) ||
     (fVar12 = *(float *)(param_1 + 0x108), GEN_ISNAN(fVar12) == (GEN_ISNAN(fVar12) || fVar12 == 0.0))) {
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x30));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x34));
    (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x38));
    F_0046f390(&(*(float *)(gen_frame + 0x60)));
    F_0046f390(&(*(float *)(gen_frame + 0x70)));
    fVar7 = (float10)(*(float *)(gen_frame + 0x74));
    fVar8 = (float10)(*(float *)(gen_frame + 0x64));
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1090708);
    fVar9 = (float10)(*(float *)(gen_frame + 0x70));
    pfVar6 = &(*(float *)(gen_frame + 0x54));
    fVar10 = (float10)(*(float *)(gen_frame + 0x60));
    fVar11 = (float10)(*(float *)(gen_frame + 0x78));
    fVar12 = ((float)GEN_TOF((fVar11 * (float10)(*(float *)(gen_frame + 0x68)) + (fVar8 * fVar7 + fVar10 * fVar9))));
    (*(float *)(gen_frame + 0x54)) = fVar12;
    if (!((float10)fVar12 < (float10)1)) {
      pfVar6 = &(*(float *)(gen_frame + 0x1c));
    }
    if (!(REFG(float, 0x1090708) < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x20));
    }
    (*(float *)(gen_frame + 0x70)) = (float)(fVar11 * fVar8 - fVar7 * (float10)(*(float *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * fVar9 - fVar10 * fVar11);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar7 * fVar10 - fVar8 * fVar9);
    fVar12 = F_00aae920(&(*(float *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(ABS((float10)fVar12)));
    fVar12 = (float)((float10)((float)GEN_TOF(ABS((float10)fVar12))) + (float10)*(double *)&REFG(undefined, 0x1094620));
    (*(float *)(gen_frame + 0x88)) = fVar12;
    fVar7 = F_00b6b230((*(float *)(gen_frame + 0x8c)),(*(float *)(gen_frame + 0x5c)),fVar12);
    (*(float *)(gen_frame + 0x8c)) = (float)fVar7;
    fVar7 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,(float10)*pfVar6);
    (*(float *)(gen_frame + 0x88)) = (float)fVar7;
    if (((float10)(*(float *)(gen_frame + 0x8c)) < (float10)(float)fVar7) &&
       (fVar12 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x78)) * (float10)(*(float *)(gen_frame + 0x78)) +
                        ((float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0x70)) +
                        (float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x74)))))), (*(float *)(gen_frame + 0x88)) = fVar12,
       (float10)REFG(float, 0x10947f8) < (float10)fVar12)) {
      fVar12 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x8c))) ^ REFG(uint, 0x10920d0));
      uVar5 = F_0046f390(&(*(float *)(gen_frame + 0x70)));
      F_004ef1c0(((undefined1 *)(gen_frame + 0x90)),uVar5,fVar12);
      pfVar6 = (float *)F_0046f390(&(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x30)) = *pfVar6;
      (*(float *)(gen_frame + 0x34)) = pfVar6[1];
      (*(float *)(gen_frame + 0x38)) = pfVar6[2];
      pfVar6 = (float *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x90)));
      fVar12 = *pfVar6;
      (*(float *)(gen_frame + 0x60)) = fVar12;
      fVar1 = pfVar6[1];
      (*(float *)(gen_frame + 0x64)) = fVar1;
      fVar2 = pfVar6[2];
      (*(float *)(gen_frame + 0x68)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                     ((float10)fVar12 * (float10)fVar12 + (float10)fVar1 * (float10)fVar1))));
      (*(float *)(gen_frame + 0x88)) = fVar3;
      fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
      (*(float *)(gen_frame + 0x88)) = fVar3;
      fVar7 = (float10)fVar3;
      if ((float10)REFG(float, 0x10947f8) < fVar7) {
        fVar8 = (float10)(*(float *)(gen_frame + 0x58));
        (*(float *)(gen_frame + 0x70)) = (float)(fVar8 * (float10)fVar12);
        (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar1 * fVar8);
        (*(float *)(gen_frame + 0x78)) = (float)(fVar8 * (float10)fVar2);
        fVar12 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)fVar12) / fVar7)));
        (*(float *)(gen_frame + 0x60)) = fVar12;
        fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar8) / fVar7)));
        (*(float *)(gen_frame + 0x64)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)fVar2) / fVar7)));
        (*(float *)(gen_frame + 0x68)) = fVar2;
        (*(float *)(gen_frame + 0x40)) = fVar12;
        (*(float *)(gen_frame + 0x44)) = fVar1;
        (*(float *)(gen_frame + 0x48)) = fVar2;
      }
    }
  }
  else {
    pfVar6 = (float *)F_00b6ea90(param_1,&(*(float *)(gen_frame + 0x70)),(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x30)),*(*(float * PTR32 *)(gen_frame + 0x24)),*(*(float * PTR32 *)(gen_frame + 0x28)),
                                   (float)fVar7,(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x40)) = *pfVar6;
    (*(float *)(gen_frame + 0x44)) = pfVar6[1];
    (*(float *)(gen_frame + 0x48)) = pfVar6[2];
  }
  fVar12 = F_00aae900(&(*(float *)(gen_frame + 0x40)));
  *(*(float * PTR32 *)(gen_frame + 0x24)) = fVar12;
  fVar12 = F_00aae920(&(*(float *)(gen_frame + 0x40)));
  *(*(float * PTR32 *)(gen_frame + 0x28)) = fVar12;
  fVar12 = *(*(float * PTR32 *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x40)));
  fVar1 = (*(float * PTR32 *)(gen_frame + 0x2c))[1];
  (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)fVar1);
  fVar2 = (*(float * PTR32 *)(gen_frame + 0x2c))[2];
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x48)));
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float * PTR32 *)(gen_frame + 0x18))[1] = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)fVar1);
  (*(float * PTR32 *)(gen_frame + 0x18))[2] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x48)));
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return (uint)pfVar6;
}

/* ref: FUN_00b732f0 */
unsigned int F_00b732f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb732f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  fVar5 = (*(float * PTR32 *)&gen_args[1])[1];
  fVar1 = (*(float * PTR32 *)&gen_args[2])[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar5 - (float10)fVar1);
  fVar2 = (*(float * PTR32 *)&gen_args[1])[2];
  fVar3 = (*(float * PTR32 *)&gen_args[2])[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar5 - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar5 = F_00aae900(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x38)) = fVar5;
  fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))))));
  (*(float *)(gen_frame + 0x20)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar5 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  if ((*(int *)&gen_args[4]) == 3) {
LAB_00b73398: ;
    if (*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) <= 0.0) {
      fVar4 = (float10)(*(float *)(gen_frame + 0x38));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar5 - fVar4);
      fVar4 = F_00aae710((float)((float10)fVar5 - fVar4));
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(ABS(fVar4)));
      if (*(double *)&REFG(undefined, 0x10f4960) < (double)((float)GEN_TOF(ABS(fVar4)))) {
        (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) = REFG(float, 0x10f3968);
      }
    }
LAB_00b733e4: ;
    if (REFG(char, 0x1375c50) == '\0') goto LAB_00b73401;
  }
  else {
    if ((*(int *)&gen_args[4]) != 4) {
      if ((*(int *)&gen_args[4]) != 5) goto LAB_00b73401;
      goto LAB_00b73398;
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a5))) == '\0') goto LAB_00b733e4;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) = REFG(float, 0x10f3968);
  (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
LAB_00b73401: ;
  F_00b6f180((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),(*(float * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return 0;
}

/* ref: FUN_00b73430 */
byte F_00b73430(unsigned int gen_a0)
{
  GEN_ENTER(0xb73430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  byte local_5;
  
  bVar2 = 1;
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(int * PTR32, 0x1379694));
    if ((char)uVar1 != '\0') {
      *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0x40);
      *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0x48);
      *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x70);
      *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0x74);
      *(undefined4 *)((int)this + 0x188) = *(undefined4 *)((int)this + 0x78);
      if (*(char *)((int)this + 400) != '\0') {
        ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
      }
      goto LAB_00b734da;
    }
  }
  local_5 = 0;
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x180);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x184);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x188);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x170);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x174);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x178);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  bVar2 = local_5;
LAB_00b734da: ;
  *(bool *)((int)this + 400) = REFG(int * PTR32, 0x1379694) == (int *)0x0;
  return bVar2;
}

/* ref: FUN_00b73600 */
uint F_00b73600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb73600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float local_10;
  int local_c;
  
  uVar7 = param_2;
  uVar3 = F_00ab11c0();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar3 = F_00b6bf70(param_1);
  if (uVar3 == 3) {
    local_c = 2;
  }
  else if (uVar3 == 4) {
    local_c = 3;
  }
  else {
    local_c = 0;
  }
  fVar1 = *(float *)((int)param_1 + 0x120);
  fVar2 = *(float *)((int)param_1 + 0x124);
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  uVar3 = REFG(undefined4, 0x137104c);
  if (REFG(undefined4, 0x137104c) == 0) goto LAB_00b737ee;
  uVar4 = F_00b6a870();
  iVar8 = 0;
  local_10 = REFG(float, 0x1087f04);
  iVar5 = 2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
  case 4: ;
    iVar5 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar5 = 1;
  }
  if (uVar4 == 1) {
LAB_00b736c7: ;
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x6b;
LAB_00b736d2: ;
    if (uVar4 != 0) goto LAB_00b736d6;
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 == 3) goto LAB_00b736c7;
      goto LAB_00b736d2;
    }
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x67;
LAB_00b736d6: ;
    uVar6 = F_00414500(*(undefined4 *)(uVar3 + 0x10),iVar8);
    if (*(int *)(uVar6 + 0x14) != 0) {
      local_10 = REFG(float, 0x1090708);
    }
  }
  iVar8 = 0;
  param_2 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
  iVar5 = 2;
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
  case 4: ;
    iVar5 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar5 = 1;
  }
  if (uVar4 == 1) {
LAB_00b73745: ;
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x6c;
LAB_00b73750: ;
    if (uVar4 != 0) goto LAB_00b73754;
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 == 3) goto LAB_00b73745;
      goto LAB_00b73750;
    }
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x68;
LAB_00b73754: ;
    uVar7 = F_00414500(*(undefined4 *)(uVar3 + 0x10),iVar8);
    if (*(int *)(uVar7 + 0x14) != 0) {
      param_2 = (uint)gen_fl2bits(REFG(float, 0x1090708));
    }
  }
  if ((char)param_3 != '\0') {
    param_2 = 0;
  }
  if ((local_c == 1) || (local_c == 3)) {
    F_00b6f4c0(param_1,uVar4,local_10,GEN_TOF(gen_bits2f(param_2)),uVar3);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x120) = 0;
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    F_00b6f710(param_1,uVar4,local_10,GEN_TOF(gen_bits2f(param_2)),uVar3);
  }
LAB_00b737ee: ;
  if (((GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
      (fVar1 = *(float *)((int)param_1 + 0x120), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))) &&
     ((GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0) ||
      (fVar1 = *(float *)((int)param_1 + 0x124), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))))) {
    *(undefined1 *)((int)param_1 + 0x1a5) = 0;
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x1a5) = 1;
  return 1;
}

/* ref: FUN_00b73870 */
uint F_00b73870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb73870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  uVar5 = F_00b6bf70(this);
  uVar7 = *(uint *)((int)this + 0x138);
  *(uint *)((int)this + 0x134) = uVar5;
  if (uVar7 != uVar5) {
    iVar9 = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x2;
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0: ;
    case 4: ;
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
      break;
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x1;
    }
    pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0: ;
    case 4: ;
      iVar9 = 0;
      break;
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      iVar9 = 1;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x2c)) == (undefined *)iVar9) {
      if ((((uVar5 == 4) || (uVar5 == 3)) || (uVar5 == 6)) ||
         (((uVar5 == 5 || (uVar7 == 4)) || ((uVar7 == 3 || ((uVar7 == 6 || (uVar7 == 5)))))))) {
        *(undefined4 *)((int)this + 0x154) = REFG(float, 0x10f3968);
      }
      if (uVar5 == 3) {
        fVar13 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) -
                        (float10)*(float *)((int)this + 0x70))));
        (*(float *)(gen_frame + 0x10)) = fVar13;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) -
                       (float10)*(float *)((int)this + 0x74))));
        (*(float *)(gen_frame + 0x14)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) -
                       (float10)*(float *)((int)this + 0x78))));
        (*(float *)(gen_frame + 0x18)) = fVar2;
        fVar10 = (float10)fVar1;
        fVar11 = (float10)fVar13;
        fVar12 = (float10)fVar2;
        fVar13 = ((float)GEN_TOF((fVar12 * fVar12 + (fVar11 * fVar11 + fVar10 * fVar10))));
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar13)));
        fVar13 = ((float)GEN_TOF(SQRT((float10)fVar13)));
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar13)));
        *(undefined1 *)((int)this + 0x244) = 0;
        *(float *)((int)this + 0x240) = fVar13;
      }
      if ((*(int *)((int)this + 0x138) == 3) && (*(char *)((int)this + 0x244) != '\0')) {
        *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)this + 0x240);
      }
      uVar8 = REFG(float, 0x10f3964);
      if ((*(int *)((int)this + 0x134) == 5) ||
         (uVar8 = REFG(float, 0x10f3980), *(int *)((int)this + 0x138) == 5)) {
        *(undefined4 *)((int)this + 0x154) = uVar8;
      }
    }
    else {
      if (*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8) != (undefined *)0x0) {
        F_004ea820(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8),0x1e);
      }
      *(undefined4 *)((int)this + 0x154) = REFG(float, 0x1088068);
      if (pvVar3 == (undefined *)0x0) {
        *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0xf0);
        *(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)this + 0x100);
        *(undefined4 *)((int)this + 0x148) = *(undefined4 *)((int)this + 0xe4);
        F_00b724f0(this);
        if ((char)param_1 == '\0') {
          fVar10 = F_00b6cce0((int)this + 0x268);
          F_00b6ff90(this,(float)fVar10);
        }
        else {
          F_00b6ff90(this,*(float *)((int)this + 0xf8));
        }
      }
      else if (pvVar3 == (undefined *)0x1) {
        F_00b725f0(GEN_TOF(this));
        if ((char)param_1 == '\0') {
          F_00b6ff90(this,*(float *)((int)this + 0x140));
          fVar13 = *(float *)((int)this + 0x148);
          uVar8 = ((undefined4)(uint)(this));
        }
        else {
          F_00b6ff90(this,*(float *)((int)this + 0xf4));
          fVar13 = *(float *)((int)this + 0xe8);
          uVar8 = ((undefined4)(uint)(this));
        }
        F_00b6fde0(uVar8,fVar13,(int)this + 0xe4);
        *(undefined1 *)((int)this + 0x1e0) = 1;
        F_00b6ff40(this,*(float *)((int)this + 0x144));
        pvVar6 = (undefined *)F_00b6afa0();
        pvVar3 = REFG(void * PTR32, 0x1379694);
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar6;
        if (((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (pvVar6 != (undefined *)0x0)) &&
           (bVar4 = F_00b75a10(*(undefined4 *)((int)this + 0x134)), bVar4 != 0)) {
          uVar7 = F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x2c)));
          uVar5 = F_00a5feb0(pvVar3);
          F_0046f4a0(&(*(float *)(gen_frame + 0x10)),uVar5,uVar7);
          fVar13 = F_00aae900(&(*(float *)(gen_frame + 0x10)));
          *(float *)((int)this + 0xfc) = fVar13;
        }
        uVar7 = F_00a61360(pvVar3,((undefined1 *)(gen_frame + 0x0)));
        *(undefined4 *)((int)this + 0x1f0) = *(undefined4 *)(uVar7 + 4);
        *(undefined4 *)((int)this + 0x200) = 0;
        *(undefined4 *)((int)this + 0x240) = *(undefined4 *)((int)this + 0xe4);
        *(undefined1 *)((int)this + 0x244) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x244) = 0;
  }
  uVar7 = *(uint *)((int)this + 0x134);
  if ((((uVar7 == 4) || (uVar7 == 3)) || ((uVar7 == 6 || (uVar7 == 5)))) && (REFG(char, 0x1375c50) != '\0'))
  {
    *(undefined4 *)((int)this + 0x154) = REFG(float, 0x1088068);
  }
  return uVar7;
}

/* ref: FUN_00b73bc0 */
unsigned int F_00b73bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb73bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    puVar3 = (undefined4 *)F_00a61360(REFG(void * PTR32, 0x1379694),((undefined1 *)(gen_frame + 0x80)));
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x134))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      if ((char)param_5 == '\0') {
        fVar6 = F_00b6fcb0(this,GEN_TOF(gen_bits2f(param_3[1])));
        fVar1 = (float)fVar6;
        (*(float *)(gen_frame + 0xa8)) = fVar1;
        *(float *)((int)this + 0x1f0) = fVar1;
        param_3[1] = (undefined4)gen_fl2bits(fVar1);
      }
    }
    puVar3 = param_1;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x134))) {
    case 0: ;
      *param_2 = *param_3;
      uVar2 = param_3[1];
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      param_2[1] = uVar2;
      uVar2 = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x94)) = 0;
      param_2[2] = param_3[2];
      (*(undefined4 *)(gen_frame + 0x98)) = uVar2;
      F_00b6a690(((undefined1 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x90)),*(float *)((int)this + 0xfc),GEN_TOF(gen_bits2f(*(uint *)((int)this + 0x100) ^ REFG(uint, 0x10920d0))));
      puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x50)),param_3,((undefined1 *)(gen_frame + 0x80)));
      break;
    case 1: ;
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      puVar3 = (undefined4 *)F_00b6e680(this,((undefined1 *)(gen_frame + 0x30)),param_3,param_5,(*(undefined * PTR32 *)(gen_frame + 0xac)));
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      *(undefined4 *)((int)this + 0x230) = *param_2;
      *(undefined4 *)((int)this + 0x234) = param_2[1];
      *(undefined4 *)((int)this + 0x238) = param_2[2];
      *(undefined1 *)((int)this + 0x205) = 0;
      return 0;
    case 2: ;
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      uVar4 = F_00b6c520(((undefined1 *)(gen_frame + 0x70)),*(float *)((int)this + 0x13c),*(float *)((int)this + 0xfc),
                           *(float *)((int)this + 0x100));
      puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x10)),param_3,uVar4);
      puVar3 = param_2;
      break;
    case 3: ;
    case 5: ;
    case 6: ;
      puVar3 = (undefined4 *)F_00b6a390(((undefined1 *)(gen_frame + 0x20)),param_3,param_4);
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      puVar5 = (undefined4 *)
               F_00b72ca0(this,((undefined1 *)(gen_frame + 0x0)),param_3,param_1,*(float *)((int)this + 0x13c),
                            (int)this + 0xfc,(int)this + 0x100);
      puVar3 = param_2;
      break;
    case 4: ;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      uVar4 = F_00b72b50(this,((undefined1 *)(gen_frame + 0x60)),param_2,param_4);
      puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x40)),param_3,uVar4);
      break;
    default: ;
      goto switchD_00b73c5a_default;
    }
    *puVar3 = *puVar5;
    puVar3[1] = puVar5[1];
    puVar3[2] = puVar5[2];
  }
switchD_00b73c5a_default: ;
  *(undefined1 *)((int)this + 0x205) = 0;
  return 0;
}

/* ref: FUN_00b73ef0 */
unsigned int F_00b73ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb73ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  undefined * this_00;
  bool bVar2;
  float fVar3;
  
  if (*(int *)((int)this + 0xe0) == 1) {
    if (param_1 == 3) {
      fVar3 = *(float *)((int)this + 0x240);
    }
    else {
      fVar3 = *(float *)((int)this + 0xe4);
    }
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar3 = F_00b6c6b0();
    (*(float *)(gen_frame + 0x18)) = fVar3;
    bVar2 = GEN_ISNAN((float10)fVar3) || GEN_ISNAN((float10)0);
    if (bVar2 == (bVar2 || (float10)fVar3 == (float10)0)) {
      (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x14));
      if (((param_1 == 1) && (*(char *)((int)this + 0x1e0) == '\0')) &&
         ((*(int *)((int)this + 0x1e4) == 0 || (!GEN_ISNAN(fVar3) && !(0.0 <= fVar3))))) {
        this_00 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40,(int)this + 0x70);
        fVar3 = F_004bd280(this_00);
        (*(float *)(gen_frame + 0x1c)) = fVar3;
        *(undefined1 *)((int)this + 0x1e0) = 1;
        *(float *)((int)this + 0x13c) = fVar3;
      }
      fVar1 = (float10)(*(float *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) + fVar1);
      F_00b6fe80(this,(float)((float10)(*(float *)(gen_frame + 0x1c)) + fVar1),param_1);
    }
    if (*(char *)((int)this + 0x1e0) != '\0') {
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)((int)this + 0x13c))));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = ((float)GEN_TOF(ABS((float10)fVar3)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      if ((float10)REFG(float, 0x10947f8) < (float10)fVar3) {
        *(undefined1 *)((int)this + 0x1e0) = 1;
        return 0;
      }
      *(undefined1 *)((int)this + 0x1e0) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b74110 */
uint F_00b74110(unsigned int gen_a0)
{
  GEN_ENTER(0xb74110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  undefined * this_00;
  
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)this + 0x10c);
  if (*(int *)((int)this + 0xe0) == 0) {
    *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x110) ^ REFG(uint, 0x10920d0);
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)((int)this + 0xe0) - 1;
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)this + 0x110);
    }
  }
  iVar1 = REFG(int, 0x137104c);
  if (REFG(int, 0x137104c) != 0) {
    piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
    bVar3 = F_00ac3640(&REFG(undefined, 0x14bcf40));
    if (bVar3 != 0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x6c))(piVar5);
      if ((char)uVar4 != '\0') {
        *(float *)((int)this + 0x108) =
             ((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) * (float10)REFG(double, 0x1088108))));
      }
    }
    uVar4 = F_00b6d1a0(this,iVar1);
    iVar2 = REFG(int, 0x1379694);
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        *(float *)((int)this + 0xfc) =
             ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc))))
        ;
        F_00b6ff40(this,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) +
                                 (float10)*(float *)((int)this + 0x100)))));
        uVar4 = F_00b6d050(this_00);
        return uVar4;
      }
      if (uVar4 - 2 != 0) {
        *(float *)((int)this + 0xfc) =
             ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc))))
        ;
        F_00b6ff40(this,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) +
                                 (float10)*(float *)((int)this + 0x100)))));
        return uVar4 - 2;
      }
      uVar4 = 0;
      if ((REFG(int, 0x1379694) != 0) && (*(int *)((int)this + 0xe0) == 0)) {
        bVar3 = F_005374c0(&REFG(undefined4, 0x1375bc0));
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 == 0) {
          *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(iVar2 + 0xb0);
        }
      }
      *(float *)((int)this + 0xfc) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc))));
      F_00b6ff40(this,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) +
                               (float10)*(float *)((int)this + 0x100)))));
      return uVar4;
    }
    F_00b70bd0(this,(uint)(*(int *)((int)this + 0xe0) == 0),iVar1);
    *(float *)((int)this + 0xfc) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc))));
    F_00b6ff40(this,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) +
                             (float10)*(float *)((int)this + 0x100)))));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: Client::Game::Camera::vf1 */
unsigned int F_00b742e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb742e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  undefined * pCVar3;
  undefined4 uVar4;
  float fVar5;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  F_00b6a060(this);
  *(undefined4 *)(this + 0x268) = 0x57;
  *(undefined4 *)(this + 0x26c) = 0x58;
  *(undefined4 *)(this + 0x270) = 0x59;
  *(undefined4 *)(this + 0x25c) = 0x5a;
  *(undefined4 *)(this + 0x260) = 0x5b;
  *(undefined4 *)(this + 0x264) = 0x5c;
  *(undefined4 *)(this + 0x274) = 0x5d;
  *(undefined4 *)(this + 0x278) = 0x5e;
  *(undefined4 *)(this + 0x27c) = 0x5f;
  F_00aaf650(this + 0x1a8,this + 0x194,99);
  *(undefined4 *)(this + 0x1bc) = 100;
  *(undefined4 *)(this + 0x1c0) = 0x65;
  *(undefined4 *)(this + 0x1c4) = 0x66;
  if (REFG(int, 0x137104c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1a8) + 8))))(this + 0x1a8,REFG(int, 0x137104c));
  }
  if (REFG(int, 0x137104c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(this + 0x264));
    uVar4 = *(undefined4 *)(uVar2 + 0x14);
  }
  *(undefined4 *)(this + 0xe4) = uVar4;
  if (REFG(int, 0x137104c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(this + 0x25c));
    uVar4 = *(undefined4 *)(uVar2 + 0x14);
  }
  *(undefined4 *)(this + 0x100) = uVar4;
  if (REFG(int, 0x137104c) == 0) {
    fVar5 = 0.0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),*(undefined4 *)(this + 0x260));
    fVar5 = *(float *)(uVar2 + 0x14);
  }
  *(undefined4 *)(this + 0xf4) = REFG(float, 0x133d298);
  pCVar3 = this + 0xf8;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  *(float *)pCVar3 = REFG(float, 0x133d29c);
  fVar1 = *(float *)pCVar3;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  if ((float10)fVar5 < (float10)fVar1) {
    pCVar3 = (undefined *)&(*(float *)(gen_frame + 0x0));
  }
  if (!((float10)*(float *)(this + 0xf4) < (float10)*(float *)pCVar3)) {
    pCVar3 = this + 0xf4;
  }
  fVar5 = *(float *)pCVar3;
  *(float *)(this + 0xf0) = fVar5;
  *(float *)(this + 0x158) = fVar5;
  F_00b726f0(this);
  F_00b6ffe0(this);
  *(undefined4 *)(this + 0x248) = 0x61;
  *(undefined4 *)(this + 0x24c) = 0x62;
  *(undefined4 *)(this + 0x250) = 0x70;
  *(undefined4 *)(this + 0x254) = 0x71;
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return 0;
}

/* ref: Client::Game::Camera::vf4 */
unsigned int F_00b744d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb744d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xe0) == 0) {
    *(undefined4 *)(in_ecx + 0x108) = 0;
    *(undefined4 *)(in_ecx + 0x104) = 0;
    *(undefined4 *)(in_ecx + 0x100) = 0;
    if (REFG(int, 0x1379694) != 0) {
      *(undefined4 *)(in_ecx + 0xfc) = *(undefined4 *)(REFG(int, 0x1379694) + 0xb0);
    }
  }
  else if (*(int *)(in_ecx + 0xe0) == 1) {
    F_00b6ffe0(in_ecx);
    return 0;
  }
  return 0;
}

/* ref: FUN_00b74520 */
unsigned int F_00b74520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb74520u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * PTR32 * ppvVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  uVar3 = F_00b6bf70(param_1);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    *(undefined4 *)((int)param_1 + 0x100) = 0;
  case 4: ;
    F_00b703c0(param_1);
    break;
  case 1: ;
  case 2: ;
    F_00b702c0(param_1);
    break;
  case 3: ;
  case 6: ;
    F_00b70330(param_1,uVar3);
  }
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  *(undefined4 *)((int)param_1 + 0x108) = 0;
  if ((0 < (int)param_2) && ((int)param_2 < 3)) {
    pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0xe4);
    ppvVar4 = (undefined * PTR32 *)((int)param_1 + 0xec);
    pvVar2 = *ppvVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar2)))) {
      ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    if (!((float10)*(float *)((int)param_1 + 0xe8) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppvVar4))))) {
      ppvVar4 = (undefined * PTR32 *)((int)param_1 + 0xe8);
    }
    *(undefined * PTR32 *)((int)param_1 + 0xe4) = *ppvVar4;
    *(undefined * PTR32 *)((int)param_1 + 0x13c) = pvVar1;
    F_00b6ffe0(param_1);
  }
  return 0;
}

/* ref: Client::Game::Camera::vf2 */
byte F_00b745f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb745f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 CVar4;
  byte bVar5;
  undefined * this_00;
  undefined4 * puVar6;
  uint uVar7;
  float fVar8;
  
  iVar2 = REFG(int, 0x1379694);
  (*(int *)(gen_frame + 0x40)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    cVar1 = *(char *)(REFG(int, 0x1379694) + 0x2f04);
    if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x01')) {
      CVar4 = (undefined1)0x1;
    }
    else {
      CVar4 = (undefined1)0x0;
    }
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4c)) + 0)) = CVar4;
    (*(float *)(gen_frame + 0x4c)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x4c)), 1, 3),CVar4));
    this[0x1fc] = (undefined1)((byte)this[0x1fc] | CVar4 != this[0x204]);
    this[0x204] = CVar4;
    if (this[0x1fc] != (undefined1)0x0) {
      bVar5 = F_00b6a2d0(this,iVar2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4c))));
      this[0x1fc] = (undefined1)(bVar5 == 0);
    }
  }
  bVar5 = F_00b73430(this);
  if ((bVar5 != 0) && (REFG(int, 0x14bcc80) != 4)) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x70);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x74);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x78);
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x40);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x44);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x48);
    F_00ab1160(this + 0x154,1);
    F_00b74110(this);
    F_00b73870(this,(uint)(byte)this[500]);
    iVar2 = *(int *)(this + 0x134);
    iVar3 = *(int *)(this + 0x138);
    *(int *)(this + 0x138) = iVar2;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x48)) + 0)) = iVar3 != iVar2;
    (*(undefined4 *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x48)), 1, 3),iVar3 != iVar2);
    if (iVar2 == 3) {
      fVar8 = *(float *)(this + 0x240);
    }
    else {
      fVar8 = *(float *)(this + 0xe4);
    }
    (*(float *)(gen_frame + 0x4c)) = fVar8;
    F_00b74020(this,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),fVar8,iVar2);
    this_00 = (undefined *)F_00b6afa0();
    if ((this_00 == (undefined *)0x0) ||
       (((iVar2 = *(int *)(this + 0x134), iVar2 != 4 && (iVar2 != 3)) &&
        ((iVar2 != 6 && (iVar2 != 5)))))) {
      this[0x220] = (undefined1)0x0;
    }
    else if (this[0x220] == (undefined1)0x0) {
      puVar6 = (undefined4 *)F_00a61360(this_00,((undefined1 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar6[2];
    }
    else {
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x210);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x214);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x218);
    }
    F_00b73bc0(this,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x48)));
    F_00b6f8d0(this);
    F_00b6be10(this,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)));
    fVar8 = *(float *)(this + 0x154);
    (*(float *)(gen_frame + 0x44)) = fVar8;
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar8 <= *(float *)&REFG(undefined, 0x1088114))) {
      puVar6 = (undefined4 *)F_00b6e1f0(&(*(undefined4 *)(gen_frame + 0x10)),this + 0x1d0,&(*(undefined4 *)(gen_frame + 0x30)),fVar8);
      (*(undefined4 *)(gen_frame + 0x30)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x34)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x38)) = puVar6[2];
    }
    *(undefined4 *)(this + 0x1d0) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x1d4) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x1d8) = (*(undefined4 *)(gen_frame + 0x38));
    if ((*(int *)(gen_frame + 0x40)) != 0) {
      uVar7 = F_00b6eda0(this,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x4c)),(*(int *)(gen_frame + 0x40)));
      *(uint *)(this + 0x1e4) = uVar7;
    }
    if (*(int *)(this + 0x134) - 1U < 2) {
      puVar6 = (undefined4 *)F_00b708a0(this,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x20)));
      (*(undefined4 *)(gen_frame + 0x20)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x24)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar6[2];
    }
    F_00b732f0(this,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x48)),*(undefined4 *)(this + 0x134));
    *(undefined4 *)(this + 0x40) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x44) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x48) = (*(undefined4 *)(gen_frame + 0x38));
    *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 2;
    *(undefined4 *)(this + 0x70) = (*(undefined4 *)(gen_frame + 0x20));
    *(undefined4 *)(this + 0x74) = (*(undefined4 *)(gen_frame + 0x24));
    *(undefined4 *)(this + 0x78) = (*(undefined4 *)(gen_frame + 0x28));
    F_00b73500(this);
    F_00b6bc70(this);
    bVar5 = F_00b6ec30(this);
  }
  return bVar5;
}

/* ref: FUN_00b74940 */
uint F_00b74940(unsigned int gen_a0)
{
  GEN_ENTER(0xb74940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b70140((int)this + 600,*(float *)((int)this + 0x100),*(float *)((int)this + 0xf0),
                       *(float *)((int)this + 0xe4));
  return uVar1;
}

/* ref: FUN_00b74970 */
uint F_00b74970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb74970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float fVar2;
  
  if (param_2 == 3) {
    fVar2 = *(float *)(param_1 + 0x240);
  }
  else {
    fVar2 = *(float *)(param_1 + 0xe4);
  }
  uVar1 = F_00b70240(param_1 + 600,*(float *)(param_1 + 0x100),*(float *)(param_1 + 0xf0),fVar2);
  return uVar1;
}

/* ref: FUN_00b749c0 */
uint F_00b749c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb749c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b701c0((int)this + 600,(float)(float10)0,*(float *)((int)this + 0xf0),
                       *(float *)((int)this + 0xe8));
  return uVar1;
}

/* ref: FUN_00b749f0 */
uint F_00b749f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb749f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_00b6bf70(this);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 4: ;
    F_00b749c0(this);
  default: ;
    uVar1 = F_00ab9000(0x35d);
    return uVar1;
  case 1: ;
  case 2: ;
    F_00b74940(this);
  case 3: ;
  case 6: ;
    if (uVar1 == 3) {
      fVar2 = *(float *)((int)this + 0x240);
    }
    else {
      fVar2 = *(float *)((int)this + 0xe4);
    }
    F_00b70240((int)this + 600,*(float *)((int)this + 0x100),*(float *)((int)this + 0xf0),fVar2);
    uVar1 = F_00ab9000(0x35d);
    return uVar1;
  }
}

/* ref: FUN_00b74aa0 */
uint F_00b74aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xb74aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  puVar1 = (undefined4 *)F_00406b90(0x280,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
    F_006906c0(puVar1 + 4);
    *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x10f48ec));
    puVar1[0x6a] = (*(undefined * PTR32 (*)[3])REFP(0x10f48ac));
    *(undefined1 *)(puVar1 + 0x96) = 1;
  }
  *(undefined4 * PTR32 *)this = puVar1;
  pvVar2 = (undefined *)F_00406b90(0x220,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b6d620(pvVar2);
  }
  *(uint *)((int)this + 4) = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x2d0,0,0);
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_00b72030(pvVar2);
    *(uint *)((int)this + 8) = uVar3;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00b74b70 */
uint F_00b74b70(unsigned int gen_a0)
{
  GEN_ENTER(0xb74b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar2 = 0;
    do {
      piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2]));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,3,0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x158);
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
    }
    if (*(int *)((int)this + 0x2c) == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    }
    *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x34))) = *(int *)this + 0x10;
    F_0069c300(REFG(void * PTR32, 0x1371298),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this,uVar4);
  }
  return uVar2;
}

/* ref: FUN_00b74c10 */
uint F_00b74c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb74c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4);
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar2 = 0;
    do {
      piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[uVar2]));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,3,0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x158);
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
    }
    if (*(int *)((int)this + 0x2c) == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    }
    *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x34))) = *(int *)this + 0x10;
    F_0069c300(REFG(void * PTR32, 0x1371298),0);
    *(undefined4 *)((int)this + 0x2c) = 0;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this,uVar4);
  }
  return uVar2;
}

/* ref: Client::Game::LowCutCamera::vf2 */
uint F_00b74cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb74cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b70dc0(this,*(float *)(REFG(int, 0x137104c) + 0x1198));
  return uVar1;
}

/* ref: Client::Game::LowCutCamera::vf7 */
unsigned int F_00b74cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb74cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  
  if (param_1 != 0) {
    F_00b723c0(this,param_1);
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0x78);
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xa4)));
    *(undefined4 *)(this + 0x100) = 0xe0000000;
    *(undefined4 *)(this + 0x218) = uVar1;
    *(undefined4 *)(this + 0x104) = 0;
    *(undefined4 *)(this + 0x108) = 0x34;
    this[0x134] = (undefined1)0x0;
    *(undefined4 *)(this + 0x10c) = 0;
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x114) = 0;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x130) = 0;
    this[0x160] = (undefined1)0x0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined4 *)(this + 0x154) = 0;
    *(undefined4 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
    this[0x18c] = (undefined1)0x0;
    *(undefined4 *)(this + 0x164) = 0;
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    this[0x1b8] = (undefined1)0x0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0;
    this[0x1e4] = (undefined1)0x0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1d4) = 0;
    *(undefined4 *)(this + 0x1cc) = 0;
    *(undefined4 *)(this + 0x1d0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1c8) = 0;
    *(undefined4 *)(this + 0x1d8) = 0;
    *(undefined4 *)(this + 0x1dc) = 0;
    *(undefined4 *)(this + 0x1e0) = 0;
    this[0x210] = (undefined1)0x0;
    *(undefined4 *)(this + 0x1e8) = 0;
    *(undefined4 *)(this + 0x1ec) = 0;
    *(undefined4 *)(this + 0x200) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    *(undefined4 *)(this + 0x1fc) = 0;
    *(undefined4 *)(this + 0x1f0) = 0;
    *(undefined4 *)(this + 500) = 0;
    *(undefined4 *)(this + 0x204) = 0;
    *(undefined4 *)(this + 0x208) = 0;
    *(undefined4 *)(this + 0x20c) = 0;
    this[0x214] = (undefined1)0x0;
  }
  return 0;
}

/* ref: FUN_00b75200 */
uint F_00b75200(unsigned int gen_a0)
{
  GEN_ENTER(0xb75200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  int * piVar3;
  undefined * pvVar4;
  float * pfVar5;
  float * pfVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x795)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    pfVar5 = (float *)F_00cb0910(pvVar4,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  *(float *)((int)this + 0xfc) =
       ((float)GEN_TOF(((fVar7 / (float10)*(double *)&REFG(undefined, 0x1080220)) * (float10)*(double *)&REFG(undefined, 0x1080228))));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x797)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    pfVar5 = (float *)F_00cb0910(pvVar4,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x76e)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    pfVar5 = (float *)F_00cb0910(pvVar4,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x76f)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    pfVar5 = (float *)F_00cb0910(pvVar4,uVar8);
    fVar2 = *pfVar5;
  }
  fVar1 = (*(float *)(gen_frame + 0x4));
  pfVar6 = (float *)((int)this + 0xe8);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  *pfVar6 = fVar1;
  pfVar5 = (float *)((int)this + 0xec);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x8));
  *pfVar5 = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if ((float10)(*(float *)(gen_frame + 0x8)) < (float10)*pfVar5) {
    pfVar5 = &(*(float *)(gen_frame + 0x4));
  }
  if ((float10)*pfVar6 < (float10)*pfVar5) {
    pfVar6 = pfVar5;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  *(float *)((int)this + 0xe4) = *pfVar6;
  *(float *)((int)this + 0x13c) = (*(float *)(gen_frame + 0x8));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x798)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    pfVar5 = (float *)F_00cb0910(pvVar4,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pfVar5 = (float *)((int)this + 0xf8);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if ((float10)(float)(fVar7 / (float10)REFG(double, 0x10944b8)) < (float10)*pfVar5) {
    pfVar5 = &(*(float *)(gen_frame + 0x8));
  }
  if (!((float10)*(float *)((int)this + 0xf4) < (float10)*pfVar5)) {
    pfVar5 = (float *)((int)this + 0xf4);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  *(float *)((int)this + 0xf0) = *pfVar5;
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x796)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
    pfVar5 = (float *)F_00cb0910(pvVar4,uVar8);
    fVar2 = *pfVar5;
  }
  uVar8 = REFG(float, 0x10f38c0);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pfVar5 = (float *)((int)this + 0x118);
  fVar2 = ((float)GEN_TOF(((fVar7 / (float10)*(double *)&REFG(undefined, 0x1080220)) * (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  if ((float10)fVar2 < (float10)*pfVar5) {
    pfVar5 = &(*(float *)(gen_frame + 0x8));
  }
  if (!((float10)*(float *)((int)this + 0x114) < (float10)*pfVar5)) {
    pfVar5 = (float *)((int)this + 0x114);
  }
  *(float *)((int)this + 0x100) = *pfVar5;
  *(undefined4 *)((int)this + 0x2c0) = uVar8;
  *(undefined1 *)((int)this + 0x280) = 0;
  return (uint)pfVar5;
}

/* ref: Client::Game::LobbyCamera::vf7 */
uint F_00b75790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  *(undefined4 *)(this + 0x1b4) = REFG(float, 0x10f3960);
  *(undefined4 *)(this + 0x1b8) = REFG(float, 0x10f396c);
  *(undefined4 *)(this + 0x154) = REFG(float, 0x10928e4);
  piVar4 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),"Lobby");
  *(int * PTR32 *)(this + 0x2c8) = piVar4;
  iVar6 = 0;
  if (piVar4 != (int *)0x0) {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x76f)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    piVar4 = (int *)F_00cb0910(pvVar5,uVar11);
    iVar6 = *piVar4;
  }
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float10)REFG(double, 0x10944b8);
  piVar4 = *(int * PTR32 *)(this + 0x2c8);
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x774)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    piVar4 = (int *)F_00cb0910(pvVar5,uVar11);
    iVar6 = *piVar4;
  }
  fVar9 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float10)REFG(double, 0x10944b8);
  piVar4 = *(int * PTR32 *)(this + 0x2c8);
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x76d)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    piVar4 = (int *)F_00cb0910(pvVar5,uVar11);
    iVar6 = *piVar4;
  }
  fVar10 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = (float10)REFG(double, 0x10944b8);
  piVar4 = *(int * PTR32 *)(this + 0x2c8);
  *(float *)(this + 0x2a0) = (float)(fVar9 / fVar2);
  *(float *)(this + 0x2b0) = (float)(fVar8 / fVar1);
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(float *)(this + 0x290) = (float)(fVar10 / fVar3);
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x775)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4)));
    piVar4 = (int *)F_00cb0910(pvVar5,uVar11);
    iVar6 = *piVar4;
  }
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)&REFG(undefined, 0x14c4ee0) = (float)(fVar8 / (float10)*(double *)&REFG(undefined, 0x1088118));
  uVar7 = F_00b75200(this);
  return uVar7;
}

/* ref: Client::Game::ConfigElementInterface::vf0 */
uint F_00b75950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b75980 */
uint F_00b75980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75980u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b75990 */
uint F_00b75990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75990u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b759a0 */
unsigned int F_00b759a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb759a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)(in_ecx + 1) = 0;
  return 0;
}

/* ref: FUN_00b759c0 */
unsigned int F_00b759c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb759c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)(in_ecx + 1) = 1;
  return 0;
}

/* ref: FUN_00b75a10 */
byte F_00b75a10(unsigned int gen_a0)
{
  GEN_ENTER(0xb75a10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((((param_1 != 4) && (param_1 != 3)) && (param_1 != 6)) && (param_1 != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b75a40 */
unsigned int F_00b75a40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb75a40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xe8) = param_2;
  return 0;
}

/* ref: FUN_00b75a60 */
unsigned int F_00b75a60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb75a60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xec) = param_2;
  return 0;
}

/* ref: FUN_00b75b20 */
uint F_00b75b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb75b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  *(undefined1 *)((int)this + 6) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00b75b50 */
unsigned int F_00b75b50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb75b50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc4) = param_2;
  return 0;
}

/* ref: Client::Game::CameraBase::vf2 */
unsigned int F_00b75b90(void)
{
  GEN_ENTER(0xb75b90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::CameraBase::vf4 */
unsigned int F_00b75ba0(void)
{
  GEN_ENTER(0xb75ba0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::CameraBase::vf7 */
unsigned int F_00b75bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Game::CameraBase::vf8 */
unsigned int F_00b75bc0(void)
{
  GEN_ENTER(0xb75bc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b75bd0 */
uint F_00b75bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_00b75bf0 */
uint F_00b75bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)this);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: Client::Game::ConfigFloat::vf0 */
uint F_00b75c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::CameraBase::vf5 */
float F_00b75c70(unsigned int gen_a0)
{
  GEN_ENTER(0xb75c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  fVar4 = *(float *)(this + 0x74);
  fVar1 = *(float *)(this + 0x44);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 - (float10)fVar1);
  fVar2 = *(float *)(this + 0x78);
  fVar3 = *(float *)(this + 0x48);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = F_00aae920(&(*(float *)(gen_frame + 0x0)));
  return fVar4;
}

/* ref: Client::Game::CameraBase::vf6 */
float F_00b75cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb75cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  fVar4 = *(float *)(this + 0x74);
  fVar1 = *(float *)(this + 0x44);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 - (float10)fVar1);
  fVar2 = *(float *)(this + 0x78);
  fVar3 = *(float *)(this + 0x48);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  return fVar4;
}

/* ref: Client::Game::CameraBase::vf0 */
uint F_00b75d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b75d60 */
uint F_00b75d60(unsigned int gen_a0)
{
  GEN_ENTER(0xb75d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f48ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f48ac));
  *(undefined1 *)((int)this + 600) = 1;
  return (uint)this;
}

/* ref: Client::Game::Camera::vf0 */
uint F_00b75d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::LowCutCamera::vf0 */
uint F_00b75dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::LobbyCamera::vf0 */
uint F_00b75e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b75e40 */
uint F_00b75e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 200) & 0xfffffffe;
  *(uint *)((int)this + 200) = uVar1;
  return uVar1;
}

/* ref: FUN_00b75e60 */
uint F_00b75e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[0x13] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b75e80 */
byte F_00b75e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b75e90 */
unsigned int F_00b75e90(float gen_a0)
{
  GEN_ENTER(0xb75e90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b75eb0 */
unsigned int F_00b75eb0(float gen_a0)
{
  GEN_ENTER(0xb75eb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b75ec0 */
float10 F_00b75ec0(float gen_a0)
{
  GEN_ENTER(0xb75ec0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = (float10)param_1;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1080228);
  uVar2 = (uint)(fVar5 / fVar6);
  fVar7 = (float10)((float)GEN_TOF(ABS(fVar5)));
  fVar1 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar1)) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar1)) || fVar7 == fVar1)) {
    return fVar1;
  }
  uVar3 = uVar2 & 0x80000001;
  bVar4 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar4 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar4) {
    return (float10)(float)(fVar5 - fVar6 * (float10)(int)uVar2);
  }
  return (float10)((float)GEN_TOF((fVar5 - ((float10)(int)uVar2 + (float10)(float)(fVar5 / fVar7)) * fVar6)));
}

/* ref: FUN_00b75f50 */
float F_00b75f50(unsigned int gen_a0)
{
  GEN_ENTER(0xb75f50u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM4_Da = 0;
  
  fVar1 = *param_1;
  fVar2 = (float10)fVar1;
  fVar3 = (float10)param_1[2];
  fVar3 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                               ((float10)0 * (float10)0 + fVar2 * fVar2)))))));
  fVar2 = (float10)0;
  if ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
    return (float)fVar2;
  }
  fVar2 = F_00c4c8d0(in_XMM2_Da,in_XMM3_Da,in_XMM4_Da,
                       (float10)(float)((float10)param_1[2] / fVar3));
  fVar2 = F_00b75ec0((float)fVar2);
  fVar2 = (float10)(float)fVar2;
  if (!(*(float *)&REFG(undefined, 0x1088114) <= fVar1)) {
    fVar2 = -fVar2;
  }
  return (float)fVar2;
}

/* ref: FUN_00b76010 */
unsigned int F_00b76010(float gen_a0)
{
  GEN_ENTER(0xb76010u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b76030 */
unsigned int F_00b76030(float gen_a0)
{
  GEN_ENTER(0xb76030u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b76050 */
uint F_00b76050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  return (&REFG(undefined4, 0x14a9e84))[param_2 * 0x12];
}

/* ref: FUN_00b76070 */
uint F_00b76070(unsigned int gen_a0)
{
  GEN_ENTER(0xb76070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14a9a1c))[param_1];
}

/* ref: FUN_00b76080 */
uint F_00b76080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b760a0 */
byte F_00b760a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb760a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_00a5feb0((undefined *)param_2);
  fVar1 = *(float *)(uVar2 + 4);
  uVar2 = F_00a5feb0(param_1);
  if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(uVar2 + 4))))))) <
      (float10)REFG(float, 0x1087ef8)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b760f0 */
uint F_00b760f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb760f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  pfVar4 = (float *)F_00a5feb0(param_1);
  pfVar5 = (float *)F_00a5feb0(param_2);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar5 - (float10)*pfVar4);
  fVar7 = pfVar5[1];
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar7 - (float10)fVar1);
  fVar2 = pfVar5[2];
  fVar3 = pfVar4[2];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 0)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar5 - (float10)*pfVar4);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar7 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(double *)(gen_frame + 0x18)) = (double)*(float *)((int)param_1 + 0xb0) + (double)param_3;
  fVar7 = F_00b75f50(&(*(float *)(gen_frame + 0x0)));
  fVar7 = (float)((float10)(*(double *)(gen_frame + 0x18)) - (float10)fVar7);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = fVar7;
  (*(double *)(gen_frame + 0x18)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar7),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 0)))));
  fVar6 = F_00b75ec0(fVar7);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = ((float)GEN_TOF(ABS(fVar6)));
  fVar7 = ((float)GEN_TOF((((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = fVar7;
  if ((float10)((float)GEN_TOF(ABS(fVar6))) <= (float10)fVar7) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b761b0 */
uint F_00b761b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb761b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  pfVar4 = (float *)F_00a5feb0(param_1);
  pfVar5 = (float *)F_00a5feb0(param_2);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar5 - (float10)*pfVar4);
  fVar7 = pfVar5[1];
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar7 - (float10)fVar1);
  fVar2 = pfVar5[2];
  fVar3 = pfVar4[2];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 0)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar5 - (float10)*pfVar4);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar7 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(double *)(gen_frame + 0x18)) = (double)*(float *)((int)param_1 + 0xb0) + (double)param_3;
  fVar7 = F_00b75f50(&(*(float *)(gen_frame + 0x0)));
  fVar7 = (float)((float10)(*(double *)(gen_frame + 0x18)) - (float10)fVar7);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = fVar7;
  (*(double *)(gen_frame + 0x18)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar7),(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 0)))));
  fVar6 = F_00b75ec0(fVar7);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = ((float)GEN_TOF(ABS(fVar6)));
  fVar7 = ((float)GEN_TOF((((float10)param_4 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)) = fVar7;
  if ((float10)fVar7 <= (float10)((float)GEN_TOF(ABS(fVar6)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b76280 */
uint F_00b76280(unsigned int gen_a0)
{
  GEN_ENTER(0xb76280u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int * local_10;
  float local_c;
  
  uVar3 = 0;
  local_c = REFG(float, 0x1090998);
  local_10 = (int *)0x0;
  do {
    this = *(int * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + uVar3);
    if ((this != (int *)0x0) && (this != param_1)) {
      uVar1 = ((code *)*(gen_code32 *)(*this + 4))(this);
      if (uVar1 == 1) {
        uVar1 = F_00a5feb0(param_1);
        uVar2 = F_00a5feb0(this);
        fVar4 = F_00aaea30(uVar2,uVar1);
        if ((float10)fVar4 < (float10)local_c) {
          local_10 = this;
          local_c = fVar4;
        }
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 400);
  return (uint)local_10;
}

/* ref: FUN_00b76310 */
uint F_00b76310(unsigned int gen_a0)
{
  GEN_ENTER(0xb76310u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined * local_10;
  float local_c;
  
  local_c = REFG(float, 0x1090998);
  local_10 = (undefined *)0x0;
  uVar3 = 0;
  do {
    this = *(undefined * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + uVar3);
    if ((this != (undefined *)0x0) && (this != param_1)) {
      uVar1 = F_00a5feb0(param_1);
      uVar2 = F_00a5feb0(this);
      fVar4 = F_00aaea30(uVar2,uVar1);
      if ((float10)fVar4 < (float10)local_c) {
        local_10 = this;
        local_c = fVar4;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 400);
  return (uint)local_10;
}

/* ref: FUN_00b76390 */
uint F_00b76390(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76390u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    this = *(undefined * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + uVar4);
    if ((this != (undefined *)0x0) && (this != param_1)) {
      uVar1 = F_00a5feb0(param_1);
      uVar2 = F_00a5feb0(this);
      fVar5 = F_00aaea30(uVar2,uVar1);
      if ((float10)fVar5 <= (float10)param_2) {
        *(undefined * PTR32 *)(param_3 + uVar3 * 4) = this;
        uVar3 = uVar3 + 1;
      }
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 400);
  return uVar3;
}

/* ref: FUN_00b763f0 */
float F_00b763f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb763f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(param_2);
  uVar2 = F_00a5feb0(param_1);
  fVar3 = F_00aaea30(uVar2,uVar1);
  return fVar3;
}

/* ref: FUN_00b76410 */
byte F_00b76410(unsigned int gen_a0)
{
  GEN_ENTER(0xb76410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006c5190(uVar1);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  this = (undefined *)F_006b8c00();
  uVar1 = F_006de750(this);
  piVar2 = (int *)F_00a5f2b0(uVar1);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
    if (uVar3 == 3) {
      return *(int *)(uVar1 + 0x80) == param_1;
    }
  }
  return 0;
}

/* ref: FUN_00b76470 */
uint F_00b76470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb76470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b76490 */
uint F_00b76490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 0x15))) {
  case 1: ;
    iVar1 = param_1;
    break;
  default: ;
    return 0xe0000000;
  case 4: ;
    iVar1 = REFG(int, 0x1379694);
    if (REFG(int, 0x1379694) == 0) {
      return 0xe0000000;
    }
  }
  return *(uint *)(iVar1 + 0x74);
}

/* ref: FUN_00b764d0 */
uint F_00b764d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb764d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return (uint)*(byte *)(param_1 + 0x14);
}

/* ref: FUN_00b764f0 */
uint F_00b764f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb764f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    *param_2 = (uint)(byte)param_1[6];
    param_2[3] = (uint)*(byte *)((int)param_1 + 0x17);
    param_2[1] = *param_1;
    uVar1 = (uint)*(ushort *)((int)param_1 + 0xe);
    param_2[2] = uVar1;
  }
  else {
    uVar1 = param_3 - 1;
    if (uVar1 == 0) {
      *param_2 = (uint)*(byte *)((int)param_1 + 0x1a);
      param_2[3] = (uint)*(byte *)((int)param_1 + 0x19);
      param_2[1] = (uint)(ushort)param_1[4];
      uVar1 = param_1[1];
      param_2[2] = uVar1;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b76550 */
uint F_00b76550(unsigned int gen_a0)
{
  GEN_ENTER(0xb76550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return (uint)*(byte *)(param_1 + 0x16);
}

/* ref: FUN_00b76580 */
uint F_00b76580(unsigned int gen_a0)
{
  GEN_ENTER(0xb76580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00b765d0 */
uint F_00b765d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb765d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    uVar1 = F_00ab2990(param_1,uVar2);
    if ((uVar1 != 0) && (*(char *)(uVar1 + 0x14) == (char)param_2)) break;
    uVar2 = uVar2 + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00b76610 */
uint F_00b76610(unsigned int gen_a0)
{
  GEN_ENTER(0xb76610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(char *)(param_1 + 0x16) == '\0') && (*(short *)(param_1 + 0xc) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b76630 */
uint F_00b76630(unsigned int gen_a0)
{
  GEN_ENTER(0xb76630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_00ab29c0((uint)*(ushort *)(param_1 + 0xc));
  return uVar1;
}

/* ref: FUN_00b767d0 */
uint F_00b767d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb767d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return ~(uint)(*(byte *)(param_1 + 0x8e) >> 6) & 1;
}

/* ref: FUN_00b767f0 */
unsigned int F_00b767f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb767f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00b76850 */
unsigned int F_00b76850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float fVar1;
  
  fVar1 = REFG(float, 0x10a509c);
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_3 = param_1[3];
  if (gen_bits2f(param_1[3]) <= fVar1) {
    param_3 = REFG(float, 0x1094880);
  }
  param_1[3] = (undefined4)
               gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800)));
  return 0;
}

/* ref: FUN_00b768a0 */
unsigned int F_00b768a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb768a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  
  fVar1 = REFG(float, 0x10a509c);
  param_1[2] = (undefined4)gen_fl2bits(param_4);
  param_4 = gen_bits2f(param_1[3]);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 4) = 1;
  if (param_4 <= fVar1) {
    param_4 = REFG(float, 0x1094880);
  }
  param_1[3] = (undefined4)gen_fl2bits((float)((float10)param_4 + (float10)REFG(double, 0x1094800)));
  return 0;
}

/* ref: FUN_00b768f0 */
byte F_00b768f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb768f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa02d0(param_1,*(undefined4 *)((int)this + 0x14),0);
  return (char)uVar1 == '\0';
}

/* ref: FUN_00b76910 */
byte F_00b76910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 extraout_EDX = 0;
  ulonglong uVar2;
  
  if (*(char *)((int)this + 0x20) == '\0') {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 3) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006c5190(this_00);
    if ((char)uVar1 != '\0') {
      uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1);
      uVar2 = F_006d9e70(this_00);
      if (uVar2 == CONCAT44(extraout_EDX,uVar1)) {
        return 0;
      }
    }
    return 1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (((uVar1 == 2) && ((*(byte *)((int)param_1 + 0x2dd2) & 2) == 0)) &&
     ((char)param_1[0x62] != '\x02')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b769a0 */
byte F_00b769a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb769a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined1 *)(in_ecx + 0x1c) = 0;
  *(float *)(in_ecx + 0x10) = param_2;
  return 1;
}

/* ref: FUN_00b769c0 */
byte F_00b769c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb769c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = F_00a4b780(10000);
  fVar3 = (float10)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a2b98);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x10) =
       ((float)GEN_TOF((((float10)param_4 - (float10)param_3) * (float10)(float)(fVar3 / fVar1) +
              (float10)param_3)));
  return 1;
}

/* ref: FUN_00b76a20 */
byte F_00b76a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb76a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x1c) = 3;
  F_00bc8440(param_1 + 0x1570,(float)(int)param_2[2],param_2[4],*param_2);
  return 1;
}

/* ref: FUN_00b76a60 */
byte F_00b76a60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb76a60u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  float10 fVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(param_1);
  fVar3 = F_00aaea30(uVar1,param_2);
  if ((double)fVar3 < *(double *)&REFG(undefined, 0x1094810)) {
    fVar2 = F_00aae710(((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb0) - (float10)param_3))));
    if ((float10)((float)GEN_TOF(ABS(fVar2))) < (float10)*(float *)&REFG(undefined, 0x133df78)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b76ae0 */
byte F_00b76ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb76ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aa0790(param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = F_00a9fbf0(param_1);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b76b10 */
uint F_00b76b10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb76b10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  if ((GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) ||
     (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0))) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1302c98);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1302c90);
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(REFG(float, 0x1302c94));
    F_004f41e0(&(*(float *)(gen_frame + 0x10)),param_2);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)REFG(float, 0x1302c88) * (float10)0 -
                      (float10)(*(float *)(gen_frame + 0x18)) * (float10)REFG(float, 0x1302c84));
    (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x18)) -
                      (float10)(*(float *)(gen_frame + 0x10)) * (float10)REFG(float, 0x1302c88));
    (*(float *)(gen_frame + 0x8)) = (float)((float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0x10)) -
                      (float10)0 * (float10)REFG(float, 0x1302c80));
    if (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) {
      F_0046f0e0(&(*(float *)(gen_frame + 0x10)),param_3);
      *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x10)));
      param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x14)));
      param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x18)));
    }
    if (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0)) {
      F_0046f0e0(&(*(float *)(gen_frame + 0x0)),param_4);
      *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
      param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
      param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00b76c70 */
ushort F_00b76c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x1a) = (ushort)param_2;
  *(undefined1 *)(in_ecx + 0x21) = 1;
  return (ushort)param_2;
}

/* ref: FUN_00b76ca0 */
unsigned int F_00b76ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xb76ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x40) == '\0') {
    *(undefined4 *)(in_ecx + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_00b76cb0 */
uint F_00b76cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb76cb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0x10000;
  uVar1 = F_00bf0a20(in_ecx + 0x11);
  in_ecx[0x84] = (undefined4)REFG(float, 0x1375ad0);
  in_ecx[0x85] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  in_ecx[0x86] = (undefined4)REFG(float, 0x1375ad8);
  in_ecx[0x87] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  *(undefined1 *)(in_ecx + 0x88) = 0;
  in_ecx[0xb] = 0;
  *(undefined1 *)(in_ecx + 0xe) = 0;
  in_ecx[10] = 0xe0000000;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined1 *)(in_ecx + 0x10) = 1;
  return uVar1;
}

/* ref: FUN_00b76d60 */
ushort F_00b76d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b76d70 */
uint F_00b76d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(short *)(in_ecx + param_2 * 2);
}

/* ref: FUN_00b76d80 */
uint F_00b76d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * psVar1;
  
  psVar1 = (short *)(in_ecx + param_2 * 2);
  *psVar1 = *psVar1 + 1;
  return param_2;
}

/* ref: FUN_00b76d90 */
uint F_00b76d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * psVar1;
  
  psVar1 = (short *)(in_ecx + param_2 * 2);
  *psVar1 = *psVar1 + -1;
  return param_2;
}

/* ref: FUN_00b76da0 */
uint F_00b76da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined2 *)((int)this + param_1 * 2) = 0;
  return 0;
}

/* ref: FUN_00b76db0 */
uint F_00b76db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00b76dc0 */
uint F_00b76dc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb76dc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 8 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00b76de0 */
uint F_00b76de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00aa0560(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00b76e00 */
ulonglong F_00b76e00(unsigned int gen_a0)
{
  GEN_ENTER(0xb76e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x40) != '\0') {
    return *(ulonglong *)((int)this + 0x28);
  }
  return 0xe0000000;
}

/* ref: FUN_00b76e20 */
uint F_00b76e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_00a5feb0(param_1);
  fVar2 = F_00aaea90(param_2,uVar1);
  if (fVar2 < (float10)*(float *)&REFG(undefined, 0x10f50bc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b76e60 */
byte F_00b76e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76e60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  return (int)uVar1 <= (int)(param_2 & 0xff);
}

/* ref: FUN_00b76e80 */
uint F_00b76e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0xc) == 0)) {
    uVar1 = F_005f3270(0x41,param_1,0);
    if (uVar1 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar1 + 0x60);
    }
  }
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00b76ec0 */
byte F_00b76ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb76ec0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  if (*param_2 < uVar3) {
    bVar1 = *param_3 + 1;
    if (bVar1 < 0x10) {
      *param_3 = bVar1;
      return bVar1;
    }
    *param_3 = 0;
    *param_2 = *param_2 + 1;
    return bVar1;
  }
  *param_2 = (byte)uVar2;
  return (byte)uVar2;
}

/* ref: FUN_00b76f10 */
uint F_00b76f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  pfVar9 = (float *)F_00a5feb0(param_2);
  fVar1 = *param_4;
  fVar2 = *pfVar9;
  fVar3 = param_4[1];
  fVar4 = pfVar9[1];
  fVar5 = param_4[2];
  fVar6 = pfVar9[2];
  fVar10 = (float10)(float)((float10)fVar3 - (float10)fVar4);
  fVar11 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  fVar12 = (float10)(float)((float10)fVar5 - (float10)fVar6);
  fVar10 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar12 * fVar12 +
                                                (fVar11 * fVar11 + fVar10 * fVar10)))))));
  if ((float10)1 < fVar10) {
    fVar10 = (float10)(float)((float10)1 / fVar10);
    pfVar9 = (float *)F_00a5feb0(param_2);
    fVar7 = pfVar9[1];
    fVar8 = pfVar9[2];
    *param_1 = ((float)GEN_TOF(((float10)*pfVar9 +
                      (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar1 - (float10)fVar2)))))));
    param_1[1] = ((float)GEN_TOF(((float10)fVar7 +
                        (float10)((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar4) * fVar10)))
                        )));
    param_1[2] = ((float)GEN_TOF(((float10)fVar8 +
                        (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar5 - (float10)fVar6))))
                        )));
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00b77140 */
uint F_00b77140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb77140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 6) = (undefined1)param_2;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 7) = 4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00b77190 */
uint F_00b77190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb77190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = this;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)&REFG(undefined4, 0x14a31f0) - (int)this) + (int)puVar1)));
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x158);
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x564) = 0;
  *(uint *)((int)this + 0x568) = param_1;
  *(undefined1 *)((int)this + 0x56c) = 1;
  return param_1;
}

/* ref: FUN_00b771f0 */
unsigned int F_00b771f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb771f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((float10)*(float *)(param_1 + 0x560) < (float10)param_3) {
    *(float *)(param_1 + 0x560) = param_3;
    F_00ae2110(((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
    F_00ae21b0(param_1,0x158,((undefined1 *)(gen_frame + 0x0)));
    return 0;
  }
  return 0;
}

/* ref: FUN_00b77250 */
uint F_00b77250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77250u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  bool bVar1;
  byte bVar2;
  uint3 uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var_02 = 0;
  undefined3 uVar6;
  undefined3 extraout_var_03 = 0;
  undefined * this;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar10 = *in_ecx;
  uVar5 = (uint3)((uint)iVar10 >> 8);
  switch((unsigned int)(uintptr_t)(iVar10)) {
  case 0: ;
    return CONCAT31(uVar5,1);
  default: ;
    if (param_4 == (int *)0x0) {
      return (uint)uVar5 << 8;
    }
    uVar6 = (undefined3)((uint)(iVar10 + -1) >> 8);
    switch((unsigned int)(uintptr_t)(iVar10)) {
    case 1: ;
      bVar2 = F_00b760a0(param_3,(uint)param_4);
      if (bVar2 == 0) {
        return 0;
      }
      break;
    case 2: ;
      bVar2 = F_00b760a0(param_3,(uint)param_4);
      if (bVar2 == 0) {
        return 1;
      }
      fVar9 = F_00b763f0(param_3,param_4);
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar8 <= (float10)fVar9) {
        return 1;
      }
      return 0;
    case 3: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = F_00b760f0(param_3,param_4,(float)(float10)0,(float)fVar8);
      return uVar3;
    case 4: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)0;
      goto LAB_00b776a0;
    case 5: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = F_00b760f0(param_3,param_4,*(float *)&REFG(undefined, 0x133df6c),(float)fVar8);
      return uVar3;
    case 6: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = F_00b761b0(param_3,param_4,*(float *)&REFG(undefined, 0x133df6c),(float)fVar8);
      return uVar3;
    case 7: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = F_00b760f0(param_3,param_4,*(float *)&REFG(undefined, 0x133df70),(float)fVar8);
      return uVar3;
    case 8: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = F_00b761b0(param_3,param_4,*(float *)&REFG(undefined, 0x133df70),(float)fVar8);
      return uVar3;
    case 9: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar3 = F_00b760f0(param_3,param_4,*(float *)&REFG(undefined, 0x133df74),(float)fVar8);
      return uVar3;
    case 10: ;
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar7 = (float10)*(float *)&REFG(undefined, 0x133df74);
LAB_00b776a0: ;
      uVar3 = F_00b761b0(param_3,param_4,(float)fVar7,(float)fVar8);
      return uVar3;
    case 0xb: ;
      uVar3 = F_00a9fc10(param_4);
      return uVar3;
    case 0xc: ;
      uVar3 = F_00a9fc10(param_4);
      return CONCAT31((int3)(uVar3 >> 8),(char)uVar3 == '\0');
    default: ;
      return CONCAT31(uVar6,1);
    case 0x14: ;
      return (uint)(in_ecx[1] <= (int)(uint)*(byte *)((int)param_3 + 0x1689));
    case 0x15: ;
      return (uint)((int)(uint)*(byte *)((int)param_3 + 0x1689) <= in_ecx[1]);
    case 0x1b: ;
      return (uint)((uint)*(byte *)(param_4 + 0xb6e) == in_ecx[1]);
    case 0x1c: ;
      return (uint)((uint)*(byte *)(param_4 + 0xb6f) == in_ecx[1]);
    case 0x1d: ;
      return (uint)((uint)*(byte *)(param_4 + 0x5a2) == in_ecx[1]);
    case 0x1e: ;
      bVar2 = F_00a9f440(param_4,in_ecx[1]);
      return CONCAT31(extraout_var_03,bVar2);
    case 0x1f: ;
      uVar3 = ((code *)*(gen_code32 *)(*param_4 + 0x1c))(param_4);
      return CONCAT31((int3)(uVar3 >> 8),(char)uVar3 == '\0');
    case 0x20: ;
      uVar3 = ((code *)*(gen_code32 *)(*param_4 + 0x1c))(param_4);
      return CONCAT31((int3)(uVar3 >> 8),(char)uVar3 == '\x01');
    case 0x21: ;
      iVar10 = in_ecx[1];
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_4 + 0xd4))(param_4)));
      bVar2 = F_00b7aac0(this,iVar10);
      return CONCAT31(extraout_var_04,bVar2);
    case 0x22: ;
      bVar2 = F_00a9f390(in_ecx[1]);
      return CONCAT31(extraout_var_05,bVar2);
    case 0x29: ;
      return (uint)((uint)*(byte *)((int)param_4 + 0x168a) == in_ecx[1]);
    case 0x2a: ;
      return CONCAT31(uVar6,*(byte *)((int)param_4 + 0x2dd2) >> 1) & 0xffffff01;
    case 0x2b: ;
      if ((uint)*(byte *)((int)param_4 + 0x168a) != in_ecx[1]) {
        return 0;
      }
      if ((uint)*(byte *)((int)param_4 + 0x168b) <= (uint)in_ecx[2]) {
        return 1;
      }
      return 0;
    case 0x2c: ;
      break;
    case 0x2d: ;
      fVar9 = F_00b763f0(param_3,param_4);
      fVar8 = (float10)in_ecx[1];
      if (in_ecx[1] < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      bVar1 = fVar8 <= (float10)fVar9;
      goto LAB_00b774b8;
    }
    fVar9 = F_00b763f0(param_3,param_4);
    fVar8 = (float10)in_ecx[1];
    if (in_ecx[1] < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    bVar1 = (float10)fVar9 <= fVar8;
LAB_00b774b8: ;
    if (bVar1) {
      return 1;
    }
    return 0;
  case 0xd: ;
    uVar3 = F_00b79ca0((undefined *)(REFG(int, 0x137104c) + 0x1210),0);
    return uVar3;
  case 0xe: ;
    uVar3 = F_00b79ca0((undefined *)(REFG(int, 0x137104c) + 0x1210),0);
    return CONCAT31((int3)(uVar3 >> 8),(char)uVar3 == '\0');
  case 0xf: ;
    uVar3 = F_00470090((undefined *)(REFG(int, 0x137104c) + 0x1210),0);
    return (uint)((uint)in_ecx[1] <= uVar3);
  case 0x10: ;
    uVar3 = F_00470090((undefined *)(REFG(int, 0x137104c) + 0x1210),0);
    return (uint)(uVar3 < (uint)in_ecx[1]);
  case 0x11: ;
    uVar3 = F_00470090((undefined *)(REFG(int, 0x137104c) + 0x1210),0);
    if (((uint)in_ecx[1] <= uVar3) && (uVar3 < (uint)in_ecx[2])) {
      return 1;
    }
    break;
  case 0x12: ;
    bVar2 = F_00b7c0c0(&REFG(undefined, 0x133e5c0));
    return (uint)((uint)bVar2 == in_ecx[1]);
  case 0x13: ;
    bVar2 = F_00b7c0c0(&REFG(undefined, 0x133e5c0));
    return (uint)((uint)bVar2 != in_ecx[1]);
  case 0x16: ;
    fVar8 = (float10)*(float *)((int)param_3 + in_ecx[1] * 4 + 0x1348);
    fVar7 = (float10)in_ecx[2];
    if (in_ecx[2] < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && !(fVar8 < fVar7)) {
      return 1;
    }
    break;
  case 0x17: ;
    fVar8 = (float10)in_ecx[2];
    if (in_ecx[2] < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((float10)*(float *)((int)param_3 + in_ecx[1] * 4 + 0x1348) <= fVar8) {
      return 1;
    }
    break;
  case 0x18: ;
    return (uint)(in_ecx[2] <= (int)*(short *)((int)param_3 + in_ecx[1] * 2 + 0x1340));
  case 0x19: ;
    return (uint)((int)*(short *)((int)param_3 + in_ecx[1] * 2 + 0x1340) <= in_ecx[2]);
  case 0x1a: ;
    uVar12 = 100;
    uVar11 = 0;
    F_009a46a0();
    uVar3 = F_00978ca0(uVar11,uVar12);
    return (uint)(uVar3 <= (uint)in_ecx[1]);
  case 0x23: ;
    bVar2 = F_00b76410(in_ecx[1]);
    return CONCAT31(extraout_var,bVar2);
  case 0x24: ;
    bVar2 = F_00b76410(in_ecx[1]);
    return CONCAT31(extraout_var_00,bVar2 == 0);
  case 0x25: ;
    uVar3 = F_00a5feb0(param_3);
    uVar4 = F_00b070f0();
    bVar2 = F_00b08460(uVar4,uVar3);
    return CONCAT31(extraout_var_01,bVar2);
  case 0x26: ;
    uVar3 = F_00a5feb0(param_3);
    uVar4 = F_00b070f0();
    bVar2 = F_00b08460(uVar4,uVar3);
    return CONCAT31(extraout_var_02,bVar2 == 0);
  }
  return 0;
}

/* ref: FUN_00b779d0 */
byte F_00b779d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb779d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  pvVar1 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  uVar2 = F_00a5feb0(REFG(void * PTR32, 0x1379694));
  uVar3 = F_00a5feb0(param_1);
  fVar5 = F_00aaea30(uVar3,uVar2);
  fVar4 = (float10)param_2;
  if (param_2 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  if ((float10)fVar5 <= fVar4) {
    uVar2 = F_00b77250(this,param_1,param_1,pvVar1);
    if ((char)uVar2 != '\0') {
      *param_3 = *(undefined4 *)((int)pvVar1 + 0x74);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b77a50 */
uint F_00b77a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb77a50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[2]);
  fVar3 = (float10)(*(float *)&gen_args[3]);
  if ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[2]) + 0x560))) < fVar3) {
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[2]) + 0x560))) = (*(float *)&gen_args[3]);
    F_00ae2110(((undefined1 *)(gen_frame + 0x18)),(*(undefined4 *)&gen_args[1]),(*(float *)&gen_args[3]));
    F_00ae21b0(iVar1,0x158,((undefined1 *)(gen_frame + 0x18)));
    fVar3 = (float10)(*(float *)&gen_args[3]);
  }
  F_00ae2110(((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[1]),(float)fVar3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = ((undefined1 *)(gen_frame + 0xc));
  (*(undefined * PTR32 * PTR32 *)&gen_args[2]) = (*(undefined * PTR32 (*)[2])REFP(0x10f50ec));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30));
  uVar2 = F_00ae21f0(iVar1,0x158,&(*(undefined1 * PTR32 *)(gen_frame + 0x24)),3);
  return uVar2;
}

/* ref: FUN_00b77af0 */
uint F_00b77af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb77af0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  if ((float10)*(float *)(param_3 + 0x560) < (float10)param_4) {
    *(float *)(param_3 + 0x560) = param_4;
    F_00ae2110(((undefined1 *)(gen_frame + 0xc)),param_2,param_4);
    F_00ae21b0(param_3,0x158,((undefined1 *)(gen_frame + 0xc)));
  }
  F_00ae2110(((undefined1 *)(gen_frame + 0x0)),param_2,param_4);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = ((undefined1 *)(gen_frame + 0x0));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18));
  uVar1 = F_00ae21f0(param_3,0x158,&(*(undefined1 * PTR32 *)(gen_frame + 0x24)),2);
  return uVar1;
}

/* ref: Client::Game::Think::Behavior::Condition::ConditionFilter::vf1 */
uint F_00b77b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb77b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00b77250(*(undefined4 *)(this + 8),param_1,*(undefined4 *)(this + 4),param_1);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00b77bd0 */
byte F_00b77bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb77bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  int * piVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar2 = (int *)F_005f3270(8,*(undefined4 *)((int)param_1 + 0x78),0);
  if (piVar2 != (int *)0x0) {
    if (*(char *)(param_2 + 0x16) == '\x0f') {
      ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2,&(*(float *)(gen_frame + 0x20)));
    }
    else if (*(char *)(param_2 + 0x16) == '\x10') {
      (*(float *)(gen_frame + 0x38)) = (float)*(int *)(param_2 + 8);
      (*(float *)(gen_frame + 0x3c)) = (float)(int)*(short *)(param_2 + 0x12);
      ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2,&(*(float *)(gen_frame + 0x20)));
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x38))) == (GEN_ISNAN((*(float *)(gen_frame + 0x38))) || (*(float *)(gen_frame + 0x38)) == 0.0)) ||
         (GEN_ISNAN((*(float *)(gen_frame + 0x3c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x3c))) || (*(float *)(gen_frame + 0x3c)) == 0.0))) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2,((float *)(gen_frame + 0x10)));
        pfVar3 = (float *)F_00b76b10(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x3c)));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)*pfVar3);
        (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x28)));
      }
    }
    (*(float *)(gen_frame + 0x38)) = *(float *)((int)param_1 + 0xc0);
    uVar4 = F_00af2610(&(*(float *)(gen_frame + 0x20)),*(float *)&REFG(undefined, 0x133dec8),*(float *)((int)param_1 + 0xc0),&(*(float *)(gen_frame + 0x34))
                         ,REFG(float, 0x10f49a4),0,0,0,0,0,0,0,3,0);
    if ((char)uVar4 != '\0') {
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
    }
    pfVar3 = (float *)F_00a5feb0(param_1);
    fVar1 = *pfVar3;
    ((float *)(gen_frame + 0x10))[0] = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)pfVar3[2]);
    fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)pfVar3[2]);
    fVar6 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1);
    fVar1 = (float)(fVar6 * fVar6 + fVar5 * fVar5);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if (!((float10)fVar1 < (float10)REFG(float, 0x10920a4))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b77d70 */
byte F_00b77d70(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77d70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  (*(byte *)(gen_frame + 0x6f)) = 0;
  piVar4 = (int *)F_005f3270(8,*(undefined4 *)((int)param_1 + 0x78),0);
  if (piVar4 != (int *)0x0) {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
    if ((GEN_ISNAN(param_2) == (GEN_ISNAN(param_2) || param_2 == 0.0)) ||
       (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0))) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x3c))(piVar4,((undefined1 *)(gen_frame + 0x10)));
      iVar3 = *piVar4;
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
      ((code *)*(gen_code32 *)(iVar3 + 0x38))(piVar4,&(*(float *)(gen_frame + 0x40)));
      pfVar5 = (float *)F_00b76b10(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),param_2,param_3);
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar5[1] + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar5[2] + (float10)(*(float *)(gen_frame + 0x48)));
      (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar5[1] + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar5[2] + (float10)(*(float *)(gen_frame + 0x48)));
    }
    pfVar5 = (float *)F_00a5feb0(param_1);
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)*pfVar5);
    (*(float *)(gen_frame + 0x20)) = fVar7;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)pfVar5[1]);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)pfVar5[2]);
    (*(float *)(gen_frame + 0x28)) = fVar2;
    (*(float *)(gen_frame + 0x30)) = fVar7;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar2;
    fVar7 = ((float)GEN_TOF((((float10)fVar7 * (float10)fVar7 + (float10)fVar1 * (float10)fVar1) +
                   (float10)fVar2 * (float10)fVar2)));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    if ((float10)*(float *)&REFG(undefined, 0x10f50c8) < (float10)fVar7) {
      (*(float *)(gen_frame + 0x68)) = *(float *)((int)param_1 + 0xb0);
      fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x30)));
      fVar6 = (float10)(*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar7 - fVar6);
      fVar6 = F_00aae710((float)((float10)fVar7 - fVar6));
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(ABS(fVar6)));
      if ((float10)*(float *)&REFG(undefined, 0x10f5100) < (float10)((float)GEN_TOF(ABS(fVar6)))) {
        *param_4 = (*(float *)(gen_frame + 0x30));
        param_4[1] = (*(float *)(gen_frame + 0x34));
        param_4[2] = (*(float *)(gen_frame + 0x38));
        return 1;
      }
    }
  }
  return (*(byte *)(gen_frame + 0x6f));
}

/* ref: FUN_00b77f50 */
byte F_00b77f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  uint uVar2;
  
  bVar1 = 1;
  if ((*(char *)(param_2 + 0x16) != '\0') || (*(short *)(param_2 + 0xc) != 0)) {
    uVar2 = (uint)*(byte *)(param_2 + 0x14);
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        return uVar2 != param_4;
      }
      return param_1 != param_3;
    }
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00b77f90 */
uint F_00b77f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb77f90u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_3;
  param_3[2] = param_2;
  iVar3 = 0;
  do {
    uVar2 = F_00ab2990(uVar1,iVar3);
    if ((uVar2 != 0) && (*(char *)(uVar2 + 0x14) == (char)param_2)) goto LAB_00b77fc3;
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  iVar3 = 0;
LAB_00b77fc3: ;
  param_3[1] = iVar3;
  *(undefined4 *)(param_1 + 0x1340) = 0;
  *(undefined4 *)(param_1 + 0x1344) = 0;
  *(undefined4 *)(param_1 + 0x1348) = 0;
  *(undefined4 *)(param_1 + 0x134c) = 0;
  return param_1;
}

/* ref: FUN_00b780b0 */
byte F_00b780b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb780b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * pvVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (param_2 != -0x20000000) {
    pvVar4 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),param_2,param_3);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar4;
    if (pvVar4 != (undefined *)0x0) {
      pfVar5 = (float *)F_00a5feb0(param_1);
      pfVar6 = (float *)F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x2c)));
      uVar8 = 0;
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar6 - (float10)*pfVar5);
      fVar7 = pfVar6[1];
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar7 - (float10)fVar1);
      fVar2 = pfVar6[2];
      fVar3 = pfVar5[2];
      (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
      (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar6 - (float10)*pfVar5);
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar7 - (float10)fVar1);
      (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
      fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
      F_00a9f850(param_1,fVar7,uVar8);
      *(undefined1 *)((int)this + 0x1c) = 2;
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
  }
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x10) = REFG(float, 0x10f50cc);
  return 0;
}

/* ref: FUN_00b78180 */
uint F_00b78180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined * this_00;
  float fVar10;
  
  *(int *)((int)this + 0x14) = param_2[2];
  iVar4 = *param_2;
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((iVar4 != -0x20000000) && (iVar4 != -0x20000000)) {
    this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0),iVar4,0);
  }
  pfVar6 = (float *)0x0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  if ((this_00 != (undefined *)0x0) && (param_2[1] != 0x15)) {
    pfVar6 = (float *)F_00a5feb0(param_1);
    pfVar7 = (float *)F_00a5feb0(this_00);
    (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    fVar10 = pfVar7[1];
    fVar1 = pfVar6[1];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar10 - (float10)fVar1);
    fVar2 = pfVar7[2];
    fVar3 = pfVar6[2];
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar10 - (float10)fVar1);
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar10 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x2c)) = fVar10;
    pfVar6 = &(*(float *)(gen_frame + 0x2c));
  }
  if ((param_2[1] == 3) || (param_2[1] == 0x15)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  (*(undefined1 *)(gen_frame + 0x26)) = uVar9;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  uVar5 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x14);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  uVar8 = F_00aa0000(param_1,uVar5,pfVar6,0,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),0);
  if (this_00 != (undefined *)0x0) {
    F_00bf0ae0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x44),param_2);
    uVar8 = F_00bc8170((int)param_1 + 0x1570,param_2[4],*param_2);
  }
  return uVar8;
}

/* ref: FUN_00b782a0 */
uint F_00b782a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb782a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)(gen_frame + 0x2e)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined1 *)(gen_frame + 0x2f)) = 1;
  (*(undefined4 *)(gen_frame + 0x28)) = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x10f49a4);
  fVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x10f49a4);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10f49a4);
  fVar2 = param_2[1];
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10f49a4);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x10f49a4);
  fVar3 = *param_2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar4 = F_00a9f7c0(param_1,fVar3,fVar2,fVar1,param_3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  return uVar4;
}

/* ref: FUN_00b78330 */
ushort F_00b78330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb78330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  
  uVar1 = (ushort)param_2;
  if ((ushort)param_3 != 0) {
    uVar1 = (ushort)param_3;
  }
  if ((char)param_4 != '\0') {
    *(undefined1 *)((int)this + 0x21) = 0;
    F_00b76cb0(this);
    if ((ushort)param_3 == 0) {
      F_00aa05b0(param_1);
      F_00aa2cc0(param_1,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00b78380 */
uint F_00b78380(unsigned int gen_a0)
{
  GEN_ENTER(0xb78380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined2 *)(in_ecx + 0x20) = 1;
  uVar1 = F_00b76cb0(in_ecx);
  return uVar1;
}

/* ref: FUN_00b78390 */
uint F_00b78390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78390u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0xe0000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar5 = *(uint *)param_3;
  if (uVar5 != 0xe0000000) {
    uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar5,0);
    fVar2 = REFG(float, 0x10a509c);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)param_3;
      *(undefined4 *)(param_1 + 0x30) = 0;
      param_3 = *(uint *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (gen_bits2f(param_3) <= fVar2) {
        param_3 = REFG(float, 0x1094880);
      }
      *(float *)(param_1 + 0x34) = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800));
      uVar5 = F_00bc8170(param_2 + 0x1570,*(undefined4 *)(uVar3 + 0x10),*(undefined4 *)uVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_00b78440 */
uint F_00b78440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78440u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0xe0000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar5 = *(uint *)param_3;
  if (uVar5 != 0xe0000000) {
    uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0),uVar5,0);
    fVar2 = REFG(float, 0x10a509c);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)param_3;
      *(float *)(param_1 + 0x30) = (float)*(int *)(param_3 + 8);
      param_3 = *(uint *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x38) = 1;
      if (gen_bits2f(param_3) <= fVar2) {
        param_3 = REFG(float, 0x1094880);
      }
      *(float *)(param_1 + 0x34) = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800));
      uVar5 = F_00bc8170(param_2 + 0x1570,*(undefined4 *)(uVar3 + 0x10),*(undefined4 *)uVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_00b784f0 */
unsigned int F_00b784f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb784f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  float fVar2;
  
  if (((param_2 != (int *)0x0) && ((char)param_3 == '\x01')) && ((char)param_4 == '\0')) {
    uVar1 = ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
    if ((uVar1 == 3) && (*(char *)(param_1 + 0x1c) == '\x04')) {
      fVar2 = gen_bits2f(param_2[0x2c]);
      uVar1 = F_00a5feb0(param_2);
      F_00b782a0(param_2,uVar1,fVar2);
      *(undefined1 *)(param_1 + 0x220) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00b78550 */
uint F_00b78550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb78550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  uint * puVar2;
  float10 fVar3;
  
  fVar3 = F_00a9fad0((*(uint *)&gen_args[0]));
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)fVar3);
  pfVar1 = (float *)&(*(uint *)&gen_args[0]);
  if (!((float10)1 < (float10)(float)fVar3)) {
    pfVar1 = (float *)&REFG(undefined4, 0x10f50c0);
  }
  puVar2 = &(*(uint *)&gen_args[0]);
  if (!((float10)(float)((float10)*pfVar1 * (float10)(*(float *)&gen_args[1])) < (float10)REFG(float, 0x10f50c4))) {
    puVar2 = (uint *)&REFG(float, 0x10f50c4);
  }
  return (uint)puVar2;
}

/* ref: FUN_00b785a0 */
uint F_00b785a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb785a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  undefined * PTR32 * PTR32 * pppuVar7;
  
  pfVar4 = (float *)F_00a5feb0(param_1);
  fVar6 = *param_2;
  (*(float *)(gen_frame + 0x6c)) = fVar6;
  uVar3 = *param_3;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar6 - (float10)*pfVar4);
  fVar1 = param_2[2];
  (*(float *)(gen_frame + 0x68)) = fVar1;
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10f49a4);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10f49a4);
  ((float *)(gen_frame + 0x40))[0] = (float)((float10)fVar6 - (float10)*pfVar4);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10f49a4);
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10f49a4);
  ((float *)(gen_frame + 0x40))[2] = (float)((float10)fVar1 - (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x10f50d0);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x32)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x50)) = fVar6;
  (*(float *)(gen_frame + 0x54)) = param_2[1];
  ((float *)(gen_frame + 0x40))[1] = 0.0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x33)) = uVar3;
  (*(undefined1 *)(gen_frame + 0x38)) = 1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 3;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x64)) = 0.0;
  uVar5 = F_00a9fa80(param_1,param_2,&(*(float *)(gen_frame + 0x64)),(float)(float10)0,REFG(float, 0x10f49a4),0,1);
  if ((char)uVar5 != '\0') {
    (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x64));
  }
  pppuVar7 = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc));
  fVar6 = F_00aae900(((float *)(gen_frame + 0x40)));
  uVar5 = F_00a9f7c0(param_1,(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),fVar6,pppuVar7);
  return uVar5;
}

/* ref: FUN_00b78700 */
uint F_00b78700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb78700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  uint uVar5;
  
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc))) {
  case 0xe: ;
  case 0x10: ;
    fVar1 = REFG(float, 0x10a509c);
    break;
  case 0xf: ;
  case 0x11: ;
    fVar1 = REFG(float, 0x1094880);
    break;
  default: ;
    goto switchD_00b78721_default;
  }
  uVar4 = F_00b77a50(this,param_1,param_3,fVar1);
switchD_00b78721_default: ;
  iVar2 = REFG(int, 0x1379694);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc))) {
  case 0: ;
    *param_2 = 0xe0000000;
    uVar4 = F_00b77250(this,param_1,param_1,0);
    return uVar4;
  case 1: ;
    *param_2 = *(uint *)(param_1 + 0x74);
    uVar4 = F_00b77250(this,param_1,param_1,param_1);
    return uVar4;
  case 2: ;
    uVar4 = F_00b76280(param_1);
    uVar5 = F_00a5f330(uVar4);
    *param_2 = uVar5;
    uVar4 = F_00b77250(this,param_1,param_1,uVar4);
    return uVar4;
  case 3: ;
    uVar4 = F_00b76310(param_1);
    uVar5 = F_00a5f330(uVar4);
    *param_2 = uVar5;
    uVar4 = F_00b77250(this,param_1,param_1,uVar4);
    return uVar4;
  case 4: ;
    bVar3 = F_00b77930(this,param_1,5,param_2);
    return CONCAT31(extraout_var,bVar3);
  case 5: ;
    bVar3 = F_00b77930(this,param_1,10,param_2);
    return CONCAT31(extraout_var_00,bVar3);
  case 7: ;
    uVar5 = F_00b77af0(this,param_1,param_3,REFG(float, 0x1094880));
    uVar4 = 0;
    if (uVar5 == 0) break;
    uVar4 = *(uint *)(uVar5 + 0x74);
    *param_2 = uVar4;
  default: ;
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 8: ;
    fVar1 = REFG(float, 0x10a509c);
    goto LAB_00b78822;
  case 9: ;
    fVar1 = REFG(float, 0x1094880);
LAB_00b78822: ;
    uVar4 = F_00b76390(param_1,fVar1,((undefined1 *)(gen_frame + 0xc)),100);
    return (uint)(uVar4 == 0);
  case 10: ;
    bVar3 = F_00b779d0(this,param_1,5,param_2);
    return CONCAT31(extraout_var_01,bVar3);
  case 0xb: ;
    bVar3 = F_00b779d0(this,param_1,10,param_2);
    return CONCAT31(extraout_var_02,bVar3);
  case 0xc: ;
    bVar3 = F_00b779d0(this,param_1,5,param_2);
    return CONCAT31(extraout_var_03,bVar3 == 0);
  case 0xd: ;
    bVar3 = F_00b779d0(this,param_1,10,param_2);
    return CONCAT31(extraout_var_04,bVar3 == 0);
  case 0xe: ;
  case 0xf: ;
    if (uVar4 != 0) {
      *param_2 = *(uint *)(uVar4 + 0x74);
      return CONCAT31((int3)((uint)((int)(uintptr_t)param_2) >> 8),1);
    }
    break;
  case 0x10: ;
  case 0x11: ;
    *param_2 = 0xe0000000;
    return CONCAT31((int3)(uVar4 >> 8),uVar4 == 0);
  case 0x12: ;
    if ((REFG(int, 0x1379694) != 0) &&
       (uVar4 = F_00b77250(this,param_1,param_1,REFG(int, 0x1379694)), (char)uVar4 != '\0')) {
      *param_2 = *(uint *)(iVar2 + 0x74);
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00b789a0 */
byte F_00b789a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb789a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  byte bVar2;
  
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)*(short *)(param_2 + 0x12));
  (*(float *)(gen_frame + 0x18)) = (float)*(int *)(param_2 + 8);
  fVar1 = (float)(int)*(short *)(param_2 + 0x12);
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  bVar2 = F_00b77d70(param_1,(float)*(int *)(param_2 + 8),fVar1,((undefined1 *)(gen_frame + 0x0)));
  return bVar2;
}

/* ref: FUN_00b78a00 */
byte F_00b78a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb78a00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_2 + 0x16);
  bVar2 = 1;
  if ((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x14')) || (cVar1 == '\x15')) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if ((uVar3 != 2) || (uVar3 = F_00a9fbf0(param_1), (char)uVar3 == '\0')) {
      return 1;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(cVar1)) {
    case '\x01': ;
      uVar3 = F_00aa0580(param_1,0);
      return *(uint *)(param_2 + 8) != uVar3;
    default: ;
      goto switchD_00b78a4f_caseD_2;
    case '\t': ;
    case '\n': ;
    case '\v': ;
    case '\f': ;
      bVar2 = F_00b79b90(param_1 + 0x4d0);
      return bVar2 == 0;
    case '\x0f': ;
    case '\x10': ;
      bVar2 = F_00b77bd0(param_1,param_2);
      return bVar2;
    case '\x11': ;
      bVar2 = F_00b789a0(param_1,param_2);
      return bVar2;
    case '\x13': ;
      if ((*(int *)(param_2 + 8) != 0) && (bVar2 = F_00b79b90(param_1 + 0x4d0), bVar2 == 0)) {
        return 1;
      }
    }
  }
  bVar2 = 0;
switchD_00b78a4f_caseD_2: ;
  return bVar2;
}

/* ref: FUN_00b78af0 */
byte F_00b78af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00b78180(this,param_1,param_2);
  return 1;
}

/* ref: FUN_00b78b20 */
byte F_00b78b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00b78180(this,param_1,param_2);
  return 1;
}

/* ref: FUN_00b78b50 */
byte F_00b78b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  
  piVar3 = (int *)F_005f3270(8,*(undefined4 *)((int)param_1 + 0x78),0);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_2 + 4) == 0xf) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,&(*(float *)(gen_frame + 0x30)));
  }
  else if (*(int *)(param_2 + 4) == 0x10) {
    (*(float *)(gen_frame + 0x48)) = (float)*(int *)(param_2 + 8);
    (*(float *)(gen_frame + 0x4c)) = (float)*(int *)(param_2 + 0xc);
    ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,&(*(float *)(gen_frame + 0x30)));
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x48))) == (GEN_ISNAN((*(float *)(gen_frame + 0x48))) || (*(float *)(gen_frame + 0x48)) == 0.0)) ||
       (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || (*(float *)(gen_frame + 0x4c)) == 0.0))) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3,&(*(float *)(gen_frame + 0x20)));
      pfVar4 = (float *)F_00b76b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x4c)));
      (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar4[1] + (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar4[2] + (float10)(*(float *)(gen_frame + 0x38)));
    }
  }
  (*(float *)(gen_frame + 0x48)) = *(float *)((int)param_1 + 0xc0);
  uVar5 = F_00af2610(&(*(float *)(gen_frame + 0x30)),*(float *)&REFG(undefined, 0x133dec8),*(float *)((int)param_1 + 0xc0),&(*(float *)(gen_frame + 0x44)),
                       REFG(float, 0x10f49a4),0,0,0,0,0,0,0,3,0);
  if ((char)uVar5 != '\0') {
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  }
  pfVar4 = (float *)F_00a5feb0(param_1);
  fVar6 = *pfVar4;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar6);
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar6);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
  uVar5 = F_0046f390(&(*(float *)(gen_frame + 0x10)));
  fVar6 = F_00aae900(uVar5);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  F_00b782a0(param_1,&(*(float *)(gen_frame + 0x30)),fVar6);
  *(float *)((int)this + 0x21c) = (*(float *)(gen_frame + 0x48));
  *(float *)((int)this + 0x210) = (*(float *)(gen_frame + 0x30));
  *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x34));
  *(float *)((int)this + 0x218) = (*(float *)(gen_frame + 0x38));
  *(undefined1 *)((int)this + 0x220) = 0;
  *(undefined1 *)((int)this + 0x1c) = 4;
  return 1;
}

/* ref: FUN_00b78d40 */
byte F_00b78d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_2 + 8);
  (*(float *)(gen_frame + 0x18)) = (float)iVar1;
  iVar2 = *(int *)(param_2 + 0xc);
  (*(float *)(gen_frame + 0x1c)) = (float)iVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1302c90);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1302c94);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1302c98);
  bVar3 = F_00b77d70(param_1,(float)iVar1,(float)iVar2,&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar3 != 0) {
    fVar6 = F_00aae900(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar5 = F_00aae710(fVar6);
    fVar6 = (float)fVar5;
    (*(float *)(gen_frame + 0x18)) = fVar6;
    uVar4 = F_00a5feb0(param_1);
    F_00b782a0(param_1,uVar4,fVar6);
    *(undefined1 *)((int)this + 0x1c) = 2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b78e00 */
byte F_00b78e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb78e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if (((int)(param_2 & 0xff) < (int)uVar2) && ((byte)param_3 < 0x10)) {
    ((float *)(gen_frame + 0x14))[2] = gen_bits2f((uint)(byte)param_3);
    ((float *)(gen_frame + 0x14))[1] = gen_bits2f(REFG(float, 0x10f50cc));
    ((float *)(gen_frame + 0x14))[0] = 0.0;
    pfVar3 = ((float *)(gen_frame + 0x14)) + 2;
    fVar1 = (float)((float10)(byte)param_3 / (float10)*(double *)&REFG(undefined, 0x1094560));
    ((float *)(gen_frame + 0x14))[2] = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = ((float *)(gen_frame + 0x14)) + 1;
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)(gen_frame + 0x14));
    }
    puVar4 = (undefined4 *)F_00b66960(param_1,((undefined1 *)(gen_frame + 0x0)),*pfVar3,param_2 & 0xff);
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    param_4[2] = puVar4[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00b78ec0 */
byte F_00b78ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb78ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  
  (*(byte *)(gen_frame + 0x2c)) = 1;
  if ((*(int *)this != 0) && (*(int *)((int)this + 0xc) == 0)) {
    uVar4 = F_005f3270(0x41,*(int *)this,0);
    if (uVar4 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar4 + 0x60);
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar2 != (int *)0x0) {
    bVar3 = *(byte *)((int)this + 5);
    (*(byte * PTR32 *)(gen_frame + 0x28)) = (byte *)((int)this + 4);
    bVar1 = *(byte *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar3 = F_00b78e00(piVar2,(uint)bVar1,(uint)bVar3,&(*(undefined4 *)(gen_frame + 0x10)));
    if (bVar3 != 0) {
      (*(byte *)(gen_frame + 0x2c)) = 0;
      uVar4 = F_00a5feb0(param_1);
      fVar5 = F_00aaea90((uint)&(*(undefined4 *)(gen_frame + 0x10)),uVar4);
      if (fVar5 < (float10)*(float *)&REFG(undefined, 0x10f50bc)) {
        F_00b76ec0(piVar2,(*(byte * PTR32 *)(gen_frame + 0x28)),(int)this + 5);
        bVar3 = F_00b78e00(piVar2,(uint)*(*(byte * PTR32 *)(gen_frame + 0x28)),(uint)*(byte *)((int)this + 5),&(*(undefined4 *)(gen_frame + 0x10)));
        (*(byte *)(gen_frame + 0x2c)) = bVar3;
      }
      uVar4 = F_00ab29f0((uint)*(byte *)((int)this + 6));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((*(byte *)((int)this + 7) < 4) && ((*(byte *)(gen_frame + 0x2c)) == 0)) {
        *(byte *)((int)this + 7) = *(byte *)((int)this + 7) + 1;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(REFG(int, 0x137104c) + 0x1198);
        F_00b76f10(((undefined1 *)(gen_frame + 0x0)),param_1,*(undefined4 *)(REFG(int, 0x137104c) + 0x1198),&(*(undefined4 *)(gen_frame + 0x10)));
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          F_00b785a0(param_1,((undefined1 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
        }
        *(undefined1 *)((int)this + 7) = 0;
      }
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00b77030(param_1,piVar2,(uint)*(*(byte * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x20)));
      }
      (*(byte *)(gen_frame + 0x2c)) = *(*(byte * PTR32 *)(gen_frame + 0x28));
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      return (int)uVar4 <= (int)(uint)(*(byte *)(gen_frame + 0x2c));
    }
  }
  return (*(byte *)(gen_frame + 0x2c));
}

/* ref: FUN_00b79060 */
byte F_00b79060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb79060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((param_2 != 0) && (*(int *)((int)this + 0xc) == 0)) {
    uVar4 = F_005f3270(0x41,param_2,0);
    if (uVar4 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar4 + 0x60);
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x10);
    ((float *)(gen_frame + 0x20))[0] = 0.0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    uVar4 = (*pcVar2)(piVar1);
    if (1 < (int)uVar4) {
      bVar3 = F_00b78e00(piVar1,0,1,((float *)(gen_frame + 0x20)));
      if (bVar3 != 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,&(*(float *)(gen_frame + 0x30)),0);
        uVar6 = 0;
        (*(float *)(gen_frame + 0x10)) = (float)((float10)((float *)(gen_frame + 0x20))[0] - (float10)(*(float *)(gen_frame + 0x30)));
        ((float *)(gen_frame + 0x0))[1] = 0.0;
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x38)));
        ((float *)(gen_frame + 0x0))[0] = (float)((float10)((float *)(gen_frame + 0x20))[0] - (float10)(*(float *)(gen_frame + 0x30)));
        ((float *)(gen_frame + 0x0))[2] = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x38)));
        fVar5 = F_00aae900(((float *)(gen_frame + 0x0)));
        F_00a9f980(param_1,(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),fVar5,uVar6);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b79160 */
byte F_00b79160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb79160u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  bVar3 = F_00b78a00(param_1,param_2);
  if (bVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  uVar2 = *param_2;
  bVar3 = *(byte *)((int)param_2 + 0x17);
  (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)(param_2 + 6);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar3;
  (*(uint *)(gen_frame + 0x20)) = (uint)*(ushort *)((int)param_2 + 0xe);
  (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)((int)param_2 + 0x19);
  (*(uint *)(gen_frame + 0x28)) = (uint)*(byte *)((int)param_2 + 0x1a);
  uVar2 = param_2[1];
  (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(param_2 + 4);
  param_3[1] = (uint)*(byte *)((int)param_2 + 0x16);
  (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
  uVar6 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = &(*(uint *)(gen_frame + 0x18));
  puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  do {
    uVar4 = F_00b78700((*(uint * PTR32 *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x14)),puVar5,(*(undefined4 *)(gen_frame + 0xc)));
    if ((char)uVar4 == '\0') goto LAB_00b792a5;
    (*(uint * PTR32 *)(gen_frame + 0x10)) = (*(uint * PTR32 *)(gen_frame + 0x10)) + 4;
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 < 2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[4] = (uint)*(ushort *)(param_2 + 3);
  cVar1 = *(char *)((int)param_2 + 0x15);
  if (cVar1 == '\x02') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
  }
  else if (cVar1 == '\x03') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x4));
  }
  else {
    switch((unsigned int)(uintptr_t)(cVar1)) {
    case '\x01': ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 0x74);
      break;
    case '\x04': ;
      if (REFG(int, 0x1379694) != 0) {
        *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x74);
        break;
      }
    default: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = 0xe0000000;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[2] = param_2[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[3] = (int)*(short *)((int)param_2 + 0x12);
  cVar1 = *(char *)((int)param_2 + 0x16);
  if (((((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\x14')) && (cVar1 != '\x15')) ||
     (bVar3 = F_00bf0a60((undefined *)((*(int *)(gen_frame + 0x14)) + 0x1384),(*(undefined4 * PTR32 *)(gen_frame + 0x8))), bVar3 == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
    return 1;
  }
LAB_00b792a5: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00b792e0 */
uint F_00b792e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb792e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_8;
  
  local_8 = 4;
  do {
    uVar4 = F_00ab2990(*param_2,REFG(int, 0x14c5780));
    if ((uVar4 == 0) || ((*(char *)(uVar4 + 0x16) == '\0' && (*(short *)(uVar4 + 0xc) == 0)))) {
LAB_00b79338: ;
      iVar1 = *param_2;
      iVar2 = param_2[2];
      iVar6 = 0;
      do {
        uVar4 = F_00ab2990(iVar1,iVar6);
        if ((uVar4 != 0) && (*(char *)(uVar4 + 0x14) == (char)iVar2)) goto LAB_00b7935a;
        iVar6 = iVar6 + 1;
      } while (uVar4 != 0);
      iVar6 = 0;
LAB_00b7935a: ;
      if (REFG(int, 0x14c5780) == param_2[1]) {
        param_2[1] = iVar6;
      }
      REFG(int, 0x14c5780) = iVar6;
      uVar4 = F_00ab2990(*param_2,iVar6);
    }
    else {
      uVar5 = (uint)*(byte *)(uVar4 + 0x14);
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          bVar7 = REFG(int, 0x14c5780) == *param_2;
        }
        else {
          bVar7 = uVar5 == param_2[2];
        }
        if (!bVar7) goto LAB_00b79338;
      }
    }
    if ((REFG(char, 0x14c5784) == '\0') && (REFG(int, 0x14c5780) == param_2[1])) {
      local_8 = 1;
    }
    else if (uVar4 == 0) {
      local_8 = 3;
    }
    else {
      bVar3 = F_00b79160(param_1,uVar4,param_4,param_3);
      if (bVar3 != 0) {
        local_8 = 0;
      }
      REFG(int, 0x14c5780) = REFG(int, 0x14c5780) + 1;
    }
    REFG(undefined4, 0x14c577c) = REFG(undefined4, 0x14c577c) + 1;
    if (0x31 < REFG(undefined4, 0x14c577c)) {
      local_8 = 2;
    }
    REFG(char, 0x14c5784) = '\0';
    if (local_8 != 4) {
      return local_8;
    }
  } while( true );
}

/* ref: FUN_00b79410 */
byte F_00b79410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb79410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = F_00b79060((undefined4 *)((int)this + 0x28),param_1,*(undefined4 *)(param_2 + 8));
  if (bVar2 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 5;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)((int)this + 0x2e) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)((int)this + 0x28) = uVar1;
    *(undefined2 *)((int)this + 0x2c) = 0;
    *(undefined1 *)((int)this + 0x2f) = 4;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined1 *)((int)this + 0x40) = 0;
    uVar3 = F_00ab29f0(*(undefined4 *)(param_2 + 0xc));
    if ((uVar3 != 0) && (*(char *)(uVar3 + 1) != '\0')) {
      *(undefined4 *)(param_1 + 0x2ec8) = REFG(float, 0x10f50cc);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b794a0 */
byte F_00b794a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb794a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x1c))) {
  case 0: ;
  case 3: ;
    if (!(*(float *)((int)this + 0x10) <= 0.0)) {
      return 0;
    }
    return 1;
  case 1: ;
    uVar2 = F_00aa02d0(param_1,*(undefined4 *)((int)this + 0x14),0);
    if ((char)uVar2 == '\0') {
      F_00bc81b0((int)param_1 + 0x1570);
      *(undefined1 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x10) = REFG(float, 0x10f50cc);
    }
    break;
  case 2: ;
    bVar1 = F_00a9fc00(param_1);
    return bVar1 == 0;
  case 4: ;
    bVar1 = F_00b76ae0(param_1);
    if (bVar1 == 0) {
      uVar2 = F_00aa0210(param_1,0,0);
      bVar1 = F_00aa06e0(param_1,uVar2);
      if (bVar1 == 0) {
        bVar1 = F_00b76a60(param_1,(int)this + 0x210U,*(float *)((int)this + 0x21c));
        if (bVar1 != 0) {
          return 1;
        }
        if (*(char *)((int)this + 0x220) != '\0') {
          F_00b782a0(param_1,(int)this + 0x210U,*(float *)((int)this + 0x21c));
          *(undefined1 *)((int)this + 0x220) = 0;
        }
        return 0;
      }
    }
    break;
  case 5: ;
    bVar1 = F_005e1600();
    if (((bVar1 != 0) && (bVar1 = F_005d99e0(), bVar1 != 0)) && (REFG(char, 0x1379c96) == '\0')) {
      bVar1 = F_00b78ec0((undefined *)((int)this + 0x28),param_1);
      return bVar1;
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b79600 */
byte F_00b79600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb79600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  short * psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  F_00b77190(&REFG(undefined, 0x14c5218),*(undefined4 *)(param_2 + 4));
  puVar6 = &REFG(undefined4, 0x14c4ef8);
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = &REFG(undefined4, 0x14c5088);
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  REFG(undefined1, 0x14c4ef1) = 0;
  REFG(undefined1, 0x14c4ef0) = 0;
  do {
    uVar3 = F_00b792e0(param_1,param_2,&REFG(undefined, 0x14c5218),param_3);
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      if ((*(byte *)((int)param_1 + 0x8e) & 0x40) == 0) {
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_3 + 4))) {
        case 1: ;
          uVar3 = *(uint *)(param_3 + 8);
          uVar4 = F_00aa0580(param_1,0);
          if (uVar4 != uVar3) {
            F_00aa0560(param_1,uVar3);
          }
          break;
        default: ;
          goto switchD_00b79659_caseD_1;
        case 4: ;
          psVar1 = ((short *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 2 + 0x1340)));
          *psVar1 = *psVar1 + 1;
          break;
        case 5: ;
          psVar1 = ((short *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 2 + 0x1340)));
          *psVar1 = *psVar1 + -1;
          break;
        case 6: ;
          *((undefined2 *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 2 + 0x1340))) = 0;
          break;
        case 7: ;
          *((undefined4 *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 4 + 0x1348))) = 0;
          break;
        case 9: ;
          F_00b78390((int)param_1 + 0x1340,param_1,param_3);
          break;
        case 10: ;
          F_00b78440((int)param_1 + 0x1340,param_1,param_3);
          break;
        case 0x16: ;
          uVar2 = *(ushort *)((int)param_1 + 0x2f00);
          uVar3 = F_00aa0580(param_1,0);
          if (uVar3 != uVar2) {
            F_00aa0560(param_1,(uint)uVar2);
          }
          break;
        case 0x17: ;
          F_00b77f90(param_1,*(undefined4 *)(param_3 + 8),param_2);
          REFG(undefined1, 0x14c5784) = 1;
          break;
        case 0x18: ;
          if (REFG(int, 0x1379694) != 0) {
            F_00bf0b70((int)param_1 + 0x1384,*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
          }
        }
      }
      break;
    case 1: ;
    case 2: ;
    case 3: ;
switchD_00b79659_caseD_1: ;
      *(undefined4 *)(param_3 + 0x14) = REFG(undefined4, 0x14c5780);
      return uVar3 == 0;
    }
  } while( true );
}

/* ref: FUN_00b79a70 */
byte F_00b79a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint this;
  byte bVar3;
  byte bVar4;
  float10 fVar5;
  
  this = param_2;
  if (*(char *)((int)param_1 + 0x40) != '\0') {
    F_00b78000((undefined *)((int)param_1 + 0x28),param_2);
  }
  bVar3 = F_00b76910(param_1,param_2);
  bVar4 = 0;
  if (bVar3 != 0) {
    fVar5 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
    *(float *)((int)param_1 + 8) = ((float)GEN_TOF((fVar5 + (float10)*(float *)((int)param_1 + 8))));
    *(float *)((int)param_1 + 0xc) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xc) + fVar5)));
    *(float *)((int)param_1 + 0x10) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x10) - fVar5)));
    bVar3 = F_00b794a0(param_1,param_2);
    bVar4 = 0;
    if (bVar3 != 0) {
      uVar1 = *(ushort *)((int)param_1 + 0x1a);
      uVar2 = *(ushort *)((int)param_1 + 0x18);
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      param_2 = (uint)uVar2;
      if (*(char *)((int)param_1 + 0x21) != '\0') {
        *(undefined1 *)((int)param_1 + 0x21) = 0;
        F_00b76cb0(param_1);
        if (uVar1 == 0) {
          F_00aa05b0((undefined *)this);
          F_00aa2cc0((undefined *)this,0);
        }
      }
      bVar4 = F_00b797d0(param_1,this,param_2);
    }
  }
  return bVar4;
}

/* ref: FUN_00b79b20 */
byte F_00b79b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b79b90 */
byte F_00b79b90(unsigned int gen_a0)
{
  GEN_ENTER(0xb79b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x40) == '\0') {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x28) == -0x20000000) && (*(int *)(in_ecx + 0x2c) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Object::BnpcFilter::vf0 */
uint F_00b79c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Think::Behavior::Condition::ConditionFilter::vf0 */
uint F_00b79c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b79ca0 */
uint F_00b79ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  ulonglong uStackY_1c;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1);
  uStackY_1c = CONCAT44(extraout_EDX,uVar1);
  if (REFG(undefined4, 0x133dd04) <= (uint)((uStackY_1c / 0xe10) % 0x18)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1);
    uStackY_1c = CONCAT44(extraout_EDX_00,uVar1);
    if ((uint)((uStackY_1c / 0xe10) % 0x18) < REFG(undefined4, 0x133de90)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b79d60 */
unsigned int F_00b79d60(float gen_a0)
{
  GEN_ENTER(0xb79d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b79d80 */
unsigned int F_00b79d80(unsigned int gen_a0)
{
  GEN_ENTER(0xb79d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0x2f20;
  *(undefined4 *)((int)this + 0xc) = 400;
  uVar1 = F_00406bb0(0x75d00,0,0);
  *(uint *)this = uVar1;
  uVar1 = F_00406bb0(*(int *)((int)this + 0xc) * 0x14,0,0);
  *(uint *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
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
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  return 0;
}

/* ref: FUN_00b79ee0 */
unsigned int F_00b79ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb79ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00b79f30 */
uint F_00b79f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x3c) {
    return *(uint *)(in_ecx + 0x10 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00b79f50 */
uint F_00b79f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (uint *)((int)this + 0x10);
  while (((0x3b < uVar3 || (uVar1 = *puVar2, uVar1 == 0)) || (*(int *)(uVar1 + 0x78) != param_1))) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    if (0x3b < (int)uVar3) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00b79f80 */
uint F_00b79f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb79f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if (((uVar4 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) &&
       (piVar1[0x20] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar4 < 0x3c);
  return 0;
}

/* ref: FUN_00b7a040 */
uint F_00b7a040(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a35730(&REFG(undefined, 0x14a31e0),param_1);
  return uVar1;
}

/* ref: FUN_00b7a050 */
uint F_00b7a050(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a35760(&REFG(undefined, 0x14a31e0),param_1);
  return uVar1;
}

/* ref: FUN_00b7a060 */
unsigned int F_00b7a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0xc;
  do {
    if (((iVar2 - 1U < 0x3c) && (iVar1 = *(int *)((int)this + 0x10), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if (((-1 < iVar2) && (iVar2 < 0x3c)) &&
       ((iVar1 = *(int *)((int)this + 0x14), iVar1 != 0 && (*(int *)(iVar1 + 0xe4) == param_1)))) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if (((-1 < iVar2 + 1) && (iVar2 + 1 < 0x3c)) &&
       ((iVar1 = *(int *)((int)this + 0x18), iVar1 != 0 && (*(int *)(iVar1 + 0xe4) == param_1)))) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if ((((-1 < iVar2 + 2) && (iVar2 + 2 < 0x3c)) &&
        (iVar1 = *(int *)((int)this + 0x1c), iVar1 != 0)) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if (((-1 < iVar2 + 3) && (iVar2 + 3 < 0x3c)) &&
       ((iVar1 = *(int *)((int)this + 0x20), iVar1 != 0 && (*(int *)(iVar1 + 0xe4) == param_1)))) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar2 = iVar2 + 5;
    iVar3 = iVar3 + -1;
    this = (int *)((int)this + 0x14);
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00b7a140 */
byte F_00b7a140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = (int *)((int)this + 0x10);
  uVar5 = 0;
  while ((((0x3b < uVar5 || (piVar2 = (int *)*piVar3, piVar2 == (int *)0x0)) ||
          (bVar1 = *(byte *)((int)piVar2 + 0x8a), ((byte)param_1 & 1 < bVar1) == 0)) ||
         ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2), (char)uVar4 != '\0' &&
          (((*(byte *)((int)piVar2 + 0x8e) & 0x80) == 0 ||
           ((uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2), (char)uVar4 != '\0' &&
            ((bVar1 != 7 || ((char)piVar2[99] != '\0'))))))))))) {
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
    if (0x3b < uVar5) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b7a1d0 */
unsigned int F_00b7a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if ((param_1 < 0x3c) && (piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x10), piVar1 != (int *)0x0)
     ) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    if ((uVar2 == 3) || ((uVar2 == 5 || (uVar2 == 7)))) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0;
    F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
  }
  return 0;
}

/* ref: FUN_00b7a240 */
unsigned int F_00b7a240(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if ((local_8 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      if ((uVar2 == 3) || ((uVar2 == 5 || (uVar2 == 7)))) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)local_8 < 0x3c);
  return 0;
}

/* ref: FUN_00b7a2c0 */
uint F_00b7a2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  iVar3 = 0;
  piVar5 = (int *)((int)this + 0x10);
  do {
    if (((uVar4 < 0x3c) && (piVar1 = (int *)*piVar5, piVar1 != (int *)0x0)) && (piVar1[0x3b] != 0))
    {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1);
      if ((char)uVar2 != '\0') {
        local_8 = local_8 + 1;
      }
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while ((int)uVar4 < 0x3c);
  if (iVar3 == 0) {
    return 100;
  }
  return (local_8 * 100) / iVar3;
}

/* ref: FUN_00b7a320 */
unsigned int F_00b7a320(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if ((REFG(char, 0x1379c96) == '\0') && (REFG(char, 0x1379c97) == '\0')) {
    uVar2 = 0;
    piVar3 = (int *)((int)this + 0x10);
    do {
      if ((uVar2 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < 0x3c);
  }
  return 0;
}

/* ref: FUN_00b7a360 */
uint F_00b7a360(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00b7a240(this);
  F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00b7a390 */
uint F_00b7a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0xb0);
  do {
    if (*piVar1 == 0) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4 + 0xb0);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      }
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) * iVar2 + *(int *)((int)this + 4))));
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
      }
      *(int * PTR32 *)((int)this + iVar2 * 4 + 0xb0) = piVar1;
      ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,iVar2 + 0x144);
      F_00ae1e60(piVar1,param_1,param_2,param_3,param_4);
      F_00a35730(&REFG(undefined, 0x14a31e0),*(undefined4 *)((int)this + iVar2 * 4 + 0xb0));
      return iVar2 + 0x28;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_00b7a450 */
uint F_00b7a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7a450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0xb0);
  do {
    if (*piVar1 == 0) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) * iVar2 + *(int *)((int)this + 4))));
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10f518c));
      }
      *(int * PTR32 *)((int)this + iVar2 * 4 + 0xb0) = piVar1;
      ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,iVar2 + 0x144);
      F_00bf0cb0(piVar1,param_1,param_2,param_3,param_4);
      F_00a35730(&REFG(undefined, 0x14a31e0),*(undefined4 *)((int)this + iVar2 * 4 + 0xb0));
      return iVar2 + 0x28;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_00b7a500 */
uint F_00b7a500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7a500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)this == 0) {
    return 0xffffffff;
  }
  uVar2 = 0;
  piVar1 = (int *)((int)this + 0x10);
  do {
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      piVar1 = *(int * PTR32 *)((int)this + uVar2 * 4 + 0x10);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      }
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) * uVar2 + *(int *)this)));
      if (this_00 == (undefined *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)F_00a665b0(this_00);
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,uVar2 + 0x11c);
      F_00a5f430(piVar1,param_2);
      F_00aaa870(piVar1,param_1);
      *(int * PTR32 *)((int)this + uVar2 * 4 + 0x10) = piVar1;
      F_00a35730(&REFG(undefined, 0x14a31e0),piVar1);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00b7a5b0 */
uint F_00b7a5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined3 extraout_var = 0;
  int iVar7;
  int * piVar8;
  bool bVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x12c)) = this;
  (*(undefined1 *)(gen_frame + 0x13f)) = 0;
  uVar5 = F_00424810(REFG(undefined4, 0x137104c));
  piVar6 = (int *)0x0;
  if ((uVar5 != 0) && (piVar6 = (int *)F_00974710(uVar5), (char)piVar6 != '\0')) {
    bVar4 = F_005e1600();
    piVar6 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
    if ((bVar4 != 0) && ((REFG(char, 0x1379c96) == '\0' && (REFG(char, 0x1379c97) == '\0')))) {
      piVar6 = ((int *)(gen_frame + 0x0));
      for (iVar7 = 0x3c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      (*(int *)(gen_frame + 0x138)) = 0;
      uVar5 = F_005effe0(8,&(*(undefined1 *)(gen_frame + 0x13f)));
      piVar6 = (int *)0x0;
      if (uVar5 != 0) {
        piVar6 = *(int * PTR32 *)(uVar5 + 4);
        (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)*piVar6;
        while (((*(int * PTR32 *)(gen_frame + 0x134)) != piVar6 && ((*(int *)(gen_frame + 0x138)) < 0x28))) {
          piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0x134))[4];
          if (piVar8 != (int *)0x0) {
            uVar5 = ((code *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8);
            uVar5 = F_00ab2440(uVar5);
            if ((*(char *)(uVar5 + 0x14) != '\x01') && (*(char *)(uVar5 + 0x14) != '\x02')) {
              ((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x138)))] = (int)piVar8;
              (*(int *)(gen_frame + 0x138)) = (*(int *)(gen_frame + 0x138)) + 1;
            }
          }
          F_0054f4d0(&(*(int * PTR32 *)(gen_frame + 0x134)));
        }
        iVar7 = 0x28;
        (*(int *)(gen_frame + 0x138)) = 0x28;
        uVar5 = F_005effe0(0xc,&(*(undefined1 *)(gen_frame + 0x13f)));
        piVar6 = (int *)0x0;
        if (uVar5 != 0) {
          piVar6 = *(int * PTR32 *)(uVar5 + 4);
          piVar8 = (int *)*piVar6;
          (*(int * PTR32 *)(gen_frame + 0x134)) = piVar8;
          if (piVar8 != piVar6) {
            do {
              if (0x3b < iVar7) break;
              ((int *)(gen_frame + 0x0))[(int)(iVar7)] = (*(int * PTR32 *)(gen_frame + 0x134))[4];
              iVar7 = iVar7 + 1;
              F_0054f4d0(&(*(int * PTR32 *)(gen_frame + 0x134)));
            } while ((*(int * PTR32 *)(gen_frame + 0x134)) != piVar6);
            (*(int *)(gen_frame + 0x138)) = iVar7;
          }
          uVar5 = F_005effe0(0x2d,&(*(undefined1 *)(gen_frame + 0x13f)));
          piVar6 = (int *)0x0;
          if (uVar5 != 0) {
            piVar6 = *(int * PTR32 *)(uVar5 + 4);
            piVar8 = (int *)*piVar6;
            (*(int * PTR32 *)(gen_frame + 0x130)) = piVar6;
            if (piVar8 != piVar6) {
              do {
                if (0x3b < (*(int *)(gen_frame + 0x138))) break;
                iVar7 = piVar8[4];
                if ((iVar7 != 0) &&
                   (uVar5 = F_00ab2470(*(undefined4 *)(iVar7 + 0x30)),
                   *(char *)(uVar5 + 0x16) == '\x03')) {
                  ((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x138)))] = iVar7;
                  (*(int *)(gen_frame + 0x138)) = (*(int *)(gen_frame + 0x138)) + 1;
                }
                if (*(char *)((int)piVar8 + 0x15) == '\0') {
                  piVar6 = (int *)piVar8[2];
                  if (*(char *)((int)piVar6 + 0x15) == '\0') {
                    cVar1 = *(char *)(*piVar6 + 0x15);
                    piVar8 = piVar6;
                    piVar6 = (int *)*piVar6;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)(*piVar6 + 0x15);
                      piVar8 = piVar6;
                      piVar6 = (int *)*piVar6;
                    }
                  }
                  else {
                    cVar1 = *(char *)(piVar8[1] + 0x15);
                    piVar3 = (int *)piVar8[1];
                    piVar6 = piVar8;
                    while ((piVar8 = piVar3, cVar1 == '\0' && (piVar6 == (int *)piVar8[2]))) {
                      cVar1 = *(char *)(piVar8[1] + 0x15);
                      piVar3 = (int *)piVar8[1];
                      piVar6 = piVar8;
                    }
                  }
                }
              } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x130)));
            }
            (*(int * PTR32 *)(gen_frame + 0x130)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + 0x10);
            (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)0x0;
            do {
              piVar6 = (*(int * PTR32 *)(gen_frame + 0x134));
              if (((*(int * PTR32 *)(gen_frame + 0x134)) < (int *)0x3c) && (piVar8 = (int *)*(*(int * PTR32 *)(gen_frame + 0x130)), piVar8 != (int *)0x0)) {
                iVar7 = 0;
                bVar9 = (*(int *)(gen_frame + 0x138)) == 0;
                if (0 < (*(int *)(gen_frame + 0x138))) {
                  do {
                    iVar2 = ((int *)(gen_frame + 0x0))[(int)(iVar7)];
                    if ((iVar2 != 0) &&
                       (uVar5 = F_00b79f30((*(undefined * PTR32 *)(gen_frame + 0x12c)),piVar6), piVar6 = (*(int * PTR32 *)(gen_frame + 0x134)),
                       *(int *)(uVar5 + 0x78) == *(int *)(iVar2 + 0x14))) break;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (*(int *)(gen_frame + 0x138)));
                  bVar9 = iVar7 == (*(int *)(gen_frame + 0x138));
                }
                if (bVar9) {
                  if (piVar8 != (int *)0x0) {
                    uVar5 = ((code *)*(gen_code32 *)(*piVar8 + 4))(piVar8);
                    ((code *)*(gen_code32 *)(*piVar8 + 0xb0))(piVar8);
                    if (((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) {
                      ((code *)*(gen_code32 *)(*piVar8 + 0xb4))(piVar8,0);
                    }
                    *(*(int * PTR32 *)(gen_frame + 0x130)) = 0;
                    F_00a35760(&REFG(undefined, 0x14a31e0),piVar8);
                    piVar6 = (*(int * PTR32 *)(gen_frame + 0x134));
                  }
                }
                else {
                  ((int *)(gen_frame + 0x0))[(int)(iVar7)] = 0;
                }
              }
              (*(int * PTR32 *)(gen_frame + 0x130)) = (*(int * PTR32 *)(gen_frame + 0x130)) + 1;
              (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)((int)piVar6 + 1U);
            } while ((int)((int)piVar6 + 1U) < 0x3c);
            piVar6 = (int *)0x0;
            (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)0x0;
            if (0 < (*(int *)(gen_frame + 0x138))) {
              do {
                piVar6 = (int *)((int *)(gen_frame + 0x0))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x134)))];
                if (piVar6 != (int *)0x0) {
                  cVar1 = *(char *)((int)piVar6 + 0x11);
                  if (cVar1 == '\b') {
                    piVar8 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x114))(piVar6)));
                    (*(int * PTR32 *)(gen_frame + 0x130)) = piVar8;
                    uVar5 = F_00b7a500((*(undefined * PTR32 *)(gen_frame + 0x12c)),piVar8,piVar6[5]);
                  }
                  else if (cVar1 == '\f') {
                    (*(int * PTR32 *)(gen_frame + 0x130)) = (int *)piVar6[0xc];
                    uVar5 = F_00b7a450((*(undefined * PTR32 *)(gen_frame + 0x12c)),(int *)piVar6[0xc],
                                         (uint)*(ushort *)((int)piVar6 + 0x12),piVar6[5],piVar6[0xd]
                                        );
                  }
                  else {
                    if (cVar1 != '-') goto LAB_00b7a992;
                    (*(int * PTR32 *)(gen_frame + 0x130)) = (int *)piVar6[0xc];
                    uVar5 = F_00b7a390((*(undefined * PTR32 *)(gen_frame + 0x12c)),(int *)piVar6[0xc],
                                         (uint)*(ushort *)((int)piVar6 + 0x12),piVar6[5],piVar6[0xd]
                                        );
                  }
                  if (uVar5 != 0xffffffff) {
                    if (uVar5 < 0x3c) {
                      if ((int)uVar5 < 0x28) {
                        piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + uVar5 * 4 + 0x10);
                      }
                      else {
                        piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + uVar5 * 4 + 0x10);
                      }
                    }
                    else {
                      piVar8 = (int *)0x0;
                    }
                    ((code *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6,((undefined1 *)(gen_frame + 0x110)));
                    ((code *)*(gen_code32 *)(*piVar8 + 0x3c))(piVar8,((undefined1 *)(gen_frame + 0x110)));
                    ((code *)*(gen_code32 *)(*piVar6 + 0x3c))(piVar6,((undefined1 *)(gen_frame + 0xf0)));
                    F_00a1e160(((undefined1 *)(gen_frame + 0x128)),((undefined1 *)(gen_frame + 0xf0)));
                    ((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8);
                    ((code *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6,((undefined4 *)(gen_frame + 0x100)));
                    ((code *)*(gen_code32 *)(*piVar8 + 0x4c))(piVar8,((undefined4 *)(gen_frame + 0x100))[0]);
                    F_00a5f430(piVar8,piVar6[5]);
                    piVar8[0x20] = (int)(*(int * PTR32 *)(gen_frame + 0x130));
                    if ((*(char *)((int)piVar6 + 0x11) != '-') &&
                       (piVar6 = (int *)piVar8[0x3b], piVar6 != (int *)0x0)) {
                      ((code *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6,1);
                    }
                  }
                }
LAB_00b7a992: ;
                piVar6 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x134)) + 1);
                (*(int * PTR32 *)(gen_frame + 0x134)) = piVar6;
              } while ((int)piVar6 < (*(int *)(gen_frame + 0x138)));
            }
          }
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: Client::Game::Object::Aetheryte::vf47 */
unsigned int F_00b7a9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7a9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Game::Object::Aetheryte::vf45 */
uint F_00b7aa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aa00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7aa30 */
unsigned int F_00b7aa30(float gen_a0)
{
  GEN_ENTER(0xb7aa30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b7aa60 */
uint F_00b7aa60(unsigned int gen_a0)
{
  GEN_ENTER(0xb7aa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined2 *)((int)this + 0x16c) = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  iVar2 = 0x1e;
  do {
    *(undefined2 *)(puVar1 + -1) = 0;
    *puVar1 = 0;
    *(undefined2 *)((int)puVar1 + -2) = 0;
    puVar1[1] = 0xe0000000;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)puVar1;
}

/* ref: FUN_00b7aaa0 */
byte F_00b7aaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(ushort *)(in_ecx + 0x16c) & (ushort)param_2) != 0;
}

/* ref: FUN_00b7aac0 */
byte F_00b7aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    if (*puVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00b7aaf0 */
float10 F_00b7aaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aaf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return (float10)0;
  }
  return (float10)*(float *)(in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00b7ab10 */
ushort F_00b7ab10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ab10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return 0xffff;
  }
  return *(ushort *)(in_ecx + 6 + param_2 * 0xc);
}

/* ref: FUN_00b7ab30 */
byte F_00b7ab30(unsigned int gen_a0)
{
  GEN_ENTER(0xb7ab30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (((param_1 < 0xfc) || (0x103 < param_1)) && (1 < param_1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7ab60 */
uint F_00b7ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ab60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return 0;
  }
  return (uint)*(ushort *)(in_ecx + 4 + param_2 * 0xc);
}

/* ref: FUN_00b7ab80 */
uint F_00b7ab80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ab80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + (param_2 * 3 + 3) * 4)));
}

/* ref: FUN_00b7aba0 */
uint F_00b7aba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  ushort * puVar2;
  
  uVar1 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    if (*puVar2 == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar1 < 0x1e);
  return 0xffffffff;
}

/* ref: FUN_00b7abd0 */
ushort F_00b7abd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7abd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    if (*puVar2 == param_1) {
      if (iVar1 == -1) {
        return 0;
      }
      return *(ushort *)((int)this + iVar1 * 0xc + 6);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00b7ac20 */
uint F_00b7ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  uVar2 = 0;
  puVar3 = (ushort *)((int)this + 4);
  do {
    if (*puVar3 != 0) {
      uVar1 = F_00ab1ff0((uint)*puVar3);
      if ((uVar1 != 0) && (*(byte *)(uVar1 + 0xc) == (ushort)param_1)) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 6;
    if (0x1d < (int)uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00b7ac70 */
uint F_00b7ac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7ac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + param_1 * 0xc);
  if (*(short *)((int)pvVar1 + 4) == (short)param_2) {
    *(undefined2 *)((int)pvVar1 + 6) = (undefined2)param_3;
  }
  return (uint)pvVar1;
}

/* ref: FUN_00b7aca0 */
uint F_00b7aca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*(ushort *)(uVar1 + 10);
    if (*(ushort *)(uVar1 + 10) == 0) {
      uVar2 = (*(char *)(uVar1 + 0xf) == '\x02') + 0x25b;
    }
    uVar2 = F_00a7d4b0(uVar2,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,0,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad00 */
uint F_00b7ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00ab4370((uint)*(byte *)(uVar1 + 0x10),*(undefined4 *)this,*(undefined4 *)this,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b7ad30 */
uint F_00b7ad30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7ad30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a7d4b0(0x226,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,param_2,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad80 */
uint F_00b7ad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ad80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_006b8c00();
  bVar1 = F_006c5260(uVar2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar3 = F_00ab1ff0(param_1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00ab4370(((*(char *)(uVar3 + 0xf) != '\x02') - 1 & 0xffffffdf) + 0x49,
                           *(undefined4 *)this,*(undefined4 *)this,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00b7add0 */
unsigned int F_00b7add0(void)
{
  GEN_ENTER(0xb7add0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00b7ade0 */
uint F_00b7ade0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7ade0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = param_3 - 3;
  if (uVar2 < 0x1e) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7aecc) + param_3 + 1)));
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 3: ;
      F_00a77000(param_1,param_1,0,0,0,0,param_4,0,0,0);
      uVar2 = F_00ab4370(0x45,param_1,param_1,0,0);
      return uVar2;
    case 4: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x207,0,0,param_4,0,0,0);
      return uVar2;
    case 0xe: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x212,0,0,param_4,0,0,0);
      return uVar2;
    case 0x20: ;
      F_00ab4370(0x2e,param_1,param_1,0,0);
      bVar1 = F_00a9f620(param_1);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360),0xc,1);
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360),0xd,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b7aef0 */
uint F_00b7aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar2 = (short *)((int)this + 4);
  do {
    sVar1 = *psVar2;
    if (sVar1 != 0) {
      if (sVar1 == 0xad) {
        return 1;
      }
      if (sVar1 == 0xae) {
        return 2;
      }
      if (sVar1 == 0xaf) {
        return 3;
      }
      if (sVar1 == 0xb0) {
        return 0xffffffff;
      }
      if (sVar1 == 0xb1) {
        return 0xfffffffe;
      }
      if (sVar1 == 0xb2) {
        return 0xfffffffd;
      }
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 6;
    if (0x1d < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7af70 */
uint F_00b7af70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  uVar1 = F_00b7aa60(this);
  return uVar1;
}

/* ref: FUN_00b7afa0 */
uint F_00b7afa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7afa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((0x1d < param_2) ||
     (uVar1 = (uint)*(ushort *)(in_ecx + 4 + param_2 * 0xc), uVar2 = 0, uVar1 == 0)) {
    return uVar2 & 0xffffff00;
  }
  if (((uVar1 < 0xfc) || (0x103 < uVar1)) && (1 < uVar1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7aff0 */
uint F_00b7aff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7aff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 in_ecx;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar8 = (float *)((int)this + 8);
  (*(int *)(gen_frame + 0x58)) = 0x1e;
  do {
    fVar6 = gen_bits2f((uint)*(ushort *)(pfVar8 + -1));
    if (*(ushort *)(pfVar8 + -1) != 0) {
      fVar6 = gen_bits2f(F_00ab1ff0((undefined4)gen_fl2bits(fVar6)));
      fVar3 = REFG(undefined4, 0x137104c);
      (*(float *)(gen_frame + 0x50)) = fVar6;
      if (fVar6 != 0.0) {
        if (*(short *)(pfVar8 + -1) == 0x128) {
          fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x170) -
                         (float10)*(float *)((int)gen_fl2bits(REFG(undefined4, 0x137104c)) + 0x1198))));
          (*(float *)(gen_frame + 0x5c)) = fVar2;
          *(float *)((int)this + 0x170) = fVar2;
          fVar6 = fVar3;
          if ((float10)fVar2 <= (float10)0) {
            fVar6 = F_00a4b7d0();
            uVar5 = REFG(float, 0x10f529c);
            in_ecx = *(undefined4 *)this;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f(REFG(float, 0x10f529c));
            (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10f529c);
            (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x10f529c);
            *(float *)((int)this + 0x170) =
                 ((float)GEN_TOF((((float10)fVar6 + (float10)fVar6) + (float10)*(double *)&REFG(undefined, 0x10944e0))));
            (*(undefined4 *)(gen_frame + 0x1c)) = uVar5;
            (*(undefined4 *)(gen_frame + 0x20)) = uVar5;
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
            (*(undefined4 *)(gen_frame + 0x24)) = 0;
            (*(undefined4 *)(gen_frame + 0x28)) = 0;
            (*(undefined4 *)(gen_frame + 0x2c)) = 0;
            (*(undefined4 *)(gen_frame + 0x30)) = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0;
            (*(undefined1 *)(gen_frame + 0x38)) = 0;
            (*(undefined4 *)(gen_frame + 0x3c)) = 0;
            fVar9 = F_00a9fad0(in_ecx);
            (*(float *)(gen_frame + 0x10)) = (float)fVar9;
            fVar6 = F_00a4b7d0();
            fVar6 = (float)((float10)fVar6 * (float10)*(double *)&REFG(undefined, 0x10f59a0) -
                           (float10)*(double *)&REFG(undefined, 0x10f5998));
            (*(float *)(gen_frame + 0x5c)) = fVar6;
            fVar9 = ((float10)GEN_TOD(fsin((float10)fVar6)));
            fVar3 = (float)fVar9;
            (*(float *)(gen_frame + 0x54)) = fVar3;
            (*(float *)(gen_frame + 0x40)) = fVar3;
            fVar9 = ((float10)GEN_TOD(fcos((float10)fVar6)));
            fVar6 = (float)fVar9;
            (*(float *)(gen_frame + 0x54)) = fVar6;
            (*(float *)(gen_frame + 0x48)) = fVar6;
            fVar9 = (float10)*(double *)&REFG(undefined, 0x1094560);
            (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar3 * fVar9);
            (*(float *)(gen_frame + 0x44)) = (float)((float10)0 * fVar9);
            (*(float *)(gen_frame + 0x48)) = (float)(fVar9 * (float10)fVar6);
            pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)this);
            fVar10 = (float10)(*(float *)(gen_frame + 0x40));
            (*(float *)(gen_frame + 0x40)) = (float)(fVar10 + (float10)*pfVar7);
            fVar9 = (float10)(*(float *)(gen_frame + 0x44));
            (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar7[1] + fVar9);
            fVar4 = (float10)(*(float *)(gen_frame + 0x48));
            (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar7[2] + fVar4);
            fVar6 = gen_bits2f(F_00a9f7c0(*(undefined4 *)this,(float)(fVar10 + (float10)*pfVar7),
                                            (float)((float10)pfVar7[1] + fVar9),
                                            (float)((float10)pfVar7[2] + fVar4),(*(float *)(gen_frame + 0x5c)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))
            ;
          }
        }
        if (*(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x50))) + 0x14) == '\0') {
          fVar3 = ((float)GEN_TOF(((float10)*pfVar8 -
                         (float10)*(float *)((int)gen_fl2bits(REFG(undefined4, 0x137104c)) + 0x1198))));
          (*(float *)(gen_frame + 0x50)) = fVar3;
          *pfVar8 = fVar3;
          if ((float10)fVar3 <= (float10)0) {
            *pfVar8 = 0.0;
          }
        }
      }
    }
    pfVar8 = pfVar8 + 3;
    iVar1 = (*(int *)(gen_frame + 0x58)) + -1;
    (*(int *)(gen_frame + 0x58)) = iVar1;
  } while (iVar1 != 0);
  return (uint)gen_fl2bits(fVar6);
}

/* ref: FUN_00b7b1c0 */
uint F_00b7b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0x1e) {
    iVar1 = in_ecx + param_2 * 0xc;
    uVar2 = (uint)*(ushort *)(iVar1 + 4);
    if ((uVar2 != 0) && (((0xfb < uVar2 && (uVar2 < 0x104)) || (uVar2 - 0x105 < 2)))) {
      return (uint)*(ushort *)(iVar1 + 6);
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00b7b200 */
uint F_00b7b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  if (uVar3 != 0) {
    switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
    case 1: ;
      uVar3 = F_00b5b2d0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(uVar3 + 0x88),1);
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 1;
      *(byte *)(*(int *)this + 0x2dd2) = *(byte *)(*(int *)this + 0x2dd2) | 0x20;
      return uVar3;
    case 3: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 2;
      return uVar3;
    case 0xd: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 4;
      return uVar3;
    case 0xe: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 8;
      return uVar3;
    case 0x2f: ;
      piVar2 = (int *)(uVar3 + 0xec);
      uVar3 = 0;
      if (*piVar2 != 0) {
        puVar1 = (ushort *)(*piVar2 + 0x70);
        *puVar1 = *puVar1 | 8;
        *(ushort *)(*(int *)this + 0x1730) = *(ushort *)(*(int *)this + 0x1730) | 8;
        uVar3 = *(uint *)this;
        puVar1 = (ushort *)(uVar3 + 0x1ed0);
        *puVar1 = *puVar1 | 8;
        *(ushort *)(*(int *)this + 0x2670) = *(ushort *)(*(int *)this + 0x2670) | 8;
        return uVar3;
      }
      break;
    case 0x43: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x10;
      return uVar3;
    case 0x5d: ;
    case 0x5e: ;
    case 0x5f: ;
    case 0x60: ;
    case 0x61: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x40;
      break;
    case 0x6f: ;
    case 0x70: ;
    case 0x71: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x20;
      return uVar3;
    case 0xad: ;
    case 0xae: ;
    case 0xaf: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x80;
      return uVar3;
    case 0xb0: ;
    case 0xb1: ;
    case 0xb2: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x100;
      return uVar3;
    case 0xb5: ;
      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x200;
      return 0x200;
    }
  }
  return uVar3;
}

/* ref: FUN_00b7b400 */
uint F_00b7b400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  byte * pbVar2;
  byte bVar3;
  uint in_EAX = 0;
  uint uVar4;
  undefined3 extraout_var = 0;
  int * piVar5;
  undefined * pvVar6;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  undefined3 extraout_var_06 = 0;
  undefined3 extraout_var_07 = 0;
  undefined3 extraout_var_08 = 0;
  undefined3 extraout_var_09 = 0;
  undefined3 extraout_var_10 = 0;
  undefined3 extraout_var_11 = 0;
  undefined3 extraout_var_12 = 0;
  undefined3 extraout_var_13 = 0;
  undefined3 extraout_var_14 = 0;
  undefined3 extraout_var_15 = 0;
  undefined4 uVar7;
  
  pvVar6 = *(undefined * PTR32 *)this;
  if (pvVar6 != (undefined *)0x0) {
    uVar4 = param_1 & 0xffff;
    in_EAX = uVar4;
    if (uVar4 < 0x129) {
      if (uVar4 == 0x128) {
        in_EAX = F_00a9fa00(pvVar6);
      }
      else {
        in_EAX = uVar4 - 1;
        if (in_EAX < 0xf3) {
          in_EAX = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7b740) + uVar4 + 3)));
          switch((unsigned int)(uintptr_t)(uVar4)) {
          case 1: ;
            F_00b5b2d0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)((int)pvVar6 + 0x88),0);
            uVar4 = *(uint *)this;
            pbVar2 = (byte *)(uVar4 + 0x2dd2);
            *pbVar2 = *pbVar2 & 0xdf;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfffe;
            return uVar4;
          case 3: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfffd;
            return in_EAX;
          case 0xd: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfffb;
            return 0xfffb;
          case 0xe: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfff7;
            return in_EAX;
          case 0x2f: ;
            in_EAX = 0;
            if (*(int *)((int)pvVar6 + 0xec) != 0) {
              puVar1 = ((ushort *)GEN_TOP((*(int *)((int)pvVar6 + 0xec) + 0x70)));
              *puVar1 = *puVar1 & 0xfff7;
              *(ushort *)(*(int *)this + 0x1730) = *(ushort *)(*(int *)this + 0x1730) & 0xfff7;
              uVar4 = *(uint *)this;
              puVar1 = (ushort *)(uVar4 + 0x1ed0);
              *puVar1 = *puVar1 & 0xfff7;
              *(ushort *)(*(int *)this + 0x2670) = *(ushort *)(*(int *)this + 0x2670) & 0xfff7;
              return uVar4;
            }
            break;
          case 0x43: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xffef;
            return in_EAX;
          case 0x5d: ;
          case 0x5e: ;
          case 0x5f: ;
          case 0x60: ;
          case 0x61: ;
            bVar3 = F_00b7aac0(this,0x5d);
            in_EAX = CONCAT31(extraout_var_11,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this,0x5e);
              in_EAX = CONCAT31(extraout_var_12,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this,0x5f);
                in_EAX = CONCAT31(extraout_var_13,bVar3);
                if (bVar3 == 0) {
                  bVar3 = F_00b7aac0(this,0x60);
                  in_EAX = CONCAT31(extraout_var_14,bVar3);
                  if (bVar3 == 0) {
                    bVar3 = F_00b7aac0(this,0x61);
                    in_EAX = CONCAT31(extraout_var_15,bVar3);
                    if (bVar3 == 0) {
                      *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xffbf;
                      return in_EAX;
                    }
                  }
                }
              }
            }
            break;
          case 0x6f: ;
          case 0x70: ;
          case 0x71: ;
            bVar3 = F_00b7aac0(this,0x6f);
            in_EAX = CONCAT31(extraout_var_08,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this,0x70);
              in_EAX = CONCAT31(extraout_var_09,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this,0x71);
                in_EAX = CONCAT31(extraout_var_10,bVar3);
                if (bVar3 == 0) {
                  *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xffdf;
                  return 0xffdf;
                }
              }
            }
            break;
          case 0xad: ;
          case 0xae: ;
          case 0xaf: ;
            bVar3 = F_00b7aac0(this,0xad);
            in_EAX = CONCAT31(extraout_var_02,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this,0xae);
              in_EAX = CONCAT31(extraout_var_03,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this,0xaf);
                in_EAX = CONCAT31(extraout_var_04,bVar3);
                if (bVar3 == 0) {
                  *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xff7f;
                  return in_EAX;
                }
              }
            }
            break;
          case 0xb0: ;
          case 0xb1: ;
          case 0xb2: ;
            bVar3 = F_00b7aac0(this,0xb0);
            in_EAX = CONCAT31(extraout_var_05,bVar3);
            if (bVar3 == 0) {
              bVar3 = F_00b7aac0(this,0xb1);
              in_EAX = CONCAT31(extraout_var_06,bVar3);
              if (bVar3 == 0) {
                bVar3 = F_00b7aac0(this,0xb2);
                in_EAX = CONCAT31(extraout_var_07,bVar3);
                if (bVar3 == 0) {
                  *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfeff;
                  return in_EAX;
                }
              }
            }
            break;
          case 0xb5: ;
            *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) & 0xfdff;
            return 0xfdff;
          case 0xdd: ;
            bVar3 = F_00a9f620(pvVar6);
            in_EAX = CONCAT31(extraout_var_00,bVar3);
            if (bVar3 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              in_EAX = 0;
              if (piVar5 != (int *)0x0) {
                uVar7 = 0x1f;
                uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
                pvVar6 = (undefined *)F_00763050(uVar4,uVar7);
                in_EAX = 0;
                if (pvVar6 != (undefined *)0x0) {
                  uVar4 = F_00773e40(pvVar6,2);
                  return uVar4;
                }
              }
            }
            break;
          case 0xde: ;
            bVar3 = F_00a9f620(pvVar6);
            in_EAX = CONCAT31(extraout_var_01,bVar3);
            if (bVar3 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              in_EAX = 0;
              if (piVar5 != (int *)0x0) {
                uVar7 = 0x1f;
                uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
                pvVar6 = (undefined *)F_00763050(uVar4,uVar7);
                in_EAX = 0;
                if (pvVar6 != (undefined *)0x0) {
                  uVar4 = F_00773e40(pvVar6,1);
                  return uVar4;
                }
              }
            }
            break;
          case 0xe9: ;
          case 0xea: ;
          case 0xf2: ;
          case 0xf3: ;
            bVar3 = F_00a9f620(pvVar6);
            in_EAX = CONCAT31(extraout_var,bVar3);
            if (bVar3 != 0) {
              piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c));
              in_EAX = 0;
              if (piVar5 != (int *)0x0) {
                uVar7 = 0x1f;
                uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
                pvVar6 = (undefined *)F_00763050(uVar4,uVar7);
                in_EAX = 0;
                if (pvVar6 != (undefined *)0x0) {
                  uVar4 = F_00773e40(pvVar6,0);
                  return uVar4;
                }
              }
            }
          }
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b7b840 */
uint F_00b7b840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb7b840u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2;
  if (param_2 < 0x1e) {
    uVar2 = (uint)*(ushort *)((int)param_1 + param_2 * 0xc + 4);
    *(undefined2 *)((int)param_1 + param_2 * 0xc + 6) = (undefined2)param_5;
    *(short *)((int)param_1 + param_2 * 0xc + 4) = (short)param_3;
    *(float *)((int)param_1 + param_2 * 0xc + 8) = param_4;
    *(undefined4 *)((int)param_1 + param_2 * 0xc + 0xc) = param_6;
    uVar1 = param_3 & 0xffff;
    if (uVar2 != uVar1) {
      F_00b7b400(param_1,uVar2);
      uVar1 = F_00b7b200(param_1,param_3);
    }
  }
  return uVar1;
}

/* ref: FUN_00b7b8a0 */
uint F_00b7b8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 < 0x1e) {
    uVar1 = *(ushort *)((int)this + param_1 * 0xc + 4);
    *(undefined2 *)((int)this + param_1 * 0xc + 4) = 0;
    *(undefined4 *)((int)this + param_1 * 0xc + 8) = 0;
    *(undefined2 *)((int)this + param_1 * 0xc + 6) = 0;
    *(undefined4 *)((int)this + param_1 * 0xc + 0xc) = 0xe0000000;
    uVar2 = F_00b7b400(this,(uint)uVar1);
  }
  return uVar2;
}

/* ref: FUN_00b7b8e0 */
uint F_00b7b8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7b8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  ushort * puVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = 0;
  puVar7 = (ushort *)((int)this + 4);
  do {
    ((ushort *)(gen_frame + 0xc))[(int)(iVar6)] = *puVar7;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x1e);
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar7 = (ushort *)((int)this + 4);
  puVar9 = (ushort *)(param_1 + 2);
  do {
    uVar2 = *puVar9;
    uVar5 = *(undefined4 *)(puVar9 + 3);
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[-1];
    if ((*(uint *)(gen_frame + 0x4)) < 0x1e) {
      uVar4 = *puVar7;
      *puVar7 = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar5;
      if ((uint)uVar4 != (uint)uVar3) {
        F_00b7b400(this,(uint)uVar4);
        F_00b7b200(this,(uint)uVar3);
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    puVar9 = puVar9 + 6;
    puVar7 = puVar7 + 6;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 0x1e);
  iVar6 = 0;
  do {
    uVar2 = ((ushort *)(gen_frame + 0xc))[(int)(iVar6)];
    iVar8 = 0;
    puVar7 = (ushort *)(param_1 + 0x18);
    do {
      if (uVar2 == puVar7[-0xc]) break;
      if (uVar2 == puVar7[-6]) {
        iVar8 = iVar8 + 1;
        break;
      }
      if (uVar2 == *puVar7) {
        iVar8 = iVar8 + 2;
        break;
      }
      if (uVar2 == puVar7[6]) {
        iVar8 = iVar8 + 3;
        break;
      }
      if (uVar2 == puVar7[0xc]) {
        iVar8 = iVar8 + 4;
        break;
      }
      if (uVar2 == puVar7[0x12]) {
        iVar8 = iVar8 + 5;
        break;
      }
      iVar8 = iVar8 + 6;
      puVar7 = puVar7 + 0x24;
    } while (iVar8 < 0x1e);
    if (iVar8 == 0x1e) {
      puVar7 = (ushort *)F_00b7b400(this,(uint)((ushort *)(gen_frame + 0xc))[(int)(iVar6)]);
    }
    iVar6 = iVar6 + 1;
    if (0x1d < iVar6) {
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00b7ba00 */
uint F_00b7ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort * puVar7;
  int iVar8;
  ushort * puVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  iVar6 = 0;
  puVar7 = (ushort *)((int)this + 4);
  do {
    ((ushort *)(gen_frame + 0xc))[(int)(iVar6)] = *puVar7;
    iVar6 = iVar6 + 1;
    puVar7 = puVar7 + 6;
  } while (iVar6 < 0x1e);
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar7 = (ushort *)((int)this + 4);
  puVar9 = (ushort *)(param_1 + 2);
  do {
    uVar2 = *puVar9;
    uVar5 = *(undefined4 *)(puVar9 + 3);
    uVar1 = *(undefined4 *)(puVar9 + 1);
    uVar3 = puVar9[-1];
    if ((*(uint *)(gen_frame + 0x4)) < 0x1e) {
      uVar4 = *puVar7;
      *puVar7 = uVar3;
      *(undefined4 *)(puVar7 + 2) = uVar1;
      puVar7[1] = uVar2;
      *(undefined4 *)(puVar7 + 4) = uVar5;
      if ((uint)uVar4 != (uint)uVar3) {
        F_00b7b400(this,(uint)uVar4);
        F_00b7b200(this,(uint)uVar3);
      }
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    puVar9 = puVar9 + 6;
    puVar7 = puVar7 + 6;
  } while ((int)(*(uint *)(gen_frame + 0x4)) < 0x1e);
  iVar6 = 0;
  do {
    uVar2 = ((ushort *)(gen_frame + 0xc))[(int)(iVar6)];
    iVar8 = 0;
    puVar7 = (ushort *)(param_1 + 0x18);
    do {
      if (uVar2 == puVar7[-0xc]) break;
      if (uVar2 == puVar7[-6]) {
        iVar8 = iVar8 + 1;
        break;
      }
      if (uVar2 == *puVar7) {
        iVar8 = iVar8 + 2;
        break;
      }
      if (uVar2 == puVar7[6]) {
        iVar8 = iVar8 + 3;
        break;
      }
      if (uVar2 == puVar7[0xc]) {
        iVar8 = iVar8 + 4;
        break;
      }
      if (uVar2 == puVar7[0x12]) {
        iVar8 = iVar8 + 5;
        break;
      }
      iVar8 = iVar8 + 6;
      puVar7 = puVar7 + 0x24;
    } while (iVar8 < 0x1e);
    if (iVar8 == 0x1e) {
      puVar7 = (ushort *)F_00b7b400(this,(uint)((ushort *)(gen_frame + 0xc))[(int)(iVar6)]);
    }
    iVar6 = iVar6 + 1;
    if (0x1d < iVar6) {
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return (uint)puVar7;
    }
  } while( true );
}

/* ref: FUN_00b7bb20 */
uint F_00b7bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7bb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  ushort * puVar3;
  
  if (param_1 != 0) {
    if ((char)param_3 != '\0') {
      uVar2 = F_00ab1ff0(param_1);
      if (uVar2 != 0) {
        F_00a7d4b0(0x226,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,param_2,0,0,
                     REFG(float, 0x10916ec));
      }
    }
    if ((char)param_4 != '\0') {
      F_00b7ad80(this,param_1);
    }
    in_EAX = 0;
    puVar3 = (ushort *)((int)this + 4);
    while (*puVar3 != param_1) {
      in_EAX = in_EAX + 1;
      puVar3 = puVar3 + 6;
      if (0x1d < (int)in_EAX) {
        return in_EAX;
      }
    }
    if (in_EAX < 0x1e) {
      uVar1 = *(ushort *)((int)this + in_EAX * 0xc + 4);
      *(undefined2 *)((int)this + in_EAX * 0xc + 4) = 0;
      *(undefined4 *)((int)this + in_EAX * 0xc + 8) = 0;
      *(undefined2 *)((int)this + in_EAX * 0xc + 6) = 0;
      *(undefined4 *)((int)this + in_EAX * 0xc + 0xc) = 0xe0000000;
      in_EAX = F_00b7b400(this,(uint)uVar1);
    }
  }
  return in_EAX;
}

/* ref: FUN_00b7bbd0 */
uint F_00b7bbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7bbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ushort * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    uVar1 = (uint)*puVar2;
    if ((*puVar2 != 0) && (uVar3 < 0x1e)) {
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0xe000;
      uVar1 = F_00b7b400(this,uVar1);
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar3 < 0x1e);
  return uVar1;
}

/* ref: FUN_00b7bc20 */
byte F_00b7bc20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7bc20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  ushort * puVar4;
  
  piVar2 = REFG(int * PTR32, 0x1379694);
  if (REFG(int * PTR32, 0x1379694) == (int *)0x0) {
    return 0;
  }
  uVar3 = F_00ab1ff0(param_1);
  if (((uVar3 != 0) && (*(char *)(uVar3 + 0xf) == '\x01')) && (*(char *)(uVar3 + 0x16) != '\x01')) {
    F_00a51200(7,param_1,0,0,0);
    ((code *)*(gen_code32 *)(*piVar2 + 0xd4))(piVar2);
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xd4))(piVar2)));
    if (param_1 != 0) {
      uVar3 = 0;
      puVar4 = (ushort *)((int)this + 4);
      while (*puVar4 != param_1) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 6;
        if (0x1d < (int)uVar3) {
          return 1;
        }
      }
      if (uVar3 < 0x1e) {
        uVar1 = *(ushort *)((int)this + uVar3 * 0xc + 4);
        *(undefined2 *)((int)this + uVar3 * 0xc + 4) = 0;
        *(undefined2 *)((int)this + uVar3 * 0xc + 6) = 0;
        *(undefined4 *)((int)this + uVar3 * 0xc + 8) = 0;
        *(undefined4 *)((int)this + uVar3 * 0xc + 0xc) = 0xe0000000;
        F_00b7b400(this,(uint)uVar1);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b7bce0 */
unsigned int F_00b7bce0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7bce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  int iVar2;
  undefined2 * puVar3;
  int local_8;
  
  *(undefined2 *)((int)this + 0x16c) = 0;
  puVar3 = (undefined2 *)((int)this + 4);
  local_8 = 0x1e;
  do {
    iVar2 = *(int *)this;
    if (iVar2 != 0) {
      switch((unsigned int)(uintptr_t)(*puVar3)) {
      case 1: ;
        F_00b5b2d0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(iVar2 + 0x88),1);
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 1;
        *(byte *)(*(int *)this + 0x2dd2) = *(byte *)(*(int *)this + 0x2dd2) | 0x20;
        break;
      case 3: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 2;
        break;
      case 0xd: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 4;
        break;
      case 0xe: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 8;
        break;
      case 0x2f: ;
        if (*(int *)(iVar2 + 0xec) != 0) {
          puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar2 + 0xec) + 0x70)));
          *puVar1 = *puVar1 | 8;
          *(ushort *)(*(int *)this + 0x1730) = *(ushort *)(*(int *)this + 0x1730) | 8;
          *(ushort *)(*(int *)this + 0x1ed0) = *(ushort *)(*(int *)this + 0x1ed0) | 8;
          *(ushort *)(*(int *)this + 0x2670) = *(ushort *)(*(int *)this + 0x2670) | 8;
        }
        break;
      case 0x43: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x10;
        break;
      case 0x5d: ;
      case 0x5e: ;
      case 0x5f: ;
      case 0x60: ;
      case 0x61: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x40;
        break;
      case 0x6f: ;
      case 0x70: ;
      case 0x71: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x20;
        break;
      case 0xad: ;
      case 0xae: ;
      case 0xaf: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x80;
        break;
      case 0xb0: ;
      case 0xb1: ;
      case 0xb2: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x100;
        break;
      case 0xb5: ;
        *(ushort *)((int)this + 0x16c) = *(ushort *)((int)this + 0x16c) | 0x200;
      }
    }
    puVar3 = puVar3 + 6;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00b7bee0 */
byte F_00b7bee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7bee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0x2dd2)) & 0x20;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: Client::Game::WeatherManager::WeatherInterface::vf0 */
uint F_00b7bf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7bf40 */
unsigned int F_00b7bf40(float gen_a0)
{
  GEN_ENTER(0xb7bf40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00b7bf80 */
byte F_00b7bf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7bf80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 8) = 0;
  uVar1 = REFG(float, 0x10f59a8);
  *(byte *)(in_ecx + 4) = (byte)param_2;
  *(byte *)(in_ecx + 5) = (byte)param_2;
  *(undefined4 *)(in_ecx + 0xc) = uVar1;
  return (byte)param_2;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf3 */
unsigned int F_00b7bfb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7bfb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  if ((char)param_2 != '\0') {
    *(char *)(in_ecx + 4) = (char)param_2;
    if (*(char *)(in_ecx + 5) == '\0') {
      *(char *)(in_ecx + 5) = (char)param_2;
    }
    fVar1 = (float10)REFG(double, 0x1088108);
    *(float *)(in_ecx + 0xc) = param_3;
    *(float *)(in_ecx + 8) = (float)((float10)param_3 * fVar1);
  }
  return 0;
}

/* ref: FUN_00b7c040 */
uint F_00b7c040(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10f59a8);
  *(undefined2 *)((int)this + 0x30) = 0x202;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)this = (int)this + 0xc;
  *(undefined1 *)((int)this + 0x40) = 0;
  *(int *)((int)this + 4) = (int)this + 0x1c;
  *(uint *)((int)this + 8) = (int)this + 0x2cU;
  *(undefined4 *)((int)this + 0x3c) = 3;
  return (int)this + 0x2cU;
}

/* ref: FUN_00b7c0a0 */
uint F_00b7c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0xc))))(param_1,REFG(float, 0x10f59a8));
  return uVar1;
}

/* ref: FUN_00b7c0c0 */
byte F_00b7c0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2c) + 8))))((int)this + 0x2c);
  return (byte)uVar1;
}

/* ref: FUN_00b7c0d0 */
uint F_00b7c0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb7c0d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + param_2 * 4) + 0xc))))
                    (param_3,(undefined4)gen_fl2bits(param_4));
  return uVar1;
}

/* ref: FUN_00b7c0f0 */
uint F_00b7c0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + param_2 * 4);
  *(undefined2 *)(uVar1 + 4) = 0;
  *(undefined4 *)(uVar1 + 8) = 0;
  return uVar1;
}

/* ref: FUN_00b7c110 */
uint F_00b7c110(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7c110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = **(int * PTR32 *)(param_1 + param_2 * 4);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 0x18))))((undefined4)gen_fl2bits(param_3));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(param_1 + param_2 * 4),uVar2 & 0xff);
  return uVar2;
}

/* ref: FUN_00b7c150 */
uint F_00b7c150(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7c150u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = **(int * PTR32 *)(param_1 + param_2 * 4);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x2c) + 0x10))))((undefined4)gen_fl2bits(param_3));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(param_1 + param_2 * 4),uVar2 & 0xff);
  return uVar2;
}

/* ref: FUN_00b7c190 */
byte F_00b7c190(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)((int)this + 0x3c);
  if (bVar2 == 3) {
    bVar2 = 2;
  }
  piVar1 = *(int * PTR32 *)((int)this + (uint)bVar2 * 4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  return (byte)uVar3;
}

/* ref: FUN_00b7c1b0 */
byte F_00b7c1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = *(byte *)((int)this + 0x3c);
  if (bVar2 == 3) {
    bVar2 = 2;
  }
  piVar1 = *(int * PTR32 *)((int)this + (uint)bVar2 * 4);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  return (byte)uVar3;
}

/* ref: FUN_00b7c1d0 */
uint F_00b7c1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 3;
  uVar3 = 0;
  do {
    if ((int)uVar4 < 3) {
      return uVar4;
    }
    piVar1 = *(int * PTR32 *)((int)this + uVar3 * 4);
    if ((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), (char)uVar2 != '\0'))
    {
      uVar4 = uVar3;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return uVar4;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf5 */
byte F_00b7c210(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = REFG(undefined4, 0x137104c);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 8) - (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))));
  *(float *)(in_ecx + 8) = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    bVar2 = *(byte *)(in_ecx + 4);
    uVar3 = (uint)bVar2;
    *(undefined4 *)(in_ecx + 8) = 0;
    if (*(byte *)(in_ecx + 5) != bVar2) {
      *(byte *)(in_ecx + 5) = bVar2;
    }
  }
  return (byte)uVar3;
}

/* ref: FUN_00b7c250 */
uint F_00b7c250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7c250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = REFG(float, 0x10f59a8);
  *(undefined1 *)((int)this + 0x30) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x31) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 8) = (int)this + 0x2c;
  *(int *)this = (int)this + 0xc;
  *(int *)((int)this + 4) = (int)this + 0x1c;
  *(undefined4 *)((int)this + 0x3c) = 3;
  *(undefined1 *)((int)this + 0x40) = 0;
  iVar2 = REFG(int, 0x137104c);
  uVar3 = F_00ab1c90(param_2 & 0xffff);
  uVar4 = 0;
  if ((uVar3 != 0) && (uVar4 = *(uint *)(uVar3 + 0x18), uVar4 < 0x960)) {
    uVar4 = F_00b7c780((undefined *)(iVar2 + 0x1210),uVar4);
    return uVar4;
  }
  *(undefined1 *)(iVar2 + 0x1231) = 0;
  *(undefined4 *)(iVar2 + 0x1228) = 0;
  *(undefined4 *)(iVar2 + 0x122c) = 0;
  return uVar4;
}

/* ref: FUN_00b7c2f0 */
unsigned int F_00b7c2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float10 extraout_ST0;
  float local_8;
  
  uVar5 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + uVar5 * 4);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  uVar5 = 3;
  uVar6 = 0;
  do {
    if ((int)uVar5 < 3) goto LAB_00b7c344;
    piVar1 = *(int * PTR32 *)((int)this + uVar6 * 4);
    if (piVar1 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if ((char)uVar4 != '\0') {
        uVar5 = uVar6;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  if ((int)uVar5 < 3) {
LAB_00b7c344: ;
    piVar1 = *(int * PTR32 *)((int)this + uVar5 * 4);
    if (piVar1 != (int *)0x0) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
      local_8 = (float)extraout_ST0;
      if (*(uint *)((int)this + 0x3c) != uVar5) {
        local_8 = 0.0;
      }
      *(uint *)((int)this + 0x3c) = uVar5;
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      iVar2 = REFG(int, 0x1371290);
      cVar3 = (char)uVar5;
      if ((cVar3 != *(char *)((int)this + 0x40)) ||
         ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
          ((GEN_ISNAN(local_8) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || local_8 == *(float *)&REFG(undefined, 0x1088114)))) {
        *(char *)(REFG(int, 0x1371290) + 0x23) = cVar3;
        *(float *)(iVar2 + 0x24) = local_8;
        *(char *)((int)this + 0x40) = cVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b7c3b0 */
uint F_00b7c3b0(void)
{
  GEN_ENTER(0xb7c3b0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  undefined4 extraout_EDX_02 = 0;
  float10 fVar8;
  float10 fVar9;
  ulonglong uVar10;
  ulonglong uStackY_58;
  
  iVar5 = REFG(int, 0x137104c);
  uVar10 = F_00b7c610((undefined *)(REFG(int, 0x137104c) + 0x1210));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0] = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  (*(ulonglong *)(gen_frame + 0xc)) = uVar10;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  uVar6 = F_00428080(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),0);
  uStackY_58 = CONCAT44(extraout_EDX,uVar6);
  uVar6 = (uint)((uStackY_58 / 0xe10) % 0x18);
  uVar7 = (*((code *)GEN_TOP(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0][1])))(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),0);
  uStackY_58 = CONCAT44(extraout_EDX_00,uVar7);
  uVar10 = uStackY_58 / 0x3c;
  uVar7 = (*((code *)GEN_TOP(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4))[0][1])))(((undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),0);
  uStackY_58 = CONCAT44(extraout_EDX_01,uVar7);
  iVar2 = (int)(uStackY_58 % 0x3c);
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(iVar2);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x30)) + 4)) = (float)iVar2;
  (*(double *)(gen_frame + 0x30)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((float)iVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x30)) + 0))));
  iVar3 = ((int)(uVar10 % 0x3c) + uVar6 * 0x3c) * 0x3c;
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(iVar3);
  fVar1 = (float)((float10)iVar3 + (float10)iVar2);
  (*(float *)(gen_frame + 0x38)) = fVar1;
  *(float *)(REFG(int, 0x1371290) + 0xc) = fVar1;
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar5 + 0x1210) + 4))))(iVar5 + 0x1210,0);
  uStackY_58 = CONCAT44(extraout_EDX_02,uVar7);
  uVar7 = (uint)((uStackY_58 / 0x15180) % (ulonglong)REFG(undefined4, 0x10e90e8));
  if (0xb < uVar6) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 % REFG(undefined4, 0x10e90e8);
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(uVar7);
  fVar8 = (float10)(int)uVar7;
  if ((int)uVar7 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(REFG(undefined4, 0x10e90e8));
  fVar9 = (float10)(int)REFG(undefined4, 0x10e90e8);
  if ((int)REFG(undefined4, 0x10e90e8) < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x38)) = (float)(fVar8 / fVar9);
  fVar1 = ((float)GEN_TOF(((float10)1 - (float10)(float)(fVar8 / fVar9))));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  dVar4 = (double)fVar1;
  (*(double *)(gen_frame + 0x30)) = dVar4;
  fVar8 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar4),
                       (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
  uVar6 = REFG(undefined4, 0x137128c);
  (*(float *)(gen_frame + 0x38)) = (float)fVar8;
  *(float *)(REFG(undefined4, 0x137128c) + 0x1620) = (float)((float10)(*(double *)(gen_frame + 0x30)) - (float10)(float)fVar8);
  return uVar6;
}

/* ref: FUN_00b7c570 */
uint F_00b7c570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb7c570u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  param_1[2] = param_2;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x108bed4));
  param_1[3] = param_3;
  param_1[4] = (undefined4)gen_fl2bits(param_4);
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  return (uint)param_1;
}

/* ref: FUN_00b7c5b0 */
uint F_00b7c5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7c5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 * 0x3c + param_2;
  iVar2 = ((((((int)param_1 >> 0x1f) << 4 | param_1 >> 0x1c) - ((int)param_1 >> 0x1f)) -
           (uint)(param_1 * 0x10 < param_1)) * 4 | param_1 * 0xf >> 0x1e) + ((int)param_2 >> 0x1f) +
          (uint)CARRY4(param_1 * 0x3c,param_2);
  *(undefined1 *)((int)this + 0x21) = 1;
  *(uint *)((int)this + 0x18) = uVar1 * 0x3c;
  *(uint *)((int)this + 0x1c) =
       (((iVar2 * 0x10 | uVar1 >> 0x1c) - iVar2) - (uint)(uVar1 * 0x10 < uVar1)) * 4 |
       uVar1 * 0xf >> 0x1e;
  return uVar1 * 0x3c;
}

/* ref: FUN_00b7c610 */
ulonglong F_00b7c610(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong * puVar1;
  uint uVar2;
  int extraout_EDX = 0;
  bool bVar3;
  float10 fVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0);
  puVar1 = (ulonglong *)((int)this + 0x38);
  fVar4 = -(float10)(longlong)(((ulonglong)*(uint *)((int)this + 0x3c) & 0x80000000) << 0x20) +
          (float10)(*puVar1 & 0x7fffffffffffffff);
  bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)0);
  if (bVar3 != (bVar3 || fVar4 == (float10)0)) {
    return CONCAT44(extraout_EDX,uVar2);
  }
  if (*(char *)((int)this + 0x40) != '\0') {
    return *puVar1;
  }
  return CONCAT44(extraout_EDX + *(uint *)((int)this + 0x3c) + (uint)CARRY4(uVar2,*(uint *)puVar1),
                  uVar2 + *(uint *)puVar1);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf1 */
byte F_00b7c6c0(void)
{
  GEN_ENTER(0xb7c6c0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf2 */
byte F_00b7c6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf4 */
byte F_00b7c6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf6 */
byte F_00b7c6f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf7 */
unsigned int F_00b7c700(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c700u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::Game::WeatherManager::ServerWeather::vf0 */
uint F_00b7c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7c740 */
uint F_00b7c740(float gen_a0)
{
  GEN_ENTER(0xb7c740u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar1;
  uint uVar2;
  float10 fVar3;
  
  dVar1 = (double)(float)((float10)1 - (float10)param_1);
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar1),
                       (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
  uVar2 = REFG(undefined4, 0x137128c);
  *(float *)(REFG(undefined4, 0x137128c) + 0x1620) =
       ((float)GEN_TOF(((float10)(float)((float10)1 - (float10)param_1) - (float10)(float)fVar3)));
  return uVar2;
}

/* ref: FUN_00b7c780 */
uint F_00b7c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c780u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * PTR32 * ppvVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))) = 1;
  if ((*(uint *)&gen_args[1]) < 0x961) {
    uVar2 = (*(uint *)&gen_args[1]) / 100;
    uVar4 = (*(uint *)&gen_args[1]) % 100;
    (*(uint *)&gen_args[1]) = uVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x3b;
    ppvVar3 = (undefined * PTR32 *)&(*(uint *)&gen_args[1]);
    if (0x3a < uVar4) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    pvVar1 = *ppvVar3;
    pvVar5 = (undefined *)(uVar2 * 0x3c + (int)pvVar1);
    iVar6 = (uint)(uVar2 * 0x10 < uVar2) * -4 + ((int)((int)(uintptr_t)pvVar1) >> 0x1f) +
            (uint)CARRY4(uVar2 * 0x3c,(uint)pvVar1);
    in_EAX = (int)((int)(uintptr_t)pvVar5) * 0x3c;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21))) = 1;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = in_EAX;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) =
         (((iVar6 * 0x10 | (uint)((int)(uintptr_t)pvVar5) >> 0x1c) - iVar6) -
         (uint)((undefined *)((int)((int)(uintptr_t)pvVar5) * 0x10) < pvVar5)) * 4 | (uint)((int)((int)(uintptr_t)pvVar5) * 0xf) >> 0x1e;
  }
  return in_EAX;
}

/* ref: Client::Game::WeatherManager::Weather::vf1 */
byte F_00b7c830(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 5) != '\0';
}

/* ref: Client::Game::WeatherManager::Weather::vf0 */
uint F_00b7c840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7c840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10f60e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf4 */
uint F_00b7c890(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x14);
}

/* ref: FUN_00b7c8a0 */
uint F_00b7c8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7c8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406ad0(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  uVar1 = F_00b65520(this);
  return uVar1;
}

/* ref: FUN_00b7c8d0 */
uint F_00b7c8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7c8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = param_2;
  F_00b66510(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  if (*(*(int * PTR32 *)(gen_frame + 0x2c)) == 0x41) {
    bVar9 = (char)(*(int * PTR32 *)(gen_frame + 0x2c))[0x10] != '\0';
  }
  else {
    bVar9 = false;
  }
  *(bool *)((int)this + 0x16) = bVar9;
  iVar8 = (*(int * PTR32 *)(gen_frame + 0x2c))[0xd];
  *(short *)((int)this + 0x14) = (short)iVar8;
  if ((short)iVar8 != 0) {
    fVar4 = (float10)0;
    fVar1 = param_1[9];
    (*(float *)(gen_frame + 0x60)) = (float)fVar4;
    ((float *)(gen_frame + 0x30))[0] = param_1[8];
    (*(float *)(gen_frame + 0x64)) = (float)fVar4;
    (*(float *)(gen_frame + 0x68)) = (float)fVar4;
    ((float *)(gen_frame + 0x30))[1] = 0.0;
    ((float *)(gen_frame + 0x30))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(float *)(gen_frame + 0x44)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = param_1[10];
    F_004efe70(((float *)(gen_frame + 0x30)),(uint)(param_1 + 4));
    (*(float *)(gen_frame + 0x60)) = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x64)) = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x68)) = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x68)));
    uVar5 = F_00406bb0((uint)*(ushort *)((int)this + 0x14) * 0x10,0,0);
    *(uint *)((int)this + 0x10) = uVar5;
    (*(int *)(gen_frame + 0x28)) = 0;
    if (*(short *)((int)this + 0x14) != 0) {
      iVar8 = 0;
      do {
        puVar6 = (undefined4 *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8);
        (*(undefined4 *)(gen_frame + 0x10)) = *puVar6;
        (*(undefined4 *)(gen_frame + 0x14)) = puVar6[1];
        (*(undefined4 *)(gen_frame + 0x18)) = puVar6[2];
        puVar6 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),((float *)(gen_frame + 0x30)));
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        iVar7 = *(int *)((int)this + 0x10);
        *(undefined4 *)(iVar7 + iVar8) = *puVar6;
        *(undefined4 *)(iVar7 + 4 + iVar8) = uVar2;
        *(undefined4 *)(iVar7 + 8 + iVar8) = uVar3;
        *((undefined2 *)GEN_TOP((iVar8 + 0xc + *(int *)((int)this + 0x10)))) =
             *(undefined2 *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8 + 0xc);
        *((undefined1 *)GEN_TOP((iVar8 + 0xe + *(int *)((int)this + 0x10)))) =
             *(undefined1 *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (*(int * PTR32 *)(gen_frame + 0x2c))[0xc] + iVar8 + 0xe);
        iVar7 = (*(int *)(gen_frame + 0x28)) + 1;
        iVar8 = iVar8 + 0x10;
        (*(int *)(gen_frame + 0x28)) = iVar7;
      } while (iVar7 < (int)(uint)*(ushort *)((int)this + 0x14));
    }
  }
  if (*(ushort *)((int)this + 0x14) < 3) {
    *(undefined2 *)((int)this + 0xc) = 0;
  }
  else {
    *(undefined2 *)((int)this + 0xc) = 2;
    F_00b66cc0(this,(uint)*(ushort *)((int)this + 0x14),*(undefined4 *)((int)this + 0x10),
                 (uint)(*(char *)((int)this + 0x16) != '\0'));
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf6 */
ushort F_00b7cae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0xc + param_2 * 0x10)));
}

/* ref: FUN_00b7cb00 */
uint F_00b7cb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x30) + param_1 * 0x10 + (int)this;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf1 */
uint F_00b7cb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7cb20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x10) + param_3 * 0x10;
  *param_2 = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_3 * 0x10)));
  param_2[1] = *(undefined4 *)(iVar1 + 4);
  param_2[2] = *(undefined4 *)(iVar1 + 8);
  return (uint)param_2;
}

/* ref: FUN_00b7cb50 */
uint F_00b7cb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7cb50u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x10 + *(int *)(in_ecx + 0x10))));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: Client::DevEnv::Common::ControlPoint::LayoutPath::vf0 */
uint F_00b7cbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f6150));
  if (*(int *)(this + 0x10) != 0) {
    F_00406ad0(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  F_00b65520(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf43 */
uint F_00b7cc40(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf42 */
uint F_00b7cc50(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: FUN_00b7cc60 */
unsigned int F_00b7cc60(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x88);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00b5bab0(REFG(void * PTR32, 0x14c4e84),puVar3[4]);
    }
    puVar4 = (undefined4 *)puVar3[4];
    if (puVar4 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b7cce0 */
uint F_00b7cce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  this_00 = (undefined *)F_00406b90(0x90,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_00becaf0(this_00,param_1);
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,8);
  piVar2[0x21] = *(int *)((int)this + 0x80);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar3 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar3 = *(undefined4 *)((int)this + 0x88);
  puVar3[1] = *(undefined4 *)((int)this + 0x88);
  puVar3[2] = *(undefined4 *)((int)this + 0x88);
  *(undefined2 *)(puVar3 + 5) = 0;
  if (puVar3 + 3 != (undefined4 *)0x0) {
    puVar3[3] = uVar1;
    puVar3[4] = piVar2;
  }
  uVar4 = F_00b7db30((undefined *)((int)this + 0x84),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
  return uVar4;
}

/* ref: FUN_00b7cd90 */
uint F_00b7cd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  F_00bf0d90(this,param_1 + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  *(int *)((int)this + 0x80) = param_1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  uVar1 = F_004296a0(0x18,0,0x136);
  *(uint *)((int)this + 0x88) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) = *(int *)((int)this + 0x88);
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) = *(int *)((int)this + 0x88);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00b7ce00 */
unsigned int F_00b7ce00(unsigned int gen_a0)
{
  GEN_ENTER(0xb7ce00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  if (*(int *)((int)this + 0x80) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + 0x3c))) = 0;
  }
  F_00b7cc60(this);
  F_00b7dc30((undefined *)((int)this + 0x84),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x88),
               *(undefined4 * PTR32 *)((int)this + 0x88));
  F_00429760(*(undefined4 *)((int)this + 0x88),0x18,0x136);
  F_00bf0db0(this);
  return 0;
}

/* ref: FUN_00b7ce60 */
uint F_00b7ce60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ce60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00bf0d90(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x10f617c));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  uVar1 = F_004296a0(0x18,0,0x136);
  *(uint *)((int)this + 0x88) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 4))) = *(int *)((int)this + 0x88);
  *((int *)GEN_TOP((*(int *)((int)this + 0x88) + 8))) = *(int *)((int)this + 0x88);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x88) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_00b7cef0 */
byte F_00b7cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b7cf20 */
uint F_00b7cf20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cf20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7cf30 */
uint F_00b7cf30(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00b7cf60 */
uint F_00b7cf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7cf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7cfb0 */
uint F_00b7cfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00b7cfc0 */
uint F_00b7cfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00b7cfd0 */
uint F_00b7cfd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00b7cfe0 */
uint F_00b7cfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cfe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00b7cff0 */
uint F_00b7cff0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7cff0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00b7d010 */
uint F_00b7d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x136);
  return uVar1;
}

/* ref: FUN_00b7d040 */
uint F_00b7d040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d060 */
uint F_00b7d060(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00b7d090 */
uint F_00b7d090(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d0a0 */
uint F_00b7d0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d0a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d0d0 */
uint F_00b7d0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00b7d140 */
uint F_00b7d140(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d150 */
uint F_00b7d150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d170 */
uint F_00b7d170(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d180 */
uint F_00b7d180(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d1c0 */
uint F_00b7d1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b7d1d0 */
uint F_00b7d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d1f0 */
uint F_00b7d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b7d210 */
byte F_00b7d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b7d240 */
uint F_00b7d240(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00b7d280 */
uint F_00b7d280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d290 */
unsigned int F_00b7d290(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00b7d300 */
uint F_00b7d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_00b7d360 */
uint F_00b7d360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
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

/* ref: FUN_00b7d3c0 */
uint F_00b7d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d3f0 */
uint F_00b7d3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d0d0(this);
  return (uint)this;
}

/* ref: FUN_00b7d410 */
uint F_00b7d410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d430 */
uint F_00b7d430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7d450 */
uint F_00b7d450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b7d4b0 */
uint F_00b7d4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b7d4c0 */
uint F_00b7d4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7d4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d290(this);
  return (uint)this;
}

/* ref: FUN_00b7d510 */
uint F_00b7d510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d510u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00b7d290(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00b7d62a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00b7cff0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00b7d060(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00b7d62a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00b7d300((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00b7d360((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00b7d300((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00b7d6e8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00b7d360((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00b7d6e8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00b7d300((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00b7d360((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0x136);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b7d770 */
uint F_00b7d770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7d770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00b7d290(this);
  return (uint)param_1;
}

/* ref: FUN_00b7d790 */
unsigned int F_00b7d790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7d790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00b7d790(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x136);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00b7d7d0 */
uint F_00b7d7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0x136);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_00b7d9cd: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_00b7d9cd;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00b7da00 */
uint F_00b7da00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7da00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00b7da20 */
uint F_00b7da20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7da20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d0d0(this);
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b7da30 */
unsigned int F_00b7da30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7da30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b7da50 */
uint F_00b7da50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7da50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b7da70 */
uint F_00b7da70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7da70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b7da80 */
uint F_00b7da80(unsigned int gen_a0)
{
  GEN_ENTER(0xb7da80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b7d290(this);
  return (uint)this;
}

/* ref: FUN_00b7dad0 */
uint F_00b7dad0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7dad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00b7d790(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0x136);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00b7db30 */
uint F_00b7db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7db30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00b7d0d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00b7d7d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x18,0x136);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b7dc10 */
unsigned int F_00b7dc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7dc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b7dc30 */
uint F_00b7dc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00b7dad0(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00b7d510(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00b7dcd0 */
uint F_00b7dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00b7dd20 */
uint F_00b7dd20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7dd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00b7dc30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00b7dd40 */
uint F_00b7dd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7dd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0x136);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
  }
  F_00b7db30(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00b7dda0 */
uint F_00b7dda0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7dda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b7dc30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7dde0 */
uint F_00b7dde0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7dde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b7dc30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x136);
  return (uint)uVar1;
}

/* ref: FUN_00b7dea0 */
uint F_00b7dea0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7dea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b7dc30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0x136);
  return (uint)uVar1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf13 */
uint F_00b7dee0(void)
{
  GEN_ENTER(0xb7dee0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf12 */
uint F_00b7def0(void)
{
  GEN_ENTER(0xb7def0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf45 */
uint F_00b7df00(unsigned int gen_a0)
{
  GEN_ENTER(0xb7df00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf44 */
uint F_00b7df10(unsigned int gen_a0)
{
  GEN_ENTER(0xb7df10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupObject::vf0 */
uint F_00b7df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7df20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b7ce00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7df50 */
unsigned int F_00b7df50(unsigned int gen_a0)
{
  GEN_ENTER(0xb7df50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x7f90);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x7f90) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7f8c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x7f8c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7f88);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x7f88) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7f84);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x7f84) = 0;
  }
  piVar2 = (int *)((int)this + 0x2fd4);
  iVar3 = 0x13ec;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00b7dfe0 */
uint F_00b7dfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7dfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x7fa0) != 0) {
    F_0050c620(*(int *)((int)this + 0x7fa0),0,0);
    *(undefined4 *)((int)this + 0x7fa0) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x7f9c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x7f9c),0,0);
    *(undefined4 *)((int)this + 0x7f9c) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b7e070 */
byte F_00b7e070(unsigned int gen_a0)
{
  GEN_ENTER(0xb7e070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/OcclusionVS.shcd",0,0,0);
  *(uint *)((int)this + 0x7f9c) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/OcclusionPS.shcd",0,0,0);
  *(uint *)((int)this + 0x7fa0) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_00b7e0f0 */
byte F_00b7e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7e0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (byte)(*((uint *)GEN_TOP((*(int *)((int)this + 0x7fc0) + (uint)((ushort)param_1 >> 5) * 4))) >>
               ((byte)(ushort)param_1 & 0x1f)) & 1;
}

/* ref: FUN_00b7e120 */
uint F_00b7e120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7e120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar2;
  
  uVar3 = (ulonglong)(byte)((char)*(undefined4 *)((int)this + 0x8014) * '\n');
  lVar2 = ((ulonglong)((uVar3 < 0x40) ? ((0x3ffL << uVar3)) : 0));
  uVar1 = (uint)lVar2;
  uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
  param_1[1] = ~uVar4 & param_1[1] | uVar4;
  *param_1 = ~uVar1 & *param_1 | uVar1;
  return uVar1;
}

/* ref: FUN_00b7e160 */
uint F_00b7e160(unsigned int gen_a0)
{
  GEN_ENTER(0xb7e160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  *(undefined4 *)((int)this + 0x7f84) = 0;
  *(undefined4 *)((int)this + 0x7f88) = 0;
  *(undefined4 *)((int)this + 0x7f8c) = 0;
  *(undefined4 *)((int)this + 0x7f90) = 0;
  *(undefined4 *)((int)this + 0x7f94) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7f98) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7f9c) = 0;
  *(undefined4 *)((int)this + 0x7fa0) = 0;
  *(undefined4 *)((int)this + 0x7fb8) = 0;
  *(undefined4 *)((int)this + 0x7fbc) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0x80,4)));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(undefined4 * PTR32 *)((int)this + 0x7fc0) = puVar1;
  *(undefined4 *)((int)this + 0x7fc4) = 0x3fc;
  *(undefined4 *)((int)this + 0x8010) = 0xffffffff;
  *(undefined2 *)((int)this + 0x8018) = 0x101;
  *(undefined1 *)((int)this + 0x801a) = 1;
  F_00c48350((undefined *)((int)this + 0x2fd4),0,0x4fb0);
  return (uint)this;
}

/* ref: FUN_00b7e270 */
byte F_00b7e270(unsigned int gen_a0)
{
  GEN_ENTER(0xb7e270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar5 = 0;
  F_004d58e0(((undefined1 *)(gen_frame + 0x4)),0,0,0x23,0);
  (*(uint *)(gen_frame + 0x8)) = 0;
  puVar6 = (uint *)((int)this + 0x2fd4);
  do {
    uVar3 = F_004dcde0(2,4);
    *puVar6 = uVar3;
    if (uVar3 == 0) break;
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (uVar5 < 0x13ec);
  *(uint *)((int)this + 0x7fbc) = (*(uint *)(gen_frame + 0x8)) / 5;
  uVar5 = F_004dcc90(0x60,4,4);
  *(uint *)((int)this + 0x7f84) = uVar5;
  if (uVar5 != 0) {
    uVar5 = F_004dccf0(0x48,1,4,4);
    *(uint *)((int)this + 0x7f88) = uVar5;
    if (uVar5 != 0) {
      uVar5 = F_004dcd60(0x30,2,4);
      *(uint *)((int)this + 0x7f8c) = uVar5;
      if (uVar5 != 0) {
        uVar5 = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0x4)),1);
        *(uint *)((int)this + 0x7f90) = uVar5;
        if (uVar5 != 0) {
          uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_CameraParameter");
          *(uint *)((int)this + 0x7f94) = uVar5;
          uVar5 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_WorldMatrix");
          *(uint *)((int)this + 0x7f98) = uVar5;
          puVar4 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x7f84),0,0,2);
          uVar2 = REFG(float, 0x1090708);
          uVar1 = REFG(float, 0x1087f04);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = GEN_FLT_TO(*puVar4, REFG(float, 0x1090708));
            puVar4[1] = uVar2;
            puVar4[2] = uVar2;
            puVar4[3] = uVar1;
            puVar4[4] = uVar2;
            puVar4[5] = uVar2;
            puVar4[6] = uVar1;
            puVar4[7] = uVar1;
            puVar4[8] = uVar2;
            puVar4[9] = uVar2;
            puVar4[10] = uVar1;
            puVar4[0xb] = uVar2;
            puVar4[0xc] = uVar2;
            puVar4[0xd] = uVar2;
            puVar4[0xe] = uVar1;
            puVar4[0xf] = uVar1;
            puVar4[0x10] = uVar2;
            puVar4[0x11] = uVar1;
            puVar4[0x12] = uVar1;
            puVar4[0x13] = uVar1;
            puVar4[0x15] = uVar2;
            puVar4[0x14] = uVar1;
            puVar4[0x16] = uVar1;
            puVar4[0x17] = uVar1;
            F_004d6970(*(undefined * PTR32 *)((int)this + 0x7f84));
          }
          puVar4 = (undefined4 *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0x7f88),0,0,2);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0x20000;
            puVar4[1] = 1;
            puVar4[2] = 0x20003;
            puVar4[3] = 0x60001;
            puVar4[4] = 0x10005;
            puVar4[5] = 0x60002;
            puVar4[6] = 0x70005;
            puVar4[7] = 0x50004;
            puVar4[8] = 0x70006;
            puVar4[9] = 0x30004;
            puVar4[10] = 0x40000;
            puVar4[0xb] = 0x30007;
            puVar4[0xc] = 0x40001;
            puVar4[0xd] = 0x10000;
            puVar4[0xe] = 0x40005;
            puVar4[0xf] = 0x60003;
            puVar4[0x10] = 0x30002;
            puVar4[0x11] = 0x60007;
            F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x7f88));
          }
          *(undefined4 *)((int)this + 0x7fa4) = 0;
          *(undefined4 *)((int)this + 0x7fa8) = 0;
          *(undefined4 *)((int)this + 0x7fac) = 0;
          *(undefined4 *)((int)this + 0x7fb0) = 0;
          *(undefined4 *)((int)this + 0x7fb4) = 0;
          F_00c48350((undefined *)((int)this + 0x7fd0),0,0x40);
          *(undefined4 *)((int)this + 0x8014) = 0;
          return 1;
        }
      }
    }
  }
  F_00b7df50(this);
  return 0;
}

/* ref: FUN_00b7e5a0 */
uint F_00b7e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7e5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar2 = *(ushort *)((int)param_1 + 6);
  if (((uVar2 & 0x7000) == 0) && ((uVar2 & 0xfc) == 0)) {
    uVar3 = *(undefined4 *)((int)this + 0x8014);
    *(ushort *)((int)param_1 + 6) = uVar2 & 0xff3f | 0x3c;
    uVar6 = (ulonglong)(byte)((char)uVar3 * '\n');
    lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((0x3ffL << uVar6)) : 0));
    uVar8 = (uint)lVar4;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    param_1[1] = ~uVar7 & param_1[1] | uVar7;
    *param_1 = ~uVar8 & *param_1 | uVar8;
    return uVar8;
  }
  puVar1 = (uint *)((int)this + 0x7fb8);
  LOCK();
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar7 = 0x3ff;
  if (uVar8 < *(uint *)((int)this + 0x7fbc)) {
    *(undefined4 *)((int)this + uVar8 * 8 + 4) = param_2;
    *(undefined4 *)((int)this + uVar8 * 8 + 8) = param_3;
    *(undefined4 *)((int)this + uVar8 * 4 + 0x1fe4) = 0;
    uVar7 = uVar8 & 0xffff;
  }
  bVar9 = (char)*(undefined4 *)((int)this + 0x8014) * '\n';
  lVar4 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? (((ulonglong)(uVar7 & 0x3ff) << (ulonglong)bVar9)) : 0));
  lVar5 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? ((0x3ffL << (ulonglong)bVar9)) : 0));
  *param_1 = (uint)lVar4 | ~(uint)lVar5 & *param_1;
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20) | ~(uint)((ulonglong)lVar5 >> 0x20) & param_1[1];
  param_1[1] = uVar8;
  return uVar8;
}

/* ref: FUN_00b7e680 */
uint F_00b7e680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7e680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  uVar2 = *(ushort *)((int)param_1 + 6);
  if (((uVar2 & 0x7000) == 0) && ((uVar2 & 0xfc) == 0)) {
    uVar3 = *(undefined4 *)((int)this + 0x8014);
    *(ushort *)((int)param_1 + 6) = uVar2 & 0xff3f | 0x3c;
    uVar6 = (ulonglong)(byte)((char)uVar3 * '\n');
    lVar4 = ((ulonglong)((uVar6 < 0x40) ? ((0x3ffL << uVar6)) : 0));
    uVar8 = (uint)lVar4;
    uVar7 = (uint)((ulonglong)lVar4 >> 0x20);
    param_1[1] = ~uVar7 & param_1[1] | uVar7;
    *param_1 = ~uVar8 & *param_1 | uVar8;
    return uVar8;
  }
  puVar1 = (uint *)((int)this + 0x7fb8);
  LOCK();
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar7 = 0x3ff;
  if (uVar8 < *(uint *)((int)this + 0x7fbc)) {
    *(undefined4 *)((int)this + uVar8 * 4 + 0x1fe4) = param_2;
    uVar7 = uVar8 & 0xffff;
  }
  bVar9 = (char)*(undefined4 *)((int)this + 0x8014) * '\n';
  lVar4 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? (((ulonglong)(uVar7 & 0x3ff) << (ulonglong)bVar9)) : 0));
  lVar5 = ((ulonglong)(((ulonglong)bVar9 < 0x40) ? ((0x3ffL << (ulonglong)bVar9)) : 0));
  *param_1 = (uint)lVar4 | ~(uint)lVar5 & *param_1;
  uVar8 = (uint)((ulonglong)lVar4 >> 0x20) | ~(uint)((ulonglong)lVar5 >> 0x20) & param_1[1];
  param_1[1] = uVar8;
  return uVar8;
}

/* ref: FUN_00b7e750 */
unsigned int F_00b7e750(unsigned int gen_a0)
{
  GEN_ENTER(0xb7e750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar15 = (float10)REFG(float, 0x10920a4);
  uVar12 = (*(int *)((int)this + 0x8014) + 1U) % 5;
  (*(char *)(gen_frame + 0x2f)) = '\x01';
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = 3;
  (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(3,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x18))));
  *(uint *)((int)this + 0x8014) = uVar12;
  iVar7 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(float * PTR32 *)(gen_frame + 0x24)) = (float *)(iVar7 + 0x10);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)this + 0x7fd0);
  do {
    uVar9 = 0;
    pfVar13 = (*(float * PTR32 *)(gen_frame + 0x24));
    pfVar14 = (*(float * PTR32 *)(gen_frame + 0x28));
    do {
      if ((!GEN_ISNAN((float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar13 - (float10)*pfVar14))))) &&
          !GEN_ISNAN(fVar15)) &&
          !((float10)((float)GEN_TOF(ABS((float10)(float)((float10)*pfVar13 - (float10)*pfVar14)))) <= fVar15))
      {
        (*(char *)(gen_frame + 0x2f)) = '\0';
        break;
      }
      uVar9 = uVar9 + 1;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    } while (uVar9 < 3);
    (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 4;
    (*(float * PTR32 *)(gen_frame + 0x24)) = (*(float * PTR32 *)(gen_frame + 0x24)) + 4;
    iVar10 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) + -1;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = iVar10;
    (*(ulonglong *)(gen_frame + 0x18)) = CONCAT44(iVar10,(uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x18))));
    if (iVar10 == 0) {
      if ((*(char *)(gen_frame + 0x2f)) != '\0') {
        fVar2 = *(float *)((int)this + 0x8000);
        fVar3 = *(float *)(iVar7 + 0x40);
        fVar4 = *(float *)((int)this + 0x8004);
        fVar5 = *(float *)(iVar7 + 0x44);
        fVar6 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x8008) - (float10)*(float *)(iVar7 + 0x48))))
        ;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = fVar6;
        (*(ulonglong *)(gen_frame + 0x18)) = (ulonglong)(uint)gen_fl2bits(fVar6);
        fVar15 = (float10)(float)((float10)fVar4 - (float10)fVar5);
        fVar16 = (float10)(float)((float10)fVar2 - (float10)fVar3);
        if (*(double *)&REFG(undefined, 0x1090710) <
            (double)((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 + (fVar16 * fVar16 + fVar15 * fVar15)))))
        {
          (*(char *)(gen_frame + 0x2f)) = '\0';
        }
      }
      pfVar13 = (float *)(iVar7 + 0x10);
      pfVar14 = (float *)((int)this + 0x7fd0);
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pfVar14 = *pfVar13;
        pfVar13 = pfVar13 + 1;
        pfVar14 = pfVar14 + 1;
      }
      uVar11 = 0;
      *(uint *)((int)this + 0x8010) =
           ~(1 << (sbyte)uVar12) & *(uint *)((int)this + 0x8010) |
           (uint)((*(char *)(gen_frame + 0x2f)) != '\0') << (sbyte)uVar12;
      uVar9 = *(int *)((int)this + 0x7fc4) + 0x1fU >> 5;
      if (uVar9 != 0) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7fc0) + uVar11 * 4))) = 0;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      if (*(int *)((int)this + 0x8010) == -1) {
        iVar7 = *(int *)((int)this + 0x7fbc);
        uVar9 = *(uint *)((int)this + uVar12 * 4 + 0x7fa4);
        (*(uint *)(gen_frame + 0xc)) = 0;
        if (uVar9 == 0) {
          *(undefined4 *)((int)this + 0x7fb8) = 0;
          return 0;
        }
        do {
          iVar10 = *(int *)((int)this + (*(uint *)(gen_frame + 0xc)) * 4 + iVar7 * uVar12 * 4 + 0x2fd4);
          if ((*(int *)(iVar10 + 0x1c) != 0) &&
             (uVar11 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar10 + 0x1c) + 0x1c))))
                                 (*(int * PTR32 *)(iVar10 + 0x1c),&(*(ulonglong *)(gen_frame + 0x18)),4,0), uVar11 == 0)) {
            if (*(int *)(iVar10 + 0x18) == 3) {
              (*(ulonglong *)(gen_frame + 0x18)) = ((*(ulonglong *)(gen_frame + 0x18)) * 1000) / CONCAT44(REFG(undefined4, 0x1375a34),REFG(undefined4, 0x1375a30));
            }
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x7fc0) + ((*(uint *)(gen_frame + 0xc)) >> 5) * 4)));
            bVar8 = (byte)(*(uint *)(gen_frame + 0xc)) & 0x1f;
            *puVar1 = (uint)((uint)gen_fl2bits((float)(*(ulonglong *)(gen_frame + 0x18))) < 5) << bVar8 |
                      ~(1 << bVar8) & *puVar1;
          }
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        } while ((*(uint *)(gen_frame + 0xc)) < uVar9);
      }
      *(undefined4 *)((int)this + 0x7fb8) = 0;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7e9b0 */
byte F_00b7e9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7e9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 0x7f9c) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7f9c) + 0x88)));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7f9c) + 0x8c)));
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if ((iVar1 < 8) && (*(int *)((int)this + 0x7fa0) != 0)) {
        piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7fa0) + 0x88)));
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
        if (iVar1 == 2) {
          piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x7fa0) + 0x8c)));
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2;
          UNLOCK();
          return iVar1 < 8;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b7ea20 */
uint F_00b7ea20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7ea20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined * pvVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined * pvVar14;
  byte bVar15;
  undefined3 extraout_var = 0;
  float * pfVar16;
  undefined4 * puVar17;
  uint uVar18;
  uint * puVar19;
  int iVar20;
  float * pfVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  bVar15 = F_00b7e9b0(this);
  uVar18 = CONCAT31(extraout_var,bVar15);
  if (bVar15 != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    *(undefined4 *)((int)pvVar10 + 8) = 0xf617ffff;
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = pvVar10;
    if (*(int *)(REFG(int, 0x137127c) + 0x66f4) != 0) {
      *((undefined4 *)GEN_TOP(((int)pvVar10 + *(int *)((int)this + 0x7f94) * 4 + 0xa8))) =
           *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x120)));
    }
    uVar13 = REFG(undefined4, 0x1302370);
    uVar12 = REFG(undefined4, 0x1302360);
    uVar18 = REFG(undefined4, 0x1302350);
    (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x1302370) & 0xfffffffb;
    uVar11 = *(undefined4 *)((int)this + 0x7f84);
    *(uint *)((int)pvVar10 + 0x6c) = *(uint *)((int)pvVar10 + 0x6c) & 0x800000ff;
    *(undefined1 *)((int)pvVar10 + 0x6c) = 0xc;
    *(uint *)((int)pvVar10 + 0x6c) = *(uint *)((int)pvVar10 + 0x6c) & 0x7fffffff;
    *(undefined4 *)((int)pvVar10 + 0x68) = uVar11;
    *(undefined4 *)((int)pvVar10 + 0x48) = *(undefined4 *)((int)this + 0x7f88);
    *(undefined4 *)((int)pvVar10 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7f9c) + 0x98)));
    *(undefined4 *)((int)pvVar10 + 0x60) = 0;
    *(undefined4 *)((int)pvVar10 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7fa0) + 0x9c)));
    *(undefined4 *)((int)pvVar10 + 0x60) = 0;
    *(undefined4 *)((int)pvVar10 + 0x4c) = *(undefined4 *)((int)this + 0x7f90);
    *(uint *)((int)pvVar10 + 0x38) = uVar18 & 0x7fffff;
    *(uint *)((int)pvVar10 + 0x50) = uVar12 & 0x1d;
    uVar18 = REFG(undefined4, 0x1302368);
    *(uint *)((int)pvVar10 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
    *(uint *)((int)pvVar10 + 0x58) = uVar18 & 0xfe000000;
    *(uint *)((int)pvVar10 + 0x3c) = uVar13 & 0x7ffffffb;
    puVar19 = (uint *)((int)this + 0x7fbc);
    puVar17 = ((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x8014) * *(uint *)((int)this + 0x7fbc) * 4 + 0x2fd4
              )));
    if (*(uint *)((int)this + 0x7fb8) < *(uint *)((int)this + 0x7fbc)) {
      puVar19 = (uint *)((int)this + 0x7fb8);
    }
    (*(uint *)(gen_frame + 0xa8)) = *puVar19;
    (*(uint *)(gen_frame + 0xa0)) = 0;
    if (*puVar19 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)((int)this + 0x1fe4);
      (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = puVar17;
      (*(int *)(gen_frame + 0x90)) = ((int)this + 0x1fe4) - (int)puVar17;
      do {
        fVar24 = (float10)REFG(double, 0x1088108);
        fVar23 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar22 = (float10)0;
        if (*(int *)((*(int *)(gen_frame + 0x90)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0xac))) == 0) {
          pfVar16 = *(float * PTR32 *)((*(uint *)(gen_frame + 0xa0)) * 8 + 8 + (int)this);
          pfVar21 = *(float * PTR32 *)((*(uint *)(gen_frame + 0xa0)) * 8 + 4 + (int)this);
          (*(float *)(gen_frame + 0x60)) = (float)((float10)*pfVar16 + fVar23);
          fVar1 = pfVar16[1];
          (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar1 + fVar23);
          fVar2 = pfVar16[2];
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(float *)(gen_frame + 0x68)) = (float)(fVar23 + (float10)fVar2);
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)*pfVar16 + fVar23);
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar1 + fVar23);
          (*(float *)(gen_frame + 0xd8)) = (float)(fVar23 + (float10)fVar2);
          (*(float *)(gen_frame + 0xe0)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe4)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
          F_004efe70(&(*(float *)(gen_frame + 0xb0)),0x1302cf0);
          (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xe0)) + (float10)*pfVar21);
          (*(float *)(gen_frame + 0xe4)) = (float)((float10)pfVar21[1] + (float10)(*(float *)(gen_frame + 0xe4)));
          fVar22 = (float10)pfVar21[2] + (float10)(*(float *)(gen_frame + 0xe8));
        }
        else {
          pfVar16 = (float *)*(*(undefined4 * PTR32 *)(gen_frame + 0xa4));
          (*(float *)(gen_frame + 0x50)) = (float)((float10)pfVar16[4] - (float10)*pfVar16);
          (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar16[5] - (float10)pfVar16[1]);
          (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar16[6] - (float10)pfVar16[2]);
          fVar1 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[4] - (float10)*pfVar16) * fVar24)));
          (*(float *)(gen_frame + 0x40)) = fVar1;
          fVar2 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[5] - (float10)pfVar16[1]) * fVar24)));
          (*(float *)(gen_frame + 0x44)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar16[6] - (float10)pfVar16[2]) * fVar24)));
          (*(float *)(gen_frame + 0x48)) = fVar3;
          fVar1 = (float)((float10)fVar1 + fVar23);
          (*(float *)(gen_frame + 0x80)) = fVar1;
          fVar2 = (float)((float10)fVar2 + fVar23);
          (*(float *)(gen_frame + 0x84)) = fVar2;
          fVar3 = (float)((float10)fVar3 + fVar23);
          (*(float *)(gen_frame + 0x88)) = fVar3;
          fVar4 = pfVar16[4];
          fVar5 = *pfVar16;
          (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar4 + (float10)fVar5);
          fVar6 = pfVar16[5];
          fVar7 = pfVar16[1];
          (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar6 + (float10)fVar7);
          fVar8 = pfVar16[6];
          fVar9 = pfVar16[2];
          (*(float *)(gen_frame + 0xb0)) = fVar1;
          (*(undefined4 *)(gen_frame + 0xb4)) = 0;
          (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar8 + (float10)fVar9);
          (*(undefined4 *)(gen_frame + 0xb8)) = 0;
          (*(undefined4 *)(gen_frame + 0xc0)) = 0;
          (*(undefined4 *)(gen_frame + 0xc8)) = 0;
          (*(undefined4 *)(gen_frame + 0xd0)) = 0;
          (*(undefined4 *)(gen_frame + 0xd4)) = 0;
          (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar5) * fVar24)));
          (*(float *)(gen_frame + 0xc4)) = fVar2;
          (*(float *)(gen_frame + 0xd8)) = fVar3;
          (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)fVar7) * fVar24)));
          (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(float)((float10)fVar8 + (float10)fVar9) * fVar24)));
          (*(float *)(gen_frame + 0xe0)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe4)) = (float)fVar22;
          (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
          F_004efe70(&(*(float *)(gen_frame + 0xb0)),0x1302cf0);
          (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xe0)) + (float10)(*(float *)(gen_frame + 0x70)));
          (*(float *)(gen_frame + 0xe4)) = (float)((float10)(*(float *)(gen_frame + 0xe4)) + (float10)(*(float *)(gen_frame + 0x74)));
          fVar22 = (float10)(*(float *)(gen_frame + 0xe8)) + (float10)(*(float *)(gen_frame + 0x78));
        }
        (*(float *)(gen_frame + 0xe8)) = (float)fVar22;
        pfVar16 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x7f8c),0,0,2);
        pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x9c));
        pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x94));
        if (pfVar16 == (float *)0x0) break;
        ((float *)(gen_frame + 0x0))[0] = (*(float *)(gen_frame + 0xb0));
        ((float *)(gen_frame + 0x0))[1] = gen_bits2f((*(undefined4 *)(gen_frame + 0xc0)));
        ((float *)(gen_frame + 0x0))[2] = gen_bits2f((*(undefined4 *)(gen_frame + 0xd0)));
        ((float *)(gen_frame + 0x0))[3] = (*(float *)(gen_frame + 0xe0));
        (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0xb4));
        (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0xc4));
        (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0xd4));
        (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xe4));
        (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0xb8));
        (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0xc8));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0xd8));
        (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xe8));
        pfVar21 = ((float *)(gen_frame + 0x0));
        for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
          *pfVar16 = *pfVar21;
          pfVar21 = pfVar21 + 1;
          pfVar16 = pfVar16 + 1;
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x7f8c) + 0x24))) = 0;
        (*(undefined4 *)(gen_frame + 0x98)) = *(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        puVar17 = (undefined4 *)F_004d4760((*(undefined * PTR32 *)(gen_frame + 0x94)),0xc);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 0xc;
          puVar17[1] = (*(undefined4 *)(gen_frame + 0x98));
          puVar17[2] = 2;
          F_004d4810(pvVar10,puVar17);
        }
        *((undefined4 *)GEN_TOP(((int)pvVar10 + *(int *)((int)pvVar14 + 0x7f98) * 4 + 0xa8))) =
             *(undefined4 *)((int)pvVar14 + 0x7f8c);
        puVar17 = (undefined4 *)F_004d4760(pvVar10,0x54);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 5;
          puVar17[1] = 5;
          puVar17[2] = 0;
          puVar17[3] = 0;
          puVar17[4] = 8;
          puVar17[5] = 0;
          puVar17[6] = 0x24;
          bVar15 = F_004dc830(pvVar10,puVar17 + 7);
          if (bVar15 != 0) {
            F_004d4810(pvVar10,puVar17);
          }
        }
        uVar11 = *(*(undefined4 * PTR32 *)(gen_frame + 0xac));
        puVar17 = (undefined4 *)F_004d4760(pvVar10,0xc);
        if (puVar17 != (undefined4 *)0x0) {
          *puVar17 = 0xc;
          puVar17[1] = uVar11;
          puVar17[2] = 1;
          F_004d4810(pvVar10,puVar17);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) + 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 1;
        uVar18 = (*(uint *)(gen_frame + 0xa0)) + 1;
        (*(uint *)(gen_frame + 0xa0)) = uVar18;
        this = (*(undefined * PTR32 *)(gen_frame + 0x9c));
      } while (uVar18 < (*(uint *)(gen_frame + 0xa8)));
    }
    uVar18 = *(uint *)((int)this + 0x8014);
    *(uint *)((int)this + uVar18 * 4 + 0x7fa4) = (*(uint *)(gen_frame + 0xa8));
  }
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100));
  return uVar18;
}

/* ref: FUN_00b7efa0 */
uint F_00b7efa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7efa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return *((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4))) >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_00b7efc0 */
uint F_00b7efc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7efc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = (char)param_1 * '\n';
  lVar1 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? ((0x3ffL << (ulonglong)bVar4)) : 0));
  lVar2 = ((ulonglong)(((ulonglong)bVar4 < 0x40) ? (((ulonglong)(param_2 & 0x3ff) << (ulonglong)bVar4)) : 0));
  uVar3 = ~(uint)((ulonglong)lVar1 >> 0x20) & *(uint *)((int)this + 4) |
          (uint)((ulonglong)lVar2 >> 0x20);
  *(uint *)this = ~(uint)lVar1 & *(uint *)this | (uint)lVar2;
  *(uint *)((int)this + 4) = uVar3;
  return uVar3;
}

/* ref: FUN_00b7f010 */
uint F_00b7f010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar3;
  longlong lVar2;
  
  *(ushort *)((int)this + 6) = *(ushort *)((int)this + 6) & 0xff3f | 0x3c;
  lVar2 = ((ulonglong)(((ulonglong)(byte)((char)param_1 * '\n') < 0x40) ? ((0x3ffL << (ulonglong)(byte)((char)param_1 * '\n'))) : 0));
  uVar1 = (uint)lVar2;
  uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
  *(uint *)((int)this + 4) = ~uVar3 & *(uint *)((int)this + 4) | uVar3;
  *(uint *)this = ~uVar1 & *(uint *)this | uVar1;
  return uVar1;
}

/* ref: Singleton_VOcclusionCullingManager_Culling_Graphics_Client_Graphics::vf0 */
uint F_00b7f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7f0b0 */
uint F_00b7f0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7f0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_2 != 0) {
    uVar2 = param_2 + 0x1fU >> 5;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar2 * 4,4)));
    piVar3 = piVar1;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = -(uint)((char)param_1 != '\0');
        piVar3 = piVar3 + 1;
      }
    }
    *(int *)((int)this + 4) = param_2;
    *(int * PTR32 *)this = piVar1;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return (uint)this;
}

/* ref: FUN_00b7f130 */
uint F_00b7f130(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  uVar1 = 0;
  if (*(int *)((int)this + 0x7fc0) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*(int *)((int)this + 0x7fc0));
    *(undefined4 *)((int)this + 0x7fc0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  return uVar1;
}

/* ref: Client::Graphics::Culling::OcclusionCullingManager::vf0 */
uint F_00b7f170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a8));
  if (*(int *)(this + 0x7fc0) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*(int *)(this + 0x7fc0));
    *(undefined4 *)(this + 0x7fc0) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7f230 */
byte F_00b7f230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b7f280 */
uint F_00b7f280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7f280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b7f2e0 */
uint F_00b7f2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7f2e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar2 = *(ushort *)(param_1 + 0xff0);
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = uVar5 & 0xffff;
      uVar3 = uVar4 * 2;
      fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + uVar4 * 0x10) - (float10)*param_2)));
      fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 4 + uVar4 * 0x10) - (float10)param_2[1]
                              )));
      fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8 + uVar4 * 0x10) - (float10)param_2[2]
                              )));
      fVar1 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
      if ((float10)fVar1 < (float10)*(float *)&REFG(undefined, 0x14c58b0)) {
        uVar3 = F_00b14350(param_3,(uint)*(ushort *)(param_1 + 0xf00 + uVar4 * 2),fVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar3;
}

/* ref: FUN_00b7f390 */
uint F_00b7f390(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f390u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f62d0));
  in_ecx[0x18] = (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x2f] = 0;
  in_ecx[0x30] = 0;
  in_ecx[0x31] = 0;
  *(undefined2 *)(in_ecx + 0x37) = 0;
  in_ecx[0xc] = in_ecx[0xc] & 0xfffffffc;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[0x33] = GEN_FLT_TO(in_ecx[0x33], REFG(float, 0x1087f04));
  in_ecx[0x34] = uVar1;
  in_ecx[0x35] = uVar1;
  in_ecx[0x36] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00b7f420 */
byte F_00b7f420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (0x7f < *(byte *)((int)this + 0xdd)) {
    return 0;
  }
  *((short *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xdd) * 2 + 0xde))) =
       (short)(param_1 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4);
  *(char *)((int)this + 0xdd) = *(char *)((int)this + 0xdd) + '\x01';
  return 1;
}

/* ref: FUN_00b7f460 */
unsigned int F_00b7f460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  short * psVar3;
  
  uVar2 = (uint)*(byte *)((int)this + 0xdd);
  if ((uVar2 != 0) && (uVar1 = 0, uVar2 != 0)) {
    psVar3 = (short *)((int)this + 0xde);
    while (*psVar3 != (short)(param_1 - *(int *)(REFG(int, 0x1370c1c) + 8) >> 4)) {
      uVar1 = uVar1 + 1;
      psVar3 = psVar3 + 1;
      if (uVar2 <= uVar1) {
        return 0;
      }
    }
    if (uVar1 != 0xffffffff) {
      if (uVar1 != uVar2 - 1) {
        *(undefined2 *)((int)this + uVar1 * 2 + 0xde) =
             *((undefined2 *)GEN_TOP(((int)this + (uVar2 - 1) * 2 + 0xde)));
      }
      *(char *)((int)this + 0xdd) = *(char *)((int)this + 0xdd) + -1;
    }
  }
  return 0;
}

/* ref: FUN_00b7f4d0 */
uint F_00b7f4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_1c;
  ushort * local_14;
  
  iVar2 = REFG(int, 0x1370c1c);
  local_1c = (uint)*(byte *)((int)this + 0xdd);
  uVar4 = 0;
  if (local_1c != 0) {
    local_14 = (ushort *)((int)this + 0xde);
    do {
      uVar1 = *local_14;
      pfVar3 = (float *)F_00b81f10(((undefined *)GEN_TOP(((uint)uVar1 * 0x10 + *(int *)(iVar2 + 8)))));
      fVar5 = (float10)((float)GEN_TOF(((float10)*pfVar3 - (float10)*(float *)((int)this + 0x50))));
      fVar6 = (float10)((float)GEN_TOF(((float10)pfVar3[1] - (float10)*(float *)((int)this + 0x54))));
      fVar7 = (float10)((float)GEN_TOF(((float10)pfVar3[2] - (float10)*(float *)((int)this + 0x58))));
      uVar4 = F_00b14350(iVar2,(uint)uVar1,
                           ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5)))));
      local_14 = local_14 + 1;
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  return uVar4;
}

/* ref: FUN_00b7f580 */
uint F_00b7f580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7f580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)((int)this + 0x30);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x14);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1370c1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x18);
  if ((bVar1 & 2) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x20);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x28);
  }
  bVar1 = F_00b16570(param_2,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 != 0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar2 = param_1[1] - *param_1 >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    if (uVar2 != 0) {
      do {
        F_00b7f2e0(*(undefined4 *)(*param_1 + (*(uint *)(gen_frame + 0x1c)) * 4),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar2 = param_1[5] - param_1[4] >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    if (uVar2 != 0) {
      do {
        F_00b7f2e0(*(undefined4 *)(param_1[4] + (*(uint *)(gen_frame + 0x1c)) * 4),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    uVar3 = param_1[9] - param_1[8] >> 2;
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        F_00b7f2e0(*(undefined4 *)(param_1[8] + (*(uint *)(gen_frame + 0x1c)) * 4),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x18)));
        uVar2 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar2;
      } while (uVar2 < (*(uint *)(gen_frame + 0x14)));
    }
  }
  return uVar2;
}

/* ref: FUN_00b7f6c0 */
uint F_00b7f6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b7f580(this,*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00b7f6e0 */
byte F_00b7f6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = F_00b7fc40((undefined *)((int)this + 0x60),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar4 == 0) {
    return 0;
  }
  puVar1 = (uint *)((int)this + 0x6c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (*(uint *)((int)this + 0x68) <= uVar3) {
    *(undefined4 *)((int)this + 200) = 0;
    return 0;
  }
  iVar2 = *(int *)((int)this + 100) + uVar3 * 0x14;
  *(int *)((int)this + 200) = iVar2;
  return iVar2 != 0;
}

/* ref: FUN_00b7f740 */
uint F_00b7f740(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b7fda0((undefined *)((int)this + 0x60));
  return uVar1;
}

/* ref: FUN_00b7f750 */
uint F_00b7f750(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x11010];
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  pvVar5 = REFG(void * PTR32, 0x1370c1c);
  (*(uint *)(gen_frame + 0x11008)) = 0xb7f75d;
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  (*(uint *)(gen_frame + 0x11008)) = uVar6;
  if ((*(byte *)((int)this + 0x30) & 1) != 0) {
    uVar7 = F_00b136e0(REFG(void * PTR32, 0x1370c1c),((int *)(gen_frame + 0x10008)));
    uVar6 = 0;
    if (uVar7 != 0) {
      if ((*(byte *)((int)this + 0x30) & 2) == 0) {
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x10);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x14);
        uVar3 = *(undefined4 *)((int)this + 0x18);
      }
      else {
        *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x20);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)((int)this + 0x24);
        uVar3 = *(undefined4 *)((int)this + 0x28);
      }
      *(undefined4 *)((int)this + 0x58) = uVar3;
      iVar4 = *(int *)((int)this + 200);
      uVar6 = 0;
      if (uVar7 != 0) {
        do {
          if (7 < *(uint *)(iVar4 + 8)) {
            if (*(uint * PTR32 *)(iVar4 + 0x10) != (uint *)0x0) {
              **(uint * PTR32 *)(iVar4 + 0x10) = *(uint *)(iVar4 + 8);
            }
            uVar8 = F_00b7ffe0(*(undefined * PTR32 *)(iVar4 + 0xc));
            *(uint *)(iVar4 + 0x10) = uVar8;
            *(uint *)(iVar4 + 4) = uVar8 + 0x10;
            *(undefined4 *)(iVar4 + 8) = 0;
          }
          piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 4) + *(int *)(iVar4 + 8) * 8)));
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
          *piVar1 = *((int *)GEN_TOP((*(int *)((int)pvVar5 + 0x3930) + 4))) + ((int *)(gen_frame + 0x10008))[(int)(uVar6)] * 0x48;
          piVar2 = ((int *)(gen_frame + 0x10008)) + uVar6;
          uVar6 = uVar6 + 1;
          piVar1[1] = *piVar2 * 0x20 + *((int *)GEN_TOP((*(int *)((int)pvVar5 + 0x3930) + 0xc)));
        } while (uVar6 < uVar7);
      }
      F_00b7fe50((undefined *)((int)this + 0x60),this,((code *)REFP(0xb7f6c0)),1);
      uVar6 = F_00b7f4d0(this);
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x11008)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar6;
}

/* ref: FUN_00b7f880 */
uint F_00b7f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 0x48;
}

/* ref: FUN_00b7f8a0 */
uint F_00b7f8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 0xc);
}

/* ref: FUN_00b7f8b0 */
uint F_00b7f8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f8b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *((int *)GEN_TOP((*(int *)(in_ecx + 0x3930) + 0xc)));
}

/* ref: FUN_00b7f8d0 */
uint F_00b7f8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((int *)GEN_TOP((*(int *)((int)this + 0x3930) + 4))) + param_1 * 0x48;
}

/* ref: FUN_00b7f920 */
uint F_00b7f920(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7f920u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0xcc + param_2 * 4) = (float)((float10)param_3 * (float10)param_3);
  return param_2;
}

/* ref: FUN_00b7f940 */
uint F_00b7f940(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb7f940u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0xd4 + param_2 * 4) = (float)((float10)param_3 * (float10)param_3);
  return param_2;
}

/* ref: Singleton_VStreamingManager_Streaming_Graphics_Client_Graphics::vf0 */
uint F_00b7f980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7f980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62b8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7f9e0 */
unsigned int F_00b7f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7f9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00b7fab0 */
uint F_00b7fab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7fab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb7f280));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b7fad0 */
uint F_00b7fad0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Streaming::StreamingManager::vf0 */
uint F_00b7faf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7faf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x60) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62b8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7fb20 */
uint F_00b7fb20(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fb40 */
uint F_00b7fb40(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00b7fb60 */
uint F_00b7fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fb80 */
uint F_00b7fb80(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fb80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b7fbe0 */
unsigned int F_00b7fbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7fbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00b7f9e0(this);
  return 0;
}

/* ref: FUN_00b7fbf0 */
uint F_00b7fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fbf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: JobSystem_VStreamingManager_Streaming_Graphics_Client_UStreamingJob::vf0 */
uint F_00b7fc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7fc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c8));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00b7fc40 */
byte F_00b7fc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7fc40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * PTR32 * ppiVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
  ppiVar1 = &(*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) < 3) {
    ppiVar1 = &(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar8 = *ppiVar1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar8;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(int * PTR32 *)&gen_args[1]) = piVar8;
  if (piVar8 == (int *)0x0) {
    puVar2 = (uint *)F_00406a50(4);
  }
  else {
    piVar7 = *(int * PTR32 *)(REFG(int, 0x1371270) + 4);
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
    (*(int *)(gen_frame + 0x14)) = *piVar7;
    uVar5 = -(uint)((int)(ZEXT48(piVar8) * 0x14 >> 0x20) != 0) | (uint)(ZEXT48(piVar8) * 0x14);
    puVar2 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7,-(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)))
    ;
    piVar8 = (*(int * PTR32 *)&gen_args[1]);
  }
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = (uint)piVar8;
    puVar2 = puVar3;
    piVar7 = piVar8;
    while (piVar7 = (int *)((int)piVar7 - 1), -1 < (int)piVar7) {
      *puVar2 = (uint)(*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2 = puVar2 + 5;
    }
  }
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar3;
  if (piVar8 != (int *)0x0) {
    iVar6 = 0;
    piVar7 = piVar8;
    do {
      iVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + iVar6;
      iVar6 = iVar6 + 0x14;
      piVar7 = (int *)((int)piVar7 - 1);
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 8;
      *(undefined * PTR32 *)(iVar4 + 0xc) = (*(undefined * PTR32 *)&gen_args[0]);
      *(undefined4 *)(iVar4 + 0x10) = 0;
    } while (piVar7 != (int *)0x0);
  }
  this_00 = (undefined *)F_00406b90(0x78,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0xb7f280));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0xb7fbe0));
    uVar5 = F_004a0c60(this_00,&(*(gen_code32 *)(gen_frame + 0x4)),0,(int)piVar8 - 1);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  return 1;
}

/* ref: FUN_00b7fda0 */
uint F_00b7fda0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7fda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  ulonglong uVar6;
  int local_8;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  piVar5 = (int *)((int)this + 0x1c);
  local_8 = 0x10;
  do {
    uVar3 = 0;
    if (*piVar5 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(uVar3 + 0x10 + iVar2) = 0;
      *(undefined4 *)(uVar3 + 0xc + iVar2) = 0;
      uVar3 = uVar3 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      return uVar3;
    }
    uVar6 = F_00406b30(puVar1 + -1);
    uVar3 = (uint)uVar6;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b7fe50 */
unsigned int F_00b7fe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7fe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar3 = *(int *)((int)this + 8);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = iVar3;
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10 + iVar2)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar2)));
      }
      iVar2 = iVar2 + 0x14;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    F_004a1460(REFG(void * PTR32, 0x13728ac),*(undefined4 *)((int)this + 0x10));
    F_00b7f9e0(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
  }
  iVar4 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    iVar2 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8 + iVar4) = 8;
    *(undefined4 *)(iVar2 + 0x10 + iVar4) = 0;
    iVar4 = iVar4 + 0x14;
  }
  if ((char)param_3 != '\0') {
    piVar5 = (int *)((int)this + 0x1c);
    iVar3 = 0x10;
    do {
      if (*piVar5 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*piVar5);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: JobQueue_JobSystem_VStreamingManager_Streaming_Graphics_Client::vf0 */
uint F_00b7ff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if ((param_1 & 2) != 0) {
    iVar2 = *(int *)((int)this + -4);
    uVar1 = (int)this - 4;
    puVar3 = (undefined4 *)((int)this + iVar2 * 0x14);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      puVar3 = puVar3 + -5;
      *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
    }
    if (((param_1 & 1) != 0) && (uVar1 != 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar1);
    }
    return uVar1;
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62c0));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),this);
  }
  return (uint)this;
}

/* ref: FUN_00b7ff90 */
uint F_00b7ff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 & 0x1f) != 0) {
    piVar1 = ((int *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
    do {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
    } while (iVar3 == 0);
    return (uint)piVar1;
  }
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0xa00,0x10);
  puVar2 = ((uint *)GEN_TOP(((int)this + (param_1 >> 5) * 4 + 0x1c)));
  LOCK();
  uVar4 = *puVar2;
  *puVar2 = uVar5;
  UNLOCK();
  return uVar4;
}

/* ref: FUN_00b7ffe0 */
uint F_00b7ffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb7ffe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (uint *)((int)this + 0x5c);
  LOCK();
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar6 = uVar3 >> 5;
  if (*(int *)((int)this + uVar6 * 4 + 0x1c) == 0) {
    if ((uVar3 & 0x1f) != 0) {
      piVar2 = (int *)((int)this + uVar6 * 4 + 0x1c);
      do {
        LOCK();
        iVar4 = *piVar2;
        *piVar2 = *piVar2;
        UNLOCK();
      } while (iVar4 == 0);
      return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),0xa00,0x10);
    LOCK();
    *(uint *)((int)this + uVar6 * 4 + 0x1c) = uVar5;
    UNLOCK();
  }
  return (uVar3 & 0x1f) * 0x50 + *(int *)((int)this + uVar6 * 4 + 0x1c);
}

/* ref: FUN_00b80050 */
uint F_00b80050(unsigned int gen_a0)
{
  GEN_ENTER(0xb80050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (7 < *(uint *)((int)this + 8)) {
    if (*(uint * PTR32 *)((int)this + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)((int)this + 0x10) = *(uint *)((int)this + 8);
    }
    uVar2 = F_00b7ffe0(*(undefined * PTR32 *)((int)this + 0xc));
    *(uint *)((int)this + 0x10) = uVar2;
    *(uint *)((int)this + 4) = uVar2 + 0x10;
    *(undefined4 *)((int)this + 8) = 0;
  }
  iVar1 = *(int *)((int)this + 8);
  *(int *)((int)this + 8) = iVar1 + 1;
  return *(int *)((int)this + 4) + iVar1 * 8;
}

/* ref: FUN_00b800a0 */
byte F_00b800a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb800a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b800e0 */
uint F_00b800e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb800e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f6310));
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  in_ecx[0x1b] = (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0;
  in_ecx[0x1e] = 0;
  in_ecx[0x1f] = 0;
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x32] = 0;
  in_ecx[0x33] = 0;
  in_ecx[0x34] = 0;
  in_ecx[0x35] = (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  in_ecx[0x36] = 0;
  in_ecx[0x37] = 0;
  in_ecx[0x38] = 0;
  in_ecx[0x39] = 0;
  in_ecx[0x3a] = 0;
  in_ecx[0x3b] = 0;
  in_ecx[0x4c] = 0;
  in_ecx[0x4d] = 0;
  in_ecx[0x4e] = 0;
  *(undefined2 *)(in_ecx + 0x4f) = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00b80190 */
uint F_00b80190(unsigned int gen_a0)
{
  GEN_ENTER(0xb80190u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  iVar2 = piVar1[10];
  uVar3 = F_00a065a0();
  if (((char)uVar3 == '\0') || (*(char *)(iVar2 + 0xa8) < '\x01')) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
  }
  return uVar3;
}

/* ref: FUN_00b801c0 */
uint F_00b801c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb801c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  int iVar1;
  uint uVar2;
  
  this = (undefined *)*param_1;
  iVar1 = *(int *)((int)this + 0x98);
  uVar2 = F_00a065a0();
  if (((char)uVar2 == '\0') || (*(char *)(iVar1 + 0xa8) < '\x01')) {
    uVar2 = F_00b83820(this);
  }
  return uVar2;
}

/* ref: FUN_00b801f0 */
byte F_00b801f0(unsigned int gen_a0)
{
  GEN_ENTER(0xb801f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (uint *)((int)this + 0x10);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0xc)) {
    iVar4 = *(int *)((int)this + 8) + uVar2 * 0x14;
  }
  else {
    iVar4 = 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(int *)(iVar3 + 0x1c8) = iVar4;
  if (iVar4 != 0) {
    puVar1 = (uint *)((int)this + 0x78);
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar2 < *(uint *)((int)this + 0x74)) {
      iVar4 = *(int *)((int)this + 0x70) + uVar2 * 0x14;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(iVar3 + 0x1cc) = iVar4;
    if (iVar4 != 0) {
      puVar1 = (uint *)((int)this + 0xe0);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if (*(uint *)((int)this + 0xdc) <= uVar2) {
        *(undefined4 *)(iVar3 + 0x1d0) = 0;
        return 0;
      }
      iVar4 = *(int *)((int)this + 0xd8) + uVar2 * 0x14;
      *(int *)(iVar3 + 0x1d0) = iVar4;
      return iVar4 != 0;
    }
  }
  return 0;
}

/* ref: FUN_00b802a0 */
uint F_00b802a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb802a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  this_00 = (undefined *)*param_1;
  if (*(char *)((int)this + 0x13d) == '\0') {
    *(float *)((int)this_00 + 0x60) = REFG(float, 0x1104960);
    F_00a05fd0(this_00,REFG(float, 0x1104960));
  }
  iVar1 = *(int *)((int)this_00 + 0x14);
  uVar2 = F_00a065a0();
  if (((char)uVar2 == '\0') || (*(char *)(iVar1 + 0xa8) < '\x01')) {
    if (*(char *)((int)this_00 + 0xc5) != '\0') {
      uVar2 = F_00bbc320(this_00,param_1[1]);
      return uVar2;
    }
    uVar2 = F_00bbcb10(this_00,param_1[1]);
  }
  return uVar2;
}

/* ref: FUN_00b80320 */
byte F_00b80320(unsigned int gen_a0)
{
  GEN_ENTER(0xb80320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00b80fd0((undefined *)((int)this + 4),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar1 != 0) {
    bVar1 = F_00b81340((undefined *)((int)this + 0x6c),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
    if (bVar1 != 0) {
      bVar1 = F_00b816b0((undefined *)((int)this + 0xd4),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
      if (bVar1 != 0) {
        bVar1 = F_00b801f0(this);
        return bVar1 != 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b80380 */
uint F_00b80380(unsigned int gen_a0)
{
  GEN_ENTER(0xb80380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00b81130((undefined *)((int)this + 4));
  F_00b814a0((undefined *)((int)this + 0x6c));
  uVar1 = F_00b81810((undefined *)((int)this + 0xd4));
  return uVar1;
}

/* ref: FUN_00b803a0 */
byte F_00b803a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb803a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(char *)((int)this + 0x13c) == '\0') {
    F_00b812b0((undefined *)((int)this + 4));
    F_00b81620((undefined *)((int)this + 0x6c));
    F_00b81990((undefined *)((int)this + 0xd4));
    *(byte *)((int)this + 0x13d) = *(byte *)((int)this + 0x13c);
    return *(byte *)((int)this + 0x13c);
  }
  F_00b811e0((undefined *)((int)this + 4),this,((code *)REFP(0xb80190)),1);
  F_00b81550((undefined *)((int)this + 0x6c),this,((code *)REFP(0xb802a0)),1);
  bVar1 = F_00b818c0((undefined *)((int)this + 0xd4),this,((code *)REFP(0xb801c0)),1);
  *(undefined1 *)((int)this + 0x13d) = *(undefined1 *)((int)this + 0x13c);
  return bVar1;
}

/* ref: FUN_00b80420 */
uint F_00b80420(unsigned int gen_a0)
{
  GEN_ENTER(0xb80420u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1c8)));
  if (7 < *(uint *)(iVar1 + 8)) {
    if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
    }
    uVar3 = F_00b81c60(*(undefined * PTR32 *)(iVar1 + 0xc));
    *(uint *)(iVar1 + 0x10) = uVar3;
    *(uint *)(iVar1 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 1;
  *(uint *)(iVar1 + 8) = uVar3;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_00b80480 */
uint F_00b80480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb80480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1cc)));
  if (7 < *(uint *)(iVar2 + 8)) {
    if (*(uint * PTR32 *)(iVar2 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar2 + 0x10) = *(uint *)(iVar2 + 8);
    }
    uVar3 = F_00b81cd0(*(undefined * PTR32 *)(iVar2 + 0xc));
    *(uint *)(iVar2 + 0x10) = uVar3;
    *(uint *)(iVar2 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 8) * 8)));
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00b804e0 */
uint F_00b804e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb804e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1d0)));
  if (7 < *(uint *)(iVar1 + 8)) {
    if (*(uint * PTR32 *)(iVar1 + 0x10) != (uint *)0x0) {
      **(uint * PTR32 *)(iVar1 + 0x10) = *(uint *)(iVar1 + 8);
    }
    uVar3 = F_00b81d40(*(undefined * PTR32 *)(iVar1 + 0xc));
    *(uint *)(iVar1 + 0x10) = uVar3;
    *(uint *)(iVar1 + 4) = uVar3 + 0x10;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = iVar2 + 1;
  *(uint *)(iVar1 + 8) = uVar3;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + iVar2 * 4))) = param_1;
  return uVar3;
}

/* ref: FUN_00b80630 */
byte F_00b80630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb80630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b806a0 */
byte F_00b806a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb806a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b80710 */
byte F_00b80710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb80710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00b80760 */
uint F_00b80760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb80760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b80780 */
uint F_00b80780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb80780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b807a0 */
uint F_00b807a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb807a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: Singleton_VBonePhysicsUpdater_Physics_Graphics_Client_Graphics::vf0 */
uint F_00b80850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb80850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62d8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b808e0 */
unsigned int F_00b808e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb808e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00b809b0 */
uint F_00b809b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb809b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb80760));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b809d0 */
unsigned int F_00b809d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb809d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00b80aa0 */
uint F_00b80aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb80780));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b80ac0 */
unsigned int F_00b80ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00b80b90 */
uint F_00b80b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb80b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xb807a0));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Client::Graphics::Physics::BonePhysicsUpdater::vf0 */
uint F_00b80bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb80bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0xd4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6308));
  *(undefined * PTR32 * PTR32 *)(this + 0x6c) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f6300));
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10f62f8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f62d8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b80c10 */
uint F_00b80c10(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c30 */
uint F_00b80c30(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c50 */
uint F_00b80c50(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c70 */
uint F_00b80c70(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80c90 */
uint F_00b80c90(unsigned int gen_a0)
{
  GEN_ENTER(0xb80c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00b80cb0 */
uint F_00b80cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb80cb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

