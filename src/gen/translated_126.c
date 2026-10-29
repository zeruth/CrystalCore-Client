#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00af4790 */
GEN_NOFRAME byte GEN_THISCALL F_00af4790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaf4790u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(int *)(gen_frame + 0xa4)) = param_1;
  bVar4 = F_00a9fc70(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))) GEN_EDX_FWD);
  if (bVar4 == 0) {
    fVar1 = *param_2;
    (*(float *)(gen_frame + 0xa0)) = fVar1;
    fVar2 = *param_3;
    (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar2 - (float10)fVar1);
    (*(float *)(gen_frame + 0x94)) = (float)((float10)param_3[1] - (float10)param_2[1]);
    (*(float *)(gen_frame + 0x98)) = (float)((float10)param_3[2] - (float10)param_2[2]);
    fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
    fVar7 = (float10)(float)((float10)fVar2 - (float10)fVar1);
    fVar8 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
    fVar2 = ((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    if ((float10)fVar2 <= (float10)REFG(float, 0x10ebbe4)) {
      *param_3 = fVar1;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
    }
    else {
      if ((GEN_ISNAN(param_7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN(param_7) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || param_7 == REFG(float, 0x10ebbf0))) {
        param_7 = REFG(float, 0x1339ba0);
      }
      iVar3 = *(int *)((*(int *)(gen_frame + 0xa4)) + 0x10);
      (*(undefined2 *)(gen_frame + 0x60)) = 0;
      (*(undefined1 *)(gen_frame + 0x62)) = 0;
      (*(undefined2 *)(gen_frame + 0x80)) = 0;
      (*(undefined1 *)(gen_frame + 0x82)) = 0;
      (*(undefined4 *)(gen_frame + 0x88)) = 0;
      (*(char *)(gen_frame + 0xaf)) = '\0';
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x50)) = 0;
      (*(undefined4 *)(gen_frame + 0x54)) = 0;
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0x70)) = 0;
      (*(undefined4 *)(gen_frame + 0x74)) = 0;
      (*(undefined4 *)(gen_frame + 0x78)) = 0;
      (*(undefined4 *)(gen_frame + 0x84)) = 0;
      fVar1 = *((float *)GEN_TOP((*(int *)(iVar3 + 0x10) + 0xc0)));
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      uVar5 = F_00af2a00(param_2,param_3,param_7,fVar1,&(*(float *)(gen_frame + 0x90)),&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),
                           (float)(float10)0);
      if ((char)uVar5 != '\0') {
        if ((char)param_6 == '\0') {
          *(undefined1 *)((*(int *)(gen_frame + 0xa4)) + 0x154) = 1;
        }
        *param_3 = *param_2;
        param_3[1] = param_2[1];
        param_3[2] = param_2[2];
        if (((*(char *)(gen_frame + 0xaf)) != '\0') && (param_4 != (undefined *)0x0)) {
          F_00affb20(param_4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00af49a0 */
GEN_NOFRAME uint GEN_THISCALL F_00af49a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf49a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined2 extraout_var_00 = 0;
  float * pfVar6;
  undefined2 uVar7;
  uint extraout_EAX = 0;
  bool bVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = this;
  (*(float *)(gen_frame + 0xa8)) = *param_2;
  fVar12 = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x90)) = fVar12;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4)) = param_1[1];
  (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF(((float10)param_2[1] - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4)))));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = param_2[2];
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) - (float10)param_1[2])));
  fVar10 = (float10)((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) - (float10)param_1[2])));
  fVar11 = (float10)fVar12;
  fVar12 = (float)(fVar11 * fVar11 + fVar10 * fVar10);
  (*(float *)(gen_frame + 0x6c)) = fVar12;
  fVar12 = ((float)GEN_TOF(SQRT((float10)fVar12)));
  (*(float *)(gen_frame + 0x6c)) = fVar12;
  (*(float *)(gen_frame + 0xac)) = fVar12;
  (*(float *)(gen_frame + 0x50)) = *param_3;
  (*(float *)(gen_frame + 0x54)) = param_3[1];
  (*(float *)(gen_frame + 0x58)) = param_3[2];
  if (((char)param_6 != '\0') && ((*(char *)(gen_frame + 0xcb)) = '\0', (char)param_5 != '\0')) {
    (*(float *)(gen_frame + 0xb0)) = *param_4;
    (*(float *)(gen_frame + 0xb4)) = param_4[1];
    (*(float *)(gen_frame + 0xb8)) = param_4[2];
    (*(float *)(gen_frame + 0x0)) = param_4[3];
    (*(float *)(gen_frame + 0x4)) = param_4[4];
    (*(float *)(gen_frame + 0x8)) = param_4[5];
    (*(float *)(gen_frame + 0x10)) = param_4[6];
    (*(float *)(gen_frame + 0x14)) = param_4[7];
    (*(float *)(gen_frame + 0x18)) = param_4[8];
    (*(float *)(gen_frame + 0x30)) = param_4[9];
    (*(float *)(gen_frame + 0x34)) = param_4[10];
    (*(float *)((char *)&(*(double *)(gen_frame + 0x38)) + 0)) = param_4[0xb];
    (*(double *)(gen_frame + 0x38)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 4)),(uint)gen_fl2bits(param_4[0xb])));
    F_00ae7ca0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),&(*(char *)(gen_frame + 0xcb)));
    if ((*(char *)(gen_frame + 0xcb)) != '\0') {
      (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x24)));
      fVar12 = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x28)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x38)) + 0)) = fVar12;
      (*(double *)(gen_frame + 0x38)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 4)),(uint)gen_fl2bits(fVar12)));
      (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0xb8)) = fVar12;
      F_004bd580(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0xcc)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb4)))));
      fVar10 = (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb4)))));
      (*(float *)(gen_frame + 0xcc)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb0)))));
      if ((!((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb0))))) < fVar10)) ||
         ((*(float *)(gen_frame + 0xcc)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb8))))),
         !((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb8))))) < fVar10))) {
        (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0xb0));
        (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0xb4));
        (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0xb8));
      }
    }
  }
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0xa8));
  (*(float *)(gen_frame + 0x28)) = (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4));
  (*(float *)(gen_frame + 0x24)) = (*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4));
  uVar5 = F_00aed420(param_1,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0xb0)),0);
  fVar10 = (float10)0 * (float10)0;
  (*(float *)(gen_frame + 0xb4)) = 0.0;
  (*(double *)(gen_frame + 0x38)) = (double)fVar10;
  fVar12 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xb0)) * (float10)(*(float *)(gen_frame + 0xb0)) + fVar10) +
                  (float10)(*(float *)(gen_frame + 0xb8)) * (float10)(*(float *)(gen_frame + 0xb8)))));
  (*(float *)(gen_frame + 0xcc)) = fVar12;
  fVar12 = ((float)GEN_TOF(SQRT((float10)fVar12)));
  (*(float *)(gen_frame + 0xcc)) = fVar12;
  fVar11 = (float10)fVar12;
  fVar10 = (float10)0;
  bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10);
  bVar9 = bVar8 || fVar11 == fVar10;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11(bVar9 << 6 | bVar8 << 2 | 2U | !(fVar10 <= fVar11),(char)uVar5));
  if ((bVar8 == bVar9) &&
     (fVar12 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x98)) +
                      ((float10)(*(float *)(gen_frame + 0x90)) * (float10)(*(float *)(gen_frame + 0x50)) + (float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x94))
                      )))), (*(float *)(gen_frame + 0xcc)) = fVar12, !(fVar10 < (float10)fVar12))) {
    (*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4)) = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x10);
    if (((*((int *)GEN_TOP(((int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4))) + 0x10))) == 0) ||
        (bVar4 = F_00a9f620(*((int *)GEN_TOP(((int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4))) + 0x10))) GEN_EDX_ARG), bVar4 == 0)) &&
       ((piVar3 = *((int * PTR32 *)GEN_TOP(((int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4))) + 0x10))), piVar3 == (int *)0x0 ||
        (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG), uVar5 != 1)))) {
      (*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4)) = 0.0;
    }
    else {
      (*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4)) = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4))) + 0x10))) + 0xc0)));
    }
    fVar12 = F_00ae9520(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x10) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0xcc)) = fVar12;
    bVar4 = F_00af0bb0(param_1,fVar12,(*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 4)),&(*(float *)(gen_frame + 0xcc)),REFG(float, 0x10ebbf0),&(*(undefined4 *)(gen_frame + 0x40)),&(*(char *)(gen_frame + 0xcb)),0
                         ,0,0,0,0,3,0);
    pfVar6 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
    if (bVar4 != 0) {
      bVar4 = F_0054ccb0(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)));
      if (bVar4 != 0) {
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = 0;
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = 0;
      }
      bVar4 = F_0054ce40(&(*(float *)(gen_frame + 0x70)),(uint)&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x50)));
      fVar12 = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 0)) * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 0)) +
                      ((float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x74)) + (float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0x70))
                      ))));
      (*(float *)(gen_frame + 0xcc)) = fVar12;
      fVar12 = ((float)GEN_TOF(SQRT((float10)fVar12)));
      (*(float *)(gen_frame + 0xcc)) = fVar12;
      fVar10 = (float10)fVar12;
      bVar8 = GEN_ISNAN(fVar10) || GEN_ISNAN((float10)0);
      pfVar6 = ((float *)GEN_TOP(CONCAT22(extraout_var_00,(ushort)bVar4)));
      if (bVar8 == (bVar8 || fVar10 == (float10)0)) {
        F_004bd580(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG);
        fVar12 = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x78)) + 0)) * (float10)(*(float *)(gen_frame + 0xb8)) +
                        ((float10)(*(float *)(gen_frame + 0x74)) * (float10)*(double *)&REFG(undefined, 0x108bec8) +
                        (float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0xb0))))));
        (*(float *)(gen_frame + 0xcc)) = fVar12;
        pfVar6 = (float *)F_004bd7b0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x70)),fVar12);
        (*(float *)(gen_frame + 0xb0)) = *pfVar6;
        (*(float *)(gen_frame + 0xb4)) = pfVar6[1];
        (*(float *)(gen_frame + 0xb8)) = pfVar6[2];
      }
    }
    fVar10 = (float10)(*(float *)(gen_frame + 0xb0)) * (float10)(*(float *)(gen_frame + 0xb0));
    (*(double *)(gen_frame + 0x78)) = (double)fVar10;
    fVar11 = (float10)(*(float *)(gen_frame + 0xb8)) * (float10)(*(float *)(gen_frame + 0xb8));
    (*(double *)(gen_frame + 0x48)) = (double)fVar11;
    fVar12 = ((float)GEN_TOF((fVar11 + ((float10)(*(float *)(gen_frame + 0xb4)) * (float10)(*(float *)(gen_frame + 0xb4)) + fVar10))));
    (*(float *)(gen_frame + 0xcc)) = fVar12;
    fVar12 = ((float)GEN_TOF(SQRT((float10)fVar12)));
    (*(float *)(gen_frame + 0xcc)) = fVar12;
    fVar10 = (float10)0;
    fVar11 = (float10)fVar12;
    bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10);
    bVar9 = bVar8 || fVar11 == fVar10;
    uVar7 = (undefined2)((uint)((int)(uintptr_t)pfVar6) >> 0x10);
    if (bVar8 != bVar9) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      return CONCAT22(uVar7,CONCAT11(bVar9 << 6 | bVar8 << 2 | 2U | !(fVar10 <= fVar11),(char)pfVar6
                                    ));
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
    bVar8 = GEN_ISNAN((*(float *)(gen_frame + 0x6c))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar9 = bVar8 || (*(float *)(gen_frame + 0x6c)) == *(float *)&REFG(undefined, 0x1088114);
    uVar5 = CONCAT22(uVar7,CONCAT11(bVar9 << 6 | bVar8 << 2 | 2U |
                                    !(*(float *)&REFG(undefined, 0x1088114) <= (*(float *)(gen_frame + 0x6c))),(char)pfVar6));
    (*(char *)(gen_frame + 0xcb)) = '\0';
    if (bVar8 == bVar9) {
      (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x94));
      (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x98));
      F_004bd580(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0xb0));
      (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0xb4));
      (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0xb8));
      F_004bd580(&(*(float *)(gen_frame + 0x90)) GEN_EDX_ARG);
      fVar12 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x98)) * (float10)(*(float *)(gen_frame + 0x58)) +
                      ((float10)(*(float *)(gen_frame + 0x94)) * (float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x90))
                      ))));
      (*(float *)(gen_frame + 0xcc)) = fVar12;
      fVar10 = F_00aeb350(fVar12);
      (*(float *)(gen_frame + 0xcc)) = (float)fVar10;
      fVar10 = (float10)(float)fVar10;
      fVar12 = ((float)GEN_TOF(ABS(fVar10)));
      (*(float *)(gen_frame + 0xcc)) = fVar12;
      uVar5 = extraout_EAX;
      if ((float10)*(float *)&REFG(undefined, 0x1339b88) < (float10)fVar12) {
        (*(char *)(gen_frame + 0xcb)) = '\x01';
        (*(undefined * PTR32 *)(gen_frame + 0x8c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1094620) - fVar10) /
                                  (float10)*(float *)&REFG(undefined, 0x1339b88)))))));
      }
    }
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xac)) * (float10)REFG(double, 0x1088108));
    if ((*(char *)(gen_frame + 0xcb)) != '\0') {
      (*(float *)(gen_frame + 0xa8)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xac)) * (float10)REFG(double, 0x1088108)) *
                        (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8c))))))));
    }
    (*(float *)(gen_frame + 0xac)) = (float)((float10)(*(double *)(gen_frame + 0x48)) + (float10)(*(double *)(gen_frame + 0x78)));
    fVar12 = ((float)GEN_TOF(SQRT((float10)(float)((float10)(*(double *)(gen_frame + 0x48)) + (float10)(*(double *)(gen_frame + 0x78))))));
    (*(float *)(gen_frame + 0xac)) = fVar12;
    if ((float10)fVar12 < (float10)(*(float *)(gen_frame + 0xa8))) {
      (*(float *)(gen_frame + 0xb4)) = 0.0;
      fVar12 = ((float)GEN_TOF((((float10)(*(double *)(gen_frame + 0x38)) + (float10)(*(double *)(gen_frame + 0x78))) + (float10)(*(double *)(gen_frame + 0x48)))));
      (*(float *)(gen_frame + 0xac)) = fVar12;
      fVar12 = ((float)GEN_TOF(SQRT((float10)fVar12)));
      (*(float *)(gen_frame + 0xac)) = fVar12;
      fVar10 = (float10)0;
      fVar11 = (float10)fVar12;
      bVar8 = GEN_ISNAN(fVar11) || GEN_ISNAN(fVar10);
      bVar9 = bVar8 || fVar11 == fVar10;
      uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                       CONCAT11(bVar9 << 6 | bVar8 << 2 | 2U | !(fVar10 <= fVar11),(char)uVar5));
      if (bVar8 == bVar9) {
        uVar5 = F_004bd580(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG);
        fVar10 = (float10)(*(float *)(gen_frame + 0xa8));
        (*(float *)(gen_frame + 0xb0)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0xb0)));
        (*(float *)(gen_frame + 0xb4)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0xb4)));
        (*(float *)(gen_frame + 0xb8)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0xb8)));
      }
    }
  }
  fVar12 = *param_1;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0xb0)));
  fVar1 = param_1[1];
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)fVar1);
  fVar2 = param_1[2];
  (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0xb8)));
  *param_2 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0xb0)));
  param_2[1] = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)fVar1);
  param_2[2] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0xb8)));
  return uVar5;
}

/* ref: FUN_00af4fe0 */
GEN_NOFRAME uint GEN_THISCALL F_00af4fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xaf4fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  char * param_6 = (char *)(uintptr_t)gen_a6;
  char * param_7 = (char *)(uintptr_t)gen_a7;
  char * param_8 = (char *)(uintptr_t)gen_a8;
  undefined1 * param_9 = (undefined1 *)(uintptr_t)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  byte bVar8;
  uint3 extraout_var = 0;
  uint3 extraout_var_00 = 0;
  uint3 uVar9;
  char cVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  *param_6 = '\0';
  *param_7 = '\0';
  *param_8 = '\0';
  *param_9 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x204)));
  if ((iVar6 != 0) && (((iVar6 == 3 || (iVar6 == 4)) || (iVar6 == 2)))) {
    bVar8 = F_00afef80(param_5 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),((float *)(gen_frame + 0x8)));
    uVar9 = extraout_var;
    if ((bVar8 != 0) && (!((*(float *)(gen_frame + 0x4)) <= 0.0))) {
      fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x0)));
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar11)));
      uVar9 = extraout_var_00;
      if (!((float10)REFG(float, 0x1339ba0) <= (float10)(float)fVar11)) {
        *param_8 = '\x01';
        return CONCAT31(extraout_var_00,1);
      }
    }
    *param_8 = '\0';
    return (uint)uVar9 << 8;
  }
  fVar1 = *param_3;
  fVar14 = param_1[1];
  cVar10 = *((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359)));
  (*(char *)(gen_frame + 0x3f)) = cVar10;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar1 - (float10)fVar14);
  fVar2 = *param_2;
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar3 = param_2[2];
  ((float *)(gen_frame + 0x8))[0] = fVar3;
  fVar2 = (float)((float10)fVar2 - (float10)*param_1);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)param_1[2]);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar11 = (float10)(float)((float10)fVar1 - (float10)fVar14);
  if ((cVar10 == '\0') &&
     ((*(float *)(gen_frame + 0x34)) = (float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890)),
     fVar11 <= (float10)(float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890)))) {
    fVar12 = (float10)fVar3;
    fVar13 = (float10)fVar2;
    fVar1 = ((float)GEN_TOF(ABS(fVar11)));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar14 = (float)(fVar12 * fVar12 + fVar13 * fVar13);
    (*(float *)(gen_frame + 0x34)) = fVar14;
    fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
    (*(float *)(gen_frame + 0x34)) = fVar14;
    (*(float *)(gen_frame + 0x30)) = fVar14;
    fVar11 = ((float10)GEN_TOD(GEN_X87MATH((float10)REFG(float, 0x1339ba0),4)));
    (*(float *)(gen_frame + 0x34)) = (float)fVar11;
    fVar14 = (float)((float10)(float)fVar11 * (float10)fVar14);
    (*(float *)(gen_frame + 0x30)) = fVar14;
    fVar14 = ((float)GEN_TOF(ABS((float10)fVar14)));
    (*(float *)(gen_frame + 0x30)) = fVar14;
    if ((float10)fVar14 < (float10)fVar1) {
      *param_6 = '\x01';
      goto LAB_00af5240;
    }
  }
  bVar8 = F_00afef80(param_5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x4)),((float *)(gen_frame + 0x8)));
  if ((bVar8 == 0) || (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 < (*(float *)(gen_frame + 0x4))))) {
LAB_00af513b: ;
    cVar10 = '\0';
  }
  else {
    fVar11 = F_00aeb3f0((uint)&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x2c)) = (float)fVar11;
    fVar11 = (float10)(float)fVar11;
    if ((!GEN_ISNAN(fVar11) && !GEN_ISNAN((float10)REFG(float, 0x1339ba0))) && !(fVar11 < (float10)REFG(float, 0x1339ba0)))
    goto LAB_00af513b;
    cVar10 = '\x01';
  }
  *param_8 = cVar10;
  if ((!((float10)REFG(float, 0x1339ba4) < (float10)(*(float *)(gen_frame + 0x38)))) && (cVar10 == '\0')) {
    fVar1 = *param_2;
    fVar14 = *param_1;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 - (float10)fVar14);
    fVar2 = param_2[1];
    fVar3 = param_1[1];
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar4 = param_2[2];
    fVar5 = param_1[2];
    ((float *)(gen_frame + 0x8))[0] = (float)((float10)fVar4 - (float10)fVar5);
    (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 - (float10)fVar14);
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
    F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
    fVar1 = ((float)GEN_TOF(((float10)param_4[2] * (float10)(*(float *)(gen_frame + 0x18)) +
                   ((float10)*param_4 * (float10)(*(float *)(gen_frame + 0x10)) + (float10)param_4[1] * (float10)(*(float *)(gen_frame + 0x14)))
                   )));
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar14 = REFG(float, 0x1087f04);
    if (((float10)1 < (float10)fVar1) ||
       (fVar14 = REFG(float, 0x10ebbf0),
       (!GEN_ISNAN(REFG(float, 0x10ebbf0)) && !GEN_ISNAN(fVar1)) && (!(REFG(float, 0x10ebbf0) < fVar1) && REFG(uint, 0x10ebbf0) != fVar1))) {
      (*(float *)(gen_frame + 0x38)) = fVar14;
    }
    fVar11 = ((float10)GEN_TOD(GEN_X87MATH((float10)(*(float *)(gen_frame + 0x38)),7)));
    (*(float *)(gen_frame + 0x2c)) = (float)fVar11;
    fVar11 = F_00aeb260((float)fVar11);
    fVar1 = (float)fVar11;
    (*(float *)(gen_frame + 0x30)) = fVar1;
    (*(float *)(gen_frame + 0x2c)) = (float)((float10)param_1[1] - (float10)*(double *)&REFG(undefined, 0x10928e8));
    if (((float10)*param_3 <
         (float10)(float)((float10)param_1[1] - (float10)*(double *)&REFG(undefined, 0x10928e8))) &&
       ((!GEN_ISNAN(REFG(float, 0x10ec4b0)) && !GEN_ISNAN(fVar1)) && (!(REFG(float, 0x10ec4b0) < fVar1) && REFG(uint, 0x10ec4b0) != fVar1)))
    {
      if ((*(char *)(gen_frame + 0x3f)) == '\0') {
        *param_7 = '\x01';
      }
      else {
        *param_8 = '\x01';
      }
    }
  }
  if ((*param_6 == '\0') && (*param_7 == '\0')) {
    return (uint)param_6;
  }
LAB_00af5240: ;
  iVar6 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10) + 0x204)));
  if ((iVar6 != 0) && (iVar6 == 1)) {
    *param_6 = '\0';
    *param_7 = '\0';
    return (uint)param_6;
  }
  *param_9 = 1;
  *param_8 = '\0';
  return (uint)param_8;
}

/* ref: FUN_00af52f0 */
GEN_FRAME uint GEN_THISCALL F_00af52f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xaf52f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined2 uVar7;
  uint uVar6;
  bool bVar8;
  
  iVar3 = *(int *)(param_1 + 4);
  if ((*(int *)(iVar3 + 0x204) == 0) &&
     ((*(char *)(param_1 + 8) == '\0' || ((char)param_2 == '\0')))) {
    iVar4 = *(int *)(iVar3 + 0x10);
    fVar1 = *(float *)(iVar4 + 0xe0);
    bVar5 = GEN_ISNAN(fVar1);
    bVar8 = bVar5 || fVar1 == 0.0;
    uVar7 = (undefined2)((uint)iVar4 >> 0x10);
    uVar6 = CONCAT22(uVar7,CONCAT11(bVar8 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar1),(char)iVar4));
    if (bVar5 == bVar8) {
      fVar2 = *(float *)(iVar3 + 0x448);
      bVar5 = GEN_ISNAN(fVar2);
      bVar8 = bVar5 || fVar2 == 0.0;
      uVar6 = CONCAT22(uVar7,CONCAT11(bVar8 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar2),(char)iVar4));
      if (bVar5 == bVar8) {
        *(uint *)(iVar3 + 0x44c) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
        *(undefined4 *)(iVar3 + 0x448) = 0;
        return uVar6;
      }
    }
  }
  else {
    uVar6 = F_00af2210(iVar3 GEN_EDX_FWD,param_3);
  }
  return uVar6;
}

/* ref: FUN_00af5360 */
GEN_NOFRAME uint GEN_THISCALL F_00af5360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf5360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float * pfVar5;
  uint uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float10 fVar7;
  
  uVar6 = *(uint *)((int)this + 0x14);
  if ((uVar6 != 0) && (((uVar6 == 3 || (uVar6 == 4)) || (uVar6 == 2)))) {
    if ((((*(int *)((int)this + 0x10) != 0) &&
         (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar3 != 0)) &&
        (bVar4 = F_00a9f620(iVar3 GEN_EDX_FWD), bVar4 != 0)) && (REFG(char, 0x14c0ba4) != '\0')) {
      pfVar5 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x10)) = *pfVar5;
      fVar1 = pfVar5[2];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x18)) + 0)) = fVar1;
      (*(double *)(gen_frame + 0x18)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x18)) + 4)),(uint)gen_fl2bits(fVar1)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar5 - (float10)*param_1);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0)) = (float)((float10)fVar1 - (float10)param_1[2]);
      (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)),
                                     (uint)gen_fl2bits((float)((float10)fVar1 - (float10)param_1[2])
                                                      )));
      F_00aeff30(this GEN_EDX_ARG,((float *)(gen_frame + 0x0)));
      fVar7 = (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 0));
      (*(double *)(gen_frame + 0x18)) = (double)(*(float *)(gen_frame + 0x8));
      (*(double *)(gen_frame + 0x28)) = (double)((float *)(gen_frame + 0x0))[0];
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x20)) + fVar7 * fVar7);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) +
                     (float10)((float *)(gen_frame + 0x0))[0] * (float10)((float *)(gen_frame + 0x0))[0]);
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar1 < (float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10ec4b8)) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x1094818));
      }
      if (REFG(char, 0x14c0cc6) == '\0') {
        uVar6 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
        fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 4) - (float10)param_1[1])));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        fVar7 = (float10)fVar1;
        fVar1 = ((float)GEN_TOF(ABS(fVar7)));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(ABS((float10)*(float *)((int)this + 0x40))));
        if ((float10)fVar1 <
            (float10)((float)GEN_TOF(ABS((float10)*(float *)((int)this + 0x40)))) *
            (float10)*(double *)&REFG(undefined, 0x109cac8)) {
          fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
          (*(float *)(gen_frame + 0x38)) = fVar1;
          if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
              ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
            fVar1 = (float)(fVar7 / (float10)fVar1);
            (*(float *)(gen_frame + 0x38)) = fVar1;
            fVar1 = ((float)GEN_TOF(((float10)REFG(double, 0x1088108) * (float10)*(float *)((int)this + 0x28) +
                           (float10)fVar1 * (float10)REFG(double, 0x1088108))));
            (*(float *)(gen_frame + 0x3c)) = fVar1;
            F_00aeae60(this GEN_EDX_ARG,*(float *)((int)this + 0x20),fVar1);
            F_00ae7a70(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x3c)));
          }
        }
      }
    }
    uVar6 = *(uint *)((int)this + 0x10);
    if ((uVar6 != 0) && (*(int *)(uVar6 + 0x10) != 0)) {
      bVar4 = F_00a9f620(*(int *)(uVar6 + 0x10) GEN_EDX_ARG);
      uVar6 = CONCAT31(extraout_var,bVar4);
      if (bVar4 != 0) goto LAB_00af55be;
    }
    if (*(char *)((int)this + 0xa5) != '\0') {
      fVar1 = *(float *)((int)this + 0xa0);
      (*(float *)(gen_frame + 0x38)) = fVar1;
      if (((float10)*(float *)((int)this + 0x98) < (float10)fVar1) &&
         (*(int *)((int)this + 0x14) == 3)) {
        uVar6 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) - (float10)*(float *)(uVar6 + 4))));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
        (*(float *)(gen_frame + 0x38)) = fVar1;
        if (((double)fVar1 <= REFG(double, 0x1094800)) &&
           ((!GEN_ISNAN(*(float *)((int)this + 0x28)) && !GEN_ISNAN(REFG(float, 0x10ebcec))) &&
            !(*(float *)((int)this + 0x28) <= REFG(float, 0x10ebcec)))) {
          F_00ae7a70(this GEN_EDX_ARG,(float)(float10)0);
          uVar6 = F_00aeae60(this GEN_EDX_ARG,*(float *)((int)this + 0x20),*(float *)((int)this + 0x28));
        }
      }
    }
  }
LAB_00af55be: ;
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar3 != 0)) {
    bVar4 = F_00a9f620(iVar3 GEN_EDX_ARG);
    uVar6 = CONCAT31(extraout_var_00,bVar4);
    if (bVar4 != 0) {
      REFG(char, 0x14c0cc6) = '\0';
    }
  }
  return uVar6;
}

/* ref: FUN_00af55f0 */
GEN_NOFRAME uint GEN_THISCALL F_00af55f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf55f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  int * piVar2;
  int in_ecx;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  
  (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(param_2[1]);
  iVar1 = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(char *)(gen_frame + 0x82)) = '\0';
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((*(int *)(iVar1 + 0x10) == 0) || (bVar3 = F_00a9f620(*(int *)(iVar1 + 0x10) GEN_EDX_FWD), bVar3 == 0)) {
    fVar6 = 0.0;
    piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
    if (piVar2 == (int *)0x0) goto LAB_00af5716;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
    if (uVar4 != 1) {
      fVar6 = 0.0;
      goto LAB_00af5716;
    }
  }
  fVar6 = *((float *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0xc0)));
LAB_00af5716: ;
  iVar1 = *(int *)((int)this + 0x10);
  in_ecx = *(int *)(iVar1 + 0x10);
  (*(float *)(gen_frame + 0xa4)) = fVar6;
  (*(float *)(gen_frame + 0xac)) = *(float *)(in_ecx + 0xc0);
  (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1339ba4);
  if (((in_ecx == 0) || (bVar3 = F_00a9f620(in_ecx GEN_EDX_ARG), bVar3 == 0)) &&
     ((piVar2 = *(int * PTR32 *)(iVar1 + 0x10), piVar2 == (int *)0x0 ||
      (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG), uVar4 != 1)))) {
    (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1339af4);
  }
  else {
    (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xac)) + (float10)(*(float *)(gen_frame + 0xa8))) + (float10)REFG(double, 0x1091858))));
  }
  bVar3 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xac)),(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0)
  ;
  if (bVar3 != 0) {
    (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0xa8));
  }
  bVar3 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,param_1);
  if (bVar3 == 0) {
    F_00aec9f0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x90)));
  }
  iVar1 = *(int *)((int)this + 0x10);
  uVar5 = (*(undefined4 *)(gen_frame + 0x88));
  if ((*(char *)(gen_frame + 0x82)) == '\0') {
    uVar5 = (*(undefined4 *)(gen_frame + 0x3c));
  }
  *(undefined4 *)(iVar1 + 0x374) = uVar5;
  *(undefined4 *)(iVar1 + 0x378) = (*(undefined4 *)(gen_frame + 0x84));
  F_00affb20((undefined *)(iVar1 + 0x380) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)(iVar1 + 0x410) = (*(undefined4 *)(gen_frame + 0x90));
  *(float *)(iVar1 + 0x414) = (*(float *)(gen_frame + 0x94));
  *(undefined4 *)(iVar1 + 0x418) = (*(undefined4 *)(gen_frame + 0x98));
  uVar4 = 0;
  if ((*(int *)(gen_frame + 0x44)) != 0) {
    uVar4 = F_00c9f0c0((undefined *)((*(int *)(gen_frame + 0x44)) + 0x58) GEN_EDX_ARG,iVar1 + 0x454);
  }
  return uVar4;
}

/* ref: FUN_00af5870 */
GEN_NOFRAME uint GEN_THISCALL F_00af5870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf5870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float * pfVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  uVar3 = 0;
  if ((*param_3 == '\0') &&
     (pfVar1 = (float *)((int)this + 0x28), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)))
  {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(char *)(gen_frame + 0x9f)) = '\0';
    if (*(char *)((int)this + 0x5b) != '\0') {
      fVar6 = gen_bits2f(param_2[1]);
      (*(float *)(gen_frame + 0x98)) = fVar6;
      (*(undefined * PTR32 *)(gen_frame + 0x94)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 100))));
      fVar4 = (float10)*(float *)((int)this + 100);
      fVar5 = (float10)fVar6;
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4)) {
        return 0;
      }
      if (fVar5 <= fVar4) {
        (*(char *)(gen_frame + 0x9f)) = '\x01';
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = *(undefined * PTR32 *)((int)this + 0x10);
    fVar6 = F_00ae9520(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
    (*(float *)(gen_frame + 0x98)) = fVar6;
    fVar6 = F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0x94)) GEN_EDX_ARG);
    (*(undefined * PTR32 *)(gen_frame + 0x94)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar6)));
    bVar2 = F_00af0bb0(param_2,(*(float *)(gen_frame + 0x98)),fVar6,&(*(float *)(gen_frame + 0x98)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
    if (bVar2 == 0) {
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      return (uint)param_1;
    }
    if (((*(char *)(gen_frame + 0x9f)) == '\0') &&
       ((!(((float10)GEN_TOD(gen_bits2f(param_2[1]))) <= (float10)(*(float *)(gen_frame + 0x98)) + (float10)*(double *)&REFG(undefined, 0x108bec8))
        || ((((((char)(*(undefined2 *)(gen_frame + 0x80)) != '\0' &&
               (uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG),
               !((float10)(*(float *)(gen_frame + 0x74)) <= (float10)*(float *)(uVar3 + 4)))) ||
              (uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG),
              !((float10)(*(float *)(gen_frame + 0x98)) <= (float10)*(float *)(uVar3 + 4)))) ||
             (bVar2 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x0))), bVar2 == 0)) && (REFG(char, 0x14c0ba6) == '\0')))))) {
      bVar2 = F_00ae75d0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
    }
    *param_3 = '\x01';
    uVar3 = F_00affb20(param_4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
    param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x98)));
    if (*(char *)((int)this + 0x5b) != '\0') {
      *param_2 = *(undefined4 *)((int)this + 0x60);
      param_2[1] = *(undefined4 *)((int)this + 100);
      param_2[2] = *(undefined4 *)((int)this + 0x68);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00af5ac0 */
GEN_NOFRAME uint GEN_THISCALL F_00af5ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xaf5ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  char * pcVar6;
  
  pcVar6 = param_3;
  if ((((*param_3 == '\0') &&
       (pfVar1 = (float *)((int)this + 0x28), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))
       ) && ((*(char *)((int)this + 0x5b) == '\0' ||
             (!((float10)*(float *)((int)this + 100) < ((float10)GEN_TOD(gen_bits2f(param_2[1])))))))) &&
     ((char)param_4 != '\0')) {
    bVar5 = F_00af0940(param_5);
    pcVar6 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
    if (bVar5 != 0) {
      fVar4 = *(float *)(param_5 + 4);
      uVar2 = *(undefined4 *)param_5;
      uVar3 = *(undefined4 *)(param_5 + 8);
      pcVar6 = param_5;
      if (((float10)GEN_TOD(gen_bits2f(param_2[1]))) <= (float10)fVar4 + (float10)*(double *)&REFG(undefined, 0x108bec8)) {
        *param_3 = '\x01';
        if (*(char *)((int)this + 0x5b) != '\0') {
          *param_2 = *(undefined4 *)((int)this + 0x60);
          param_2[1] = *(undefined4 *)((int)this + 100);
          param_2[2] = *(undefined4 *)((int)this + 0x68);
          return (uint)param_5;
        }
        *param_2 = uVar2;
        param_2[1] = (undefined4)gen_fl2bits(fVar4);
        param_2[2] = uVar3;
      }
    }
  }
  return (uint)pcVar6;
}

/* ref: FUN_00af5b90 */
GEN_FRAME uint GEN_THISCALL F_00af5b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xaf5b90u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  ulonglong uVar2;
  
  if ((char)param_5 == '\0') {
    iVar1 = (int)param_1 + 0xd0;
    if (*(char *)((int)param_1 + 0xa6) == '\0') {
      iVar1 = (int)param_1 + 0x80;
    }
    if (*(char *)(iVar1 + 0x24) != '\0') {
      F_00af0530(param_1 GEN_EDX_FWD,param_2);
    }
  }
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x14) = (undefined1)param_3;
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_2 + 4);
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined1 *)(iVar1 + 0x24) = 1;
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(float *)(iVar1 + 0x10) = param_4;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    param_5 = (int)param_1 + 0x80;
  }
  else {
    param_5 = (int)param_1 + 0xd0;
  }
  uVar2 = F_00427d90();
  *(ulonglong *)(param_5 + 0x40) = uVar2 + (longlong)((double)param_4 * *(double *)&REFG(undefined, 0x10912a8));
  iVar1 = (int)param_1 + 0xd0;
  if (*(char *)((int)param_1 + 0xa6) == '\0') {
    iVar1 = (int)param_1 + 0x80;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 4);
  uVar2 = F_00427d90();
  *(ulonglong *)((int)param_1 + 0x78) = uVar2;
  return (uint)uVar2;
}

/* ref: FUN_00af5cb0 */
GEN_FRAME uint GEN_THISCALL F_00af5cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf5cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10) GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = (*(uint *)(gen_frame + 0x4)) >> 8;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) & 0xffffff00;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
      if (*(int *)((int)this + 0x14) == 2) {
        (*(uint *)(gen_frame + 0x4)) = CONCAT31((int3)uVar2,0x10);
      }
      if (*(char *)((int)this + 0x5b) != '\0') {
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),0x41);
      }
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d10 */
GEN_NOFRAME uint GEN_THISCALL F_00af5d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf5d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10) GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,2,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d40 */
GEN_NOFRAME uint GEN_THISCALL F_00af5d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf5d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10) GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,4,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00af5d70 */
GEN_NOFRAME uint GEN_THISCALL F_00af5d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf5d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x49) = 0;
  if ((uVar2 != 0) && (*(int *)(uVar2 + 0x10) != 0)) {
    bVar1 = F_00a9f620(*(int *)(uVar2 + 0x10) GEN_EDX_FWD);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      if (*(char *)((int)this + 0x4b) != '\0') {
        uVar2 = F_00aeb1c0(this GEN_EDX_ARG,(int)this + 0x30,*(float *)((int)this + 0x44),0);
      }
    }
    else {
      uVar2 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,0x10,0);
      REFG(undefined1, 0x14c0cc0) = 1;
    }
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xe0000000;
  *(undefined4 *)((int)this + 0x20) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x20), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x24) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x24), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x28) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x28), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  return uVar2;
}

/* ref: FUN_00af5e30 */
GEN_NOFRAME uint GEN_THISCALL F_00af5e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaf5e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this_00;
  byte bVar5;
  float * pfVar6;
  undefined3 extraout_var = 0;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  pfVar7 = *(float * PTR32 *)((int)this + 0x10);
  if (pfVar7 != (float *)0x0) {
    this_00 = ((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar7[4])));
    (*(undefined * PTR32 *)(gen_frame + 0xac)) = this_00;
    if (this_00 != (undefined *)0x0) {
      pfVar6 = (float *)F_00a5feb0(this_00 GEN_EDX_FWD);
      fVar1 = *param_1;
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      fVar2 = *pfVar6;
      (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar1 - (float10)fVar2);
      pfVar8 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[1])));
      (*(float * PTR32 *)(gen_frame + 0xd4)) = pfVar8;
      fVar3 = pfVar6[1];
      (*(float *)(gen_frame + 0xc4)) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8))) - (float10)fVar3);
      fVar4 = param_1[2];
      (*(float *)(gen_frame + 0xd8)) = fVar4;
      (*(float *)(gen_frame + 0xc8)) = (float)((float10)fVar4 - (float10)pfVar6[2]);
      fVar9 = (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8))) - (float10)fVar3);
      fVar10 = (float10)(float)((float10)fVar1 - (float10)fVar2);
      fVar11 = (float10)(float)((float10)fVar4 - (float10)pfVar6[2]);
      fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
      (*(float *)(gen_frame + 0xd0)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0xd0)) = fVar2;
      pfVar7 = pfVar6;
      if (!((float10)fVar2 <= (float10)*(float *)&REFG(undefined, 0x10ebbe8))) {
        (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x1339ba4);
        (*(undefined2 *)(gen_frame + 0x60)) = 0;
        fVar9 = (float10)0;
        (*(undefined1 *)(gen_frame + 0x62)) = 0;
        (*(undefined2 *)(gen_frame + 0x80)) = 0;
        (*(undefined1 *)(gen_frame + 0x82)) = 0;
        (*(undefined4 *)(gen_frame + 0x88)) = 0;
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar1 + fVar9);
        (*(undefined4 *)(gen_frame + 0x4)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0;
        fVar2 = (float)((float10)REFG(float, 0x1339ba4) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8))));
        (*(float *)(gen_frame + 0xc4)) = fVar2;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(float *)(gen_frame + 0xc8)) = (float)((float10)fVar4 + fVar9);
        (*(undefined4 *)(gen_frame + 0x34)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar1 + fVar9);
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x54)) = 0;
        (*(float *)(gen_frame + 0x94)) = fVar2;
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar4 + fVar9);
        (*(undefined4 *)(gen_frame + 0x74)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        (*(undefined4 *)(gen_frame + 0x84)) = 0;
        fVar1 = *pfVar6;
        (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar1 + fVar9);
        fVar2 = (float)((float10)REFG(float, 0x1339ba4) + (float10)pfVar6[1]);
        (*(float *)(gen_frame + 0xc4)) = fVar2;
        fVar3 = pfVar6[2];
        (*(float *)(gen_frame + 0xc8)) = (float)(fVar9 + (float10)fVar3);
        (*(float *)(gen_frame + 0xb0)) = (float)((float10)fVar1 + fVar9);
        (*(float *)(gen_frame + 0xb4)) = fVar2;
        (*(float *)(gen_frame + 0xb8)) = (float)(fVar9 + (float10)fVar3);
        fVar9 = (float10)0;
        bVar5 = F_00af26b0(&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0x90)),(float)fVar9,(float)fVar9,&(*(float *)(gen_frame + 0xc0)),&(*(char *)(gen_frame + 0xdf)),
                             &(*(undefined4 *)(gen_frame + 0x0)),(float)fVar9);
        pfVar7 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
        if (bVar5 != 0) {
          if ((*(char *)(gen_frame + 0xdf)) == '\0') {
            fVar1 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xac)) + 0xc0);
            (*(float *)(gen_frame + 0xd0)) = 0.0;
            fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) - (float10)fVar1);
            (*(float *)(gen_frame + 0xd8)) = fVar1;
            if ((float10)0 < (float10)fVar1) {
              (*(float * PTR32 *)(gen_frame + 0xd4)) = &(*(float *)(gen_frame + 0xd8));
            }
            else {
              (*(float * PTR32 *)(gen_frame + 0xd4)) = &(*(float *)(gen_frame + 0xd0));
            }
            F_0046f4a0(&(*(float *)(gen_frame + 0xb0)),param_1,pfVar6);
            F_0046f0e0(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,*(*(float * PTR32 *)(gen_frame + 0xd4)));
            pfVar7 = &(*(float *)(gen_frame + 0xb0));
            pfVar8 = &(*(float *)(gen_frame + 0x90));
          }
          else {
            F_0046f4a0(&(*(float *)(gen_frame + 0xb0)),param_1,pfVar6);
            F_0046f0e0(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x40)));
            F_0046f0e0(&(*(float *)(gen_frame + 0xc0)) GEN_EDX_ARG,*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xac)) + 0xc0));
            pfVar7 = &(*(float *)(gen_frame + 0xc0));
            pfVar6 = (float *)F_004bd670(&(*(float *)(gen_frame + 0x90)),pfVar6,&(*(float *)(gen_frame + 0xb0)));
            pfVar8 = &(*(float *)(gen_frame + 0xb0));
          }
          pfVar7 = (float *)F_004bd670(pfVar8,pfVar6,pfVar7);
          *param_1 = *pfVar7;
          param_1[1] = pfVar7[1];
          param_1[2] = pfVar7[2];
        }
      }
    }
  }
  return (uint)pfVar7;
}

/* ref: FUN_00af6100 */
GEN_NOFRAME uint GEN_THISCALL F_00af6100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaf6100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  
  fVar3 = param_1[1];
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0xcc)) = fVar3;
  fVar2 = param_1[2];
  fVar7 = (float10)fVar3;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(float *)(gen_frame + 0x94)) = (float)(fVar7 + (float10)REFG(float, 0x1339ba4));
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(float *)(gen_frame + 0xb4)) = (float)(fVar7 - (float10)*(double *)&REFG(undefined, 0x10d57f0));
  fVar7 = (float10)0;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0xb0)) = fVar1;
  (*(float *)(gen_frame + 0x98)) = fVar2;
  (*(float *)(gen_frame + 0xb8)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  bVar4 = F_00af26b0(&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xb0)),(float)fVar7,(float)fVar7,&(*(float *)(gen_frame + 0xa0)),&(*(undefined1 *)(gen_frame + 0xcb)),&(*(undefined4 *)(gen_frame + 0x0)),
                       (float)fVar7);
  if (bVar4 != 0) {
    (*(float *)(gen_frame + 0xcc)) = 0.0;
    pfVar6 = ((float *)(gen_frame + 0x40));
    if (!(0.0 < ((float *)(gen_frame + 0x40))[0])) {
      pfVar6 = &(*(float *)(gen_frame + 0xcc));
    }
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x98)));
    (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x98)));
    uVar5 = F_0046f0e0(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,*pfVar6);
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x98)));
    *param_1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x90)));
    param_1[1] = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x94)));
    param_1[2] = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x98)));
    return uVar5;
  }
  pfVar6 = *(float * PTR32 *)((int)this + 0x10);
  if ((pfVar6 != (float *)0x0) && (((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar6[4]))) != (undefined *)0x0)) {
    pfVar6 = (float *)F_00a5feb0(((undefined *)(uintptr_t)gen_fl2bits((float)(pfVar6[4]))) GEN_EDX_ARG);
    *param_1 = *pfVar6;
    param_1[1] = pfVar6[1];
    param_1[2] = pfVar6[2];
  }
  return (uint)pfVar6;
}

/* ref: FUN_00af6310 */
GEN_FRAME unsigned int GEN_THISCALL F_00af6310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf6310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_10;
  
  if (*(char *)((int)this + 0x65) == '\0') {
    return;
  }
  fVar2 = *(float *)((int)this + 0x34);
  local_10 = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
  fVar5 = F_00aeb260((float)((float10)fVar2 - (float10)local_10));
  fVar6 = F_00af1c50(this GEN_EDX_ARG,(float)fVar5,(int)this + 0x20);
  bVar4 = false;
  fVar5 = (float10)((float)GEN_TOF(ABS((float10)(float)fVar5)));
  fVar7 = (float10)((float)GEN_TOF(ABS((float10)(float)fVar6))) + (float10)REFG(float, 0x1339b38);
  if (((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 <= fVar5) &&
     (fVar6 = (float10)local_10 + (float10)(float)fVar6,
     fVar5 = (fVar6 - (float10)fVar2) * ((float10)local_10 - (float10)fVar2),
     (GEN_ISNAN((float10)0) || GEN_ISNAN(fVar5)) || (float10)0 < fVar5)) {
    local_10 = (float)fVar6;
  }
  else {
    bVar4 = true;
  }
  fVar1 = *(float *)((int)this + 0x50);
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    iVar3 = *(int *)((int)this + 0x58);
    if (iVar3 == 1) {
      if (!((float10)fVar1 <= (float10)*(float *)((int)this + 0x80))) goto LAB_00af640e;
      bVar4 = true;
    }
    else {
      if (((((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
             ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) || (iVar3 < 3)) ||
          (5 < iVar3)) || (!(REFG(float, 0x1087f04) <= *(float *)((int)this + 0x1b0)))) goto LAB_00af640e;
      bVar4 = true;
    }
  }
  else {
LAB_00af640e: ;
    if (!bVar4) goto LAB_00af641c;
  }
  local_10 = fVar2;
LAB_00af641c: ;
  F_00aeb260(local_10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x48))))(*(int * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  *(bool *)((int)this + 0x65) = !bVar4;
  return;
}

/* ref: FUN_00af6450 */
GEN_FRAME byte GEN_THISCALL F_00af6450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xaf6450u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint param_11 = (uint)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int * piVar2;
  int in_ecx;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (REFG(char, 0x14c0a40) == '\0') {
    return 0;
  }
  ((float *)(gen_frame + 0x8))[0] = 0.0;
  fVar6 = F_00ae9520(param_1 GEN_EDX_FWD);
  ((float *)(gen_frame + 0x8))[1] = fVar6;
  uVar5 = 0;
  while( true ) {
    if (((*(int *)((int)param_1 + 0x10) == 0) ||
        (bVar3 = F_00a9f620(*(int *)((int)param_1 + 0x10) GEN_EDX_ARG), bVar3 == 0)) &&
       ((piVar2 = *(int * PTR32 *)((int)param_1 + 0x10), piVar2 == (int *)0x0 ||
        (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG), uVar4 != 1)))) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = *((float *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0xc0)));
    }
    in_ecx = *(int *)((int)param_1 + 0x10);
    (*(float *)(gen_frame + 0x28)) = fVar6;
    ((float *)(gen_frame + 0x8))[3] = *(float *)(in_ecx + 0xc0);
    ((float *)(gen_frame + 0x8))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x8))[2], REFG(float, 0x1339ba4));
    if (((in_ecx == 0) || (bVar3 = F_00a9f620(in_ecx GEN_EDX_ARG), bVar3 == 0)) &&
       ((piVar2 = *(int * PTR32 *)((int)param_1 + 0x10), piVar2 == (int *)0x0 ||
        (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG), uVar4 != 1)))) {
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1339af4);
    }
    else {
      (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF((((float10)((float *)(gen_frame + 0x8))[3] + (float10)((float *)(gen_frame + 0x8))[2]) + (float10)REFG(double, 0x1091858))));
    }
    fVar6 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) + (float10)param_4) + (float10)((float *)(gen_frame + 0x8))[(int)(uVar5)])));
    (*(float *)(gen_frame + 0x18)) = fVar6;
    bVar3 = F_00af0bb0(param_2,fVar6,(*(float *)(gen_frame + 0x28)),param_3,param_5,0,0,param_6,0,0,0,0,3,param_10);
    if (bVar3 == 0) {
      return 0;
    }
    if (param_9 == (float *)0x0) {
      uVar4 = F_00a5feb0(*(undefined * PTR32 *)((int)param_1 + 0x10) GEN_EDX_ARG);
      fVar6 = *(float *)(uVar4 + 4);
    }
    else {
      fVar6 = *param_9;
    }
    (*(float *)(gen_frame + 0x20)) = fVar6;
    (*(float *)(gen_frame + 0x18)) = fVar6;
    fVar1 = (float)((float10)*param_3 - (float10)fVar6);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    if ((char)param_11 != '\0') {
      return 1;
    }
    if ((char)param_7 == '\0') break;
    fVar6 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x24) - (float10)fVar6)));
    (*(float *)(gen_frame + 0x1c)) = fVar6;
    if ((!((float10)REFG(float, 0x10928e4) < (float10)fVar6)) || (!(fVar1 < REFG(float, 0x109cb08)))) {
      if (((!GEN_ISNAN(REFG(float, 0x109cb08)) && !GEN_ISNAN(fVar6)) && (!(REFG(float, 0x109cb08) < fVar6) && REFG(uint, 0x109cb08) != fVar6)
          ) && ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10928e4))) && !(fVar1 <= REFG(float, 0x10928e4)))) {
        return 0;
      }
      break;
    }
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return 0;
    }
  }
  if ((float10)REFG(float, 0x10ebd70) < (float10)((float)GEN_TOF(ABS((float10)fVar1)))) {
    return 0;
  }
  if (((GEN_ISNAN(param_8) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(param_8) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || param_8 == REFG(float, 0x10ebbf0))) &&
     ((float10)param_8 < (float10)((float)GEN_TOF(ABS((float10)fVar1))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00af6670 */
GEN_NOFRAME uint GEN_THISCALL F_00af6670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaf6670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int in_ecx;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  float fVar4;
  
  bVar2 = F_0054ccb0((undefined *)((int)this + 0x410) GEN_EDX_FWD,param_1);
  if (bVar2 != 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  in_ecx = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((in_ecx == 0) || (bVar2 = F_00a9f620(in_ecx GEN_EDX_ARG), bVar2 == 0)) {
    fVar4 = 0.0;
    piVar1 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar1 == (int *)0x0) goto LAB_00af6780;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
    if (uVar3 != 1) {
      fVar4 = 0.0;
      goto LAB_00af6780;
    }
  }
  fVar4 = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
LAB_00af6780: ;
  (*(float *)(gen_frame + 0x98)) = fVar4;
  fVar4 = F_00ae9520(this GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x9c)) = fVar4;
  bVar2 = F_00af0bb0(param_1,fVar4,(*(float *)(gen_frame + 0x98)),&(*(float *)(gen_frame + 0x9c)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
  uVar3 = CONCAT31(extraout_var_00,bVar2);
  if (bVar2 != 0) {
    uVar3 = F_00aed0a0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_00af67f0 */
GEN_NOFRAME uint GEN_THISCALL F_00af67f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf67f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  float fVar6;
  
  iVar1 = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(char *)(gen_frame + 0x82)) = '\0';
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(uint *)(gen_frame + 0x88)) = 0;
  if ((iVar1 == 0) || (bVar3 = F_00a9f620(iVar1 GEN_EDX_FWD), bVar3 == 0)) {
    fVar6 = 0.0;
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar2 == (int *)0x0) goto LAB_00af68f6;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
    if (uVar4 != 1) {
      fVar6 = 0.0;
      goto LAB_00af68f6;
    }
  }
  fVar6 = *((float *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0)));
LAB_00af68f6: ;
  iVar1 = *(int *)((int)this + 0x10);
  (*(float *)(gen_frame + 0xa4)) = fVar6;
  (*(float *)(gen_frame + 0xac)) = *(float *)(iVar1 + 0xc0);
  (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1339ba4);
  if (((iVar1 == 0) || (bVar3 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar3 == 0)) &&
     ((piVar2 = *(int * PTR32 *)((int)this + 0x10), piVar2 == (int *)0x0 ||
      (uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG), uVar4 != 1)))) {
    (*(float *)(gen_frame + 0xac)) = REFG(float, 0x1339af4);
  }
  else {
    (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xac)) + (float10)(*(float *)(gen_frame + 0xa8))) + (float10)REFG(double, 0x1091858))));
  }
  puVar5 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar5;
  (*(undefined4 *)(gen_frame + 0x94)) = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x98)) = puVar5[2];
  bVar3 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),(*(float *)(gen_frame + 0xac)),(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0)
  ;
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    uVar4 = (*(uint *)(gen_frame + 0x88));
    if ((*(char *)(gen_frame + 0x82)) == '\0') {
      uVar4 = (*(uint *)(gen_frame + 0x3c));
    }
    *(uint *)((int)this + 0x374) = uVar4;
    *(undefined4 *)((int)this + 0x378) = (*(undefined4 *)(gen_frame + 0x84));
  }
  return uVar4;
}

/* ref: FUN_00af69f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00af69f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf69f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x14) != '\0') {
    F_00af2f50(this GEN_EDX_FWD);
  }
  if (*(char *)((int)this + 0x15) != '\0') {
    F_00af3110(this GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00af6a20 */
GEN_FRAME uint GEN_THISCALL F_00af6a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  char cVar1;
  uint uVar2;
  uint local_8;
  
  cVar1 = *(char *)((int)this + 0x17);
  local_8 = (uint)this & 0xffffff00;
  F_00af3810(this GEN_EDX_FWD);
  if ((*(char *)((int)this + 0x17) != cVar1) && (*(char *)((int)this + 0x17) == '\0')) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),1);
  }
  F_00aee3f0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  F_00af3920(this GEN_EDX_ARG,param_3,param_4);
  F_00aee570(this GEN_EDX_ARG,param_3,param_4,param_7);
  F_00aee6d0(this GEN_EDX_ARG,param_1,param_2);
  F_00aee900(this GEN_EDX_ARG,param_1,param_2,local_8);
  if (((*(char *)((int)this + 0x173) != '\0') && (*(char *)((int)this + 0x14) != '\0')) &&
     (*(char *)((int)this + 0x171) == '\0')) {
    *(undefined1 *)((int)this + 0x173) = 0;
  }
  uVar2 = F_00af39f0(this GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00af6ad0 */
GEN_NOFRAME uint GEN_THISCALL F_00af6ad0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, float gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf6ad0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint param_11 = (uint)gen_a10;
  float param_12 = (float)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00af3cc0(param_1 GEN_EDX_FWD,param_2,param_3,param_5,param_6,param_9,param_10,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00af4260(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3),&(*(undefined4 *)(gen_frame + 0x0)),param_5,param_6,param_7,param_9,
               param_10,param_13);
  uVar1 = F_00af43e0(param_1 GEN_EDX_ARG,param_4,&(*(undefined4 *)(gen_frame + 0x0)),param_5,param_6,param_8,param_11,param_12,param_14)
  ;
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    *(uint *)((int)param_1 + 0x150) = *(uint *)((int)param_1 + 0x134);
    return *(uint *)((int)param_1 + 0x134);
  }
  *(undefined4 *)((int)param_1 + 0x150) = 0;
  return uVar1;
}

/* ref: FUN_00af6bb0 */
GEN_NOFRAME uint GEN_THISCALL F_00af6bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xaf6bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  char * param_4 = (char *)(uintptr_t)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined4 * PTR32 * param_7 = (undefined4 * PTR32 *)(uintptr_t)gen_a7;
  int param_9 = (int)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int * piVar6;
  byte bVar8;
  byte bVar9;
  undefined3 extraout_var = 0;
  uint uVar10;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar11;
  undefined4 * PTR32 * ppuVar12;
  float * pfVar13;
  char * pcVar14;
  int iVar15;
  undefined * pvVar16;
  bool bVar17;
  bool bVar18;
  float10 fVar19;
  float10 fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined3 extraout_var_01 = 0;
  
  (*(undefined * PTR32 *)(gen_frame + 0x268)) = this;
  bVar8 = F_0054ccb0(param_1 GEN_EDX_FWD,param_2);
  if (bVar8 != 0) {
    return CONCAT31(extraout_var,bVar8);
  }
  iVar15 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10);
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(undefined2 *)(gen_frame + 0xf0)) = 0;
  (*(undefined1 *)(gen_frame + 0xf2)) = 0;
  (*(undefined4 *)(gen_frame + 0x100)) = 0;
  (*(float *)(gen_frame + 0x104)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  (*(undefined2 *)(gen_frame + 0x110)) = 0;
  (*(undefined1 *)(gen_frame + 0x112)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = (undefined4 *)iVar15;
  iVar15 = *(int *)(iVar15 + 0x10);
  (*(char *)(gen_frame + 0x263)) = '\0';
  if ((iVar15 == 0) || (bVar8 = F_00a9f620(iVar15 GEN_EDX_ARG), bVar8 == 0)) {
    fVar21 = 0.0;
    piVar6 = *(int * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x254)) + 0x10);
    if (piVar6 != (int *)0x0) {
      uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG);
      if (uVar10 == 1) goto LAB_00af6dc8;
      fVar21 = 0.0;
    }
  }
  else {
LAB_00af6dc8: ;
    fVar21 = *((float *)GEN_TOP((*(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x254)) + 0x10) + 0xc0)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar21)));
  fVar21 = F_00ae9520(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  bVar8 = F_00af0bb0(param_2,fVar21,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x254))))),&(*(float *)(gen_frame + 0x23c)),REFG(float, 0x10ebbf0),&(*(undefined4 * PTR32 *)(gen_frame + 0x1b0)),0,&(*(undefined4 *)(gen_frame + 0x90)),
                       0,0,&(*(undefined4 *)(gen_frame + 0x0)),&(*(char *)(gen_frame + 0x263)),3,0);
  if ((bVar8 == 0) && ((*(char *)(gen_frame + 0x263)) == '\0')) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return CONCAT31(extraout_var_00,bVar8);
  }
  fVar21 = param_1[1];
  (*(float *)(gen_frame + 0x218)) = fVar21;
  (*(bool *)(gen_frame + 0x26e)) = false;
  (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x23c));
  fVar19 = (float10)fVar21;
  fVar21 = (float)((float10)(*(float *)(gen_frame + 0x23c)) - fVar19);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  bVar17 = (float10)REFG(float, 0x1339ba4) < (float10)fVar21;
  if (bVar17) {
    (*(bool *)(gen_frame + 0x26e)) = true;
  }
  if (((char)(*(undefined2 *)(gen_frame + 0x110)) == '\0') ||
     (fVar21 = (float)((float10)(*(float *)(gen_frame + 0x104)) - fVar19), (*(float *)(gen_frame + 0x264)) = fVar21,
     !((float10)REFG(float, 0x1339ba4) < (float10)fVar21))) {
    (*(bool *)(gen_frame + 0x26e)) = bVar17;
    if (!bVar17) goto LAB_00af6f33;
  }
  else {
    (*(bool *)(gen_frame + 0x26e)) = true;
  }
  (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x4));
  fVar21 = F_00aea430(param_1,param_2);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  if (((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xf0)) + 1)) == '\0') &&
     (fVar1 = (float)((float10)(*(float *)(gen_frame + 0x218)) - (float10)fVar21), (*(float *)(gen_frame + 0x264)) = fVar1,
     (float10)(*(float *)(gen_frame + 0x4)) < (float10)fVar1)) {
    (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x218));
  }
  fVar21 = (float)((float10)(*(float *)(gen_frame + 0x218)) + (float10)fVar21);
  (*(float *)(gen_frame + 0x264)) = fVar21;
  if ((float10)fVar21 < (float10)(*(float *)(gen_frame + 0x1dc))) {
    (*(float *)(gen_frame + 0x1dc)) = (*(float *)(gen_frame + 0x218));
  }
LAB_00af6f33: ;
  (*(char *)(gen_frame + 0x253)) = '\0';
  (*(char *)(gen_frame + 0x263)) = '\0';
  (*(byte *)(gen_frame + 0x25b)) = 0;
  (*(byte *)(gen_frame + 0x262)) = 0;
  F_00af4fe0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x1dc)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1b0)),&(*(undefined4 *)(gen_frame + 0x90)),&(*(char *)(gen_frame + 0x253)),&(*(char *)(gen_frame + 0x263)),&(*(byte *)(gen_frame + 0x25b))
               ,&(*(byte *)(gen_frame + 0x262)));
  (*(float *)(gen_frame + 0x264)) = REFG(float, 0x1339b64);
  (*(byte *)(gen_frame + 0x26f)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c0)) = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = (undefined4 *)0x0;
  ((undefined4 * PTR32 *)(gen_frame + 0x1c8))[0] = (undefined4 *)0x0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = (undefined4 *)0x0;
  (*(bool *)(gen_frame + 0x21f)) = (*(byte *)(gen_frame + 0x25b)) == 0;
  (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = 0;
  (*(double *)(gen_frame + 0x1f8)) = gen_bits2d((ulonglong)(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0))));
  do {
    fVar21 = (*(float *)(gen_frame + 0x1dc));
    if ((*(bool *)(gen_frame + 0x26e)) == false) {
      if ((*(char *)(gen_frame + 0x253)) == '\0') {
        fVar21 = (*(float *)(gen_frame + 0x23c));
        if ((*(char *)(gen_frame + 0x263)) == '\0') goto LAB_00af7010;
        fVar21 = F_00aea430(param_1,param_2);
        (*(float *)(gen_frame + 0x25c)) = fVar21;
        if ((float10)(*(float *)(gen_frame + 0x23c)) < (float10)param_2[1] - (float10)fVar21) {
          param_2[1] = (float)((float10)param_1[1] - (float10)fVar21);
        }
        else {
          param_2[1] = (*(float *)(gen_frame + 0x23c));
        }
      }
      else {
        param_2[1] = param_1[1];
      }
    }
    else {
LAB_00af7010: ;
      param_2[1] = fVar21;
    }
    (*(undefined1 *)(gen_frame + 0x182)) = 0;
    (*(undefined1 *)(gen_frame + 0x1a2)) = 0;
    (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(float *)(gen_frame + 0x12c)) = 0.0;
    (*(float *)(gen_frame + 0x130)) = 0.0;
    (*(float *)(gen_frame + 0x134)) = 0.0;
    (*(float *)(gen_frame + 0x138)) = 0.0;
    (*(float *)(gen_frame + 0x13c)) = 0.0;
    (*(float *)(gen_frame + 0x140)) = 0.0;
    (*(float *)(gen_frame + 0x144)) = 0.0;
    (*(float *)(gen_frame + 0x148)) = 0.0;
    (*(float *)(gen_frame + 0x14c)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x150)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x158)) = 0;
    (*(undefined4 *)(gen_frame + 0x170)) = 0;
    (*(undefined4 *)(gen_frame + 0x174)) = 0;
    (*(undefined4 *)(gen_frame + 0x178)) = 0;
    (*(undefined4 *)(gen_frame + 0x190)) = 0;
    (*(undefined4 *)(gen_frame + 0x194)) = 0;
    (*(undefined4 *)(gen_frame + 0x198)) = 0;
    (*(undefined4 *)(gen_frame + 0x1a4)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
    (*(float *)(gen_frame + 0x1e4)) = param_2[1];
    (*(undefined2 *)(gen_frame + 0x180)) = 0;
    (*(undefined2 *)(gen_frame + 0x1a0)) = 0;
    (*(float *)(gen_frame + 0x1e8)) = param_2[2];
    bVar8 = F_00af4790((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),&(*(undefined4 *)(gen_frame + 0x120)),param_9,0,(float)(float10)0);
    (*(byte *)(gen_frame + 0x252)) = bVar8;
    if (((((bVar8 != 0) && ((*(int *)&gen_a8) != 0)) && ((*(int *)&gen_a10) == 1)) &&
        ((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0xc)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x12c))),
         bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0xc) == (float10)(*(float *)(gen_frame + 0x12c))) &&
         (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x10)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x130))),
         bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x10) == (float10)(*(float *)(gen_frame + 0x130))))))) &&
       ((((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x14)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x134))),
          bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x14) == (float10)(*(float *)(gen_frame + 0x134))) &&
          ((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x18)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x138))),
           bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x18) == (float10)(*(float *)(gen_frame + 0x138))) &&
           (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x1c)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x13c))),
           bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x1c) == (float10)(*(float *)(gen_frame + 0x13c))))))) &&
         (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x20)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x140))),
         bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x20) == (float10)(*(float *)(gen_frame + 0x140))))) &&
        ((((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x24)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x144))),
           bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x24) == (float10)(*(float *)(gen_frame + 0x144))) &&
           (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x28)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x148))),
           bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x28) == (float10)(*(float *)(gen_frame + 0x148))))) &&
          (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x2c)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14c))),
          bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x2c) == (float10)(*(float *)(gen_frame + 0x14c))))) &&
         (bVar8 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1c0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c4)),((undefined4 * PTR32 *)(gen_frame + 0x1c8))), bVar8 != 0)))))) {
      puVar11 = (undefined4 *)0x1;
      (*(byte *)(gen_frame + 0x26f)) = 1;
      goto LAB_00af7511;
    }
    if ((*(byte *)(gen_frame + 0x252)) != 0) {
      (*(byte *)(gen_frame + 0x252)) = 0;
      bVar8 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(float *)(gen_frame + 0x244)),((float *)(gen_frame + 0x248)));
      if (bVar8 != 0) {
        (*(byte *)(gen_frame + 0x252)) = 1;
      }
      bVar8 = F_00aefc10(param_1,param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),param_7,REFG(float, 0x1339b6c));
      (*(byte *)(gen_frame + 0x251)) = bVar8;
      (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = 0;
      gen_piece_set(&(*(double *)(gen_frame + 0x1f8)), 0, 5, (unsigned long long)((uint5)(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)))));
      bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x120)));
      bVar8 = (*(byte *)(gen_frame + 0x251));
      if ((bVar9 != 0) &&
         (((*(int *)&gen_a8) == 0 ||
          (bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,(*(int *)&gen_a8)), bVar8 = (*(byte *)(gen_frame + 0x251)), bVar9 != 0)))) {
        bVar8 = 1;
        *param_2 = *param_3;
        (*(undefined1 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = 1;
        gen_piece_set(&(*(double *)(gen_frame + 0x1f8)), 0, 5, (unsigned long long)(CONCAT14(1,(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0))))));
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
      }
      if (((param_9 < 3) &&
          ((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
           (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))))) &&
         (((*(byte *)(gen_frame + 0x252)) != 0 && (bVar8 != 0)))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1e0));
        (*(float *)(gen_frame + 0x204)) = (*(float *)(gen_frame + 0x1e4));
        (*(float *)(gen_frame + 0x208)) = (*(float *)(gen_frame + 0x1e8));
        if (param_9 + 1 < 2) {
          F_00aed710(param_1,param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),(uint)&(*(undefined4 *)(gen_frame + 0x120)));
          (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x1e4));
          F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_3,param_4,param_5,
                       param_6,(undefined4 * PTR32 *)0x0,0,3,0);
          bVar8 = F_0054ccb0(&(*(undefined4 * PTR32 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
          if (bVar8 == 0) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = (*(undefined4 * PTR32 *)(gen_frame + 0x220));
            (*(float *)(gen_frame + 0x204)) = (*(float *)(gen_frame + 0x224));
            (*(float *)(gen_frame + 0x208)) = (*(float *)(gen_frame + 0x228));
          }
        }
        pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x268));
        (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
        (*(float *)(gen_frame + 0x224)) = param_2[1];
        (*(float *)(gen_frame + 0x228)) = param_2[2];
        F_00af49a0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 *)(gen_frame + 0x120)),1,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)));
        F_00aea070(pvVar16 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
        param_2[1] = (*(float *)(gen_frame + 0x204));
        ppuVar12 = &(*(undefined4 * PTR32 *)(gen_frame + 0x240));
        if (param_9 + 1 != 1) {
          ppuVar12 = param_7;
        }
        uVar22 = 1;
        puVar11 = &(*(undefined4 *)(gen_frame + 0x120));
        goto LAB_00af7491;
      }
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      break;
    }
    if ((*(bool *)(gen_frame + 0x26e)) == false) break;
    if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x110)) + 1)) != '\0') {
      F_00affb20(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      bVar8 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x90)));
      (*(byte *)(gen_frame + 0x25b)) = bVar8;
      (*(bool *)(gen_frame + 0x26e)) = false;
      break;
    }
    if ((0 < param_9) && (param_7 != (undefined4 * PTR32 *)0x0)) {
      (*(byte *)(gen_frame + 0x26f)) = 1;
      if (param_9 == 1) {
        (*(float *)(gen_frame + 0x264)) = REFG(float, 0x1339b60);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c0)) = *param_7;
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = param_7[1];
      ((undefined4 * PTR32 *)(gen_frame + 0x1c8))[0] = param_7[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = (undefined4 *)0x3;
      goto LAB_00af7514;
    }
    uVar10 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) + 1;
    (*(bool *)(gen_frame + 0x26e)) = false;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)) = uVar10;
    (*(double *)(gen_frame + 0x1f8)) = gen_bits2d(CONCAT44(uVar10,(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)))));
  } while (uVar10 < 2);
  if (((((*(byte *)(gen_frame + 0x25b)) == 0) && (0 < param_9)) && (param_7 != (undefined4 * PTR32 *)0x0)) &&
     (puVar11 = (undefined4 *)0x2, (*(int *)&gen_a10) == 2)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c0)) = *param_7;
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c4)) = param_7[1];
    (*(byte *)(gen_frame + 0x26f)) = 1;
    ((undefined4 * PTR32 *)(gen_frame + 0x1c8))[0] = param_7[2];
LAB_00af7511: ;
    (*(byte *)(gen_frame + 0x26f)) = 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = puVar11;
  }
LAB_00af7514: ;
  bVar8 = F_0054ccb0(param_2 GEN_EDX_ARG,param_1);
  if ((bVar8 == 0) && ((*(byte *)(gen_frame + 0x26f)) != 0)) {
    fVar21 = *param_2;
    fVar1 = *param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar21 - (float10)fVar1))));
    fVar2 = param_2[1];
    fVar3 = param_1[1];
    (*(float *)(gen_frame + 0x224)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar4 = param_2[2];
    fVar5 = param_1[2];
    (*(float *)(gen_frame + 0x228)) = (float)((float10)fVar4 - (float10)fVar5);
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (undefined4 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar21 - (float10)fVar1))));
    (*(float *)(gen_frame + 0x224)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x244)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x228)) = 0.0;
    ((float *)(gen_frame + 0x248))[0] = (float)((float10)fVar4 - (float10)fVar5);
    F_00ae74d0((*(float *)(gen_frame + 0x264)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
    fVar21 = *param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))) + (float10)fVar21))));
    fVar1 = param_1[1];
    (*(float *)(gen_frame + 0x204)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x244)));
    fVar2 = param_1[2];
    (*(float *)(gen_frame + 0x208)) = (float)((float10)fVar2 + (float10)((float *)(gen_frame + 0x248))[0]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))) + (float10)fVar21))));
    (*(float *)(gen_frame + 0x224)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x244)));
    (*(float *)(gen_frame + 0x228)) = (float)((float10)fVar2 + (float10)((float *)(gen_frame + 0x248))[0]);
    fVar21 = REFG(float, 0x1339b6c);
    if ((*(bool *)(gen_frame + 0x26e)) != false) {
      fVar21 = REFG(float, 0x1339b70);
    }
    (*(float *)(gen_frame + 0x264)) = fVar21;
    bVar8 = F_00aefc10(param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_3,param_7,param_7,fVar21);
    iVar15 = 3;
    if (bVar8 != 0) {
      iVar15 = 5;
    }
    if ((param_9 < iVar15) &&
       (((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
         (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))) && (bVar8 != 0)))) {
      *param_2 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x200)))));
      param_2[1] = (*(float *)(gen_frame + 0x204));
      param_2[2] = (*(float *)(gen_frame + 0x208));
      param_2[1] = param_1[1];
      uVar10 = F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,(*(int *)&gen_a8)
                            ,param_9 + 1,(int)(*(undefined4 * PTR32 *)(gen_frame + 0x254)));
      return uVar10;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = &(*(undefined4 *)(gen_frame + 0x90));
  if (((*(bool *)(gen_frame + 0x26e)) != false) &&
     ((((param_9 < 1 || (param_7 == (undefined4 * PTR32 *)0x0)) && ((char)(*(undefined2 *)(gen_frame + 0xf0)) != '\0')) &&
      ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0xf0)) + 1)) != '\0')))) {
    (*(bool *)(gen_frame + 0x21f)) = true;
    F_00afef80(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1b0)),&(*(float *)(gen_frame + 0x1b4)),((float *)(gen_frame + 0x1b8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = &(*(undefined4 *)(gen_frame + 0x0));
  }
  bVar8 = F_0054ccb0(param_2 GEN_EDX_ARG,param_1);
  fVar21 = REFG(float, 0x1339b6c);
  if (((bVar8 == 0) && ((*(bool *)(gen_frame + 0x21f)) != false)) && ((*(byte *)(gen_frame + 0x262)) == 0)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1b0));
    (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x1b4));
    *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x154) = 1;
    (*(float *)(gen_frame + 0x228)) = ((float *)(gen_frame + 0x1b8))[0];
    bVar8 = F_00aefc10(param_1,param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_7,fVar21);
    fVar21 = (*(float *)(gen_frame + 0x264));
    (*(byte *)(gen_frame + 0x251)) = bVar8;
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x264)) + 0)) = 0;
    (*(float *)(gen_frame + 0x264)) = gen_bits2f((uint)gen_fl2bits(fVar21) & 0xffffff00);
    bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,(*(undefined4 * PTR32 *)(gen_frame + 0x254)));
    bVar8 = (*(byte *)(gen_frame + 0x251));
    if ((bVar9 != 0) &&
       (((*(int *)&gen_a8) == 0 ||
        (bVar9 = F_00aea290((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,param_1,(*(int *)&gen_a8)), bVar8 = (*(byte *)(gen_frame + 0x251)), bVar9 != 0)))) {
      bVar8 = 1;
      *param_2 = *param_3;
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x264)) + 0)) = 1;
      (*(float *)(gen_frame + 0x264)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x264)), 1, 3),1));
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
    }
    if ((param_9 < 3) &&
       (((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
         (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))) && (bVar8 != 0)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_1)));
      (*(float *)(gen_frame + 0x218)) = param_1[1];
      (*(float *)(gen_frame + 0x204)) = param_1[1];
      (*(float *)(gen_frame + 0x208)) = param_1[2];
      if (param_9 + 1 < 2) {
        F_0046f4a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,param_1);
        fVar19 = (float10)REFG(double, 0x1088108);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1e0))))) * fVar19))));
        (*(float *)(gen_frame + 0x1e4)) = (float)((float10)(*(float *)(gen_frame + 0x1e4)) * fVar19);
        (*(float *)(gen_frame + 0x1e8)) = (float)(fVar19 * (float10)(*(float *)(gen_frame + 0x1e8)));
        F_004bd670(&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)));
        (*(float *)(gen_frame + 0x244)) = (*(float *)(gen_frame + 0x218));
        F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),param_3,param_4,param_5,param_6,
                     (undefined4 * PTR32 *)0x0,0,3,0);
        bVar8 = F_0054ccb0(&(*(undefined4 * PTR32 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
        if (bVar8 == 0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
          (*(float *)(gen_frame + 0x204)) = (*(float *)(gen_frame + 0x244));
          (*(float *)(gen_frame + 0x208)) = ((float *)(gen_frame + 0x248))[0];
        }
      }
      pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x268));
      puVar11 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
      param_2[1] = (*(float *)(gen_frame + 0x23c));
      (*(float *)(gen_frame + 0x244)) = (*(float *)(gen_frame + 0x23c));
      fVar21 = param_2[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = puVar11;
      ((float *)(gen_frame + 0x248))[0] = fVar21;
      F_00af49a0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),(*(undefined4 * PTR32 *)(gen_frame + 0x254)),0,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x264)))
                  );
      F_00aea070(pvVar16 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
      param_2[1] = (*(float *)(gen_frame + 0x204));
      ppuVar12 = &(*(undefined4 * PTR32 *)(gen_frame + 0x220));
      if (param_9 + 1 != 1) {
        ppuVar12 = param_7;
      }
      uVar22 = 2;
      puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x254));
LAB_00af7491: ;
      uVar10 = F_00af6bb0(pvVar16 GEN_EDX_ARG,(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_3,param_4,param_5,param_6,
                            ppuVar12,(int)puVar11,param_9 + 1,uVar22);
      return uVar10;
    }
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
  }
  bVar8 = F_0054ccb0(param_2 GEN_EDX_ARG,param_1);
  if (bVar8 == 0) {
    fVar21 = param_1[1];
    (*(byte *)(gen_frame + 0x262)) = bVar8;
    (*(float *)(gen_frame + 0x218)) = fVar21;
    (*(byte *)(gen_frame + 0x26f)) = bVar8;
    fVar1 = (float)((float10)param_2[1] - (float10)fVar21);
    (*(float *)(gen_frame + 0x25c)) = fVar1;
    if ((float10)REFG(float, 0x1339ba4) < (float10)fVar1) {
      fVar2 = *param_2;
      fVar3 = *param_1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar2 - (float10)fVar3))));
      fVar4 = param_2[2];
      fVar5 = param_1[2];
      ((float *)(gen_frame + 0x248))[0] = (float)((float10)fVar4 - (float10)fVar5);
      fVar19 = (float10)(float)((float10)fVar2 - (float10)fVar3);
      fVar20 = (float10)(float)((float10)fVar4 - (float10)fVar5);
      (*(double *)(gen_frame + 0x1f8)) = (double)fVar1;
      fVar2 = (float)(fVar19 * fVar19 + fVar20 * fVar20);
      (*(float *)(gen_frame + 0x25c)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x25c)) = fVar2;
      (*(float *)(gen_frame + 0x264)) = fVar2;
      fVar19 = ((float10)GEN_TOD(GEN_X87MATH((float10)REFG(float, 0x1339ba0),4)));
      (*(float *)(gen_frame + 0x25c)) = (float)fVar19;
      fVar2 = (float)((float10)(float)fVar19 * (float10)fVar2);
      (*(float *)(gen_frame + 0x25c)) = fVar2;
      if ((double)fVar2 < (double)fVar1) {
        (*(byte *)(gen_frame + 0x262)) = 1;
      }
    }
    if ((char)(*(undefined2 *)(gen_frame + 0x110)) != '\0') {
      pvVar16 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10);
      (*(float *)(gen_frame + 0x23c)) = (float)((float10)(*(float *)(gen_frame + 0x104)) - (float10)fVar21);
      F_00af6670(pvVar16 GEN_EDX_ARG,param_1);
      iVar15 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10);
      if ((*(char *)(iVar15 + 0x3e0) != '\0') && (*(char *)(iVar15 + 0x400) != '\0')) {
        (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x104)) - (float10)*(float *)(iVar15 + 0x3f4))));
      }
      if (((float10)REFG(float, 0x1339ba4) < (float10)(*(float *)(gen_frame + 0x23c))) && (*(char *)(iVar15 + 0x3e2) != '\0')) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x200)) = *(undefined4 * PTR32 *)(iVar15 + 0x380);
        (*(float *)(gen_frame + 0x204)) = *(float *)(iVar15 + 900);
        (*(float *)(gen_frame + 0x208)) = *(float *)(iVar15 + 0x388);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = *(undefined4 * PTR32 *)(iVar15 + 0x38c);
        (*(float *)(gen_frame + 0x1e4)) = *(float *)(iVar15 + 0x390);
        (*(float *)(gen_frame + 0x1e8)) = *(float *)(iVar15 + 0x394);
        (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = *(undefined4 * PTR32 *)(iVar15 + 0x398);
        (*(float *)(gen_frame + 0x224)) = *(float *)(iVar15 + 0x39c);
        (*(float *)(gen_frame + 0x228)) = *(float *)(iVar15 + 0x3a0);
        (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = *(undefined4 * PTR32 *)(iVar15 + 0x3a4);
        (*(float *)(gen_frame + 0x244)) = *(float *)(iVar15 + 0x3a8);
        ((float *)(gen_frame + 0x248))[0] = *(float *)(iVar15 + 0x3ac);
        F_00ae7ca0(&(*(undefined4 * PTR32 *)(gen_frame + 0x1f0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),0);
        fVar21 = (float)((float10)(*(float *)(gen_frame + 0x104)) - (float10)(*(float *)(gen_frame + 0x1f4)));
        (*(float *)(gen_frame + 0x264)) = fVar21;
        if ((float10)fVar21 < (float10)(*(float *)(gen_frame + 0x23c))) {
          (*(float *)(gen_frame + 0x23c)) = fVar21;
        }
      }
      if ((float10)REFG(float, 0x1339ba4) < (float10)(*(float *)(gen_frame + 0x23c))) {
        (*(byte *)(gen_frame + 0x26f)) = 1;
      }
    }
    if (((*(byte *)(gen_frame + 0x262)) != 0) || ((*(byte *)(gen_frame + 0x26f)) != 0)) {
      *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x154) = 1;
      if ((param_9 < 3) &&
         ((iVar15 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x204))), iVar15 == 0 ||
          (((iVar15 != 3 && (iVar15 != 4)) && (iVar15 != 2)))))) {
        puVar11 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_1)));
        fVar1 = *param_2;
        (*(undefined4 * PTR32 *)(gen_frame + 0x254)) = puVar11;
        (*(undefined4 * PTR32 *)(gen_frame + 0x1e0)) = puVar11;
        fVar21 = param_1[1];
        (*(float *)(gen_frame + 0x218)) = fVar21;
        (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar11)))))));
        (*(float *)(gen_frame + 0x1e4)) = fVar21;
        fVar21 = param_1[2];
        (*(float *)(gen_frame + 0x264)) = fVar21;
        (*(float *)(gen_frame + 0x1e8)) = fVar21;
        fVar21 = (float)((float10)param_2[2] - (float10)fVar21);
        ((float *)(gen_frame + 0x248))[0] = fVar21;
        (*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar11)))))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) = fVar21;
        (*(double *)(gen_frame + 0x1f8)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)),(uint)gen_fl2bits(fVar21)));
        (*(float *)(gen_frame + 0x1f4)) = (float)(float10)0;
        uVar10 = F_004bd580(&(*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) GEN_EDX_ARG);
        fVar21 = ((float)GEN_TOF(((float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) +
                        ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) +
                        (float10)(*(float *)(gen_frame + 0x1f4)) * (float10)(*(float *)(gen_frame + 0x1f4))))));
        (*(float *)(gen_frame + 0x25c)) = fVar21;
        fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
        (*(float *)(gen_frame + 0x25c)) = fVar21;
        fVar19 = (float10)0;
        fVar20 = (float10)fVar21;
        bVar17 = GEN_ISNAN(fVar20) || GEN_ISNAN(fVar19);
        bVar18 = bVar17 || fVar20 == fVar19;
        if (bVar17 != bVar18) {
          *param_2 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x254)))));
          param_2[1] = param_1[1];
          param_2[2] = param_1[2];
          return CONCAT22((short)(uVar10 >> 0x10),
                          CONCAT11(bVar18 << 6 | bVar17 << 2 | 2U | !(fVar19 <= fVar20),(char)uVar10
                                  ));
        }
        if ((*(byte *)(gen_frame + 0x26f)) == 0) {
          fVar19 = (float10)*(double *)&REFG(undefined, 0x10944e0);
          (*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) * fVar19))));
          fVar20 = (float10)(*(float *)(gen_frame + 0x1f4)) * fVar19;
        }
        else {
          F_0046f4a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 *)(gen_frame + 0x100)),param_1);
          fVar21 = (float)((float10)((float *)(gen_frame + 0x248))[0] * (float10)((float *)(gen_frame + 0x248))[0] +
                          (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x240))))));
          (*(float *)(gen_frame + 0x25c)) = fVar21;
          fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
          (*(float *)(gen_frame + 0x25c)) = fVar21;
          fVar19 = (float10)fVar21;
          (*(undefined4 * PTR32 *)(gen_frame + 0x1f0)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(fVar19 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0)))))))));
          fVar20 = fVar19 * (float10)(*(float *)(gen_frame + 0x1f4));
        }
        (*(float *)(gen_frame + 0x1f4)) = (float)fVar20;
        fVar21 = ((float)GEN_TOF((fVar19 * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 0)) = fVar21;
        (*(double *)(gen_frame + 0x1f8)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x1f8)) + 4)),(uint)gen_fl2bits(fVar21)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x1f0))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x254)))))))));
        fVar1 = (float)((float10)(*(float *)(gen_frame + 0x218)) + (float10)(float)fVar20);
        (*(float *)(gen_frame + 0x244)) = fVar1;
        ((float *)(gen_frame + 0x248))[0] = (float)((float10)(*(float *)(gen_frame + 0x264)) + (float10)fVar21);
        (*(float *)(gen_frame + 0x204)) = fVar1;
        if ((*(byte *)(gen_frame + 0x26f)) != 0) {
          (*(float *)(gen_frame + 0x204)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x104)) -
                            ((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x268)) + 0x10) + 0x10))) +
                                                0xc0))) + (float10)REFG(float, 0x1339ba4)))));
        }
        F_00a64e00(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG);
        (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (*(undefined4 * PTR32 *)(gen_frame + 0x240));
        (*(float *)(gen_frame + 0x224)) = (*(float *)(gen_frame + 0x204));
        (*(float *)(gen_frame + 0x228)) = ((float *)(gen_frame + 0x248))[0];
        (*(byte *)(gen_frame + 0x26f)) = 0;
        bVar8 = F_00af4790((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 *)(gen_frame + 0x120)),3,1,(float)(float10)0);
        if (bVar8 == 0) {
          if (((*(int *)&gen_a8) == 0) || ((*(int *)&gen_a10) != 4)) {
            *param_2 = *param_1;
            param_2[1] = param_1[1];
            param_2[2] = param_1[2];
          }
          else {
            (*(byte *)(gen_frame + 0x26f)) = 1;
            F_00affb20(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG,(*(int *)&gen_a8));
          }
        }
        else if (((((*(int *)&gen_a8) != 0) && ((*(int *)&gen_a10) == 4)) &&
                 ((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0xc)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x12c))),
                  bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0xc) == (float10)(*(float *)(gen_frame + 0x12c))) &&
                  (((((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x10)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x130))),
                      bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x10) == (float10)(*(float *)(gen_frame + 0x130))
                                ) &&
                      (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x14)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x134))),
                      bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x14) == (float10)(*(float *)(gen_frame + 0x134))
                                ))) &&
                     (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x18)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x138))),
                     bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x18) == (float10)(*(float *)(gen_frame + 0x138)))
                     )) && ((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x1c)) ||
                                      GEN_ISNAN((float10)(*(float *)(gen_frame + 0x13c))),
                            bVar17 != (bVar17 ||
                                      (float10)*(float *)((*(int *)&gen_a8) + 0x1c) == (float10)(*(float *)(gen_frame + 0x13c))) &&
                            (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x20)) ||
                                      GEN_ISNAN((float10)(*(float *)(gen_frame + 0x140))),
                            bVar17 != (bVar17 ||
                                      (float10)*(float *)((*(int *)&gen_a8) + 0x20) == (float10)(*(float *)(gen_frame + 0x140)))))))
                   && (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x24)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x144))),
                      bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x24) == (float10)(*(float *)(gen_frame + 0x144))
                                ))))))) &&
                ((bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x28)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x148))),
                 bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x28) == (float10)(*(float *)(gen_frame + 0x148))) &&
                 (bVar17 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_a8) + 0x2c)) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x14c))),
                 bVar17 != (bVar17 || (float10)*(float *)((*(int *)&gen_a8) + 0x2c) == (float10)(*(float *)(gen_frame + 0x14c)))))))
        {
          (*(byte *)(gen_frame + 0x26f)) = 1;
        }
        bVar8 = F_0054ccb0(param_2 GEN_EDX_ARG,param_1);
        if (bVar8 == 0) {
          if ((*(byte *)(gen_frame + 0x26f)) == 0) {
            F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(float *)(gen_frame + 0x244)),((float *)(gen_frame + 0x248)));
            pvVar16 = (*(undefined * PTR32 *)(gen_frame + 0x268));
            (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(*param_2)));
            (*(float *)(gen_frame + 0x224)) = param_2[1];
            (*(float *)(gen_frame + 0x228)) = param_2[2];
            F_00af49a0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 *)(gen_frame + 0x120)),0,0);
            F_00aea070(pvVar16 GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,param_3,&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)));
          }
          else {
            (*(undefined4 * PTR32 *)(gen_frame + 0x240)) = (undefined4 *)0x0;
            (*(float *)(gen_frame + 0x244)) = 0.0;
            ((float *)(gen_frame + 0x248))[0] = 0.0;
            bVar8 = F_00afef80(&(*(undefined4 *)(gen_frame + 0x120)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(float *)(gen_frame + 0x244)),((float *)(gen_frame + 0x248)));
            if (bVar8 == 0) {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
            }
            else {
              F_0046f4a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),param_2,param_1);
              fVar21 = ((float)GEN_TOF(((float10)(param_9 + 1) * (float10)*(float *)&REFG(undefined, 0x1339b68))));
              (*(float *)(gen_frame + 0x25c)) = fVar21;
              (*(undefined4 * PTR32 *)(gen_frame + 0x220)) = (undefined4 *)0x0;
              (*(float *)(gen_frame + 0x224)) = REFG(float, 0x1087f04);
              (*(float *)(gen_frame + 0x228)) = 0.0;
              F_00ae74d0(fVar21,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)),&(*(undefined4 * PTR32 *)(gen_frame + 0x240)),&(*(undefined4 * PTR32 *)(gen_frame + 0x220)));
              pfVar13 = (float *)F_004bd670(&(*(undefined4 * PTR32 *)(gen_frame + 0x220)),param_1,&(*(undefined4 * PTR32 *)(gen_frame + 0x200)));
              *param_2 = *pfVar13;
              param_2[1] = pfVar13[1];
              param_2[2] = pfVar13[2];
            }
          }
          param_2[1] = (*(float *)(gen_frame + 0x1e4));
          uVar10 = F_00af6bb0((*(undefined * PTR32 *)(gen_frame + 0x268)) GEN_EDX_ARG,(float *)&(*(undefined4 * PTR32 *)(gen_frame + 0x1e0)),param_2,param_3,param_4,param_5,param_6,
                                (undefined4 * PTR32 *)0x0,(int)&(*(undefined4 *)(gen_frame + 0x120)),param_9 + 1,4);
          return uVar10;
        }
      }
      else {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
      }
    }
  }
  bVar8 = F_0054ccb0(param_2 GEN_EDX_ARG,param_1);
  pcVar14 = ((char *)GEN_TOP(CONCAT31(extraout_var_01,bVar8)));
  if (bVar8 == 0) {
    if ((*(char *)(gen_frame + 0x253)) == '\0') {
      F_00affb20(param_6 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)));
    }
    *param_4 = (*(char *)(gen_frame + 0x253));
    *param_5 = (*(char *)(gen_frame + 0x263));
    pcVar14 = param_5;
  }
  return (uint)pcVar14;
}

/* ref: FUN_00af80b0 */
GEN_FRAME uint GEN_THISCALL F_00af80b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xaf80b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 uVar8;
  uint uVar7;
  bool bVar9;
  
  uVar5 = (*(undefined4 *)&gen_args[2]);
  F_00aefe70((*(int *)&gen_args[0]) GEN_EDX_FWD,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),(*(uint *)&gen_args[5]));
  uVar6 = 0;
  if ((*(float * PTR32 *)&gen_args[4]) != (float *)0x0) {
    uVar6 = 0;
    if (*(char *)((*(int *)&gen_args[0]) + 9) != '\0') {
      uVar6 = (*(uint *)&gen_args[5]) >> 8;
      (*(uint *)&gen_args[5]) = (*(uint *)&gen_args[5]) & 0xffffff00;
      if (*(char *)((*(int *)&gen_args[0]) + 8) == '\0') {
        (*(uint *)&gen_args[5]) = CONCAT31((int3)uVar6,1);
      }
      (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),*(char *)((*(int *)&gen_args[0]) + 8));
      uVar6 = F_00ae9300(*(undefined4 *)((*(int *)&gen_args[0]) + 4) GEN_EDX_ARG,GEN_TOF(*(*(float * PTR32 *)&gen_args[4])),(*(uint *)&gen_args[5]),(*(undefined4 *)&gen_args[2]));
    }
    *(uint *)((*(uint *)&gen_args[1]) + 0x50) = uVar6;
  }
  iVar3 = *(int *)((*(int *)&gen_args[0]) + 4);
  if ((*(int *)(iVar3 + 0x204) == 0) && ((*(char *)((*(int *)&gen_args[0]) + 8) == '\0' || ((char)uVar5 == '\0'))))
  {
    fVar1 = *((float *)GEN_TOP((*(int *)(iVar3 + 0x10) + 0xe0)));
    bVar4 = GEN_ISNAN(fVar1);
    bVar9 = bVar4 || fVar1 == 0.0;
    uVar8 = (undefined2)(uVar6 >> 0x10);
    uVar7 = CONCAT22(uVar8,CONCAT11(bVar9 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar1),(char)uVar6));
    if (bVar4 == bVar9) {
      fVar2 = *(float *)(iVar3 + 0x448);
      bVar4 = GEN_ISNAN(fVar2);
      bVar9 = bVar4 || fVar2 == 0.0;
      uVar7 = CONCAT22(uVar8,CONCAT11(bVar9 << 6 | bVar4 << 2 | 2U | !(0.0 <= fVar2),(char)uVar6));
      if (bVar4 == bVar9) {
        *(uint *)(iVar3 + 0x44c) = (uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0);
        *(undefined4 *)(iVar3 + 0x448) = 0;
        return uVar7;
      }
    }
  }
  else {
    uVar7 = F_00af2210(iVar3 GEN_EDX_ARG,(*(float *)&gen_args[3]));
  }
  return uVar7;
}

/* ref: FUN_00af8190 */
GEN_FRAME float10 * GEN_THISCALL F_00af8190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaf8190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 * __return_storage_ptr__ = (float10 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined * this_00;
  bool bVar7;
  double dVar8;
  byte bVar9;
  undefined3 extraout_var = 0;
  uint uVar10;
  float10 * pfVar11;
  undefined3 extraout_var_00 = 0;
  float10 fVar12;
  float fVar13;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) {
    bVar9 = F_00a9f620(iVar5 GEN_EDX_FWD);
    if (bVar9 != 0) {
      if (REFG(char, 0x14c0a40) == '\0') {
        return ((float10 *)GEN_TOP(CONCAT31(extraout_var,bVar9)));
      }
      if (*((char *)GEN_TOP((*(float10 * PTR32 *)((int)this + 0x10) + 0x42))) == '\0') {
        return *(float10 * PTR32 *)((int)this + 0x10);
      }
    }
  }
  pfVar11 = *(float10 * PTR32 *)((int)this + 0x14);
  if (pfVar11 == (float10 *)0x0) {
    return (float10 *)0x0;
  }
  if (((pfVar11 != (float10 *)0x3) && (pfVar11 != (float10 *)&REFG(undefined, 0x4))) &&
     (pfVar11 != (float10 *)0x2)) {
    return pfVar11;
  }
  if ((((*(int *)((int)this + 0x10) == 0) ||
       (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 == 0)) ||
      (bVar9 = F_00a9f620(iVar5 GEN_EDX_ARG), bVar9 == 0)) &&
     ((iVar5 = *(int *)((int)this + 0x14), iVar5 != 0 && (*(char *)((int)this + 0x5b) == '\0')))) {
    (*(char *)(gen_frame + 0x1b)) = '\0';
    if ((iVar5 == 3) && (*(char *)((int)this + 0xa5) == '\0')) {
      (*(char *)(gen_frame + 0x1b)) = '\x01';
    }
    if (((iVar5 == 4) &&
        (fVar3 = *(float *)((int)this + 0x98),
        uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG),
        dVar8 = (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)(uVar10 + 4)
                                                   )))))),
        (!GEN_ISNAN(REFG(double, 0x1094800)) && !GEN_ISNAN(dVar8)) && !(REFG(double, 0x1094800) < dVar8))) || ((*(char *)(gen_frame + 0x1b)) != '\0')) {
      uVar1 = *(undefined4 *)((int)this + 0x28);
      uVar2 = *(undefined4 *)((int)this + 0x20);
      pfVar11 = (float10 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)pfVar11 + 4);
      *(undefined4 *)((int)this + 0x4c) = uVar2;
      *(undefined4 *)((int)this + 0x50) = uVar1;
      *(undefined4 *)((int)this + 0x40) = 0;
      return pfVar11;
    }
  }
  fVar3 = *(float *)((int)this + 0x28);
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) - (float10)*(float *)((int)this + 0x4c))));
  fVar13 = *(float *)((int)this + 0x50);
  (*(float *)(gen_frame + 0x14)) = fVar13;
  fVar13 = (float)((float10)REFG(float, 0x1339b94) * (float10)fVar4 + (float10)fVar13);
  if (((float10)fVar13 < (float10)0) &&
     ((float10)REFG(float, 0x1339b9c) < (float10)((float)GEN_TOF(ABS((float10)fVar13))))) {
    fVar13 = gen_bits2f((uint)gen_fl2bits(REFG(float, 0x1339b9c)) ^ REFG(uint, 0x10920d0));
  }
  *(float *)((int)this + 0x28) = fVar13;
  if ((*(int *)((int)this + 0x14) == 3) && (fVar13 <= 0.0)) {
    F_00afa930(this GEN_EDX_ARG,4);
  }
  (*(char *)(gen_frame + 0x1b)) = 0;
  bVar7 = (float10)*(float *)((int)this + 0x28) * (float10)fVar3 < (float10)0;
  if (bVar7) {
    (*(char *)(gen_frame + 0x1b)) = 1;
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x20);
  }
  (*(char *)(gen_frame + 0x1b)) = bVar7;
  if ((((*(int *)((int)this + 0x10) == 0) ||
       (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 == 0)) ||
      (bVar9 = F_00a9f620(iVar5 GEN_EDX_ARG), bVar9 == 0)) || ((*(char *)(gen_frame + 0x1b)) == '\0')) {
    fVar12 = ((float10)GEN_TOD(pow((float10)fVar4,(float10)*(double *)&REFG(undefined, 0x1092098))));
    (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) * (float10)fVar4 +
                     ((float10)REFG(float, 0x1339b94) * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar12)));
  }
  else {
    fVar12 = F_00ae77d0((uint)&(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x14)) = (float)fVar12;
    *(undefined4 *)((int)this + 0x28) = 0;
    if (*(int *)((int)this + 0x14) == 3) {
      F_00afa930(this GEN_EDX_ARG,4);
    }
  }
  fVar4 = *(float *)((int)this + 0x48);
  uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x14))) -
                 (float10)*(float *)(uVar10 + 4))));
  (*(float *)(gen_frame + 0x14)) = fVar4;
  if (((*(char *)(gen_frame + 0x1b)) == '\0') && ((float10)*(float *)((int)this + 0x28) <= -(float10)REFG(float, 0x1339b9c))) {
    (*(float *)(gen_frame + 0x8)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
    if (REFG(float, 0x10ebd20) < (*(float *)(gen_frame + 0x8))) {
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10ebd20);
    }
    fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)*(float *)((int)this + 0x28))));
    if ((float10)((float)GEN_TOF(ABS((float10)fVar13))) < (float10)((float)GEN_TOF(ABS((float10)fVar4)))) {
      (*(float *)(gen_frame + 0x14)) = fVar13;
    }
  }
  if ((((*(int *)((int)this + 0x10) != 0) &&
       (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) &&
      (bVar9 = F_00a9f620(iVar5 GEN_EDX_ARG), bVar9 != 0)) &&
     ((((*(char *)(gen_frame + 0x1b)) != '\0' ||
       ((fVar4 = *(float *)((int)this + 0x28),
        (!GEN_ISNAN(fVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar4 <= *(float *)&REFG(undefined, 0x1088114)) &&
        (fVar4 < REFG(float, 0x10ebcec))))) && ((*(char *)((int)this + 0x58) == '\0' || ((*(char *)(gen_frame + 0x1b)) != '\0'))))))
  {
    F_00af5d40(this GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x58) = 1;
  }
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) {
    bVar9 = F_00a9f620(iVar5 GEN_EDX_ARG);
    pfVar11 = ((float10 *)GEN_TOP(CONCAT31(extraout_var_00,bVar9)));
    if (bVar9 != 0) goto LAB_00af85e9;
  }
  pfVar11 = *(float10 * PTR32 *)((int)this + 0x14);
  if ((pfVar11 != (float10 *)0x0) && (*(char *)((int)this + 0x5b) == '\0')) {
    if (pfVar11 == (float10 *)&REFG(undefined, 0x4)) {
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x98);
      if (*(char *)((int)this + 0xa6) != '\0') {
        (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xb4);
      }
      pfVar11 = (float10 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
      if ((float10)*(float *)((int)pfVar11 + 4) + (float10)(*(float *)(gen_frame + 0x14)) < (float10)(*(float *)(gen_frame + 0x10))) {
        uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
        uVar1 = *(undefined4 *)((int)this + 0x20);
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) - (float10)*(float *)(uVar10 + 4))));
        pfVar11 = (float10 *)F_00a5feb0(this_00 GEN_EDX_ARG);
        *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)pfVar11 + 4);
        *(undefined4 *)((int)this + 0x4c) = uVar1;
        *(float *)((int)this + 0x50) = fVar3;
        *(float *)((int)this + 0x40) = (*(float *)(gen_frame + 0x14));
        return pfVar11;
      }
    }
    else if (pfVar11 == (float10 *)0x3) {
      (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0x98);
      if (*(char *)((int)this + 0xa5) != '\0') {
        (*(float *)(gen_frame + 0x10)) = *(float *)((int)this + 0xa0);
      }
      pfVar11 = (float10 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
      if ((float10)(*(float *)(gen_frame + 0x10)) < (float10)*(float *)((int)pfVar11 + 4) + (float10)(*(float *)(gen_frame + 0x14))) {
        uVar10 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) - (float10)*(float *)(uVar10 + 4))));
        pfVar11 = (float10 *)F_00aeae60(this GEN_EDX_ARG,*(float *)((int)this + 0x20),fVar3);
      }
    }
  }
LAB_00af85e9: ;
  *(float *)((int)this + 0x40) = (*(float *)(gen_frame + 0x14));
  return pfVar11;
}

/* ref: FUN_00af8600 */
GEN_NOFRAME byte GEN_THISCALL F_00af8600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaf8600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined * param_9 = (undefined *)(uintptr_t)gen_a9;
  char * param_10 = (char *)(uintptr_t)gen_a10;
  undefined1 * param_11 = (undefined1 *)(uintptr_t)gen_a11;
  undefined4 param_12 = (undefined4)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float * pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * pvVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  undefined * pvVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0xe8)) = this;
  if (*(char *)((int)this + 0x5b) != '\0') {
    return 0;
  }
  fVar14 = (float)((float10)*param_2 - (float10)*param_1);
  (*(float *)(gen_frame + 0xd0)) = fVar14;
  fVar3 = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0xd4)) = fVar3;
  fVar4 = (float)((float10)param_2[2] - (float10)param_1[2]);
  (*(float *)(gen_frame + 0xd8)) = fVar4;
  (*(float *)(gen_frame + 0x90)) = fVar14;
  (*(float *)(gen_frame + 0x94)) = fVar3;
  (*(float *)(gen_frame + 0x98)) = fVar4;
  pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar4 * (float10)fVar4 +
                           ((float10)fVar3 * (float10)fVar3 + (float10)fVar14 * (float10)fVar14)))))));
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
  pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)))))))));
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
  (*(char *)(gen_frame + 0xf2)) = '\0';
  (*(char *)(gen_frame + 0xf3)) = '\0';
  (*(char *)(gen_frame + 0x10e)) = '\0';
  (*(byte *)(gen_frame + 0x10f)) = 0;
  pvVar15 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = pvVar15;
  (*(undefined * PTR32 *)(gen_frame + 0xec)) = pvVar15;
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) + (float10)(float)REFG(float, 0x1339ba4)))));
  (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1339ba4)));
  uVar8 = F_00af2a00(param_1,param_2,(float)(float10)0,((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(float *)(gen_frame + 0xb0)),&(*(char *)(gen_frame + 0xf2)),param_5,
                       (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) + (float10)(float)REFG(float, 0x1339ba4)));
  fVar13 = (float10)0;
  (*(char *)(gen_frame + 0x10d)) = (char)uVar8;
  bVar7 = F_00af26b0(param_1,param_2,(float)fVar13,(float)fVar13,&(*(float *)(gen_frame + 0xb0)),&(*(char *)(gen_frame + 0xf3)),param_6,
                       (float)fVar13);
  fVar13 = (float10)0;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0)) = bVar7;
  (*(undefined * PTR32 *)(gen_frame + 0xf8)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0xf8)), 1, 3),bVar7)));
  if ((char)param_12 != '\0') {
    fVar14 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10) + 0x10))) + 0xc0)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    (*(undefined * PTR32 *)(gen_frame + 0xec)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar14 + (float10)(float)REFG(float, 0x1339ba4)))));
    fVar10 = (float10)REFG(double, 0x1088108);
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar14 + (float10)(float)REFG(float, 0x1339ba4)) * fVar10)));
    (*(float *)(gen_frame + 0xb4)) = fVar3;
    fVar4 = *param_2;
    (*(float *)(gen_frame + 0xd0)) = (float)((float10)fVar4 + fVar13);
    fVar11 = (float10)fVar3;
    fVar3 = (float)(fVar11 + (float10)param_2[1]);
    (*(float *)(gen_frame + 0xd4)) = fVar3;
    fVar5 = param_2[2];
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)fVar5 + fVar13);
    (*(float *)(gen_frame + 0xa0)) = (float)((float10)fVar4 + fVar13);
    (*(float *)(gen_frame + 0xa4)) = fVar3;
    ((float *)(gen_frame + 0xa8))[0] = (float)((float10)fVar5 + fVar13);
    fVar3 = *param_1;
    (*(float *)(gen_frame + 0xd0)) = (float)((float10)fVar3 + fVar13);
    fVar4 = (float)(fVar11 + (float10)param_1[1]);
    (*(float *)(gen_frame + 0xd4)) = fVar4;
    fVar5 = param_1[2];
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)fVar5 + fVar13);
    (*(float *)(gen_frame + 0xb0)) = (float)((float10)fVar3 + fVar13);
    (*(float *)(gen_frame + 0xb4)) = fVar4;
    (*(float *)(gen_frame + 0xb8)) = (float)((float10)fVar5 + fVar13);
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))))))));
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xfc))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))))) * fVar10)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar10 * (float10)fVar14))));
    bVar7 = F_00af26b0(&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xa0)),(float)(float10)0,(float)(fVar10 * (float10)fVar14),
                         &(*(float *)(gen_frame + 0xd0)),&(*(char *)(gen_frame + 0x10e)),param_7,fVar3);
    (*(byte *)(gen_frame + 0x10f)) = bVar7;
    if ((bVar7 != 0) &&
       (bVar9 = GEN_ISNAN(*(float *)((int)param_7 + 0x40)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
       bVar9 != (bVar9 || *(float *)((int)param_7 + 0x40) == *(float *)&REFG(undefined, 0x1088114)))) {
      (*(byte *)(gen_frame + 0x10f)) = 0;
    }
  }
  pvVar15 = (*(undefined * PTR32 *)(gen_frame + 0xf8));
  fVar13 = (float10)0;
  fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))));
  fVar11 = (float10)REFG(float, 0x1339b58);
  (*(undefined * PTR32 *)(gen_frame + 0xcc)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xf4)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0xec)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10ec4c0)));
  (*(char *)(gen_frame + 0xf0)) = (*(char *)(gen_frame + 0x10d));
  (*(byte *)(gen_frame + 0xf1)) = (*(byte *)(gen_frame + 0x10f));
  if ((*(char *)(gen_frame + 0x10d)) != '\0') {
    pvVar6 = *(undefined * PTR32 *)((int)param_5 + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar6;
    if (fVar10 + fVar13 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar6)))) {
      (*(char *)(gen_frame + 0x10d)) = '\0';
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xcc)) = pvVar6;
    }
    (*(undefined * PTR32 *)(gen_frame + 0xcc)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xcc))))) - (fVar11 + fVar13)))))));
    (*(undefined * PTR32 *)(gen_frame + 0xec)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar6))) - (fVar11 + fVar13)))))));
  }
  if ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) != '\0') {
    pvVar6 = *(undefined * PTR32 *)((int)param_6 + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar6;
    if (fVar10 + (float10)*(double *)&REFG(undefined, 0x109ce00) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar6)))) {
      (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = (undefined *)((uint)pvVar15 & 0xffffff00);
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xc8)) = pvVar6;
    }
    (*(undefined * PTR32 *)(gen_frame + 0xc8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8))))) -
                              ((float10)REFG(float, 0x1339b5c) + (float10)*(double *)&REFG(undefined, 0x109ce00))))))));
  }
  if ((*(byte *)(gen_frame + 0x10f)) != 0) {
    pvVar15 = *(undefined * PTR32 *)((int)param_7 + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
    fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)));
    if (fVar10 + fVar13 < fVar12) {
      (*(byte *)(gen_frame + 0x10f)) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)REFG(float, 0x10ec4c0) - (fVar11 + fVar13)))))));
      (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar12 - (fVar11 + fVar13)))))));
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = pvVar15;
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) - (fVar11 + fVar13)))))));
      (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar12 - (fVar11 + fVar13)))))));
    }
  }
  if ((((*(char *)(gen_frame + 0x10d)) == '\0') && ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) == '\0')) && ((*(byte *)(gen_frame + 0x10f)) == 0)) {
    (*(byte *)(gen_frame + 0x103)) = (*(byte *)(gen_frame + 0x10f));
  }
  else {
    (*(byte *)(gen_frame + 0x103)) = 1;
    fVar13 = (float10)REFG(float, 0x1339b38) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xcc)))));
    if ((fVar13 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8)))))) && (fVar13 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))))) {
      *param_4 = (uint)param_5;
    }
    else {
      pvVar15 = param_7;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) + (float10)REFG(float, 0x1339b38) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xc8))))))) {
        pvVar15 = param_6;
      }
      *param_4 = (uint)pvVar15;
    }
    if (((((*(char *)(gen_frame + 0x10d)) != '\0') && ((*(char *)(gen_frame + 0xf2)) == '\0')) ||
        (((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) != '\0' && ((*(char *)(gen_frame + 0xf3)) == '\0')))) || (((*(byte *)(gen_frame + 0x10f)) != 0 && ((*(char *)(gen_frame + 0x10e)) == '\0')))
       ) {
      return 1;
    }
  }
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  if (((*(byte *)(gen_frame + 0x103)) != 0) && (*param_10 == '\0')) {
    F_00aed710(param_1,param_2,param_3,*param_4);
  }
  if (((undefined *)*param_4 == param_6) &&
     (pfVar1 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x28),
     !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))) {
    F_00af5ac0((*(undefined * PTR32 *)(gen_frame + 0xe8)) GEN_EDX_ARG,param_1,param_2,param_10,(*(undefined * PTR32 *)(gen_frame + 0xf8)),param_6,param_13);
    if (*param_10 == '\0') {
      if ((((*(char *)(gen_frame + 0x10d)) == '\0') && ((*(byte *)(gen_frame + 0x10f)) == 0)) && (bVar7 = F_00af0940(param_6), bVar7 != 0)) {
        *param_11 = 1;
      }
    }
    else {
      F_00a64e00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pvVar15 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
      (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
      pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9520(pvVar15 GEN_EDX_ARG))));
      (*(undefined * PTR32 *)(gen_frame + 0xf4)) = pvVar15;
      pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0xfc)) GEN_EDX_ARG))));
      (*(undefined * PTR32 *)(gen_frame + 0xfc)) = pvVar15;
      bVar7 = F_00af0bb0(param_2,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(undefined * PTR32 *)(gen_frame + 0xfc)),REFG(float, 0x10ebbf0),0,0,
                           ((undefined1 *)(gen_frame + 0x0)),0,0,0,0,3,0);
      if (bVar7 != 0) {
        F_00affb20(param_9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      }
    }
  }
  if (((*param_10 == '\0') && ((byte)(*(undefined * PTR32 *)(gen_frame + 0xf8)) == '\0')) && (((*(char *)(gen_frame + 0xf0)) != '\0' || ((*(byte *)(gen_frame + 0xf1)) != 0))))
  {
    if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xec))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108)))))) {
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = param_5;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0xf8)) = param_7;
    }
    bVar7 = F_00af0940((*(undefined * PTR32 *)(gen_frame + 0xf8)));
    if (bVar7 != 0) {
      F_00afef80((*(undefined * PTR32 *)(gen_frame + 0xf8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xa4)),((float *)(gen_frame + 0xa8)));
      (*(float *)(gen_frame + 0xb0)) = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0xc);
      (*(float *)(gen_frame + 0xb4)) = gen_bits2f(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x10));
      uVar2 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x14);
      (*(char *)(gen_frame + 0x10e)) = '\0';
      (*(float *)(gen_frame + 0xb8)) = gen_bits2f(uVar2);
      bVar7 = F_00ae8170(param_1,&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xd0)),&(*(char *)(gen_frame + 0x10e)));
      if (bVar7 != 0) {
        F_0046f4a0(&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xd0)),param_1);
        fVar14 = F_004bd280(&(*(float *)(gen_frame + 0x90)) GEN_EDX_ARG);
        (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
        if (0.0 < (*(float *)(gen_frame + 0x94))) {
          if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x44) != 0) &&
             (fVar14 = *((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xf8)) + 0x44) + 0x50))),
             GEN_ISNAN(fVar14) == (GEN_ISNAN(fVar14) || fVar14 == 0.0))) {
            *param_10 = '\x01';
            F_00affb20(param_9 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0xf8)));
            F_00a64e00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            pvVar15 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
            fVar14 = F_00ae9520(pvVar15 GEN_EDX_ARG);
            (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
            pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490(pvVar15 GEN_EDX_ARG))));
            (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
            bVar7 = F_00af0bb0(param_2,((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(undefined * PTR32 *)(gen_frame + 0x104)),REFG(float, 0x10ebbf0),0,0,
                                 ((undefined1 *)(gen_frame + 0x0)),0,0,0,0,3,0);
            if (bVar7 != 0) {
              param_2[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))));
              F_00affb20(param_9 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
              return (*(byte *)(gen_frame + 0x103));
            }
          }
        }
        else if ((float10)fVar14 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x104)))))) {
          pvVar15 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xe8)) + 0x10);
          (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
          fVar14 = F_00ae9520(pvVar15 GEN_EDX_ARG);
          (*(undefined * PTR32 *)(gen_frame + 0x108)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar14)));
          pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(F_00ae9490((*(undefined * PTR32 *)(gen_frame + 0x104)) GEN_EDX_ARG))));
          (*(undefined * PTR32 *)(gen_frame + 0x104)) = pvVar15;
          bVar7 = F_00af0bb0(&(*(float *)(gen_frame + 0xd0)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x108))))),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),&(*(undefined * PTR32 *)(gen_frame + 0xf4)),REFG(float, 0x10ebbf0),0,0,0
                               ,0,0,0,0,3,0);
          if ((bVar7 != 0) &&
             (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) < (float10)(*(float *)(gen_frame + 0xd4)) - (float10)REFG(float, 0x1339b38)))) {
            *param_10 = '\x01';
            F_00affb20(param_9 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0xf8)));
            fVar14 = param_3[1];
            (*(undefined * PTR32 *)(gen_frame + 0x104)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) - (float10)fVar14))));
            if (((float10)1 < (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4))))) - (float10)fVar14)) &&
               ((*(char *)(gen_frame + 0x10e)) != '\0')) {
              *param_2 = *param_1;
              param_2[1] = param_1[1];
              param_2[2] = param_1[2];
              return (*(byte *)(gen_frame + 0x103));
            }
            *param_2 = (*(float *)(gen_frame + 0xd0));
            param_2[2] = (*(float *)(gen_frame + 0xd8));
            param_2[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xf4)))));
          }
        }
      }
    }
  }
  return (*(byte *)(gen_frame + 0x103));
}

/* ref: FUN_00af8d90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00af8d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaf8d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  bool bVar6;
  float fVar7;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    F_00aefee0(this GEN_EDX_FWD);
    goto LAB_00af8e11;
  case 1: ;
  case 2: ;
    if (param_1 == 2) {
      if (((*(int *)((int)this + 0x10) != 0) &&
          (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
         (bVar3 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar3 != 0)) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
      *(undefined1 *)((int)this + 0x59) = 1;
    }
    F_00af5cb0(this GEN_EDX_ARG);
    break;
  case 3: ;
  case 4: ;
    if (param_2 == 1) {
      (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1339b98);
      fVar7 = *(float *)((int)this + 0x5c);
      fVar2 = (*(float *)(gen_frame + 0x1c));
      if (GEN_ISNAN(fVar7) == (GEN_ISNAN(fVar7) || fVar7 == 0.0)) {
        (*(float *)(gen_frame + 0x1c)) = fVar7;
        *(undefined4 *)((int)this + 0x5c) = 0;
        fVar2 = (*(float *)(gen_frame + 0x1c));
      }
    }
    else {
      fVar2 = *(float *)&REFG(undefined, 0x10ebbcc);
      if (param_2 != 2) break;
    }
    F_00ae7a70(this GEN_EDX_ARG,fVar2);
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar4 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x1c));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar3 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar3 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae0)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae8)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar7 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar6 = GEN_ISNAN((float10)fVar7) || GEN_ISNAN((float10)0);
      if (bVar6 == (bVar6 || (float10)fVar7 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    break;
  case 5: ;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x44);
      uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
      if ((float10)REFG(double, 0x10944b8) <= (float10)(*(float *)(gen_frame + 0x1c)) - (float10)*(float *)(uVar4 + 4)) {
        F_00aa3ff0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG,100,0);
      }
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) = 0;
    if ((((*(int *)((int)this + 0x10) != 0) &&
         (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
        (bVar3 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar3 != 0)) &&
       (bVar3 = F_00ae8560(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG), bVar3 == 0)) {
      puVar5 = (undefined4 *)F_00aeff30(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      *(undefined4 *)&REFG(undefined, 0x14c0ad0) = *puVar5;
      *(undefined4 *)&REFG(undefined, 0x14c0ad4) = puVar5[1];
      *(undefined4 *)&REFG(undefined, 0x14c0ad8) = puVar5[2];
      REFG(undefined1, 0x14c0bc0) = 1;
    }
    F_00af5d10(this GEN_EDX_ARG);
    goto LAB_00af8e11;
  }
  if ((param_1 == 3) || (param_1 == 4)) {
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x18);
      return;
    }
    *(float *)((int)this + 0x20) =
         ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) - (float10)*(double *)&REFG(undefined, 0x10ec4c8))));
  }
  else {
LAB_00af8e11: ;
    if (param_2 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
      return;
    }
  }
  return;
}

/* ref: FUN_00af9030 */
GEN_NOFRAME uint GEN_THISCALL F_00af9030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xaf9030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this;
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  
  fVar6 = (*(float *)(gen_frame + 0x34));
  uVar2 = (*(uint *)(gen_frame + 0x30));
  uVar5 = (*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 0;
  (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)gen_fl2bits(fVar6) & 0xffffff00);
  if ((param_2 & 0x20) != 0) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar6) >> 8),1));
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar5 & 0xffffff00;
  (*(char *)(gen_frame + 0x3e)) = '\0';
  (*(char *)(gen_frame + 0x3f)) = '\0';
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar2 & 0xffffff00;
  if ((param_3 & 1) == 0) {
    if ((param_3 & 4) != 0) {
      (*(char *)(gen_frame + 0x3f)) = '\x01';
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
      goto LAB_00af90a6;
    }
    if ((param_3 & 2) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x30)) = CONCAT31((int3)(uVar2 >> 8),1);
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
      goto LAB_00af90a6;
    }
    if ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0') goto LAB_00af90a6;
  }
  else {
    if ((param_2 & 0x10) != 0) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x2c)) = CONCAT31((int3)(uVar5 >> 8),1);
    }
    (*(char *)(gen_frame + 0x3e)) = '\x01';
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) = 1;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x34)), 1, 3),1));
LAB_00af90a6: ;
    this = *(undefined * PTR32 *)((int)param_1 + 0x10);
    (*(undefined4 *)(gen_frame + 0x10)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x14)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x18)) = param_4[2];
    bVar3 = F_00ae96c0(this GEN_EDX_FWD,0,&(*(undefined4 *)(gen_frame + 0x10)));
    if (bVar3 != 0) {
      if ((*(char *)(gen_frame + 0x3e)) != '\0') {
        (*(char *)(gen_frame + 0x3e)) = '\0';
      }
      if ((*(char *)(gen_frame + 0x3f)) != '\0') {
        (*(char *)(gen_frame + 0x3f)) = '\0';
      }
    }
  }
  if (*(char *)((int)param_1 + 0x70) != '\0') {
    if ((*(char *)(gen_frame + 0x3e)) != '\0') {
      (*(char *)(gen_frame + 0x3e)) = '\0';
    }
    if ((*(char *)(gen_frame + 0x3f)) != '\0') {
      (*(char *)(gen_frame + 0x3f)) = '\0';
    }
  }
  if ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0') {
    uVar7 = F_00427d90();
    *(ulonglong *)((int)param_1 + 0x78) = uVar7;
  }
  (*(char *)(gen_frame + 0x3d)) = '\0';
  (*(char *)(gen_frame + 0x3c)) = '\0';
  (*(char *)(gen_frame + 0x3b)) = '\0';
  if ((param_2 & 0xc0) == 0) {
LAB_00af9209: ;
    if (*(char *)((int)param_1 + 0xa6) != '\0') goto LAB_00af9212;
    uVar5 = (int)param_1 + 0x80;
  }
  else {
    if ((((*(char *)(gen_frame + 0x3e)) == '\0') && ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0')) && (*(char *)((int)param_1 + 0xa4) == '\0')
       ) {
      if (((*(char *)(gen_frame + 0x3f)) != '\0') ||
         ((*(int *)((int)param_1 + 0x14) == 0 && (bVar3 = F_00aead60(param_1 GEN_EDX_ARG), bVar3 == 0)))) {
        (*(char *)(gen_frame + 0x3d)) = '\x01';
        fVar6 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_4[1]))) -
                       (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x24))))));
        (*(float *)(gen_frame + 0x28)) = fVar6;
        bVar1 = !(*(double *)&REFG(undefined, 0x1094810) < (double)fVar6);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = bVar1;
        (*(uint *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x2c)), 1, 3),bVar1);
        goto LAB_00af9187;
      }
LAB_00af918d: ;
      bVar3 = F_00aeaed0(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x34))),(*(uint *)(gen_frame + 0x30)));
      if (bVar3 != 0) {
        (*(char *)(gen_frame + 0x3c)) = '\x01';
        puVar4 = (undefined4 *)F_00aeafa0(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)),param_4);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
      }
    }
    else {
LAB_00af9187: ;
      if ((*(char *)(gen_frame + 0x3f)) == '\0') goto LAB_00af918d;
    }
    if ((((char)(*(uint *)(gen_frame + 0x30)) != '\0') || ((*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x34)) + 0)) != '\0')) ||
       ((*(char *)((int)param_1 + 0xa4) == '\0' && (*(char *)((int)param_1 + 0xa5) == '\0'))))
    goto LAB_00af9209;
    if (*(char *)((int)param_1 + 0xa6) == '\0') {
      if ((*(int *)((int)param_1 + 0x14) != 0) || (bVar3 = F_00aead60(param_1 GEN_EDX_ARG), bVar3 != 0)) {
        (*(char *)(gen_frame + 0x3b)) = '\x01';
      }
      goto LAB_00af9209;
    }
LAB_00af9212: ;
    uVar5 = (int)param_1 + 0xd0;
  }
  *(undefined4 *)(uVar5 + 0x18) = param_4[1];
  if ((*(char *)(gen_frame + 0x3e)) == '\0') {
    if ((*(char *)(gen_frame + 0x3d)) != '\0') {
      fVar6 = 0.0;
      goto LAB_00af9247;
    }
  }
  else {
    fVar6 = param_5;
    if ((*(char *)(gen_frame + 0x3d)) != '\0') {
      fVar6 = 0.0;
    }
LAB_00af9247: ;
    (*(float *)(gen_frame + 0x34)) = fVar6;
    uVar5 = F_00af5b90(param_1 GEN_EDX_ARG,param_4,(*(uint *)(gen_frame + 0x2c)),fVar6,0);
  }
  if ((*(char *)(gen_frame + 0x3f)) == '\0') {
    if ((*(char *)(gen_frame + 0x3c)) == '\0') goto LAB_00af9287;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
  }
  else {
    puVar4 = param_4;
    if ((*(char *)(gen_frame + 0x3c)) != '\0') {
      puVar4 = &(*(undefined4 *)(gen_frame + 0x0));
    }
  }
  uVar5 = F_00af04a0(param_1 GEN_EDX_ARG,puVar4);
LAB_00af9287: ;
  if (((char)(*(uint *)(gen_frame + 0x30)) != '\0') || ((*(char *)(gen_frame + 0x3b)) != '\0')) {
    uVar5 = F_00af0530(param_1 GEN_EDX_ARG,param_4);
  }
  return uVar5;
}

/* ref: FUN_00af92b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00af92b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf92b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * this_00;
  float10 fVar1;
  byte bVar2;
  undefined * this_01;
  uint uVar3;
  uint * puVar4;
  float fVar5;
  int iVar6;
  
  if (*(char *)((int)this + 0x49) != '\0') {
    if (*(char *)((int)this + 0x48) == '\0') {
      F_00af5d70(this GEN_EDX_FWD);
      return;
    }
    *(undefined1 *)((int)this + 0x48) = 0;
    if (((*(int *)((int)this + 0x10) != 0) &&
        (this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), this_00 != (int *)0x0)) &&
       (bVar2 = F_00a9fd00(this_00 GEN_EDX_ARG), bVar2 == 0)) {
      if ((float10)0 < (float10)*(float *)((int)this + 0x40)) {
        if (*(char *)((int)this + 0x4a) == '\0') {
          return;
        }
        this_01 = (undefined *)F_00475fa0(*(undefined4 *)((int)this + 0x18),
                                       *(undefined4 *)((int)this + 0x1c));
        if (this_01 == (undefined *)0x0) {
          return;
        }
        iVar6 = (int)this + 0x20;
        uVar3 = F_00a5feb0(this_01 GEN_EDX_ARG);
        puVar4 = (uint *)F_0046f4a0(((undefined1 *)(gen_frame + 0x20)),uVar3,iVar6);
        (*(uint *)(gen_frame + 0x10)) = *puVar4;
        (*(uint *)(gen_frame + 0x14)) = puVar4[1];
        (*(uint *)(gen_frame + 0x18)) = puVar4[2];
        fVar5 = F_004bd280(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG);
        (*(double *)(gen_frame + 0x28)) = (double)fVar5;
        fVar5 = F_00aeb160(this GEN_EDX_ARG);
        fVar1 = (float10)(*(double *)(gen_frame + 0x28));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = (float)(fVar1 - (float10)fVar5);
        fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) *
                       (float10)(float)(fVar1 - (float10)fVar5))));
        (*(float *)((char *)&(*(double *)(gen_frame + 0x28)) + 4)) = fVar5;
        (*(double *)(gen_frame + 0x28)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar5),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x28)) + 0))));
        F_0046f0e0(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,fVar5);
      }
      else {
        fVar5 = *(float *)((int)this + 0x44);
        (*(uint *)(gen_frame + 0x10)) = (uint)gen_fl2bits((float)(REFG(float, 0x1302c90)));
        (*(uint *)(gen_frame + 0x14)) = (uint)gen_fl2bits((float)(REFG(float, 0x1302c94)));
        (*(uint *)(gen_frame + 0x18)) = (uint)gen_fl2bits((float)(REFG(float, 0x1302c98)));
        F_00aaeb00((uint)&(*(uint *)(gen_frame + 0x10)),fVar5);
        F_0046f0e0(&(*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG,GEN_TOF(gen_bits2f(*(uint *)((int)this + 0x40) ^ REFG(uint, 0x10920d0))));
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) ^ REFG(uint, 0x10920d0);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) ^ REFG(uint, 0x10920d0);
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) ^ REFG(uint, 0x10920d0);
      }
      F_004bd670(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x20,&(*(uint *)(gen_frame + 0x10)));
      uVar3 = F_00a5feb0(this_00 GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar3 + 4);
      bVar2 = F_00a9f620(this_00 GEN_EDX_ARG);
      if (bVar2 != 0) {
        F_00aeb1c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*(float *)((int)this + 0x44),1);
        return;
      }
      F_00af5e30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00af6100(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0x3c))(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00a9f870(this_00 GEN_EDX_ARG,*(float *)((int)this + 0x44));
    }
  }
  return;
}

/* ref: FUN_00af98d0 */
GEN_NOFRAME uint GEN_THISCALL F_00af98d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xaf98d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  uVar2 = 0;
  if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) == 0) {
      if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x296))) == '\0') ||
         (iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c0, *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) == '\0')) {
        iVar4 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x270;
      }
      if (0.0 <= *(float *)(iVar4 + 0x10)) {
        return 0;
      }
    }
    else if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x204))) != 5) {
      return 0;
    }
  }
  if (((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x420))) != '\0')) &&
     (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x422))) == '\0')) {
    if ((((char)(*(uint *)&gen_args[4]) == '\0') &&
        ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0 ||
         (bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_FWD), bVar1 == 0)))) &&
       (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1cc))) != '\0')) {
      (*(undefined4 *)&gen_args[5]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[5]), 1, 3),1);
    }
    this = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    puVar3 = (undefined4 *)F_00a5feb0(this GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
    bVar1 = F_00af6450((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0x9c)),(*(float *)&gen_args[6]),(*(float *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[5]),(*(float *)&gen_args[2]),0,0,
                         (*(uint *)&gen_args[4]));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
      (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0x9c));
      F_00aec9f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0xa0)));
      puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
      (*(undefined4 *)(gen_frame + 0xa8)) = puVar3[2];
      uVar2 = F_00aed0a0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  return uVar2;
}

/* ref: FUN_00af9b10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00af9b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaf9b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 100) != '\0') {
      F_00aec9f0(iVar1 GEN_EDX_FWD,iVar1 + 0x20);
    }
    F_00af98d0(*(undefined4 *)((int)this + 4) GEN_EDX_ARG,REFG(float, 0x10ebd70),REFG(float, 0x10ebbec),0,0,0,(float)(float10)0);
    F_00aeb700(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
    if ((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 9) == '\0')) {
      F_00afbac0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      return;
    }
  }
  return;
}

/* ref: FUN_00af9b80 */
GEN_NOFRAME uint GEN_THISCALL F_00af9b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaf9b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  float10 fVar4;
  bool bVar5;
  byte bVar6;
  uint in_EAX = 0;
  uint uVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  float fVar9;
  
  if (1 < REFG(undefined4, 0x14c0a44)) {
    return in_EAX;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204)));
  if (iVar2 != 0) {
    if (iVar2 == 3) {
      return 3;
    }
    if (iVar2 == 4) {
      return 4;
    }
    if (iVar2 == 2) {
      return 2;
    }
  }
  if (*(char *)((int)this + 0x1c) == '\0') {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  (*(char *)(gen_frame + 0x5f)) = '\0';
  uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_FWD);
  if (((uVar7 == 8) &&
      (uVar7 = F_00aa3470(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) GEN_EDX_ARG), uVar7 != 0)) &&
     (*(char *)(uVar7 + 0x2e09) != '\0')) {
    (*(char *)(gen_frame + 0x5f)) = '\x01';
  }
  (*(char *)(gen_frame + 0x5e)) = '\0';
  if (((*(char *)(gen_frame + 0x5f)) == '\0') &&
     ((*(char *)((int)this + 0x1c) != '\0' ||
      (uVar7 = *(uint *)((int)this + 0x18), uVar8 = F_00aea910(this GEN_EDX_ARG), uVar7 < uVar8)))) {
    bVar6 = F_00ae96c0(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0);
    if (bVar6 == 0) {
      return CONCAT31(extraout_var,bVar6);
    }
    (*(char *)(gen_frame + 0x5e)) = '\x01';
  }
  uVar7 = (*(uint *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ebd70);
  *(undefined4 *)((int)this + 0x18) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x54)) = uVar7 & 0xffffff00;
  uVar8 = (*(uint *)(gen_frame + 0x54));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = 0.0;
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = 0.0;
  gen_piece_set(&(*(uint *)(gen_frame + 0x54)), 1, 3, (unsigned long long)(SUB43(uVar7,1)));
  if ((*(char *)(gen_frame + 0x5f)) == '\0') {
    if ((*(char *)(gen_frame + 0x5e)) == '\0') {
      (*(uint *)(gen_frame + 0x54)) = uVar8;
      bVar6 = F_00ae6930(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      if (bVar6 != 0) {
        uVar7 = F_00ae9430(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
        fVar9 = F_00ae95f0(param_1,uVar7);
        (*(float *)(gen_frame + 0x58)) = fVar9;
      }
      bVar6 = F_00ae6930(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_ARG);
      if (bVar6 == 0) {
        bVar5 = (*(float *)(gen_frame + 0x58)) < REFG(float, 0x10ebbf0);
        fVar9 = REFG(float, 0x10ebbf0);
      }
      else {
        bVar5 = (double)(*(float *)(gen_frame + 0x58)) < REFG(double, 0x1094800);
        fVar9 = REFG(float, 0x10ebcd0);
      }
      if (bVar5) {
        (*(float *)(gen_frame + 0x58)) = fVar9;
      }
    }
    else {
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),1);
      fVar9 = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar9;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar1;
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar9 - (float10)fVar1);
      (*(double *)(gen_frame + 0x48)) = (double)fVar9;
      uVar7 = F_00ae9430(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
      (*(double *)(gen_frame + 0x48)) = (*(double *)(gen_frame + 0x48)) - (double)*(float *)(uVar7 + 4);
      fVar9 = F_00ae9520(this_00 GEN_EDX_ARG);
      fVar4 = (float10)(*(double *)(gen_frame + 0x48));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = (float)(fVar4 - (float10)fVar9);
    }
  }
  else {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x10ebd4c);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x54)) + 0)) = 1;
    (*(uint *)(gen_frame + 0x54)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x54)), 1, 3),1);
  }
  uVar7 = F_00af98d0(*(undefined4 *)((int)this + 4) GEN_EDX_ARG,(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x58)),0,(*(uint *)(gen_frame + 0x54)),0,(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))
                      );
  REFG(undefined4, 0x14c0a44) = REFG(undefined4, 0x14c0a44) + 1;
  return uVar7;
}

/* ref: FUN_00af9d80 */
GEN_NOFRAME byte GEN_THISCALL F_00af9d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xaf9d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  char * param_5 = (char *)(uintptr_t)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  float fVar1;
  float fVar2;
  int in_ecx;
  int * piVar3;
  undefined * this_00;
  byte bVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  fVar10 = *param_2;
  fVar1 = *param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x288)) = this;
  (*(byte *)(gen_frame + 0x28d)) = 0;
  (*(float *)(gen_frame + 0x270)) = (float)((float10)fVar10 - (float10)fVar1);
  (*(float *)(gen_frame + 0x274)) = (float)((float10)param_2[1] - (float10)param_1[1]);
  (*(float *)(gen_frame + 0x278)) = (float)((float10)param_2[2] - (float10)param_1[2]);
  fVar7 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar8 = (float10)(float)((float10)fVar10 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  fVar10 = ((float)GEN_TOF((fVar9 * fVar9 + (fVar8 * fVar8 + fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x280)) = fVar10;
  fVar10 = ((float)GEN_TOF(SQRT((float10)fVar10)));
  (*(float *)(gen_frame + 0x280)) = fVar10;
  if ((param_5 != (char *)0x0) && (*param_5 != '\x01')) {
    *param_5 = '\0';
  }
  if (fVar10 <= REFG(float, 0x10ebbe4)) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    return 0;
  }
  fVar2 = *(float *)((int)this + 0x10);
  (*(float *)(gen_frame + 0x270)) = *param_2;
  fVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x140)) = 0;
  (*(undefined4 *)(gen_frame + 0x144)) = 0;
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  (*(undefined4 *)(gen_frame + 0x14c)) = 0;
  (*(undefined4 *)(gen_frame + 0x150)) = 0;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x164)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined4 *)(gen_frame + 0x178)) = 0;
  (*(undefined4 *)(gen_frame + 0x190)) = 0;
  (*(undefined4 *)(gen_frame + 0x194)) = 0;
  (*(undefined4 *)(gen_frame + 0x198)) = 0;
  (*(undefined2 *)(gen_frame + 0x1a0)) = 0;
  (*(undefined1 *)(gen_frame + 0x1a2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(undefined2 *)(gen_frame + 0x1c0)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c2)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f4)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined4 *)(gen_frame + 0x220)) = 0;
  (*(undefined4 *)(gen_frame + 0x224)) = 0;
  (*(undefined4 *)(gen_frame + 0x228)) = 0;
  (*(undefined2 *)(gen_frame + 0x230)) = 0;
  (*(undefined1 *)(gen_frame + 0x232)) = 0;
  (*(undefined4 *)(gen_frame + 0x240)) = 0;
  (*(undefined4 *)(gen_frame + 0x244)) = 0;
  (*(undefined4 *)(gen_frame + 0x248)) = 0;
  (*(undefined2 *)(gen_frame + 0x250)) = 0;
  (*(undefined1 *)(gen_frame + 0x252)) = 0;
  (*(undefined4 *)(gen_frame + 0x254)) = 0;
  (*(undefined4 *)(gen_frame + 0x258)) = 0;
  in_ecx = *(int *)((int)gen_fl2bits(fVar2) + 0x10);
  (*(float *)(gen_frame + 0x278)) = fVar1;
  fVar1 = param_1[1];
  (*(char *)(gen_frame + 0x28f)) = '\0';
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x280)) + 0)) = 1;
  (*(float *)(gen_frame + 0x280)) = gen_bits2f(CONCAT31((int3)((uint)gen_fl2bits(fVar10) >> 8),1));
  (*(char *)(gen_frame + 0x28c)) = '\0';
  (*(float *)(gen_frame + 0x26c)) = 0.0;
  (*(float *)(gen_frame + 0x274)) = fVar1;
  (*(float *)(gen_frame + 0x284)) = fVar2;
  if ((in_ecx == 0) || (bVar4 = F_00a9f620(in_ecx GEN_EDX_FWD), bVar4 == 0)) {
    fVar10 = 0.0;
    piVar3 = *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x284))) + 0x10);
    if (piVar3 != (int *)0x0) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG);
      if (uVar5 == 1) goto LAB_00afa010;
      fVar10 = 0.0;
    }
  }
  else {
LAB_00afa010: ;
    fVar10 = *((float *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x284))) + 0x10) + 0xc0)));
  }
  this_00 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x10);
  (*(float *)(gen_frame + 0x284)) = fVar10;
  fVar10 = F_00ae9520(this_00 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x268)) = fVar10;
  bVar4 = F_00af0bb0(&(*(float *)(gen_frame + 0x270)),fVar10,(*(float *)(gen_frame + 0x284)),&(*(float *)(gen_frame + 0x26c)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x1d0)),0,0,0,0,3,0);
  fVar10 = (*(float *)(gen_frame + 0x280));
  if (bVar4 == 0) {
    *param_2 = *param_1;
    param_2[2] = param_1[2];
  }
  else {
    if (((float10)param_2[1] < (float10)(*(float *)(gen_frame + 0x26c))) &&
       ((!GEN_ISNAN(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x28)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x288)) + 0x28) <= *(float *)&REFG(undefined, 0x1088114)))) {
      if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x230)) + 1)) == '\0') goto LAB_00afa0bd;
      if ((char)(*(undefined2 *)(gen_frame + 0x230)) == '\0') {
        (*(char *)(gen_frame + 0x28c)) = '\x01';
      }
    }
    if ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x230)) + 1)) != '\0') {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x280)) + 0)) = 0;
      (*(float *)(gen_frame + 0x280)) = gen_bits2f((uint)gen_fl2bits(fVar10) & 0xffffff00);
    }
  }
LAB_00afa0bd: ;
  bVar4 = F_0054ccb0(param_2 GEN_EDX_ARG,param_1);
  if (bVar4 == 0) {
    (*(float *)(gen_frame + 0x270)) = *param_1;
    (*(float *)(gen_frame + 0x274)) = param_1[1];
    (*(float *)(gen_frame + 0x278)) = param_1[2];
    (*(float *)(gen_frame + 0x284)) = 0.0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(undefined4 *)(gen_frame + 0xc0)) = 0;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(undefined4 *)(gen_frame + 0xd4)) = 0;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    (*(undefined4 *)(gen_frame + 0x100)) = 0;
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    (*(undefined4 *)(gen_frame + 0x108)) = 0;
    (*(undefined2 *)(gen_frame + 0x110)) = 0;
    (*(undefined1 *)(gen_frame + 0x112)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(undefined4 *)(gen_frame + 0x128)) = 0;
    (*(undefined2 *)(gen_frame + 0x130)) = 0;
    (*(undefined1 *)(gen_frame + 0x132)) = 0;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x138)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x90)) = 0;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined2 *)(gen_frame + 0xa0)) = 0;
    (*(undefined1 *)(gen_frame + 0xa2)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1f8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
    (*(undefined4 *)(gen_frame + 0x200)) = 0;
    (*(undefined4 *)(gen_frame + 0x204)) = 0;
    (*(undefined4 *)(gen_frame + 0x208)) = 0;
    (*(undefined4 *)(gen_frame + 0x220)) = 0;
    (*(undefined4 *)(gen_frame + 0x224)) = 0;
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(undefined2 *)(gen_frame + 0x230)) = 0;
    (*(undefined1 *)(gen_frame + 0x232)) = 0;
    (*(undefined2 *)(gen_frame + 0x250)) = 0;
    (*(undefined1 *)(gen_frame + 0x252)) = 0;
    (*(undefined4 *)(gen_frame + 0x258)) = 0;
    (*(char *)(gen_frame + 0x28e)) = '\0';
    (*(undefined4 *)(gen_frame + 0x240)) = 0;
    (*(undefined4 *)(gen_frame + 0x244)) = 0;
    (*(undefined4 *)(gen_frame + 0x248)) = 0;
    (*(undefined4 *)(gen_frame + 0x254)) = 0;
    bVar4 = F_00af8600((*(undefined * PTR32 *)(gen_frame + 0x288)) GEN_EDX_ARG,param_1,param_2,&(*(float *)(gen_frame + 0x270)),&(*(float *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0xb0)),&(*(undefined4 *)(gen_frame + 0x20)),
                         &(*(undefined4 *)(gen_frame + 0x1d0)),param_4,&(*(undefined4 *)(gen_frame + 0x140)),&(*(char *)(gen_frame + 0x28f)),&(*(char *)(gen_frame + 0x28e)),
                         (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x280))),param_7);
    if ((bVar4 == 0) && ((*(char *)(gen_frame + 0x28f)) == '\0')) {
      if ((*(char *)(gen_frame + 0x28c)) != '\0') {
        *param_2 = (*(float *)(gen_frame + 0x270));
        param_2[1] = (*(float *)(gen_frame + 0x274));
        param_2[2] = (*(float *)(gen_frame + 0x278));
        REFG(undefined1, 0x14c0cc6) = 1;
      }
    }
    else {
      if ((char)param_7 == '\0') {
        REFG(undefined1, 0x14c0ba4) = 1;
      }
      if ((*(char *)(gen_frame + 0x28f)) == '\0') {
        if ((*(char *)(gen_frame + 0x28e)) == '\0') {
          if (param_4 < 3) {
            F_00af0130((*(undefined * PTR32 *)(gen_frame + 0x288)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x270)),param_2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x284))));
            if (param_3 != 0) {
              F_00aeab30(param_3,&(*(float *)(gen_frame + 0x270)),param_2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x284))));
            }
            bVar4 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x288)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x270)),param_2,param_3,param_4 + 1,param_5,param_6,
                                 param_7);
            return bVar4;
          }
          if ((param_3 != 0) &&
             (bVar4 = F_00afa520((*(undefined * PTR32 *)(gen_frame + 0x288)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x270)),param_2,param_3,((undefined1 *)(gen_frame + 0x10))), bVar4 != 0)) {
            pfVar6 = (float *)F_004bd670(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x270)),((undefined1 *)(gen_frame + 0x10)));
            *param_2 = *pfVar6;
            param_2[1] = pfVar6[1];
            param_2[2] = pfVar6[2];
            bVar4 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x288)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x270)),param_2,0,0,param_5,param_6,param_7);
            return bVar4;
          }
          *param_2 = (*(float *)(gen_frame + 0x270));
          param_2[1] = (*(float *)(gen_frame + 0x274));
          param_2[2] = (*(float *)(gen_frame + 0x278));
        }
        (*(byte *)(gen_frame + 0x28d)) = 1;
      }
    }
  }
  F_00af5870((*(undefined * PTR32 *)(gen_frame + 0x288)) GEN_EDX_ARG,param_1,param_2,&(*(char *)(gen_frame + 0x28f)),&(*(undefined4 *)(gen_frame + 0x140)),param_4,param_7);
  if (param_5 != (char *)0x0) {
    *param_5 = (*(char *)(gen_frame + 0x28f));
  }
  if (((*(char *)(gen_frame + 0x28f)) != '\0') && (param_6 != (undefined *)0x0)) {
    F_00affb20(param_6 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x140)));
  }
  return (*(byte *)(gen_frame + 0x28d));
}

/* ref: FUN_00afa520 */
GEN_NOFRAME byte GEN_THISCALL F_00afa520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafa520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  float * pfVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) - (float10)param_1[1])));
  (*(byte *)(gen_frame + 0x5f)) = 0;
  (*(uint *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) - (float10)param_1[2])));
  do {
    uVar9 = (*(uint *)(gen_frame + 0x38));
    if ((*(uint *)(gen_frame + 0x38)) == 0) {
      pfVar8 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28);
      if (GEN_ISNAN(*pfVar8) || (0.0 < *pfVar8 || *pfVar8 == 0.0)) {
        param_4[1] = (*(float *)(gen_frame + 0x24));
        *param_4 = 0.0;
        param_4[2] = 0.0;
        goto LAB_00afa6b5;
      }
    }
    else {
      if ((*(uint *)(gen_frame + 0x38)) == 1) {
        uVar10 = 0;
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        if (*(int *)(param_3 + 0x10) != 0) {
          pfVar8 = (float *)(param_3 + 0x58);
          do {
            uVar10 = uVar10 + 1;
            *param_4 = (float)((float10)pfVar8[-2] + (float10)*param_4);
            param_4[1] = (float)((float10)pfVar8[-1] + (float10)param_4[1]);
            param_4[2] = (float)((float10)*pfVar8 + (float10)param_4[2]);
            pfVar8 = pfVar8 + 4;
          } while (uVar10 < *(uint *)(param_3 + 0x10));
        }
        fVar12 = (float10)*(int *)(param_3 + 0x10);
        if (*(int *)(param_3 + 0x10) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = (float)fVar12;
        fVar12 = (float10)(float)fVar12;
        fVar14 = (float)((float10)*param_4 / fVar12);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar14;
        (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar14),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0))));
        *param_4 = fVar14;
        fVar1 = (float)((float10)param_4[1] / fVar12);
        (*(float *)(gen_frame + 0x54)) = fVar1;
        param_4[1] = fVar1;
        fVar2 = (float)((float10)param_4[2] / fVar12);
        (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar2;
        (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar2),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
        param_4[2] = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                       ((float10)fVar14 * (float10)fVar14 + (float10)fVar1 * (float10)fVar1))));
        (*(float *)(gen_frame + 0x34)) = fVar3;
        fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
        (*(float *)(gen_frame + 0x34)) = fVar3;
        fVar12 = (float10)fVar3;
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
        if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
          fVar14 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                          ((float10)fVar14 * (float10)fVar14 + (float10)fVar1 * (float10)fVar1))));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = (float)((float10)1 / (float10)fVar14);
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar12 = (float10)fVar14;
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)*param_4);
          fVar13 = (float10)*(double *)&REFG(undefined, 0x10947d0);
          *param_4 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)*param_4) * fVar13)));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)param_4[1]);
          param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)param_4[1]) * fVar13)));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[2] * fVar12);
          param_4[2] = ((float)GEN_TOF((fVar13 * (float10)(float)((float10)param_4[2] * fVar12))));
        }
      }
      else if ((*(uint *)(gen_frame + 0x38)) == 2) {
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
        fVar14 = *(float *)(param_3 + 0x84);
        uVar10 = 0;
        (*(float *)(gen_frame + 0x3c)) = fVar14;
        if (*(int *)(param_3 + 0x10) != 0) {
          pfVar8 = (float *)(param_3 + 0x88);
          do {
            *param_4 = (float)((float10)pfVar8[-2] + (float10)*param_4);
            param_4[1] = (float)((float10)pfVar8[-1] + (float10)param_4[1]);
            param_4[2] = (float)((float10)*pfVar8 + (float10)param_4[2]);
            fVar1 = pfVar8[-1];
            (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar1;
            (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
            if ((float10)(*(float *)(gen_frame + 0x3c)) < (float10)fVar1) {
              (*(float *)(gen_frame + 0x3c)) = fVar1;
              fVar14 = fVar1;
            }
            uVar10 = uVar10 + 1;
            pfVar8 = pfVar8 + 4;
          } while (uVar10 < *(uint *)(param_3 + 0x10));
        }
        fVar12 = (float10)*(int *)(param_3 + 0x10);
        if (*(int *)(param_3 + 0x10) < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x34)) = (float)fVar12;
        param_4[1] = fVar14;
        fVar12 = (float10)(float)fVar12;
        *param_4 = (float)((float10)*param_4 / fVar12);
        param_4[2] = (float)((float10)param_4[2] / fVar12);
      }
LAB_00afa6b5: ;
      pfVar8 = (float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28);
      if (!GEN_ISNAN(*pfVar8) && (!(0.0 < *pfVar8) && *pfVar8 != 0.0)) {
        fVar12 = (float10)param_4[2] * (float10)param_4[2];
        dVar5 = (double)fVar12;
        (*(double *)(gen_frame + 0x48)) = dVar5;
        fVar13 = (float10)*param_4 * (float10)*param_4;
        dVar6 = (double)fVar13;
        (*(double *)(gen_frame + 0x40)) = dVar6;
        fVar14 = (float)(fVar13 + fVar12);
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
        (*(float *)(gen_frame + 0x34)) = fVar14;
        fVar12 = (float10)fVar14;
        bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
        if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
          fVar14 = ((float)GEN_TOF((((float10)0 * (float10)0 + (float10)dVar6) + (float10)dVar5)));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar14 = (float)((float10)1 / (float10)fVar14);
          (*(float *)(gen_frame + 0x34)) = fVar14;
          fVar12 = (float10)fVar14;
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)*param_4);
          fVar13 = (float10)*(double *)&REFG(undefined, 0x10947d0);
          *param_4 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)*param_4) * fVar13)));
          (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)*(double *)&REFG(undefined, 0x108bec8));
          param_4[1] = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)*(double *)&REFG(undefined, 0x108bec8)) * fVar13
                              )));
          (*(float *)(gen_frame + 0x34)) = (float)((float10)param_4[2] * fVar12);
          param_4[2] = ((float)GEN_TOF((fVar13 * (float10)(float)((float10)param_4[2] * fVar12))));
        }
      }
      if (((param_4[1] < 0.0) && (!GEN_ISNAN((*(float *)(gen_frame + 0x24))) && !((*(float *)(gen_frame + 0x24)) <= 0.0))) ||
         ((0.0 < param_4[1] && ((*(float *)(gen_frame + 0x24)) < 0.0)))) {
        param_4[1] = 0.0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x30) = 0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x34) = 0;
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x38) = 0;
      }
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(ABS((float10)param_4[1])));
      (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24)))));
      if ((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x24))))) < (float10)((float)GEN_TOF(ABS((float10)param_4[1])))) {
        param_4[1] = (*(float *)(gen_frame + 0x24));
      }
      fVar14 = param_4[1];
      (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar14;
      (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar14),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x48)) + 0))));
      fVar1 = *param_4;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x40)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0x40)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x40)) + 0))));
      fVar2 = param_4[2];
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar3 = ((float)GEN_TOF((((float10)fVar14 * (float10)fVar14 + (float10)fVar1 * (float10)fVar1) +
                     (float10)fVar2 * (float10)fVar2)));
      (*(float *)(gen_frame + 0x34)) = fVar3;
      fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
      (*(float *)(gen_frame + 0x34)) = fVar3;
      fVar12 = (float10)fVar3;
      bVar11 = GEN_ISNAN(fVar12) || GEN_ISNAN((float10)0);
      if (bVar11 == (bVar11 || fVar12 == (float10)0)) {
        (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)*param_1);
        fVar3 = param_1[1];
        (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar14 + (float10)fVar3);
        fVar4 = param_1[2];
        (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)fVar4);
        (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 + (float10)*param_1);
        (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar14 + (float10)fVar3);
        (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 + (float10)fVar4);
        bVar7 = F_00af9d80((*(undefined * PTR32 *)(gen_frame + 0x58)) GEN_EDX_FWD,param_1,&(*(float *)(gen_frame + 0x0)),0,0,0,0,1);
        uVar9 = (*(uint *)(gen_frame + 0x38));
        if (bVar7 == 0) {
          return 1;
        }
      }
    }
    (*(uint *)(gen_frame + 0x38)) = uVar9 + 1;
    if (2 < uVar9 + 1) {
      if (0.0 <= *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x28)) {
        *param_4 = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
      return (*(byte *)(gen_frame + 0x5f));
    }
  } while( true );
}

/* ref: FUN_00afa930 */
GEN_FRAME unsigned int GEN_THISCALL F_00afa930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafa930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (param_1 != iVar1) {
    *(int *)((int)this + 0x14) = param_1;
    F_00af8d90(this GEN_EDX_FWD,param_1,iVar1);
  }
  return;
}

/* ref: FUN_00afa950 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afa950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafa950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 5) {
    *(undefined4 *)((int)this + 0x14) = 5;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x44);
      uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_FWD);
      if ((float10)REFG(double, 0x10944b8) <= (float10)(*(float *)(gen_frame + 0x1c)) - (float10)*(float *)(uVar3 + 4)) {
        F_00aa3ff0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG,100,0);
      }
    }
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x68))) = 0;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx GEN_EDX_ARG);
      if (bVar2 != 0) {
        bVar2 = F_00ae8560(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
        if (bVar2 == 0) {
          puVar4 = (undefined4 *)F_00aeff30(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
          *(undefined4 *)&REFG(undefined, 0x14c0ad0) = *puVar4;
          *(undefined4 *)&REFG(undefined, 0x14c0ad4) = puVar4[1];
          *(undefined4 *)&REFG(undefined, 0x14c0ad8) = puVar4[2];
          REFG(undefined1, 0x14c0bc0) = 1;
        }
      }
    }
    F_00af5d10(this GEN_EDX_ARG);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return;
}

/* ref: FUN_00afaa40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afaa40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafaa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    F_00aefee0(this GEN_EDX_FWD);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return;
}

/* ref: FUN_00afaa70 */
GEN_NOFRAME byte GEN_THISCALL F_00afaa70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafaa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float fVar6;
  
  fVar6 = *(float *)&REFG(undefined, 0x10ebbcc);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 == 1) {
    if (!(*(float *)&REFG(undefined, 0x10ebc7c) <= *(float *)((int)this + 0x20))) {
      return 0;
    }
    *(undefined4 *)((int)this + 0x14) = 3;
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1339b98);
    fVar6 = *(float *)((int)this + 0x5c);
    if (GEN_ISNAN(fVar6) == (GEN_ISNAN(fVar6) || fVar6 == 0.0)) {
      (*(float *)(gen_frame + 0x18)) = fVar6;
      *(undefined4 *)((int)this + 0x5c) = 0;
    }
    F_00ae7a70(this GEN_EDX_FWD,(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x18));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar2 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae0)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae8)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar6 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar4 = GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || (float10)fVar6 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    fVar5 = (float10)*(float *)((int)this + 0x18) - (float10)*(double *)&REFG(undefined, 0x10ec4c8);
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 5) {
        return 0;
      }
      if (!(*(float *)&REFG(undefined, 0x10ebc7c) <= *(float *)((int)this + 0x20))) {
        return 0;
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      F_00aefee0(this GEN_EDX_ARG);
      goto LAB_00afac98;
    }
    *(undefined4 *)((int)this + 0x14) = 4;
    F_00ae7a70(this GEN_EDX_ARG,fVar6);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x28));
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar3 + 4);
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(float *)((int)this + 0x50) = (*(float *)(gen_frame + 0x18));
    if (((*(int *)((int)this + 0x10) != 0) &&
        (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
       (bVar2 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar2 != 0)) {
      (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae0)));
      (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0ae8)));
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      fVar6 = F_004bd280(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      bVar4 = GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)0);
      if (bVar4 == (bVar4 || (float10)fVar6 == (float10)0)) {
        F_004bd580(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)((int)this + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0x38) = (*(undefined4 *)(gen_frame + 0x8));
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    fVar5 = (float10)*(float *)((int)this + 0x18);
  }
  *(float *)((int)this + 0x20) = (float)fVar5;
LAB_00afac98: ;
  (*(byte *)(gen_frame + 0x1f)) = 1;
  F_00afaa70(this GEN_EDX_ARG);
  return (*(byte *)(gen_frame + 0x1f));
}

/* ref: FUN_00afacb0 */
GEN_NOFRAME uint GEN_THISCALL F_00afacb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafacb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    (*(bool *)(gen_frame + 0x1f)) = *(int *)((int)this + 0x14) == 5;
    if ((*(char *)((int)this + 0xa6) == '\0') ||
       (iVar2 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
      iVar2 = (int)this + 0x80;
    }
    F_00a65a30(this GEN_EDX_FWD,(uint)!(*(float *)&REFG(undefined, 0x1088114) <= *(float *)(iVar2 + 0x10)));
    if ((*(bool *)(gen_frame + 0x1f)) == false) {
      if (param_1 == (undefined4 *)0x0) {
        F_00af98d0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,REFG(float, 0x10ebbf0),REFG(float, 0x10ebbf0),1,0,0,
                     (float)(float10)0);
      }
      else {
        iVar2 = *(int *)((int)this + 0x10);
        (*(undefined4 *)(gen_frame + 0x18)) = *param_1;
        puVar3 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)(iVar2 + 0x10) GEN_EDX_ARG);
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
        (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
        (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x18));
        F_00aec9f0(iVar2 GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
    uVar4 = *(uint *)((int)this + 0x10);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0x10) != 0)) {
      bVar1 = F_00a9f620(*(int *)(uVar4 + 0x10) GEN_EDX_ARG);
      uVar4 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar4 = F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,2,0);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00afae00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afae00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafae00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)(iVar1 + 100) == '\0')) {
      *(undefined1 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined1 *)((int)this + 0x1c) = 0;
      F_00af9b10(this GEN_EDX_FWD);
    }
    if ((*(char *)((int)this + 9) != '\0') && (*(char *)(iVar1 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 9) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
      F_00aea850(this GEN_EDX_ARG);
      return;
    }
  }
  return;
}

/* ref: FUN_00afaf00 */
GEN_NOFRAME uint GEN_THISCALL F_00afaf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafaf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float * pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int in_ecx;
  undefined * pvVar5;
  byte bVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar7;
  undefined3 extraout_var_01 = 0;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  uVar7 = *(uint *)((int)this + 0x10);
  if ((uVar7 != 0) && (*(int *)(uVar7 + 0x10) != 0)) {
    bVar6 = F_00a9f620(*(int *)(uVar7 + 0x10) GEN_EDX_FWD);
    uVar7 = CONCAT31(extraout_var,bVar6);
    if (bVar6 != 0) {
      return uVar7;
    }
  }
  if (*(int *)((int)this + 0x14) != 4) {
    return uVar7;
  }
  uVar7 = 0;
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00afaf65: ;
    if (*(int *)((int)this + 0x14) == 0) goto LAB_00afb01f;
    if (*(char *)((int)this + 0x5b) == '\0') {
      (*(undefined4 *)(gen_frame + 0xc0)) = *(undefined4 *)((int)this + 0xb0);
      (*(float *)(gen_frame + 0xc4)) = *(float *)((int)this + 0xb4);
      (*(undefined4 *)(gen_frame + 0xc8)) = *(undefined4 *)((int)this + 0xb8);
      if (*(char *)((int)this + 0xa6) == '\0') {
        return uVar7;
      }
      fVar4 = *(float *)((int)this + 0x18);
      (*(float *)(gen_frame + 0xdc)) = fVar4;
      (*(float *)(gen_frame + 0xd8)) = *(float *)((int)this + 200);
      fVar8 = (float10)*(float *)((int)this + 200);
      fVar9 = (float10)fVar4;
      pfVar1 = (float *)((int)this + 0x20);
      if ((!GEN_ISNAN(REFG(float, 0x10ebc30)) && !GEN_ISNAN(*pfVar1)) &&
          (!(REFG(float, 0x10ebc30) < *pfVar1) && REFG(uint, 0x10ebc30) != *pfVar1)) {
        return uVar7;
      }
      if (!(fVar8 <= fVar9)) {
        return uVar7;
      }
      fVar8 = fVar8 - fVar9;
      if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*(double *)&REFG(undefined, 0x1094878))) &&
          !(fVar8 < (float10)*(double *)&REFG(undefined, 0x1094878))) {
        return uVar7;
      }
      uVar7 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
      if ((float10)*(float *)&REFG(undefined, 0x1339b74) + (float10)(*(float *)(gen_frame + 0xc4)) < (float10)*(float *)(uVar7 + 4)) {
        return uVar7;
      }
      goto LAB_00afb066;
    }
  }
  else {
    in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
    uVar7 = 0;
    if (in_ecx == 0) goto LAB_00afaf65;
    bVar6 = F_00a9f620(in_ecx GEN_EDX_ARG);
    uVar7 = CONCAT31(extraout_var_00,bVar6);
    if (bVar6 == 0) goto LAB_00afaf65;
LAB_00afb01f: ;
    if (*(char *)((int)this + 0x5b) == '\0') {
      return uVar7;
    }
  }
  fVar4 = *(float *)((int)this + 100);
  uVar2 = *(undefined4 *)((int)this + 0x60);
  uVar3 = *(undefined4 *)((int)this + 0x68);
  (*(float *)(gen_frame + 0xc4)) = fVar4;
  fVar10 = gen_bits2f(param_1[1]);
  (*(undefined4 *)(gen_frame + 0xc0)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar3;
  if (!((float10)fVar10 <= (float10)fVar4)) {
    return uVar7;
  }
  *param_1 = uVar2;
  param_1[1] = (undefined4)gen_fl2bits(fVar4);
  param_1[2] = uVar3;
LAB_00afb066: ;
  F_00afa950(this GEN_EDX_ARG);
  pvVar5 = *(undefined * PTR32 *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined2 *)(gen_frame + 0x90)) = 0;
  (*(undefined1 *)(gen_frame + 0x92)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined2 *)(gen_frame + 0xb0)) = 0;
  (*(undefined1 *)(gen_frame + 0xb2)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  fVar10 = F_00ae9520(pvVar5 GEN_EDX_ARG);
  fVar4 = (*(float *)(gen_frame + 0xdc));
  (*(float *)(gen_frame + 0xd8)) = fVar10;
  pvVar5 = *(undefined * PTR32 *)((int)this + 0x10);
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0xdc)) + 0)) = 0;
  (*(float *)(gen_frame + 0xdc)) = gen_bits2f((uint)gen_fl2bits(fVar4) & 0xffffff00);
  bVar6 = F_00ae96c0(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0);
  if (bVar6 != 0) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0xdc)) + 0)) = 1;
    (*(float *)(gen_frame + 0xdc)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0xdc)), 1, 3),1));
    (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) + (float10)*(double *)&REFG(undefined, 0x10944e0));
  }
  bVar6 = F_00af6450(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0xdc)),(*(float *)(gen_frame + 0xd8)),REFG(float, 0x10ebbf0),
                       &(*(undefined4 *)(gen_frame + 0x30)),1,REFG(float, 0x10ebd3c),&(*(float *)(gen_frame + 0xc4)),0,(uint)gen_fl2bits((*(float *)(gen_frame + 0xdc))));
  if (bVar6 == 0) {
    bVar6 = F_00ae7ad0(this GEN_EDX_ARG);
    if (bVar6 == 0) {
      return CONCAT31(extraout_var_01,bVar6);
    }
    param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4)));
    return CONCAT31(extraout_var_01,bVar6);
  }
  bVar6 = F_00ae7ad0(this GEN_EDX_ARG);
  if (bVar6 != 0) {
    param_1[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xdc)));
  }
  uVar7 = F_00aed0a0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x30)));
  return uVar7;
}

/* ref: FUN_00afb1f0 */
GEN_NOFRAME uint GEN_THISCALL F_00afb1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafb1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(param_2[1]);
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(char *)(gen_frame + 0xaf)) = '\0';
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = uVar1;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x10ec490));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  F_00af9d80(this GEN_EDX_FWD,param_1,&(*(undefined4 *)(gen_frame + 0x90)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)),param_4,&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),0);
  if ((REFG(char, 0x14c0ba4) != '\0') && (*(int *)((int)this + 0x14) == 4)) {
    uVar4 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    fVar2 = ((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(uVar4 + 4) - (float10)(*(float *)(gen_frame + 0x94))))))));
    (*(float *)(gen_frame + 0xa8)) = fVar2;
    fVar5 = (float10)fVar2;
    if ((fVar5 <= (float10)*(float *)&REFG(undefined, 0x10ebd18)) &&
       ((fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) *
                        (float10)*(float *)&REFG(undefined, 0x1339b78)))), (*(float *)(gen_frame + 0xa8)) = fVar2,
        fVar5 <= (float10)fVar2 &&
        (fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) -
                        (float10)*(float *)((int)this + 0x24)))), (*(float *)(gen_frame + 0xa8)) = fVar2,
        (float10)REFG(float, 0x10ebc30) <= (float10)fVar2)))) {
      (*(float *)(gen_frame + 0xa8)) = gen_bits2f((uint)REFG(undefined1, 0x14c0ba6));
      if ((double)REFG(undefined1, 0x14c0ba6) < *(double *)&REFG(undefined, 0x10944e0)) {
        REFG(undefined1, 0x14c0ba6) = REFG(undefined1, 0x14c0ba6) + 1;
      }
      goto LAB_00afb423;
    }
  }
  if (REFG(undefined1, 0x14c0ba6) != 0) {
    REFG(undefined1, 0x14c0ba6) = 0;
  }
LAB_00afb423: ;
  bVar3 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,param_1);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    uVar4 = F_00aec9f0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x90)));
  }
  if ((*(char *)(gen_frame + 0xaf)) != '\0') {
    F_00afa950(this GEN_EDX_ARG);
    REFG(char, 0x14c0ba4) = '\x01';
    uVar4 = F_00aed0a0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x1fc)) ^ (uint)(uint)(gen_frame + 0x200) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00afb490 */
GEN_FRAME uint GEN_THISCALL F_00afb490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  F_00a9f640(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_FWD);
  if (*(int *)((int)this + 0x14) == 0) goto LAB_00afb539;
  if (*(int *)((int)this + 0x14) != 5) {
    uVar3 = *(uint *)((int)this + 0x10);
    if ((uVar3 != 0) && (*(int *)(uVar3 + 0x10) != 0)) {
      bVar2 = F_00a9f620(*(int *)(uVar3 + 0x10) GEN_EDX_ARG);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        if (!(*(double *)&REFG(undefined, 0x10944e0) <= (double)REFG(undefined1, 0x14c0ba6))) {
          return uVar3;
        }
        goto LAB_00afb4f1;
      }
    }
    if (*(char *)((int)this + 0x70) == '\0') {
      return uVar3;
    }
  }
LAB_00afb4f1: ;
  if ((*(char *)((int)this + 0x70) == '\0') && (iVar1 = *(int *)((int)this + 0x14), iVar1 != 0)) {
    *(undefined4 *)((int)this + 0x14) = 0;
    F_00aefee0(this GEN_EDX_ARG);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     (bVar2 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar2 != 0)) {
    REFG(undefined1, 0x14c0ba6) = 0;
  }
LAB_00afb539: ;
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     ((bVar2 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar2 != 0 &&
      (F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x20,1), *(char *)((int)this + 0x5b) != '\0')))) {
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x2d,1);
  }
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
     (bVar2 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar2 != 0)) {
    *(byte *)((int)this + 0x5a) =
         *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x8e))) >> 6 & 1;
  }
  uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar3 + 4);
  return uVar3;
}

/* ref: FUN_00afb5c0 */
GEN_NOFRAME uint GEN_THISCALL F_00afb5c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00afb490(this GEN_EDX_FWD);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 1) {
    *(undefined4 *)((int)this + 0x14) = 1;
    uVar2 = F_00af5cb0(this GEN_EDX_ARG);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00afb5f0 */
GEN_NOFRAME uint GEN_THISCALL F_00afb5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_00afb490(this GEN_EDX_FWD);
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 2) {
    *(undefined4 *)((int)this + 0x14) = 2;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx GEN_EDX_ARG);
      if (bVar2 != 0) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
    }
    *(undefined1 *)((int)this + 0x59) = 1;
    uVar3 = F_00af5cb0(this GEN_EDX_ARG);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00afb650 */
GEN_NOFRAME uint GEN_THISCALL F_00afb650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  
  F_00afb490(this GEN_EDX_FWD);
  uVar3 = *(uint *)((int)this + 0x10);
  *(undefined1 *)(uVar3 + 0x68) = 1;
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 2) {
    *(undefined4 *)((int)this + 0x14) = 2;
    if ((*(int *)((int)this + 0x10) != 0) &&
       (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
      bVar2 = F_00a9f620(in_ecx GEN_EDX_ARG);
      if (bVar2 != 0) {
        *(float *)&REFG(undefined, 0x14c0a7c) =
             (float)((float10)*(float *)&REFG(undefined, 0x14c0a7c) * (float10)*(double *)&REFG(undefined, 0x10919f0));
      }
    }
    *(undefined1 *)((int)this + 0x59) = 1;
    uVar3 = F_00af5cb0(this GEN_EDX_ARG);
    if (iVar1 != 5) {
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00afb6c0 */
GEN_FRAME uint GEN_THISCALL F_00afb6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(int *)((int)this + 0x14) != 0) && (*(char *)((int)this + 0x70) == '\0')) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0xec);
    F_00afacb0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  }
  if (*(char *)((int)this + 0x94) == '\0') {
    F_00afb490(this GEN_EDX_ARG);
    iVar1 = *(int *)((int)this + 0x14);
    if (iVar1 != 1) {
      *(undefined4 *)((int)this + 0x14) = 1;
      F_00af5cb0(this GEN_EDX_ARG);
      if (iVar1 != 5) {
        *(undefined4 *)((int)this + 0x20) = 0;
      }
    }
  }
  else {
    F_00afb5f0(this GEN_EDX_ARG);
  }
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined4 *)((int)this + 0xe0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xe0), REFG(float, 0x10ebbf0));
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = uVar2;
  *(undefined1 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0xcc) = 1;
  return 0;
}

/* ref: FUN_00afb7b0 */
GEN_FRAME uint GEN_THISCALL F_00afb7b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar5 != 0)) {
    bVar2 = F_00a9f620(iVar5 GEN_EDX_FWD);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  uVar3 = REFG(undefined4, 0x137104c);
  if ((*(char *)((int)this + 0xa6) == '\0') ||
     (uVar4 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
    uVar4 = (int)this + 0x80;
  }
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)(uVar4 + 0x10)) {
    if ((*(char *)((int)this + 0xa6) == '\0') ||
       (iVar5 = (int)this + 0xd0, *(char *)((int)this + 0xcc) == '\0')) {
      iVar5 = (int)this + 0x80;
    }
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(iVar5 + 0x10) - (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))));
    if ((float10)fVar1 <= (float10)0) {
      uVar3 = F_00afb6c0(this GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x90) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x90), REFG(float, 0x10ebbf0));
      return uVar3;
    }
    *(float *)(iVar5 + 0x10) = fVar1;
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00afb860 */
GEN_FRAME uint GEN_THISCALL F_00afb860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafb860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  byte bVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar5 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  *(undefined4 *)((int)this + 0x430) = *puVar5;
  *(undefined4 *)((int)this + 0x434) = uVar1;
  *(undefined4 *)((int)this + 0x438) = uVar2;
  *(float *)((int)this + 0x20c) = *(float *)((int)this + 0x208);
  if (*(int *)((int)this + 0x204) != 0) {
    *(float *)((int)this + 0x208) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x208)) + (float10)0)));
    *(float *)((int)this + 0x210) =
         ((float)GEN_TOF((((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                 (float10)*(float *)((int)this + 0x210)) + (float10)0)));
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x200) + 0x68))) != '\0') {
      *(float *)((int)this + 0x244) =
           ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) +
                  (float10)*(float *)((int)this + 0x244))));
    }
  }
  if (*(int *)((int)this + 0x10) == 0) {
LAB_00afb924: ;
    if (*(char *)((int)this + 0x1cc) == '\0') {
      if (*(int *)((int)this + 0x10) != 0) {
        bVar4 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
        if ((bVar4 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00afb94f;
      }
      if (*(char *)((int)this + 0x1cd) == '\0') goto LAB_00afb98b;
    }
  }
  else {
    bVar4 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
    if ((bVar4 == 0) || (REFG(char, 0x14c0a64) == '\0')) goto LAB_00afb924;
  }
LAB_00afb94f: ;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) + (float10)*(float *)((int)this + 0x80)
                 )));
  *(float *)((int)this + 0x80) = fVar3;
  if ((float10)REFG(float, 0x10ec4c0) < (float10)fVar3) {
    *(float *)((int)this + 0x80) = GEN_FLT_TO(*(float *)((int)this + 0x80), REFG(float, 0x10ec4c0));
  }
LAB_00afb98b: ;
  if (*(int *)((int)this + 0x10) != 0) {
    bVar4 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
    if (bVar4 != 0) {
      F_00af2ad0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
    }
  }
  uVar6 = *(uint *)((int)this + 0x1c8);
  if (uVar6 != 0) {
    if ((*(char *)((int)this + 0x1cc) != '\0') && (*(char *)(uVar6 + 100) == '\0')) {
      *(undefined1 *)((int)this + 0x1cc) = 0;
      *(undefined4 *)((int)this + 0x1dc) = 0;
      *(undefined1 *)((int)this + 0x1e0) = 0;
      *(undefined4 *)((int)this + 0x1d0) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0;
      F_00af9b10((undefined *)((int)this + 0x1c4) GEN_EDX_ARG);
    }
    if ((*(char *)((int)this + 0x1cd) != '\0') && (*(char *)(uVar6 + 0x65) == '\0')) {
      *(undefined1 *)((int)this + 0x1cd) = 0;
      *(undefined4 *)((int)this + 0x1d4) = 0;
      uVar6 = F_00aea850((undefined *)((int)this + 0x1c4) GEN_EDX_ARG);
    }
  }
  *(undefined4 *)((int)this + 0x450) = 0;
  return uVar6;
}

/* ref: FUN_00afba90 */
GEN_NOFRAME uint GEN_THISCALL F_00afba90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafba90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00afb650((undefined *)((int)this + 0x1f0) GEN_EDX_ARG);
      return uVar2;
    }
  }
  return in_EAX;
}

/* ref: FUN_00afbac0 */
GEN_NOFRAME uint GEN_THISCALL F_00afbac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafbac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar2);
    if ((bVar2 != 0) && ((REFG(char, 0x14c0a64) != '\0' || (REFG(char, 0x14c0a65) != '\0')))) {
      in_EAX = F_00afff50(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
    }
  }
  if ((*(char *)((int)this + 0x1cc) != '\0') || (*(char *)((int)this + 0x1cd) != '\0')) {
    *(undefined1 *)((int)this + 0x1cc) = 0;
    *(undefined4 *)((int)this + 0x1d0) = 0;
    *(undefined4 *)((int)this + 0x1d8) = 0;
    *(undefined4 *)((int)this + 0x1dc) = 0;
    *(undefined1 *)((int)this + 0x1e0) = 0;
    F_00af9b10((undefined *)((int)this + 0x1c4) GEN_EDX_ARG);
    *(undefined1 *)((int)this + 0x1cd) = 0;
    *(undefined4 *)((int)this + 0x1d4) = 0;
    in_EAX = F_00aea850((undefined *)((int)this + 0x1c4) GEN_EDX_ARG);
  }
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x65) = 0;
  *(undefined1 *)((int)this + 0x67) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x80) = uVar1;
  return in_EAX;
}

/* ref: FUN_00afbbd0 */
GEN_FRAME uint GEN_THISCALL F_00afbbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafbbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00afbac0(this GEN_EDX_FWD);
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && ((char)param_1 != '\0')) {
      uVar2 = F_00aee2a0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00afbc10 */
GEN_FRAME uint GEN_THISCALL F_00afbc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafbc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined1 * puVar4;
  
  *param_1 = 0;
  puVar4 = param_1;
  if (*(char *)((int)this + 0x2b) != '\0') {
    iVar1 = *(int *)((int)this + 0x10);
    puVar4 = *(undefined1 * PTR32 *)(iVar1 + 0x204);
    if (((((puVar4 == (undefined1 *)0x0) || (puVar4 == &REFG(undefined, 0x5))) &&
         (*(char *)((int)this + 0x1a) == '\0')) &&
        ((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar1 + 0x1cc) == '\0')))) &&
       ((*(char *)(iVar1 + 0x1cd) == '\0' && (*(char *)((int)this + 0x273) == '\0')))) {
      bVar3 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_FWD,0x30);
      puVar4 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if ((bVar3 != 0) && (iVar1 = *(int *)((int)this + 0x10), *(char *)(iVar1 + 0x359) == '\0')) {
        puVar4 = (undefined1 *)F_00afb490((undefined *)(iVar1 + 0x1f0) GEN_EDX_ARG);
        iVar2 = *(int *)(iVar1 + 0x204);
        if (iVar2 != 1) {
          *(undefined4 *)(iVar1 + 0x204) = 1;
          puVar4 = (undefined1 *)F_00af5cb0((undefined *)(iVar1 + 0x1f0) GEN_EDX_ARG);
          if (iVar2 != 5) {
            *(undefined4 *)(iVar1 + 0x210) = 0;
          }
        }
        *param_1 = 1;
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00afbcd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00afbcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xafbcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined1 * param_5 = (undefined1 *)(uintptr_t)gen_a5;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a6;
  undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a7;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  float10 fVar8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  F_00aef9b0(this GEN_EDX_FWD,param_1);
  cVar7 = (char)param_1;
  if ((*(char *)((int)this + 0x14) == '\0') && (cVar7 != '\0')) {
    *(undefined1 *)((int)this + 0x14) = 1;
  }
  if ((*(char *)((int)this + 0x15) == '\0') && ((char)param_2 != '\0')) {
    *(undefined1 *)((int)this + 0x15) = 1;
  }
  F_00af4710(this GEN_EDX_ARG,param_1,param_2);
  if (cVar7 != '\0') {
    fVar8 = F_00aeb260(*(float *)((int)this + 0xd0));
    uVar6 = F_00ae9230(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(float)fVar8,param_4);
    *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6c))) = uVar6;
  }
  F_00aef8e0(this GEN_EDX_ARG,param_1,param_2);
  if ((*(char *)((int)this + 0x273) != '\0') ||
     (bVar4 = F_00a4a790(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x30), bVar4 == 0)) {
    iVar2 = *(int *)((int)this + 0x10);
    iVar3 = *(int *)(iVar2 + 0x204);
    if (((iVar3 == 0) || ((iVar3 == 5 || (iVar3 == 1)))) &&
       ((*(char *)((int)this + 0x1a) == '\0' &&
        ((((*(char *)((int)this + 0x29) == '\0' && (*(char *)(iVar2 + 0x1cc) == '\0')) &&
          (*(char *)(iVar2 + 0x1cd) == '\0')) && (*(char *)(iVar2 + 0x359) == '\0')))))) {
      bVar4 = F_00aea660(this GEN_EDX_ARG);
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      F_00afbac0(this_00 GEN_EDX_ARG);
      iVar2 = *(int *)((int)this_00 + 0x10);
      if (((iVar2 != 0) && (bVar5 = F_00a9f620(iVar2 GEN_EDX_ARG), bVar5 != 0)) && (bVar4 == 0)) {
        F_00aee2a0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,0);
      }
    }
  }
  if ((*(char *)(iVar1 + 100) != '\0') && (param_5 != (undefined1 *)0x0)) {
    *param_5 = 1;
  }
  if ((*(char *)(iVar1 + 0x65) != '\0') && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  if (((char)param_3 != '\0') && (param_7 != (undefined1 *)0x0)) {
    *param_7 = 1;
  }
  if (((cVar7 != '\0') || ((char)param_2 != '\0')) || (*(char *)((int)this + 0x2b) != '\0')) {
    F_00a9fd20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG,(uint)*(byte *)(iVar1 + 100),
                 (uint)*(byte *)(iVar1 + 0x65),param_3,param_1,param_2,
                 (uint)*(byte *)((int)this + 0x2b));
  }
  if (*(int *)(iVar1 + 0x60) == 0) {
    *(undefined4 *)(iVar1 + 0x60) = 1;
  }
  return;
}

/* ref: FUN_00afbe90 */
GEN_NOFRAME uint GEN_THISCALL F_00afbe90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafbe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x10);
  iVar1 = *(int *)(uVar3 + 0x204);
  if (((iVar1 == 0) || (((iVar1 != 3 && (iVar1 != 4)) && (iVar1 != 2)))) ||
     (*(char *)(uVar3 + 0x24b) != '\0')) {
    (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x94)) = param_2[1];
    (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
    (*(char *)(gen_frame + 0xae)) = '\0';
    (*(char *)(gen_frame + 0xaf)) = '\0';
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined2 *)(gen_frame + 0x60)) = 0;
    (*(undefined1 *)(gen_frame + 0x62)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined2 *)(gen_frame + 0x80)) = 0;
    (*(undefined1 *)(gen_frame + 0x82)) = 0;
    (*(undefined4 *)(gen_frame + 0x84)) = 0;
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_FWD,param_1);
    if (bVar2 == 0) {
      F_00af6bb0(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x90)),param_2,&(*(char *)(gen_frame + 0xae)),&(*(char *)(gen_frame + 0xaf)),&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0);
    }
    bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x90)) GEN_EDX_ARG,param_1);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      F_00aec9f0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x90)));
      this_00 = *(undefined * PTR32 *)((int)this + 0x10);
      if ((*(char *)(gen_frame + 0xae)) != '\0') {
        uVar3 = F_00afb5f0((undefined *)((int)this_00 + 0x1f0) GEN_EDX_ARG);
        return uVar3;
      }
      if ((*(char *)(gen_frame + 0xaf)) != '\0') {
        uVar3 = F_00afba90(this_00 GEN_EDX_ARG);
        return uVar3;
      }
      uVar3 = F_00aed0a0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  return uVar3;
}

/* ref: FUN_00afc050 */
GEN_NOFRAME uint GEN_THISCALL F_00afc050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafc050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 uVar7;
  int * piVar8;
  double dVar9;
  byte bVar10;
  float * pfVar11;
  float * pfVar12;
  float * extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  
  iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  if ((iVar4 != 0) && (bVar10 = F_00a9f620(iVar4 GEN_EDX_FWD), bVar10 != 0)) {
    pvVar5 = *(undefined * PTR32 *)((int)this + 4);
    F_00afbac0(pvVar5 GEN_EDX_ARG);
    iVar4 = *(int *)((int)pvVar5 + 0x10);
    if ((iVar4 != 0) && (bVar10 = F_00a9f620(iVar4 GEN_EDX_ARG), bVar10 != 0)) {
      F_00aee2a0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,0);
    }
  }
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x33)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined1 *)(gen_frame + 0x35)) = 0;
  (*(undefined1 *)(gen_frame + 0x36)) = 0;
  (*(undefined1 *)(gen_frame + 0x38)) = 0;
  if (param_4 != 0) {
    F_00ae5a80(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_4);
  }
  pfVar11 = param_1;
  if (param_1 == (float *)0x0) {
    pfVar11 = &REFG(float, 0x1375ac0);
  }
  (*(float *)(gen_frame + 0x60)) = *pfVar11;
  (*(float *)(gen_frame + 0x64)) = pfVar11[1];
  (*(float *)(gen_frame + 0x68)) = pfVar11[2];
  if (param_2 == (float *)0x0) {
    (*(float *)(gen_frame + 0x88)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x7c)) = *param_2;
    fVar17 = F_00aeb260(*param_2);
    (*(float *)(gen_frame + 0x88)) = (float)fVar17;
  }
  (*(char *)(gen_frame + 0x8e)) = '\0';
  (*(char *)(gen_frame + 0x8f)) = '\0';
  if (param_1 != (float *)0x0) {
    pfVar11 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x40)) = *pfVar11;
    (*(float *)(gen_frame + 0x44)) = pfVar11[1];
    (*(float *)(gen_frame + 0x48)) = pfVar11[2];
    bVar10 = F_0054ccb0(&(*(float *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x60)));
    if (bVar10 == 0) {
      (*(char *)(gen_frame + 0x8e)) = '\x01';
    }
  }
  if ((param_2 != (float *)0x0) &&
     (fVar17 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) + 0xb0))),
     bVar15 = GEN_ISNAN(fVar17) || GEN_ISNAN((float10)(*(float *)(gen_frame + 0x88))),
     bVar15 == (bVar15 || fVar17 == (float10)(*(float *)(gen_frame + 0x88))))) {
    (*(char *)(gen_frame + 0x8f)) = '\x01';
  }
  iVar4 = *(int *)((int)this + 4);
  pfVar11 = (float *)(iVar4 + 0x20);
  pfVar12 = (float *)F_00a5feb0(*(undefined * PTR32 *)(iVar4 + 0x10) GEN_EDX_ARG);
  fVar14 = *pfVar12;
  iVar6 = *(int *)((int)this + 4);
  (*(float *)(gen_frame + 0x50)) = fVar14;
  fVar1 = pfVar12[1];
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar2 = pfVar12[2];
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar3 = *((float *)GEN_TOP((*(int *)(iVar6 + 0x10) + 0xb0)));
  (*(float *)(gen_frame + 0x7c)) = fVar3;
  pfVar12 = &(*(float *)(gen_frame + 0x50));
  if ((*(char *)(gen_frame + 0x8e)) == '\0') {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
  }
  else {
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)fVar14);
    (*(float *)(gen_frame + 0x40)) = fVar14;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x44)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)fVar2);
    (*(float *)(gen_frame + 0x48)) = fVar2;
    (*(float *)(gen_frame + 0x50)) = fVar14;
    (*(float *)(gen_frame + 0x54)) = fVar1;
    (*(float *)(gen_frame + 0x58)) = fVar2;
  }
  (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x58));
  if ((*(char *)(gen_frame + 0x8f)) == '\0') {
    (*(float *)(gen_frame + 0x84)) = 0.0;
  }
  else {
    fVar14 = (float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)fVar3);
    (*(float *)(gen_frame + 0x80)) = fVar14;
    fVar17 = F_00aeb260(fVar14);
    (*(float *)(gen_frame + 0x84)) = (float)fVar17;
    pfVar12 = extraout_EAX;
  }
  if ((*(char *)(gen_frame + 0x8e)) != '\0') {
    if ((char)(*(undefined2 *)(gen_frame + 0x30)) == '\0') {
      *(undefined1 *)(iVar4 + 0x66) = (*(undefined1 *)(gen_frame + 0x35));
      *(undefined1 *)(iVar4 + 0x3d) = (*(undefined1 *)(gen_frame + 0x33));
      *(undefined1 *)(iVar4 + 0x69) = (*(undefined1 *)(gen_frame + 0x36));
    }
    *pfVar11 = (*(float *)(gen_frame + 0x60));
    *(float *)(iVar4 + 0x24) = (*(float *)(gen_frame + 0x64));
    *(float *)(iVar4 + 0x28) = (*(float *)(gen_frame + 0x68));
    *(undefined1 *)(iVar4 + 0x30) = 0;
    if ((char)(*(undefined2 *)(gen_frame + 0x30)) == '\0') {
      fVar14 = (float)((float10)(*(float *)(gen_frame + 0x48)) * (float10)(*(float *)(gen_frame + 0x48)) + (float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x40))
                      );
      (*(float *)(gen_frame + 0x80)) = fVar14;
      fVar14 = ((float)GEN_TOF(SQRT((float10)fVar14)));
      (*(float *)(gen_frame + 0x80)) = fVar14;
      if (!((float10)fVar14 <= (float10)*(float *)&REFG(undefined, 0x10ebbe8))) {
        *(undefined1 *)(iVar4 + 100) = 1;
        if (*(char *)((int)this + 8) == '\0') {
          *(undefined1 *)((int)this + 8) = 1;
        }
        pvVar5 = *(undefined * PTR32 *)((int)this + 4);
        *(float *)((int)this + 0xc) = fVar14;
        pfVar12 = (float *)F_00af20e0(pvVar5 GEN_EDX_ARG,pfVar11,param_4);
        goto LAB_00afc3b7;
      }
      (*(float *)(gen_frame + 0x80)) = *(float *)((int)this + 4);
      uVar13 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)gen_fl2bits(*(float *)((int)this + 4)) + 0x10))) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x54)) = gen_bits2f(*(undefined4 *)(uVar13 + 4));
      (*(float *)(gen_frame + 0x58)) = gen_bits2f(*(undefined4 *)(uVar13 + 8));
      (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x60));
      F_00aec9f0((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x80))) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x50)));
      pfVar12 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x80))) + 0x10) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x50)) = *pfVar12;
      (*(float *)(gen_frame + 0x54)) = pfVar12[1];
      (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x68));
      pfVar12 = &(*(float *)(gen_frame + 0x50));
      fVar14 = (*(float *)(gen_frame + 0x80));
    }
    else {
      pfVar12 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x50)) = *pfVar12;
      (*(float *)(gen_frame + 0x54)) = pfVar12[1];
      (*(float *)(gen_frame + 0x58)) = pfVar12[2];
      bVar10 = F_0054ccb0(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x60)));
      pfVar12 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar10)));
      if (bVar10 != 0) goto LAB_00afc3b7;
      fVar14 = *(float *)((int)this + 4);
      pfVar12 = &(*(float *)(gen_frame + 0x60));
    }
    pfVar12 = (float *)F_00aec9f0((undefined4)gen_fl2bits(fVar14) GEN_EDX_ARG,(uint)pfVar12);
  }
LAB_00afc3b7: ;
  if ((*(char *)(gen_frame + 0x8f)) != '\0') {
    *(float *)(iVar4 + 0x34) = (*(float *)(gen_frame + 0x88));
    if (((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x30)) + 1)) == '\0') &&
       ((*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x84))))), dVar9 = (double)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x84))))),
       (GEN_ISNAN(*(double *)&REFG(undefined, 0x10ec4d0)) || GEN_ISNAN(dVar9)) || *(double *)&REFG(undefined, 0x10ec4d0) < dVar9)) {
      *(undefined1 *)(iVar4 + 0x65) = 1;
      if (*(char *)((int)this + 9) == '\0') {
        *(undefined1 *)((int)this + 9) = 1;
      }
      uVar7 = *(undefined4 *)((int)this + 4);
      *(float *)((int)this + 0x10) = (*(float *)(gen_frame + 0x84));
      pfVar12 = (float *)F_00af2190(uVar7 GEN_EDX_ARG,(uint)pfVar11,param_4);
    }
    else {
      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
      fVar17 = ((float10)GEN_TOD(gen_bits2f(piVar8[0x2c])));
      fVar18 = (float10)(*(float *)(gen_frame + 0x88));
      bVar15 = GEN_ISNAN(fVar17) || GEN_ISNAN(fVar18);
      bVar16 = bVar15 || fVar17 == fVar18;
      pfVar12 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar12) >> 0x10),
                                  CONCAT11(bVar16 << 6 | bVar15 << 2 | 2U | !(fVar18 <= fVar17),
                                           (char)pfVar12))));
      if (bVar15 == bVar16) {
        pfVar12 = ((float *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x88))))));
      }
      *(undefined1 *)(iVar4 + 0x65) = 0;
    }
  }
  if (((*(char *)(gen_frame + 0x8e)) == '\0') || ((char)(*(undefined2 *)(gen_frame + 0x30)) != '\0')) {
    if (((*(char *)(gen_frame + 0x8f)) != '\0') && ((*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x30)) + 1)) == '\0')) {
      pfVar12 = (float *)F_00aea8c0(this GEN_EDX_ARG,pfVar11,(*(float *)(gen_frame + 0x84)));
    }
  }
  else {
    fVar17 = ((float10)GEN_TOD(atan2((float10)(*(float *)(gen_frame + 0x40)),(float10)(*(float *)(gen_frame + 0x48)))));
    (*(float *)(gen_frame + 0x80)) = (float)fVar17;
    fVar17 = F_00aeb260((float)fVar17);
    (*(float *)(gen_frame + 0x80)) = (float)fVar17;
    fVar14 = (float)((float10)(float)fVar17 - (float10)(*(float *)(gen_frame + 0x7c)));
    (*(float *)(gen_frame + 0x7c)) = fVar14;
    fVar17 = F_00aeb260(fVar14);
    (*(float *)(gen_frame + 0x80)) = (float)fVar17;
    pfVar12 = (float *)F_00af80b0(this GEN_EDX_ARG,(uint)pfVar11,
                                    CONCAT13((*(undefined1 *)(gen_frame + 0x37)),
                                             CONCAT12((*(undefined1 *)(gen_frame + 0x36)),CONCAT11((*(undefined1 *)(gen_frame + 0x35)),(*(undefined1 *)(gen_frame + 0x34))))),
                                    (float)fVar17,-(uint)((*(char *)(gen_frame + 0x8f)) != '\0') & (uint)&(*(float *)(gen_frame + 0x84)),0);
  }
  if ((*(char *)(gen_frame + 0x8e)) == '\0') {
    *(uint *)(iVar4 + 0x60) = param_3;
    return param_3;
  }
  *(undefined1 *)((int)this + 0x1c) = (*(undefined1 *)(gen_frame + 0x38));
  *(uint *)(iVar4 + 0x60) = param_3;
  return (uint)pfVar12;
}

/* ref: FUN_00afc4f0 */
GEN_NOFRAME uint GEN_THISCALL F_00afc4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xafc4f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  memcpy(&gen_args[7], &gen_a7, sizeof gen_a7);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  float fVar2;
  int * piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 uVar6;
  byte bVar7;
  uint uVar8;
  float10 fVar9;
  double dVar10;
  
  (*(undefined4 *)(gen_frame + 0x60)) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  (*(float *)(gen_frame + 0x64)) = gen_bits2f((*(undefined4 * PTR32 *)&gen_args[1])[1]);
  (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
  if ((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x420))) != '\0')) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10)));
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar3;
    uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_FWD);
    if (((uVar8 == 2) || (uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG), uVar8 == 3)) &&
       (((*(uint *)&gen_args[4]) & 0x20) == 0)) {
      uVar4 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      (*(float *)(gen_frame + 0x78)) = 0.0;
      bVar7 = F_00af6450(uVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x78)),(float)(float10)0,REFG(float, 0x10ebbf0),0,0,REFG(float, 0x10ebbf0)
                           ,0,0,0);
      if (bVar7 != 0) {
        (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x78));
      }
    }
  }
  uVar8 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar5 = *(int *)(uVar8 + 0x10);
  if ((*(byte *)(iVar5 + 0x8e) & 0x40) == 0) {
    if (((*(uint *)&gen_args[5]) & 0x10) == 0) {
      if ((((((*(uint *)&gen_args[5]) & 8) == 0) && (*(char *)(uVar8 + 0x359) == '\0')) &&
          (*(char *)(uVar8 + 0x24b) == '\0')) && (uVar8 = F_00aa0f90(iVar5 GEN_EDX_ARG), (char)uVar8 == '\0'))
      {
        F_00af9030(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1f0 GEN_EDX_ARG,(*(uint *)&gen_args[4]),(*(uint *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x60)),(*(float *)&gen_args[6]));
        (*(bool *)(gen_frame + 0x7f)) = true;
        if (!((*(float *)&gen_args[6]) <= 0.0)) {
          (*(bool *)(gen_frame + 0x7f)) = false;
        }
        (*(bool *)(gen_frame + 0x7f)) = !GEN_ISNAN((*(float *)&gen_args[6])) && !(0.0 < (*(float *)&gen_args[6]));
        F_0054e820(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 2)) = (byte)(*(uint *)&gen_args[4]) >> 3 & 1;
        uVar6 = CONCAT12((byte)(*(uint *)&gen_args[4]) >> 3,(undefined2)(*(uint *)(gen_frame + 0x34)));
        (*(undefined1 *)(gen_frame + 0x30)) = (*(bool *)(gen_frame + 0x7f));
        (*(undefined1 *)(gen_frame + 0x31)) = (*(bool *)(gen_frame + 0x7f));
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = (byte)(*(uint *)&gen_args[4]) >> 2 & 1;
        (*(uint *)(gen_frame + 0x34)) = CONCAT31((int3)(CONCAT13((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 3)),uVar6) >> 8),(byte)(*(uint *)&gen_args[4]) >> 2) &
                   0xff01ff01;
        fVar2 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10))) + 0xb0)));
        (*(float *)(gen_frame + 0x74)) = fVar2;
        (*(byte *)(gen_frame + 0x33)) = (byte)(*(uint *)&gen_args[4]) >> 1 & 1;
        fVar2 = (float)((float10)(*(float *)&gen_args[2]) - (float10)fVar2);
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        F_00aeb260(fVar2);
        F_00ae9430(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)));
        F_0046f4a0(((float *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x40)));
        fVar9 = F_00aeb3c0(((float *)(gen_frame + 0x50))[0],(*(float *)(gen_frame + 0x58)));
        (*(float *)(gen_frame + 0x78)) = (float)fVar9;
        fVar2 = (float)((float10)(float)fVar9 - (float10)(*(float *)(gen_frame + 0x74)));
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        fVar9 = F_00aeb260(fVar2);
        (*(float *)(gen_frame + 0x78)) = (float)fVar9;
        if ((((byte)(*(uint *)(gen_frame + 0x34)) == '\0') && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != '\0')) &&
           (iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))), *(int *)(iVar5 + 0x6c) - 4U < 4)) {
          fVar2 = ((float)GEN_TOF(ABS((float10)(float)fVar9)));
          (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
          (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(float *)&REFG(undefined, 0x1339b50) *
                                   (float10)*(double *)&REFG(undefined, 0x1080228)))));
          if (((float10)(float)((float10)*(float *)&REFG(undefined, 0x1339b50) * (float10)*(double *)&REFG(undefined, 0x1080228)
                               ) < (float10)fVar2) &&
             (uVar8 = F_00ae9230(iVar5 GEN_EDX_ARG,(*(float *)&gen_args[3]),1), uVar8 == *(uint *)(iVar5 + 0x6c))) {
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34)) + 0)) = 1;
            (*(uint *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34)), 1, 3),1);
          }
        }
        (*(undefined4 *)(gen_frame + 0x28)) = 1;
        (*(undefined4 *)(gen_frame + 0x2c)) = 1;
        fVar2 = (float)((float10)(*(float *)&gen_args[6]) + (float10)*(double *)&REFG(undefined, 0x1094810));
        (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
        (*(float *)(gen_frame + 0x1c)) = fVar2;
        (*(float *)(gen_frame + 0x20)) = fVar2;
        if ((GEN_ISNAN((*(float *)&gen_args[7])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
            ((GEN_ISNAN((*(float *)&gen_args[7])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || (*(float *)&gen_args[7]) == *(float *)&REFG(undefined, 0x1088114)))
        {
          F_0046f4a0(((float *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x40)));
          dVar10 = F_0054cd20(((float *)(gen_frame + 0x50)) GEN_EDX_ARG);
          fVar2 = (float)dVar10;
          (*(float *)(gen_frame + 0x74)) = fVar2;
          fVar9 = (float10)fVar2;
          if ((float10)REFG(float, 0x10ebc4c) <= fVar9) {
            (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
            (*(float *)(gen_frame + 0x74)) = (*(float *)&gen_args[6]);
            if ((*(float *)&gen_args[6]) < REFG(float, 0x10ebc30)) {
              (*(float *)(gen_frame + 0x74)) = REFG(float, 0x10ebc30);
              (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 / (float10)REFG(float, 0x10ebc30)))));
            }
            else if ((GEN_ISNAN((*(float *)&gen_args[6])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
                     ((GEN_ISNAN((*(float *)&gen_args[6])) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
                     (*(float *)&gen_args[6]) == *(float *)&REFG(undefined, 0x1088114))) {
              (*(int * PTR32 *)(gen_frame + 0x70)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 / (float10)(*(float *)&gen_args[6])))));
            }
            if ((float10)(*(float *)&gen_args[7]) * (float10)*(double *)&REFG(undefined, 0x1094788) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x70)))))) {
              (*(undefined1 *)(gen_frame + 0x30)) = 1;
            }
          }
        }
        *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(float *)&gen_args[7]);
        F_00afc050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)),&(*(float *)&gen_args[2]),2,((undefined1 *)(gen_frame + 0xc)));
        uVar8 = (*(uint *)(gen_frame + 0x34));
        F_00aefe70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x20,(*(uint *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x78)),&(*(float *)&gen_args[3]));
        uVar8 = F_00af52f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar8,(*(float *)(gen_frame + 0x78)));
      }
      return uVar8;
    }
    uVar8 = F_00af08a0(uVar8 + 0x310 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)),(*(float *)&gen_args[2]));
    return uVar8;
  }
  uVar4 = (*(undefined4 * PTR32 *)&gen_args[1])[1];
  uVar1 = (*(undefined4 * PTR32 *)&gen_args[1])[2];
  *(undefined4 *)(iVar5 + 0x10) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  *(undefined4 *)(iVar5 + 0x14) = uVar4;
  *(undefined4 *)(iVar5 + 0x18) = uVar1;
  return uVar8;
}

/* ref: FUN_00afc8a0 */
GEN_NOFRAME uint GEN_THISCALL F_00afc8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafc8a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  (*(undefined4 *)(gen_frame + 0x40)) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 * PTR32 *)&gen_args[1])[1];
  (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
  if ((REFG(char, 0x14c0a40) != '\0') && (*((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x420))) != '\0')) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10)));
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    if (uVar5 != 2) {
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
      if (uVar5 != 3) goto LAB_00afc957;
    }
    uVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    bVar4 = F_00af6450(uVar2 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x5c)),(float)(float10)0,REFG(float, 0x10ebbf0),0,0,REFG(float, 0x10ebbf0),0
                         ,0,0);
    if (bVar4 != 0) {
      (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x5c));
    }
  }
LAB_00afc957: ;
  uVar5 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar3 = *(int *)(uVar5 + 0x10);
  if ((*(byte *)(iVar3 + 0x8e) & 0x40) != 0) {
    *(undefined4 *)(iVar3 + 0x10) = (*(undefined4 *)(gen_frame + 0x40));
    *(undefined4 *)(iVar3 + 0x14) = (*(undefined4 *)(gen_frame + 0x44));
    *(undefined4 *)(iVar3 + 0x18) = (*(undefined4 *)(gen_frame + 0x48));
    return uVar5;
  }
  F_00afacb0((undefined *)(uVar5 + 0x1f0) GEN_EDX_ARG,0);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x28)) = 3;
  (*(undefined4 *)(gen_frame + 0x2c)) = 3;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined2 *)(gen_frame + 0x34)) = 0;
  (*(undefined2 *)(gen_frame + 0x37)) = 0;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(float *)(gen_frame + 0x20)) = (*(float *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x3c)) = 2;
  (*(undefined1 *)(gen_frame + 0x36)) = 1;
  uVar5 = F_00afc050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)),&(*(undefined4 *)&gen_args[2]),3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  return uVar5;
}

/* ref: FUN_00afca20 */
GEN_NOFRAME uint GEN_THISCALL F_00afca20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  undefined * this_00;
  int * piVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined4 * puVar4;
  uint uVar5;
  undefined3 extraout_var_00 = 0;
  float10 fVar6;
  float fVar7;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) {
    bVar3 = F_00a9f620(iVar1 GEN_EDX_FWD);
    if (bVar3 != 0) {
      if (REFG(char, 0x14c0a40) == '\0') {
        return CONCAT31(extraout_var,bVar3);
      }
      uVar5 = *(uint *)((int)this + 0x10);
      if (*(char *)(uVar5 + 0x420) == '\0') {
        return uVar5;
      }
      if (*(int *)((int)this + 0x14) != 0) {
        return uVar5;
      }
    }
  }
  (*(char *)(gen_frame + 0xaf)) = '\0';
  if ((((*(int *)((int)this + 0x10) != 0) &&
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar1 != 0)) &&
      (bVar3 = F_00a9f620(iVar1 GEN_EDX_ARG), bVar3 != 0)) && (REFG(char, 0x14c0cc0) != '\0')) {
    (*(char *)(gen_frame + 0xaf)) = '\x01';
    REFG(char, 0x14c0cc0) = '\0';
  }
  uVar5 = *(uint *)((int)this + 0x10);
  this_00 = *(undefined * PTR32 *)(uVar5 + 0x10);
  if ((((this_00 == (undefined *)0x0) || ((*(byte *)((int)this_00 + 0x2dd3) & 2) == 0)) ||
      (*(char *)(uVar5 + 0x421) != '\0')) && ((*(char *)(gen_frame + 0xaf)) == '\0')) {
    return uVar5;
  }
  puVar4 = (undefined4 *)F_00a5feb0(this_00 GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0x10);
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar4;
  (*(float *)(gen_frame + 0x94)) = gen_bits2f(puVar4[1]);
  (*(undefined4 *)(gen_frame + 0x98)) = puVar4[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  if ((*(int *)(iVar1 + 0x10) == 0) || (bVar3 = F_00a9f620(*(int *)(iVar1 + 0x10) GEN_EDX_ARG), bVar3 == 0)) {
    fVar7 = 0.0;
    piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
    if (piVar2 == (int *)0x0) goto LAB_00afcbdf;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
    if (uVar5 != 1) {
      fVar7 = 0.0;
      goto LAB_00afcbdf;
    }
  }
  fVar7 = *((float *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0xc0)));
LAB_00afcbdf: ;
  (*(float *)(gen_frame + 0xa4)) = fVar7;
  fVar7 = F_00ae9520(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0xa8)) = fVar7;
  bVar3 = F_00af0bb0(&(*(undefined4 *)(gen_frame + 0x90)),fVar7,(*(float *)(gen_frame + 0xa4)),&(*(float *)(gen_frame + 0xa8)),REFG(float, 0x10ebbf0),0,0,&(*(undefined4 *)(gen_frame + 0x0)),0,0,0,0,3,0);
  if (bVar3 != 0) {
    fVar6 = (float10)(*(float *)(gen_frame + 0xa8));
    (*(float *)(gen_frame + 0xa8)) = (float)(fVar6 - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890));
    if (!((float10)(float)(fVar6 - (float10)(*(float *)(gen_frame + 0x94))) <=
         (float10)(float)((float10)REFG(float, 0x1339ba4) * (float10)REFG(double, 0x1094890)))) {
      bVar3 = F_00af0940(&(*(undefined4 *)(gen_frame + 0x0)));
      if (bVar3 != 0) {
        return CONCAT31(extraout_var_00,bVar3);
      }
      uVar5 = F_00afb650(this GEN_EDX_ARG);
      return uVar5;
    }
  }
  uVar5 = F_00afb5f0(this GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00afcc90 */
GEN_NOFRAME uint GEN_THISCALL F_00afcc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafcc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int in_ecx;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx GEN_EDX_FWD);
    if (bVar1 != 0) {
      bVar1 = F_0054ccb0(param_1 GEN_EDX_ARG,param_2);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) {
        if ((*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x359))) != '\0') &&
           (*(int *)((int)this + 0x14) == 0)) {
          uVar2 = F_00af55f0(this GEN_EDX_ARG,param_1,param_2);
          return uVar2;
        }
        uVar2 = F_00afb1f0(this GEN_EDX_ARG,param_1,param_2,param_2,0);
      }
      return uVar2;
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  F_00afaf00(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_00aec9f0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00afcd60 */
GEN_FRAME uint GEN_THISCALL F_00afcd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xafcd60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(param_1 + 0x10) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = F_00afc4f0(param_1 + 0x1c4 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return uVar2;
}

/* ref: FUN_00afcdc0 */
GEN_FRAME uint GEN_THISCALL F_00afcdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafcdc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00afc8a0(param_1 + 0x1c4 GEN_EDX_FWD,param_2,(undefined4)gen_fl2bits(param_3),param_4,param_5);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return uVar1;
}

/* ref: FUN_00afce30 */
GEN_FRAME unsigned int GEN_THISCALL F_00afce30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafce30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 uVar1;
  int in_ecx;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar6 = F_00aea5a0(this GEN_EDX_FWD,0);
    uVar5 = (*(uint *)(gen_frame + 0x14));
    uVar4 = (*(uint *)(gen_frame + 0x10));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    if (bVar6 != 0) {
      if (*(char *)((int)this + 0x22) != '\0') {
        (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffffff00;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 0;
        (*(uint *)(gen_frame + 0x10)) = uVar4 & 0xffffff00;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
        (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
        F_00aee340(this GEN_EDX_ARG,(uint)&(*(uint *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x10)));
        F_00af43e0(this GEN_EDX_ARG,(float)(float10)0,&REFG(float, 0x1375ac0),0,0,(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0xc)));
        in_ecx = *(int *)((int)this + 0x10);
        uVar1 = *(undefined1 *)(in_ecx + 100);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = uVar1;
        (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),uVar1);
        bVar6 = F_00ae8680(in_ecx GEN_EDX_ARG);
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar6;
        (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar6);
        F_00afbcd0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)),(*(uint *)(gen_frame + 0xc)),0,(*(uint *)(gen_frame + 0x10)),0,0,0);
        F_00af6310(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
        F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,0,1);
      }
      fVar2 = REFG(float, 0x10ebbf0);
      *(undefined1 *)((int)this + 0x22) = 0;
      *(float *)((int)this + 0x24) = fVar2;
      *(undefined1 *)((int)this + 0x28) = 0;
    }
  }
  return;
}

/* ref: FUN_00afcf00 */
GEN_NOFRAME uint GEN_THISCALL F_00afcf00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafcf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    in_EAX = F_00afbac0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
  }
  *(undefined1 *)((int)this + 0x19) = 0;
  if (*(char *)((int)this + 0x17) == '\0') {
LAB_00afcf35: ;
    uVar3 = in_EAX & 0xffffff00;
  }
  else {
    uVar3 = F_00b6afa0();
    in_EAX = 0;
    if (uVar3 == 0) goto LAB_00afcf35;
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    in_EAX = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) goto LAB_00afcf35;
    uVar3 = CONCAT31(extraout_var,1);
  }
  *(char *)((int)this + 0x17) = (char)uVar3;
  if ((char)uVar3 != '\0') {
    uVar4 = F_00b6afa0();
    uVar3 = 0;
    if (uVar4 != 0) {
      bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) goto LAB_00afcf58;
    }
    *(undefined1 *)((int)this + 0x17) = 0;
  }
LAB_00afcf58: ;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)((int)this + 0x1a) = 0;
  *(undefined1 *)((int)this + 0x275) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x108) = uVar1;
  *(undefined4 *)((int)this + 0x10c) = uVar1;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined1 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return uVar3;
}

/* ref: FUN_00afd000 */
GEN_NOFRAME uint GEN_THISCALL F_00afd000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined * this_00;
  bool bVar11;
  
  uVar9 = (*(uint *)(gen_frame + 0x49));
  uVar8 = (*(uint *)(gen_frame + 0x45));
  uVar7 = (*(uint *)(gen_frame + 0x3c));
  uVar6 = (*(uint *)(gen_frame + 0x30));
  uVar5 = (*(uint *)(gen_frame + 0x28));
  uVar4 = (*(uint *)(gen_frame + 0x24));
  uVar3 = (*(uint *)(gen_frame + 0x1c));
  uVar2 = (*(uint *)(gen_frame + 0x18));
  if (param_1 != (char *)0x0) {
    *param_1 = '\0';
  }
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (((iVar1 == 0) || (*(char *)(iVar1 + 0x1cc) != '\0')) || (*(char *)(iVar1 + 0x1cd) != '\0')) {
    return 0;
  }
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x45)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x45)) = uVar8 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x3c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = uVar7 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x49)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x49)) = uVar9 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x24)) = uVar4 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x30)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x30)) = uVar6 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x28)) = uVar5 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x18)) = uVar2 & 0xffffff00;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = uVar3 & 0xffffff00;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x40)) = REFG(float, 0x10ebbf0);
  F_00afbc10(this GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x1c)));
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  bVar10 = F_00a34970(this_00 GEN_EDX_ARG,0x130);
  if (bVar10 != 0) {
    bVar11 = *(char *)((int)this + 0x16) == '\0';
    *(bool *)((int)this + 0x16) = bVar11;
    if ((*(char *)((int)this + 0x17) != '\0') && (*(int *)((int)this + 0x164) != 4)) {
      *(bool *)((int)this + 0x1c) = bVar11;
    }
  }
  F_00af6a20(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x45)),&(*(uint *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x30)));
  F_00aeed60(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x34)),(uint)&(*(float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(uint *)(gen_frame + 0x45)),&(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),
               &(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)));
  F_00aee340(this GEN_EDX_ARG,(uint)&(*(uint *)(gen_frame + 0x49)),&(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x30)));
  F_00aef6e0(this GEN_EDX_ARG,(uint)&(*(uint *)(gen_frame + 0x45)));
  F_00ae9de0(this GEN_EDX_ARG);
  uVar3 = (*(uint *)(gen_frame + 0x45));
  uVar2 = (*(uint *)(gen_frame + 0x20));
  if (((GEN_ISNAN((*(float *)(gen_frame + 0x34))) == (GEN_ISNAN((*(float *)(gen_frame + 0x34))) || (*(float *)(gen_frame + 0x34)) == 0.0)) ||
      (GEN_ISNAN((*(float *)(gen_frame + 0x38))) == (GEN_ISNAN((*(float *)(gen_frame + 0x38))) || (*(float *)(gen_frame + 0x38)) == 0.0))) ||
     ((GEN_ISNAN((*(float *)(gen_frame + 0x2c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x2c))) || (*(float *)(gen_frame + 0x2c)) == 0.0) ||
      (((char)(*(uint *)(gen_frame + 0x3c)) != '\0' || ((char)(*(uint *)(gen_frame + 0x49)) != '\0')))))) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x20)) = uVar2 & 0xffffff00;
    F_00af3c30(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(uint)&(*(uint *)(gen_frame + 0x20)));
    F_00af6ad0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x20)),uVar3,(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x3c)),((undefined1 *)(gen_frame + 0x0)),
                 (*(uint *)(gen_frame + 0x49)),(*(float *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x28)),&(*(uint *)(gen_frame + 0x18)));
  }
  (*(char *)(gen_frame + 0x4f)) = '\0';
  (*(char *)(gen_frame + 0x4e)) = '\0';
  (*(undefined1 *)(gen_frame + 0x4d)) = 0;
  F_00afbcd0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x18)),(*(uint *)(gen_frame + 0x1c)),uVar3,&(*(char *)(gen_frame + 0x4f)),&(*(char *)(gen_frame + 0x4e)),&(*(undefined1 *)(gen_frame + 0x4d)));
  if (((char)(*(uint *)(gen_frame + 0x28)) != '\0') && ((char)(*(uint *)(gen_frame + 0x45)) != '\0')) {
    F_00af2210(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,*(float *)((int)this + 0xd0));
  }
  if (param_1 != (char *)0x0) {
    *param_1 = (*(char *)(gen_frame + 0x4f));
  }
  if (param_2 != (char *)0x0) {
    *param_2 = (*(char *)(gen_frame + 0x4e));
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = (*(undefined1 *)(gen_frame + 0x4d));
  }
  *(undefined2 *)((int)this + 0x174) = 0;
  *(undefined1 *)((int)this + 0x176) = 0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  if (((*(char *)(gen_frame + 0x4f)) == '\0') && ((*(char *)(gen_frame + 0x4e)) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00afd2a0 */
GEN_FRAME byte GEN_THISCALL F_00afd2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafd2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ab2840((uint)(byte)param_1);
  if (uVar1 != 0) {
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(uVar1 + 0x20);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(uVar1 + 0x24);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(uVar1 + 0x28);
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(uVar1 + 0x2c);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(uVar1 + 0x30);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(uVar1 + 0x50);
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(uVar1 + 0x54);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(uVar1 + 0x58);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(uVar1 + 0x18);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(uVar1 + 0x1c);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(uVar1 + 0x34);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(uVar1 + 0x38);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(uVar1 + 0x3c);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(uVar1 + 0x40);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(uVar1 + 0x44);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(uVar1 + 0x48);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(uVar1 + 0x4c);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(uVar1 + 0x14);
  }
  *(undefined1 *)((int)this + 0xb0) = 1;
  if ((byte)param_1 == 0) {
    F_00afca20(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f0))) GEN_EDX_ARG);
  }
  return uVar1 != 0;
}

/* ref: FUN_00afd360 */
GEN_NOFRAME uint GEN_THISCALL F_00afd360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  float10 fVar4;
  
  puVar2 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_FWD);
  }
  (*(undefined4 *)(gen_frame + 0x40)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x48)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x50)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x54)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x58)) = puVar2[2];
  if (param_2 == (float *)0x0) {
    (*(float *)(gen_frame + 0x6c)) = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)));
  }
  else {
    (*(float *)(gen_frame + 0x6c)) = *param_2;
    fVar4 = F_00aeb260(*param_2);
    (*(float *)(gen_frame + 0x6c)) = (float)fVar4;
  }
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)((int)this + 0x2c);
  F_00afcf00(this GEN_EDX_ARG);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x29) = 1;
  *(undefined4 *)((int)this + 0xf0) = (*(undefined4 *)(gen_frame + 0x50));
  *(undefined4 *)((int)this + 0xf4) = (*(undefined4 *)(gen_frame + 0x54));
  *(undefined4 *)((int)this + 0xf8) = (*(undefined4 *)(gen_frame + 0x58));
  *(float *)((int)this + 0x100) = (*(float *)(gen_frame + 0x6c));
  if (param_3 != 0) {
    F_00afee90(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_3);
    F_00ae5a80((undefined *)((int)this + 0x104) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  }
  uVar3 = F_00afd000(this GEN_EDX_ARG,0,0,0);
  if ((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) {
    *(undefined4 *)(iVar1 + 0x60) = 4;
  }
  if (*(char *)((int)this + 0x14) != '\0') {
    *(undefined4 *)((int)this + 0x2c) = (*(undefined4 *)(gen_frame + 0x68));
    uVar3 = param_3;
    if ((param_3 != 0) && (*(char *)(param_3 + 0x2a) != '\0')) {
      *(undefined1 *)(iVar1 + 0x69) = 1;
      *(undefined1 *)(iVar1 + 0x6a) = *(undefined1 *)(param_3 + 0x2b);
    }
  }
  return uVar3;
}

/* ref: FUN_00afd4c0 */
GEN_FRAME uint GEN_THISCALL F_00afd4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafd4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_0054ccb0(param_1 GEN_EDX_FWD,param_2);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar2 = F_00afbe90(this GEN_EDX_ARG,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00afd620 */
GEN_NOFRAME byte GEN_THISCALL F_00afd620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafd620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined * this_00;
  byte bVar5;
  float * pfVar6;
  undefined4 * puVar7;
  
  if (((*(int *)((int)this + 0x10) != 0) &&
      (iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar4 != 0)) &&
     (bVar5 = F_00a9f620(iVar4 GEN_EDX_FWD), bVar5 != 0)) {
    if (REFG(char, 0x14c0a40) == '\0') {
      return 0;
    }
    if (*((char *)GEN_TOP((*(int *)((int)this + 0x10) + 0x420))) == '\0') {
      return 0;
    }
  }
  iVar4 = *(int *)((int)this + 0x14);
  if ((iVar4 != 0) && (((iVar4 == 3 || (iVar4 == 4)) || (iVar4 == 2)))) {
    pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    fVar1 = pfVar6[1];
    cVar3 = *(char *)((int)this + 0x5b);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar2 = *(float *)((int)this + 0x40);
    (*(float *)(gen_frame + 0x20)) = *pfVar6;
    (*(float *)(gen_frame + 0x28)) = pfVar6[2];
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar2 + (float10)fVar1);
    if (((cVar3 == '\0') && (*(int *)((int)this + 0x10) != 0)) &&
       ((iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))), iVar4 != 0 &&
        (bVar5 = F_00a9f620(iVar4 GEN_EDX_ARG), bVar5 != 0)))) {
      F_00aeff30(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x28)));
    }
    puVar7 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
    (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar7[2];
    pfVar6 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    F_00afcc90(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
    pfVar6 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    bVar5 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
    if (bVar5 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00afd7d0 */
GEN_FRAME uint GEN_THISCALL F_00afd7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafd7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10ebbf0);
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ebbf0);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if (param_3 != 0) {
    F_00ae5a80(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_3);
  }
  if ((*(int *)((int)this + 0x10) == 0) ||
     (bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG), bVar1 == 0)) {
    if ((((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0xc)) == REFG(float, 0x10ebbf0))) &&
        ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
         ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x18)) == REFG(float, 0x10ebbf0)))) ||
       (((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) == '\0' &&
        (((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x14)) == REFG(float, 0x10ebbf0)) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x1c)) == REFG(float, 0x10ebbf0)))))))) {
      if (((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
           ((GEN_ISNAN((*(float *)(gen_frame + 0xc))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0xc)) == REFG(float, 0x10ebbf0))) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x18))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x18)) == REFG(float, 0x10ebbf0)))) {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1339b14);
        (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1339b1c);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
      }
      if ((((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 2)) == '\0') &&
          ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
           ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x14)) == REFG(float, 0x10ebbf0)))) &&
         ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) !=
          ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || (*(float *)(gen_frame + 0x1c)) == REFG(float, 0x10ebbf0)))) {
        (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1339b20);
        (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ebc44);
        (*(undefined4 *)(gen_frame + 0x28)) = 4;
      }
    }
    uVar2 = F_00afc050((undefined *)((int)this + 0x1c4) GEN_EDX_ARG,param_1,param_2,4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  else {
    uVar2 = F_00afd360(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,param_1,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  return uVar2;
}

/* ref: FUN_00afd950 */
GEN_FRAME uint GEN_THISCALL F_00afd950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafd950u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((*(int *)&gen_args[2]) != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)&gen_args[2]) + 4);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((*(int *)&gen_args[2]) + 8);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x10);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0xc);
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x2c)) + 1)) = *(byte *)((*(int *)&gen_args[2]) + 0x14);
    (*(int *)(gen_frame + 0x2c)) = (uint)*(byte *)((*(int *)&gen_args[2]) + 0x14) << 8;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((*(int *)&gen_args[2]) + 0x18);
  }
  uVar1 = F_00afd7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,0,&(*(undefined4 *)&gen_args[1]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00afd9f0 */
GEN_FRAME uint GEN_THISCALL F_00afd9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xafd9f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    bVar1 = F_00a9f620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      if (!GEN_ISNAN((*(float *)&gen_args[3])) && !(0.0 <= (*(float *)&gen_args[3]))) {
        (*(float *)&gen_args[3]) = 0.0;
      }
      F_00afacb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f0))) GEN_EDX_ARG,0);
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      (*(undefined4 *)(gen_frame + 0x28)) = 3;
      (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
      (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
      (*(undefined1 *)(gen_frame + 0x33)) = (undefined1)(*(undefined4 *)&gen_args[4]);
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined2 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x34)) = 0;
      (*(float *)(gen_frame + 0x18)) = (*(float *)&gen_args[3]);
      (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
      (*(undefined4 *)(gen_frame + 0x38)) = 2;
      (*(undefined1 *)(gen_frame + 0x32)) = 1;
      in_EAX = F_00afd7d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return in_EAX;
}

/* ref: FUN_00afdab0 */
GEN_NOFRAME uint GEN_THISCALL F_00afdab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafdab0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  byte bVar2;
  float * pfVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  (*(undefined4 *)(gen_frame + 0x20)) = 1;
  (*(char *)(gen_frame + 0x24)) = '\0';
  if (param_4 != 0) {
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 0)) = *(undefined1 *)(param_4 + 4);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 1)) = *(undefined1 *)(param_4 + 5);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 2)) = *(undefined1 *)(param_4 + 6);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 3)) = *(undefined1 *)(param_4 + 7);
    (*(char *)(gen_frame + 0x24)) = *(char *)(param_4 + 8);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_4 + 4);
  }
  F_00afbac0(param_1 GEN_EDX_FWD);
  if (((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 3)) == '\0') &&
     ((*(float *)(gen_frame + 0x28)) = *(float *)((int)param_1 + 0x204), *(float *)((int)param_1 + 0x204) != 0.0)) {
    *(undefined4 *)((int)param_1 + 0x204) = 0;
    F_00aefee0((undefined *)((int)param_1 + 0x1f0) GEN_EDX_ARG);
    if ((*(float *)(gen_frame + 0x28)) != 7.00649e-45) {
      *(undefined4 *)((int)param_1 + 0x210) = 0;
    }
  }
  F_0052eb30((uint)*((ushort *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x88))));
  (*(char *)(gen_frame + 0x2f)) = '\x01';
  if ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 1)) != '\0') {
    (*(float *)(gen_frame + 0x28)) = *((float *)GEN_TOP(((int)*(undefined * PTR32 *)((int)param_1 + 0x10) + 0xc0)));
    pfVar3 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)param_1 + 0x10) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x0)) = *pfVar3;
    (*(float *)(gen_frame + 0x4)) = pfVar3[1];
    (*(float *)(gen_frame + 0x8)) = pfVar3[2];
    uVar4 = F_00af2a00(&(*(float *)(gen_frame + 0x0)),param_2,(float)(float10)0,(*(float *)(gen_frame + 0x28)),0,0,0,(float)(float10)0);
    if ((char)uVar4 != '\0') {
      (*(char *)(gen_frame + 0x2f)) = '\0';
    }
  }
  pfVar3 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)param_1 + 0x10) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x0)) = *pfVar3;
  (*(float *)(gen_frame + 0x8)) = pfVar3[2];
  if ((*(char *)(gen_frame + 0x2f)) != '\0') {
    F_00aec9f0(param_1 GEN_EDX_ARG,(uint)param_2);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x10) + 0x48))))
                    (*(int * PTR32 *)((int)param_1 + 0x10) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_3));
  if (*(int *)((int)param_1 + 0x10) == 0) goto LAB_00afdc6f;
  bVar2 = F_00a9f620(*(int *)((int)param_1 + 0x10) GEN_EDX_ARG);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) goto LAB_00afdc6f;
  if (((*(char *)(gen_frame + 0x24)) == '\0') && (REFG(char, 0x14c0a40) != '\0')) {
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x0))) *
                    (float10)(float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x0))) +
                   (float10)(float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x8))) *
                   (float10)(float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x8))))));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    if (!((float10)fVar1 < (float10)REFG(float, 0x10ebd94))) goto LAB_00afdc56;
  }
  else {
LAB_00afdc56: ;
    REFG(char, 0x14c0a40) = '\0';
    uVar4 = F_005f4a00(param_2);
  }
  *(undefined2 *)&REFG(undefined1, 0x14c0cc0) = 0x101;
LAB_00afdc6f: ;
  if ((char)(*(undefined4 *)(gen_frame + 0x20)) != '\0') {
    *(undefined1 *)((int)param_1 + 0x420) = 0;
    uVar4 = F_00af94c0(param_1 GEN_EDX_ARG);
  }
  if ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x20)) + 2)) != '\0') {
    uVar4 = F_00af1e90(param_1 GEN_EDX_ARG,0,0,1);
  }
  return uVar4;
}

/* ref: FUN_00afdcb0 */
GEN_FRAME uint GEN_THISCALL F_00afdcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafdcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((REFG(char, 0x14c0a40) != '\0') && (*(char *)((int)this + 0x420) != '\0')) {
    uVar1 = F_00afd000(&REFG(undefined, 0x14c0a50) GEN_EDX_FWD,param_1,param_2,param_3);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00afdce0 */
GEN_FRAME uint GEN_THISCALL F_00afdce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafdce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD);
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      bVar1 = F_00afd2a0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,param_1);
      return CONCAT31(extraout_var_00,bVar1);
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00afdd10 */
GEN_NOFRAME uint GEN_THISCALL F_00afdd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafdd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (bVar2 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD), bVar2 != 0)) {
    bVar2 = F_0054ccb0(param_1 GEN_EDX_ARG,param_2);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var_00,bVar2);
    }
    uVar4 = F_00afbe90(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,param_1,param_2);
    return uVar4;
  }
  puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x10))) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
  bVar2 = F_0054ccb0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2);
  if (bVar2 != 0) {
    return CONCAT31(extraout_var,bVar2);
  }
  puVar3 = (undefined4 *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c8) + 0x10))) GEN_EDX_ARG);
  uVar1 = *(undefined4 *)((int)this + 0x1c8);
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
  F_00aec9f0(uVar1 GEN_EDX_ARG,param_2);
  uVar4 = F_00af9b80((undefined *)((int)this + 0x1c4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00afde00 */
GEN_FRAME uint GEN_THISCALL F_00afde00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafde00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  
  F_00aff630(this GEN_EDX_FWD);
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebd70)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc48)));
  if (param_1 == 0) {
    F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x20,0);
    uVar5 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x2d,0);
    return uVar5;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc08)));
  *(undefined4 *)((int)this + 0x34) = uVar3;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  *(undefined4 *)((int)this + 0x40) = uVar2;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc4c)));
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1339afc)));
  *(undefined4 *)((int)this + 0x58) = uVar3;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1339b0c)));
  *(undefined4 *)((int)this + 0x48) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1339b00)));
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1339b08)));
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1339b04)));
  *(undefined4 *)((int)this + 0x60) = uVar3;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x14c0a48)));
  *(undefined4 *)((int)this + 0x50) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebd00)));
  *(undefined4 *)((int)this + 100) = uVar3;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1339b10)));
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc50)));
  *(undefined4 *)((int)this + 0x70) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc24)));
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  *(undefined4 *)((int)this + 0x74) = uVar3;
  *(undefined4 *)((int)this + 0x78) = uVar1;
  bVar4 = F_00afd2a0(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0x2e08))));
  return CONCAT31(extraout_var,bVar4);
}

/* ref: FUN_00afdf30 */
GEN_NOFRAME uint GEN_THISCALL F_00afdf30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafdf30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  int * piVar3;
  undefined * pvVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  undefined4 * puVar9;
  undefined3 extraout_var = 0;
  int iVar10;
  undefined4 * puVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = this;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_FWD);
  if (uVar6 == 1) {
    pfVar8 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x50)) = *pfVar8;
    (*(float *)(gen_frame + 0x54)) = pfVar8[1];
    (*(float *)(gen_frame + 0x58)) = pfVar8[2];
    F_00aec9f0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x50)));
    uVar6 = 0;
    if (*(int *)((int)this + 0x14) != 0) goto LAB_00afe1a6;
    iVar10 = *(int *)((int)this + 0x10);
    (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x54));
    (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x58));
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar10 + 0x10) + 0x2e00))) + 0xec)));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 (*)[1])REFP(0x109c974));
    (*(undefined1 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0x100;
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = pvVar4;
    if ((pvVar4 != (undefined *)0x0) && (*(undefined * PTR32 *)((int)pvVar4 + 0x78) != (undefined *)0x0)) {
      uVar6 = F_00623160(*(undefined * PTR32 *)((int)pvVar4 + 0x78) GEN_EDX_ARG,"n_mount");
      if ((short)uVar6 != -1) {
        puVar9 = (undefined4 *)F_0054e1a0(pvVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)),uVar6 & 0xffff);
        pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x40));
        puVar11 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x30)) - (float10)*(float *)((int)pvVar4 + 0x30))));
        (*(float *)(gen_frame + 0x60)) = fVar13;
        fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x34)) - (float10)*(float *)((int)pvVar4 + 0x34))));
        (*(float *)(gen_frame + 0x64)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) - (float10)*(float *)((int)pvVar4 + 0x38))));
        (*(float *)(gen_frame + 0x68)) = fVar2;
        (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x70)));
        (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x74)));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x78)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x8c));
      }
    }
    bVar5 = F_0054ccb0(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x50)));
    uVar6 = CONCAT31(extraout_var,bVar5);
    if (bVar5 != 0) goto LAB_00afe1a6;
    F_00afdab0(*(int *)((int)this + 0x10) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x70)),GEN_TOF(*((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xb0)))),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x44)));
    uVar6 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    pvVar4 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(uVar6 + 4) - (float10)(*(float *)(gen_frame + 0x54))))))));
    (*(undefined * PTR32 *)(gen_frame + 0x8c)) = pvVar4;
    if ((float10)REFG(float, 0x1339ba4) <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar4)))) {
      iVar10 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)));
      if (iVar10 != 0) {
        bVar5 = F_00a9f620(iVar10 GEN_EDX_ARG);
        if (bVar5 != 0) {
          *(undefined1 *)((int)this + 0x70) = 1;
          uVar6 = F_00afb5f0(this GEN_EDX_ARG);
          F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
          return uVar6;
        }
      }
      uVar14 = 1;
      fVar13 = (float)(float10)0;
      uVar12 = 1;
      uVar6 = F_00ae9430(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x60)));
      F_00af5b90(this GEN_EDX_ARG,uVar6,uVar12,fVar13,uVar14);
      *(undefined1 *)((int)this + 0x70) = 1;
      uVar6 = F_00afb7b0(this GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
      return uVar6;
    }
    pfVar8 = &(*(float *)(gen_frame + 0x50));
  }
  else {
    pfVar7 = (float *)F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x60)) = *pfVar7;
    (*(float *)(gen_frame + 0x64)) = pfVar7[1];
    pfVar8 = &(*(float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0x68)) = pfVar7[2];
  }
  uVar6 = F_00aec9f0(*(undefined4 *)((int)this + 0x10) GEN_EDX_ARG,(uint)pfVar8);
LAB_00afe1a6: ;
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00afe1c0 */
GEN_FRAME uint GEN_THISCALL F_00afe1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafe1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  undefined * this;
  uint uVar3;
  float10 fVar4;
  
  if (*(int *)((int)param_1 + 0x14) != 0) {
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))) GEN_EDX_FWD);
    (*(float *)(gen_frame + 0x38)) = *(float *)(uVar3 + 4);
    F_00afacb0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x38)));
  }
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10)));
  (*(float *)(gen_frame + 0x38)) = REFG(float, 0x10ebd90);
  uVar3 = F_00a5feb0(this GEN_EDX_ARG);
  if ((float10)*(float *)(uVar3 + 4) < (float10)*(float *)(param_2 + 4)) {
    uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF((((float10)*(float *)(param_2 + 4) - (float10)*(float *)(uVar3 + 4)) +
                     (float10)*(double *)&REFG(undefined, 0x1094560))));
  }
  fVar1 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((((float10)REFG(float, 0x1339b94) * (float10)*(double *)&REFG(undefined, 0x10944c0)) *
                                      (float10)(*(float *)(gen_frame + 0x38))))))));
  *(undefined1 *)((int)param_1 + 0x5b) = 1;
  *(float *)((int)param_1 + 0x5c) = fVar1;
  F_00afb490(param_1 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x34)) = gen_bits2f(*(int *)((int)param_1 + 0x14));
  if (*(int *)((int)param_1 + 0x14) != 1) {
    *(undefined4 *)((int)param_1 + 0x14) = 1;
    F_00af5cb0(param_1 GEN_EDX_ARG);
    if ((*(float *)(gen_frame + 0x34)) != 7.00649e-45) {
      *(undefined4 *)((int)param_1 + 0x20) = 0;
    }
  }
  (*(float *)(gen_frame + 0x34)) = (float)(-(float10)fVar1 / (float10)REFG(float, 0x1339b94));
  uVar3 = F_00a5feb0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0x10))) GEN_EDX_ARG);
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(uVar3 + 4);
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  fVar4 = (float10)((float)GEN_TOF(((float10)fVar1 - (float10)(float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x38))))));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined1 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((fVar4 + fVar4) / (float10)REFG(float, 0x1339b94)))))))
                    + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(undefined4 *)(gen_frame + 0x1c)) = 3;
  uVar3 = F_00afd7d0(*(undefined * PTR32 *)((int)param_1 + 0x10) GEN_EDX_ARG,param_2,0,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)(param_2 + 8);
  return uVar3;
}

/* ref: FUN_00afe350 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afe350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafe350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD);
    if (bVar1 != 0) {
      F_00afcf00(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
      F_00afde00(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG,this);
    }
  }
  return;
}

/* ref: FUN_00afe380 */
GEN_NOFRAME uint F_00afe380(void)
{
  GEN_ENTER(0xafe380u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00aff630(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
  F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x20,0);
  uVar1 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0x2d,0);
  REFG(undefined1, 0x14c0a40) = 0;
  return uVar1;
}

/* ref: FUN_00afe3b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afe3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafe3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD);
    if (bVar1 != 0) {
      F_00afce30(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
      return;
    }
  }
  return;
}

/* ref: FUN_00afe3d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afe3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafe3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  float * pfVar7;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  if (*(char *)((int)this + 100) == '\0') {
    return;
  }
  if (((*(int *)((int)this + 0x10) != 0) &&
      (bVar6 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD), bVar6 != 0)) &&
     (*(char *)((int)this + 0x1cc) == '\0')) {
    iVar8 = *(int *)((int)this + 0x204);
    if (((iVar8 != 0) && (((iVar8 == 3 || (iVar8 == 4)) || (iVar8 == 2)))) &&
       (*(char *)((int)this + 0x24b) == '\0')) {
      return;
    }
    if (REFG(char, 0x14c0bc0) != '\0') {
      return;
    }
  }
  pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x40)) = *pfVar7;
  (*(float *)(gen_frame + 0x44)) = pfVar7[1];
  (*(float *)(gen_frame + 0x48)) = pfVar7[2];
  (*(float *)(gen_frame + 0x30)) = *(float *)((int)this + 0x20U);
  (*(float *)(gen_frame + 0x34)) = *(float *)((int)this + 0x24);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x28);
  (*(bool *)(gen_frame + 0x6f)) = false;
  if ((*(int *)((int)this + 0x10) == 0) ||
     (bVar6 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG), bVar6 == 0)) {
    if ((*(char *)((int)this + 0x296) == '\0') ||
       (iVar8 = (int)this + 0x2c0, *(char *)((int)this + 700) == '\0')) {
      iVar8 = (int)this + 0x270;
    }
    if (((!GEN_ISNAN(*(float *)(iVar8 + 0x10)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
         !(*(float *)(iVar8 + 0x10) < *(float *)&REFG(undefined, 0x1088114))) ||
       ((*(int *)((int)this + 0x204) != 0 && (*(int *)((int)this + 0x204) == 1)))) {
      (*(bool *)(gen_frame + 0x6f)) = true;
    }
  }
  if (((*(int *)((int)this + 0x10) != 0) &&
      (bVar6 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG), bVar6 != 0)) ||
     (((iVar8 = *(int *)((int)this + 0x204), iVar8 != 0 &&
       (((iVar8 == 3 || (iVar8 == 4)) || (iVar8 == 2)))) || ((*(bool *)(gen_frame + 0x6f)) != false)))) {
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  }
  cVar5 = *(char *)((int)this + 0x30);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x48)));
  if (cVar5 != '\0') {
    F_004bd580(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG);
    if (REFG(float, 0x10ebd20) < *(float *)(REFG(int, 0x137104c) + 0x1198)) {
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x10ebd20);
    }
    else {
      (*(float *)(gen_frame + 0x68)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
    }
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)*(float *)&REFG(undefined, 0x14c0a7c));
    fVar10 = (float10)(float)((float10)(*(float *)(gen_frame + 0x68)) * (float10)*(float *)&REFG(undefined, 0x14c0a7c));
    fVar13 = (float10)(*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x50)) = (float)(fVar10 * fVar13);
    fVar11 = (float10)(*(float *)(gen_frame + 0x54));
    (*(float *)(gen_frame + 0x54)) = (float)(fVar11 * fVar10);
    fVar14 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)(fVar10 * fVar14);
    fVar12 = (float10)*(double *)&REFG(undefined, 0x109cb28);
    fVar1 = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar13) * fVar12)));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)(fVar11 * fVar10) * fVar12)));
    (*(float *)(gen_frame + 0x54)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar12 * (float10)(float)(fVar10 * fVar14))));
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                   ((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1))));
    (*(float *)(gen_frame + 0x64)) = fVar4;
    fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
    (*(float *)(gen_frame + 0x64)) = fVar4;
    fVar13 = (float10)fVar4;
    bVar9 = GEN_ISNAN(fVar13) || GEN_ISNAN((float10)0);
    if (bVar9 == (bVar9 || fVar13 == (float10)0)) {
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x18)) = fVar3;
      F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
      fVar13 = (float10)REFG(float, 0x1339b38);
      (*(float *)(gen_frame + 0x0)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar13);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x18)));
      fVar14 = (float10)*(double *)&REFG(undefined, 0x1092098);
      fVar1 = ((float)GEN_TOF(((float10)(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10))) * fVar14)));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar13) * fVar14)));
      (*(float *)(gen_frame + 0x14)) = fVar2;
      fVar3 = ((float)GEN_TOF((fVar14 * (float10)(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x18))))));
      (*(float *)(gen_frame + 0x18)) = fVar3;
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x50)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x54)));
      (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x58)));
    }
    (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  (*(float *)(gen_frame + 0x68)) = fVar1;
  fVar13 = F_00aebbc0(this GEN_EDX_ARG,fVar1,(int)this + 0x20U);
  (*(float *)(gen_frame + 0x60)) = (float)fVar13;
  (*(bool *)(gen_frame + 0x6f)) = false;
  fVar13 = (float10)(float)fVar13;
  fVar14 = fVar13 + (float10)REFG(float, 0x1339b38);
  bVar9 = !((float10)(*(float *)(gen_frame + 0x68)) <= fVar14);
  if (bVar9) {
    fVar1 = (float)(fVar13 / (float10)(*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar10 = (float10)(*(float *)(gen_frame + 0x50));
    fVar11 = (float10)fVar1;
    (*(float *)(gen_frame + 0x50)) = (float)(fVar11 * fVar10);
    fVar12 = (float10)(*(float *)(gen_frame + 0x54));
    (*(float *)(gen_frame + 0x54)) = (float)(fVar12 * fVar11);
    fVar13 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)(fVar11 * fVar13);
    fVar1 = ((float)GEN_TOF(((float10)(float)(fVar11 * fVar10) + (float10)(*(float *)(gen_frame + 0x40)))));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)(fVar12 * fVar11) + (float10)(*(float *)(gen_frame + 0x44)))));
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)(fVar11 * fVar13) + (float10)(*(float *)(gen_frame + 0x48)))));
    (*(float *)(gen_frame + 0x8)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
  }
  else {
    (*(bool *)(gen_frame + 0x6f)) = true;
  }
  (*(bool *)(gen_frame + 0x6f)) = !bVar9;
  fVar1 = *(float *)((int)this + 0x4c);
  (*(float *)(gen_frame + 0x60)) = fVar1;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
    iVar8 = *(int *)((int)this + 0x54);
    if (iVar8 != 1) {
      if ((((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
            ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) && (2 < iVar8)) &&
         ((iVar8 < 6 && (REFG(float, 0x1087f04) <= *(float *)((int)this + 0x110))))) {
        (*(bool *)(gen_frame + 0x6f)) = true;
      }
      goto LAB_00afe78d;
    }
    if (!((float10)fVar1 <= (float10)*(float *)((int)this + 0x80))) goto LAB_00afe78d;
    (*(bool *)(gen_frame + 0x6f)) = true;
  }
  else {
LAB_00afe78d: ;
    if (!((float10)(*(float *)(gen_frame + 0x68)) <= fVar14)) goto LAB_00afe7af;
  }
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
LAB_00afe7af: ;
  pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  cVar5 = *(char *)((int)this + 0x421);
  (*(float *)(gen_frame + 0x10)) = *pfVar7;
  (*(float *)(gen_frame + 0x14)) = pfVar7[1];
  (*(float *)(gen_frame + 0x18)) = pfVar7[2];
  if ((cVar5 == '\0') && (*(char *)((int)this + 0x24b) == '\0')) {
    pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x0)) = *pfVar7;
    (*(float *)(gen_frame + 0x4)) = pfVar7[1];
    (*(float *)(gen_frame + 0x8)) = pfVar7[2];
    F_00afdd10(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)));
  }
  else {
    F_00aec9f0(this GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)));
  }
  if ((*(int *)((int)this + 0x10) != 0) &&
     (bVar6 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG), bVar6 != 0)) {
    pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
    fVar1 = *pfVar7;
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4)) = pfVar7[1];
    (*(float *)(gen_frame + 0x8)) = pfVar7[2];
    *(float *)&REFG(undefined, 0x14c0ad0) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x30)) = *(float *)&REFG(undefined, 0x14c0ad0);
    *(float *)&REFG(undefined, 0x14c0ad4) = (float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x34)) = *(float *)&REFG(undefined, 0x14c0ad4);
    *(float *)&REFG(undefined, 0x14c0ad8) = (float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x38)) = *(float *)&REFG(undefined, 0x14c0ad8);
    REFG(float, 0x14c0ae0) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x14c0ae0);
    *(float *)&REFG(undefined, 0x14c0ae4) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x4)) = *(float *)&REFG(undefined, 0x14c0ae4);
    REFG(float, 0x14c0ae8) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x18)));
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x14c0ae8);
  }
  *(bool *)((int)this + 100) = (*(bool *)(gen_frame + 0x6f)) == false;
  return;
}

/* ref: FUN_00afe900 */
GEN_FRAME uint GEN_THISCALL F_00afe900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xafe900u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int in_ecx;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  F_00afdab0(param_1 GEN_EDX_FWD,param_2,param_3,0);
  if ((*(int *)(param_1 + 0x200) != 0) &&
     (in_ecx = *((int *)GEN_TOP((*(int *)(param_1 + 0x200) + 0x10))), in_ecx != 0)) {
    bVar1 = F_00a9f620(in_ecx GEN_EDX_ARG);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_1 + 0x2c0;
  if (*(char *)(param_1 + 0x296) == '\0') {
    uVar2 = param_1 + 0x270;
  }
  *(undefined4 *)(uVar2 + 0x18) = *(undefined4 *)(param_2 + 4);
  return uVar2;
}

/* ref: FUN_00afe960 */
GEN_FRAME uint GEN_THISCALL F_00afe960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xafe960u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_00afe1c0(param_1 + 0x1f0 GEN_EDX_FWD,param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_00afe980 */
GEN_NOFRAME uint GEN_THISCALL F_00afe980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafe980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00afdf30((undefined *)((int)this + 0x1f0) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00afe990 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afe990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafe990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_FWD);
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00afe9d7;
  }
  if (*(char *)((int)this + 0x1cc) == '\0') {
    if (*(int *)((int)this + 0x10) != 0) {
      bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
      if ((bVar1 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00afe9d7;
    }
    if (*(char *)((int)this + 0x1cd) == '\0') {
      return;
    }
  }
LAB_00afe9d7: ;
  F_00afe3d0(this GEN_EDX_ARG);
  F_00af6310(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00afe9f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00afe9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xafe9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    *param_1 = 0;
    *param_2 = 0;
    bVar1 = F_00afd620(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f0))) GEN_EDX_FWD);
    *param_2 = bVar1;
    if (((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) &&
       ((this_00 = *(undefined * PTR32 *)((int)this + 0x10), *(char *)((int)this_00 + 100) != '\0' ||
        (*(char *)((int)this_00 + 0x65) != '\0')))) {
      F_00afe990(this_00 GEN_EDX_ARG);
      *param_1 = 1;
    }
    F_00af2bf0(this GEN_EDX_ARG,(uint)*param_1);
  }
  return;
}

/* ref: FUN_00afea50 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00afea50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') || (*(char *)((int)this + 9) != '\0')) {
      F_00afe990(*(undefined * PTR32 *)((int)this + 4) GEN_EDX_FWD);
    }
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204))) != 0) {
      in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
      if ((in_ecx != 0) && (bVar1 = F_00a9f620(in_ecx GEN_EDX_ARG), bVar1 != 0)) {
        return;
      }
      F_00afd620(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x1f0))) GEN_EDX_ARG);
      return;
    }
  }
  return;
}

/* ref: FUN_00afeaa0 */
GEN_FRAME unsigned int GEN_THISCALL F_00afeaa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafeaa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    if ((*(char *)((int)this + 0x14) != '\0') || (*(char *)((int)this + 0x15) != '\0')) {
      bVar5 = GEN_ISNAN(*(float *)(iVar1 + 0x80)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
      if (bVar5 != (bVar5 || *(float *)(iVar1 + 0x80) == REFG(float, 0x10ebbf0))) {
        *(undefined4 *)(iVar1 + 0x80) = 0;
      }
      if (*(char *)((int)this + 0x14) != '\0') {
        F_00af2f50(this GEN_EDX_FWD);
      }
      if (*(char *)((int)this + 0x15) != '\0') {
        F_00af3110(this GEN_EDX_ARG);
      }
    }
    (*(char *)(gen_frame + 0xb)) = '\0';
    (*(char *)(gen_frame + 0xa)) = '\0';
    F_00afe9f0(this GEN_EDX_ARG,&(*(char *)(gen_frame + 0xb)),&(*(char *)(gen_frame + 0xa)));
    if (*(int *)((int)this + 0x158) != 0) {
      *(int *)((int)this + 0x158) = *(int *)((int)this + 0x158) - 1;
    }
    if ((((*(char *)(gen_frame + 0xb)) != '\0') || ((*(char *)(gen_frame + 0xa)) != '\0')) || (*(char *)((int)this + 0x272) != '\0')) {
      uVar2 = (*(uint *)(gen_frame + 0x6)) >> 8;
      (*(uint *)(gen_frame + 0x6)) = (*(uint *)(gen_frame + 0x6)) & 0xffffff00;
      if (((*(char *)(gen_frame + 0xb)) == '\0') && ((*(char *)(gen_frame + 0xa)) == '\0')) {
        (*(uint *)(gen_frame + 0x6)) = CONCAT31((int3)uVar2,0x20);
      }
      F_00af1e90(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG,0,(*(uint *)(gen_frame + 0x6)),1);
      if (*(char *)((int)this + 0x14) != '\0') {
        iVar1 = *(int *)((int)this + 0x10);
        if ((((*(int *)(iVar1 + 0x10) == 0) ||
             (bVar3 = F_00a9f620(*(int *)(iVar1 + 0x10) GEN_EDX_ARG), bVar3 == 0)) || (REFG(char, 0x14c0a64) == '\0'))
           && (*(char *)(iVar1 + 0x1cc) == '\0')) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
          if (*(int *)(iVar1 + 0x6c) != 7) {
            uVar4 = *(undefined1 *)(iVar1 + 0x3d);
          }
        }
        *(undefined1 *)((int)this + 0x17c) = uVar4;
      }
      *(undefined1 *)((int)this + 0x272) = 0;
    }
    F_00af2b40(this GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00afebb0 */
GEN_FRAME unsigned int GEN_THISCALL F_00afebb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafebb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * this_00;
  int in_ecx;
  byte bVar2;
  float fVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  if (this_00 == (undefined *)0x0) {
    return;
  }
  if (*(char *)((int)this + 8) == '\0') {
LAB_00afec27: ;
    if (*(char *)((int)this + 9) == '\0') goto LAB_00afec32;
  }
  else {
    fVar3 = *(float *)((int)this_00 + 0x40);
    if (((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
         ((GEN_ISNAN(fVar3) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar3 == REFG(float, 0x10ebbf0))) &&
       (fVar1 = *(float *)((int)this_00 + 0x44),
       (GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
       ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0)))) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)fVar1 +
                     (float10)*(float *)((int)this + 0x14))));
      if (!((float10)fVar3 < (float10)fVar1)) {
        fVar3 = fVar1;
      }
      *(float *)((int)this + 0x14) = fVar3;
    }
    if (*(char *)((int)this + 8) == '\0') goto LAB_00afec27;
  }
  F_00afe990(this_00 GEN_EDX_FWD);
LAB_00afec32: ;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x204))) != 0) {
    in_ecx = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
    if ((in_ecx != 0) && (bVar2 = F_00a9f620(in_ecx GEN_EDX_ARG), bVar2 != 0)) {
      return;
    }
    F_00afd620(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x1f0))) GEN_EDX_ARG);
  }
  return;
}

/* ref: FUN_00afec70 */
GEN_NOFRAME uint GEN_THISCALL F_00afec70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafec70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  F_00af92b0((undefined *)((int)this + 0x310) GEN_EDX_FWD);
  F_00af94c0(this GEN_EDX_ARG);
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
    if ((bVar1 != 0) && ((REFG(char, 0x14c0a40) == '\0' || (*(char *)((int)this + 0x420) == '\0'))))
    goto LAB_00afed44;
  }
  F_00aeba60(this GEN_EDX_ARG);
  puVar2 = (undefined4 *)F_00a5feb0(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_ARG);
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this + 0x218);
  F_00afd4f0((undefined *)((int)this + 0x1f0) GEN_EDX_ARG);
  F_00afebb0((undefined *)((int)this + 0x1c4) GEN_EDX_ARG);
  if (*(int *)((int)this + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)((int)this + 0x10) GEN_EDX_ARG);
    if (bVar1 != 0) {
      F_00afeaa0(&REFG(undefined, 0x14c0a50) GEN_EDX_ARG);
    }
  }
  F_00af5360((undefined *)((int)this + 0x1f0) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x1c)));
LAB_00afed44: ;
  uVar3 = F_00af2460(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00afed60 */
GEN_NOFRAME uint GEN_THISCALL F_00afed60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafed60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00afb860(this GEN_EDX_FWD);
  uVar1 = F_00afec70(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00afed70 */
GEN_NOFRAME uint GEN_THISCALL F_00afed70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafed70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  if (uVar1 != 2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
    if (uVar1 != 3) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00afede0 */
GEN_FRAME uint GEN_THISCALL F_00afede0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafede0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)((int)this + 7) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00afee10 */
GEN_FRAME uint GEN_THISCALL F_00afee10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafee10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00afee60 */
GEN_FRAME uint GEN_THISCALL F_00afee60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafee60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec470));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return (uint)this;
}

/* ref: FUN_00afee90 */
GEN_FRAME unsigned int GEN_THISCALL F_00afee90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafee90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)((int)this + 0x27) = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)((int)this + 0x28) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)((int)this + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)((int)this + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: FUN_00afef20 */
GEN_FRAME uint GEN_THISCALL F_00afef20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafef20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00afef40 */
GEN_FRAME uint GEN_THISCALL F_00afef40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafef40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0x19a;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x20) = param_1[2];
  *(undefined4 *)((int)this + 0x24) = param_1[3];
  *(undefined4 *)((int)this + 0x28) = param_1[4];
  *(undefined4 *)((int)this + 0x2c) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00afef80 */
GEN_FRAME byte GEN_THISCALL F_00afef80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xafef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  byte bVar2;
  bool bVar3;
  float10 fVar4;
  
  fVar4 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x58) *
                                                (float10)*(float *)((int)this + 0x58) +
                                               ((float10)*(float *)((int)this + 0x50) *
                                                (float10)*(float *)((int)this + 0x50) +
                                               (float10)*(float *)((int)this + 0x54) *
                                               (float10)*(float *)((int)this + 0x54))))))));
  bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)0);
  if ((bVar3 == (bVar3 || fVar4 == (float10)0)) ||
     (bVar2 = F_00c9f380(this GEN_EDX_FWD,param_1,param_2,param_3), bVar2 == 0)) {
    *param_1 = *(float *)((int)this + 0x50);
    *param_2 = *(float *)((int)this + 0x54);
    *param_3 = *(float *)((int)this + 0x58);
    return 1;
  }
  fVar1 = *param_1;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 1;
  }
  fVar1 = *param_2;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 1;
  }
  fVar1 = *param_3;
  if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00aff050 */
GEN_FRAME uint GEN_THISCALL F_00aff050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x50);
  param_2[1] = *(undefined4 *)(in_ecx + 0x54);
  param_2[2] = *(undefined4 *)(in_ecx + 0x58);
  return (uint)param_2;
}

/* ref: FUN_00aff070 */
GEN_FRAME uint GEN_THISCALL F_00aff070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff070u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff090 */
GEN_FRAME uint GEN_THISCALL F_00aff090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x70);
  param_2[1] = *(undefined4 *)(in_ecx + 0x74);
  param_2[2] = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: FUN_00aff0b0 */
GEN_FRAME uint GEN_THISCALL F_00aff0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff0d0 */
GEN_FRAME uint GEN_THISCALL F_00aff0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00aff150 */
GEN_FRAME uint GEN_THISCALL F_00aff150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x14);
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)((int)this + 0x30) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00aff250 */
GEN_NOFRAME uint GEN_THISCALL F_00aff250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaff250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  
  *(undefined4 *)(in_ecx + 0x10) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x10), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x14) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x14), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x18) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x18), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x20) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x20), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x24) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x24), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x28) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x28), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x34) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x34), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x38) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x38), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x40) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x40), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x44) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x44), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x48) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x48), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x50) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x50), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x54) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x54), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x58) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x58), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x60) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x60), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 100) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 100), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x68) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x68), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x70) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x70), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x74) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x74), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x78) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x78), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x80) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x80), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x84) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x84), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x88) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x88), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0x90) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x90), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0x94) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x94), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0x98) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0x98), REFG(float, 0x1375ac8));
  *(undefined4 *)(in_ecx + 0xa0) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0xa0), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ecx + 0xa4) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0xa4), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ecx + 0xa8) = GEN_FLT_TO(*(undefined4 *)(in_ecx + 0xa8), REFG(float, 0x1375ac8));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined4 *)(in_ecx + 0xb0) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xb4) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xb8) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xbc) = 0xffffffff;
  *(undefined4 *)(in_ecx + 0xc0) = uVar1;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd4) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined1 *)(in_ecx + 0xe0) = 0;
  return 0;
}

/* ref: FUN_00aff450 */
GEN_FRAME uint GEN_THISCALL F_00aff450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff450u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 1) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_00aff480 */
GEN_FRAME uint GEN_THISCALL F_00aff480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xd0) = *param_2;
  *(undefined4 *)(in_ecx + 0xd4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xd8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff4d0 */
GEN_FRAME float10 GEN_THISCALL F_00aff4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff4d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return (float10)in_ecx[1];
  }
  return (float10)*in_ecx;
}

/* ref: FUN_00aff4f0 */
GEN_FRAME float10 GEN_THISCALL F_00aff4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return (float10)*(float *)(in_ecx + 0xc);
  }
  return (float10)*(float *)(in_ecx + 8);
}

/* ref: FUN_00aff520 */
GEN_FRAME float10 GEN_THISCALL F_00aff520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    return (float10)*(float *)(in_ecx + 0x24);
  }
  return (float10)*(float *)(in_ecx + 0x20);
}

/* ref: FUN_00aff540 */
GEN_FRAME float10 GEN_THISCALL F_00aff540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff540u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((char)param_3 != '\0') {
    return (float10)*(float *)(in_ecx + 0x40);
  }
  if ((char)param_2 != '\0') {
    return (float10)*(float *)(in_ecx + 0x3c);
  }
  return (float10)*(float *)(in_ecx + 0x38);
}

/* ref: FUN_00aff5d0 */
GEN_FRAME uint GEN_THISCALL F_00aff5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff5d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff5f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00aff5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xaff5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[14];
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
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  F_00ae5a80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  return;
}

/* ref: FUN_00aff620 */
GEN_FRAME byte GEN_THISCALL F_00aff620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff620u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(byte *)(in_ecx + 0xc) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00aff630 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00aff630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaff630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x17) = 0;
  *(undefined2 *)((int)this + 0x1b) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x19) = 0;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebd80)));
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined2 *)((int)this + 0x154) = 0;
  *(undefined1 *)((int)this + 0x156) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x173) = 0;
  *(undefined1 *)((int)this + 0x177) = 0;
  *(undefined1 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined2 *)((int)this + 0x274) = 0;
  *(undefined1 *)((int)this + 0x276) = 0;
  *(undefined4 *)((int)this + 0x290) = uVar1;
  *(undefined1 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  return 0;
}

/* ref: FUN_00aff750 */
GEN_FRAME uint GEN_THISCALL F_00aff750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x80) = *param_2;
  *(undefined4 *)(in_ecx + 0x84) = param_2[1];
  *(undefined4 *)(in_ecx + 0x88) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff780 */
GEN_FRAME uint GEN_THISCALL F_00aff780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x90) = *param_2;
  *(undefined4 *)(in_ecx + 0x94) = param_2[1];
  *(undefined4 *)(in_ecx + 0x98) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff7b0 */
GEN_FRAME uint GEN_THISCALL F_00aff7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff7b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xc0) = *param_2;
  *(undefined4 *)(in_ecx + 0xc4) = param_2[1];
  *(undefined4 *)(in_ecx + 200) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff7f0 */
GEN_FRAME uint GEN_THISCALL F_00aff7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xaff7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_1 * 3 + 0xb + param_2) * 0x10 + (int)this)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_00aff820 */
GEN_FRAME uint GEN_THISCALL F_00aff820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff820u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 5) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_00aff850 */
GEN_FRAME uint GEN_THISCALL F_00aff850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xaff850u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 8) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_00aff880 */
GEN_FRAME uint GEN_THISCALL F_00aff880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff8a0 */
GEN_FRAME uint GEN_THISCALL F_00aff8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff8a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff8c0 */
GEN_FRAME uint GEN_THISCALL F_00aff8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff8c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  *(undefined4 *)(in_ecx + 0x68) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff8e0 */
GEN_FRAME uint GEN_THISCALL F_00aff8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff8e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x410) = *param_2;
  *(undefined4 *)(in_ecx + 0x414) = param_2[1];
  *(undefined4 *)(in_ecx + 0x418) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff910 */
GEN_FRAME uint GEN_THISCALL F_00aff910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaff910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x430) = *param_2;
  *(undefined4 *)(in_ecx + 0x434) = param_2[1];
  *(undefined4 *)(in_ecx + 0x438) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00aff940 */
GEN_FRAME unsigned int GEN_THISCALL F_00aff940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaff940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc40)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebc34)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0054e4e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00aff9e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00aff9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaff9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebd3c)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac050)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0054e4e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00affa80 */
GEN_FRAME unsigned int GEN_THISCALL F_00affa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaffa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbec)));
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac050)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebcec)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_0054e4e0((undefined *)((int)this + 4) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00affb20 */
GEN_FRAME uint GEN_THISCALL F_00affb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaffb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  F_00555960(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined1 *)((int)this + 0x60) = *(undefined1 *)(param_1 + 0x60);
  *(undefined1 *)((int)this + 0x61) = *(undefined1 *)(param_1 + 0x61);
  *(undefined1 *)((int)this + 0x62) = *(undefined1 *)(param_1 + 0x62);
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x78) = uVar2;
  *(undefined1 *)((int)this + 0x80) = *(undefined1 *)(param_1 + 0x80);
  *(undefined1 *)((int)this + 0x81) = *(undefined1 *)(param_1 + 0x81);
  *(undefined1 *)((int)this + 0x82) = *(undefined1 *)(param_1 + 0x82);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  return (uint)this;
}

/* ref: FUN_00affc20 */
GEN_NOFRAME uint GEN_THISCALL F_00affc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaffc20u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10ec468));
  F_00aff250(in_ecx GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_00affcd0 */
GEN_NOFRAME uint GEN_THISCALL F_00affcd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaffcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec488))
  ;
  *(undefined4 *)((int)this + 0x1e) = 0;
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
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec478));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x104) =
       (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x108) = uVar1;
  *(undefined4 *)((int)this + 0x10c) = uVar1;
  *(undefined4 *)((int)this + 0x110) = uVar1;
  *(undefined4 *)((int)this + 0x114) = uVar1;
  *(undefined4 *)((int)this + 0x118) = uVar1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec480));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x148) =
       (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined1 *)((int)this + 0x14c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x160) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec470));
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x180) =
       (*(undefined * PTR32 (*)[1])REFP(0x10ec468));
  F_00aff250((undefined4 *)((int)this + 0x180) GEN_EDX_FWD);
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0;
  F_00aff630(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00affe40 */
GEN_NOFRAME uint GEN_THISCALL F_00affe40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaffe40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x15) = 0;
  *(undefined1 *)((int)this + 0x1b) = 0;
  *(undefined2 *)((int)this + 0x171) = 0;
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x48) = uVar1;
  *(undefined4 *)(uVar2 + 0x50) = uVar1;
  *(undefined4 *)(uVar2 + 0x58) = 0;
  *(undefined1 *)(uVar2 + 0x5d) = 0;
  *(undefined1 *)(uVar2 + 0x65) = 0;
  *(undefined1 *)(uVar2 + 0x67) = 0;
  *(undefined4 *)(uVar2 + 0x70) = 0;
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar2 = F_00afcf00(this GEN_EDX_FWD);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00affea0 */
GEN_FRAME uint GEN_THISCALL F_00affea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xaffea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00affb20((undefined *)((int)this + 0x380) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00affeb0 */
GEN_NOFRAME uint GEN_THISCALL F_00affeb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xaffeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined1 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x170) = 0;
  *(undefined1 *)((int)this + 0x173) = 0;
  uVar1 = F_00aeb700(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD);
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar1 = F_00afcf00(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00afff50 */
GEN_NOFRAME uint GEN_THISCALL F_00afff50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xafff50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  F_00affeb0(this GEN_EDX_FWD);
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined1 *)((int)this + 0x15) = 0;
  *(undefined1 *)((int)this + 0x1b) = 0;
  *(undefined2 *)((int)this + 0x171) = 0;
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ebbf0)));
  *(undefined1 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x48) = uVar1;
  *(undefined4 *)(uVar2 + 0x50) = uVar1;
  *(undefined4 *)(uVar2 + 0x58) = 0;
  *(undefined1 *)(uVar2 + 0x5d) = 0;
  *(undefined1 *)(uVar2 + 0x65) = 0;
  *(undefined1 *)(uVar2 + 0x67) = 0;
  *(undefined4 *)(uVar2 + 0x70) = 0;
  if ((*(char *)((int)this + 0x14) == '\0') && (*(char *)((int)this + 0x15) == '\0')) {
    uVar2 = F_00afcf00(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: Component::Log::LogModuleInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00afffd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xafffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec4e0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::Log::LogModule::vf2 */
GEN_FRAME uint GEN_THISCALL F_00b00010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(uint *)(this + 8) != param_1) || (*(int *)(this + 0xc) != param_2)) {
    *(uint *)(this + 8) = param_1;
    *(int *)(this + 0xc) = param_2;
  }
  return param_1;
}

/* ref: Component::Log::LogModule::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00b00030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x14) - 1;
}

/* ref: Component::Log::LogModule::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00b00040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x14) == 0) {
    return 0xffffffff;
  }
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Component::Log::LogModule::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_00b00050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x14);
  if (29999 < uVar1) {
    uVar1 = 30000;
  }
  return uVar1;
}

/* ref: Component::Log::LogModule::vf6 */
GEN_FRAME uint GEN_THISCALL F_00b00060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = F_0042a970(param_1 GEN_EDX_FWD);
  uVar3 = F_0042a990(param_1 GEN_EDX_ARG);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x1c))(this,uVar3,uVar2);
  return uVar2;
}

/* ref: Component::Log::LogModule::vf8 */
GEN_FRAME uint GEN_THISCALL F_00b00090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00090u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[2]));
  if (uVar1 != 0) {
    F_0042cc20((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar1,(*(undefined4 *)&gen_args[2]));
    return (uint)(*(undefined * PTR32 *)&gen_args[1]);
  }
  F_0042cc20((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&REFG(undefined, 0x10ec4d8),REFG(undefined4, 0x108cc50));
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00b000e0 */
GEN_FRAME uint GEN_THISCALL F_00b000e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb000e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint * puVar2;
  undefined4 * puVar3;
  
  this_00 = (undefined *)F_00406b90(0x40,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00bca4f0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 0xc),
                         param_2);
    puVar2 = (uint *)F_00b01b50((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_1);
    *puVar2 = uVar1;
    return (uint)puVar2;
  }
  puVar3 = (undefined4 *)F_00b01b50((undefined *)((int)this + 0x1c) GEN_EDX_ARG,param_1);
  *puVar3 = 0;
  return (uint)puVar3;
}

/* ref: Component::Log::LogModule::vf9 */
GEN_FRAME uint GEN_THISCALL F_00b00140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  uVar1 = param_1;
  if (((int)param_1 < 0) && (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD), (int)uVar1 < 0)) {
    return 0;
  }
  if ((int)uVar1 < *(int *)(this + 0x14)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG);
    uVar2 = uVar2 - uVar1;
    uVar3 = *(int *)(this + 0x38) - *(int *)(this + 0x34) >> 2;
    if (uVar2 < uVar3) {
      iVar4 = (uVar3 - uVar2) - 1;
      if (iVar4 == 0) {
        uVar1 = **(uint * PTR32 *)(this + 0x34);
      }
      else {
        uVar1 = *((int *)GEN_TOP((*(int *)(this + 0x34) + iVar4 * 4))) -
                *((int *)GEN_TOP((*(int *)(this + 0x34) - 4 + iVar4 * 4)));
      }
      *param_2 = uVar1;
      if (iVar4 != 0) {
        return *((int *)GEN_TOP((*(int *)(this + 0x34) - 4 + iVar4 * 4))) + *(int *)(this + 0x44);
      }
      return *(uint *)(this + 0x44);
    }
    uVar2 = (uVar2 - uVar3) / 1000;
    if (uVar2 < 0x1e) {
      puVar5 = (undefined4 *)F_00b01b50(this + 0x1c GEN_EDX_ARG,uVar2);
      this_00 = (undefined *)*puVar5;
      if (this_00 != (undefined *)0x0) {
        uVar2 = F_00bca310(this_00 GEN_EDX_ARG,uVar1);
        *param_2 = uVar2;
        uVar1 = F_00bca340(this_00 GEN_EDX_ARG,uVar1);
        return uVar1;
      }
      F_00b000e0(this GEN_EDX_ARG,uVar2,*(int *)(this + 0x10) - uVar2);
    }
  }
  return 0;
}

/* ref: FUN_00b00230 */
GEN_FRAME uint GEN_THISCALL F_00b00230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 0x1c) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c))), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  uVar4 = (*(int *)((int)this + 0x2c) + *(int *)((int)this + 0x28)) - 1;
  if (((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) ||
     (piVar5 = *(int * PTR32 *)*piVar5, piVar5 == (int *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar5;
  }
  uVar2 = uVar4 >> 2;
  if (*(uint *)(iVar6 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar6 + 8);
  }
  if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) != 0) {
    piVar5 = (int *)F_00b01bc0((undefined *)((int)this + 0x1c) GEN_EDX_FWD);
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    }
  }
  if ((*(int *)((int)this + 0x2c) != 0) &&
     (iVar6 = *(int *)((int)this + 0x2c) - 1, *(int *)((int)this + 0x2c) = iVar6, iVar6 == 0)) {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x10);
  pvVar3 = (undefined *)F_00406b90(0x40,0,0);
  if (pvVar3 == (undefined *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  }
  else {
    pvVar3 = (undefined *)F_00bca5d0(pvVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 8),
                                  *(undefined4 *)((int)this + 0xc),(*(undefined * PTR32 *)(gen_frame + 0x8)),
                                  *(int *)((int)this + 0x14) -
                                  (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2),
                                  *(int *)((int)this + 0x14),(int)this + 0x34);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
  }
  uVar4 = F_00b02190((undefined *)((int)this + 0x1c) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: FUN_00b00320 */
GEN_FRAME uint GEN_THISCALL F_00b00320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x38) - *(int *)((int)this + 0x34) >> 2 != 0) {
    F_00b00230(this GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  for (uVar5 = *(uint *)((int)this + 0x28);
      uVar5 != *(int *)((int)this + 0x2c) + *(int *)((int)this + 0x28); uVar5 = uVar5 + 1) {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar3 = uVar5 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar5 & 3) * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    }
  }
  F_00b00f20((undefined *)((int)this + 0x1c) GEN_EDX_ARG);
  iVar4 = *(int *)((int)this + 0x34);
  if (iVar4 != *(int *)((int)this + 0x38)) {
    F_00c46e20(iVar4,*(int *)((int)this + 0x38),0);
    *(int *)((int)this + 0x38) = iVar4;
  }
  iVar4 = *(int *)((int)this + 0x44);
  if (iVar4 != *(int *)((int)this + 0x48)) {
    F_00c46e20(iVar4,*(int *)((int)this + 0x48),0);
    *(int *)((int)this + 0x48) = iVar4;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_00b003f0 */
GEN_FRAME uint GEN_THISCALL F_00b003f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb003f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec50c));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  this_00 = (undefined4 *)((int)this + 0x1c);
  *this_00 = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c2);
  *this_00 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 * PTR32 *)*this_00 = this_00;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_00b02320((undefined4 *)((int)this + 0x44) GEN_EDX_ARG,0x3e800);
  F_00b02210(this_00 GEN_EDX_ARG,0x1e);
  return (uint)this;
}

/* ref: Component::Log::LogModule::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00b00480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00b00320(this GEN_EDX_FWD);
  uVar1 = F_00b02210(this + 0x1c GEN_EDX_ARG,0x1e);
  return uVar1;
}

/* ref: FUN_00b004a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b004a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb004a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec50c));
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00b00320(this GEN_EDX_FWD);
  }
  iVar1 = *(int *)((int)this + 0x44);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x4c) - iVar1,0x135);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  iVar1 = *(int *)((int)this + 0x34);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x3c) - iVar1 >> 2) * 4,0x135);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  F_00b00f20((undefined *)((int)this + 0x1c) GEN_EDX_ARG);
  uVar2 = F_00429760(*(undefined4 *)((int)this + 0x1c),8,0x2c2);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10ec4e0));
  return (uint)uVar2;
}

/* ref: Component::Log::LogModule::vf7 */
GEN_FRAME uint GEN_THISCALL F_00b00530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00530u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  iVar4 = (*(int *)&gen_args[2]) + (iVar1 - iVar2);
  F_00b024b0((*(undefined * PTR32 *)&gen_args[0]) + 0x44 GEN_EDX_FWD,iVar4);
  F_00c46aa0(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + (iVar1 - iVar2),(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  (*(int *)&gen_args[2]) = iVar4;
  F_00b02520((*(undefined * PTR32 *)&gen_args[0]) + 0x34 GEN_EDX_ARG,&(*(int *)&gen_args[2]));
  uVar3 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar3 + 1;
  if (29999 < uVar3) {
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 1;
  }
  if (999 < (uint)(*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38))) - *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) >> 2)) {
    F_00b00230((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    F_00b02060((*(undefined * PTR32 *)&gen_args[0]) + 0x34 GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00b00610 */
GEN_FRAME uint GEN_STDCALL F_00b00610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c2);
  return uVar1;
}

/* ref: FUN_00b00660 */
GEN_FRAME uint GEN_STDCALL F_00b00660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x135);
  return (uint)uVar1;
}

/* ref: FUN_00b006a0 */
GEN_FRAME uint GEN_STDCALL F_00b006a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb006a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c2);
  return (uint)uVar1;
}

/* ref: FUN_00b006e0 */
GEN_FRAME uint GEN_STDCALL F_00b006e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb006e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x2c2);
  return uVar1;
}

/* ref: FUN_00b00710 */
GEN_FRAME uint GEN_STDCALL F_00b00710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c2);
  return (uint)uVar1;
}

/* ref: FUN_00b00750 */
GEN_FRAME uint GEN_STDCALL F_00b00750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x135);
  return (uint)uVar1;
}

/* ref: FUN_00b00780 */
GEN_FRAME uint GEN_THISCALL F_00b00780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00780u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00b00790 */
GEN_FRAME uint GEN_THISCALL F_00b00790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00790u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00b007c0 */
GEN_FRAME uint GEN_STDCALL F_00b007c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb007c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x2c2);
  return uVar1;
}

/* ref: FUN_00b007f0 */
GEN_FRAME uint GEN_STDCALL F_00b007f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb007f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c2);
  return (uint)uVar1;
}

/* ref: FUN_00b00830 */
GEN_FRAME uint GEN_THISCALL F_00b00830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00b00850 */
GEN_FRAME uint F_00b00850(unsigned int gen_a0)
{
  GEN_ENTER(0xb00850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00890 */
GEN_FRAME uint GEN_THISCALL F_00b00890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00b008a0 */
GEN_FRAME uint GEN_THISCALL F_00b008a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb008a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00b008e0 */
GEN_FRAME uint GEN_THISCALL F_00b008e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb008e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00b00930 */
GEN_FRAME uint GEN_STDCALL F_00b00930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x135);
  return uVar1;
}

/* ref: FUN_00b00950 */
GEN_FRAME uint GEN_THISCALL F_00b00950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00950u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b009e0 */
GEN_FRAME uint GEN_STDCALL F_00b009e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb009e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x135);
  return uVar1;
}

/* ref: FUN_00b00a20 */
GEN_FRAME uint GEN_THISCALL F_00b00a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00a20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00a60 */
GEN_FRAME byte F_00b00a60(void)
{
  GEN_ENTER(0xb00a60u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b00a70 */
GEN_FRAME byte F_00b00a70(void)
{
  GEN_ENTER(0xb00a70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b00a80 */
GEN_FRAME byte F_00b00a80(void)
{
  GEN_ENTER(0xb00a80u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00b00ae0 */
GEN_FRAME uint F_00b00ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb00ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00af0 */
GEN_FRAME uint F_00b00af0(unsigned int gen_a0)
{
  GEN_ENTER(0xb00af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00b00 */
GEN_FRAME uint F_00b00b00(unsigned int gen_a0)
{
  GEN_ENTER(0xb00b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00b00ba0 */
GEN_FRAME byte GEN_THISCALL F_00b00ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00b00bd0 */
GEN_FRAME uint GEN_THISCALL F_00b00bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00b00bf0 */
GEN_FRAME uint GEN_THISCALL F_00b00bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00bf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b00c20 */
GEN_FRAME uint GEN_THISCALL F_00b00c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  if (param_2 == 0) {
    return *(uint *)*in_ecx;
  }
  piVar1 = (int *)(*in_ecx + param_2 * 4);
  return *piVar1 - piVar1[-1];
}

/* ref: FUN_00b00c40 */
GEN_FRAME uint GEN_THISCALL F_00b00c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 == 0) {
    return *(uint *)((int)this + 0x10);
  }
  return *(int *)(*(int *)this - 4 + param_1 * 4) + *(int *)((int)this + 0x10);
}

/* ref: FUN_00b00cc0 */
GEN_FRAME uint GEN_STDCALL F_00b00cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00b00ce0 */
GEN_FRAME unsigned int GEN_STDCALL F_00b00ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00b00d30 */
GEN_FRAME uint GEN_THISCALL F_00b00d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
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

/* ref: FUN_00b00d70 */
GEN_FRAME uint GEN_THISCALL F_00b00d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00b00da0 */
GEN_FRAME uint GEN_THISCALL F_00b00da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00da0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00db0 */
GEN_FRAME uint GEN_THISCALL F_00b00db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00dc0 */
GEN_FRAME byte GEN_THISCALL F_00b00dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b00de0 */
GEN_FRAME uint GEN_THISCALL F_00b00de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb00de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b00df0 */
GEN_FRAME byte GEN_THISCALL F_00b00df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00b00e10 */
GEN_FRAME uint GEN_STDCALL F_00b00e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b00e40 */
GEN_FRAME uint GEN_STDCALL F_00b00e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b00e70 */
GEN_FRAME uint GEN_STDCALL F_00b00e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb00e70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00b00f00 */
GEN_FRAME byte GEN_THISCALL F_00b00f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb00f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00b00f20 */
GEN_NOFRAME uint GEN_THISCALL F_00b00f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 - 1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 - 1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x2c2);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c2);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00b00fa0 */
GEN_NOFRAME uint GEN_THISCALL F_00b00fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb00fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c2);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b01010 */
GEN_FRAME uint GEN_THISCALL F_00b01010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00b01050 */
GEN_FRAME uint F_00b01050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00b01070 */
GEN_FRAME unsigned int F_00b01070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00b010b0 */
GEN_FRAME uint GEN_THISCALL F_00b010b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb010b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_00b010d0 */
GEN_FRAME uint GEN_THISCALL F_00b010d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb010d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b010e0 */
GEN_FRAME byte GEN_THISCALL F_00b010e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb010e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b01100 */
GEN_FRAME uint GEN_THISCALL F_00b01100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b01110 */
GEN_FRAME byte GEN_THISCALL F_00b01110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00b01130 */
GEN_FRAME uint F_00b01130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b01150 */
GEN_FRAME unsigned int F_00b01150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00b01180 */
GEN_FRAME uint F_00b01180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b011a0 */
GEN_FRAME uint F_00b011a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb011a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b011c0 */
GEN_FRAME uint F_00b011c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb011c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00b011e0 */
GEN_FRAME unsigned int F_00b011e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb011e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01210 */
GEN_NOFRAME uint GEN_THISCALL F_00b01210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00b00f20(this GEN_EDX_FWD);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c2);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00b01250 */
GEN_FRAME uint GEN_THISCALL F_00b01250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b01280 */
GEN_NOFRAME uint GEN_THISCALL F_00b01280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b01300 */
GEN_NOFRAME uint GEN_THISCALL F_00b01300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b01340 */
GEN_FRAME uint GEN_THISCALL F_00b01340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00b01380 */
GEN_FRAME uint GEN_THISCALL F_00b01380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00b013b0 */
GEN_FRAME uint GEN_THISCALL F_00b013b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb013b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_00b013e0 */
GEN_FRAME uint GEN_THISCALL F_00b013e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb013e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b013f0 */
GEN_FRAME uint GEN_THISCALL F_00b013f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb013f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b01400 */
GEN_FRAME uint GEN_THISCALL F_00b01400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00b01410 */
GEN_FRAME uint GEN_THISCALL F_00b01410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00b01420 */
GEN_FRAME uint GEN_STDCALL F_00b01420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b01430 */
GEN_FRAME uint GEN_STDCALL F_00b01430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b01440 */
GEN_FRAME unsigned int F_00b01440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01470 */
GEN_FRAME uint F_00b01470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xb01470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar1 = uVar3 >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar5 + 8);
    }
    uVar4 = uVar4 - 1;
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar1 * 4))) + (uVar3 & 3) * 4)));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_00b01520 */
GEN_FRAME uint F_00b01520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xb01520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    uVar3 = uVar1 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar5 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_00b015d0 */
GEN_FRAME unsigned int F_00b015d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb015d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01600 */
GEN_FRAME unsigned int F_00b01600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00b01630 */
GEN_FRAME unsigned int F_00b01630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01630u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: FUN_00b01650 */
GEN_FRAME unsigned int F_00b01650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b01680 */
GEN_FRAME unsigned int F_00b01680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b016b0 */
GEN_NOFRAME uint GEN_THISCALL F_00b016b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb016b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b01730 */
GEN_FRAME uint GEN_THISCALL F_00b01730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00b01750 */
GEN_FRAME uint GEN_THISCALL F_00b01750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_00b01770 */
GEN_NOFRAME uint GEN_THISCALL F_00b01770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b017b0 */
GEN_FRAME uint GEN_THISCALL F_00b017b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb017b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00b017f0 */
GEN_FRAME uint GEN_THISCALL F_00b017f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb017f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_00b01830 */
GEN_FRAME unsigned int F_00b01830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01860 */
GEN_FRAME uint F_00b01860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb01860u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00b01470(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00b018e0 */
GEN_FRAME uint F_00b018e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xb018e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00b01520(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10,param_1);
  return param_1;
}

/* ref: FUN_00b01960 */
GEN_FRAME uint GEN_THISCALL F_00b01960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb01960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b019b0 */
GEN_FRAME uint GEN_THISCALL F_00b019b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb019b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00b01a10 */
GEN_FRAME unsigned int F_00b01a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01a10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b01a40 */
GEN_FRAME unsigned int F_00b01a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01a70 */
GEN_FRAME unsigned int F_00b01a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01a70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01a90 */
GEN_FRAME unsigned int F_00b01a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01a90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b01ac0 */
GEN_FRAME unsigned int F_00b01ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00b01af0 */
GEN_NOFRAME uint GEN_THISCALL F_00b01af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x18) - iVar1,0x135);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00b01b50 */
GEN_FRAME uint GEN_THISCALL F_00b01b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  if (*(uint *)((int)this + 0x10) <= param_1) {
                    
    F_00c457e7("invalid deque<T> subscript");
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar2;
  }
  uVar1 = *(int *)((int)this + 0xc) + param_1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar3;
  }
  uVar4 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b01bc0 */
GEN_NOFRAME uint GEN_THISCALL F_00b01bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar2;
  }
  uVar1 = (*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - 1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar4;
  }
  uVar3 = uVar1 >> 2;
  if (*(uint *)(iVar5 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar5 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4;
}

/* ref: FUN_00b01c10 */
GEN_FRAME uint GEN_THISCALL F_00b01c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xb01c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00b01860(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 - 1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_00b018e0(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 - 1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_00b01da0 */
GEN_FRAME unsigned int F_00b01da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b01dd0 */
GEN_FRAME unsigned int F_00b01dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01e00 */
GEN_NOFRAME uint GEN_THISCALL F_00b01e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00b01e30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b01e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb01e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00b01e60 */
GEN_FRAME unsigned int F_00b01e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb01e60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00b01e80 */
GEN_FRAME unsigned int GEN_STDCALL F_00b01e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00b01eb0 */
GEN_FRAME unsigned int F_00b01eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb01eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00b01ee0 */
GEN_FRAME uint GEN_THISCALL F_00b01ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb01ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x2c2);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c2);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00b02060 */
GEN_NOFRAME uint GEN_THISCALL F_00b02060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb02060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 0x14);
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 != uVar3) {
    uVar3 = F_00c46e20(uVar2,uVar3,0);
    *(uint *)((int)this + 0x14) = uVar2;
  }
  return uVar3;
}

/* ref: FUN_00b020b0 */
GEN_FRAME uint GEN_THISCALL F_00b020b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb020b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x135);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x135);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00b02160 */
GEN_FRAME unsigned int GEN_STDCALL F_00b02160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb02160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_00b02190 */
GEN_FRAME uint GEN_THISCALL F_00b02190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb02190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (((*(byte *)((int)this + 0xc) & 3) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00b01ee0(this GEN_EDX_FWD,1);
  }
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 8) * 4;
  }
  uVar4 = iVar3 - 1;
  uVar5 = uVar4 >> 2;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x2c2);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) + (uVar4 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return (uint)puVar1;
}

/* ref: FUN_00b02210 */
GEN_FRAME uint GEN_THISCALL F_00b02210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb02210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = *(uint *)((int)this + 0x10);
  uVar2 = uVar6;
  if (uVar6 <= param_1) {
    while (uVar2 < param_1) {
      if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
         (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
        F_00b01ee0(this GEN_EDX_FWD,1);
      }
      uVar2 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      uVar6 = uVar2 >> 2;
      if (*(uint *)((int)this + 8) <= uVar6) {
        uVar6 = uVar6 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) == 0) {
        uVar3 = F_004296a0(0x10,0,0x2c2);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4))) = uVar3;
      }
      uVar6 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar6 * 4)));
      puVar1 = ((undefined4 *)GEN_TOP((uVar6 + (uVar2 & 3) * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      uVar2 = *(uint *)((int)this + 0x10);
    }
    return uVar6;
  }
  uVar8 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar8 = *puVar1;
  }
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  piVar5 = (int *)0x0;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    piVar5 = *(int * PTR32 *)*piVar4;
  }
  uVar7 = 0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    uVar7 = *(undefined4 *)*piVar5;
  }
  uVar2 = F_00b01c10(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar7,0,param_1 + *(int *)((int)this + 0xc),uVar8,0,
                       *(int *)((int)this + 0xc) + uVar6);
  return uVar2;
}

/* ref: FUN_00b02320 */
GEN_FRAME uint GEN_THISCALL F_00b02320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb02320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x135);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x135);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00b023b0 */
GEN_FRAME uint GEN_THISCALL F_00b023b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb023b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b02320(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b02320(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b02410 */
GEN_FRAME uint GEN_THISCALL F_00b02410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb02410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00b020b0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00b020b0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00b02480 */
GEN_FRAME uint GEN_THISCALL F_00b02480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb02480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_1 != 0) {
    F_00b02320((undefined4 *)((int)this + 0x10) GEN_EDX_FWD,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00b024b0 */
GEN_FRAME uint GEN_THISCALL F_00b024b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb024b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00b023b0(this GEN_EDX_ARG,(uVar2 - iVar3) + param_1);
    puVar4 = *(undefined1 * PTR32 *)((int)this + 4);
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: FUN_00b02520 */
GEN_FRAME uint GEN_THISCALL F_00b02520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb02520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b02410(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00b02410(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00b02590 */
GEN_FRAME uint GEN_THISCALL F_00b02590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb02590u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  iVar1 = (*(int *)&gen_args[2]) + iVar3;
  F_00b024b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) GEN_EDX_FWD,iVar1);
  F_00c46aa0(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + iVar3,(*(undefined4 *)&gen_args[1]),(*(int *)&gen_args[2]));
  (*(int *)&gen_args[2]) = iVar1;
  uVar2 = F_00b02520((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)&gen_args[2]));
  return uVar2;
}

/* ref: Component::Log::LogModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b025e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb025e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00b004a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b02610 */
GEN_FRAME float10 F_00b02610(float gen_a0)
{
  GEN_ENTER(0xb02610u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b02630 */
GEN_NOFRAME byte F_00b02630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb02630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if ((char)param_1 != '\0') {
    puVar3 = (undefined4 *)&REFG(undefined, 0x10ec5b4);
    if (param_5 != (undefined4 *)0x0) {
      puVar3 = param_5;
    }
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (this != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_3;
      (*(undefined4 *)(gen_frame + 0x28)) = param_2;
      (*(undefined4 *)(gen_frame + 0x24)) = param_4;
      (*(undefined1 *)(gen_frame + 0x2d)) = (undefined1)param_6;
      (*(char *)(gen_frame + 0x2c)) = (char)param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x12a;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
      puVar4 = ((undefined4 *)(gen_frame + 0x2e));
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      bVar1 = F_00974da0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      if (bVar1 != 0) {
        F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
        return 1;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b02710 */
GEN_FRAME uint F_00b02710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 0xc);
  uVar3 = bVar1 - 2;
  if (0xe < uVar3) {
    return uVar3;
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb027e0) + bVar1 + 2)));
  switch((unsigned int)(uintptr_t)(bVar1)) {
  case 2: ;
    uVar5 = 0;
    break;
  default: ;
    goto switchD_00b02745_caseD_3;
  case 0xb: ;
    uVar5 = 5;
    break;
  case 0xc: ;
    uVar5 = 3;
    break;
  case 0xe: ;
    uVar5 = 7;
    break;
  case 0xf: ;
  case 0x10: ;
    uVar5 = 0xd;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
  piVar4 = (int *)F_00435440(uVar3 GEN_EDX_ARG,uVar5);
  uVar3 = 0;
  if (((piVar4 != (int *)0x0) &&
      (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_ARG,param_2), *(char *)(param_2 + 0xc) == '\x02'))
     && (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG), 1 < uVar3)) {
    uVar5 = 1;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
    piVar2 = (int *)F_00435440(uVar3 GEN_EDX_ARG,uVar5);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    if (0 < piVar2[6]) {
      piVar2[6] = piVar2[6] - 1;
    }
    uVar3 = F_0042e430(piVar2 + 9 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  }
switchD_00b02745_caseD_3: ;
  return uVar3;
}

/* ref: FUN_00b02800 */
GEN_FRAME uint F_00b02800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 8;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b02840 */
GEN_FRAME uint F_00b02840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = param_2[4];
    if (iVar5 == 0) {
      uVar4 = 0x50;
      pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      F_0046a630(pvVar2 GEN_EDX_ARG,uVar4);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      F_0046b5e0(iVar5);
    }
    uVar4 = 8;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar2 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar4);
    if (pvVar2 != (undefined *)0x0) {
      F_00436380(pvVar2 GEN_EDX_ARG,(uint)*(byte *)(param_2 + 5));
      F_004363a0(pvVar2 GEN_EDX_ARG,param_2[2],param_2[3]);
      F_004363d0(pvVar2 GEN_EDX_ARG,*param_2,param_2[1]);
      F_00436400(pvVar2 GEN_EDX_ARG,(uint)*(byte *)((int)param_2 + 0x15));
      F_00440970(pvVar2 GEN_EDX_ARG,(int)param_2 + 0x16);
    }
    uVar4 = 0;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar2 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar4);
    if (pvVar2 != (undefined *)0x0) {
      F_00439b70(pvVar2 GEN_EDX_ARG,param_2);
    }
    uVar4 = 3;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar2 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar4);
    if (pvVar2 != (undefined *)0x0) {
      F_00445020(pvVar2 GEN_EDX_ARG,param_2);
    }
    uVar4 = 0xb;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar2 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar4);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_0044ab60(pvVar2 GEN_EDX_ARG,param_2);
    }
  }
  return uVar3;
}

/* ref: FUN_00b02940 */
GEN_FRAME uint F_00b02940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 8;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      F_00436380(this GEN_EDX_ARG,(uint)*(byte *)(param_2 + 4));
      F_004363a0(this GEN_EDX_ARG,param_2[2],param_2[3]);
      F_004363d0(this GEN_EDX_ARG,*param_2,param_2[1]);
      F_00436400(this GEN_EDX_ARG,(uint)*(byte *)((int)param_2 + 0x11));
      uVar2 = F_00440970(this GEN_EDX_ARG,(int)param_2 + 0x12);
    }
  }
  return uVar2;
}

/* ref: FUN_00b029c0 */
GEN_FRAME uint F_00b029c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb029c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 8;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436430(this GEN_EDX_ARG,*param_2,param_2 + 1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b02a00 */
GEN_FRAME uint F_00b02a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02a00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  int * this;
  undefined * this_00;
  ulonglong uVar7;
  undefined4 uVar8;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  uVar1 = *((ushort *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1)));
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar4 = piVar3;
  if ((piVar3 != (int *)0x0) && ((*(undefined4 * PTR32 *)&gen_args[1])[7] == 0)) {
    piVar4 = (*(undefined4 * PTR32 *)&gen_args[1]) + 6;
    (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xffffff00)));
    uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    gen_piece_set(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3, (unsigned long long)(SUB43(puVar2,1)));
    if (*piVar4 == 0xd1) {
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),1)));
      uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    else if (*piVar4 == 0xd2) {
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3) << 8)));
      uVar5 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)uVar5;
    if (uVar1 == 2) {
      uVar8 = 2;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG);
      pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar8);
      uVar8 = 3;
      uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG);
      this = (int *)F_00435440(uVar5 GEN_EDX_ARG,uVar8);
      piVar4 = this;
      if ((pvVar6 != (undefined *)0x0) && (this != (int *)0x0)) {
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG)));
        uVar7 = F_0043f9f0(this_00 GEN_EDX_ARG);
        if ((puVar2[4] == (int)uVar7) && (puVar2[5] == (int)(uVar7 >> 0x20))) {
          F_00439280(pvVar6 GEN_EDX_ARG,*puVar2,puVar2[1],(*(undefined4 * PTR32 *)&gen_args[1]));
        }
        uVar7 = F_004396b0(this GEN_EDX_ARG);
        piVar4 = (int *)uVar7;
        if ((piVar4 == (int *)puVar2[2]) && ((int)(uVar7 >> 0x20) == puVar2[3])) {
          piVar4 = (int *)F_00439950(this GEN_EDX_ARG,puVar2[4],puVar2[5],(*(undefined4 * PTR32 *)&gen_args[1]));
        }
      }
    }
    else {
      piVar4 = (int *)(uVar1 - 3);
      if (piVar4 == (int *)0x0) {
        uVar8 = 0xb;
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3 GEN_EDX_ARG);
        pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar8);
        piVar4 = (int *)0x0;
        if (pvVar6 != (undefined *)0x0) {
          uVar5 = F_004364f0(pvVar6 GEN_EDX_ARG,*puVar2,puVar2[1]);
          return uVar5;
        }
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00b02b20 */
GEN_FRAME uint F_00b02b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    bVar1 = *param_2;
    if (((bVar1 & 1) != 0) || (bVar1 == 0)) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10ec5b5),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2 + 1,REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x54));
      uVar6 = 3;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_00459b00(this GEN_EDX_ARG,uVar6,puVar7,uVar3,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      piVar4 = (int *)uVar5;
    }
    if ((bVar1 & 4) != 0) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2 GEN_EDX_ARG,param_2 + 1,5,1,1)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)piVar4;
}

/* ref: FUN_00b02be0 */
GEN_FRAME uint F_00b02be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  int * piVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar4 = piVar2;
  if (piVar2 != (int *)0x0) {
    bVar1 = *param_2;
    if (((bVar1 & 1) != 0) || (bVar1 == 0)) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10ec5b6),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2 + 1,REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x54));
      uVar6 = 3;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_00459b00(this GEN_EDX_ARG,uVar6,puVar7,uVar3,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
      piVar4 = (int *)uVar5;
    }
    if ((bVar1 & 4) != 0) {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2 GEN_EDX_ARG,param_2 + 1,5,1,1)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return (uint)piVar4;
}

/* ref: FUN_00b02ca0 */
GEN_FRAME uint F_00b02ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = param_2[1];
    uVar3 = *param_2;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG)));
    uVar2 = F_00435460(this GEN_EDX_ARG,uVar3,uVar4);
  }
  return uVar2;
}

/* ref: FUN_00b02cd0 */
GEN_FRAME uint F_00b02cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb02cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this;
  ulonglong uVar4;
  undefined4 uVar5;
  uint * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  ((uint *)(gen_frame + 0xc8))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar2 == (int *)0x0) goto LAB_00b02e58;
  uVar3 = *param_2;
  uVar1 = param_2[1];
  if ((uVar3 & uVar1) == 0xffffffff) {
    puVar6 = param_2 + 2;
    uVar3 = 0xffffffff;
    if ((char)*puVar6 == '\0') goto LAB_00b02e58;
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10ec5c6),REFG(undefined4, 0x108cc50));
LAB_00b02e1c: ;
    uVar8 = 0;
    uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar6,REFG(undefined4, 0x108cc50));
    puVar7 = ((undefined1 *)(gen_frame + 0x54));
    uVar5 = 0x39;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
  }
  else {
    if ((char)param_2[2] == '\0') {
      ((uint *)(gen_frame + 0xc8))[0] = 0;
      ((uint *)(gen_frame + 0xc8))[1] = 0;
      ((uint *)(gen_frame + 0xc8))[2] = 0;
      ((uint *)(gen_frame + 0xc8))[3] = 0;
      ((uint *)(gen_frame + 0xc8))[4] = 0;
      ((uint *)(gen_frame + 0xc8))[5] = 0;
      ((uint *)(gen_frame + 0xc8))[6] = 0;
      ((uint *)(gen_frame + 0xc8))[7] = 0;
      F_00c472af(((uint *)(gen_frame + 0xc8)),0x20,&REFG(undefined, 0x10ec5c0),uVar3,uVar1);
      F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10ec5c5),REFG(undefined4, 0x108cc50));
      puVar6 = ((uint *)(gen_frame + 0xc8));
      goto LAB_00b02e1c;
    }
    F_00c48350(((undefined1 *)(gen_frame + 0xa8)),0,0x40);
    F_00c472af(((undefined1 *)(gen_frame + 0xa8)),0x40,"%llu %s",uVar3,uVar1,param_2 + 2);
    F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x10ec5b7),REFG(undefined4, 0x108cc50));
    uVar8 = 0;
    uVar3 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa8)),REFG(undefined4, 0x108cc50));
    puVar7 = ((undefined1 *)(gen_frame + 0x54));
    uVar5 = 0x39;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x39,puVar7,uVar3,uVar8)));
  }
  F_00459b00(this GEN_EDX_ARG,uVar5,puVar7,uVar3,uVar8);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  uVar3 = (uint)uVar4;
LAB_00b02e58: ;
  F_00c47745(((uint *)(gen_frame + 0xc8))[8] ^ (uint)(uint)(gen_frame + 0xec) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00b02e70 */
GEN_FRAME uint F_00b02e70(unsigned int gen_a0)
{
  GEN_ENTER(0xb02e70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG)));
    uVar5 = F_00435450(pvVar2 GEN_EDX_ARG);
    if (((uint)uVar5 & 0x800) == 0x800) {
      uVar4 = 0x800;
    }
    else {
      iVar7 = *param_1;
      if (iVar7 == 0) {
        uVar8 = 0xffffffff;
        uVar4 = (uint)(*(byte *)((int)param_1 + 5) & 1);
        iVar3 = (int)param_1 + 6;
        uVar6 = 1;
        pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        uVar4 = F_0046acc0(pvVar2 GEN_EDX_ARG,uVar6,iVar3,uVar4,iVar7,uVar8);
        return uVar4;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar4 = F_0046b5e0(iVar7);
    }
  }
  return uVar4;
}

/* ref: FUN_00b02ef0 */
GEN_FRAME uint F_00b02ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb02ef0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG)));
    uVar6 = F_00435450(pvVar2 GEN_EDX_ARG);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      uVar8 = 1;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      piVar4 = (int *)F_00435440(uVar3 GEN_EDX_ARG,uVar8);
      uVar3 = 0;
      if (piVar4 != (int *)0x0) {
        if (((uVar6 & 0x800) == 0) && (*(char *)((int)param_1 + 5) == '\0')) {
          uVar9 = 0xffffffff;
          uVar3 = (uint)(*(byte *)((int)param_1 + 6) & 1);
          uVar7 = 0;
          iVar5 = (int)param_1 + 7;
          uVar8 = 0x3f;
          pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          F_0046acc0(pvVar2 GEN_EDX_ARG,uVar8,iVar5,uVar3,uVar7,uVar9);
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
        if (0 < piVar4[6]) {
          piVar4[6] = piVar4[6] - 1;
        }
        uVar3 = F_0042e430(piVar4 + 9 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
      }
    }
    else if ((uVar6 & 0x800) == 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar3 = F_0046b5e0(uVar3);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00b02fe0 */
GEN_FRAME uint F_00b02fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xb02fe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  int * this;
  undefined * pvVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar9 = 1;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar9);
    uVar2 = 0;
    if (this != (int *)0x0) {
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG)));
      uVar5 = F_00435450(pvVar3 GEN_EDX_ARG);
      uVar2 = *(byte *)(param_1 + 0xe) - 1;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        if (this[6] == 0) {
          if ((uVar5 & 0x800) == 0) {
            uVar8 = 0xffffffff;
            uVar2 = (uint)(*(byte *)(param_1 + 0xf) & 1);
            uVar7 = 0;
            iVar4 = param_1 + 0x10;
            uVar9 = 3;
            pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
            F_0046acc0(pvVar3 GEN_EDX_ARG,uVar9,iVar4,uVar2,uVar7,uVar8);
          }
          ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG,param_1,1);
          uVar2 = F_00b06f80(this + 5 GEN_EDX_ARG,param_1 + 0x10,*(undefined4 *)(param_1 + 8));
          return uVar2;
        }
        break;
      case 1: ;
        uVar6 = F_00438660(this GEN_EDX_ARG,param_1 + 0x10);
        uVar2 = 0;
        if (uVar6 != 0) {
          if ((uVar5 & 0x800) == 0) {
            uVar8 = 0xffffffff;
            uVar2 = (uint)(*(byte *)(param_1 + 0xf) & 1);
            uVar7 = 0;
            iVar4 = param_1 + 0x10;
            uVar9 = 2;
            pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
            F_0046acc0(pvVar3 GEN_EDX_ARG,uVar9,iVar4,uVar2,uVar7,uVar8);
          }
          ((GEN_TCODE *)*(gen_code32 *)(*this + 8))(this GEN_EDX_ARG,param_1,1);
          uVar2 = F_0046e8b0(this + 5 GEN_EDX_ARG);
          return uVar2;
        }
        break;
      case 2: ;
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this + 8))(this GEN_EDX_ARG,param_1,1);
        return uVar2;
      case 4: ;
        uVar2 = 0;
        if ((uVar5 & 0x800) == 0) {
          uVar8 = 0xffffffff;
          uVar2 = (uint)(*(byte *)(param_1 + 0xf) & 1);
          uVar7 = 0;
          iVar4 = param_1 + 0x10;
          uVar9 = 0x3e;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          uVar2 = F_0046acc0(pvVar3 GEN_EDX_ARG,uVar9,iVar4,uVar2,uVar7,uVar8);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b03190 */
GEN_FRAME uint F_00b03190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  int * piVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar3 = piVar2;
  if ((piVar2 != (int *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    uVar4 = 0xb;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG)));
    bVar1 = F_00435480(this GEN_EDX_ARG,uVar4);
    piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if (bVar1 == 0) {
      uVar4 = *(undefined4 *)(param_2 + 4);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
      piVar3 = (int *)F_0046b5e0(uVar4);
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00b031e0 */
GEN_FRAME uint F_00b031e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb031e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * this;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  uVar13 = 0;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
  this = (int *)F_00435440(uVar3 GEN_EDX_ARG,uVar13);
  if (this == (int *)0x0) {
    return 0;
  }
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG)));
  uVar6 = F_00435450(pvVar4 GEN_EDX_ARG);
  if (((uint)uVar6 & 0x800) == 0x800) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_2 + 0x12))) {
    case 3: ;
    case 5: ;
    case 7: ;
    case 0xd: ;
      F_0044e4e0(this GEN_EDX_ARG);
      goto switchD_00b03254_caseD_8;
    case 4: ;
      iVar5 = param_2[3];
      iVar11 = param_2[2];
      break;
    case 6: ;
    case 0xc: ;
      iVar5 = param_2[1];
      iVar11 = *param_2;
      break;
    default: ;
      goto switchD_00b03254_caseD_8;
    }
    F_00453e40(this GEN_EDX_ARG,iVar11,iVar5);
switchD_00b03254_caseD_8: ;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x18))(this GEN_EDX_ARG);
    if ((uVar3 == 1) && (*(char *)((int)param_2 + 0x12) == '\0')) {
      return 1;
    }
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x10))(this GEN_EDX_ARG);
    return uVar3;
  }
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG)));
  uVar6 = F_0043f9f0(pvVar4 GEN_EDX_ARG);
  iVar5 = (int)uVar6;
  uVar3 = -(uint)((char)param_2[5] != '\0') & (uint)(param_2 + 5);
  (*(uint *)(gen_frame + 0xc)) = -(uint)((char)param_2[0xd] != '\0') & (uint)(param_2 + 0xd);
  (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),(char)param_2[4]) & 0xffffff01;
  (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)((int)param_2 + 0x11)) & 0xffffff01;
  if (*(char *)((int)param_2 + 0x12) != '\x0f') {
    if ((*param_2 != 0 || param_2[1] != 0) && (uVar3 == 0)) {
      uVar3 = F_00453f00(this GEN_EDX_ARG,*param_2,param_2[1]);
      bVar1 = F_00453ea0(this GEN_EDX_ARG,*param_2,param_2[1]);
      (*(uint *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x10)), 1, 3),bVar1) & 0xffffff01;
    }
    if ((param_2[2] != 0 || param_2[3] != 0) && ((*(uint *)(gen_frame + 0xc)) == 0)) {
      (*(uint *)(gen_frame + 0xc)) = F_00453f00(this GEN_EDX_ARG,param_2[2],param_2[3]);
      bVar1 = F_00453ea0(this GEN_EDX_ARG,param_2[2],param_2[3]);
      (*(uint *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x14)), 1, 3),bVar1) & 0xffffff01;
    }
  }
  (*(int *)(gen_frame + 0x8)) = (int)(uVar6 >> 0x20);
  uVar9 = (*(uint *)(gen_frame + 0x10));
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)param_2 + 0x12))) {
  case 1: ;
    if ((param_2[2] == iVar5) && (param_2[3] == (*(int *)(gen_frame + 0x8)))) {
      if (uVar3 == 0) break;
      uVar13 = 0x3d;
      goto LAB_00b03602;
    }
    if ((*(uint *)(gen_frame + 0xc)) == 0) break;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    uVar13 = 0x3c;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x3c,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    uVar9 = (*(uint *)(gen_frame + 0x14));
    goto LAB_00b0360b;
  case 2: ;
    if ((param_2[2] == iVar5) && (param_2[3] == (*(int *)(gen_frame + 0x8)))) {
LAB_00b033c7: ;
      if (uVar3 == 0) break;
      uVar13 = 0x41;
    }
    else {
      if ((*param_2 == iVar5) && (param_2[1] == (*(int *)(gen_frame + 0x8)))) {
        if ((*(uint *)(gen_frame + 0xc)) == 0) break;
        uVar12 = 0xffffffff;
        uVar10 = 0;
        uVar13 = 0x40;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x40,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
        uVar3 = (*(uint *)(gen_frame + 0xc));
        uVar9 = (*(uint *)(gen_frame + 0x14));
        goto LAB_00b0360b;
      }
      if ((*(uint *)(gen_frame + 0xc)) == 0) break;
      uVar13 = 0x42;
      uVar3 = (*(uint *)(gen_frame + 0xc));
      uVar9 = (*(uint *)(gen_frame + 0x14));
    }
    goto LAB_00b03602;
  case 3: ;
    if ((*param_2 == iVar5) && (param_2[1] == (*(int *)(gen_frame + 0x8)))) {
      uVar13 = 0x48;
    }
    else {
      uVar13 = 0x49;
    }
    goto LAB_00b03543;
  case 4: ;
    if ((*param_2 == iVar5) && (param_2[1] == (*(int *)(gen_frame + 0x8)))) {
      if ((*(uint *)(gen_frame + 0xc)) != 0) {
        uVar12 = 0xffffffff;
        uVar10 = 0;
        uVar13 = 0x43;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x43,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
        uVar3 = (*(uint *)(gen_frame + 0xc));
        uVar9 = (*(uint *)(gen_frame + 0x14));
LAB_00b0347f: ;
        F_0046acc0(pvVar4 GEN_EDX_ARG,uVar13,uVar3,uVar9,uVar10,uVar12);
      }
    }
    else if ((*(uint *)(gen_frame + 0xc)) != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x45;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      uVar3 = (*(uint *)(gen_frame + 0xc));
      uVar9 = (*(uint *)(gen_frame + 0x14));
      goto LAB_00b0347f;
    }
    F_00453e40(this GEN_EDX_ARG,param_2[2],param_2[3]);
    break;
  case 5: ;
    goto joined_r0x00b034df;
  case 6: ;
    if (uVar3 != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x45;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046acc0(pvVar4 GEN_EDX_ARG,uVar13,uVar3,(*(uint *)(gen_frame + 0x10)),uVar10,uVar12);
    }
    F_00453e40(this GEN_EDX_ARG,*param_2,param_2[1]);
    break;
  case 7: ;
    uVar3 = (*(uint *)(gen_frame + 0xc));
    uVar9 = (*(uint *)(gen_frame + 0x14));
joined_r0x00b034df: ;
    if (uVar3 != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x44;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046acc0(pvVar4 GEN_EDX_ARG,uVar13,uVar3,uVar9,uVar10,uVar12);
    }
    F_0044e4e0(this GEN_EDX_ARG);
    break;
  case 10: ;
    if (uVar3 != 0) {
      uVar12 = 0xffffffff;
      uVar10 = 0;
      uVar13 = 0x54;
      uVar7 = uVar3;
      uVar8 = (*(uint *)(gen_frame + 0x10));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046acc0(pvVar4 GEN_EDX_ARG,uVar13,uVar7,uVar8,uVar10,uVar12);
    }
    if (param_2[2] == 0 && param_2[3] == 0) break;
    if (uVar6 == CONCAT44(param_2[3],param_2[2])) goto LAB_00b033c7;
    if ((*(uint *)(gen_frame + 0xc)) == 0) break;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    uVar13 = 0x42;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x42,(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)),0,0xffffffff)));
    uVar3 = (*(uint *)(gen_frame + 0xc));
    uVar9 = (*(uint *)(gen_frame + 0x14));
    goto LAB_00b0360b;
  case 0xb: ;
    if ((uVar6 == 0) || (((iVar5 == *param_2 && ((*(int *)(gen_frame + 0x8)) == param_2[1])) || (uVar3 == 0)))) break;
    uVar13 = 0x55;
    goto LAB_00b03602;
  case 0xc: ;
    if ((uVar3 != 0) && ((*(uint *)(gen_frame + 0xc)) != 0)) {
      uVar13 = 0x47;
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      F_0046acc0(pvVar4 GEN_EDX_ARG,uVar13,uVar3,(*(uint *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)));
    }
    F_00453e40(this GEN_EDX_ARG,*param_2,param_2[1]);
    break;
  case 0xd: ;
    uVar13 = 0x46;
LAB_00b03543: ;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
    F_0046a630(pvVar4 GEN_EDX_ARG,uVar13);
    F_0044e4e0(this GEN_EDX_ARG);
    break;
  case 0xf: ;
    uVar3 = F_00439b10(this GEN_EDX_ARG,*param_2,param_2[1],(uint)*(byte *)(param_2 + 2));
    if (uVar3 == 0) break;
    uVar9 = 0;
    uVar3 = uVar3 + 0x1c;
    uVar13 = 0x45;
LAB_00b03602: ;
    uVar12 = 0xffffffff;
    uVar10 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
LAB_00b0360b: ;
    F_0046acc0(pvVar4 GEN_EDX_ARG,uVar13,uVar3,uVar9,uVar10,uVar12);
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x18))(this GEN_EDX_ARG);
  if ((uVar3 == 1) && (*(char *)((int)param_2 + 0x12) == '\0')) {
    return 1;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x10))(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00b036a0 */
GEN_FRAME uint F_00b036a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb036a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 4;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar3 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar6);
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 == 0) {
      if (piVar3 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 4))(piVar3 GEN_EDX_ARG,param_2,1);
      }
      uVar7 = 0xffffffff;
      uVar2 = (uint)(*(byte *)(param_2 + 0x2c) & 1);
      uVar5 = 0;
      iVar4 = param_2 + 8;
      uVar6 = 8;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0046acc0(this GEN_EDX_ARG,uVar6,iVar4,uVar2,uVar5,uVar7);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b5e0(iVar4);
    }
    if (piVar3 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3 GEN_EDX_ARG,param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00b03740 */
GEN_FRAME uint F_00b03740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 4;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar3 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar6);
    iVar4 = *(int *)(param_2 + 0x28);
    if (iVar4 == 0) {
      if (piVar3 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG,param_2,1);
      }
      uVar7 = 0xffffffff;
      uVar2 = (uint)(*(byte *)(param_2 + 0x2c) & 1);
      uVar5 = 0;
      iVar4 = param_2 + 8;
      uVar6 = 9;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0046acc0(this GEN_EDX_ARG,uVar6,iVar4,uVar2,uVar5,uVar7);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b5e0(iVar4);
    }
    if (piVar3 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3 GEN_EDX_ARG,param_1,param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00b037e0 */
GEN_FRAME uint F_00b037e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb037e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 4;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03820 */
GEN_FRAME uint F_00b03820(unsigned int gen_a0)
{
  GEN_ENTER(0xb03820u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar6 = *param_1;
    if (iVar6 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar3 = F_0046b5e0(iVar6);
      return uVar3;
    }
    uVar7 = 0xffffffff;
    uVar3 = (uint)(*(byte *)((int)param_1 + 5) & 1);
    uVar4 = 10;
    iVar5 = (int)param_1 + 6;
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
    F_0046acc0(pvVar2 GEN_EDX_ARG,uVar4,iVar5,uVar3,iVar6,uVar7);
    uVar4 = 5;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar2 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar4);
    uVar3 = 0;
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_00437d60(pvVar2 GEN_EDX_ARG,(int)param_1 + 6);
    }
  }
  return uVar3;
}

/* ref: FUN_00b038a0 */
GEN_FRAME uint F_00b038a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb038a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  uVar14 = 5;
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
  pvVar4 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar14);
  if (pvVar4 == (undefined *)0x0) {
    return 0;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    uVar3 = (uint)*(byte *)((int)param_1 + 5);
    if (uVar3 == 0) {
      F_0044b000(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
      F_00438230(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
      bVar1 = *(byte *)((int)param_1 + 6);
      uVar14 = 0x4f;
    }
    else {
      if (uVar3 != 1) {
        if (uVar3 - 2 != 0) {
          return uVar3 - 2;
        }
        uVar9 = 0xffffffff;
        uVar3 = (uint)(*(byte *)((int)param_1 + 6) & 1);
        uVar7 = 0;
        uVar14 = 0x52;
        iVar5 = (int)param_1 + 7;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,iVar5,uVar3,uVar7,uVar9);
        uVar3 = F_00438230(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
        return uVar3;
      }
      F_0044b000(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
      F_004380d0(pvVar4 GEN_EDX_ARG,(int)param_1 + 7,0,0);
      bVar1 = *(byte *)((int)param_1 + 6);
      uVar14 = 0x4e;
    }
    uVar3 = (uint)(bVar1 & 1);
    iVar5 = (int)param_1 + 7;
    uVar9 = 0xffffffff;
    uVar7 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
    uVar3 = F_0046acc0(pvVar4 GEN_EDX_ARG,uVar14,iVar5,uVar3,uVar7,uVar9);
    return uVar3;
  }
  if (iVar5 != 0xfb5) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
    uVar3 = F_0046b5e0(iVar5);
    return uVar3;
  }
  uVar3 = (uint)*(byte *)((int)param_1 + 5);
  if (uVar3 == 0) {
    F_0044b000(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
    uVar3 = 0xffffffff;
    uVar13 = 0;
    uVar11 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar14 = 0x3c4;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG)));
    uVar8 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar14,uVar7,uVar9);
    iVar5 = 0x4f;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
  }
  else {
    if (uVar3 == 1) {
      F_0044b000(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
      iVar5 = *param_1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
      F_0046b5e0(iVar5);
      uVar3 = F_00438230(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
      return uVar3;
    }
    iVar5 = uVar3 - 2;
    if (iVar5 != 0) goto LAB_00b03999;
    uVar14 = 0xffffffff;
    iVar10 = iVar5;
    iVar12 = iVar5;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG,0x3c4,0,0)));
    uVar8 = 0xb0391e;
    uVar3 = F_0043bd00(pvVar6 GEN_EDX_ARG,iVar10,iVar12,uVar14);
    uVar13 = 0x52;
    uVar11 = 0xb0392a;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG,0x52,uVar3)));
  }
  F_0046acc0(pvVar6 GEN_EDX_ARG,iVar5,uVar8,uVar11,uVar13,uVar3);
LAB_00b03999: ;
  uVar3 = F_00438230(pvVar4 GEN_EDX_ARG,(int)param_1 + 7);
  return uVar3;
}

/* ref: FUN_00b03a90 */
GEN_FRAME uint F_00b03a90(unsigned int gen_a0)
{
  GEN_ENTER(0xb03a90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined * pvVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar8 = 5;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar8);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = *(byte *)((int)param_1 + 0xe) - 1;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        uVar7 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        puVar5 = param_1 + 4;
        uVar8 = 0xb;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        F_0046acc0(pvVar3 GEN_EDX_ARG,uVar8,puVar5,uVar2,uVar6,uVar7);
        F_00b06f80((undefined *)((int)this + 0x20) GEN_EDX_ARG,param_1 + 4,0);
        uVar2 = F_00437f10(this GEN_EDX_ARG,param_1 + 4,*param_1,param_1[1]);
        return uVar2;
      case 1: ;
        uVar7 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        puVar5 = param_1 + 4;
        uVar8 = 0x53;
        puVar4 = puVar5;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        F_0046acc0(pvVar3 GEN_EDX_ARG,uVar8,puVar4,uVar2,uVar6,uVar7);
        F_0044b000(this GEN_EDX_ARG,puVar5);
        uVar2 = F_00438230(this GEN_EDX_ARG,puVar5);
        return uVar2;
      case 3: ;
        uVar7 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        uVar8 = 0x4e;
        puVar5 = param_1 + 4;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        F_0046acc0(pvVar3 GEN_EDX_ARG,uVar8,puVar5,uVar2,uVar6,uVar7);
        uVar2 = F_004380d0(this GEN_EDX_ARG,param_1 + 4,*param_1,param_1[1]);
        return uVar2;
      case 4: ;
        uVar2 = F_00438230(this GEN_EDX_ARG,param_1 + 4);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b03bd0 */
GEN_FRAME uint F_00b03bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  char * pcVar5;
  undefined * pvVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char * pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    iVar14 = *(int *)(param_2 + 8);
    if (iVar14 == 0) {
      uVar12 = 5;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
      piVar4 = (int *)F_00435440(uVar3 GEN_EDX_ARG,uVar12);
      if (piVar4 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG);
      }
      pcVar10 = (char *)(param_2 + 0xd);
      pcVar5 = pcVar10;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar13 = 0xffffffff;
      uVar12 = 0;
      if (pcVar5 != (char *)(param_2 + 0xe)) {
        uVar3 = (uint)(*(byte *)(param_2 + 0xc) & 1);
        uVar8 = 0xc;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
        uVar3 = F_0046acc0(pvVar6 GEN_EDX_ARG,uVar8,pcVar10,uVar3,uVar12,uVar13);
        return uVar3;
      }
      uVar7 = (uint)(*(byte *)(param_2 + 0xc) & 1);
      uVar11 = 0;
      uVar9 = 0;
      uVar8 = 0x3c4;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2 GEN_EDX_ARG)));
      uVar3 = F_0043bd00(pvVar6 GEN_EDX_ARG,uVar8,uVar9,uVar11);
      uVar8 = 0xc;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
      uVar3 = F_0046acc0(pvVar6 GEN_EDX_ARG,uVar8,uVar3,uVar7,uVar12,uVar13);
      return uVar3;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
    uVar3 = F_0046b5e0(iVar14);
  }
  return uVar3;
}

/* ref: FUN_00b03cb0 */
GEN_FRAME uint F_00b03cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 2;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,8);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03d00 */
GEN_FRAME uint F_00b03d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = 7;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar3 = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar4);
    uVar2 = 0;
    if (pvVar3 != (undefined *)0x0) {
      uVar2 = F_00445df0(pvVar3 GEN_EDX_ARG,(int)*param_2);
    }
    if (-1 < *param_2) {
      uVar4 = 0x51;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0046a630(pvVar3 GEN_EDX_ARG,uVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03d60 */
GEN_FRAME uint F_00b03d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 6;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03da0 */
GEN_FRAME uint F_00b03da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 6;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_0044b210(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03de0 */
GEN_FRAME uint F_00b03de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 6;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00438c40(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03e20 */
GEN_FRAME uint F_00b03e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00464170(this GEN_EDX_ARG,*param_2,(uint)*(byte *)(param_2 + 2),
                           (uint)*(byte *)((int)param_2 + 9),(uint)*(byte *)((int)param_2 + 10),
                           param_2[1]);
    }
    iVar4 = param_2[1];
    if (iVar4 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b5e0(iVar4);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03e90 */
GEN_FRAME uint F_00b03e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03ed0 */
GEN_FRAME uint F_00b03ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_004389d0(this GEN_EDX_ARG,param_2,8);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03f10 */
GEN_FRAME uint F_00b03f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00467370(this GEN_EDX_ARG,param_2 + 4,0x14);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03f50 */
GEN_FRAME uint F_00b03f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 9;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_004645b0(this GEN_EDX_ARG,param_2 + 8,0x14);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03f90 */
GEN_FRAME uint F_00b03f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb03f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 10;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b03fd0 */
GEN_FRAME uint F_00b03fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xb03fd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
      uVar3 = (uint)(*(byte *)((int)param_1 + 5) & 1);
      iVar2 = (int)param_1 + 6;
      uVar4 = 0xbe4;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar3 = F_0046acc0(this GEN_EDX_ARG,uVar4,iVar2,uVar3,iVar5,uVar6);
      return uVar3;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    uVar3 = F_0046b5e0(iVar5);
  }
  return uVar3;
}

/* ref: FUN_00b04030 */
GEN_FRAME uint F_00b04030(unsigned int gen_a0)
{
  GEN_ENTER(0xb04030u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined * this_00;
  undefined * pvVar3;
  undefined * this_01;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  pvVar3 = (undefined *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar4 = *param_1;
    if (iVar4 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b5e0(iVar4);
      return uVar2;
    }
    uVar6 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar6);
    uVar6 = 0xe;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this_00 = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar6);
    pvVar3 = this_00;
    if ((this != (undefined *)0x0) && (this_00 != (undefined *)0x0)) {
      if (*(byte *)((int)param_1 + 5) == 0) {
        uVar8 = 9;
        iVar4 = (int)param_1 + 7;
        uVar7 = 0xffffffff;
        uVar5 = 0;
        uVar6 = 0xbe6;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        F_0046acc0(pvVar3 GEN_EDX_ARG,uVar6,uVar5,uVar7,iVar4,uVar8);
        pvVar3 = (undefined *)F_004370f0(this_00 GEN_EDX_ARG);
      }
      else {
        pvVar3 = ((undefined *)GEN_TOP((*(byte *)((int)param_1 + 5) - 1)));
        if (pvVar3 == (undefined *)0x0) {
          uVar7 = 9;
          uVar5 = 0xffffffff;
          uVar6 = 0xbe5;
          iVar4 = (int)param_1 + 7;
          this_01 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          F_0046acc0(this_01 GEN_EDX_ARG,uVar6,pvVar3,uVar5,iVar4,uVar7);
          F_004370f0(this_00 GEN_EDX_ARG);
          F_00441300(this GEN_EDX_ARG,2);
          uVar2 = F_004368e0(this GEN_EDX_ARG,(int)param_1 + 7);
          return uVar2;
        }
      }
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b04120 */
GEN_FRAME uint F_00b04120(unsigned int gen_a0)
{
  GEN_ENTER(0xb04120u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint in_ecx;
  undefined * this;
  undefined * pvVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  pvVar3 = (undefined *)0x0;
  if (piVar1 != (int *)0x0) {
    uVar7 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    uVar2 = F_00435440(uVar2 GEN_EDX_ARG,uVar7);
    uVar7 = 0xe;
    in_ecx = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(in_ecx GEN_EDX_ARG,uVar7);
    pvVar3 = this;
    if ((uVar2 != 0) && (this != (undefined *)0x0)) {
      pvVar3 = ((undefined *)GEN_TOP((*(byte *)((int)param_1 + 0xe) - 1)));
      switch((unsigned int)(uintptr_t)(pvVar3)) {
      case (undefined *)0x0: ;
        uVar5 = F_004370e0(this GEN_EDX_ARG);
        pvVar3 = ((undefined *)GEN_TOP(((uint)uVar5 | (uint)(uVar5 >> 0x20))));
        if (pvVar3 == (undefined *)0x0) {
          uVar8 = 9;
          puVar4 = param_1 + 4;
          uVar9 = 0xffffffff;
          uVar6 = 0;
          uVar7 = 0xbed;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          F_0046acc0(pvVar3 GEN_EDX_ARG,uVar7,uVar6,uVar9,puVar4,uVar8);
          uVar2 = F_00442850(this GEN_EDX_ARG,*param_1,param_1[1],param_1 + 4,param_1[2]);
          return uVar2;
        }
        break;
      case (undefined *)0x1: ;
        uVar5 = F_004370e0(this GEN_EDX_ARG);
        pvVar3 = (undefined *)0x0;
        if (uVar5 != 0) {
          puVar4 = param_1 + 4;
          if (*(char *)(param_1 + 4) == '\0') {
            puVar4 = (undefined4 *)F_0042a990((int)this + 0x1c GEN_EDX_ARG);
          }
          uVar8 = 9;
          uVar9 = 0xffffffff;
          uVar6 = 0;
          uVar7 = 0xbea;
          pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          F_0046acc0(pvVar3 GEN_EDX_ARG,uVar7,uVar6,uVar9,puVar4,uVar8);
          uVar2 = F_004370f0(this GEN_EDX_ARG);
          return uVar2;
        }
        break;
      case (undefined *)0x3: ;
        uVar9 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        uVar7 = 0xbee;
        puVar4 = param_1 + 4;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        F_0046acc0(pvVar3 GEN_EDX_ARG,uVar7,puVar4,uVar2,uVar6,uVar9);
        uVar2 = F_004428f0(this GEN_EDX_ARG,param_1 + 4,(uint)*(byte *)((int)param_1 + 0xd));
        return uVar2;
      case (undefined *)0x4: ;
        uVar9 = 0xffffffff;
        uVar2 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar6 = 0;
        puVar4 = param_1 + 4;
        uVar7 = 0xbef;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        pvVar3 = (undefined *)F_0046acc0(pvVar3 GEN_EDX_ARG,uVar7,puVar4,uVar2,uVar6,uVar9);
      }
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_00b042b0 */
GEN_FRAME uint F_00b042b0(unsigned int gen_a0)
{
  GEN_ENTER(0xb042b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *param_1;
    if (iVar5 == 0) {
      uVar6 = 0xffffffff;
      uVar3 = (uint)(*(byte *)((int)param_1 + 5) & 1);
      iVar2 = (int)param_1 + 6;
      uVar4 = 0x75c;
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar3 = F_0046acc0(this GEN_EDX_ARG,uVar4,iVar2,uVar3,iVar5,uVar6);
      return uVar3;
    }
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    uVar3 = F_0046b5e0(iVar5);
  }
  return uVar3;
}

/* ref: FUN_00b04310 */
GEN_FRAME uint F_00b04310(unsigned int gen_a0)
{
  GEN_ENTER(0xb04310u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar4 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar5 = *param_1;
    if (iVar5 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b5e0(iVar5);
      return uVar2;
    }
    uVar8 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar3 = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar8);
    uVar8 = 0xc;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar4 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar8);
    if ((pvVar3 != (undefined *)0x0) && (piVar4 != (int *)0x0)) {
      if (*(byte *)((int)param_1 + 5) == 0) {
        uVar10 = 9;
        iVar5 = (int)param_1 + 7;
        uVar9 = 0xffffffff;
        uVar6 = 0;
        uVar8 = 0x760;
        pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        F_0046acc0(pvVar3 GEN_EDX_ARG,uVar8,uVar6,uVar9,iVar5,uVar10);
      }
      else {
        iVar5 = *(byte *)((int)param_1 + 5) - 1;
        if (iVar5 == 0) {
          uVar9 = 9;
          uVar6 = 0xffffffff;
          uVar8 = 0x75e;
          iVar7 = (int)param_1 + 7;
          this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          F_0046acc0(this GEN_EDX_ARG,uVar8,iVar5,uVar6,iVar7,uVar9);
          F_00441300(pvVar3 GEN_EDX_ARG,4);
          F_004368e0(pvVar3 GEN_EDX_ARG,(int)param_1 + 7);
          F_00436510();
        }
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
      if (0 < piVar4[6]) {
        piVar4[6] = piVar4[6] - 1;
      }
      piVar4 = (int *)F_0042e430(piVar4 + 9 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00b04420 */
GEN_FRAME uint F_00b04420(unsigned int gen_a0)
{
  GEN_ENTER(0xb04420u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  int * this;
  int * piVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar6;
  undefined * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    uVar8 = 0xb;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
    pvVar4 = (undefined *)F_00435440(uVar3 GEN_EDX_ARG,uVar8);
    uVar8 = 0xc;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
    this = (int *)F_00435440(uVar3 GEN_EDX_ARG,uVar8);
    piVar5 = this;
    if ((pvVar4 != (undefined *)0x0) && (this != (int *)0x0)) {
      piVar5 = ((int *)GEN_TOP((*(byte *)((int)param_1 + 0xe) - 1)));
      switch((unsigned int)(uintptr_t)(piVar5)) {
      case (int *)0x0: ;
        bVar1 = F_00442f20(this GEN_EDX_ARG,*param_1,param_1[1]);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        if (bVar1 == 0) {
          uVar9 = 9;
          uVar10 = 0xffffffff;
          uVar7 = 0;
          uVar8 = 0x75d;
          puVar6 = param_1 + 4;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
          F_0046acc0(pvVar4 GEN_EDX_ARG,uVar8,uVar7,uVar10,puVar6,uVar9);
          ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG,param_1,1);
          uVar3 = F_00b06f80(this + 5 GEN_EDX_ARG,param_1 + 4,param_1[2]);
          return uVar3;
        }
        break;
      case (int *)0x1: ;
        bVar1 = F_00442f20(this GEN_EDX_ARG,*param_1,param_1[1]);
        piVar5 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar1)));
        if (bVar1 != 0) {
          puVar6 = param_1 + 4;
          if (*(char *)(param_1 + 4) == '\0') {
            puVar6 = (undefined4 *)F_0042a990(this + 9 GEN_EDX_ARG);
          }
          uVar9 = 9;
          uVar10 = 0xffffffff;
          uVar7 = 0;
          uVar8 = 0x767;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
          F_0046acc0(pvVar4 GEN_EDX_ARG,uVar8,uVar7,uVar10,puVar6,uVar9);
          ((GEN_TCODE *)*(gen_code32 *)(*this + 8))(this GEN_EDX_ARG,param_1,1);
          uVar3 = F_0046e8b0(this + 5 GEN_EDX_ARG);
          return uVar3;
        }
        break;
      case (int *)0x3: ;
        uVar10 = 0xffffffff;
        uVar3 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar7 = 0;
        puVar6 = param_1 + 4;
        uVar8 = 0x75f;
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
        F_0046acc0(this_00 GEN_EDX_ARG,uVar8,puVar6,uVar3,uVar7,uVar10);
        uVar3 = F_00467280(pvVar4 GEN_EDX_ARG,*param_1,param_1[1]);
        return uVar3;
      case (int *)0x4: ;
        uVar10 = 0xffffffff;
        uVar3 = (uint)(*(byte *)((int)param_1 + 0xf) & 1);
        uVar7 = 0;
        puVar6 = param_1 + 4;
        uVar8 = 0x761;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2 GEN_EDX_ARG)));
        piVar5 = (int *)F_0046acc0(pvVar4 GEN_EDX_ARG,uVar8,puVar6,uVar3,uVar7,uVar10);
      }
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_00b045d0 */
GEN_FRAME uint F_00b045d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb045d0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint * puVar4;
  undefined4 uVar5;
  
  if (((param_1 != (char *)0x0) && (*param_1 == ' ')) && (param_1[1] != '\0')) {
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
    if (piVar2 != (int *)0x0) {
      uVar5 = 0xb;
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2 GEN_EDX_ARG);
      uVar3 = F_00435440(uVar3 GEN_EDX_ARG,uVar5);
      if (uVar3 != 0) {
        bVar1 = F_004369a0(param_1);
        if (bVar1 != 0x11) {
          puVar4 = (uint *)F_00ab4160((uint)bVar1);
          if (puVar4 != (uint *)0x0) {
            return (*puVar4 & 0xffffff) + (int)puVar4;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00b04640 */
GEN_FRAME uint F_00b04640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00453610(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04680 */
GEN_FRAME uint F_00b04680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xe;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar1 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,param_2,1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b046c0 */
GEN_FRAME uint F_00b046c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb046c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436680(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04700 */
GEN_FRAME uint F_00b04700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00453970(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04740 */
GEN_FRAME uint F_00b04740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  char * this;
  undefined * this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  this = (char *)0x0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (char *)F_00435440(uVar2 GEN_EDX_ARG,uVar6);
    if (this != (char *)0x0) {
      if (*param_2 == '\x01') {
        this = param_2 + 1;
        if (param_2[1] != '\0') {
          uVar5 = 9;
          uVar4 = 0xffffffff;
          uVar3 = 0;
          uVar6 = 0xc0f;
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          this = (char *)F_0046acc0(this_00 GEN_EDX_ARG,uVar6,uVar3,uVar4,this,uVar5);
        }
      }
      else if (*param_2 == '\x02') {
        uVar2 = F_004366d0(this GEN_EDX_ARG,param_2 + 1);
        return uVar2;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00b047b0 */
GEN_FRAME uint F_00b047b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb047b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00440af0(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b047f0 */
GEN_FRAME uint F_00b047f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb047f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436730(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04830 */
GEN_FRAME uint F_00b04830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00440b80(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04870 */
GEN_FRAME uint F_00b04870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_004367a0(this GEN_EDX_ARG,param_2 + 1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b048b0 */
GEN_FRAME uint F_00b048b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb048b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00453a20(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b048f0 */
GEN_FRAME uint F_00b048f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb048f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0xb;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    this = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar3);
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      uVar2 = F_00436830(this GEN_EDX_ARG,param_2);
    }
  }
  return uVar2;
}

/* ref: FUN_00b04930 */
GEN_FRAME uint F_00b04930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)(param_2 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00b02e70(param_2);
    return uVar1;
  case 1: ;
    uVar1 = F_00b03820(param_2);
    return uVar1;
  case 3: ;
    uVar1 = F_00b03fd0(param_2);
    return uVar1;
  case 4: ;
    uVar1 = F_00b042b0(param_2);
  }
  return uVar1;
}

/* ref: FUN_00b04990 */
GEN_FRAME uint F_00b04990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb04990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)(param_2 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00b02ef0(param_2);
    return uVar1;
  case 1: ;
    uVar1 = F_00b038a0(param_2);
    return uVar1;
  case 3: ;
    uVar1 = F_00b04030(param_2);
    return uVar1;
  case 4: ;
    uVar1 = F_00b04310(param_2);
  }
  return uVar1;
}

/* ref: FUN_00b049f0 */
GEN_FRAME uint F_00b049f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb049f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)(param_2 + 0xc) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00b02fe0(param_2);
    return uVar1;
  case 1: ;
    uVar1 = F_00b03a90(param_2);
    return uVar1;
  case 3: ;
    uVar1 = F_00b04120(param_2);
    return uVar1;
  case 4: ;
    uVar1 = F_00b04420(param_2);
  }
  return uVar1;
}

/* ref: FUN_00b05490 */
GEN_NOFRAME uint F_00b05490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = param_2;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar5 = param_2[0x11];
    if (iVar5 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b5e0(iVar5);
      F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
      return uVar2;
    }
    uVar7 = 6;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    piVar3 = (int *)F_00435440(uVar2 GEN_EDX_ARG,uVar7);
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
    if (piVar3 != (int *)0x0) {
      iVar5 = *param_2;
      if (iVar5 == 0xfa) {
        uVar7 = 0x19;
        pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
        piVar3 = (int *)F_0046a630(pvVar4 GEN_EDX_ARG,uVar7);
      }
      else {
        if (iVar5 == 0xfb) {
          uVar7 = 0x1a;
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
          F_0046a630(pvVar4 GEN_EDX_ARG,uVar7);
          iVar5 = param_2[4];
          (*(int *)(gen_frame + 0x34)) = param_2[3];
          (*(int *)(gen_frame + 0x30)) = param_2[2];
          (*(int *)(gen_frame + 0x38)) = iVar5;
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 8))((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x30)),1);
          F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
          return uVar2;
        }
        if (iVar5 == 0xff) {
          uVar2 = F_00438cf0(piVar3 GEN_EDX_ARG,param_2[2],param_2[3],param_2[4],&(*(undefined4 *)(gen_frame + 0x20)));
          (*(uint *)(gen_frame + 0x18)) = uVar2;
          piVar3 = (int *)0x0;
          if (uVar2 != 0) {
            F_004816e0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            piVar3 = (int *)(uVar2 + 0xc);
            (*(int *)(gen_frame + 0x24)) = 0;
            (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x1c)) + 5;
            do {
              if ((*piVar3 != 0) && (*piVar3 == *(*(int * PTR32 *)(gen_frame + 0x28)))) {
                F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
                iVar5 = *piVar3;
                (*(int *)(gen_frame + 0xe0)) = 0;
                (*(int *)(gen_frame + 0xe0)) = iVar5;
                (*(undefined1 *)(gen_frame + 0xe8)) = 0;
                (*(int * PTR32 *)(gen_frame + 0xe4)) = &(*(int *)(gen_frame + 0xe0));
                F_00493b50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xe0)));
                F_004917c0(&(*(int *)(gen_frame + 0xe0)) GEN_EDX_ARG);
                iVar5 = piVar3[1];
                (*(int *)(gen_frame + 0xd4)) = 0;
                (*(int *)(gen_frame + 0xd4)) = iVar5;
                (*(undefined1 *)(gen_frame + 0xdc)) = 0;
                (*(int * PTR32 *)(gen_frame + 0xd8)) = &(*(int *)(gen_frame + 0xd4));
                F_00493b50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xd4)));
                F_004917c0(&(*(int *)(gen_frame + 0xd4)) GEN_EDX_ARG);
                puVar8 = ((undefined4 *)(gen_frame + 0x0));
                uVar7 = 0x1b;
                pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
                F_0046aa70(pvVar4 GEN_EDX_ARG,uVar7,puVar8);
                F_00438e70((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)),(*(int *)(gen_frame + 0x24)));
              }
              (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
              iVar5 = (*(int *)(gen_frame + 0x24)) + 1;
              piVar3 = piVar3 + 2;
              (*(int *)(gen_frame + 0x24)) = iVar5;
            } while (iVar5 < 5);
            iVar5 = *(int *)((*(uint *)(gen_frame + 0x18)) + 0x38);
            if ((iVar5 != 0) && (iVar5 == (*(int * PTR32 *)(gen_frame + 0x1c))[0x10])) {
              uVar7 = 0x1c;
              pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
              F_0046a6b0(pvVar4 GEN_EDX_ARG,uVar7,iVar5);
              F_00438f10((*(int * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x20)));
            }
            F_00492c50(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            uVar6 = F_00429760(((undefined4 *)(gen_frame + 0x0))[0],8,0x2c4);
            F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
            return (uint)uVar6;
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
  return (uint)piVar3;
}

/* ref: FUN_00b05750 */
GEN_FRAME uint F_00b05750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar6 = 9;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
    pvVar3 = (undefined *)F_00435440(uVar2 GEN_EDX_ARG,uVar6);
    if (pvVar3 != (undefined *)0x0) {
      F_004387b0(pvVar3 GEN_EDX_ARG,*param_2,param_2[1]);
    }
    iVar7 = param_2[1];
    if (iVar7 != 0) {
      if (iVar7 == 0x23bf) {
        uVar6 = *param_2;
        uVar5 = 0x23bf;
      }
      else {
        if (iVar7 != 0x23c0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
          uVar2 = F_0046b5e0(iVar7);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
          return uVar2;
        }
        uVar6 = *param_2;
        uVar5 = 0x23c0;
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1 GEN_EDX_ARG);
      uVar2 = F_0046b630(uVar5,uVar6);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    }
    if (*(char *)(param_2 + 3) == '\0') {
      uVar6 = *param_2;
      uVar5 = 0x2df;
      pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
      uVar2 = F_0046a6b0(pvVar3 GEN_EDX_ARG,uVar5,uVar6);
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return uVar2;
    }
    F_004816e0(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    F_00492c50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar6 = *param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = uVar6;
    (*(undefined1 *)(gen_frame + 0x28)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    uVar6 = param_2[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = uVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = &(*(undefined4 *)(gen_frame + 0x2c));
    (*(undefined1 *)(gen_frame + 0x34)) = 0;
    F_00493b50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
    puVar8 = ((undefined4 *)(gen_frame + 0x8));
    uVar6 = 0x2de;
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG)));
    F_0046aa70(pvVar3 GEN_EDX_ARG,uVar6,puVar8);
    F_00492c50(((undefined4 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar4 = F_00429760(((undefined4 *)(gen_frame + 0x8))[0],8,0x2c4);
    uVar2 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b058e0 */
GEN_FRAME uint F_00b058e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb058e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * pvVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 * PTR32 * ppuVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar6 = 0;
  if (piVar5 != (int *)0x0) {
    uVar10 = 9;
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x44))(piVar5 GEN_EDX_ARG);
    uVar6 = F_00435440(uVar6 GEN_EDX_ARG,uVar10);
    if (uVar6 != 0) {
      F_004387a0((uint)*(byte *)(param_2 + 4));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
    puVar7 = (undefined4 *)F_004296a0(8,0,0x2c4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
    }
    *puVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if (*(char *)(param_2 + 4) == '\x01') {
      bVar1 = *(byte *)((int)param_2 + 0x11);
      (*(uint * PTR32 *)(gen_frame + 0x44)) = &(*(uint *)(gen_frame + 0x40));
      (*(uint *)(gen_frame + 0x40)) = 0;
      (*(uint *)(gen_frame + 0x40)) = (uint)bVar1;
      (*(undefined1 *)(gen_frame + 0x48)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x40)));
      F_004917c0(&(*(uint *)(gen_frame + 0x40)) GEN_EDX_ARG);
      uVar10 = *param_2;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar10;
      (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = &(*(undefined4 *)(gen_frame + 0x34));
      (*(undefined1 *)(gen_frame + 0x3c)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x34)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x34)) GEN_EDX_ARG);
      uVar10 = param_2[1];
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      (*(undefined4 *)(gen_frame + 0x4c)) = uVar10;
      (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x4c));
      (*(undefined1 *)(gen_frame + 0x54)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x4c)) GEN_EDX_ARG);
      uVar10 = param_2[2];
      (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &(*(undefined4 *)(gen_frame + 0x1c));
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = uVar10;
      (*(undefined1 *)(gen_frame + 0x24)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x1c)));
      F_004917c0(&(*(undefined4 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      iVar2 = param_2[2];
      iVar3 = param_2[1];
      iVar4 = param_2[3];
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(int *)(gen_frame + 0x28)) = iVar2 * iVar3 - iVar4;
      (*(int * PTR32 *)(gen_frame + 0x2c)) = &(*(int *)(gen_frame + 0x28));
      (*(undefined1 *)(gen_frame + 0x30)) = 0;
      F_00493b50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x28)));
      F_004917c0(&(*(int *)(gen_frame + 0x28)) GEN_EDX_ARG);
      uVar10 = 0x2e9;
      uVar6 = F_00ab24a0(*param_2);
      if ((uVar6 != 0) && (*(int *)(uVar6 + 0x28) == 1)) {
        uVar10 = 0x2ec;
      }
      ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG)));
      F_0046aa70(pvVar8 GEN_EDX_ARG,uVar10,ppuVar11);
    }
    else if (*(char *)(param_2 + 4) == '\x02') {
      uVar6 = (uint)*(byte *)((int)param_2 + 0x11);
      uVar10 = 0x180;
      pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG)));
      F_0046a6b0(pvVar8 GEN_EDX_ARG,uVar10,uVar6);
    }
    F_00492c50(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar9 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    uVar6 = (uint)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00b05ac0 */
GEN_FRAME uint F_00b05ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  byte * pbVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  uVar5 = 0;
  if (piVar4 != (int *)0x0) {
    uVar11 = 9;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
    pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar11);
    uVar5 = 0;
    if (pvVar6 != (undefined *)0x0) {
      bVar2 = (byte)((uint)param_2[3] >> 0x18);
      ((byte *)(gen_frame + 0x4))[0x18] = bVar2 >> 7;
      bVar8 = bVar2 & 0xf;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)param_2[2];
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x94)) + 0)) = bVar8;
      (*(uint *)(gen_frame + 0x94)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x94)), 1, 3),bVar2) & 0xffffff0f;
      if (param_2[4] == 0) {
        F_00438a90(pvVar6 GEN_EDX_ARG,*param_2,param_2[1],(*(uint *)(gen_frame + 0x94)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24)));
      }
      uVar1 = (ulonglong)(uint)*(byte *)(param_2 + 5) / 10;
      uVar5 = (uint)uVar1;
      uVar7 = (uint)*(byte *)(param_2 + 5) % 10;
      cVar3 = (char)uVar1;
      if (uVar7 == 1) {
        if ((param_2[4] == 0) && (cVar3 == '\x01')) {
          F_004816e0(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG);
          uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,&REFG(undefined, 0x10ec5c7),REFG(undefined4, 0x108cc50));
          F_004918c0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,uVar5);
          F_00493b50(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x74)));
          F_004917c0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
          F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
          uVar5 = (*(uint *)(gen_frame + 0x94));
          (*(undefined4 *)(gen_frame + 0x8c)) = 0;
          (*(undefined4 *)(gen_frame + 0x8c)) = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = &(*(undefined4 *)(gen_frame + 0x8c));
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x94)) + 0)) = 0;
          (*(uint *)(gen_frame + 0x94)) = uVar5 & 0xffffff00;
          F_00493b50(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8c)));
          F_004917c0(&(*(undefined4 *)(gen_frame + 0x8c)) GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x80)) = 0;
          (*(uint *)(gen_frame + 0x80)) = (uint)bVar8;
          (*(uint * PTR32 *)(gen_frame + 0x84)) = &(*(uint *)(gen_frame + 0x80));
          (*(undefined1 *)(gen_frame + 0x88)) = 0;
          F_00493b50(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x80)));
          F_004917c0(&(*(uint *)(gen_frame + 0x80)) GEN_EDX_ARG);
          pbVar10 = ((byte *)(gen_frame + 0x4));
          uVar11 = 0x18c;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046aa70(pvVar6 GEN_EDX_ARG,uVar11,pbVar10);
          uVar5 = F_00493180(((byte *)(gen_frame + 0x4)) GEN_EDX_ARG);
        }
      }
      else if (uVar7 == 3) {
        iVar9 = param_2[4];
        if (iVar9 != 0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
          uVar5 = F_0046b5e0(iVar9);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
          return uVar5;
        }
        if ((param_2[2] != 0 || param_2[3] != 0) && (((byte *)(gen_frame + 0x4))[0x18] == 1)) {
          uVar5 = (uint)bVar8;
          if (cVar3 != '\x01') {
            uVar11 = 0x18e;
            pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
            uVar5 = F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar11,uVar5);
            F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
            return uVar5;
          }
          uVar11 = 0x1f2;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          uVar5 = F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar11,uVar5);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
          return uVar5;
        }
      }
      else if (uVar7 == 4) {
        iVar9 = param_2[4];
        if (iVar9 != 0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
          uVar5 = F_0046b5e0(iVar9);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
          return uVar5;
        }
        if ((param_2[2] != 0 || param_2[3] != 0) && (((byte *)(gen_frame + 0x4))[0x18] == 0)) {
          uVar5 = (uint)bVar8;
          if (cVar3 != '\x01') {
            uVar11 = 399;
            pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
            uVar5 = F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar11,uVar5);
            F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
            return uVar5;
          }
          uVar11 = 499;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          uVar5 = F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar11,uVar5);
          F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
          return uVar5;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_00b05d70 */
GEN_FRAME uint F_00b05d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb05d70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x250];
  char cVar1;
  undefined8 uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined * pvVar6;
  ushort * puVar7;
  uint uVar8;
  undefined * pvVar9;
  ulonglong uVar10;
  ushort * puVar11;
  ushort * puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 * puVar17;
  
  (*(uint *)(gen_frame + 0x248)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x24c);
  F_0042b630(((undefined1 *)(gen_frame + 0x17c)) GEN_EDX_ARG);
  puVar12 = param_2 + 0xd;
  F_0042e430(((undefined1 *)(gen_frame + 0x17c)) GEN_EDX_ARG,puVar12);
  piVar4 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
  if (piVar4 == (int *)0x0) goto LAB_00b06ed9;
  uVar14 = 0xb;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
  pvVar6 = (undefined *)F_00435440(uVar5 GEN_EDX_ARG,uVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar6;
  uVar14 = 0xc;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
  puVar7 = (ushort *)F_00435440(uVar5 GEN_EDX_ARG,uVar14);
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
  uVar14 = 0xd;
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
  uVar5 = F_00435440(uVar5 GEN_EDX_ARG,uVar14);
  uVar14 = 0xe;
  uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
  pvVar6 = (undefined *)F_00435440(uVar8 GEN_EDX_ARG,uVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar6;
  if (((((*(undefined * PTR32 *)(gen_frame + 0x28)) == (undefined *)0x0) || ((*(ushort * PTR32 *)(gen_frame + 0x24)) == (ushort *)0x0)) || (uVar5 == 0)) ||
     (pvVar6 == (undefined *)0x0)) goto LAB_00b06ed9;
  iVar15 = *(int *)(param_2 + 10);
  if (iVar15 != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG);
    F_0046b5e0(iVar15);
  }
  pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x44))(piVar4 GEN_EDX_ARG)));
  F_0043f9f0(pvVar6 GEN_EDX_ARG);
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = (ushort *)(uint)*param_2;
  F_004816e0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00492c50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 8))) {
  case 1: ;
    if (*(int *)(param_2 + 10) == 0) {
      uVar14 = 0xbe1;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      F_004368e0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar12);
      F_00441300(pvVar6 GEN_EDX_ARG,2);
    }
    F_00437150(*(undefined4 *)(param_2 + 10));
    break;
  case 2: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        if (bVar3 < 3) {
          uVar14 = 0xbe7;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
        }
        else {
          uVar16 = 9;
          uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
          puVar7 = param_2 + 0x24;
          uVar14 = 0x762;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
        }
      }
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      if (bVar3 < 3) {
        F_00442a80((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
      }
      else {
        F_00453830(pvVar6 GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
      }
    }
    else {
      bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      if (bVar3 < 3) {
        bVar3 = F_00436890(pvVar6 GEN_EDX_ARG);
        if (bVar3 != 0) {
          bVar3 = *(byte *)((int)param_2 + 0x19);
          uVar14 = 0xbf0;
          goto LAB_00b05fc3;
        }
      }
      else {
        bVar3 = *(byte *)((int)param_2 + 0x19);
        uVar14 = 0x763;
LAB_00b05fc3: ;
        uVar5 = (uint)(bVar3 & 1);
        puVar12 = param_2 + 0x24;
        uVar13 = 0xffffffff;
        uVar16 = 0;
        pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar9 GEN_EDX_ARG,uVar14,puVar12,uVar5,uVar16,uVar13);
      }
      bVar3 = F_00436880(pvVar6 GEN_EDX_ARG);
      if (bVar3 < 3) {
        F_00442af0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     param_2 + 0x24);
      }
      else {
        F_004672f0(pvVar6 GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
      }
    }
    break;
  case 3: ;
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = param_2 + 0x24;
    if ((char)param_2[0x24] == '\0') {
      uVar13 = 0;
      uVar16 = 0;
      uVar14 = 0x3c4;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x18))(piVar4 GEN_EDX_ARG)));
      puVar7 = (ushort *)F_0043bd00(pvVar6 GEN_EDX_ARG,uVar14,uVar16,uVar13);
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    cVar1 = (char)param_2[0xc];
    if (cVar1 == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        uVar16 = 0xffffffff;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        uVar14 = 0;
        if (bVar3 < 3) {
          uVar13 = 0xbe8;
        }
        else {
          uVar13 = 0x764;
        }
        puVar12 = (*(ushort * PTR32 *)(gen_frame + 0x24));
        pvVar9 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar9 GEN_EDX_ARG,uVar13,puVar12,uVar5,uVar14,uVar16);
      }
      bVar3 = F_00436880(pvVar6 GEN_EDX_ARG);
      if (bVar3 < 3) {
        F_00442b10((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     param_2 + 0x24,*(undefined4 *)(param_2 + 10));
      }
      else {
        F_0044e490(pvVar6 GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     *(undefined4 *)(param_2 + 10));
      }
    }
    else {
      if (cVar1 == '\v') {
        bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        if (bVar3 < 3) {
          uVar14 = 0xbf1;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
        }
        else {
          bVar3 = *(byte *)((int)param_2 + 0x19);
          uVar16 = 9;
          uVar14 = 0x765;
LAB_00b0613d: ;
          uVar5 = (uint)(bVar3 & 1);
          puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x24));
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
        }
      }
      else if ((cVar1 == '\f') && (bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG), 2 < bVar3)) {
        bVar3 = *(byte *)((int)param_2 + 0x19);
        uVar16 = 0xffffffff;
        puVar12 = (ushort *)0x0;
        uVar14 = 0x766;
        goto LAB_00b0613d;
      }
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      bVar3 = F_00436880((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      if (bVar3 < 3) {
        F_00442b30((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                     param_2 + 0x24);
      }
      else {
        F_00453890(pvVar6 GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
      }
    }
    break;
  case 4: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar7 = param_2 + 0x24;
        uVar14 = 0x759;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      }
      F_00436520((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    break;
  case 5: ;
    puVar7 = (ushort *)F_00b045d0(puVar12);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = puVar12;
    }
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar12 = param_2 + 0x24;
        uVar14 = 0xc08;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar7,uVar16);
      }
      F_00436540((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc10;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar7,uVar16);
      F_00436580((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    }
    break;
  case 6: ;
    puVar7 = (ushort *)F_00b045d0(puVar12);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = puVar12;
    }
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar12 = param_2 + 0x24;
        uVar14 = 0xbfe;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar7,uVar16);
      }
      F_0044a490((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(uint)(byte)param_2[4],*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc04;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar7,uVar16);
      F_0044a550((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(uint)(byte)param_2[4]);
    }
    break;
  case 7: ;
    if (*(int *)(param_2 + 10) == 0) {
      puVar7 = (ushort *)F_00b045d0(puVar12);
      if (puVar7 == (ushort *)0x0) {
        puVar7 = puVar12;
      }
      uVar14 = 9;
      puVar12 = param_2 + 0x24;
      if ((char)param_2[0xc] == '\n') {
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        uVar16 = 0xbfc;
        puVar11 = puVar12;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar16,puVar11,uVar5,puVar7,uVar14);
        F_0044a780((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar12,(uint)(byte)param_2[4],(uint)(byte)param_2[0xc]);
      }
      else {
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        uVar16 = 0xc02;
        puVar11 = puVar12;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar16,puVar11,uVar5,puVar7,uVar14);
        F_0044a870((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar12,(uint)(byte)param_2[4],(uint)(byte)param_2[0xc]);
      }
    }
    break;
  case 8: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar7 = param_2 + 0x24;
        uVar14 = 0xbff;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      }
      F_004365b0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc05;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_004365f0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    }
    break;
  case 9: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar7 = param_2 + 0x24;
        uVar14 = 0xc00;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      }
      F_0044a600((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(uint)(byte)param_2[4],*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc06;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_0044a6c0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(uint)(byte)param_2[4]);
    }
    break;
  case 10: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc01;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
      }
      F_00436620((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar13 = 0xffffffff;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      uVar16 = 0;
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc07;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,uVar16,uVar13);
      F_00436650((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    }
    break;
  case 0xb: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) != 0) break;
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
      uVar14 = 0xbe3;
      puVar11 = puVar12;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar11,uVar16);
      bVar3 = *(byte *)((int)param_2 + 0x19);
      uVar14 = 0xbe2;
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
      uVar14 = 0xbf5;
      puVar11 = puVar12;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar11,uVar16);
      bVar3 = *(byte *)((int)param_2 + 0x19);
      uVar14 = 0xbf4;
    }
    uVar5 = (uint)(bVar3 & 1);
    uVar16 = 9;
    puVar7 = (*(ushort * PTR32 *)(gen_frame + 0x24));
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
    F_00441300((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,3);
    F_00442980((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    uVar16 = 1;
    uVar14 = 0xc34;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar16);
    break;
  case 0xc: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xbe9;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
      }
      F_00442bf0((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar13 = 0xffffffff;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      uVar16 = 0;
      puVar12 = param_2 + 0x24;
      uVar14 = 0xbfb;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,uVar16,uVar13);
      F_00442c60((*(undefined * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG);
    }
    break;
  case 0xd: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc09;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
      }
      F_00436700((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc0b;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
    }
    break;
  case 0xe: ;
    puVar7 = (ushort *)F_00b045d0(puVar12);
    if (puVar7 == (ushort *)0x0) {
      puVar7 = puVar12;
    }
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar16 = 9;
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar12 = param_2 + 0x24;
        uVar14 = 0xbfd;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar7,uVar16);
      }
      F_0044a280((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6),
                   *(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar12 = param_2 + 0x24;
      uVar14 = 0xc03;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar7,uVar16);
      F_0044a340((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 6));
    }
    break;
  case 0xf: ;
    if ((char)param_2[0xc] == '\n') {
      F_004368e0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar12);
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
      uVar14 = 0xc0d;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_004670f0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x24)),(uint)(ushort)(param_2[4] + 1));
    }
    break;
  case 0x10: ;
    uVar16 = 9;
    uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
    puVar7 = param_2 + 0x24;
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = puVar7;
    uVar14 = 0xc0e;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
    F_004671b0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(ushort * PTR32 *)(gen_frame + 0x24)));
    break;
  case 0x13: ;
    uVar14 = 9;
    puVar7 = puVar12;
    if ((char)param_2[0xc] == '\n') {
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar11 = param_2 + 0x24;
      uVar16 = 0xc40;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG,0xc40,puVar11,uVar5,puVar12,9)));
    }
    else {
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar11 = param_2 + 0x24;
      uVar16 = 0xc41;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    }
    F_0046acc0(pvVar6 GEN_EDX_ARG,uVar16,puVar11,uVar5,puVar7,uVar14);
    F_00436800((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,puVar12);
    break;
  case 0x14: ;
    uVar14 = *(undefined4 *)(param_2 + 4);
    uVar13 = 0xc33;
    uVar16 = uVar14;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar13,uVar16);
    uVar5 = F_00ab4190(uVar14);
    if (uVar5 != 0) {
      puVar12 = (ushort *)(uVar5 + 8);
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x3;
      do {
        uVar5 = (uint)*puVar12;
        if (*puVar12 != 0) {
          uVar16 = 0xc34;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar16,uVar5);
        }
        puVar12 = puVar12 + 1;
        pvVar6 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) - 1);
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar6;
      } while (pvVar6 != (undefined *)0x0);
    }
    F_00453af0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar14);
    break;
  case 0x15: ;
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar14 = *(undefined4 *)(param_2 + 4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x210)) = &(*(undefined4 *)(gen_frame + 0x20c));
    (*(undefined4 *)(gen_frame + 0x20c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20c)) = (int)((ulonglong)uVar2 >> 0x20);
    (*(undefined1 *)(gen_frame + 0x214)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20c)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x230)) = 0;
    (*(undefined4 *)(gen_frame + 0x230)) = uVar14;
    (*(undefined4 * PTR32 *)(gen_frame + 0x234)) = &(*(undefined4 *)(gen_frame + 0x230));
    (*(undefined1 *)(gen_frame + 0x238)) = 0;
    F_00493bc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x230)));
    F_004917c0(&(*(undefined4 *)(gen_frame + 0x230)) GEN_EDX_ARG);
    puVar17 = ((undefined1 *)(gen_frame + 0x8));
    uVar16 = 0xc35;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046aa70(pvVar6 GEN_EDX_ARG,uVar16,puVar17);
    F_00453bd0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar14);
    break;
  case 0x17: ;
    if (*(int *)(param_2 + 10) == 0) {
      if ((char)param_2[0xc] == '\n') {
        uVar14 = *(undefined4 *)(param_2 + 4);
        uVar16 = 0x75a;
      }
      else {
        uVar14 = *(undefined4 *)(param_2 + 4);
        uVar16 = 0x75b;
      }
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar16,uVar14);
      F_00453c20((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4),*(undefined4 *)param_2,
                   *(undefined4 *)(param_2 + 2));
    }
    break;
  case 0x18: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc46;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
      }
      F_004367d0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10));
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc47;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
    }
    break;
  case 0x19: ;
    if ((char)param_2[0xc] == '\n') {
      if (*(int *)(param_2 + 10) == 0) {
        uVar14 = 0xc42;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
      }
      F_0044a960((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(byte)param_2[0xc]);
    }
    else {
      uVar16 = 9;
      uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
      puVar7 = param_2 + 0x24;
      uVar14 = 0xc43;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046acc0(pvVar6 GEN_EDX_ARG,uVar14,puVar7,uVar5,puVar12,uVar16);
      F_0044a960((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(byte)param_2[0xc]);
    }
    break;
  case 0x1a: ;
    uVar14 = 0xc49;
    pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
    F_0046a630(pvVar6 GEN_EDX_ARG,uVar14);
    F_00453aa0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
    break;
  case 0x1b: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc3c;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar5);
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG,puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1f4)) GEN_EDX_ARG,uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1f4)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1f4)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x218)) = 0;
        (*(uint *)(gen_frame + 0x218)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x21c)) = &(*(uint *)(gen_frame + 0x218));
        (*(undefined1 *)(gen_frame + 0x220)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x218)));
        F_004917c0(&(*(uint *)(gen_frame + 0x218)) GEN_EDX_ARG);
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc3d;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046ad60(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar17);
      }
      F_00453cb0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x1c: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc3e;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar5);
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1d0)) GEN_EDX_ARG,uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1d0)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1d0)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x200)) = 0;
        (*(uint *)(gen_frame + 0x200)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x204)) = &(*(uint *)(gen_frame + 0x200));
        (*(undefined1 *)(gen_frame + 0x208)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x200)));
        F_004917c0(&(*(uint *)(gen_frame + 0x200)) GEN_EDX_ARG);
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc3f;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046ad60(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar17);
      }
      F_00453d00((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x1d: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc38;
          uVar8 = uVar5;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar8);
          goto LAB_00b06d49;
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0x128)) GEN_EDX_ARG,puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1dc)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1dc)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0x128)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x224)) = 0;
        (*(uint *)(gen_frame + 0x224)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x228)) = &(*(uint *)(gen_frame + 0x224));
        (*(undefined1 *)(gen_frame + 0x22c)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x224)));
        F_004917c0(&(*(uint *)(gen_frame + 0x224)) GEN_EDX_ARG);
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc39;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046ad60(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar17);
        uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
LAB_00b06d49: ;
        uVar14 = 0xc36;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar5);
      }
      F_00453d50((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x1e: ;
    if ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0) {
      if ((char)param_2[0xc] == '\n') {
        if (*(int *)(param_2 + 10) == 0) {
          uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
          uVar14 = 0xc3a;
          pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
          F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar5);
        }
      }
      else {
        puVar12 = param_2 + 0x24;
        uVar5 = F_0042cc20(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG,puVar12,REFG(undefined4, 0x108cc50));
        F_004918c0(((undefined1 *)(gen_frame + 0x1e8)) GEN_EDX_ARG,uVar5);
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1e8)));
        F_004917c0(((undefined1 *)(gen_frame + 0x1e8)) GEN_EDX_ARG);
        F_0042c880(((undefined1 *)(gen_frame + 0xd4)) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x23c)) = 0;
        (*(uint *)(gen_frame + 0x23c)) = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
        (*(uint * PTR32 *)(gen_frame + 0x240)) = &(*(uint *)(gen_frame + 0x23c));
        (*(undefined1 *)(gen_frame + 0x244)) = 0;
        F_00493b50(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x23c)));
        F_004917c0(&(*(uint *)(gen_frame + 0x23c)) GEN_EDX_ARG);
        uVar5 = (uint)(*(byte *)((int)param_2 + 0x19) & 1);
        puVar17 = ((undefined1 *)(gen_frame + 0x8));
        uVar14 = 0xc3b;
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
        F_0046ad60(pvVar6 GEN_EDX_ARG,uVar14,puVar12,uVar5,puVar17);
      }
      F_00453da0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    }
    break;
  case 0x20: ;
    if ((*(int *)(param_2 + 10) == 0) && ((short)(*(ushort * PTR32 *)(gen_frame + 0x24)) != 0)) {
      uVar5 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff;
      uVar14 = 0xc37;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4 GEN_EDX_ARG)));
      F_0046a6b0(pvVar6 GEN_EDX_ARG,uVar14,uVar5);
    }
    F_00453df0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,*(undefined4 *)(param_2 + 10),(uint)(*(ushort * PTR32 *)(gen_frame + 0x24)) & 0xffff);
    break;
  case 0x21: ;
    F_0046b680((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(uint)(byte)param_2[4]);
    break;
  case 0x22: ;
    F_0044aa20((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  }
  F_00493180(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
LAB_00b06ed9: ;
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x17c)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x248)) ^ (uint)(uint)(gen_frame + 0x24c) GEN_EDX_ARG);
  return (uint)uVar10;
}

/* ref: FUN_00b06f80 */
GEN_FRAME uint GEN_THISCALL F_00b06f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb06f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * puVar1;
  uint uVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1 = param_1;
  if (param_1 == (undefined1 *)0x0) {
    puVar1 = &REFG(undefined1, 0x107fc63);
  }
  F_0042e430((undefined *)((int)this + 0x10) GEN_EDX_FWD,puVar1);
  *(int *)((int)this + 8) = param_2 - 1;
  *(undefined1 *)((int)this + 0xc) = 1;
  uVar2 = F_0043f8b0(0x3b);
  return uVar2;
}

/* ref: FUN_00b06fc0 */
GEN_FRAME uint GEN_THISCALL F_00b06fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb06fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x25) = (undefined1)param_5;
  *(undefined4 *)this = 0x12a;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined1 *)((int)this + 0x24) = (undefined1)param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x26);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00b07020 */
GEN_FRAME float10 F_00b07020(float gen_a0)
{
  GEN_ENTER(0xb07020u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b07040 */
GEN_FRAME float10 F_00b07040(float gen_a0)
{
  GEN_ENTER(0xb07040u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: Client::Game::Fate::FateDirector::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b07060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a79840(&REFG(undefined4, 0x14b11f8) GEN_EDX_FWD,this);
  F_006bd1c0((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: Client::Game::Fate::FateDirector::vf156 */
GEN_FRAME uint GEN_THISCALL F_00b07080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x8f) = *(byte *)(param_1 + 0x8f) | 4;
  return param_1;
}

/* ref: FUN_00b070a0 */
GEN_FRAME uint F_00b070a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb070a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if ((param_1 == 0) || (uVar1 = param_1, *((short *)GEN_TOP((*(int *)(param_1 + 0x1d4) + 2))) != -0x7fe6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00b070c0 */
GEN_FRAME uint F_00b070c0(unsigned int gen_a0)
{
  GEN_ENTER(0xb070c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  if ((param_1 == 0) || (uVar1 = param_1, *((short *)GEN_TOP((*(int *)(param_1 + 0x1d4) + 2))) != -0x7fe6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00b070e0 */
GEN_NOFRAME byte F_00b070e0(void)
{
  GEN_ENTER(0xb070e0u, 0u, 0u, 0u, 0u);
  return REFG(int, 0x14c0cf8) != 0;
}

/* ref: FUN_00b070f0 */
GEN_NOFRAME uint F_00b070f0(void)
{
  GEN_ENTER(0xb070f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x14c0cf8);
}

/* ref: FUN_00b07100 */
GEN_FRAME uint F_00b07100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(char *)(REFG(int, 0x1379694) + 0x18a) == '\x10')) {
    uVar2 = 0;
    do {
      if (param_1 == *(int *)((int)&REFG(undefined4, 0x10ecd3c) + uVar2)) {
        return uVar2;
      }
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0xc);
  }
  F_006b8c00();
  if (param_2 == 0) {
    uVar2 = F_006c5f80(param_1,iVar1,param_3);
    return uVar2;
  }
  uVar2 = F_006c5fb0(param_1,param_2,iVar1,param_3);
  return uVar2;
}

/* ref: FUN_00b07170 */
GEN_FRAME uint GEN_STDCALL F_00b07170(unsigned int gen_a0)
{
  GEN_ENTER(0xb07170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint in_EAX = 0;
  
  if (REFG(short, 0x14ab148) != 0) {
    in_EAX = F_00a51200(0x58,param_1 & 0xffff,0,0,0);
  }
  return in_EAX;
}

/* ref: FUN_00b071a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b071a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb071a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x21c);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (REFG(short, 0x14ab148) != 0) {
      uVar2 = F_00a51200(0x58,(uint)*(ushort *)(iVar1 + 0x18),0,0,0);
      return uVar2;
    }
    uVar2 = F_00a51200(0x58,(uint)*(ushort *)(iVar1 + 0x18),1,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b071e0 */
GEN_FRAME ushort GEN_THISCALL F_00b071e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb071e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x230) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b07200 */
GEN_FRAME uint GEN_STDCALL F_00b07200(unsigned int gen_a0)
{
  GEN_ENTER(0xb07200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((REFG(undefined4, 0x1379694) != 0) && (*(char *)(REFG(undefined4, 0x1379694) + 0x18a) != '\x10')) {
    F_006b8c00();
    uVar1 = F_006c6500(param_1);
    return uVar1;
  }
  return REFG(undefined4, 0x1379694);
}

/* ref: FUN_00b07230 */
GEN_FRAME uint GEN_THISCALL F_00b07230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = 0;
  puVar2 = (uint *)((int)this + 0x24);
  do {
    if (puVar2[1] == 0) {
      *puVar2 = param_1;
      puVar2[1] = param_2;
      puVar2[2] = 0;
      return param_1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 3;
  } while (uVar1 < 0x20);
  *(uint *)((int)this + 0x24) = param_1;
  *(uint *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return param_2;
}

/* ref: FUN_00b07290 */
GEN_NOFRAME uint GEN_THISCALL F_00b07290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x1c);
  if (uVar3 != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x18);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,uVar3);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  return uVar3;
}

/* ref: FUN_00b072d0 */
GEN_FRAME uint GEN_THISCALL F_00b072d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb072d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  uVar1 = (uint)*(ushort *)((int)this_00 + 0x54);
  if ((uVar1 == 4) || (uVar1 = uVar1 - 6, uVar1 == 0)) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    uVar1 = F_006f3a50(this_00 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),1);
  }
  return uVar1;
}

/* ref: FUN_00b07320 */
GEN_NOFRAME uint GEN_THISCALL F_00b07320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xe0000000;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042b630((int)this + 0x10 GEN_EDX_FWD);
  F_00a6a7a0((undefined *)((int)this + 100) GEN_EDX_ARG,0,0);
  *(undefined1 *)((int)this + 0x98) = 0;
  return (uint)this;
}

/* ref: FUN_00b07360 */
GEN_FRAME unsigned int F_00b07360(unsigned int gen_a0)
{
  GEN_ENTER(0xb07360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1);
  }
  return;
}

/* ref: FUN_00b07380 */
GEN_FRAME byte F_00b07380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  uVar1 = F_00ab3de0(param_1);
  if ((uVar1 != 0) && (*(int *)(uVar1 + 0x20) != 0)) {
    piVar2 = (int *)F_005f3270(0x31,*(int *)(uVar1 + 0x20),0);
    if (piVar2 != (int *)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xe4))(piVar2 GEN_EDX_ARG)));
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b073e0 */
GEN_FRAME byte GEN_STDCALL F_00b073e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb073e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  if (param_1 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a5f290(param_1 GEN_EDX_ARG);
  }
  uVar2 = F_00ab21d0(0x22);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    return *((byte *)GEN_TOP((*(byte *)(uVar1 + 0x1688) + 4 + uVar2)));
  }
  return 0;
}

/* ref: FUN_00b07420 */
GEN_FRAME byte GEN_THISCALL F_00b07420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb07420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 0x1689) < *(byte *)((int)this + 0x321);
    }
  }
  return 1;
}

/* ref: FUN_00b07460 */
GEN_FRAME byte GEN_THISCALL F_00b07460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb07460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00a5f290(param_1 GEN_EDX_FWD);
    if (uVar1 != 0) {
      return *(byte *)((int)this + 0x322) < *(byte *)(uVar1 + 0x1689);
    }
  }
  return 1;
}

/* ref: FUN_00b074a0 */
GEN_FRAME uint GEN_THISCALL F_00b074a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb074a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  uint uVar1;
  byte bVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x54);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
    *(undefined4 *)(param_3 + 4) = 2;
    *(uint *)(param_3 + 0x60) = (uint)*(byte *)(param_2 + 0x2fa + (int)this);
    *param_3 = 1;
    return (uint)param_3;
  case 2: ;
  case 0xb: ;
    param_3[0x5d] = uVar1 != 0xb;
    *(undefined4 *)(param_3 + 4) = 6;
    if (param_2 < 3) {
      uVar1 = (uint)*(byte *)(param_2 + 0x300 + (int)this);
      *(uint *)(param_3 + 0x60) = uVar1;
      bVar2 = *(byte *)((int)this + 0x2fe);
      *param_3 = 1;
      *(uint *)(param_3 + 100) = (uint)bVar2;
      return uVar1;
    }
    *(undefined4 *)(param_3 + 0x60) = 0;
    bVar2 = *(byte *)((int)this + 0x2fe);
    *param_3 = 1;
    *(uint *)(param_3 + 100) = (uint)bVar2;
    return 0;
  case 3: ;
  case 0xc: ;
    param_3[0x5d] = uVar1 != 0xc;
    *(undefined4 *)(param_3 + 4) = 6;
    if (param_2 < 3) {
      bVar2 = *(byte *)(param_2 + 0x300 + (int)this);
    }
    else {
      bVar2 = 0;
    }
    uVar1 = (uint)bVar2;
    *(uint *)(param_3 + 0x60) = uVar1;
    bVar2 = *(byte *)((int)this + 0x2ff);
    *param_3 = 1;
    *(uint *)(param_3 + 100) = (uint)bVar2;
  default: ;
    return uVar1;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
    break;
  }
  if (uVar1 - 0x2b < 3) {
    param_3[0x5d] = 0;
  }
  *(undefined4 *)(param_3 + 4) = 6;
  if (param_2 < 3) {
    bVar2 = *(byte *)(param_2 + 0x300 + (int)this);
  }
  else {
    bVar2 = 0;
  }
  *(uint *)(param_3 + 0x60) = (uint)bVar2;
  if (param_2 < 3) {
    uVar1 = (uint)*(byte *)(param_2 + 0x303 + (int)this);
    *(uint *)(param_3 + 100) = uVar1;
    *param_3 = 1;
    return uVar1;
  }
  *(undefined4 *)(param_3 + 100) = 0;
  *param_3 = 1;
  return 0;
}

/* ref: FUN_00b07630 */
GEN_FRAME uint GEN_THISCALL F_00b07630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((param_2 != 0) && (*(char *)((int)this + 800) == '\x02')) &&
     (*(byte *)((int)this + 0x2f9) != 0)) {
    uVar1 = *(undefined4 *)((int)this + 0x314);
    param_1[1] = (uint)*(byte *)((int)this + 0x2f9);
    *param_1 = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07670 */
GEN_FRAME uint GEN_THISCALL F_00b07670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb07670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if (uVar1 == 3) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x2f8))) {
    case 2: ;
    case 8: ;
    case 9: ;
      if (param_1[0x1d] == *(int *)((int)this + 0x14)) {
        return 0xed3c;
      }
      break;
    case 7: ;
      if (param_1[0x1d] == *(int *)((int)this + 0x10)) {
        return 0xeabd;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b076f0 */
GEN_NOFRAME byte GEN_THISCALL F_00b076f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb076f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a5f290(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD);
  }
  uVar2 = F_00ab21d0(0x22);
  if (((uVar1 != 0) && (uVar2 != 0)) && (*((char *)GEN_TOP((*(byte *)(uVar1 + 0x1688) + 4 + uVar2))) != '\0'))
  {
    if (((this_00 != (undefined *)0x0) && (uVar1 = F_00a5f290(this_00 GEN_EDX_ARG), uVar1 != 0)) &&
       (*(byte *)(uVar1 + 0x1689) <= *(byte *)((int)this + 0x322))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07760 */
GEN_FRAME uint GEN_THISCALL F_00b07760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006fec60(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined * PTR32 *)(REFG(int, 0x14c0cf8) + 0x218) = this;
  return (uint)this;
}

/* ref: FUN_00b077a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b077a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb077a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
  *(undefined4 *)(REFG(int, 0x14c0cf8) + 0x218) = 0;
  if (*(int *)((int)this + 0x330) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x32c);
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1 GEN_EDX_FWD,*(int *)((int)this + 0x330));
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x330);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0x330) = 0;
    }
  }
  *(undefined4 *)((int)this + 0x32c) = 0;
  uVar3 = F_006fed10(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Game::Fate::FateDirector::vf43 */
GEN_FRAME uint GEN_THISCALL F_00b07810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb07810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if ((1 < (int)uVar2) && (((int)uVar2 < 4 || (uVar2 == 7)))) {
    uVar2 = F_00a51200(0x59,param_1[0x1d],0,0,0);
  }
  if ((short)param_1[0x3a] != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    if ((((uVar2 == 2) && (param_1[0x47] == 0)) && (param_1[0x39] == *(int *)(this + 8))) &&
       (((param_1[0x3b] != 0 || (param_1[0x3c] != 0)) &&
        ((uVar2 = F_00a5f290(param_1 GEN_EDX_ARG), uVar2 != 0 && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)))))) {
      bVar1 = F_00aa1800(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG,uVar2);
      if (bVar1 == 0) {
        uVar3 = 0xa4;
      }
      else {
        uVar3 = 0xa3;
      }
      F_00ab4370(uVar3,uVar2,uVar2,0,0);
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c0))(this GEN_EDX_ARG,param_1);
    if (uVar2 != 0) {
      *(byte *)((int)param_1 + 0x8f) = *(byte *)((int)param_1 + 0x8f) | 4;
    }
  }
  return uVar2;
}

/* ref: FUN_00b078e0 */
GEN_FRAME ushort F_00b078e0(unsigned int gen_a0)
{
  GEN_ENTER(0xb078e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  *(ushort *)(REFG(int, 0x14c0cf8) + 0x230) = (ushort)param_1;
  return (ushort)param_1;
}

/* ref: FUN_00b07930 */
GEN_NOFRAME byte GEN_THISCALL F_00b07930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x21c) != (undefined *)0x0) {
    bVar1 = F_00b076f0(*(undefined * PTR32 *)((int)this + 0x21c) GEN_EDX_FWD);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00b07950 */
GEN_FRAME uint GEN_STDCALL F_00b07950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb07950u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  int * this;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  float fVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar2 = param_2;
  if (param_3 != (uint *)0x0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,(*param_3 & 0xffffff) + (int)param_3,REFG(undefined4, 0x108cc50));
    if (((param_1 != -0x20000000) &&
        (this = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1), this != (int *)0x0)) &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this + 0x68))(this GEN_EDX_ARG), (char)uVar2 != '\0')) {
      uVar2 = F_006b8c00();
      uVar2 = F_006d7400((undefined *)(uVar2 + 0x100) GEN_EDX_ARG);
      uVar3 = F_00a5f290(this GEN_EDX_ARG);
      if ((uVar3 != uVar2) && (REFG(int, 0x1488344) != 0)) {
        pvVar4 = (undefined *)F_006b8c00();
        piVar5 = (int *)F_006de750(pvVar4 GEN_EDX_ARG);
        if (piVar5 != this) {
          piVar5 = (int *)F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG);
          if (piVar5 != (int *)0x0) {
            if ((param_3[3] & 4) == 0) {
              if ((param_3[3] & 1) != 0) {
                uVar11 = 0;
                puVar9 = ((undefined1 *)(gen_frame + 0x4));
                uVar8 = 0x44;
                pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5 GEN_EDX_ARG)));
                F_00459b00(pvVar4 GEN_EDX_ARG,uVar8,param_2,puVar9,uVar11);
              }
            }
            else {
              uVar2 = param_3[2];
              iVar1 = *piVar5;
              uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
              uVar6 = F_0042a990(param_2 GEN_EDX_ARG);
              ((code *)*(gen_code32 *)(iVar1 + 0x108))(piVar5,uVar6,uVar3,uVar2);
            }
          }
          if (((param_3[3] & 2) != 0) && (uVar2 = F_00a5f290(this GEN_EDX_ARG), uVar2 != 0)) {
            uVar3 = (uint)*(byte *)((int)param_3 + 0xd);
            fVar10 = gen_bits2f(param_3[1]);
            uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
            F_00bc5d20(uVar2 + 0x15dc GEN_EDX_ARG,uVar6,fVar10,uVar3);
          }
        }
      }
    }
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    uVar2 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b07ac0 */
GEN_FRAME uint GEN_THISCALL F_00b07ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  uVar7 = 0;
  puVar2 = (undefined4 *)(*(int *)this - 2);
  (*(int * PTR32 *)(gen_frame + 0x68)) = (int *)0x0;
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)((int)this + 4) != -0x20000000) {
      do {
        piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar7)]));
        if (((piVar1 != (int *)0x0) && (piVar1[0x1d] == *(int *)((int)this + 4))) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_FWD), (char)uVar3 != '\0')) {
          (*(int * PTR32 *)(gen_frame + 0x68)) = piVar1;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x158);
    }
    if (*(int *)((int)this + 8) != 0) {
      uVar7 = 0;
      do {
        piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar7)]));
        if (((piVar1 != (int *)0x0) && (piVar1[0x1e] == *(int *)((int)this + 8))) &&
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_ARG), (char)uVar3 != '\0')) break;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x158);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x68)) == (int *)0x0) {
      *(byte *)((int)this + 0x98) = *(byte *)((int)this + 0x98) & 0xfe;
    }
    else {
      *(byte *)((int)this + 0x98) = *(byte *)((int)this + 0x98) | 1;
    }
    if ((*(byte *)((int)this + 0x98) & 1) != 0) {
      pfVar4 = (float *)F_00a5feb0((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x68)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x68)) GEN_EDX_ARG);
      F_0042e430((undefined *)((int)this + 0x10) GEN_EDX_ARG,uVar7);
      puVar5 = (undefined4 *)
               F_00a6a710(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,0,(undefined *)((int)this + 0x10),*(undefined4 *)((int)this + 0xc),
                            *pfVar4,pfVar4[1],pfVar4[2],(float)(float10)0,(uint)REFG(undefined2, 0x1379c78),0,0,0,
                            0xff);
      puVar2 = puVar5;
      puVar8 = (undefined4 *)((int)this + 100);
      for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar8 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar8 = puVar8 + 1;
      }
      return (uint)puVar5;
    }
    puVar2 = (undefined4 *)F_00a6a7a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,0);
    puVar8 = puVar2;
    puVar5 = (undefined4 *)((int)this + 100);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b07c00 */
GEN_FRAME uint F_00b07c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb07c00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  
  this = (undefined4 *)F_00406b90(0x338,0,0);
  if (this != (undefined4 *)0x0) {
    F_006fec60(this GEN_EDX_ARG,param_1 & 0xffff | 0x801a0000,param_2);
    *this = (*(undefined * PTR32 (*)[158])REFP(0x10ecd7c));
    this[0xcb] = 0;
    this[0xcc] = 0;
    *(undefined4 * PTR32 *)(REFG(int, 0x14c0cf8) + 0x218) = this;
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b07c70 */
GEN_NOFRAME uint GEN_THISCALL F_00b07c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  undefined * pvVar1;
  undefined4 * puVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(byte *)(gen_frame + 0x5f)) = (byte)(*(uint *)((int)this + 0x1c) >> 10) & 1;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x340);
  (*(undefined * PTR32 *)(gen_frame + 0x58)) = this;
  if (puVar2 == (undefined4 *)0xe0000000) {
    piVar3 = (int *)F_005f3270(0x31,*(undefined4 *)((int)this + 0x318),0);
    puVar2 = (undefined4 *)0x0;
    if (piVar3 == (int *)0x0) goto LAB_00b07d7a;
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x40;
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xf4))(piVar3 GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x40)) = *pfVar4;
    (*(float *)(gen_frame + 0x44)) = pfVar4[1];
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3 GEN_EDX_ARG)));
    *(undefined4 *)((int)this + 0x330) = *puVar2;
    *(undefined4 *)((int)this + 0x334) = puVar2[1];
    *(undefined4 *)((int)this + 0x338) = puVar2[2];
    *(float *)((int)this + 0x344) = (*(float *)(gen_frame + 0x40));
    *(float *)((int)this + 0x34c) = (*(float *)(gen_frame + 0x44));
    *(float *)((int)this + 0x348) = (float)((float10)(*(float *)(gen_frame + 0x40)) * (float10)(*(float *)(gen_frame + 0x40)));
  }
  else {
    if (puVar2 == (undefined4 *)0xe0000000) goto LAB_00b07d7a;
    pvVar1 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,puVar2,0);
    puVar2 = (undefined4 *)0x0;
    if (pvVar1 == (undefined *)0x0) goto LAB_00b07d7a;
    puVar2 = (undefined4 *)F_00a5feb0(pvVar1 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x330) = *puVar2;
    *(undefined4 *)((int)this + 0x334) = puVar2[1];
    *(undefined4 *)((int)this + 0x338) = puVar2[2];
  }
  (*(byte *)(gen_frame + 0x5f)) = 1;
LAB_00b07d7a: ;
  if (*(uint *)&REFG(undefined2, 0x1379c78) == 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffbf;
    return (uint)puVar2;
  }
  if ((*(byte *)(gen_frame + 0x5f)) != 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffbff;
    *(undefined4 *)((int)this + 0x4b8) = 1;
    *(undefined4 *)((int)this + 0x4c4) = 0xec69;
    (*(int *)(gen_frame + 0x54)) = (int)this + 0x9c;
    uVar5 = F_0042a990((int)this + 0x9c GEN_EDX_ARG);
    F_0042e430((undefined *)((int)this + 0x4c8) GEN_EDX_ARG,uVar5);
    *(undefined4 *)((int)this + 0x4c0) = 0;
    puVar2 = (undefined4 *)
             F_00a6a710(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,(undefined *)((int)this + 0x4c8),*(undefined4 *)((int)this + 0x4c4),
                          *(float *)((int)this + 0x330),*(float *)((int)this + 0x334),
                          *(float *)((int)this + 0x338),*(float *)((int)this + 0x344),
                          *(uint *)&REFG(undefined2, 0x1379c78) & 0xffff,0,0,0,0xff);
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x58));
    puVar7 = (undefined4 *)((int)this + 0x51c);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar7 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x554) = 1;
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x560) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x310);
    this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x58)) + 0x564);
    uVar5 = F_0042a990((*(int *)(gen_frame + 0x54)) GEN_EDX_ARG);
    F_0042e430(this_00 GEN_EDX_ARG,uVar5);
    *(undefined4 *)((int)pvVar1 + 0x55c) = 0;
    puVar2 = (undefined4 *)
             F_00a6a710(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,0,this_00,*(undefined4 *)((int)pvVar1 + 0x560),
                          *(float *)((int)pvVar1 + 0x330),*(float *)((int)pvVar1 + 0x334),
                          *(float *)((int)pvVar1 + 0x338),(float)(float10)0,
                          *(uint *)&REFG(undefined2, 0x1379c78) & 0xffff,0,0,0,0xff);
    puVar7 = puVar2;
    puVar8 = (undefined4 *)((int)pvVar1 + 0x5b8);
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 - 1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00b07f50 */
GEN_NOFRAME byte GEN_THISCALL F_00b07f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb07f50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(uint *)(in_ecx + 0x1c) >> 7 & 1) != 0) &&
     ((*(char *)(in_ecx + 0x2f8) == '\x02' || (*(char *)(in_ecx + 0x2f8) == '\b')))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b07f80 */
GEN_FRAME uint GEN_THISCALL F_00b07f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xb07f80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(undefined4 *)(in_ecx + 0x340) = param_2;
  *(undefined4 *)(in_ecx + 0x330) = *param_3;
  *(undefined4 *)(in_ecx + 0x334) = param_3[1];
  *(undefined4 *)(in_ecx + 0x338) = param_3[2];
  *(float *)(in_ecx + 0x344) = param_4;
  *(float *)(in_ecx + 0x34c) = param_5;
  *(float *)(in_ecx + 0x348) = (float)((float10)param_4 * (float10)param_4);
  *(uint *)(in_ecx + 0x1c) = *(uint *)(in_ecx + 0x1c) | 0x404;
  return (uint)param_3;
}

/* ref: FUN_00b07fe0 */
GEN_FRAME uint GEN_THISCALL F_00b07fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb07fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  ulonglong uVar2;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 != param_1) {
    if (uVar1 != 0xe0000000) {
      uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar1);
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0x8f) = *(byte *)(uVar1 + 0x8f) | 4;
      }
    }
    *(uint *)((int)this + 0x10) = param_1;
    if (param_1 == 0xe0000000) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x10)) = param_1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      F_00a6a7a0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,0,0);
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      F_00b0c920((undefined *)((int)this + 0x5f0) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      uVar1 = (uint)uVar2;
    }
    else {
      *(byte *)((int)this + 0x688) = *(byte *)((int)this + 0x688) & 0xfe;
      *(undefined4 *)((int)this + 0x5f0) = 2;
      *(undefined4 *)((int)this + 0x5fc) = 0xec2a;
      *(uint *)((int)this + 0x5f4) = param_1;
      uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_ARG,param_1);
      if (uVar1 != 0) {
        *(byte *)(uVar1 + 0x8f) = *(byte *)(uVar1 + 0x8f) | 4;
      }
    }
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x100;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00b080e0 */
GEN_FRAME uint GEN_THISCALL F_00b080e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb080e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(uint *)(gen_frame + 0xa8)) = uVar2;
  if (*(int *)((int)this + 0x14) != param_1) {
    *(int *)((int)this + 0x14) = param_1;
    if (param_1 == -0x20000000) {
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x10)) = param_1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_0042b630(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_FWD);
      F_00a6a7a0(((undefined1 *)(gen_frame + 0x70)) GEN_EDX_ARG,0,0);
      (*(undefined1 *)(gen_frame + 0xa4)) = 0;
      F_00b0c920((undefined *)((int)this + 0x68c) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xc)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x1c)) GEN_EDX_ARG);
      uVar2 = (uint)uVar5;
    }
    else {
      *(byte *)((int)this + 0x724) = *(byte *)((int)this + 0x724) & 0xfe;
      *(undefined4 *)((int)this + 0x68c) = 2;
      *(undefined4 *)((int)this + 0x698) = 0xec60;
      *(int *)((int)this + 0x690) = param_1;
      piVar3 = &REFG(undefined4, 0x14a31f4);
      uVar4 = 2;
      do {
        if ((((uVar4 - 2 < 0x158) && (iVar1 = piVar3[-1], iVar1 != 0)) &&
            (*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18))) &&
           (*(int *)(iVar1 + 0x74) == param_1)) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        if (((uVar4 - 1 < 0x158) && (iVar1 = *piVar3, iVar1 != 0)) &&
           ((*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18) &&
            (*(int *)(iVar1 + 0x74) == param_1)))) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        if (((uVar4 < 0x158) && (iVar1 = piVar3[1], iVar1 != 0)) &&
           ((*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18) &&
            (*(int *)(iVar1 + 0x74) == param_1)))) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        if ((((uVar4 + 1 < 0x158) && (iVar1 = piVar3[2], iVar1 != 0)) &&
            (*(short *)(iVar1 + 0xe8) == *(short *)((int)this + 0x18))) &&
           (*(int *)(iVar1 + 0x74) == param_1)) {
          *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 4;
        }
        uVar2 = uVar4 + 2;
        piVar3 = piVar3 + 4;
        uVar4 = uVar4 + 4;
      } while (uVar2 < 0x158);
    }
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x200;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b08260 */
GEN_FRAME byte GEN_THISCALL F_00b08260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb08260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code * pcVar4;
  undefined * this_00;
  undefined4 * puVar5;
  int * piVar6;
  
  if (*(int *)((int)this + 0x318) == 0) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x1c) >> 2 & 1) != 0) {
    if ((*(int *)((int)this + 0x340) == -0x20000000) ||
       (this_00 = (undefined *)F_00a35490(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,*(int *)((int)this + 0x340)),
       this_00 == (undefined *)0x0)) {
      *param_1 = *(undefined4 *)((int)this + 0x330);
      param_1[1] = *(undefined4 *)((int)this + 0x334);
      param_1[2] = *(undefined4 *)((int)this + 0x338);
    }
    else {
      puVar5 = (undefined4 *)F_00a5feb0(this_00 GEN_EDX_ARG);
      *param_1 = *puVar5;
      param_1[1] = puVar5[1];
      param_1[2] = puVar5[2];
    }
    uVar1 = *(undefined4 *)((int)this + 0x34c);
    uVar2 = *(undefined4 *)((int)this + 0x344);
    *param_2 = uVar2;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return 1;
  }
  piVar6 = (int *)F_005f3270(0x31,*(int *)((int)this + 0x318),0);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xe4))(piVar6 GEN_EDX_ARG)));
  iVar3 = *piVar6;
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  pcVar4 = *(gen_code32 *)(iVar3 + 0xf4);
  param_1[2] = puVar5[2];
  puVar5 = ((undefined4 *)GEN_TOP((*pcVar4)(piVar6)));
  *param_2 = *puVar5;
  param_2[1] = puVar5[1];
  param_2[2] = puVar5[2];
  return 1;
}

/* ref: FUN_00b08360 */
GEN_FRAME uint GEN_THISCALL F_00b08360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 4)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b08390 */
GEN_FRAME uint GEN_THISCALL F_00b08390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 4)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00b083c0 */
GEN_FRAME uint GEN_THISCALL F_00b083c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb083c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x220);
  uVar2 = 0;
  if (piVar5 != *(int * PTR32 *)((int)this + 0x224)) {
    do {
      iVar4 = *piVar5;
      puVar3 = (undefined4 *)(uVar2 * 0x10 + param_1);
      if (((param_2 == uVar2) || (*(char *)(iVar4 + 800) != '\x02')) ||
         (bVar1 = *(byte *)(iVar4 + 0x2f9), bVar1 == 0)) {
        iVar4 = 0;
      }
      else {
        *puVar3 = *(undefined4 *)(iVar4 + 0x314);
        puVar3[1] = (uint)bVar1;
        iVar4 = 1;
      }
      piVar5 = piVar5 + 1;
      uVar2 = uVar2 + iVar4;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x224));
  }
  return uVar2;
}

/* ref: FUN_00b08430 */
GEN_FRAME unsigned int GEN_THISCALL F_00b08430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1b4);
  if (piVar1 != *(int * PTR32 *)((int)this + 0x1b8)) {
    while (*piVar1 != param_1) {
      piVar1 = piVar1 + 0x12;
      if (piVar1 == *(int * PTR32 *)((int)this + 0x1b8)) {
        return 0;
      }
    }
    *piVar1 = -0x20000000;
  }
  return 0;
}

/* ref: FUN_00b08460 */
GEN_FRAME byte GEN_THISCALL F_00b08460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  int in_ecx_00;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)(in_ecx + 0x220);
  piVar1 = *(int * PTR32 *)(in_ecx + 0x224);
  while( true ) {
    if (piVar3 == piVar1) {
      return 0;
    }
    in_ecx_00 = *piVar3;
    if (((*(uint *)(in_ecx_00 + 0x1c) >> 7 & 1) != 0) &&
       (((*(char *)(in_ecx_00 + 0x2f8) == '\x02' || (*(char *)(in_ecx_00 + 0x2f8) == '\b')) &&
        (uVar2 = F_00b0c820(in_ecx_00 GEN_EDX_FWD,param_2), (char)uVar2 != '\0')))) break;
    piVar3 = piVar3 + 1;
  }
  return 1;
}

/* ref: FUN_00b084c0 */
GEN_FRAME uint GEN_THISCALL F_00b084c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb084c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*puVar1 + 0x18) == (short)param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_00b084f0 */
GEN_FRAME uint GEN_THISCALL F_00b084f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb084f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*puVar1 + 0x18) == (short)param_1) break;
    puVar1 = puVar1 + 1;
  }
  return *puVar1;
}

/* ref: FUN_00b08520 */
GEN_FRAME byte GEN_THISCALL F_00b08520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb08520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x220);
  do {
    if (piVar5 == *(int * PTR32 *)((int)this + 0x224)) {
LAB_00b08546: ;
      uVar4 = F_00ab3de0(param_1);
      if (((uVar4 != 0) && (*(int *)(uVar4 + 0x20) != 0)) &&
         (piVar5 = (int *)F_005f3270(0x31,*(int *)(uVar4 + 0x20),0), piVar5 != (int *)0x0)) {
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0xe4))(piVar5 GEN_EDX_ARG)));
        *param_2 = *puVar6;
        param_2[1] = puVar6[1];
        param_2[2] = puVar6[2];
        return 1;
      }
      return 0;
    }
    iVar3 = *piVar5;
    if (*(short *)(iVar3 + 0x18) == (short)param_1) {
      if ((*(uint *)(iVar3 + 0x1c) >> 7 & 1) != 0) {
        uVar1 = *(undefined4 *)(iVar3 + 0x334);
        uVar2 = *(undefined4 *)(iVar3 + 0x338);
        *param_2 = *(undefined4 *)(iVar3 + 0x330);
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        return 1;
      }
      goto LAB_00b08546;
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

/* ref: FUN_00b085e0 */
GEN_FRAME uint GEN_THISCALL F_00b085e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb085e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  if (piVar2 != *(int * PTR32 *)((int)this + 0x224)) {
    while (iVar1 = *piVar2, *(short *)(iVar1 + 0x18) != (short)param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
        return (uint)piVar2;
      }
    }
    *(undefined4 *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(iVar1 + 0x24) = param_3;
    *(int * PTR32 *)(iVar1 + 0x28) = param_4;
    *(undefined4 *)(iVar1 + 0x2c) = param_5;
    piVar2 = param_4;
  }
  return (uint)piVar2;
}

/* ref: FUN_00b08630 */
GEN_NOFRAME uint GEN_THISCALL F_00b08630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint in_EAX = 0;
  uint * puVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar6 = *(uint * PTR32 *)((int)this + 0x220);
  if (puVar6 != *(uint * PTR32 *)((int)this + 0x224)) {
    while( true ) {
      in_EAX = *puVar6;
      if (*(short *)(in_EAX + 0x18) == *param_1) break;
      puVar6 = puVar6 + 1;
      if (puVar6 == *(uint * PTR32 *)((int)this + 0x224)) {
        return in_EAX;
      }
    }
    iVar1 = *(int *)(param_1 + 6);
    uVar4 = param_1[4];
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    uVar5 = param_1[5];
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 10);
    *(undefined4 *)(in_EAX + 0x340) = *(undefined4 *)(param_1 + 2);
    *(float *)(in_EAX + 0x330) = (float)((float10)iVar1 * fVar7);
    *(float *)(in_EAX + 0x334) = (float)((float10)iVar2 * fVar7);
    *(float *)(in_EAX + 0x338) = (float)((float10)iVar3 * fVar7);
    fVar8 = (float10)(float)((float10)uVar4 * fVar7);
    *(float *)(in_EAX + 0x344) = (float)((float10)uVar4 * fVar7);
    *(float *)(in_EAX + 0x348) = (float)(fVar8 * fVar8);
    *(float *)(in_EAX + 0x34c) = (float)((float10)uVar5 * fVar7);
    *(uint *)(in_EAX + 0x1c) = *(uint *)(in_EAX + 0x1c) | 0x404;
  }
  return in_EAX;
}

/* ref: FUN_00b08710 */
GEN_FRAME uint GEN_THISCALL F_00b08710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)((int)*puVar1 + 0x18) == *(short *)(param_1 + 0xe8)) break;
    puVar1 = puVar1 + 1;
  }
  uVar2 = F_00b07670((undefined *)*puVar1 GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: FUN_00b08760 */
GEN_FRAME byte GEN_THISCALL F_00b08760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb08760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    iVar1 = *piVar2;
    if (*(short *)(iVar1 + 0x18) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  if ((param_2 != (undefined *)0x0) && (uVar3 = F_00a5f290(param_2 GEN_EDX_FWD), uVar3 != 0)) {
    return *(byte *)(uVar3 + 0x1689) <= *(byte *)(iVar1 + 0x322);
  }
  return 0;
}

/* ref: FUN_00b087d0 */
GEN_FRAME uint GEN_THISCALL F_00b087d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb087d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x18) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(uint *)(*piVar1 + 0x20);
}

/* ref: FUN_00b08810 */
GEN_FRAME ulonglong GEN_THISCALL F_00b08810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    iVar1 = *piVar2;
    if (*(short *)(iVar1 + 0x18) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  return CONCAT44(*(int *)(iVar1 + 0x2c) + *(int *)(iVar1 + 0x24) +
                  (uint)CARRY4(*(uint *)(iVar1 + 0x28),*(uint *)(iVar1 + 0x20)),
                  *(uint *)(iVar1 + 0x28) + *(uint *)(iVar1 + 0x20));
}

/* ref: FUN_00b08860 */
GEN_FRAME byte GEN_THISCALL F_00b08860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x18) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(byte *)(*piVar1 + 0x321);
}

/* ref: FUN_00b088a0 */
GEN_FRAME byte GEN_THISCALL F_00b088a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb088a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)((int)this + 0x224)) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x18) == (short)param_1) break;
    piVar1 = piVar1 + 1;
  }
  return *(byte *)(*piVar1 + 0x322);
}

/* ref: FUN_00b088e0 */
GEN_FRAME byte GEN_THISCALL F_00b088e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb088e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x220);
  while( true ) {
    if (piVar2 == *(int * PTR32 *)((int)this + 0x224)) {
      return 1;
    }
    iVar1 = *piVar2;
    if (*(short *)(iVar1 + 0x18) == (short)param_1) break;
    piVar2 = piVar2 + 1;
  }
  if ((*(uint *)(iVar1 + 0x1c) >> 7 & 1) == 0) {
    return 1;
  }
  if ((*(char *)(iVar1 + 0x2f8) != '\x02') && (*(char *)(iVar1 + 0x2f8) != '\b')) {
    return 1;
  }
  return 1 - (*(byte *)(iVar1 + 0x322) < *(byte *)(param_2 + 0x1689));
}

/* ref: FUN_00b08980 */
GEN_FRAME unsigned int GEN_THISCALL F_00b08980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  short sVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  undefined1 * puVar6;
  
  puVar4 = param_1;
  *(undefined1 *)((int)this + 0x321) = *(undefined1 *)((int)param_1 + 0x3d);
  *(undefined1 *)((int)this + 0x322) = *(undefined1 *)((int)param_1 + 0x3e);
  *(uint *)((int)this + 0x30c) = param_1[9];
  *(uint *)((int)this + 0x310) = param_1[10];
  *(char *)((int)this + 800) = (char)param_1[0xf];
  *(uint *)((int)this + 0x31c) = param_1[0xb];
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffef;
  *(uint *)((int)this + 0x318) = param_1[8];
  F_0042e430((undefined *)((int)this + 0x9c) GEN_EDX_FWD,(*param_1 & 0xffffff) + (int)param_1);
  F_0042e430((undefined *)((int)this + 0xf0) GEN_EDX_ARG,(int)param_1 + (param_1[1] & 0xffffff) + 4);
  F_0042e430((undefined *)((int)this + 0x144) GEN_EDX_ARG,(int)param_1 + (param_1[2] & 0xffffff) + 8);
  *(undefined * PTR32 *)((int)this + 0x2e8) = (undefined *)((int)this + 0xf0);
  if (*(char *)((int)this + 800) == '\x02') {
    *(uint *)((int)this + 0x314) = param_1[6];
  }
  uVar5 = param_1[4];
  puVar1 = param_1 + 5;
  ((int *)(gen_frame + 0x8))[0] = (int)param_1 + (param_1[3] & 0xffffff) + 0xc;
  ((int *)(gen_frame + 0x8))[1] = (int)param_1 + (uVar5 & 0xffffff) + 0x10;
  param_1 = (uint *)((int)param_1 + 0x36);
  ((int *)(gen_frame + 0x8))[2] = (*puVar1 & 0xffffff) + (int)puVar1;
  ((int *)(gen_frame + 0x8))[3] = 0;
  ((int *)(gen_frame + 0x8))[4] = 0;
  puVar6 = (undefined1 *)((int)this + 0x3a6);
  do {
    sVar2 = *(short *)param_1;
    *(short *)(puVar6 - 2) = sVar2;
    if ((sVar2 == 0) || (iVar3 = ((int *)(gen_frame + 0x8))[(int)(((int *)(gen_frame + 0x8))[4])], iVar3 == 0)) {
      *puVar6 = 0;
      uVar5 = ((int *)(gen_frame + 0x8))[4];
    }
    else {
      *puVar6 = 1;
      F_0042e430(puVar6 - 0x56 GEN_EDX_ARG,iVar3);
      uVar5 = ((int *)(gen_frame + 0x8))[4];
    }
    param_1 = (uint *)((int)param_1 + 2);
    puVar6 = puVar6 + 0x58;
    ((int *)(gen_frame + 0x8))[4] = uVar5 + 1;
  } while (uVar5 + 1 < 4);
  F_0042e430((undefined *)((int)this + 0x198) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4);
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined4 *)((int)this + 0x338) = 0;
  *(undefined4 *)((int)this + 0x344) = 0;
  *(undefined4 *)((int)this + 0x348) = 0;
  *(undefined4 *)((int)this + 0x34c) = 0;
  *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xffffffbf;
  if (*(int *)((int)this + 0x318) != 0) {
    F_00b07c70(this GEN_EDX_ARG);
  }
  *(undefined1 *)((int)this + 0x323) = *(undefined1 *)((int)puVar4 + 0x3f);
  *(char *)((int)this + 0x324) = (char)puVar4[0x10];
  *(undefined1 *)((int)this + 0x325) = *(undefined1 *)((int)puVar4 + 0x41);
  if (*(char *)((int)puVar4 + 0x42) == '\0') {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) | 0x800;
  }
  else {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffff7ff;
  }
  if (*(char *)((int)puVar4 + 0x42) == '\0') {
    *(byte *)((int)this + 0x54e) = *(byte *)((int)this + 0x54e) | 2;
    *(byte *)((int)this + 0x5ea) = *(byte *)((int)this + 0x5ea) | 2;
    *(byte *)((int)this + 0x686) = *(byte *)((int)this + 0x686) | 2;
    *(byte *)((int)this + 0x722) = *(byte *)((int)this + 0x722) | 2;
  }
  return 0;
}

/* ref: FUN_00b08b80 */
GEN_FRAME uint GEN_THISCALL F_00b08b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb08b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_8;
  
  uVar4 = *(uint *)((int)this + 0x1c) >> 7;
  if (((uVar4 & 1) != 0) &&
     ((*(byte *)((int)this + 0x2f8) == 2 || (uVar4 = *(byte *)((int)this + 0x2f8) - 8, uVar4 == 0)))
     ) {
    uVar4 = *(uint *)((int)this + 0x20);
    uVar5 = *(uint *)((int)this + 0x28);
    iVar1 = *(int *)((int)this + 0x24);
    iVar2 = *(int *)(REFG(int, 0x14c0cf8) + 0x218);
    iVar3 = *(int *)((int)this + 0x2c);
    *(uint *)(iVar2 + 0x2f0) = uVar5 + uVar4;
    *(int *)(iVar2 + 0x2ec) = iVar1;
    *(uint *)(iVar2 + 0x2e8) = uVar4;
    *(uint *)(iVar2 + 0x2f4) = iVar3 + iVar1 + (uint)CARRY4(uVar5,uVar4);
    *((uint *)GEN_TOP((*(int *)(iVar2 + 0x2f8) + 0x60))) = (uint)*(byte *)((int)this + 0x2fd);
    uVar5 = 0;
    uVar4 = (int)this + 0x350;
    local_8 = 0;
    do {
      if (*(char *)(uVar4 + 0x56) != '\0') {
        F_00b074a0(this GEN_EDX_FWD,uVar4,local_8,uVar5 + 0x140 + *(int *)(iVar2 + 0x2f8));
      }
      local_8 = local_8 + 1;
      uVar4 = uVar4 + 0x58;
      uVar5 = uVar5 + 0x140;
    } while (uVar5 < 0x500);
  }
  return uVar4;
}

/* ref: FUN_00b08c50 */
GEN_FRAME uint GEN_THISCALL F_00b08c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((*(char *)((int)this + 800) == '\x02') && (*(int *)((int)this + 0x314) != 0)) {
    cVar1 = *(char *)((int)this + 0x2f9);
    uVar2 = *param_1;
    *(undefined4 *)((int)this + 0x2f9) = uVar2;
    if (cVar1 != (char)uVar2) {
      REFG(undefined4, 0x14a458f) = 1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x2f9) = *param_1;
  }
  uVar3 = REFG(undefined4, 0x14c0cf8);
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x14c0cf8) + 0x21c) == this) {
    uVar3 = F_00b08b80(this GEN_EDX_FWD);
    F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00b08cb0 */
GEN_FRAME uint GEN_THISCALL F_00b08cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb08cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  undefined1 * puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x14c0cf8) + 0x218);
  uVar2 = F_0042a990((int)this + 0x9c GEN_EDX_FWD);
  F_006f7250(this_00 GEN_EDX_ARG,uVar2);
  iVar3 = *(int *)((int)this + 0x2e8);
  if (iVar3 == 0) {
    iVar3 = (int)this + 0x48;
  }
  uVar2 = F_0042a990(iVar3 GEN_EDX_ARG);
  F_0042e430((undefined *)((int)this_00 + 0x23c) GEN_EDX_ARG,uVar2);
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)((int)this + 0x30c);
  *(uint *)((int)this_00 + 0x310) = (uint)*(byte *)((int)this + 0x321);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00ab3e10(3,((undefined1 *)(gen_frame + 0x4)));
  puVar1 = *(undefined1 * PTR32 *)((int)this_00 + 0x2f8);
  *(undefined4 *)(puVar1 + 4) = 5;
  F_0042ccf0(puVar1 + 8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
  *puVar1 = 1;
  uVar2 = 0x140;
  iVar3 = (int)this + 0x350;
  do {
    if (*(char *)(iVar3 + 0x56) == '\0') {
      *((undefined1 *)GEN_TOP((uVar2 + *(int *)((int)this_00 + 0x2f8)))) = 0;
    }
    else {
      F_0042ccf0(((undefined *)GEN_TOP((uVar2 + 8 + *(int *)((int)this_00 + 0x2f8)))) GEN_EDX_ARG,iVar3);
      *((undefined1 *)GEN_TOP((uVar2 + *(int *)((int)this_00 + 0x2f8)))) = 1;
    }
    uVar2 = uVar2 + 0x140;
    iVar3 = iVar3 + 0x58;
  } while (uVar2 < 0x640);
  F_00b08b80(this GEN_EDX_ARG);
  F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00b08dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00b08dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb08dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  float * pfVar7;
  undefined * pvVar8;
  int * piVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  
  if ((char)param_1 != *(char *)((int)this + 0x2f8)) {
    (*(float *)(gen_frame + 0x3c)) = 2.8026e-45;
    piVar9 = &REFG(undefined4, 0x14a31f4);
    do {
      if ((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) - 2U < 0x158) && (iVar4 = piVar9[-1], iVar4 != 0)) &&
         (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) {
        if ((*(int *)((int)this + 0x10) == -0x20000000) ||
           (*(int *)((int)this + 0x10) != *(int *)(iVar4 + 0x74))) {
          if ((*(int *)((int)this + 0x14) != -0x20000000) &&
             (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))) {
            *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
          }
        }
        else {
          *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
        }
      }
      if (((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) - 1U < 0x158) && (iVar4 = *piVar9, iVar4 != 0)) &&
          (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) &&
         (((*(int *)((int)this + 0x10) != -0x20000000 &&
           (*(int *)((int)this + 0x10) == *(int *)(iVar4 + 0x74))) ||
          ((*(int *)((int)this + 0x14) != -0x20000000 &&
           (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))))))) {
        *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
      }
      if (((((uint)gen_fl2bits((*(float *)(gen_frame + 0x3c))) < 0x158) && (iVar4 = piVar9[1], iVar4 != 0)) &&
          (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) &&
         (((*(int *)((int)this + 0x10) != -0x20000000 &&
           (*(int *)((int)this + 0x10) == *(int *)(iVar4 + 0x74))) ||
          ((*(int *)((int)this + 0x14) != -0x20000000 &&
           (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))))))) {
        *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
      }
      if (((((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 1U < 0x158) && (iVar4 = piVar9[2], iVar4 != 0)) &&
          (*(short *)(iVar4 + 0xe8) == *(short *)((int)this + 0x18))) &&
         (((*(int *)((int)this + 0x10) != -0x20000000 &&
           (*(int *)((int)this + 0x10) == *(int *)(iVar4 + 0x74))) ||
          ((*(int *)((int)this + 0x14) != -0x20000000 &&
           (*(int *)((int)this + 0x14) == *(int *)(iVar4 + 0x74))))))) {
        *(byte *)(iVar4 + 0x8f) = *(byte *)(iVar4 + 0x8f) | 4;
      }
      uVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 2;
      piVar9 = piVar9 + 4;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 4);
    } while (uVar6 < 0x158);
  }
  *(char *)((int)this + 0x2f8) = (char)param_1;
  if ((((char)param_1 == '\b') && (**(char * PTR32 *)((int)this + 0x144) != '\0')) &&
     (*(int *)((int)this + 0x2e8) = (int)this + 0x144, *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x21c))) == this
     )) {
    iVar4 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x218)));
    uVar6 = F_0042a990((int)this + 0x144 GEN_EDX_FWD);
    F_0042e430((undefined *)(iVar4 + 0x23c) GEN_EDX_ARG,uVar6);
    F_00a69750(&REFG(undefined4, 0x14b11f8) GEN_EDX_ARG);
  }
  cVar3 = *(char *)((int)this + 0x2f8);
  if (cVar3 == '\x02') {
    bVar5 = F_00b08260(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
    if ((bVar5 != 0) && (REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) {
      pfVar7 = (float *)F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar7 - (float10)(*(float *)(gen_frame + 0x10)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18)));
      fVar12 = (float10)(float)((float10)pfVar7[2] - (float10)(*(float *)(gen_frame + 0x18)));
      fVar13 = (float10)(float)((float10)*pfVar7 - (float10)(*(float *)(gen_frame + 0x10)));
      fVar1 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar1 < (float10)fVar2) {
        fVar1 = ((float)GEN_TOF(ABS((float10)(float)((float10)pfVar7[1] - (float10)(*(float *)(gen_frame + 0x14))))));
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        fVar12 = (float10)fVar1;
        fVar13 = (float10)(*(float *)(gen_frame + 0x4));
        bVar11 = (GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12;
        bVar10 = !(fVar12 <= fVar13);
        goto LAB_00b09027;
      }
      goto LAB_00b09029;
    }
  }
  else {
    bVar10 = cVar3 == '\x06';
    bVar11 = cVar3 == '\a';
LAB_00b09027: ;
    if (bVar10 || bVar11) {
LAB_00b09029: ;
      if (REFG(short, 0x14ab148) != 0) {
        F_00a51200(0x58,(uint)*(ushort *)((int)this + 0x18),0,0,0);
      }
    }
  }
  if (*(byte *)((int)this + 0x2f8) == 4) {
    pvVar8 = (undefined *)0x0;
    if ((*(byte *)((int)this + 0x1c) & 1) == 0) goto LAB_00b0909a;
    bVar5 = *(byte *)((int)this + 0x324);
  }
  else {
    pvVar8 = ((undefined *)GEN_TOP((*(byte *)((int)this + 0x2f8) - 5)));
    if ((pvVar8 != (undefined *)0x0) || ((*(byte *)((int)this + 0x1c) & 1) == 0)) goto LAB_00b0909a;
    bVar5 = *(byte *)((int)this + 0x325);
  }
  if (((bVar5 != 0) && (pvVar8 = REFG(void * PTR32, 0x1379694), REFG(void * PTR32, 0x1379694) != (undefined *)0x0)) &&
     (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x1379694) + 0x18a))) != '\x10')) {
    F_006b8c00();
    pvVar8 = (undefined *)F_006c6500((uint)bVar5);
  }
LAB_00b0909a: ;
  if ((*(uint *)((int)this + 0x1c) >> 7 & 1) != 0) {
    if (*(byte *)((int)this + 0x2f8) == 2) {
      return 0;
    }
    pvVar8 = ((undefined *)GEN_TOP((*(byte *)((int)this + 0x2f8) - 8)));
    if (pvVar8 == (undefined *)0x0) {
      return 0;
    }
  }
  if ((*(byte *)((int)this + 0x1c) & 1) != 0) {
    *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffe;
    pvVar8 = REFG(void * PTR32, 0x14c0cf8);
    *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) = *((char *)GEN_TOP(((int)REFG(void * PTR32, 0x14c0cf8) + 0x232))) - 1;
  }
  return (uint)pvVar8;
}

