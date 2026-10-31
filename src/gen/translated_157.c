#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00caa090 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00caa090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcaa090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
  return;
}

/* ref: FUN_00caa100 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00caa100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaa100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xb8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xbc)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xc0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00caa1d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00caa1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcaa1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x26c, 4, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  float * pfVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  
  if (*((char *)GEN_TOP(((int)this + 0x68))) != '\0') {
    puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x78)));
    fVar6 = *((float *)GEN_TOP(((int)this + 0x7c)));
    (*(float *)(gen_frame + 0x11c)) = *((float *)GEN_TOP(((int)this + 0x6c))) - *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP(((int)this + 0x70))) - fVar6;
    (*(float *)(gen_frame + 0x124)) = *((float *)GEN_TOP(((int)this + 0x74))) - *((float *)GEN_TOP(((int)this + 0x80)));
    uVar3 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(uint)puVar1,(uint)&(*(float *)(gen_frame + 0x11c)),(int)this + 0x90,
                         ((undefined4 *)GEN_TOP(((int)this + 0x84))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar3);
    *puVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
    *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *((undefined4 *)GEN_TOP(((int)this + 0x74)));
    (*(float *)(gen_frame + 0x174)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
    (*(float *)(gen_frame + 0x184)) = 0.0;
    (*(float *)(gen_frame + 0x194)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    (*(float *)(gen_frame + 0x1a4)) = 0.0;
    (*(float *)(gen_frame + 0x1f4)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *((undefined4 *)GEN_TOP(((int)this + 0x8c)));
    (*(float *)(gen_frame + 0x204)) = 0.0;
    (*(float *)(gen_frame + 0x214)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = *((undefined4 *)GEN_TOP(((int)this + 0x9c)));
    (*(float *)(gen_frame + 0x224)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xac))) = *((undefined4 *)GEN_TOP(((int)this + 0xa0)));
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
    *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x168)),((undefined4 *)GEN_TOP(((int)this + 0xa8))));
    pfVar4 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))))));
    pfVar5 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))))));
    fVar6 = pfVar4[1];
    fVar7 = *pfVar5;
    fVar8 = *pfVar4;
    fVar9 = pfVar5[4];
    fVar10 = pfVar4[2];
    (*(float *)(gen_frame + 0x228)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar7 + (double)fVar9 * (double)fVar6) +
                       (double)pfVar5[8] * (double)fVar10) + (double)pfVar5[0xc] * (double)pfVar4[3]
                      )));
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar8 + (double)pfVar5[5] * (double)fVar6) +
                       (double)pfVar5[9] * (double)fVar10) + (double)pfVar5[0xd] * (double)pfVar4[3]
                      )));
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar5[2] + (double)pfVar5[6] * (double)fVar6) +
                       (double)fVar10 * (double)pfVar5[10]) +
                      (double)pfVar4[3] * (double)pfVar5[0xe])));
    fVar11 = pfVar4[6];
    fVar12 = pfVar4[4];
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar5[3] + (double)fVar6 * (double)pfVar5[7]) +
                       (double)fVar10 * (double)pfVar5[0xb]) +
                      (double)pfVar4[3] * (double)pfVar5[0xf])));
    fVar6 = pfVar4[5];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar12 + (double)fVar9 * (double)fVar6) +
                       (double)pfVar5[8] * (double)fVar11) + (double)pfVar5[0xc] * (double)pfVar4[7]
                      )));
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar12 + (double)pfVar5[5] * (double)fVar6) +
                       (double)pfVar5[9] * (double)fVar11) + (double)pfVar5[0xd] * (double)pfVar4[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar5[6] * (double)fVar6 + (double)fVar12 * (double)pfVar5[2]) +
                       (double)fVar11 * (double)pfVar5[10]) +
                      (double)pfVar4[7] * (double)pfVar5[0xe])));
    fVar8 = pfVar4[10];
    fVar10 = pfVar4[8];
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)fVar12 * (double)pfVar5[3] + (double)fVar6 * (double)pfVar5[7]) +
                       (double)fVar11 * (double)pfVar5[0xb]) +
                      (double)pfVar4[7] * (double)pfVar5[0xf])));
    fVar6 = pfVar4[9];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar10 + (double)fVar9 * (double)fVar6) +
                       (double)pfVar5[8] * (double)fVar8) +
                      (double)pfVar5[0xc] * (double)pfVar4[0xb])));
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar10 + (double)pfVar5[5] * (double)fVar6) +
                       (double)pfVar5[9] * (double)fVar8) +
                      (double)pfVar5[0xd] * (double)pfVar4[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar5[6] * (double)fVar6 + (double)fVar10 * (double)pfVar5[2]) +
                       (double)fVar8 * (double)pfVar5[10]) +
                      (double)pfVar4[0xb] * (double)pfVar5[0xe])));
    fVar11 = pfVar4[0xe];
    fVar12 = pfVar4[0xd];
    fVar13 = pfVar4[0xf];
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)fVar10 * (double)pfVar5[3] + (double)fVar6 * (double)pfVar5[7]) +
                       (double)fVar8 * (double)pfVar5[0xb]) +
                      (double)pfVar4[0xb] * (double)pfVar5[0xf])));
    fVar6 = pfVar4[0xc];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar6 + (double)fVar9 * (double)fVar12) +
                       (double)pfVar5[8] * (double)fVar11) + (double)pfVar5[0xc] * (double)fVar13)));
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)pfVar5[1] * (double)fVar6 + (double)pfVar5[5] * (double)fVar12) +
                       (double)pfVar5[9] * (double)fVar11) + (double)pfVar5[0xd] * (double)fVar13)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar5[6] * (double)fVar12 + (double)fVar6 * (double)pfVar5[2]) +
                      (double)fVar11 * (double)pfVar5[10]) + (double)fVar13 * (double)pfVar5[0xe])));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar5[3] * (double)fVar6 + (double)pfVar5[7] * (double)pfVar4[0xd])
                      + (double)fVar11 * (double)pfVar5[0xb]) + (double)pfVar5[0xf] * (double)fVar13
                     )));
    pfVar4 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x8c)))))));
    fVar6 = *pfVar4;
    fVar7 = pfVar4[1];
    fVar8 = pfVar4[2];
    fVar9 = pfVar4[3];
    (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar7 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar7 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar10 = pfVar4[7];
    fVar11 = pfVar4[6];
    fVar12 = pfVar4[4];
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar7 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar4[5];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar7 = pfVar4[0xb];
    fVar8 = pfVar4[10];
    fVar9 = pfVar4[8];
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar4[9];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar10 = pfVar4[0xf];
    fVar11 = pfVar4[0xe];
    fVar12 = pfVar4[0xc];
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar4[0xd];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1e8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
    F_00c98b30(&(*(float *)(gen_frame + 0x1a8)),puVar1);
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b8)) + (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1a8))) +
                    (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1ac)) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1cc)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x1f8)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x240)) = fVar11;
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x208)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x248)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x218)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x258)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x170)) * (double)fVar12) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1e8)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar7 + (double)fVar10 * (double)(*(float *)(gen_frame + 0x16c))) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar8) +
                     (double)fVar14 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x178)) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1f8)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x1fc)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x200)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x208)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x20c)) = fVar25;
    fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x210)) = fVar26;
    *((float *)GEN_TOP(((int)this + 0xb4))) = fVar18;
    *((float *)GEN_TOP(((int)this + 0xb8))) = fVar19;
    *((float *)GEN_TOP(((int)this + 0xbc))) = fVar20;
    *((float *)GEN_TOP(((int)this + 0xc0))) = fVar21;
    *((float *)GEN_TOP(((int)this + 0xc4))) = fVar22;
    *((float *)GEN_TOP(((int)this + 200))) = fVar23;
    *((float *)GEN_TOP(((int)this + 0xcc))) = fVar24;
    *((float *)GEN_TOP(((int)this + 0xd0))) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xd4))) = fVar26;
    *((float *)GEN_TOP(((int)this + 0xd8))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15)));
    *((float *)GEN_TOP(((int)this + 0xdc))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar7) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16)));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar8) +
                    (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar17)));
    *((float *)GEN_TOP(((int)this + 0xe0))) = fVar6;
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
    (*(undefined4 *)(gen_frame + 0x128)) = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
    (*(undefined4 *)(gen_frame + 0x12c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    (*(undefined4 *)(gen_frame + 0x130)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x138)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    (*(undefined4 *)(gen_frame + 0x144)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 0xd8)));
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xdc)));
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xd0)));
    (*(float *)(gen_frame + 0x160)) = fVar6;
    (*(undefined4 *)(gen_frame + 0x150)) = *((undefined4 *)GEN_TOP(((int)this + 0xd4)));
    (*(undefined4 *)(gen_frame + 0x164)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined4 *)(gen_frame + 0x128));
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined4 *)(gen_frame + 0x12c));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = (*(undefined4 *)(gen_frame + 0x130));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x140));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0x104))) = (*(undefined4 *)(gen_frame + 0x150));
    *((undefined4 *)GEN_TOP(((int)this + 0x108))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x110))) = (*(float *)(gen_frame + 0x160));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cabaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcabaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00cabb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcabb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00cabb50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcabb50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_1) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x54))))(this GEN_EDX_FWD,param_2);
    return uVar1;
  }
  return param_1 & 0xffffff00;
}

/* ref: FUN_00cabb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcabb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = ((double)GEN_TOD((*((float *)GEN_TOP((in_ecx + 0x78))) - *param_2)));
  dVar2 = ((double)GEN_TOD((*((float *)GEN_TOP((in_ecx + 0x7c))) - param_2[1])));
  dVar3 = ((double)GEN_TOD((*((float *)GEN_TOP((in_ecx + 0x80))) - param_2[2])));
  if ((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar1 * dVar1) + dVar3 * dVar3))) <
      (double)*((float *)GEN_TOP((in_ecx + 0xa8))) * (double)*((float *)GEN_TOP((in_ecx + 0xa8)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cabc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcabc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0xc)) = SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28)) + (double)(*(float *)(gen_frame + 0x2c)) * (double)(*(float *)(gen_frame + 0x2c)))
                         + (double)(*(float *)(gen_frame + 0x30)) * (double)(*(float *)(gen_frame + 0x30))))));
  uVar3 = (*pcVar1)(param_1,this,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((char)uVar3 == '\0') {
    iVar2 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x14))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x28)),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00cabd20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabd20(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcabd20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = param_3;
  if (((param_1[0x11] & param_3) == 0) ||
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x74))))(param_1 GEN_EDX_FWD,param_2,param_5,param_6), (char)uVar1 == '\0'))
  {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    dVar3 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar3 * dVar3 +
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e])) *
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e]))) +
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])) *
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])))))))))));
    uVar1 = 1;
    if (0.0 < fVar2) {
      fVar2 = fVar2 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    }
    else {
      fVar2 = REFG(float, 0x1379704);
      if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
        REFG(float, 0x1379700) = 0;
        REFG(float, 0x1379704) = REFG(float, 0x1087f04);
        REFG(float, 0x1379708) = 0;
        fVar2 = REFG(float, 0x1087f04);
      }
    }
    if (!(fVar2 <= param_4)) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cabe60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cabe60(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0xcabe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  *param_2 = *param_4 * param_5;
  param_2[1] = param_4[1] * param_5;
  param_2[2] = param_4[2] * param_5;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = param_5;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_FWD));
  param_2[0xf] = fVar3;
  dVar6 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
  dVar5 = (double)(*param_2 - gen_bits2f(param_1[0x1e]));
  dVar7 = (double)(param_2[2] - gen_bits2f(param_1[0x20]));
  fVar3 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar6 * dVar6 + dVar5 * dVar5) + dVar7 * dVar7)))))))));
  fVar9 = 0.0;
  if (0.0 < fVar3) {
    fVar1 = (*param_2 - gen_bits2f(param_1[0x1e])) * fVar3;
    fVar2 = fVar3 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar3 = (param_2[2] - gen_bits2f(param_1[0x20])) * fVar3;
  }
  else {
    fVar1 = REFG(float, 0x1379700);
    fVar3 = REFG(float, 0x1379708);
    fVar2 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar1 = REFG(float, 0x1379700);
      fVar3 = REFG(float, 0x1379708);
      fVar2 = REFG(float, 0x1087f04);
    }
  }
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(float *)(gen_frame + 0x20)) = 0.0;
  fVar8 = REFG(float, 0x1087f04);
  if ((double)((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar2) & REFG(ulonglong, 0x11290a0)))) < REFG(double, 0x11294b8))
  {
    fVar8 = (float)((double)fVar2 * 0.0 - (double)fVar3);
    fVar9 = (float)((double)fVar3 * 0.0 - (double)fVar1 * 0.0);
    (*(float *)(gen_frame + 0x20)) = (float)((double)fVar1 - (double)fVar2 * 0.0);
  }
  fVar3 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)fVar8 * (double)fVar8 + (double)fVar9 * (double)fVar9
                                      ) + (double)(*(float *)(gen_frame + 0x20)) * (double)(*(float *)(gen_frame + 0x20)))))))))));
  if (0.0 < fVar3) {
    (*(float *)(gen_frame + 0x18)) = fVar3 * fVar8;
    (*(float *)(gen_frame + 0x1c)) = fVar9 * fVar3;
    fVar3 = (*(float *)(gen_frame + 0x20)) * fVar3;
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1379700);
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1379704);
    fVar3 = REFG(float, 0x1379708);
  }
  (*(float *)(gen_frame + 0x20)) = fVar3;
  pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)),(float)(REFG(double, 0x10920b8) * 0.0))));
  fVar3 = pfVar4[1];
  fVar9 = pfVar4[2];
  param_2[3] = *pfVar4 + *param_2;
  fVar1 = REFG(float, 0x11294b0);
  param_2[4] = fVar3 + param_2[1];
  param_2[5] = fVar9 + param_2[2];
  pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)),fVar1)));
  fVar3 = pfVar4[1];
  fVar9 = pfVar4[2];
  param_2[6] = *param_2 + *pfVar4;
  fVar1 = REFG(float, 0x11294ac);
  param_2[7] = fVar3 + param_2[1];
  param_2[8] = fVar9 + param_2[2];
  pfVar4 = ((float *)GEN_TOP(F_00ca6b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc)),&(*(float *)(gen_frame + 0x18)),fVar1)));
  fVar3 = pfVar4[1];
  fVar9 = pfVar4[2];
  param_2[9] = *param_2 + *pfVar4;
  param_2[10] = fVar3 + param_2[1];
  param_2[0xb] = fVar9 + param_2[2];
  return (uint)pfVar4;
}

/* ref: FUN_00cac330 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cac330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac330u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  byte bVar2;
  
  uVar1 = (*(uint *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((param_1 + 0x78)));
  (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((param_1 + 0x7c)));
  (*(undefined4 *)(gen_frame + 0x8)) = *((undefined4 *)GEN_TOP((param_1 + 0x80)));
  (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((param_1 + 0xa8)));
  bVar2 = F_00c9ae80((*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
  if (bVar2 != 0) {
    F_00cabe60(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),uVar1,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[2]))));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cac3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cac3c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcac3c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = param_3;
  if (((param_1[0x11] & param_3) == 0) ||
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_FWD,param_2,param_5,param_6), (char)uVar1 == '\0'))
  {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    dVar3 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar3 * dVar3 +
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e])) *
                                        (double)(*param_2 - gen_bits2f(param_1[0x1e]))) +
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])) *
                                       (double)(param_2[2] - gen_bits2f(param_1[0x20])))))))))));
    uVar1 = 1;
    if (0.0 < fVar2) {
      fVar2 = fVar2 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    }
    else {
      fVar2 = REFG(float, 0x1379704);
      if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
        REFG(float, 0x1379700) = 0;
        REFG(float, 0x1379704) = REFG(float, 0x1087f04);
        REFG(float, 0x1379708) = 0;
        fVar2 = REFG(float, 0x1087f04);
      }
    }
    if (!(fVar2 <= param_4)) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cac500 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cac500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  uVar6 = (*(undefined4 *)&gen_args[2]);
  uVar5 = (*(uint *)&gen_args[1]);
  fVar1 = *((float *)GEN_TOP((param_1 + 0x7c)));
  fVar2 = *((float *)GEN_TOP((param_1 + 0x80)));
  dVar8 = ((double)GEN_TOD((*((float *)GEN_TOP((param_1 + 0x78))) - *((float *)GEN_TOP((*(uint *)&gen_args[1]))))));
  dVar9 = ((double)GEN_TOD((fVar1 - *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 4))))));
  dVar10 = ((double)GEN_TOD((fVar2 - *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))))));
  if ((double)((float)GEN_TOF(((dVar9 * dVar9 + dVar8 * dVar8) + dVar10 * dVar10))) <
      (double)*((float *)GEN_TOP((param_1 + 0xa8))) * (double)*((float *)GEN_TOP((param_1 + 0xa8)))) {
    return 0;
  }
  fVar3 = *((float *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc)));
  fVar4 = *((float *)GEN_TOP((param_1 + 0xa8)));
  (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP((param_1 + 0x78)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0xc)) = fVar3 + fVar4;
  bVar7 = F_00c9ad50((*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(float *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
  if (bVar7 != 0) {
    F_00cabe60(param_1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),uVar5,uVar6,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[1]))));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cac620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cac620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcac620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  float * pfVar2;
  code * pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_2 != 0) && ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) == 0)) {
    return param_2 & 0xffffff00;
  }
  pfVar2 = ((float *)GEN_TOP(*param_3));
  switch((unsigned int)(uintptr_t)(pfVar2)) {
  case 0x2: ;
    goto switchD_00cac64a_caseD_2;
  case 0x3: ;
    uVar7 = param_3[2];
    uVar6 = param_3[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x68)));
    goto LAB_00cac708;
  case 0x4: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00cac64a_default;
  case 0x0: ;
    uVar7 = param_3[2];
    uVar6 = param_3[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x74)));
    break;
  case 0x5: ;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    pfVar2 = ((float *)GEN_TOP((uVar1 & *((uint *)GEN_TOP(param_3[5])))));
    if (pfVar2 != ((float *)GEN_TOP((((uint *)GEN_TOP(param_3[5])))[1]))) goto switchD_00cac64a_default;
  case 0x1: ;
    uVar7 = param_3[2];
    uVar6 = param_3[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x68)));
    break;
  case 0x6: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1])
    goto switchD_00cac64a_default;
    goto switchD_00cac64a_caseD_2;
  case 0x7: ;
    pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG)));
    if ((((*((uint *)GEN_TOP(param_3[5])) & (uint)pfVar2) != (((uint *)GEN_TOP(param_3[5])))[1]) ||
        (pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]))),
        (char)pfVar2 == '\0')) || (!(param_1[0x10] <= *((float *)GEN_TOP(param_3[3])))))
    goto switchD_00cac64a_default;
    fVar4 = *((float *)GEN_TOP(((int)this + 0x7c)));
    (*(float *)(gen_frame + 0x0)) = *param_1 - *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x4)) = param_1[1] - fVar4;
    (*(float *)(gen_frame + 0x8)) = param_1[2] - *((float *)GEN_TOP(((int)this + 0x80)));
    F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
    fVar5 = gen_bits2f(param_3[4]);
    fVar4 = (*(float *)(gen_frame + 0x4));
    goto LAB_00cac67a;
  default: ;
    goto switchD_00cac64a_default;
  }
  uVar1 = (*pcVar3)(this,param_1,uVar6,uVar7);
  if ((char)uVar1 != '\0') {
    fVar4 = param_1[0x10];
    fVar5 = *((float *)GEN_TOP(param_3[3]));
LAB_00cac67a: ;
    if (fVar4 <= fVar5) {
      return 1;
    }
  }
  return 0;
switchD_00cac64a_caseD_2: ;
  uVar7 = param_3[2];
  uVar6 = param_3[1];
  pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x74)));
LAB_00cac708: ;
  pfVar2 = ((float *)GEN_TOP((*pcVar3)(this,param_1,uVar6,uVar7)));
  if (((char)pfVar2 == '\0') || (pfVar2 = ((float *)GEN_TOP(param_3[3])), !(param_1[0x10] <= *pfVar2))) {
switchD_00cac64a_default: ;
    return (uint)pfVar2 & 0xffffff00;
  }
  fVar4 = *((float *)GEN_TOP(((int)this + 0x7c)));
  (*(float *)(gen_frame + 0x0)) = *param_1 - *((float *)GEN_TOP(((int)this + 0x78)));
  (*(float *)(gen_frame + 0x4)) = param_1[1] - fVar4;
  (*(float *)(gen_frame + 0x8)) = param_1[2] - *((float *)GEN_TOP(((int)this + 0x80)));
  F_00553ac0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar5 = gen_bits2f(param_3[4]);
  fVar4 = (*(float *)(gen_frame + 0x4));
  goto LAB_00cac67a;
}

/* ref: FUN_00cac890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cac890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcac890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  undefined4 uVar1;
  
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129540));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x112953c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x1129538));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x1129534));
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x110))) = 0;
  return (uint)this;
}

/* ref: FUN_00caca50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caca50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x68))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00caca70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caca70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaca70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x78)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x7c)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  return (uint)param_2;
}

/* ref: FUN_00caca90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caca90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaca90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x8c))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x68))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cacac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x90)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x94)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x98)));
  return (uint)param_2;
}

/* ref: FUN_00cacaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacaf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xa4))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x68))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cacb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xac)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  return (uint)param_2;
}

/* ref: FUN_00cacb50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cacb50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xf8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xfc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x100)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x104)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x10c)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x110)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0x108)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cacc20 */
GEN_LIB GEN_NOFRAME uint F_00cacc20(void)
{
  GEN_ENTER(0xcacc20u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00cacc30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacc30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcacc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00cacc70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cacc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cacca0((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cacc80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cacc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cacca0((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cacc90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cacc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cacca0((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cacca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacca0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x1129540));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x112953c));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x1129538));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x1129534));
  F_00c96c00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00caccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caccf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcaccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cacd20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cacd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcacd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x5c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x3c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
  return;
}

/* ref: FUN_00cacda0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacda0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  return (uint)param_2;
}

/* ref: FUN_00cacdd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cacdd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x80)));
  param_2[1] = *((undefined4 *)GEN_TOP((in_ecx + 0x84)));
  param_2[2] = *((undefined4 *)GEN_TOP((in_ecx + 0x88)));
  return (uint)param_2;
}

/* ref: FUN_00cace00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cace00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcace00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  *param_2 = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xa4))) * (double)*((float *)GEN_TOP((in_ecx + 0xa4))) +
                          (double)*((float *)GEN_TOP((in_ecx + 0xa8))) * (double)*((float *)GEN_TOP((in_ecx + 0xa8)))) +
                         (double)*((float *)GEN_TOP((in_ecx + 0xac))) * (double)*((float *)GEN_TOP((in_ecx + 0xac)))))));
  param_2[1] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xb0))) * (double)*((float *)GEN_TOP((in_ecx + 0xb0))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xb4))) * (double)*((float *)GEN_TOP((in_ecx + 0xb4)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xb8))) * (double)*((float *)GEN_TOP((in_ecx + 0xb8)))))));
  param_2[2] = SQRT(((float)GEN_TOF((((double)*((float *)GEN_TOP((in_ecx + 0xbc))) * (double)*((float *)GEN_TOP((in_ecx + 0xbc))) +
                            (double)*((float *)GEN_TOP((in_ecx + 0xc0))) * (double)*((float *)GEN_TOP((in_ecx + 0xc0)))) +
                           (double)*((float *)GEN_TOP((in_ecx + 0xc4))) * (double)*((float *)GEN_TOP((in_ecx + 0xc4)))))));
  return 0;
}

/* ref: FUN_00cacef0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cacef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcacef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xa8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xac)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xa4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xb0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xb4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xb8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xbc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xc0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xc4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xcc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd0)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 200)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cacfc0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cacfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcacfc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x26c, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  
  if (*((char *)GEN_TOP(((int)this + 0x104))) != '\0') {
    fVar5 = *((float *)GEN_TOP(((int)this + 0x78)));
    (*(float *)(gen_frame + 0x11c)) = *((float *)GEN_TOP(((int)this + 0x68))) - *((float *)GEN_TOP(((int)this + 0x74)));
    (*(float *)(gen_frame + 0x120)) = *((float *)GEN_TOP(((int)this + 0x6c))) - fVar5;
    (*(float *)(gen_frame + 0x124)) = *((float *)GEN_TOP(((int)this + 0x70))) - *((float *)GEN_TOP(((int)this + 0x7c)));
    uVar2 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)) GEN_EDX_FWD,(uint)this,(int)this + 0x74U,(uint)&(*(float *)(gen_frame + 0x11c)),(int)this + 0x8c,
                         (int)this + 0x80);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 0x40))) + 4)));
    F_00c9f060(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,uVar2);
    *((undefined4 *)GEN_TOP(((int)this + 0x74U))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = *((undefined4 *)GEN_TOP(((int)this + 0x6c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = *((undefined4 *)GEN_TOP(((int)this + 0x70)));
    (*(float *)(gen_frame + 0x174)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = *((undefined4 *)GEN_TOP(((int)this + 0x80)));
    (*(float *)(gen_frame + 0x184)) = 0.0;
    (*(float *)(gen_frame + 0x194)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = *((undefined4 *)GEN_TOP(((int)this + 0x84)));
    (*(float *)(gen_frame + 0x1a4)) = 0.0;
    (*(float *)(gen_frame + 0x1f4)) = 0.0;
    *((undefined4 *)GEN_TOP(((int)this + 0x94))) = *((undefined4 *)GEN_TOP(((int)this + 0x88)));
    *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 0;
    (*(float *)(gen_frame + 0x204)) = 0.0;
    (*(float *)(gen_frame + 0x214)) = 0.0;
    (*(float *)(gen_frame + 0x224)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e4)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x168)),(int)this + 0x98);
    F_00c98b30(&(*(float *)(gen_frame + 0x1a8)),((undefined4 *)GEN_TOP(((int)this + 0x68))));
    pfVar3 = ((float *)GEN_TOP(F_00c98740(((undefined1 *)(gen_frame + 0x40)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x84)))))));
    pfVar4 = ((float *)GEN_TOP(F_00c988c0(((undefined1 *)(gen_frame + 0x0)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x88)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = *pfVar4;
    fVar8 = pfVar4[4];
    fVar9 = pfVar3[2];
    (*(float *)(gen_frame + 0x228)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar6) +
                       (double)pfVar4[8] * (double)fVar9) + (double)pfVar4[0xc] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar6) +
                       (double)pfVar4[9] * (double)fVar9) + (double)pfVar4[0xd] * (double)pfVar3[3])))
    ;
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar6) +
                       (double)pfVar4[10] * (double)fVar9) + (double)pfVar4[0xe] * (double)pfVar3[3]
                      )));
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar4[3] + (double)fVar6 * (double)pfVar4[7]) +
                       (double)fVar9 * (double)pfVar4[0xb]) +
                      (double)pfVar3[3] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar5 + (double)fVar7 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar11 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar11 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar10) +
                      (double)pfVar4[0xe] * (double)pfVar3[7])));
    fVar6 = pfVar3[10];
    fVar9 = pfVar3[8];
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)fVar11 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar10 * (double)pfVar4[0xb]) +
                      (double)pfVar3[7] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar9 + (double)fVar8 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar6) +
                      (double)pfVar4[0xc] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar9 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar6) +
                      (double)pfVar4[0xd] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar9 + (double)pfVar4[6] * (double)fVar5) +
                       (double)pfVar4[10] * (double)fVar6) +
                      (double)pfVar4[0xe] * (double)pfVar3[0xb])));
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xd];
    fVar12 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar6 * (double)pfVar4[0xb]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar5 + (double)fVar8 * (double)fVar11) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)fVar12)));
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar11) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)fVar12)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar5 + (double)pfVar4[6] * (double)fVar11) +
                      (double)pfVar4[10] * (double)fVar10) + (double)pfVar4[0xe] * (double)fVar12)));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar3[0xd] * (double)pfVar4[7] + (double)pfVar4[3] * (double)fVar5)
                      + (double)pfVar4[0xb] * (double)fVar10) + (double)fVar12 * (double)pfVar4[0xf]
                     )));
    pfVar3 = ((float *)GEN_TOP(F_00c985b0(((undefined1 *)(gen_frame + 0x9c)),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x80)))))));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar8 = pfVar3[3];
    (*(float *)(gen_frame + 0xdc)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[7];
    fVar10 = pfVar3[6];
    fVar11 = pfVar3[4];
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar6 = pfVar3[0xb];
    fVar7 = pfVar3[10];
    fVar8 = pfVar3[8];
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x260)))));
    fVar9 = pfVar3[0xf];
    fVar10 = pfVar3[0xe];
    fVar11 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar3[0xd];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x228)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x248))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x258)))));
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x23c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x22c))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar10 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1e8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xdc)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b8)) + (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1a8))) +
                    (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x1ac)) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)(*(float *)(gen_frame + 0x1ec))) +
                    (double)(*(float *)(gen_frame + 0x1cc)) * (double)(*(float *)(gen_frame + 0x1f0))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x1f8)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x240)) = fVar10;
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                    (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x208)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x248)) = fVar11;
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a8)) * (double)(*(float *)(gen_frame + 0x218)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b8))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c8))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d8)))));
    (*(float *)(gen_frame + 0x258)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x170)) * (double)fVar11) + (double)fVar14 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1e8)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar6) +
                     (double)fVar12 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)fVar10 * (double)(*(float *)(gen_frame + 0x16c)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar7) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x170))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x174)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x178)) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x1f8)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1fc)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x17c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x178)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x180)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x200)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar14)));
    (*(float *)(gen_frame + 0x208)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x20c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x18c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x190)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x194)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x210)) = fVar25;
    *((float *)GEN_TOP(((int)this + 0xa4))) = fVar17;
    *((float *)GEN_TOP(((int)this + 0xa8))) = fVar18;
    *((float *)GEN_TOP(((int)this + 0xac))) = fVar19;
    *((float *)GEN_TOP(((int)this + 0xb0))) = fVar20;
    *((float *)GEN_TOP(((int)this + 0xb4))) = fVar21;
    *((float *)GEN_TOP(((int)this + 0xb8))) = fVar22;
    *((float *)GEN_TOP(((int)this + 0xbc))) = fVar23;
    *((float *)GEN_TOP(((int)this + 0xc0))) = fVar24;
    *((float *)GEN_TOP(((int)this + 0xc4))) = fVar25;
    *((float *)GEN_TOP(((int)this + 200))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar5) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar11) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14)));
    *((float *)GEN_TOP(((int)this + 0xcc))) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar15)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x19c)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar7) +
                    (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar16)));
    *((float *)GEN_TOP(((int)this + 0xd0))) = fVar5;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x128)) = *((undefined4 *)GEN_TOP(((int)this + 0xa4)));
    (*(undefined4 *)(gen_frame + 0x12c)) = *((undefined4 *)GEN_TOP(((int)this + 0xa8)));
    (*(undefined4 *)(gen_frame + 0x130)) = *((undefined4 *)GEN_TOP(((int)this + 0xac)));
    (*(undefined4 *)(gen_frame + 0x138)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x134)) = 0;
    (*(undefined4 *)(gen_frame + 0x13c)) = *((undefined4 *)GEN_TOP(((int)this + 0xb4)));
    (*(undefined4 *)(gen_frame + 0x144)) = 0;
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *((undefined4 *)GEN_TOP(((int)this + 0xb8)));
    (*(undefined4 *)(gen_frame + 0x158)) = *((undefined4 *)GEN_TOP(((int)this + 200)));
    (*(undefined4 *)(gen_frame + 0x148)) = *((undefined4 *)GEN_TOP(((int)this + 0xbc)));
    (*(undefined4 *)(gen_frame + 0x15c)) = *((undefined4 *)GEN_TOP(((int)this + 0xcc)));
    (*(undefined4 *)(gen_frame + 0x14c)) = *((undefined4 *)GEN_TOP(((int)this + 0xc0)));
    (*(float *)(gen_frame + 0x160)) = fVar5;
    (*(undefined4 *)(gen_frame + 0x150)) = *((undefined4 *)GEN_TOP(((int)this + 0xc4)));
    (*(undefined4 *)(gen_frame + 0x164)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x128)) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = (*(undefined4 *)(gen_frame + 0x128));
    *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = (*(undefined4 *)(gen_frame + 0x12c));
    *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = (*(undefined4 *)(gen_frame + 0x130));
    *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = (*(undefined4 *)(gen_frame + 0x138));
    *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = (*(undefined4 *)(gen_frame + 0x13c));
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = (*(undefined4 *)(gen_frame + 0x140));
    *((undefined4 *)GEN_TOP(((int)this + 0xec))) = (*(undefined4 *)(gen_frame + 0x148));
    *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = (*(undefined4 *)(gen_frame + 0x14c));
    *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = (*(undefined4 *)(gen_frame + 0x150));
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = (*(undefined4 *)(gen_frame + 0x158));
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = (*(undefined4 *)(gen_frame + 0x15c));
    *((float *)GEN_TOP(((int)this + 0x100))) = (*(float *)(gen_frame + 0x160));
    F_00ca11f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,this);
    return 1;
  }
  return 0;
}

/* ref: FUN_00cae8e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cae8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcae8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x70)) = this;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_FWD,((byte *)(gen_frame + 0x0)));
  if ((*(uint *)&REFG(undefined, 0x15d76ec) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76ec) = *(uint *)&REFG(undefined, 0x15d76ec) | 1;
    REFG(float, 0x15d76bc) = REFG(float, 0x1090708);
    REFG(float, 0x15d76c0) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76c4) = 0.0;
    REFG(float, 0x15d76c8) = REFG(float, 0x1090708);
    REFG(float, 0x15d76cc) = REFG(float, 0x1090708);
    REFG(float, 0x15d76d0) = 0.0;
    REFG(float, 0x15d76d4) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76d8) = REFG(float, 0x1090708);
    REFG(float, 0x15d76dc) = 0.0;
    REFG(float, 0x15d76e0) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76e4) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76e8) = 0.0;
  }
  (*(float *)(gen_frame + 0x74)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x78)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76c0) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76bc)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76c4)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76c0) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76bc)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76c4)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76c0) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76bc)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76c4)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76cc) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76c8)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76d0)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76cc) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76c8)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76d0)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76cc) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76c8)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76d0)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76d8) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76d4)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76dc)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76d8) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76d4)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76dc)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76d8) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76d4)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76dc)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16))))) * (double)REFG(float, 0x15d76e4) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0))))) * (double)REFG(float, 0x15d76e0)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 32))))) * (double)REFG(float, 0x15d76e8)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48))))))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20))))) * (double)REFG(float, 0x15d76e4) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4))))) * (double)REFG(float, 0x15d76e0)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36))))) * (double)REFG(float, 0x15d76e8)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 52))))))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF((((((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))))) * (double)REFG(float, 0x15d76e4) +
                      ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))))) * (double)REFG(float, 0x15d76e0)) +
                     ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40))))) * (double)REFG(float, 0x15d76e8)) +
                    ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 56))))))));
  bVar1 = F_00550990(param_3,(uint)param_4,(uint)&(*(float *)(gen_frame + 0x64)),(uint)&(*(float *)(gen_frame + 0x4c)),(uint)&(*(float *)(gen_frame + 0x58)),
                       &(*(float *)(gen_frame + 0x78)));
  if ((((bVar1 != 0) &&
       ((!GEN_ISNAN((*(float *)(gen_frame + 0x78))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x78)) < *(float *)&REFG(undefined, 0x1088114))))
      && ((double)(*(float *)(gen_frame + 0x78)) < REFG(double, 0x10909a0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x64)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x58))),
     (char)uVar2 != '\0')) {
    (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x78));
    param_2[3] = (*(float *)(gen_frame + 0x64));
    param_2[4] = (*(float *)(gen_frame + 0x68));
    param_2[5] = (*(float *)(gen_frame + 0x6c));
    param_2[6] = (*(float *)(gen_frame + 0x4c));
    param_2[7] = (*(float *)(gen_frame + 0x50));
    param_2[8] = (*(float *)(gen_frame + 0x54));
    param_2[9] = (*(float *)(gen_frame + 0x58));
    param_2[10] = (*(float *)(gen_frame + 0x5c));
    param_2[0xb] = (*(float *)(gen_frame + 0x60));
  }
  (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x74));
  bVar1 = F_00550990(param_3,(uint)param_4,(uint)&(*(float *)(gen_frame + 0x64)),(uint)&(*(float *)(gen_frame + 0x58)),(uint)&(*(float *)(gen_frame + 0x40)),
                       &(*(float *)(gen_frame + 0x78)));
  fVar3 = (*(float *)(gen_frame + 0x74));
  if (((bVar1 != 0) &&
      ((!GEN_ISNAN((*(float *)(gen_frame + 0x78))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x78)) < *(float *)&REFG(undefined, 0x1088114)))) &&
     (((*(float *)(gen_frame + 0x78)) < (*(float *)(gen_frame + 0x74)) &&
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))))((*(int * PTR32 *)(gen_frame + 0x70)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x64)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x40))), fVar3 = (*(float *)(gen_frame + 0x74))
      , (char)uVar2 != '\0')))) {
    param_2[3] = (*(float *)(gen_frame + 0x64));
    param_2[4] = (*(float *)(gen_frame + 0x68));
    param_2[5] = (*(float *)(gen_frame + 0x6c));
    param_2[6] = (*(float *)(gen_frame + 0x58));
    param_2[7] = (*(float *)(gen_frame + 0x5c));
    param_2[8] = (*(float *)(gen_frame + 0x60));
    param_2[9] = (*(float *)(gen_frame + 0x40));
    param_2[10] = (*(float *)(gen_frame + 0x44));
    param_2[0xb] = (*(float *)(gen_frame + 0x48));
    fVar3 = (*(float *)(gen_frame + 0x78));
  }
  if (!((double)fVar3 < REFG(double, 0x10909a0))) {
    return 0;
  }
  *param_2 = *param_4 * fVar3;
  param_2[1] = param_4[1] * fVar3;
  param_2[2] = param_4[2] * fVar3;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = fVar3;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG));
  param_2[0xf] = fVar3;
  return 1;
}

/* ref: FUN_00caf050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcaf050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00caf080 */
GEN_LIB GEN_NOFRAME undefined1 F_00caf080(void)
{
  GEN_ENTER(0xcaf080u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00caf090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcaf090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD,param_1,param_3,param_4);
    return uVar1;
  }
  return param_2 & 0xffffff00;
}

/* ref: FUN_00caf0d0 */
GEN_LIB GEN_NOFRAME undefined1 F_00caf0d0(void)
{
  GEN_ENTER(0xcaf0d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00caf0f0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00caf0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcaf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: FUN_00caf100 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00caf100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcaf100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00caf110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcaf110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x24)));
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x1c)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  iVar2 = *param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28)) +
                                          (double)(*(float *)(gen_frame + 0x2c)) * (double)(*(float *)(gen_frame + 0x2c))) + 0.0)))))) * REFG(double, 0x1088108))))
  ;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x1c))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x0)));
  if ((char)uVar3 == '\0') {
    iVar2 = *param_1;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x18))))(param_1,this,&(*(undefined4 *)(gen_frame + 0x1c)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x28)),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00caf230 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00caf230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcaf230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x8c, 4, 4);
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x64)) = this;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x3c))))(param_1 GEN_EDX_FWD,&(*(float *)(gen_frame + 0xc)));
  if ((*(uint *)&REFG(undefined, 0x15d7720) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7720) = *(uint *)&REFG(undefined, 0x15d7720) | 1;
    REFG(float, 0x15d76f0) = REFG(float, 0x1090708);
    REFG(float, 0x15d76f4) = REFG(float, 0x1087f04);
    REFG(float, 0x15d76f8) = 0.0;
    REFG(float, 0x15d76fc) = REFG(float, 0x1090708);
    REFG(float, 0x15d7700) = REFG(float, 0x1090708);
    REFG(float, 0x15d7704) = 0.0;
    REFG(float, 0x15d7708) = REFG(float, 0x1087f04);
    REFG(float, 0x15d770c) = REFG(float, 0x1090708);
    REFG(float, 0x15d7710) = 0.0;
    REFG(float, 0x15d7714) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7718) = REFG(float, 0x1087f04);
    REFG(float, 0x15d771c) = 0.0;
  }
  (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1090998);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1c)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0xc)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x2c)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x3c)))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x44)))));
  bVar1 = F_00553ba0((uint)param_3,param_4,(uint)&(*(float *)(gen_frame + 0x68)),(uint)&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x74)),&(*(undefined4 *)(gen_frame + 0x0)),
                       &(*(float *)(gen_frame + 0x84)));
  if ((((bVar1 != 0) &&
       ((!GEN_ISNAN((*(float *)(gen_frame + 0x84))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x84)) < *(float *)&REFG(undefined, 0x1088114))))
      && ((double)(*(float *)(gen_frame + 0x84)) < REFG(double, 0x10909a0))) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x64)) + 4))))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x74))),
     (char)uVar2 != '\0')) {
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x84));
    param_2[3] = (*(float *)(gen_frame + 0x68));
    param_2[4] = (*(float *)(gen_frame + 0x6c));
    param_2[5] = (*(float *)(gen_frame + 0x70));
    param_2[6] = (*(float *)(gen_frame + 0x58));
    param_2[7] = (*(float *)(gen_frame + 0x5c));
    param_2[8] = (*(float *)(gen_frame + 0x60));
    param_2[9] = (*(float *)(gen_frame + 0x74));
    param_2[10] = (*(float *)(gen_frame + 0x78));
    param_2[0xb] = (*(float *)(gen_frame + 0x7c));
  }
  (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x80));
  bVar1 = F_00553ba0((uint)param_3,param_4,(uint)&(*(float *)(gen_frame + 0x68)),(uint)&(*(float *)(gen_frame + 0x74)),&(*(float *)(gen_frame + 0x4c)),&(*(undefined4 *)(gen_frame + 0x0)),
                       &(*(float *)(gen_frame + 0x84)));
  fVar3 = (*(float *)(gen_frame + 0x80));
  if (((bVar1 != 0) &&
      ((!GEN_ISNAN((*(float *)(gen_frame + 0x84))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x84)) < *(float *)&REFG(undefined, 0x1088114)))) &&
     (((*(float *)(gen_frame + 0x84)) < (*(float *)(gen_frame + 0x80)) &&
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x64)) + 4))))((*(int * PTR32 *)(gen_frame + 0x64)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x74)),&(*(float *)(gen_frame + 0x4c))), fVar3 = (*(float *)(gen_frame + 0x80))
      , (char)uVar2 != '\0')))) {
    param_2[3] = (*(float *)(gen_frame + 0x68));
    param_2[4] = (*(float *)(gen_frame + 0x6c));
    param_2[5] = (*(float *)(gen_frame + 0x70));
    param_2[6] = (*(float *)(gen_frame + 0x74));
    param_2[7] = (*(float *)(gen_frame + 0x78));
    param_2[8] = (*(float *)(gen_frame + 0x7c));
    param_2[9] = (*(float *)(gen_frame + 0x4c));
    param_2[10] = (*(float *)(gen_frame + 0x50));
    param_2[0xb] = (*(float *)(gen_frame + 0x54));
    fVar3 = (*(float *)(gen_frame + 0x84));
  }
  if (!((double)fVar3 < REFG(double, 0x10909a0))) {
    return 0;
  }
  *param_2 = *param_4 * fVar3;
  param_2[1] = param_4[1] * fVar3;
  param_2[2] = param_4[2] * fVar3;
  *param_2 = *param_2 + *param_3;
  param_2[1] = param_3[1] + param_2[1];
  param_2[2] = param_3[2] + param_2[2];
  param_2[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)(param_1)));
  param_2[0x10] = fVar3;
  fVar3 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG));
  param_2[0xf] = fVar3;
  return 1;
}

/* ref: FUN_00caf9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caf9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcaf9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00cafba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295c4));
  bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00cafbd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafbd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcafbd0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x44))) & param_3) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295cc));
    (*(float *)(gen_frame + 0x4)) = param_4;
    bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_5,param_6);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_3 & 0xffffff00;
}

/* ref: FUN_00cafc20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00cafdf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295d4));
  bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00cafe20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cafe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcafe20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  
  if ((param_2 != 0) && ((*((uint *)GEN_TOP(((int)this + 0x44))) & param_2) == 0)) {
    return param_2 & 0xffffff00;
  }
  uVar4 = *param_3;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    goto switchD_00cafe4d_caseD_0;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
switchD_00cafe4d_caseD_0: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x74))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]);
    return uVar4;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
  case 1: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG,param_1,param_3[1],param_3[2]);
    return uVar4;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    uVar4 = uVar4 & *((uint *)GEN_TOP(param_3[5]));
    if (uVar4 != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
  case 2: ;
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    uVar4 = param_3[4];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295dc));
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    bVar3 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this,param_1,uVar2,uVar1);
    return CONCAT31(extraout_var,bVar3);
  case 7: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_ARG);
    if ((*((uint *)GEN_TOP(param_3[5])) & uVar4) != (((uint *)GEN_TOP(param_3[5])))[1]) goto switchD_00cafe4d_default;
  case 3: ;
    uVar1 = param_3[2];
    uVar2 = param_3[1];
    uVar4 = param_3[4];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295dc));
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    bVar3 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,this,param_1,uVar2,uVar1);
    return CONCAT31(extraout_var_00,bVar3);
  default: ;
switchD_00cafe4d_default: ;
    return uVar4 & 0xffffff00;
  }
}

/* ref: FUN_00caff70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00caff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcaff70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  fVar5 = *param_2 - *param_1;
  fVar1 = param_2[1] - param_1[1];
  fVar9 = param_2[2] - param_1[2];
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  dVar6 = (double)(float)((double)fVar4 * (double)fVar1 - (double)fVar9 * (double)fVar3);
  fVar9 = (float)((double)fVar9 * (double)fVar2 - (double)fVar4 * (double)fVar5);
  dVar7 = (double)fVar9;
  dVar8 = (double)(float)((double)fVar3 * (double)fVar5 - (double)fVar2 * (double)fVar1);
  fVar5 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar7 * dVar7 + dVar6 * dVar6) + dVar8 * dVar8)))))))));
  if (0.0 < fVar5) {
    fVar5 = fVar5 * fVar9;
  }
  else {
    fVar5 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0;
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  return (uint)((!GEN_ISNAN(*((float *)GEN_TOP(((int)this + 4)))) && !GEN_ISNAN(fVar5)) &&
               !(*((float *)GEN_TOP(((int)this + 4))) < fVar5));
}

/* ref: FUN_00cb0140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0140(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xcb0140u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*((uint *)GEN_TOP((param_1 + 0x44))) & param_3) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x11295e4));
    (*(float *)(gen_frame + 0x4)) = param_4;
    bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,param_2,param_5,param_6);
    return CONCAT31(extraout_var,bVar1);
  }
  return param_3 & 0xffffff00;
}

/* ref: FUN_00cb0190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb0190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  F_00c96ab0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x11295f8));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[1])REFP(0x11295f4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = (*(undefined * PTR32 (*)[1])REFP(0x11295f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x11295ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 1;
  return (uint)this;
}

/* ref: FUN_00cb0370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0370(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb03b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb03b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb03b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb0400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb0440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0440(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb0470 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb04a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb04a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb04a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cb04d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb04d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb04d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x80))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cb0500 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0500(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = param_2[2];
  *((undefined1 *)GEN_TOP((in_ecx + 0x104))) = 1;
  return (uint)param_2;
}

/* ref: FUN_00cb0530 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb0530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xd8)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xdc)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0xd4)));
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xe0)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xe4)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xe8)));
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xec)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0xf0)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0xf4)));
  param_2[0xb] = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xfc)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x100)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0xf8)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cb0600 */
GEN_LIB GEN_NOFRAME uint F_00cb0600(void)
{
  GEN_ENTER(0xcb0600u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_00cb0610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb0610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00cb0650 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb0680((int)this - 0x10 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb0660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb0680((int)this - 0x14 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb0670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb0680((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb0680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0680(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[30])REFP(0x11295f8));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x11295f4));
  param_1[4] = (*(undefined * PTR32 (*)[1])REFP(0x11295f0));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x11295ec));
  F_00c96c00(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb06f0 */
GEN_LIB GEN_FRAME uint F_00cb06f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb06f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0710 */
GEN_LIB GEN_FRAME uint F_00cb0710(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0740 */
GEN_LIB GEN_FRAME float10 F_00cb0740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((ushort)param_1 == 0) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f(((param_1 & 0x8000) * 8 | param_1 & 0x3ff) << 0xd |
                             (((ushort)param_1 >> 10 & 0x1f) + 0x70) * 0x800000)));
}

/* ref: FUN_00cb0790 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb0790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + 4 + param_2 * 6)));
}

/* ref: FUN_00cb07c0 */
GEN_LIB GEN_FRAME uint F_00cb07c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb07c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x134c214) = param_1;
  return param_1;
}

/* ref: FUN_00cb07d0 */
GEN_LIB GEN_FRAME uint F_00cb07d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb07d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 + param_2 * 0xc,0);
  return uVar1;
}

/* ref: FUN_00cb0800 */
GEN_LIB GEN_FRAME uint F_00cb0800(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcb0800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cb52f0(param_1 + param_3 * 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00cb0820 */
GEN_LIB GEN_FRAME uint F_00cb0820(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0840 */
GEN_LIB GEN_FRAME uint F_00cb0840(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0860 */
GEN_LIB GEN_FRAME uint F_00cb0860(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb0890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (((int)this + 0x18U <= param_1) &&
     (param_1 < (int)this + 0x18U + *((int *)GEN_TOP(((int)this + 0xc))) * 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb08d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb08d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb08d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x14))) = param_1;
  return (uint)param_1;
}

/* ref: FUN_00cb0910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc,param_1);
  return uVar1 + *((int *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00cb0930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc,param_1);
  return uVar1 + *((int *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00cb0950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc,param_1);
  puVar3 = ((uint *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 4))))));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0x60))))
                    (*((int *)GEN_TOP(((int)this + 8))) + 0xc);
  uVar1 = *puVar3;
  if (uVar2 < 3) {
    return uVar1 + 4;
  }
  return (uVar1 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_00cb09a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb09a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb09a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb5870(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00cb09f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb09f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb09f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return ~*((uint *)GEN_TOP((in_ecx + 4))) & 1;
}

/* ref: FUN_00cb0a50 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb0a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb0b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb0ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb0ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb0bb0 */
GEN_LIB GEN_FRAME uint F_00cb0bb0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0be0 */
GEN_LIB GEN_FRAME uint F_00cb0be0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0c10 */
GEN_LIB GEN_FRAME uint F_00cb0c10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c30 */
GEN_LIB GEN_FRAME uint F_00cb0c30(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb0c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb0c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb0c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  short sVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),~*((byte *)GEN_TOP(((int)this + 4))));
  if ((~*((byte *)GEN_TOP(((int)this + 4))) & 1) != 0) {
    iVar5 = 0;
    if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *((int *)GEN_TOP(((int)this + 8)));
        sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0x24))) + iVar4)));
        if (sVar1 == 0) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + 0x60))))(iVar3 + 0xc);
          if (uVar2 < 3) {
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0xc))) + 0xc))))
                              (*((int *)GEN_TOP(((int)this + 8))) + 0xc,iVar5);
            F_00cb5490(((undefined *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4)))))) GEN_EDX_ARG);
          }
        }
        else if (sVar1 == 0xc) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar3 + 0xc))) + 0xc))))(iVar3 + 0xc,iVar5);
          iVar3 = uVar2 + *((int *)GEN_TOP(((int)this + 4)));
          if (iVar3 != 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar3);
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar5 < (int)(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))));
    }
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 4))));
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cb0d10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb0d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(char * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcb0d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a3;)
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  char * pcVar8;
  float fVar9;
  ushort * puVar10;
  float * this_00;
  float10 fVar11;
  int local_8;
  
  puVar10 = ((ushort *)GEN_TOP((param_1 + param_2 * 2)));
  F_00cb0c50(this GEN_EDX_FWD);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                    (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x2c))),0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
  param_1 = 0;
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24)));
      this_00 = ((float *)GEN_TOP(((int)*((short *)GEN_TOP((local_8 + 4 + iVar5))) + *((int *)GEN_TOP(((int)this + 4))))));
      switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((local_8 + iVar5))))) {
      case 0: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        pcVar8 = param_3;
        for (uVar7 = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8); uVar7 != 0; uVar7 = uVar7 - 1) {
          cVar3 = *pcVar8;
          while (cVar3 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar3 = *pcVar8;
          }
          pcVar8 = pcVar8 + 1;
        }
        F_00cb5870(this_00 GEN_EDX_ARG,pcVar8);
        break;
      case 1: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = ((ushort *)GEN_TOP(((int)puVar10 + 1)));
        break;
      case 2: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = ((ushort *)GEN_TOP(((int)puVar10 + 1)));
        break;
      case 3: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = ((ushort *)GEN_TOP(((int)puVar10 + 1)));
        break;
      case 4: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*((undefined1 *)GEN_TOP(((int)puVar10 + 1))));
        puVar10 = puVar10 + 1;
        break;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*((undefined1 *)GEN_TOP(((int)puVar10 + 1))));
        puVar10 = puVar10 + 1;
        break;
      case 6: ;
      case 9: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *((undefined1 *)GEN_TOP(((int)puVar10 + 1)))),
                                                (char)puVar10[1]),*((undefined1 *)GEN_TOP(((int)puVar10 + 3))))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 7: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *((undefined1 *)GEN_TOP(((int)puVar10 + 1)))),
                                                (char)puVar10[1]),*((undefined1 *)GEN_TOP(((int)puVar10 + 3))))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 8: ;
        fVar11 = F_00cb0740((uint)(ushort)(*puVar10 >> 8 | *puVar10 << 8));
        *this_00 = (float)fVar11;
        puVar10 = puVar10 + 1;
        break;
      case 10: ;
      case 0xb: ;
        uVar4 = *puVar10;
        uVar1 = *((undefined1 *)GEN_TOP(((int)puVar10 + 1)));
        uVar6 = puVar10[1];
        uVar2 = *((undefined1 *)GEN_TOP(((int)puVar10 + 3)));
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)puVar10[2],
                                                         *((undefined1 *)GEN_TOP(((int)puVar10 + 5)))),
                                                (char)puVar10[3]),*((undefined1 *)GEN_TOP(((int)puVar10 + 7))))
                             );
        this_00[1] = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)uVar4,uVar1),(char)uVar6),uVar2));
        puVar10 = puVar10 + 4;
        break;
      case 0xc: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        fVar9 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                     (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(uint)(ushort)(uVar4 << 8 | uVar4 >> 8),0));
        *this_00 = fVar9;
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 6;
    } while (param_1 < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb0f70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb0f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(short * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcb0f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(short * param_4 = (short *)(uintptr_t)gen_a4;)
  int iVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  short * psVar6;
  char * pcVar7;
  uint uVar8;
  char * pcVar9;
  undefined1 * puVar10;
  char * pcVar11;
  int iVar12;
  uint * this_00;
  uint local_c;
  int local_8;
  
  iVar1 = param_1 + (int)((int)(uintptr_t)param_2) * 2;
  F_00cb0c50(this GEN_EDX_FWD);
  param_2 = ((char *)GEN_TOP(((int)param_4 + (int)param_2 * -2)));
  pcVar11 = param_2;
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
    param_4 = *((short * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24)));
    psVar6 = param_4 + 2;
    local_c = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78)));
    do {
      puVar10 = ((undefined1 *)GEN_TOP((iVar1 + *psVar6)));
      if (*param_4 == 0) {
        pcVar7 = puVar10 + param_3 + ((int)CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),
                                                             puVar10[2]),puVar10[3]) - (int)*psVar6)
        ;
        pcVar9 = pcVar7 + 1;
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        pcVar11 = pcVar7 + (int)(pcVar11 + (1 - (int)pcVar9));
      }
      param_4 = param_4 + 3;
      psVar6 = psVar6 + 3;
      local_c = local_c - 1;
    } while (local_c != 0);
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,pcVar11,0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar8;
  F_00c46aa0(uVar8,iVar1,pcVar11);
  local_c = 0;
  if (*((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x24)));
      iVar12 = (int)*((short *)GEN_TOP((local_8 + 4 + iVar4)));
      this_00 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar12)));
      switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP((local_8 + iVar4))))) {
      case 0: ;
        pcVar9 = ((char *)GEN_TOP(((int)CONCAT31(CONCAT21(CONCAT11((char)*this_00,
                                                          *((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                                 *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                                        *((undefined1 *)GEN_TOP(((int)this_00 + 3)))) + iVar1 + param_3)));
        pcVar11 = pcVar9;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        F_00c46aa0(param_2 + *((int *)GEN_TOP(((int)this + 4))),pcVar9,pcVar11 + (1 - (int)(pcVar9 + 1)));
        *this_00 = (int)param_2 - iVar12;
        F_00cb5570(this_00 GEN_EDX_ARG);
        param_2 = param_2 + (int)(pcVar11 + (1 - (int)(pcVar9 + 1)));
        break;
      case 4: ;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*this_00,*((undefined1 *)GEN_TOP(((int)this_00 + 1))));
        break;
      case 6: ;
      case 7: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                     *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                            *((undefined1 *)GEN_TOP(((int)this_00 + 3))));
        break;
      case 8: ;
        uVar3 = (ushort)*this_00;
        uVar5 = uVar3 >> 8 | uVar3 << 8;
        if (uVar5 == 0) {
          *this_00 = 0;
        }
        else {
          *this_00 = ((uVar5 & 0xffff8000) * 8 | uVar5 & 0x3ff) << 0xd |
                     (((uVar3 & 0xff) >> 2 & 0x1f) + 0x70) * 0x800000;
        }
        break;
      case 9: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                     *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                            *((undefined1 *)GEN_TOP(((int)this_00 + 3))));
        break;
      case 10: ;
      case 0xb: ;
        uVar8 = *this_00;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)this_00[1],*((undefined1 *)GEN_TOP(((int)this_00 + 5)))),
                                     *((undefined1 *)GEN_TOP(((int)this_00 + 6)))),
                            *((undefined1 *)GEN_TOP(((int)this_00 + 7))));
        this_00[1] = CONCAT31(CONCAT21(CONCAT11((char)uVar8,*((undefined1 *)GEN_TOP(((int)this_00 + 1)))),
                                       *((undefined1 *)GEN_TOP(((int)this_00 + 2)))),
                              *((undefined1 *)GEN_TOP(((int)this_00 + 3))));
      }
      local_c = local_c + 1;
      local_8 = local_8 + 6;
    } while (local_c < *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb1240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *((int *)GEN_TOP(((int)this + 8))) = param_3;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0xc))) + 0x60))))(((int *)GEN_TOP((param_3 + 0xc))) GEN_EDX_FWD);
  if (uVar1 < 3) {
    F_00cb0d10(this GEN_EDX_ARG,param_1,param_2,param_4);
    return (uint)this;
  }
  F_00cb0f70(this GEN_EDX_ARG,param_1,param_2,(param_4 + param_2 * -2) - param_1,param_5);
  return (uint)this;
}

/* ref: FUN_00cb12c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb12c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb12c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb12d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb12d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb12d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb12f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb12f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb12f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb1330 */
GEN_LIB GEN_FRAME unsigned int F_00cb1330(GEN_P(undefined * PTR32 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;)
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != ((undefined * PTR32 *)GEN_TOP(0x0))) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((GEN_TCODE *)*(gen_code32 *)*ppuVar1)(ppuVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00cb1390 */
GEN_LIB GEN_FRAME unsigned int F_00cb1390(GEN_P(undefined * PTR32 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;)
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != ((undefined * PTR32 *)GEN_TOP(0x0))) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((GEN_TCODE *)*(gen_code32 *)*ppuVar1)(ppuVar1 GEN_EDX_ARG,1);
    }
  }
  return;
}

/* ref: FUN_00cb13f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb13f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb13f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  F_00cb0c50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00cb1330(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb1480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cb14b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb14b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb14b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb15d0 */
GEN_LIB GEN_NOFRAME uint F_00cb15d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb15d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppuVar3;
  uint uVar4;
  int * piVar5;
  
  ppuVar3 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    do {
      if (ppuVar3[4] != ((undefined *)GEN_TOP(0x0))) {
        puVar2 = (undefined4 *)ppuVar3[5];
        ppuVar3[4] = ppuVar3[4] - 1;
        ppuVar3[5] = ((undefined *)GEN_TOP(*puVar2));
        return (uint)puVar2;
      }
      ppuVar3 = (undefined * PTR32 *)ppuVar3[2];
    } while (ppuVar3 != &REFG(undefined * PTR32, 0x134c224));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(REFG(int, 0x134c214) * 3 + 6) * 4,0)))
  ;
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1129678));
    puVar2[3] = REFG(int, 0x134c214);
    uVar4 = 0;
    puVar2[4] = REFG(int, 0x134c214);
    piVar5 = puVar2 + 6;
    if (puVar2[3] != 0) {
      do {
        *piVar5 = (int)(piVar5 + 3);
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 3;
      } while (uVar4 < (uint)puVar2[3]);
    }
    puVar2[uVar4 * 3 + 3] = 0;
    puVar2[5] = puVar2 + 6;
  }
  puVar2[1] = &REFG(undefined * PTR32, 0x134c218);
  puVar2[2] = REFG(undefined * PTR32, 0x134c220);
  if (REFG(undefined * PTR32, 0x134c220) != ((undefined *)GEN_TOP(0x0))) {
    *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar2;
  }
  REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
  puVar1 = ((undefined4 *)GEN_TOP(puVar2[5]));
  REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar2;
  puVar2[4] = puVar2[4] - 1;
  puVar2[5] = *puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00cb16c0 */
GEN_LIB GEN_FRAME uint F_00cb16c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb16c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined * PTR32 * ppuVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  while( true ) {
    if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
      puVar4 = ((undefined4 *)GEN_TOP(F_00cb52f0((REFG(int, 0x134c214) * 3 + 6) * 4,param_2)));
      if (puVar4 == ((undefined4 *)GEN_TOP(0x0))) {
        puVar4 = ((undefined4 *)GEN_TOP(0x0));
      }
      else {
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x1129678));
        iVar3 = REFG(int, 0x134c214);
        puVar4[3] = REFG(int, 0x134c214);
        puVar4[4] = REFG(int, 0x134c214);
        uVar5 = 0;
        piVar6 = puVar4 + 6;
        if (iVar3 != 0) {
          do {
            *piVar6 = (int)(piVar6 + 3);
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 3;
          } while (uVar5 < (uint)puVar4[3]);
        }
        puVar4[uVar5 * 3 + 3] = 0;
        puVar4[5] = puVar4 + 6;
      }
      puVar4[1] = &REFG(undefined * PTR32, 0x134c218);
      puVar4[2] = REFG(undefined * PTR32, 0x134c220);
      if (REFG(undefined * PTR32, 0x134c220) != ((undefined *)GEN_TOP(0x0))) {
        *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar4;
      }
      REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
      puVar2 = ((undefined4 *)GEN_TOP(puVar4[5]));
      REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar4;
      puVar4[4] = puVar4[4] - 1;
      puVar4[5] = *puVar2;
      return (uint)puVar2;
    }
    if (ppuVar1[4] != ((undefined *)GEN_TOP(0x0))) break;
    ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
  }
  puVar4 = (undefined4 *)ppuVar1[5];
  ppuVar1[4] = ppuVar1[4] - 1;
  ppuVar1[5] = ((undefined *)GEN_TOP(*puVar4));
  return (uint)puVar4;
}

/* ref: FUN_00cb17a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb17a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb17a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb1800 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((int *)GEN_TOP(((int)this + 4))) != *((int *)GEN_TOP((param_1 + 4)));
}

/* ref: FUN_00cb1820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb1820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00cb1870 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb1870(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  return;
}

/* ref: FUN_00cb1880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1880(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb18b0 */
GEN_LIB GEN_FRAME uint F_00cb18b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb18b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  REFG(undefined4, 0x15d7724) = param_1;
  return param_1;
}

/* ref: FUN_00cb18c0 */
GEN_LIB GEN_FRAME uint F_00cb18c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb18c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb18e0 */
GEN_LIB GEN_FRAME uint F_00cb18e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb18e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb1960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00cb1980 */
GEN_LIB GEN_FRAME uint F_00cb1980(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb19d0 */
GEN_LIB GEN_FRAME uint F_00cb19d0(GEN_P(char param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb19d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  return (uint)(param_1 != '\0') | -(uint)(param_2 != '\0') & 2;
}

/* ref: FUN_00cb1a10 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb1a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x7e))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb1a30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb1a30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  return;
}

/* ref: FUN_00cb1a40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb1a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) + 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))
                    (REFG(int, 0x15d7724) + 4,param_1,(int)this + 4,param_5,param_3,param_4,param_2);
  return uVar1;
}

/* ref: FUN_00cb1a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcb1a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) - 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 8))))
                    (REFG(int, 0x15d7724) + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_00cb1ab0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cb1ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x3ec))) != 0;
}

/* ref: FUN_00cb1ac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb1ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x1c)));
}

/* ref: FUN_00cb1ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb1ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x3d8)));
}

/* ref: FUN_00cb1af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1af0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1b10(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00cb1b20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1b40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1b80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1ba0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1bd0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1bf0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1c20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1c40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1cb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1cd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1d30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1dd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1df0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1e00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1e10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1e40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1e50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e60 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1e60(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1e80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1e90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1eb0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb1eb0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb1f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb1f10 */
GEN_LIB GEN_FRAME uint F_00cb1f10(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb1f40 */
GEN_LIB GEN_FRAME uint F_00cb1f40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb1f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb1f90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb1f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00cb1fc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb1fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb1fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00cb1ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb1ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x106fd08));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  *(undefined4 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 1;
  F_00cb5730(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)this;
}

/* ref: FUN_00cb2050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*((int *)GEN_TOP(((int)this + 4))) == *((int *)GEN_TOP((param_1 + 4)))) &&
     (*((int *)GEN_TOP(((int)this + 0xc))) == *((int *)GEN_TOP((param_1 + 0xc))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cb20a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb20a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb20a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return;
}

/* ref: FUN_00cb20d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb20d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xcb20d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  uint uVar1;
  
  if (param_1 != 0) {
    REFG(int, 0x15d7724) = param_1;
  }
  if (param_2 != 0) {
    F_00cb5730(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,param_2);
  }
  *((int *)GEN_TOP(((int)this + 0x3e4))) = param_3;
  *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) + 1;
  *((uint *)GEN_TOP(((int)this + 1000))) = ~-(uint)(param_3 != 0) & param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_4;
  *((undefined1 *)GEN_TOP(((int)this + 0x40c))) = 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))
                    (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)this + 0x10))),(int)this + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  return *((byte *)GEN_TOP(((int)this + 0x40c)));
}

/* ref: FUN_00cb2160 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cb2160(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcb2160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_3);
  F_00c472af(((char *)(gen_frame + 0x8)),0x100,((char *)REFP(0x11296d4)),param_2);
  *((int *)GEN_TOP((param_1 + 0x3ec))) = *((int *)GEN_TOP((param_1 + 0x3ec))) + 1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))
            (((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),param_1 + 4,
             -(uint)(param_4 != '\0') & 2 | (uint)(param_3 != '\0'),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: FUN_00cb2200 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb2200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3e0))) = 0;
  iVar1 = *param_1;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 8))),*((undefined1 *)GEN_TOP((iVar1 + 9)))),
                            *((undefined1 *)GEN_TOP((iVar1 + 10)))),*((undefined1 *)GEN_TOP((iVar1 + 0xb))));
  if (uVar5 != 0) {
    do {
      piVar3 = ((int *)GEN_TOP(F_00cb58d0(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),uVar4)));
      uVar2 = *((undefined4 *)GEN_TOP((*piVar3 + 4)));
      *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) + 1;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))(REFG(int, 0x15d7724) + 4,uVar2,(int)this + 4,0,0,0,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}

/* ref: FUN_00cb2290 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb2290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x140, 0, 4);
  short * psVar1;
  short sVar2;
  gen_size32 _Size;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  short * psVar6;
  int iVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_1;
  F_00cb5bc0(((undefined1 *)(gen_frame + 0x28)));
  iVar7 = 0;
  F_00cb5b90(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
  if ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (iVar7 < (*(int *)(gen_frame + 0x34)))) {
        iVar7 = (*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    } while ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c)));
  }
  _Size = (iVar7 + 1) * 4;
  pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,_Size,0)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3dc))) = pvVar4;
  F_00c48350(pvVar4,0,_Size);
  F_00cb5b90(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pvVar4 = param_1;
  if ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      bVar3 = 0;
      F_00cb5970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if (-1 < (*(int *)(gen_frame + 0x34))) {
        psVar6 = *((short * PTR32 *)GEN_TOP(((int)this + 0x410)));
        *((int *)GEN_TOP(((int)this + 0x3e0))) = *((int *)GEN_TOP(((int)this + 0x3dc))) + (*(int *)(gen_frame + 0x34)) * 4;
        if (psVar6 != ((short *)GEN_TOP(0x0))) {
          sVar2 = *psVar6;
          while (-1 < sVar2) {
            if (sVar2 == (*(int *)(gen_frame + 0x34))) {
              bVar3 = 1;
              break;
            }
            psVar1 = psVar6 + 1;
            psVar6 = psVar6 + 1;
            sVar2 = *psVar1;
          }
        }
      }
      *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) + 1;
      ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                (REFG(int * PTR32, 0x15d7724) + 1,((undefined1 *)(gen_frame + 0x38)),(int)this + 4,-(uint)bVar3 & 2 | 1,0,0,1);
      F_00cb5920(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c)));
  }
  uVar5 = F_00cb5b90(pvVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  if ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3dc))) + (*(int *)(gen_frame + 0x34)) * 4))) != 0)) {
        iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3dc))) + (*(int *)(gen_frame + 0x34)) * 4)));
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 - 0xc;
        }
        *((short *)GEN_TOP((iVar7 + 0x7e))) = (short)(*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      uVar5 = (*(uint *)(gen_frame + 0x10));
    } while ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c)));
  }
  return uVar5;
}

/* ref: FUN_00cb24c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb24c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb24c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb2520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2530 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb2540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb2570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb25a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb25a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb25a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb25e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb25e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb25e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb2620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb2640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb2680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb26a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb26a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb26a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = uVar1;
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb26d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb26d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb26d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = uVar1;
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb2700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x2c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  gen_args[0] = gen_a1;
  int iVar1;
  code * pcVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = (*(uint *)(gen_frame + 0x10));
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x106fd40));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x14)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = 1;
  (*(uint *)(gen_frame + 0x10)) = CONCAT13((char)((uint)uVar3 >> 0x18),0x10000);
  F_00cb5730(&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  uVar5 = (*(uint *)(gen_frame + 0x10)) >> 1 & 0x1f;
  iVar1 = *((int *)GEN_TOP(((int)this + uVar5 * 0x1c + 8)));
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 1;
  uVar6 = (*(uint *)(gen_frame + 0x10));
  while( true ) {
    (*(uint *)(gen_frame + 0x10)) = uVar6;
    if (iVar1 == (int)this + uVar5 * 0x1c + 0xc) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = (char)(uVar6 >> 0x10);
      (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
      if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) == '\0') && ((*(int *)(gen_frame + 0xc)) != 0)) {
        pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
        (*pcVar2)(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0xc)));
      }
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
      return 0;
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + 100)));
    uVar6 = (*pcVar2)(iVar1 + 0xc);
    bVar4 = F_00cb5430(&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar6);
    if (bVar4 != 0) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 8)));
    uVar6 = (*(uint *)(gen_frame + 0x10));
  }
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = iVar1 + 0xc;
  }
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) == '\0') && ((*(int *)(gen_frame + 0xc)) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  return uVar6;
}

/* ref: FUN_00cb2840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb2840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (uVar2 < 0x20) {
    piVar3 = ((int *)GEN_TOP((*(int *)this + 0x18 + uVar2 * 0x1c)));
    while (*piVar3 == 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 7;
      if (0x1f < uVar2) {
        return uVar2;
      }
    }
    *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
    iVar1 = *(int *)this + uVar2 * 0x1c;
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    uVar2 = *((uint *)GEN_TOP((iVar1 + 8)));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cb2890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  
  *(int *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (param_1 != 0) {
    F_00cb2840(this GEN_EDX_FWD);
    this = (((undefined *)GEN_TOP((uint)(this))));
  }
  return (uint)this;
}

/* ref: FUN_00cb28f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb28f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb28f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x410))) = param_1[5];
  bVar1 = F_00cb20d0(this GEN_EDX_FWD,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return bVar1;
}

/* ref: FUN_00cb2920 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb2920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (((*((char *)GEN_TOP(((int)this + 8))) == '\0') && (*((char *)GEN_TOP(((int)this + 0x18))) != '\0')) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD), (char)uVar2 == '\0')) {
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44))); piVar1 != ((int *)GEN_TOP(((int)this + 0x48)));
        piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  }
  return;
}

/* ref: FUN_00cb2960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb2700(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,param_1);
  if (uVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1,0,0);
    uVar1 = F_00cb2700(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb29a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb29a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb29a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  }
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  return 1;
}

/* ref: FUN_00cb29d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb29d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb29d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  }
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  return 1;
}

/* ref: FUN_00cb2a00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb2a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cb2a30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb2a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cb2ac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cb2af0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb2af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cb2b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb2b90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2bd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb2bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) = this;
  return (uint)this;
}

/* ref: FUN_00cb2c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((uVar1 + 8)));
  if (*((int *)GEN_TOP((uVar1 + 8))) != 0) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 8))) + 4))) = param_1;
  }
  *((int *)GEN_TOP((uVar1 + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return uVar1;
}

/* ref: FUN_00cb2c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((iVar2 + 8))) = uVar1;
  }
  if (*((int *)GEN_TOP((param_2 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cb2c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  iVar2 = param_1;
  while( true ) {
    if (uVar1 == (int)this + 0xcU) {
      return 0;
    }
    if (iVar2 == 0) break;
    iVar2 = iVar2 - 1;
    if (uVar1 != 0) {
      uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
    }
  }
  return uVar1;
}

/* ref: FUN_00cb2cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cb2cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb2cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((iVar2 + 8))) = uVar1;
  }
  if (*((int *)GEN_TOP((param_2 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cb2d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb2d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    }
    if (*((int *)GEN_TOP((iVar1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2d60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb2d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2da0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2de0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2e20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2e20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb2e60 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb2e60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb2e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb2e80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb2e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb2e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cb2ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *param_1 = this;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00cb2840(param_1 GEN_EDX_FWD);
    puVar1 = (((undefined4 *)GEN_TOP((uint)(param_1))));
  }
  return (uint)puVar1;
}

/* ref: FUN_00cb2f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 100))))(param_1 + 0xc);
  uVar3 = *((ushort *)GEN_TOP((uVar3 + 4))) >> 1 & 0x1f;
  iVar2 = *((int *)GEN_TOP(((int)this + uVar3 * 0x1c + 0x10)));
  *((int *)GEN_TOP((param_1 + 4))) = iVar2;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP((iVar2 + 8)));
  if (*((int *)GEN_TOP((iVar2 + 8))) != 0) {
    *((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 8))) + 4))) = param_1;
  }
  *((int *)GEN_TOP((iVar2 + 8))) = param_1;
  piVar1 = ((int *)GEN_TOP(((int)this + uVar3 * 0x1c + 0x18)));
  *piVar1 = *piVar1 + 1;
  *((int *)GEN_TOP(((int)this + 0x380))) = *((int *)GEN_TOP(((int)this + 0x380))) + 1;
  return 1;
}

/* ref: FUN_00cb2f60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 100))))(param_1 + 0xc);
  uVar2 = *((ushort *)GEN_TOP((uVar3 + 4)));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  }
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (uVar2 >> 1 & 0x1f) * 0x1c + 0x18)));
  *piVar1 = *piVar1 - 1;
  *((int *)GEN_TOP(((int)this + 0x380))) = *((int *)GEN_TOP(((int)this + 0x380))) - 1;
  return 0xffffffff;
}

/* ref: FUN_00cb2fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb2fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb2fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = ((uint *)GEN_TOP(((int)this + 0x18)));
  uVar3 = param_1;
  while (*puVar4 <= uVar3) {
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - *puVar4;
    puVar4 = puVar4 + 7;
    if (0x1f < uVar2) {
      return 0;
    }
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + uVar2 * 0x1c + 8)));
  while( true ) {
    if (uVar1 == (int)this + uVar2 * 0x1c + 0xc) {
      return 0;
    }
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    if (uVar1 != 0) {
      uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
    }
  }
  return uVar1;
}

/* ref: FUN_00cb3020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb3020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb3020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cb3070 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb3070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb3070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cb30c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb30c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  F_01051d29(this,0x1c,0x20,((code *)REFP(0xcb2e80)));
  return extraout_EAX;
}

/* ref: FUN_00cb30d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb30d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb30d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cb3120 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cb3120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb3120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x38))))(this GEN_EDX_FWD);
  if ((char)uVar3 != '\0') {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x3d8)));
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 1;
  do {
    if (iVar2 == 0) {
      if ((*((int *)GEN_TOP(((int)this + 0x3dc))) != 0) && (*((int *)GEN_TOP(((int)this + 0x3dc))) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x3dc))));
        *((undefined4 *)GEN_TOP(((int)this + 0x3dc))) = 0;
      }
      return 1;
    }
    uVar3 = 0;
    piVar4 = ((int *)GEN_TOP(((int)this + 0x70)));
    do {
      if (*piVar4 != 0) {
        puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + uVar3 * 0x1c + 0x60)));
        goto LAB_00cb3164;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 7;
    } while (uVar3 < 0x20);
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
LAB_00cb3164: ;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((puVar5[3] + 4))))(puVar5 + 3);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((puVar5[3] + 100))))(puVar5 + 3);
    uVar1 = *((ushort *)GEN_TOP((uVar3 + 4)));
    if (puVar5[1] != 0) {
      *((undefined4 *)GEN_TOP((puVar5[1] + 8))) = puVar5[2];
    }
    if (puVar5[2] != 0) {
      *((undefined4 *)GEN_TOP((puVar5[2] + 4))) = puVar5[1];
    }
    piVar4 = ((int *)GEN_TOP(((int)this + (uVar1 >> 1 & 0x1f) * 0x1c + 0x70)));
    *piVar4 = *piVar4 - 1;
    *((int *)GEN_TOP(((int)this + 0x3d8))) = *((int *)GEN_TOP(((int)this + 0x3d8))) - 1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    iVar2 = *((int *)GEN_TOP(((int)this + 0x3d8)));
  } while( true );
}

/* ref: FUN_00cb3220 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb3220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x40, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
  gen_args[0] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  (*(undefined4 volatile *)(gen_frame + 0x30)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x2c)) = ((code *)REFP(0x106fd70));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x28));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x28)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x30)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(char *)(gen_frame + 0x26)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  iVar6 = (int)this + 0x58;
  iVar5 = 0;
  (*(undefined4 volatile *)(gen_frame + 0x30)) = 1;
  (*(int *)(gen_frame + 0x10)) = iVar6;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(0x0));
  if (iVar6 == 0) goto LAB_00cb3292;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x10)) GEN_EDX_ARG);
    iVar5 = (*(int *)(gen_frame + 0x14));
LAB_00cb3292: ;
    do {
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      if (iVar5 != 0) goto LAB_00cb329e;
      do {
        if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
          (*(undefined4 volatile *)(gen_frame + 0x30)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x26)) == '\0') && ((*(int *)(gen_frame + 0x20)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x28));
          return 0;
        }
LAB_00cb329e: ;
        piVar7 = &(*(int *)(gen_frame + 0x20));
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((puVar2[3] + 100))))(puVar2 + 3)));
        bVar3 = F_00cb5430(this_00 GEN_EDX_ARG,piVar7);
        if (bVar3 != 0) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((puVar2[3] + 100))))(puVar2 + 3);
          uVar1 = *((ushort *)GEN_TOP((uVar4 + 4)));
          if (puVar2[1] != 0) {
            *((undefined4 *)GEN_TOP((puVar2[1] + 8))) = puVar2[2];
          }
          if (puVar2[2] != 0) {
            *((undefined4 *)GEN_TOP((puVar2[2] + 4))) = puVar2[1];
          }
          piVar7 = ((int *)GEN_TOP((iVar6 + (uVar1 >> 1 & 0x1f) * 0x1c + 0x18)));
          *piVar7 = *piVar7 - 1;
          *((int *)GEN_TOP(((int)this + 0x3d8))) = *((int *)GEN_TOP(((int)this + 0x3d8))) - 1;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
          (*(undefined4 volatile *)(gen_frame + 0x30)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x26)) == '\0') && ((*(int *)(gen_frame + 0x20)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x28));
          return 1;
        }
      } while (iVar5 == 0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(puVar2[2]));
    } while (((undefined4 *)GEN_TOP(puVar2[2])) != ((undefined4 *)GEN_TOP((iVar5 + 0xc))));
    (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
  } while( true );
}

/* ref: FUN_00cb3390 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb3390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  undefined4 uVar2;
  code * pcVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) == (*(int *)&gen_args[0])) {
    return 1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
  *((int *)GEN_TOP(((int)this + 0x1c))) = (*(int *)&gen_args[0]);
  for (; piVar1 != ((int *)GEN_TOP(((int)this + 0x2c))); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar1 + 4)));
    (*pcVar3)(piVar1,uVar2,&(*(int *)&gen_args[0]));
  }
  F_00cb3120(this GEN_EDX_FWD);
  *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) + 1;
  *((int *)GEN_TOP(((int)this + 0x1c))) = (*(int *)&gen_args[0]);
  *((undefined4 *)GEN_TOP(((int)this + 1000))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x40c))) = 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))
                    (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)this + 0x10))),(int)this + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  return *((byte *)GEN_TOP(((int)this + 0x40c)));
}

/* ref: FUN_00cb3430 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb3430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  GEN_FRAME_DECL(0x40, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x38);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  byte bVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  
  (*(undefined4 volatile *)(gen_frame + 0x2c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x28)) = ((code *)REFP(0x106fda0));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x24)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x2c)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(char *)(gen_frame + 0x22)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  iVar3 = 0;
  (*(undefined4 volatile *)(gen_frame + 0x2c)) = 1;
  (*(int *)(gen_frame + 0xc)) = param_1 + 0x58;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  if (param_1 + 0x58 == 0) goto LAB_00cb34a1;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0xc)) GEN_EDX_ARG);
    iVar3 = (*(int *)(gen_frame + 0x10));
LAB_00cb34a1: ;
    do {
      iVar1 = (*(int *)(gen_frame + 0x18));
      if (iVar3 != 0) goto LAB_00cb34a9;
      do {
        if (iVar1 == 0) {
          (*(undefined4 volatile *)(gen_frame + 0x2c)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x22)) == '\0') && ((*(int *)(gen_frame + 0x1c)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
          return (*(byte *)&gen_args[1]);
        }
LAB_00cb34a9: ;
        piVar4 = &(*(int *)(gen_frame + 0x1c));
        this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0xc))) + 100))))(iVar1 + 0xc)));
        bVar2 = F_00cb5430(this GEN_EDX_ARG,piVar4);
        if (bVar2 != 0) {
          (*(undefined4 volatile *)(gen_frame + 0x2c)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x22)) == '\0') && ((*(int *)(gen_frame + 0x1c)) != 0)) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x24));
          return 1;
        }
      } while (iVar3 == 0);
      (*(int *)(gen_frame + 0x18)) = *((int *)GEN_TOP((iVar1 + 8)));
    } while (*((int *)GEN_TOP((iVar1 + 8))) != iVar3 + 0xc);
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
  } while( true );
}

/* ref: FUN_00cb3550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x28)));
  while ((uVar2 = (int)this + 0x2cU, uVar1 != (int)this + 0x2cU && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
    }
  }
  if (uVar2 == (int)this + 0x2cU) {
    *((int *)GEN_TOP((param_1 + 4))) = (int)this + 0x20;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
    if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))) = param_1;
    }
    *((uint *)GEN_TOP(((int)this + 0x28))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x38))) = *((int *)GEN_TOP(((int)this + 0x38))) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb35b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb35b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcb35b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44)));
    *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
    for (; piVar1 != ((int *)GEN_TOP(((int)this + 0x48))); piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD);
    }
    F_00cb3120(this GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)this + 0x3ec))) = *((int *)GEN_TOP(((int)this + 0x3ec))) + 1;
    *((undefined4 *)GEN_TOP(((int)this + 1000))) = 0;
    *((undefined1 *)GEN_TOP(((int)this + 0x40c))) = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))
                      (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)this + 0x10))),(int)this + 4,0,0,0,1);
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44))); piVar1 != ((int *)GEN_TOP(((int)this + 0x48)));
        piVar1 = ((int *)GEN_TOP(piVar1[2]))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    }
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00cb3660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x44)));
  while ((uVar2 = (int)this + 0x48U, uVar1 != (int)this + 0x48U && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
    }
  }
  if (uVar2 == (int)this + 0x48U) {
    *((int *)GEN_TOP((param_1 + 4))) = (int)this + 0x3c;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
    if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 4))) = param_1;
    }
    *((uint *)GEN_TOP(((int)this + 0x44))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x54))) = *((int *)GEN_TOP(((int)this + 0x54))) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb36c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb36c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x3f8)));
  while ((uVar2 = (int)this + 0x3fcU, uVar1 != (int)this + 0x3fcU &&
         (uVar2 = uVar1, uVar1 != param_1))) {
    if (uVar1 != 0) {
      uVar1 = *((uint *)GEN_TOP((uVar1 + 8)));
    }
  }
  if (uVar2 == (int)this + 0x3fcU) {
    *((int *)GEN_TOP((param_1 + 4))) = (int)this + 0x3f0;
    *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x3f8)));
    if (*((int *)GEN_TOP(((int)this + 0x3f8))) != 0) {
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3f8))) + 4))) = param_1;
    }
    *((int *)GEN_TOP(((int)this + 0x408))) = *((int *)GEN_TOP(((int)this + 0x408))) + 1;
    *((uint *)GEN_TOP(((int)this + 0x3f8))) = param_1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb3730 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb3730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3f8)));
  while ((iVar2 = (int)this + 0x3fc, iVar1 != (int)this + 0x3fc && (iVar2 = iVar1, iVar1 != param_1)
         )) {
    if (iVar1 != 0) {
      iVar1 = *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  if (iVar2 != (int)this + 0x3fc) {
    if (param_1 != 0) {
      if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
      }
      if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
      }
      *((int *)GEN_TOP(((int)this + 0x408))) = *((int *)GEN_TOP(((int)this + 0x408))) - 1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb37a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb37a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb37a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x3f8)));
  if (this_00 != ((undefined *)GEN_TOP(((int)this + 0x3fc)))) {
    piVar3 = ((int *)GEN_TOP((param_1 + 0xc)));
    while( true ) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 100))))(piVar3 GEN_EDX_FWD);
      bVar1 = F_00cb5430(((undefined *)GEN_TOP(((int)this_00 + 0xc))) GEN_EDX_ARG,uVar2);
      if (bVar1 != 0) break;
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
      }
      if (this_00 == ((undefined *)GEN_TOP(((int)this + 0x3fc)))) {
        return;
      }
    }
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      if (*((int *)GEN_TOP(((int)this_00 + 4))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this_00 + 8)));
      }
      if (*((int *)GEN_TOP(((int)this_00 + 8))) != 0) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 8))) + 4))) = *((undefined4 *)GEN_TOP(((int)this_00 + 4)));
      }
      *((int *)GEN_TOP(((int)this + 0x408))) = *((int *)GEN_TOP(((int)this + 0x408))) - 1;
    }
    F_00cb5bf0(this_00 GEN_EDX_ARG,piVar3);
  }
  return;
}

/* ref: FUN_00cb3830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x3dc))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3dc))) + param_1 * 4)));
  }
  uVar1 = F_00cb2fc0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb3870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb2fc0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb38c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb38c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb38c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  uint uVar1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x106fe0d));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 6;
  if (*((int *)GEN_TOP(((int)this + 0x3d8))) != 0) {
    F_00cb3120(this GEN_EDX_ARG);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)this + 0x400))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x400))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x404)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x404))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x404))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x400)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)this + 0x3f4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3f4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x3f8)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x3f8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3f8))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x3f4)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x14)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x14)) + 0)) = 4;
  F_01051d29(((undefined *)GEN_TOP(((int)this + 0x58))),0x1c,0x20,((code *)REFP(0xcb2e80)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x50))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x40))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)this + 0x30))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x34)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x34))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x28)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x14)) + 0)) = 1;
  (*(undefined4 volatile *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 volatile *)(gen_frame + 0x14)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)this + 0x16))) == '\0') && (uVar1 = 0, *((int *)GEN_TOP(((int)this + 0x10))) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return uVar1;
}

/* ref: FUN_00cb3a40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb3a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb3a50((int)this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb3a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb3a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb38c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb3a80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb3a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x164, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x15c);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  char * pcVar1;
  int iVar2;
  code * pcVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  byte * pbVar7;
  uint uVar8;
  undefined * pvVar9;
  undefined * this_00;
  char * pcVar10;
  int * piVar11;
  undefined4 uVar12;
  char * pcVar13;
  uint uVar14;
  int iVar15;
  undefined4 * puVar16;
  
  puVar16 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 volatile *)(gen_frame + 0x150)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14c)) = ((code *)REFP(0x106fe54));
  (*(undefined * PTR32 *)(gen_frame + 0x148)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x144)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x154);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x154);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x148));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x148)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(byte *)(gen_frame + 0x43)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0xcb3acb));
  uVar6 = F_00cb9700((*(undefined4 * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar14 = (uint)uVar6;
  (*(uint *)(gen_frame + 0x38)) = uVar14;
  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0xcb3adb));
  pbVar7 = ((byte *)GEN_TOP(F_00cb97e0(puVar16 GEN_EDX_ARG)));
  pcVar1 = ((char *)GEN_TOP(*puVar16));
  cVar4 = *pcVar1;
  pcVar13 = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x24)) = pcVar1;
  if (cVar4 != '\0') {
    pcVar10 = ((char *)(gen_frame + 0x44));
    do {
      if (cVar4 == '.') {
        pcVar13 = pcVar10;
      }
      *pcVar10 = cVar4;
      cVar4 = pcVar10[(int)(pcVar1 + (1 - (int)((char *)(gen_frame + 0x44))))];
      pcVar10 = pcVar10 + 1;
      uVar14 = (*(uint *)(gen_frame + 0x38));
    } while (cVar4 != '\0');
  }
  *pcVar13 = '\0';
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)((char *)(gen_frame + 0x44));
  (*(undefined4 volatile *)(gen_frame + 0x150)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0;
  (*(char *)(gen_frame + 0x32)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x2c)) GEN_EDX_ARG,((char *)(gen_frame + 0x44)));
  (*(undefined4 volatile *)(gen_frame + 0x150)) = 1;
  if (uVar14 != 0) {
    (*(uint *)(gen_frame + 0x38)) = uVar14;
    do {
      uVar14 = (uint)*pbVar7;
      (*(uint *)(gen_frame + 0x20)) = uVar14;
      (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar7 + 1;
      if ((uVar14 == 0) || (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x1c))) == uVar14)) {
        iVar15 = 0;
        uVar14 = 0;
        puVar16 = ((undefined4 *)GEN_TOP(0x0));
        (*(byte *)(gen_frame + 0x43)) = 1;
        if ((*(undefined * PTR32 *)(gen_frame + 0x3c)) != ((undefined *)GEN_TOP(0xffffffa8))) {
          uVar8 = 0;
          piVar11 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x70)));
          do {
            if (*piVar11 != 0) {
              puVar16 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar8 * 0x1c + 0x60)));
              iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar8 * 0x1c + 0x58;
              uVar14 = uVar8;
              break;
            }
            uVar8 = uVar8 + 1;
            piVar11 = piVar11 + 7;
          } while (uVar8 < 0x20);
        }
        (*(uint *)(gen_frame + 0x28)) = 0xffffffff;
        do {
          do {
            do {
              if (iVar15 != 0) goto LAB_00cb3bce;
              do {
                pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
                if (puVar16 == ((undefined4 *)GEN_TOP(0x0))) {
LAB_00cb3cba: ;
                  pcVar3 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4)));
                  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
                  this_00 = ((undefined *)GEN_TOP((*pcVar3)(REFG(int * PTR32, 0x15d7724),0x94,0)));
                  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
                  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x150)) + 0)) = 2;
                  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x150)) + 0)) = 2;
                  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
                    uVar14 = 0;
                  }
                  else {
                    if (((*(uint *)&gen_args[1]) >> 1 & 1) == 0) {
                      uVar12 = *((undefined4 *)GEN_TOP(((int)pvVar9 + 1000)));
                    }
                    else {
                      uVar12 = 0;
                    }
                    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(uVar12));
                    (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = ((undefined1 *)GEN_TOP((gen_frame + 0x0)));
                    uVar14 = (uint)((byte)(*(uint *)&gen_args[1]) & 1);
                    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(uVar14));
                    uVar14 = F_00cb9050(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(char * PTR32 *)(gen_frame + 0x24)),(*(byte * PTR32 *)(gen_frame + 0x34)),uVar12,
                                          uVar14);
                  }
                  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x150)) + 0)) = 1;
                  (*(undefined4 volatile *)(gen_frame + 0x150)) = CONCAT31(GEN_PIECE(&(*(undefined4 volatile *)(gen_frame + 0x150)), 1, 3),1);
                  if (-1 < (int)(*(uint *)(gen_frame + 0x28))) {
                    *((short *)GEN_TOP((uVar14 + 0x7e))) = (short)(*(uint *)(gen_frame + 0x28));
                  }
                  if (*((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x3e0))) != ((int *)GEN_TOP(0x0))) {
                    if (uVar14 == 0) {
                      iVar15 = 0;
                    }
                    else {
                      iVar15 = uVar14 + 0xc;
                    }
                    **((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x3e0))) = iVar15;
                    *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x3e0))) = 0;
                  }
                  pcVar3 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((uVar14 + 0xc))) + 100)));
                  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0xcb3d6b));
                  uVar8 = (*pcVar3)(uVar14 + 0xc);
                  uVar8 = *((ushort *)GEN_TOP((uVar8 + 4))) >> 1 & 0x1f;
                  iVar15 = *((int *)GEN_TOP(((int)pvVar9 + uVar8 * 0x1c + 0x68)));
                  *((int *)GEN_TOP((uVar14 + 4))) = iVar15;
                  *((undefined4 *)GEN_TOP((uVar14 + 8))) = *((undefined4 *)GEN_TOP((iVar15 + 8)));
                  if (*((int *)GEN_TOP((iVar15 + 8))) != 0) {
                    *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar15 + 8))) + 4))) = uVar14;
                  }
                  *((uint *)GEN_TOP((iVar15 + 8))) = uVar14;
                  piVar11 = ((int *)GEN_TOP(((int)pvVar9 + uVar8 * 0x1c + 0x70)));
                  *piVar11 = *piVar11 + 1;
                  *((int *)GEN_TOP(((int)pvVar9 + 0x3d8))) = *((int *)GEN_TOP(((int)pvVar9 + 0x3d8))) + 1;
                  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(uVar14));
                  F_00cb37a0(pvVar9 GEN_EDX_ARG,uVar14);
                  if (*((char *)GEN_TOP((uVar14 + 0x81))) != '\0') {
                    (*(byte *)(gen_frame + 0x43)) = 0;
                  }
                  goto LAB_00cb3dc7;
                }
LAB_00cb3bce: ;
                iVar2 = puVar16[3];
                (*(int * PTR32 *)(gen_frame + 0x0)) = &(*(int *)(gen_frame + 0x2c));
                pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar2 + 100))))(puVar16 + 3)));
                bVar5 = F_00cb5430(pvVar9 GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0)));
                pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
                if (bVar5 != 0) {
                  (*(uint *)(gen_frame + 0x28)) = (uint)*((ushort *)GEN_TOP(((int)puVar16 + 0x7e)));
                  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x3e0))) =
                       *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x3dc))) + (uint)*((ushort *)GEN_TOP(((int)puVar16 + 0x7e))) * 4
                  ;
                  pcVar3 = *((gen_code32 *)GEN_TOP((puVar16[3] + 100)));
                  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0xcb3c6c));
                  uVar14 = (*pcVar3)(puVar16 + 3);
                  uVar6 = *((ushort *)GEN_TOP((uVar14 + 4)));
                  if (puVar16[1] != 0) {
                    *((undefined4 *)GEN_TOP((puVar16[1] + 8))) = puVar16[2];
                  }
                  if (puVar16[2] != 0) {
                    *((undefined4 *)GEN_TOP((puVar16[2] + 4))) = puVar16[1];
                  }
                  piVar11 = ((int *)GEN_TOP(((int)pvVar9 + (uVar6 >> 1 & 0x1f) * 0x1c + 0x70)));
                  *piVar11 = *piVar11 - 1;
                  *((int *)GEN_TOP(((int)pvVar9 + 0x3d8))) = *((int *)GEN_TOP(((int)pvVar9 + 0x3d8))) - 1;
                  pcVar3 = *((gen_code32 *)GEN_TOP(*puVar16));
                  (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x1));
                  (*pcVar3)(puVar16,1);
                  goto LAB_00cb3cba;
                }
              } while (iVar15 == 0);
              puVar16 = ((undefined4 *)GEN_TOP(puVar16[2]));
            } while (puVar16 != ((undefined4 *)GEN_TOP((iVar15 + 0xc))));
            uVar14 = uVar14 + 1;
            puVar16 = ((undefined4 *)GEN_TOP(0x0));
            iVar15 = 0;
          } while (0x1f < uVar14);
          piVar11 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar14 * 0x1c + 0x70)));
          uVar8 = uVar14;
          do {
            if (*piVar11 != 0) {
              puVar16 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar8 * 0x1c + 0x60)));
              iVar15 = (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + uVar8 * 0x1c + 0x58;
              uVar14 = uVar8;
              break;
            }
            uVar8 = uVar8 + 1;
            piVar11 = piVar11 + 7;
          } while (uVar8 < 0x20);
        } while( true );
      }
LAB_00cb3dc7: ;
      bVar5 = *(*(byte * PTR32 *)(gen_frame + 0x34));
      pbVar7 = (*(byte * PTR32 *)(gen_frame + 0x34));
      while (bVar5 != 0) {
        pbVar7 = pbVar7 + 1;
        bVar5 = *pbVar7;
      }
      pbVar7 = pbVar7 + 1;
      uVar14 = (*(uint *)(gen_frame + 0x38)) - 1;
      (*(uint *)(gen_frame + 0x38)) = uVar14;
    } while (uVar14 != 0);
  }
  (*(undefined4 volatile *)(gen_frame + 0x150)) = 0xffffffff;
  if (((*(char *)(gen_frame + 0x32)) == '\0') && ((*(int *)(gen_frame + 0x2c)) != 0)) {
    iVar15 = *REFG(int * PTR32, 0x15d7724);
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP((*(int *)(gen_frame + 0x2c))));
    ((code *)*((gen_code32 *)GEN_TOP((iVar15 + 8))))(REFG(int * PTR32, 0x15d7724),(*(int *)(gen_frame + 0x2c)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x148));
  (*(undefined4 *)(gen_frame + 0x10)) = 0xcb3e29;
  return (*(byte *)(gen_frame + 0x43));
}

/* ref: FUN_00cb3e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x2c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  gen_args[0] = gen_a1;
  
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x106feb4));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x14)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  *((undefined1 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28))) = ((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30))) = ((undefined4 *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x44))) = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = ((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 4;
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 4;
  F_01051d8c(((undefined *)GEN_TOP(((int)this + 0x58))),0x1c,0x20,((code *)REFP(0xcb2bd0)),((code *)REFP(0xcb2e80)));
  *((undefined4 *)GEN_TOP(((int)this + 0x3d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)this + 0x3f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)this + 0x400))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x404))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3f8))) = ((undefined4 *)GEN_TOP(((int)this + 0x3fc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x408))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x400))) = ((undefined4 *)GEN_TOP(((int)this + 0x3f0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x410))) = 0;
  REFG(undefined4, 0x15d7724) = (*(undefined4 *)&gen_args[0]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  return (uint)this;
}

/* ref: FUN_00cb3f50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb3f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x40, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x3c);
  gen_args[0] = gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(uint volatile *)(gen_frame + 0x30)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x2c)) = ((code *)REFP(0x106fee0));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x34);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x28));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x28)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  if ((char)uVar3 == '\0') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG);
    if (uVar3 != 0) {
      F_00cb5aa0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,uVar3);
      (*(uint volatile *)(gen_frame + 0x30)) = 0;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
      F_00cb59f0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar3,uVar4);
      (*(undefined1 *)((char *)&(*(uint volatile *)(gen_frame + 0x30)) + 0)) = 1;
      (*(uint volatile *)(gen_frame + 0x30)) = CONCAT31(GEN_PIECE(&(*(uint volatile *)(gen_frame + 0x30)), 1, 3),1);
      bVar2 = F_00cb58a0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
      if (bVar2 == 0) {
        bVar2 = F_00cb58f0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
        if (bVar2 == 0) {
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG)));
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
          (*(uint *)(gen_frame + 0x10)) = uVar4;
          (*(uint *)(gen_frame + 0x14)) = uVar3;
          bVar2 = F_00cb3a80(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)),(*(int * PTR32 *)&gen_args[0]));
          if (bVar2 == 0) {
            *((undefined1 *)GEN_TOP(((int)this + 0x408))) = 0;
          }
        }
        else {
          F_00cb2290(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
        }
      }
      else {
        F_00cb2200(((undefined *)GEN_TOP(((int)this - 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
      }
      uVar3 = (*(uint volatile *)(gen_frame + 0x30));
      (*(undefined1 *)((char *)&(*(uint volatile *)(gen_frame + 0x30)) + 0)) = 0;
      (*(uint volatile *)(gen_frame + 0x30)) = uVar3 & 0xffffff00;
      F_00cb5a10();
      (*(uint volatile *)(gen_frame + 0x30)) = 0xffffffff;
      F_00cb5b50(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    }
  }
  else {
    *((undefined1 *)GEN_TOP(((int)this + 0x408))) = 0;
  }
  *((int *)GEN_TOP(((int)this + 1000))) = *((int *)GEN_TOP(((int)this + 1000))) - 1;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 8))))(REFG(int, 0x15d7724) + 4,piVar1);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x28));
  return uVar3;
}

/* ref: FUN_00cb40a0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb40a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb40a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((in_ecx + 8 + param_2 * 2)));
}

/* ref: FUN_00cb40b0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb40b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb40b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((ushort *)GEN_TOP(((int)this + param_1 * 2 + 8))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb40e0 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb40e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb40e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 6))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb4120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb4120(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0xffff0000;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4170 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb4170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  short * psVar1;
  uint uVar2;
  
  if ((*((short *)GEN_TOP(((int)this + 4))) == (short)param_1[1]) && (*(int *)this == *param_1)) {
    uVar2 = 0;
    if (*((ushort *)GEN_TOP(((int)this + 6))) != 0) {
      psVar1 = ((short *)GEN_TOP(((int)this + 8)));
      do {
        if (*psVar1 != *((short *)GEN_TOP((((int)param_1 - (int)this) + (int)psVar1)))) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (uVar2 < *((ushort *)GEN_TOP(((int)this + 6))));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb41d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb41d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb41d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(uint *)this = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((short *)GEN_TOP(((int)this + 4))) = (short)param_1;
  return param_1 & 0xffff;
}

/* ref: FUN_00cb41f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb41f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcb41f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  ushort uVar1;
  uint uVar2;
  undefined2 * puVar3;
  ushort * puVar4;
  
  *(undefined4 *)this = param_1;
  uVar2 = 0;
  *((short *)GEN_TOP(((int)this + 6))) = (short)param_3;
  if (param_3 != 0) {
    puVar3 = ((undefined2 *)GEN_TOP(((int)this + 8)));
    do {
      *puVar3 = *((undefined2 *)GEN_TOP((param_2 + uVar2 * 2)));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < param_3);
  }
  uVar1 = *(ushort *)this;
  if ((*((short *)GEN_TOP(((int)this + 6))) != -1) && (*((short *)GEN_TOP(((int)this + 6))) != 0)) {
    uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + 6)));
    puVar4 = ((ushort *)GEN_TOP(((int)this + 8)));
    do {
      uVar1 = uVar1 * 2 ^ *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *((ushort *)GEN_TOP(((int)this + 4))) = uVar1;
  return 0;
}

/* ref: FUN_00cb4260 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb4260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*((ushort *)GEN_TOP(((int)this + 6))) != 0) {
    psVar2 = ((short *)GEN_TOP(((int)this + 8)));
    do {
      if (*psVar2 != *((short *)GEN_TOP((param_1 + uVar1 * 2)))) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (uVar1 < *((ushort *)GEN_TOP(((int)this + 6))));
  }
  return 1;
}

/* ref: FUN_00cb42a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb42a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb42a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = param_1;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 0;
  *((short *)GEN_TOP(((int)this + 4))) = (short)param_1;
  return (uint)this;
}

/* ref: FUN_00cb42c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb42c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcb42c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  puVar2 = ((ushort *)GEN_TOP(((int)this + 8)));
  *((short *)GEN_TOP(((int)this + 6))) = (short)param_3;
  F_00c46aa0(puVar2,param_2,param_3 * 2);
  uVar1 = *(ushort *)this;
  if ((*((short *)GEN_TOP(((int)this + 6))) != -1) && (*((short *)GEN_TOP(((int)this + 6))) != 0)) {
    uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + 6)));
    do {
      uVar1 = uVar1 * 2 ^ *puVar2;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *((ushort *)GEN_TOP(((int)this + 4))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cb4320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  
  if (*((ushort *)GEN_TOP(((int)param_1 + 6))) == 0xffff) {
    *((undefined2 *)GEN_TOP(((int)this + 6))) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this GEN_EDX_FWD,*param_1,param_1 + 2,(uint)*((ushort *)GEN_TOP(((int)param_1 + 6))));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb4360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffff0000;
  if (*((ushort *)GEN_TOP(((int)param_1 + 6))) == 0xffff) {
    *((undefined2 *)GEN_TOP(((int)this + 6))) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this GEN_EDX_FWD,*param_1,param_1 + 2,(uint)*((ushort *)GEN_TOP(((int)param_1 + 6))));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb43b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb43b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb43b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cb4170(this GEN_EDX_FWD,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00cb43e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb43e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb43e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_8;
  
  iVar6 = 0;
  uVar5 = 0;
  local_8 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    do {
      bVar3 = F_00cb4170(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar6))) GEN_EDX_FWD,param_1);
      if ((bVar3 != 0) && (*((int *)GEN_TOP((iVar6 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) == 0)) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x28))))(param_2 GEN_EDX_ARG,param_1);
        *((uint *)GEN_TOP((iVar6 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) = uVar4;
        piVar2 = *((int * PTR32 *)GEN_TOP((iVar6 + 0xc + *((int *)GEN_TOP(((int)this + 0xc))))));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar5 * 4))) = uVar4;
      }
      iVar1 = iVar6 + *((int *)GEN_TOP(((int)this + 0xc)));
      if ((*((short *)GEN_TOP((iVar1 + 6))) != -1) && (*((int *)GEN_TOP((iVar1 + 0xc))) == 0)) {
        local_8 = local_8 + 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (uVar5 < *((uint *)GEN_TOP(((int)this + 4))));
    if (local_8 != 0) {
      return 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))
            (this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),*((undefined4 *)GEN_TOP(((int)this + 0x10))),
             *((undefined4 *)GEN_TOP(((int)this + 8))));
  return 1;
}

/* ref: FUN_00cb44e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb44e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb44e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar3;
  
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4))) GEN_EDX_FWD,param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4))) GEN_EDX_ARG,param_2);
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc + iVar4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc + iVar4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc + iVar4))) = 0;
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 4))) = 0;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: FUN_00cb4540 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb4540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb4540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2);
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00cb4320(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    if (*((int *)GEN_TOP((iVar4 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *((int *)GEN_TOP(((int)this + 0xc))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      uVar3 = *((uint *)GEN_TOP(((int)this + 0xc)));
      *((undefined4 *)GEN_TOP((iVar4 + 0xc + uVar3))) = 0;
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 4))) = 0;
  }
  return uVar3;
}

/* ref: FUN_00cb45d0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb45d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb45d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  iVar5 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar5))) GEN_EDX_ARG,uVar3);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar5))) GEN_EDX_ARG,uVar3);
    if (*((int *)GEN_TOP((iVar5 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar5 + 0xc + *((int *)GEN_TOP(((int)this + 0xc))))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP((iVar5 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) = 0;
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + param_1 * 4))) = 0;
    uVar4 = param_1;
  }
  return uVar4;
}

/* ref: FUN_00cb4650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb4660 */
GEN_LIB GEN_FRAME uint F_00cb4660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb4660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 << 4,0);
  return uVar1;
}

/* ref: FUN_00cb4680 */
GEN_LIB GEN_FRAME uint F_00cb4680(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb4680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb46a0 */
GEN_LIB GEN_FRAME uint F_00cb46a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb46a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb46d0 */
GEN_LIB GEN_FRAME uint F_00cb46d0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb46d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb4700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb4700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,param_1 << 4,0);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 4,0);
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 6 + iVar2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 0xc + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < param_1);
  }
  return (uint)this;
}

/* ref: FUN_00cb47a0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb47a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb47a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    do {
      uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
      bVar2 = F_00cb4170(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4))) GEN_EDX_ARG,uVar3);
      if (bVar2 == 0) {
        F_00cb4320(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar4))) GEN_EDX_ARG,uVar3);
        if (*((int *)GEN_TOP((iVar4 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) != 0) {
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *((int *)GEN_TOP(((int)this + 0xc))))));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
          *((undefined4 *)GEN_TOP((iVar4 + 0xc + *((int *)GEN_TOP(((int)this + 0xc)))))) = 0;
        }
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + (*(uint *)(gen_frame + 0x0)) * 4))) = 0;
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      iVar4 = iVar4 + 0x10;
    } while ((*(uint *)(gen_frame + 0x0)) < *((uint *)GEN_TOP(((int)this + 4))));
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  uVar3 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  }
  return uVar3;
}

/* ref: FUN_00cb4870 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb4870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  uVar1 = F_00cb47a0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cb4880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4880(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  F_00cb47a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb48d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb48d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb48d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((param_2 + 8))) == 0) {
    if (*((int *)GEN_TOP((param_2 + 4))) == 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
      *((uint *)GEN_TOP((param_2 + 4))) = uVar2;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 4)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      *((uint *)GEN_TOP((param_2 + 8))) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') goto LAB_00cb491e;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_2 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
    }
  }
LAB_00cb491e: ;
  return *((uint *)GEN_TOP((param_2 + 8)));
}

/* ref: FUN_00cb49a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb49a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb49a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb49c0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb49c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb49c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb49e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb49e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb49e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb4a10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb4a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  F_00cb4120(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00cb4320(this GEN_EDX_ARG,param_1);
  *((undefined8 *)GEN_TOP(((int)this + 0xc))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *(undefined4 *)(param_2 + 1);
  return (uint)this;
}

/* ref: FUN_00cb4a60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb4a70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4a70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4a80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb4a80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_00cb4aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00cb4120(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  F_00cb4320(this GEN_EDX_ARG,param_1);
  *((undefined8 *)GEN_TOP(((int)this + 0xc))) = *((undefined8 *)GEN_TOP((param_1 + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP((param_1 + 0x14)));
  return (uint)this;
}

/* ref: FUN_00cb4af0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb4af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 0x18)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar2);
    iVar2 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00cb4b30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb4b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x2c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  gen_args[0] = gen_a1;
  int iVar1;
  undefined * this_00;
  
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x106ff0b));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x14)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x1c,0)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this_00;
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0;
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    F_00cb4120(this_00 GEN_EDX_ARG);
    iVar1 = (*(int *)&gen_args[0]);
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0xc))) = 1;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x18))) = 0;
    F_00cb4320(this_00 GEN_EDX_ARG,(*(int *)&gen_args[0]));
    *((undefined8 *)GEN_TOP(((int)this_00 + 0xc))) = *((undefined8 *)GEN_TOP((iVar1 + 0xc)));
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x14))) = *((undefined4 *)GEN_TOP((iVar1 + 0x14)));
  }
  *((undefined4 *)GEN_TOP(((int)this_00 + 0x18))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = this_00;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  return 0;
}

/* ref: FUN_00cb4bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb4bd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 0x18)));
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar3;
    *param_1 = uVar3;
    return (uint)param_1;
  }
  iVar4 = *((int *)GEN_TOP((iVar1 + 0x18)));
  while( true ) {
    if (iVar4 == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar5 = *((int *)GEN_TOP((iVar1 + 0x18)));
    if (iVar2 == iVar5) break;
    iVar4 = *((int *)GEN_TOP((iVar5 + 0x18)));
    iVar1 = iVar5;
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = *((undefined4 *)GEN_TOP((iVar2 + 0x18)));
  *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  *param_1 = *((undefined4 *)GEN_TOP((*param_2 + 0x18)));
  return (uint)param_1;
}

/* ref: FUN_00cb4c40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb4c50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb4c50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb4c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4c60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = param_1[2];
  while (iVar2 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar2 + 0x18)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar2);
    iVar2 = iVar1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb4cc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb4cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint in_ecx;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while( true ) {
    if (iVar1 == 0) {
      return in_EAX;
    }
    if (*((int *)GEN_TOP((iVar1 + 0x14))) == 0) {
      if (*((int *)GEN_TOP((iVar1 + 0x10))) == 0) {
        in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,iVar1);
        *((uint *)GEN_TOP((iVar1 + 0x10))) = in_EAX;
      }
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x10)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
        *((uint *)GEN_TOP((iVar1 + 0x14))) = in_ecx;
        if ((in_ecx == 0) || (in_EAX = F_00cb09f0(in_ecx GEN_EDX_ARG), (char)in_EAX == '\0')) {
          in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_ARG);
        }
      }
    }
    if (iVar1 == 0) break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)));
  }
  return in_EAX;
}

/* ref: FUN_00cb4d30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb4d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  for (iVar1 = *((int *)GEN_TOP(((int)this + 0x10))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    if (*((int *)GEN_TOP((iVar1 + 0x14))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x10))) GEN_EDX_FWD);
    }
    if (iVar1 == 0) break;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x18)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar1);
    iVar1 = iVar2;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return 0;
}

/* ref: FUN_00cb4d90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4d90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4dc0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb4dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb4dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x2c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  int iVar1;
  code * pcVar2;
  int iVar3;
  
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x106ff3b));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x14)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0;
  F_00cb4d30(this GEN_EDX_ARG);
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar3 + 0x18)));
    pcVar2 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
    (*pcVar2)(REFG(int * PTR32, 0x15d7724),iVar3);
    iVar3 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  return 0;
}

/* ref: FUN_00cb4e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
  if (iVar1 != 0) {
    F_00cb4320(param_1 GEN_EDX_FWD,iVar1);
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14)));
  }
  return 0;
}

/* ref: FUN_00cb4e70 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb4e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined4 * puVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*param_1);
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = puVar1;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *puVar1;
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14)));
  }
  return 0;
}

/* ref: FUN_00cb4ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x18)));
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
    if (iVar1 != 0) {
      F_00cb4320(param_1 GEN_EDX_FWD,iVar1);
      return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14)));
    }
  }
  return 0;
}

/* ref: FUN_00cb4f10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb4f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  undefined4 * puVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*param_1);
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x18)));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = puVar1;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *param_1 = *puVar1;
      return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 0x14)));
    }
  }
  return 0;
}

/* ref: FUN_00cb4f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb4f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  byte bVar2;
  
  for (iVar1 = *((int *)GEN_TOP(((int)this + 8))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x18)))) {
    bVar2 = F_00cb4170(param_2 GEN_EDX_FWD,iVar1);
    if (bVar2 != 0) {
      *param_1 = iVar1;
      return (uint)param_1;
    }
    if (iVar1 == 0) break;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb4fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb4fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar3 != 0) {
    while (bVar1 = F_00cb4170(param_1 GEN_EDX_FWD,iVar3), bVar1 == 0) {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *((int *)GEN_TOP((iVar3 + 0x18)));
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar3 != 0) {
      uVar2 = F_00cb48d0(this GEN_EDX_ARG,param_1,iVar3 + 0xc);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00cb5020 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cb5020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  byte bVar1;
  int iVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(param_1 GEN_EDX_FWD,iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *((int *)GEN_TOP((iVar2 + 0x18))), iVar2 == 0)) goto LAB_00cb505d;
    }
    if (iVar2 != 0) {
      *((int *)GEN_TOP((iVar2 + 0xc))) = *((int *)GEN_TOP((iVar2 + 0xc))) + 1;
      return 0;
    }
  }
LAB_00cb505d: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0xc)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0xc)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  (*(undefined8 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_00cb4b30(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return 1;
}

/* ref: FUN_00cb50e0 */
GEN_LIB_GS GEN_FRAME byte GEN_THISCALL F_00cb50e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb50e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x30, 0, 4);
  byte bVar1;
  int iVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *((int *)GEN_TOP((iVar2 + 0x18))), iVar2 == 0)) goto LAB_00cb512e;
    }
    if (iVar2 != 0) {
      *((int *)GEN_TOP((iVar2 + 0xc))) = *((int *)GEN_TOP((iVar2 + 0xc))) + 1;
      return 0;
    }
  }
LAB_00cb512e: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00cb51b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb51b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb51b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  code * pcVar2;
  undefined * this_00;
  byte bVar3;
  int iVar4;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar4 != 0) {
    while (bVar3 = F_00cb4170(this_00 GEN_EDX_FWD,iVar4), bVar3 == 0) {
      if (iVar4 == 0) {
        return;
      }
      iVar4 = *((int *)GEN_TOP((iVar4 + 0x18)));
      if (iVar4 == 0) {
        return;
      }
    }
    if ((iVar4 != 0) &&
       (*((int *)GEN_TOP((iVar4 + 0xc))) = *((int *)GEN_TOP((iVar4 + 0xc))) - 1, *((int *)GEN_TOP((iVar4 + 0xc))) < 1)) {
      (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(iVar4));
      if (*((int *)GEN_TOP((iVar4 + 0x14))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0x10)));
        pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 4)));
        (*pcVar2)(piVar1);
      }
      F_00cb4bd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return;
}

/* ref: FUN_00cb5220 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb5220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x1c, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x14)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18));
  uVar2 = F_00cb42a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,param_1);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar3 != 0) {
    while( true ) {
      bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,iVar3);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      if (iVar3 == 0) {
        return uVar2;
      }
      iVar3 = *((int *)GEN_TOP((iVar3 + 0x18)));
      if (iVar3 == 0) {
        return uVar2;
      }
    }
    (*(int *)(gen_frame + 0x4)) = iVar3;
    if ((iVar3 != 0) &&
       (*((int *)GEN_TOP((iVar3 + 0xc))) = *((int *)GEN_TOP((iVar3 + 0xc))) - 1, *((int *)GEN_TOP((iVar3 + 0xc))) < 1)) {
      if (*((int *)GEN_TOP((iVar3 + 0x14))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 0x10))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 0x10))) GEN_EDX_ARG);
      }
      uVar2 = F_00cb4bd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(int *)(gen_frame + 0x4)));
    }
  }
  return uVar2;
}

/* ref: FUN_00cb52c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb52c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb52c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb4dc0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb52f0 */
GEN_LIB_GS GEN_FRAME uint F_00cb52f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb52f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  F_00c472af(((char *)(gen_frame + 0x0)),0x100,((char *)REFP(0x1129748)),param_2);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,((char *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00cb5350 */
GEN_LIB_GS GEN_FRAME uint F_00cb5350(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb5350u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL_GS(0x408, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x400)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x404));
  F_00c475c9(((char *)(gen_frame + 0x0)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 8))) + 4))))(REFG(int, 0x15d7724) + 8,((char *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00cb53b0 */
GEN_LIB_GS GEN_FRAME uint F_00cb53b0(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb53b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL_GS(0x408, 8, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x400)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x404));
  F_00c475c9(((char *)(gen_frame + 0x0)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 8))) + 8))))(REFG(int, 0x15d7724) + 8,((char *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00cb5430 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb5430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (*((short *)GEN_TOP(((int)this + 4))) != *(short *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = ((byte *)GEN_TOP(*param_1));
  pbVar2 = *(byte * PTR32 *)this;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5490 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb5490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb54b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb54b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb54b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(int * PTR32 *)this != *((int *)GEN_TOP(*param_1))) {
    return 0;
  }
  pbVar3 = (byte *)(((int *)GEN_TOP(*param_1)) + 1);
  pbVar2 = ((byte *)GEN_TOP((*(int * PTR32 *)this + 1)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5510 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb5510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint * puVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(uint * PTR32 *)this != (uint)*(ushort *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = ((byte *)GEN_TOP(*param_1));
  puVar2 = *(uint * PTR32 *)this + 1;
  while( true ) {
    bVar1 = (byte)*puVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = *((byte *)GEN_TOP(((int)puVar2 + 1)));
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    puVar2 = ((uint *)GEN_TOP(((int)puVar2 + 2)));
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5570 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb5570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte * pbVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  byte bVar5;
  char * pcVar6;
  
  pcVar6 = ((char *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  pcVar3 = pcVar6;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  bVar5 = 0;
  uVar4 = 0;
  if ((int)pcVar3 - (int)(pcVar6 + 1) != -1) {
    do {
      pbVar1 = (byte *)(pcVar6 + uVar4);
      uVar4 = uVar4 + 1;
      bVar5 = bVar5 * '\x02' ^ *pbVar1;
    } while (uVar4 < ((int)pcVar3 - (int)(pcVar6 + 1)) + 1U);
  }
  *((byte *)GEN_TOP(((int)this + 3))) = bVar5;
  return 0;
}

/* ref: FUN_00cb55b0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb55b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb55b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != (char)(*param_1 >> 0x18)) {
    return 0;
  }
  pbVar2 = ((byte *)GEN_TOP(((*param_1 & 0xffffff) + (int)param_1)));
  pbVar3 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar3;
    bVar4 = bVar1 < *pbVar2;
    if (bVar1 != *pbVar2) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar3[1];
    bVar4 = bVar1 < pbVar2[1];
    if (bVar1 != pbVar2[1]) break;
    pbVar3 = pbVar3 + 2;
    pbVar2 = pbVar2 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5630 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb5630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *((char *)GEN_TOP(*param_1))) {
    return 0;
  }
  pbVar3 = (byte *)(((char *)GEN_TOP(*param_1)) + 4);
  pbVar2 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb56a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb56a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb56a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = ((byte *)GEN_TOP(*param_1));
  pbVar2 = ((byte *)GEN_TOP(((*(uint *)this & 0xffffff) + (int)this)));
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5710 */
GEN_LIB GEN_FRAME uint F_00cb5710(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5730 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb5730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*((char *)GEN_TOP(((int)this + 6))) == '\0') && (*(int *)this != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar6 = 0;
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0;
  if (*((char *)GEN_TOP(((int)this + 6))) == '\0') {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,pcVar3,0);
    *(uint *)this = uVar5;
    pcVar4 = ((char *)GEN_TOP(0x0));
    if (pcVar3 != ((char *)GEN_TOP(0x0))) {
      do {
        pcVar4[*(int *)this] = param_1[(int)pcVar4];
        pcVar1 = param_1 + (int)pcVar4;
        pcVar4 = pcVar4 + 1;
        *((short *)GEN_TOP(((int)this + 4))) = *((short *)GEN_TOP(((int)this + 4))) * 2 ^ (short)*pcVar1;
      } while (pcVar4 < pcVar3);
    }
  }
  else {
    pcVar4 = ((char *)GEN_TOP(0x0));
    *(char * PTR32 *)this = param_1;
    if (pcVar3 != ((char *)GEN_TOP(0x0))) {
      do {
        uVar6 = (short)param_1[(int)pcVar4] ^ uVar6 * 2;
        pcVar4 = pcVar4 + 1;
        *((ushort *)GEN_TOP(((int)this + 4))) = uVar6;
      } while (pcVar4 < pcVar3);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00cb57e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb57e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb57e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)this != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,iVar4 + 5,0);
  *(uint *)this = uVar5;
  uVar6 = 0;
  uVar5 = 0;
  if (iVar4 == -1) {
    **(undefined4 * PTR32 *)this = 0;
    return uVar5;
  }
  do {
    *((char *)GEN_TOP((*(int *)this + 4 + uVar5))) = param_1[uVar5];
    pcVar3 = param_1 + uVar5;
    uVar5 = uVar5 + 1;
    uVar6 = uVar6 * 2 ^ (int)*pcVar3;
  } while (uVar5 < iVar4 + 1U);
  puVar2 = *(uint * PTR32 *)this;
  *puVar2 = uVar6;
  return (uint)puVar2;
}

/* ref: FUN_00cb5870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00cb57e0(this GEN_EDX_FWD,param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb5890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb58a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cb58a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb58a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(*in_ecx));
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'F')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb58d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb58d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb58d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *((int *)GEN_TOP(((int)this + 4))) + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00cb58f0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cb58f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb58f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(*in_ecx));
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'T')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb5920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((char * PTR32 *)GEN_TOP(((int)this + 4))) != ((char *)GEN_TOP(0x0))) {
    cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 4)));
    while ((cVar1 != '\n' &&
           ((cVar1 != '\r' || (cVar1 = '\r', *((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 1))) != '\n'))))) {
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      cVar1 = **((char * PTR32 *)GEN_TOP(((int)this + 4)));
    }
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + (cVar1 != '\n') + 1;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == *((uint *)GEN_TOP((*(int *)this + 4)))) {
      *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00cb5970 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb5970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb5970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  char cVar1;
  byte bVar2;
  bool bVar3;
  char * pcVar4;
  char * pcVar5;
  byte * pbVar6;
  
  pcVar5 = *((char * PTR32 *)GEN_TOP(((int)this + 4)));
  cVar1 = *pcVar5;
  pcVar4 = param_1;
  while (cVar1 != ',') {
    pcVar5 = pcVar5 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar5;
  }
  builtin_strncpy(pcVar4,".exh",5);
  pbVar6 = (byte *)(pcVar5 + 1);
  bVar3 = false;
  *param_2 = 0;
  while (((bVar2 = *pbVar6, bVar2 != 0 && (bVar2 != 0xd)) && (bVar2 != 10))) {
    if (bVar2 == 0x2d) {
      bVar3 = true;
      pbVar6 = pbVar6 + 1;
    }
    else {
      if ((byte)(bVar2 - 0x30) < 10) {
        *param_2 = (bVar2 - 0x30) + *param_2 * 10;
      }
      pbVar6 = pbVar6 + 1;
    }
  }
  if (bVar3) {
    *param_2 = -*param_2;
  }
  return 0;
}

/* ref: FUN_00cb59f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb59f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcb59f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *in_ecx = param_2;
  in_ecx[1] = param_2 + param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00cb5a10 */
GEN_LIB GEN_NOFRAME unsigned int F_00cb5a10(void)
{
  GEN_ENTER(0xcb5a10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cb5a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *(undefined4 * PTR32 *)this = param_1;
  if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  F_00cb5920(this GEN_EDX_FWD);
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb5a50 */
GEN_LIB GEN_FRAME uint F_00cb5a50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 8,0);
  return uVar1;
}

/* ref: FUN_00cb5a70 */
GEN_LIB GEN_FRAME uint F_00cb5a70(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb5aa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  int iVar4;
  
  *(char * PTR32 *)this = param_1;
  if ((((*param_1 == 'E') && (param_1[1] == 'X')) && (param_1[2] == 'L')) && (param_1[3] == 'F')) {
    iVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,iVar4 * 8,0)));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar2;
    pcVar3 = ((char *)GEN_TOP((*(int *)this + 0x10)));
    do {
      *puVar2 = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      puVar2[1] = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
      while (cVar1 != '\n') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      pcVar3 = pcVar3 + 1;
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00cb5b50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb5b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  pcVar1 = *(char * PTR32 *)this;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) &&
     ((pcVar1[3] == 'F' && (pcVar1 = ((char *)GEN_TOP(0x0)), *((int *)GEN_TOP(((int)this + 4))) != 0)))) {
    pcVar1 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 4))))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return (uint)pcVar1;
}

/* ref: FUN_00cb5b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *param_1 = this;
  if (this == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)this;
  }
  param_1[1] = uVar1;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1 GEN_EDX_FWD);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bc0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb5bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1 GEN_EDX_ARG);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  return uVar1;
}

/* ref: FUN_00cb5c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x106ff68));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = (*(undefined4 *)&gen_args[0]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)this;
}

/* ref: FUN_00cb5ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x28, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x106ff98));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)this;
}

/* ref: FUN_00cb5d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  uint uVar1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x106ffc8));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  if ((*((char *)GEN_TOP(((int)this + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)this + 0xc))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))));
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return uVar1;
}

/* ref: FUN_00cb5da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x106fff8));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_1;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  if ((*((char *)GEN_TOP(((int)param_1 + 0x12))) == '\0') && (param_1[3] != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1[3]);
    param_1[3] = 0;
  }
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if (((*(byte *)&gen_args[0]) & 1) != 0) {
    F_00406ad0(param_1);
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)param_1;
}

/* ref: FUN_00cb5e50 */
GEN_LIB GEN_FRAME uint F_00cb5e50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5e70 */
GEN_LIB GEN_FRAME uint F_00cb5e70(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00cb5e90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb5e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00cb5ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00cb5730(this GEN_EDX_FWD,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cb5730(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ee0 */
GEN_LIB GEN_FRAME unsigned int F_00cb5ee0(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  do {
  } while (*param_1 != '\0');
  return 0;
}

/* ref: FUN_00cb5f00 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb5f00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb5f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  return;
}

/* ref: FUN_00cb5f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb5f10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb5f80 */
GEN_LIB GEN_FRAME uint F_00cb5f80(GEN_P(char in_cl, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb5f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char in_cl = (char)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  if (in_cl == '\0') {
    return 0xffffffff;
  }
  if (*param_2 != '\0') {
    do {
    } while (*param_2 != in_cl);
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5fd0 */
GEN_LIB GEN_NOFRAME uint F_00cb5fd0(GEN_P(int * in_esi, unsigned int gen_a0))
{
  GEN_ENTER(0xcb5fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*in_esi != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*in_esi);
    *in_esi = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6010 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb6010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcb6010u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*((uint *)GEN_TOP(((int)this + 0x54))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 8))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return *((uint *)GEN_TOP(((int)this + 0x54)));
}

/* ref: FUN_00cb6030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb6030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcb6030u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 0x14))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cb6050 */
GEN_LIB GEN_NOFRAME unsigned int F_00cb6050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb6050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((0 < *((int *)GEN_TOP((param_1 + 0x60)))) && (*((int *)GEN_TOP((param_1 + 100))) != 0)) {
                    
                    
    return (uint)(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 100))) + 0x10))))());
  }
  return 0;
}

/* ref: FUN_00cb6070 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb6070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb6070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x134c234))[(int)(param_1)];
}

/* ref: FUN_00cb6090 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb6090(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb6090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x134c268) + param_1 * 4);
}

/* ref: FUN_00cb60b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cb60b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb60b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *(uint *)(&REFG(undefined, 0x134c29c) + param_1 * 4);
}

/* ref: FUN_00cb60d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb60d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb60d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 100))) + 0x1c))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG,param_1)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb6110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x54))) == 0) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 0x20))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1,param_2)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') {
          F_00cb4320(param_2 GEN_EDX_ARG,piVar1 + 2);
          return (uint)piVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6170 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb6170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb6170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  int * piVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  if (*((int *)GEN_TOP(((int)this + 0x54))) == 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x58)));
    F_00cb4120(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x0)))));
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      *param_2 = -1;
    }
    else {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') {
          *param_2 = piVar1[2];
          return (uint)piVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcb6200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x58))) + 0x24))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00cb6210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb6210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x6e)));
}

/* ref: FUN_00cb6220 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00cb6220(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x6e))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb6230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return param_1;
}

/* ref: FUN_00cb6240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x24))) + 2 + param_2 * 6)));
}

/* ref: FUN_00cb6260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) +
                (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb6280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4 +
                (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb62a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb62a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb62a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 2 + param_1 * 6))) != -1;
}

/* ref: FUN_00cb62d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb62d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb62d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 8;
}

/* ref: FUN_00cb62e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb62e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb62e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  return;
}

/* ref: FUN_00cb6360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6360(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6370 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb6370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb63b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb63b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb63b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb63d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb63d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb63d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb6410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb6410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00cb6430 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb6430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,3);
      return;
    }
    F_00406b30(puVar1 - 1);
  }
  return;
}

/* ref: FUN_00cb6460 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb6460(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx != param_2;
}

/* ref: FUN_00cb6490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb64d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb64d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb64d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  
  if ((param_2 & 2) != 0) {
    F_01051d29(param_1,0x58,param_1[-1],((code *)REFP(0xcb6430)));
    if ((param_2 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 - 1);
    }
    return (uint)(param_1 - 1);
  }
  puVar1 = ((undefined4 *)GEN_TOP(param_1[1]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,3);
    }
  }
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb6590 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6590(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb65a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb65a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb65a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb65f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb65f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb65f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6600(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6640 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb6640(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx == param_2;
}

/* ref: FUN_00cb6660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00cb6680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb6680(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb6680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb66a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb66a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb66b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb66b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb66b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb66d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb66d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb66f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb66f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb66f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb6720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb6760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb6770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb6780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6780(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb6790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb6790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb6790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb67a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb67a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb67a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb67b0 */
GEN_LIB GEN_FRAME uint F_00cb67b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb67b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 6,0);
  return uVar1;
}

/* ref: FUN_00cb67d0 */
GEN_LIB GEN_FRAME uint F_00cb67d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb67d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 * 2,0);
  return uVar1;
}

/* ref: FUN_00cb67f0 */
GEN_LIB GEN_FRAME uint F_00cb67f0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb67f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6820 */
GEN_LIB GEN_FRAME uint F_00cb6820(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcb6820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

