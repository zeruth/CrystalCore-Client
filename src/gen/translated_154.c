#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00caa100 */
unsigned int F_00caa100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaa100u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xb8);
  uVar2 = *(undefined4 *)(in_ecx + 0xbc);
  *param_2 = *(undefined4 *)(in_ecx + 0xb4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0xc0);
  uVar2 = *(undefined4 *)(in_ecx + 0xc4);
  uVar3 = *(undefined4 *)(in_ecx + 200);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xcc);
  uVar2 = *(undefined4 *)(in_ecx + 0xd0);
  uVar3 = *(undefined4 *)(in_ecx + 0xd4);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xdc);
  uVar2 = *(undefined4 *)(in_ecx + 0xe0);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0xd8);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00caa1d0 */
byte F_00caa1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcaa1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined4 * puVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float in_XMM2_Da = 0;
  float fVar8;
  float in_XMM3_Da = 0;
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
  float in_XMM7_Da = 0;
  
  if (*(char *)((int)this + 0x68) != '\0') {
    puVar1 = (undefined4 *)((int)this + 0x78);
    (*(float *)(gen_frame + 0x120)) = *(float *)((int)this + 0x6c) - *(float *)((int)this + 0x78);
    (*(float *)(gen_frame + 0x124)) = *(float *)((int)this + 0x70) - *(float *)((int)this + 0x7c);
    dVar7 = (double)*(float *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x128)) = ((float)GEN_TOF(((double)*(float *)((int)this + 0x74) - dVar7)));
    uVar2 = F_00c9da90(((undefined1 *)(gen_frame + 0x84)),(uint)this,(uint)puVar1,(uint)&(*(float *)(gen_frame + 0x120)),(int)this + 0x90,
                         (undefined4 *)((int)this + 0x84));
    fVar5 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar7));
    *(undefined4 *)((int)this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x40) + 4)));
    F_00c9f060((undefined *)((int)this + 0x58),uVar2);
    *puVar1 = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x74);
    (*(float *)(gen_frame + 0x178)) = 0.0;
    *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x84);
    (*(float *)(gen_frame + 0x188)) = 0.0;
    (*(float *)(gen_frame + 0x198)) = 0.0;
    *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x88);
    (*(float *)(gen_frame + 0x1a8)) = 0.0;
    (*(float *)(gen_frame + 0x1f8)) = 0.0;
    *(undefined4 *)((int)this + 0x98) = *(undefined4 *)((int)this + 0x8c);
    (*(float *)(gen_frame + 0x208)) = 0.0;
    (*(float *)(gen_frame + 0x218)) = 0.0;
    *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)((int)this + 0x9c);
    (*(float *)(gen_frame + 0x228)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
    *(undefined4 *)((int)this + 0xac) = *(undefined4 *)((int)this + 0xa0);
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
    *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0xa4);
    *(undefined1 *)((int)this + 0x68) = 0;
    (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x16c)),(undefined4 *)((int)this + 0xa8));
    pfVar3 = (float *)F_00c98740(fVar5,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x44)),
                                   *(float *)((int)this + 0x88));
    pfVar4 = (float *)F_00c985b0(fVar5,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x4)),
                                   *(float *)((int)this + 0x84));
    fVar5 = pfVar3[1];
    fVar6 = *pfVar4;
    fVar8 = *pfVar3;
    fVar9 = pfVar4[4];
    fVar10 = pfVar3[2];
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar6 + (double)fVar9 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar10) + (double)pfVar4[0xc] * (double)pfVar3[3]
                      )));
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar8 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar10) + (double)pfVar4[0xd] * (double)pfVar3[3]
                      )));
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar4[2] + (double)pfVar4[6] * (double)fVar5) +
                       (double)fVar10 * (double)pfVar4[10]) +
                      (double)pfVar3[3] * (double)pfVar4[0xe])));
    fVar11 = pfVar3[6];
    fVar12 = pfVar3[4];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar8 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar10 * (double)pfVar4[0xb]) +
                      (double)pfVar3[3] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)fVar6 * (double)fVar12 + (double)fVar9 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar11) + (double)pfVar4[0xc] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar12 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar11) + (double)pfVar4[0xd] * (double)pfVar3[7]
                      )));
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)pfVar4[6] * (double)fVar5 + (double)fVar12 * (double)pfVar4[2]) +
                       (double)fVar11 * (double)pfVar4[10]) +
                      (double)pfVar3[7] * (double)pfVar4[0xe])));
    fVar8 = pfVar3[10];
    fVar10 = pfVar3[8];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar12 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar11 * (double)pfVar4[0xb]) +
                      (double)pfVar3[7] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)fVar6 * (double)fVar10 + (double)fVar9 * (double)fVar5) +
                       (double)pfVar4[8] * (double)fVar8) +
                      (double)pfVar4[0xc] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar10 + (double)pfVar4[5] * (double)fVar5) +
                       (double)pfVar4[9] * (double)fVar8) +
                      (double)pfVar4[0xd] * (double)pfVar3[0xb])));
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)pfVar4[6] * (double)fVar5 + (double)fVar10 * (double)pfVar4[2]) +
                       (double)fVar8 * (double)pfVar4[10]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xe])));
    fVar11 = pfVar3[0xe];
    fVar12 = pfVar3[0xd];
    fVar13 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar10 * (double)pfVar4[3] + (double)fVar5 * (double)pfVar4[7]) +
                       (double)fVar8 * (double)pfVar4[0xb]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xf])));
    fVar5 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)fVar6 * (double)fVar5 + (double)fVar9 * (double)fVar12) +
                       (double)pfVar4[8] * (double)fVar11) + (double)pfVar4[0xc] * (double)fVar13)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar5 + (double)pfVar4[5] * (double)fVar12) +
                       (double)pfVar4[9] * (double)fVar11) + (double)pfVar4[0xd] * (double)fVar13)));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)pfVar4[6] * (double)fVar12 + (double)fVar5 * (double)pfVar4[2]) +
                      (double)fVar11 * (double)pfVar4[10]) + (double)fVar13 * (double)pfVar4[0xe])));
    (*(float *)(gen_frame + 0x268)) = ((float)GEN_TOF(((((double)pfVar4[3] * (double)fVar5 + (double)pfVar4[7] * (double)pfVar3[0xd])
                      + (double)fVar11 * (double)pfVar4[0xb]) + (double)pfVar4[0xf] * (double)fVar13
                     )));
    pfVar3 = (float *)F_00c988c0(GEN_TOF(gen_bits2f((uint)(ulonglong)
                                                    gen_d2bits((double)fVar13 * (double)pfVar4[0xe])
                                             )),GEN_TOF(gen_bits2f((uint)(ulonglong)
                                                    gen_d2bits((double)pfVar3[0xb] *
                                                               (double)pfVar4[0xe]))),((undefined1 *)(gen_frame + 0xa0)),
                                   *(float *)((int)this + 0x8c));
    fVar5 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar10 = pfVar3[7];
    fVar11 = pfVar3[6];
    fVar12 = pfVar3[4];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x268)))));
    fVar5 = pfVar3[5];
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar6 = pfVar3[0xb];
    fVar8 = pfVar3[10];
    fVar9 = pfVar3[8];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x268)))));
    fVar5 = pfVar3[9];
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar9 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar10 = pfVar3[0xf];
    fVar11 = pfVar3[0xe];
    fVar12 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar9 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar8 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar6 * (double)(*(float *)(gen_frame + 0x268)))));
    fVar5 = pfVar3[0xd];
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    (*(float *)(gen_frame + 0x11c)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x268)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1ec)),&(*(float *)(gen_frame + 0xe0)));
    F_00c98b30(&(*(float *)(gen_frame + 0x1ac)),puVar1);
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                    (double)(*(float *)(gen_frame + 0x1f4)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b4)) + (double)(*(float *)(gen_frame + 0x1c4)) * (double)(*(float *)(gen_frame + 0x1f0))) +
                    (double)(*(float *)(gen_frame + 0x1d4)) * (double)(*(float *)(gen_frame + 0x1f4))) + (double)(*(float *)(gen_frame + 0x1e4)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1f0))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f4))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ac)) * (double)(*(float *)(gen_frame + 0x1fc)) + (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1bc))) +
                    (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b4))) +
                     (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d4))) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1e4)))));
    (*(float *)(gen_frame + 0x244)) = fVar11;
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ac)) * (double)(*(float *)(gen_frame + 0x20c)) + (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1bc))) +
                     (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b4))) +
                     (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d4))) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1e4)))));
    (*(float *)(gen_frame + 0x254)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ac)) * (double)(*(float *)(gen_frame + 0x21c)) + (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1bc))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b4))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d4))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1e4)))));
    (*(float *)(gen_frame + 0x264)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x16c)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x170)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x174)) * (double)fVar12) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x178)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x16c)) * (double)fVar6 + (double)fVar10 * (double)(*(float *)(gen_frame + 0x170))) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x174))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x178)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x170)) + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar8) +
                     (double)fVar14 * (double)(*(float *)(gen_frame + 0x174))) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x178)))));
    (*(float *)(gen_frame + 0x1f4)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x17c)) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x184)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1fc)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x180)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x184)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x200)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x180)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x204)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x190)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x18c)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x194)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x20c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x190)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x18c)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x194)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x210)) = fVar25;
    fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x190)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x18c)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x194)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x214)) = fVar26;
    *(float *)((int)this + 0xb4) = fVar18;
    *(float *)((int)this + 0xb8) = fVar19;
    *(float *)((int)this + 0xbc) = fVar20;
    *(float *)((int)this + 0xc0) = fVar21;
    *(float *)((int)this + 0xc4) = fVar22;
    *(float *)((int)this + 200) = fVar23;
    *(float *)((int)this + 0xcc) = fVar24;
    *(float *)((int)this + 0xd0) = fVar25;
    *(float *)((int)this + 0xd4) = fVar26;
    *(float *)((int)this + 0xd8) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar5) +
                 (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar15)));
    *(float *)((int)this + 0xdc) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar6) +
                 (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar16)));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar8) +
                    (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar17)));
    *(float *)((int)this + 0xe0) = fVar5;
    (*(undefined4 *)(gen_frame + 0x12c)) = *(undefined4 *)((int)this + 0xb4);
    (*(undefined4 *)(gen_frame + 0x130)) = *(undefined4 *)((int)this + 0xb8);
    (*(undefined4 *)(gen_frame + 0x134)) = *(undefined4 *)((int)this + 0xbc);
    (*(undefined4 *)(gen_frame + 0x13c)) = *(undefined4 *)((int)this + 0xc0);
    (*(undefined4 *)(gen_frame + 0x138)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *(undefined4 *)((int)this + 0xc4);
    (*(undefined4 *)(gen_frame + 0x148)) = 0;
    (*(undefined4 *)(gen_frame + 0x158)) = 0;
    (*(undefined4 *)(gen_frame + 0x144)) = *(undefined4 *)((int)this + 200);
    (*(undefined4 *)(gen_frame + 0x15c)) = *(undefined4 *)((int)this + 0xd8);
    (*(undefined4 *)(gen_frame + 0x14c)) = *(undefined4 *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x160)) = *(undefined4 *)((int)this + 0xdc);
    (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)((int)this + 0xd0);
    (*(float *)(gen_frame + 0x164)) = fVar5;
    (*(undefined4 *)(gen_frame + 0x154)) = *(undefined4 *)((int)this + 0xd4);
    (*(undefined4 *)(gen_frame + 0x168)) = REFG(float, 0x1087f04);
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x12c)));
    *(undefined4 *)((int)this + 0xe4) = (*(undefined4 *)(gen_frame + 0x12c));
    *(undefined4 *)((int)this + 0xe8) = (*(undefined4 *)(gen_frame + 0x130));
    *(undefined4 *)((int)this + 0xec) = (*(undefined4 *)(gen_frame + 0x134));
    *(undefined4 *)((int)this + 0xf0) = (*(undefined4 *)(gen_frame + 0x13c));
    *(undefined4 *)((int)this + 0xf4) = (*(undefined4 *)(gen_frame + 0x140));
    *(undefined4 *)((int)this + 0xf8) = (*(undefined4 *)(gen_frame + 0x144));
    *(undefined4 *)((int)this + 0xfc) = (*(undefined4 *)(gen_frame + 0x14c));
    *(undefined4 *)((int)this + 0x100) = (*(undefined4 *)(gen_frame + 0x150));
    *(undefined4 *)((int)this + 0x104) = (*(undefined4 *)(gen_frame + 0x154));
    *(undefined4 *)((int)this + 0x108) = (*(undefined4 *)(gen_frame + 0x15c));
    *(undefined4 *)((int)this + 0x10c) = (*(undefined4 *)(gen_frame + 0x160));
    *(float *)((int)this + 0x110) = (*(float *)(gen_frame + 0x164));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cabaf0 */
uint F_00cabaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcabaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[2])) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar1;
  }
  return (*(uint *)&gen_args[2]) & 0xffffff00;
}

/* ref: FUN_00cabb20 */
uint F_00cabb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcabb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[2])) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar1;
  }
  return (*(uint *)&gen_args[2]) & 0xffffff00;
}

/* ref: FUN_00cabb50 */
uint F_00cabb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcabb50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[1])) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2]));
    return uVar1;
  }
  return (*(uint *)&gen_args[1]) & 0xffffff00;
}

/* ref: FUN_00cabb70 */
uint F_00cabb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcabb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = ((double)GEN_TOD((*(float *)(in_ecx + 0x78) - *param_2)));
  dVar2 = ((double)GEN_TOD((*(float *)(in_ecx + 0x7c) - param_2[1])));
  dVar3 = ((double)GEN_TOD((*(float *)(in_ecx + 0x80) - param_2[2])));
  if ((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar1 * dVar1) + dVar3 * dVar3))) <
      (double)*(float *)(in_ecx + 0xa8) * (double)*(float *)(in_ecx + 0xa8)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cabc10 */
uint F_00cabc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcabc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = 0.0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,&(*(undefined4 *)(gen_frame + 0x24)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,&(*(undefined4 *)(gen_frame + 0x18)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,&(*(float *)(gen_frame + 0x30)));
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x14)) = SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x30)) * (double)(*(float *)(gen_frame + 0x30)) + (double)(*(float *)(gen_frame + 0x34)) * (double)(*(float *)(gen_frame + 0x34)))
                         + (double)(*(float *)(gen_frame + 0x38)) * (double)(*(float *)(gen_frame + 0x38))))));
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,this,&(*(undefined4 *)(gen_frame + 0x8)));
  if ((char)uVar2 == '\0') {
    iVar1 = *param_1;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x14))(param_1,this,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x30)),uVar2);
  }
  return uVar2;
}

/* ref: FUN_00cabd20 */
uint F_00cabd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcabd20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = (*(uint *)&gen_args[2]);
  if ((((*(int * PTR32 *)&gen_args[0])[0x11] & (*(uint *)&gen_args[2])) == 0) ||
     (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x74))))((*(int * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5])), (char)uVar1 == '\0'))
  {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    dVar3 = ((double)GEN_TOD(((*(float * PTR32 *)&gen_args[1])[1] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1f]))));
    fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar3 * dVar3 +
                                        ((double)GEN_TOD((*(*(float * PTR32 *)&gen_args[1]) - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1e])))) *
                                        ((double)GEN_TOD((*(*(float * PTR32 *)&gen_args[1]) - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1e]))))) +
                                       ((double)GEN_TOD(((*(float * PTR32 *)&gen_args[1])[2] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x20])))) *
                                       ((double)GEN_TOD(((*(float * PTR32 *)&gen_args[1])[2] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x20])))))))))))));
    uVar1 = 1;
    if (0.0 < fVar2) {
      fVar2 = fVar2 * ((*(float * PTR32 *)&gen_args[1])[1] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1f]));
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
    if (!(fVar2 <= (*(float *)&gen_args[3]))) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cabe60 */
uint F_00cabe60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xcabe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float * pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
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
  fVar2 = gen_bits2f(((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1));
  param_2[0xf] = fVar2;
  dVar5 = (double)(param_2[1] - gen_bits2f(param_1[0x1f]));
  dVar4 = (double)(*param_2 - gen_bits2f(param_1[0x1e]));
  dVar6 = (double)(param_2[2] - gen_bits2f(param_1[0x20]));
  fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                 ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar5 * dVar5 + dVar4 * dVar4) + dVar6 * dVar6)))))))));
  fVar8 = 0.0;
  dVar4 = 0.0;
  if (0.0 < fVar2) {
    fVar1 = (*param_2 - gen_bits2f(param_1[0x1e])) * fVar2;
    fVar9 = fVar2 * (param_2[1] - gen_bits2f(param_1[0x1f]));
    fVar2 = (param_2[2] - gen_bits2f(param_1[0x20])) * fVar2;
  }
  else {
    fVar1 = REFG(float, 0x1379700);
    fVar2 = REFG(float, 0x1379708);
    fVar9 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar1 = REFG(float, 0x1379700);
      fVar2 = REFG(float, 0x1379708);
      fVar9 = REFG(float, 0x1087f04);
    }
  }
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar9;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  fVar7 = REFG(float, 0x1087f04);
  if ((double)((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar9) & REFG(ulonglong, 0x11290a0)))) < REFG(double, 0x11294b8))
  {
    fVar7 = (float)((double)fVar9 * 0.0 - (double)fVar2);
    fVar8 = (float)((double)fVar2 * 0.0 - (double)fVar1 * 0.0);
    (*(float *)(gen_frame + 0x28)) = (float)((double)fVar1 - (double)fVar9 * 0.0);
  }
  dVar5 = ((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)fVar7 * (double)fVar7 + (double)fVar8 * (double)fVar8) +
                              (double)(*(float *)(gen_frame + 0x28)) * (double)(*(float *)(gen_frame + 0x28))))))));
  fVar2 = (float)(REFG(double, 0x1088130) / dVar5);
  if (0.0 < fVar2) {
    (*(float *)(gen_frame + 0x20)) = fVar2 * fVar7;
    (*(float *)(gen_frame + 0x24)) = fVar8 * fVar2;
    dVar4 = (double)fVar2;
    fVar8 = (float)((double)(*(float *)(gen_frame + 0x28)) * dVar4);
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
    }
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1379700);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1379704);
    fVar8 = REFG(float, 0x1379708);
  }
  (*(float *)(gen_frame + 0x28)) = fVar8;
  dVar6 = REFG(double, 0x11294b8);
  pfVar3 = (float *)F_00ca6b10(GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar4))),fVar2,GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar5))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(REFG(double, 0x11294b8)))),((undefined1 *)(gen_frame + 0x8)),
                                 &(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x20)),(float)(REFG(double, 0x10920b8) * 0.0));
  fVar2 = pfVar3[1];
  fVar8 = pfVar3[2];
  param_2[3] = *pfVar3 + *param_2;
  fVar1 = REFG(float, 0x11294b0);
  fVar8 = (float)((double)fVar8 + (double)param_2[2]);
  param_2[4] = fVar2 + param_2[1];
  param_2[5] = fVar8;
  fVar9 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar6));
  pfVar3 = (float *)F_00ca6b10(fVar2 + param_2[1],fVar8,GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits((double)param_2[2]))),fVar9,
                                 ((undefined1 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x20)),fVar1);
  fVar2 = pfVar3[1];
  fVar8 = pfVar3[2];
  param_2[6] = *param_2 + *pfVar3;
  fVar1 = REFG(float, 0x11294ac);
  fVar8 = (float)((double)fVar8 + (double)param_2[2]);
  param_2[7] = fVar2 + param_2[1];
  param_2[8] = fVar8;
  pfVar3 = (float *)F_00ca6b10(fVar2 + param_2[1],fVar8,GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits((double)param_2[2]))),fVar9,
                                 ((undefined1 *)(gen_frame + 0x8)),&(*(float *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x20)),fVar1);
  fVar2 = pfVar3[1];
  fVar8 = pfVar3[2];
  param_2[9] = *param_2 + *pfVar3;
  param_2[10] = fVar2 + param_2[1];
  param_2[0xb] = fVar8 + param_2[2];
  return (uint)pfVar3;
}

/* ref: FUN_00cac330 */
byte F_00cac330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac330u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  byte bVar2;
  
  uVar1 = (*(uint *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x78);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x7c);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x80);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((*(int *)&gen_args[0]) + 0xa8);
  bVar2 = F_00c9ae80((*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]),&(*(undefined4 *)(gen_frame + 0xc)),&(*(uint *)&gen_args[3]));
  if (bVar2 != 0) {
    F_00cabe60((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,GEN_TOF(gen_bits2f((*(uint *)&gen_args[3]))));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cac3c0 */
uint F_00cac3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcac3c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = (*(uint *)&gen_args[2]);
  if ((((*(int * PTR32 *)&gen_args[0])[0x11] & (*(uint *)&gen_args[2])) == 0) ||
     (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x68))))((*(int * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5])), (char)uVar1 == '\0'))
  {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    dVar3 = ((double)GEN_TOD(((*(float * PTR32 *)&gen_args[1])[1] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1f]))));
    fVar2 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar3 * dVar3 +
                                        ((double)GEN_TOD((*(*(float * PTR32 *)&gen_args[1]) - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1e])))) *
                                        ((double)GEN_TOD((*(*(float * PTR32 *)&gen_args[1]) - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1e]))))) +
                                       ((double)GEN_TOD(((*(float * PTR32 *)&gen_args[1])[2] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x20])))) *
                                       ((double)GEN_TOD(((*(float * PTR32 *)&gen_args[1])[2] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x20])))))))))))));
    uVar1 = 1;
    if (0.0 < fVar2) {
      fVar2 = fVar2 * ((*(float * PTR32 *)&gen_args[1])[1] - gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1f]));
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
    if (!(fVar2 <= (*(float *)&gen_args[3]))) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00cac500 */
byte F_00cac500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac500u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = (*(undefined4 *)&gen_args[3]);
  uVar1 = (*(uint *)&gen_args[2]);
  dVar4 = ((double)GEN_TOD((*(float *)((*(int *)&gen_args[0]) + 0x78) - *(float *)(*(uint *)&gen_args[2]))));
  dVar5 = ((double)GEN_TOD((*(float *)((*(int *)&gen_args[0]) + 0x7c) - *(float *)((*(uint *)&gen_args[2]) + 4))));
  dVar6 = ((double)GEN_TOD((*(float *)((*(int *)&gen_args[0]) + 0x80) - *(float *)((*(uint *)&gen_args[2]) + 8))));
  if ((double)((float)GEN_TOF(((dVar5 * dVar5 + dVar4 * dVar4) + dVar6 * dVar6))) <
      (double)*(float *)((*(int *)&gen_args[0]) + 0xa8) * (double)*(float *)((*(int *)&gen_args[0]) + 0xa8)) {
    return 0;
  }
  (*(float *)(gen_frame + 0xc)) = *(float *)((*(int *)&gen_args[0]) + 0x78);
  (*(float *)(gen_frame + 0x10)) = *(float *)((*(int *)&gen_args[0]) + 0x7c);
  (*(float *)(gen_frame + 0x14)) = *(float *)((*(int *)&gen_args[0]) + 0x80);
  (*(float *)(gen_frame + 0x18)) = *(float *)((*(uint *)&gen_args[2]) + 0xc) + *(float *)((*(int *)&gen_args[0]) + 0xa8);
  bVar3 = F_00c9ad50((*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),&(*(float *)(gen_frame + 0xc)),&(*(uint *)&gen_args[2]));
  if (bVar3 != 0) {
    F_00cabe60((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),uVar1,uVar2,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
    return 1;
  }
  return 0;
}

/* ref: FUN_00cac620 */
uint F_00cac620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcac620u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  float * pfVar2;
  code * pcVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (((*(uint *)&gen_args[2]) != 0) && ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[2])) == 0)) {
    return (*(uint *)&gen_args[2]) & 0xffffff00;
  }
  pfVar2 = ((float *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3])));
  switch((unsigned int)(uintptr_t)(pfVar2)) {
  case (float *)0x2: ;
    goto switchD_00cac64a_caseD_2;
  case (float *)0x3: ;
    uVar7 = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    uVar6 = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
    goto LAB_00cac708;
  case (float *)0x4: ;
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]))));
    if ((*((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])) & (uint)pfVar2) != (((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])))[1])
    goto switchD_00cac64a_default;
  case (float *)0x0: ;
    uVar7 = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    uVar6 = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)));
    break;
  case (float *)0x5: ;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]));
    pfVar2 = ((float *)GEN_TOP((uVar1 & *((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])))));
    if (pfVar2 != ((float *)GEN_TOP((((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])))[1]))) goto switchD_00cac64a_default;
  case (float *)0x1: ;
    uVar7 = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    uVar6 = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
    break;
  case (float *)0x6: ;
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]))));
    if ((*((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])) & (uint)pfVar2) != (((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])))[1])
    goto switchD_00cac64a_default;
    goto switchD_00cac64a_caseD_2;
  case (float *)0x7: ;
    pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]))));
    if ((((*((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])) & (uint)pfVar2) != (((uint *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[5])))[1]) ||
        (pfVar2 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))))((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[3])[1],(*(undefined4 * PTR32 *)&gen_args[3])[2]))),
        (char)pfVar2 == '\0')) || (!((*(float * PTR32 *)&gen_args[1])[0x10] <= *((float *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[3])))))
    goto switchD_00cac64a_default;
    (*(float *)(gen_frame + 0x0)) = *(*(float * PTR32 *)&gen_args[1]) - *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78)));
    (*(float *)(gen_frame + 0x4)) = (*(float * PTR32 *)&gen_args[1])[1] - *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
    (*(float *)(gen_frame + 0x8)) = (*(float * PTR32 *)&gen_args[1])[2] - *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
    F_00553ac0(&(*(float *)(gen_frame + 0x0)));
    fVar5 = gen_bits2f((*(undefined4 * PTR32 *)&gen_args[3])[4]);
    fVar4 = (*(float *)(gen_frame + 0x4));
    goto LAB_00cac67a;
  default: ;
    goto switchD_00cac64a_default;
  }
  uVar1 = (*pcVar3)((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),uVar6,uVar7);
  if ((char)uVar1 != '\0') {
    fVar4 = (*(float * PTR32 *)&gen_args[1])[0x10];
    fVar5 = *((float *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[3]));
LAB_00cac67a: ;
    if (fVar4 <= fVar5) {
      return 1;
    }
  }
  return 0;
switchD_00cac64a_caseD_2: ;
  uVar7 = (*(undefined4 * PTR32 *)&gen_args[3])[2];
  uVar6 = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  pcVar3 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)));
LAB_00cac708: ;
  pfVar2 = ((float *)GEN_TOP((*pcVar3)((*(undefined * PTR32 *)&gen_args[0]),(*(float * PTR32 *)&gen_args[1]),uVar6,uVar7)));
  if (((char)pfVar2 == '\0') || (pfVar2 = ((float *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[3])), !((*(float * PTR32 *)&gen_args[1])[0x10] <= *pfVar2))) {
switchD_00cac64a_default: ;
    return (uint)pfVar2 & 0xffffff00;
  }
  (*(float *)(gen_frame + 0x0)) = *(*(float * PTR32 *)&gen_args[1]) - *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78)));
  (*(float *)(gen_frame + 0x4)) = (*(float * PTR32 *)&gen_args[1])[1] - *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c)));
  (*(float *)(gen_frame + 0x8)) = (*(float * PTR32 *)&gen_args[1])[2] - *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
  F_00553ac0(&(*(float *)(gen_frame + 0x0)));
  fVar5 = gen_bits2f((*(undefined4 * PTR32 *)&gen_args[3])[4]);
  fVar4 = (*(float *)(gen_frame + 0x4));
  goto LAB_00cac67a;
}

/* ref: FUN_00cac890 */
uint F_00cac890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcac890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 uVar1;
  
  F_00c96ab0(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129540));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x112953c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1129538));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1129534));
  *(undefined1 *)((int)this + 0x68) = 1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x6c) = *param_3;
  *(undefined4 *)((int)this + 0x70) = param_3[1];
  *(undefined4 *)((int)this + 0x74) = param_3[2];
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = *param_4;
  *(undefined4 *)((int)this + 0x88) = param_4[1];
  *(undefined4 *)((int)this + 0x8c) = param_4[2];
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = *param_5;
  *(undefined4 *)((int)this + 0xa0) = param_5[1];
  *(undefined4 *)((int)this + 0xa4) = param_5[2];
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
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
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  return (uint)this;
}

/* ref: FUN_00caca50 */
unsigned int F_00caca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaca50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x6c) = *param_2;
  *(undefined4 *)(in_ecx + 0x70) = param_2[1];
  *(undefined4 *)(in_ecx + 0x74) = param_2[2];
  *(undefined1 *)(in_ecx + 0x68) = 1;
  return 0;
}

/* ref: FUN_00caca70 */
uint F_00caca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaca70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x78);
  param_2[1] = *(undefined4 *)(in_ecx + 0x7c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x80);
  return (uint)param_2;
}

/* ref: FUN_00caca90 */
unsigned int F_00caca90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaca90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x84) = *param_2;
  *(undefined4 *)(in_ecx + 0x88) = param_2[1];
  *(undefined4 *)(in_ecx + 0x8c) = param_2[2];
  *(undefined1 *)(in_ecx + 0x68) = 1;
  return 0;
}

/* ref: FUN_00cacac0 */
uint F_00cacac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacac0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x90);
  param_2[1] = *(undefined4 *)(in_ecx + 0x94);
  param_2[2] = *(undefined4 *)(in_ecx + 0x98);
  return (uint)param_2;
}

/* ref: FUN_00cacaf0 */
unsigned int F_00cacaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacaf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x9c) = *param_2;
  *(undefined4 *)(in_ecx + 0xa0) = param_2[1];
  *(undefined4 *)(in_ecx + 0xa4) = param_2[2];
  *(undefined1 *)(in_ecx + 0x68) = 1;
  return 0;
}

/* ref: FUN_00cacb20 */
uint F_00cacb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xa8);
  param_2[1] = *(undefined4 *)(in_ecx + 0xac);
  param_2[2] = *(undefined4 *)(in_ecx + 0xb0);
  return (uint)param_2;
}

/* ref: FUN_00cacb50 */
unsigned int F_00cacb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xe8);
  uVar2 = *(undefined4 *)(in_ecx + 0xec);
  *param_2 = *(undefined4 *)(in_ecx + 0xe4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0xf0);
  uVar2 = *(undefined4 *)(in_ecx + 0xf4);
  uVar3 = *(undefined4 *)(in_ecx + 0xf8);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xfc);
  uVar2 = *(undefined4 *)(in_ecx + 0x100);
  uVar3 = *(undefined4 *)(in_ecx + 0x104);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x10c);
  uVar2 = *(undefined4 *)(in_ecx + 0x110);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0x108);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cacc20 */
uint F_00cacc20(void)
{
  GEN_ENTER(0xcacc20u, 0u, 0u, 0u, 0u);
  return 5;
}

/* ref: FUN_00cacc30 */
uint F_00cacc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcacc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00cacc70 */
uint F_00cacc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cacca0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00cacc80 */
uint F_00cacc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cacca0((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00cacc90 */
uint F_00cacc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cacca0((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00cacca0 */
uint F_00cacca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129540));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x112953c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1129538));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1129534));
  F_00c96c00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00caccf0 */
uint F_00caccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaccf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cacd20 */
unsigned int F_00cacd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,((undefined1 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  F_00c9bd20(param_1,((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x44)));
  return 0;
}

/* ref: FUN_00cacda0 */
uint F_00cacda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 200);
  param_2[1] = *(undefined4 *)(in_ecx + 0xcc);
  param_2[2] = *(undefined4 *)(in_ecx + 0xd0);
  return (uint)param_2;
}

/* ref: FUN_00cacdd0 */
uint F_00cacdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacdd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x80);
  param_2[1] = *(undefined4 *)(in_ecx + 0x84);
  param_2[2] = *(undefined4 *)(in_ecx + 0x88);
  return (uint)param_2;
}

/* ref: FUN_00cace00 */
unsigned int F_00cace00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcace00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_2 = SQRT(((float)GEN_TOF((((double)*(float *)(in_ecx + 0xa4) * (double)*(float *)(in_ecx + 0xa4) +
                          (double)*(float *)(in_ecx + 0xa8) * (double)*(float *)(in_ecx + 0xa8)) +
                         (double)*(float *)(in_ecx + 0xac) * (double)*(float *)(in_ecx + 0xac)))));
  param_2[1] = SQRT(((float)GEN_TOF((((double)*(float *)(in_ecx + 0xb0) * (double)*(float *)(in_ecx + 0xb0) +
                            (double)*(float *)(in_ecx + 0xb4) * (double)*(float *)(in_ecx + 0xb4)) +
                           (double)*(float *)(in_ecx + 0xb8) * (double)*(float *)(in_ecx + 0xb8)))));
  param_2[2] = SQRT(((float)GEN_TOF((((double)*(float *)(in_ecx + 0xbc) * (double)*(float *)(in_ecx + 0xbc) +
                            (double)*(float *)(in_ecx + 0xc0) * (double)*(float *)(in_ecx + 0xc0)) +
                           (double)*(float *)(in_ecx + 0xc4) * (double)*(float *)(in_ecx + 0xc4)))));
  return 0;
}

/* ref: FUN_00cacef0 */
unsigned int F_00cacef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcacef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xa8);
  uVar2 = *(undefined4 *)(in_ecx + 0xac);
  *param_2 = *(undefined4 *)(in_ecx + 0xa4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0xb0);
  uVar2 = *(undefined4 *)(in_ecx + 0xb4);
  uVar3 = *(undefined4 *)(in_ecx + 0xb8);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xbc);
  uVar2 = *(undefined4 *)(in_ecx + 0xc0);
  uVar3 = *(undefined4 *)(in_ecx + 0xc4);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xcc);
  uVar2 = *(undefined4 *)(in_ecx + 0xd0);
  param_2[0xc] = *(undefined4 *)(in_ecx + 200);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cacfc0 */
byte F_00cacfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcacfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  uint uVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float in_XMM2_Da = 0;
  float fVar7;
  float in_XMM3_Da = 0;
  float fVar8;
  double dVar9;
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
  float in_XMM7_Da = 0;
  
  if (*(char *)((int)this + 0x104) != '\0') {
    (*(float *)(gen_frame + 0x120)) = *(float *)((int)this + 0x68) - *(float *)((int)this + 0x74);
    (*(float *)(gen_frame + 0x124)) = *(float *)((int)this + 0x6c) - *(float *)((int)this + 0x78);
    dVar6 = (double)*(float *)((int)this + 0x7c);
    (*(float *)(gen_frame + 0x128)) = ((float)GEN_TOF(((double)*(float *)((int)this + 0x70) - dVar6)));
    uVar1 = F_00c9da90(((undefined1 *)(gen_frame + 0x84)),(uint)this,(int)this + 0x74U,(uint)&(*(float *)(gen_frame + 0x120)),(int)this + 0x8c,
                         (int)this + 0x80);
    fVar4 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar6));
    *(undefined4 *)((int)this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x40) + 4)));
    F_00c9f060((undefined *)((int)this + 0x58),uVar1);
    *(undefined4 *)((int)this + 0x74U) = *(undefined4 *)((int)this + 0x68);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0x70);
    (*(float *)(gen_frame + 0x178)) = 0.0;
    *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x80);
    (*(float *)(gen_frame + 0x188)) = 0.0;
    (*(float *)(gen_frame + 0x198)) = 0.0;
    *(undefined4 *)((int)this + 0x90) = *(undefined4 *)((int)this + 0x84);
    (*(float *)(gen_frame + 0x1a8)) = 0.0;
    (*(float *)(gen_frame + 0x1f8)) = 0.0;
    *(undefined4 *)((int)this + 0x94) = *(undefined4 *)((int)this + 0x88);
    *(undefined1 *)((int)this + 0x104) = 0;
    (*(float *)(gen_frame + 0x208)) = 0.0;
    (*(float *)(gen_frame + 0x218)) = 0.0;
    (*(float *)(gen_frame + 0x228)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1d8)) = 0;
    (*(undefined4 *)(gen_frame + 0x1e8)) = 0;
    F_00c98a60(&(*(float *)(gen_frame + 0x16c)),(int)this + 0x98);
    F_00c98b30(&(*(float *)(gen_frame + 0x1ac)),(undefined4 *)((int)this + 0x68));
    pfVar2 = (float *)F_00c98740(fVar4,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x44)),
                                   *(float *)((int)this + 0x84));
    pfVar3 = (float *)F_00c988c0(in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x4)),*(float *)((int)this + 0x88));
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar7 = *pfVar3;
    fVar8 = pfVar3[4];
    fVar10 = pfVar2[2];
    (*(float *)(gen_frame + 0x22c)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar4 + (double)fVar8 * (double)fVar5) +
                       (double)pfVar3[8] * (double)fVar10) + (double)pfVar3[0xc] * (double)pfVar2[3]
                      )));
    (*(float *)(gen_frame + 0x230)) = ((float)GEN_TOF(((((double)pfVar3[1] * (double)fVar4 + (double)pfVar3[5] * (double)fVar5) +
                       (double)pfVar3[9] * (double)fVar10) + (double)pfVar3[0xd] * (double)pfVar2[3]
                      )));
    (*(float *)(gen_frame + 0x234)) = ((float)GEN_TOF(((((double)pfVar3[2] * (double)fVar4 + (double)pfVar3[6] * (double)fVar5) +
                       (double)pfVar3[10] * (double)fVar10) +
                      (double)pfVar3[0xe] * (double)pfVar2[3])));
    fVar11 = pfVar2[6];
    fVar12 = pfVar2[4];
    (*(float *)(gen_frame + 0x238)) = ((float)GEN_TOF(((((double)fVar4 * (double)pfVar3[3] + (double)fVar5 * (double)pfVar3[7]) +
                       (double)fVar10 * (double)pfVar3[0xb]) +
                      (double)pfVar2[3] * (double)pfVar3[0xf])));
    fVar4 = pfVar2[5];
    (*(float *)(gen_frame + 0x23c)) = ((float)GEN_TOF(((((double)fVar8 * (double)fVar4 + (double)fVar7 * (double)fVar12) +
                       (double)pfVar3[8] * (double)fVar11) + (double)pfVar3[0xc] * (double)pfVar2[7]
                      )));
    (*(float *)(gen_frame + 0x240)) = ((float)GEN_TOF(((((double)pfVar3[1] * (double)fVar12 + (double)pfVar3[5] * (double)fVar4) +
                       (double)pfVar3[9] * (double)fVar11) + (double)pfVar3[0xd] * (double)pfVar2[7]
                      )));
    (*(float *)(gen_frame + 0x244)) = ((float)GEN_TOF(((((double)pfVar3[2] * (double)fVar12 + (double)pfVar3[6] * (double)fVar4) +
                       (double)pfVar3[10] * (double)fVar11) +
                      (double)pfVar3[0xe] * (double)pfVar2[7])));
    fVar5 = pfVar2[10];
    fVar10 = pfVar2[8];
    (*(float *)(gen_frame + 0x248)) = ((float)GEN_TOF(((((double)fVar12 * (double)pfVar3[3] + (double)fVar4 * (double)pfVar3[7]) +
                       (double)fVar11 * (double)pfVar3[0xb]) +
                      (double)pfVar2[7] * (double)pfVar3[0xf])));
    fVar4 = pfVar2[9];
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar10 + (double)fVar8 * (double)fVar4) +
                       (double)pfVar3[8] * (double)fVar5) +
                      (double)pfVar3[0xc] * (double)pfVar2[0xb])));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar3[1] * (double)fVar10 + (double)pfVar3[5] * (double)fVar4) +
                       (double)pfVar3[9] * (double)fVar5) +
                      (double)pfVar3[0xd] * (double)pfVar2[0xb])));
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)pfVar3[2] * (double)fVar10 + (double)pfVar3[6] * (double)fVar4) +
                       (double)pfVar3[10] * (double)fVar5) +
                      (double)pfVar3[0xe] * (double)pfVar2[0xb])));
    fVar11 = pfVar2[0xe];
    fVar12 = pfVar2[0xd];
    fVar13 = pfVar2[0xf];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)fVar10 * (double)pfVar3[3] + (double)fVar4 * (double)pfVar3[7]) +
                       (double)fVar5 * (double)pfVar3[0xb]) +
                      (double)pfVar2[0xb] * (double)pfVar3[0xf])));
    fVar4 = pfVar2[0xc];
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)fVar7 * (double)fVar4 + (double)fVar8 * (double)fVar12) +
                       (double)pfVar3[8] * (double)fVar11) + (double)pfVar3[0xc] * (double)fVar13)));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)pfVar3[1] * (double)fVar4 + (double)pfVar3[5] * (double)fVar12) +
                       (double)pfVar3[9] * (double)fVar11) + (double)pfVar3[0xd] * (double)fVar13)));
    dVar9 = (((double)pfVar3[2] * (double)fVar4 + (double)pfVar3[6] * (double)fVar12) +
            (double)pfVar3[10] * (double)fVar11) + (double)pfVar3[0xe] * (double)fVar13;
    (*(float *)(gen_frame + 0x264)) = (float)dVar9;
    dVar6 = (((double)pfVar2[0xd] * (double)pfVar3[7] + (double)pfVar3[3] * (double)fVar4) +
            (double)pfVar3[0xb] * (double)fVar11) + (double)fVar13 * (double)pfVar3[0xf];
    (*(float *)(gen_frame + 0x268)) = (float)dVar6;
    pfVar2 = (float *)F_00c985b0(GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar6))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits((double)pfVar3[0xf]))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar9))),GEN_TOF(gen_bits2f((uint)(ulonglong)
                                                    gen_d2bits((double)pfVar3[0xe] *
                                                               (double)pfVar2[0xb]))),((undefined1 *)(gen_frame + 0xa0)),
                                   *(float *)((int)this + 0x80));
    fVar4 = *pfVar2;
    fVar5 = pfVar2[1];
    fVar7 = pfVar2[2];
    fVar8 = pfVar2[3];
    (*(float *)(gen_frame + 0xe0)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xe4)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar4 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0xe8)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar4 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar10 = pfVar2[7];
    fVar11 = pfVar2[6];
    fVar12 = pfVar2[4];
    (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar4 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x268)))));
    fVar4 = pfVar2[5];
    (*(float *)(gen_frame + 0xf0)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar4 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar5 = pfVar2[0xb];
    fVar7 = pfVar2[10];
    fVar8 = pfVar2[8];
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x268)))));
    fVar4 = pfVar2[9];
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar8 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar4 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x264)))));
    fVar10 = pfVar2[0xf];
    fVar11 = pfVar2[0xe];
    fVar12 = pfVar2[0xc];
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar8 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar7 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar5 * (double)(*(float *)(gen_frame + 0x268)))));
    fVar4 = pfVar2[0xd];
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar12 * (double)(*(float *)(gen_frame + 0x22c)) + (double)fVar4 * (double)(*(float *)(gen_frame + 0x23c))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x25c)))));
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x240)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x230))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x260)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x244)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x234))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x264)))));
    (*(float *)(gen_frame + 0x11c)) = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x248)) + (double)fVar12 * (double)(*(float *)(gen_frame + 0x238))) +
                        (double)fVar11 * (double)(*(float *)(gen_frame + 0x258))) + (double)fVar10 * (double)(*(float *)(gen_frame + 0x268)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x1ec)),&(*(float *)(gen_frame + 0xe0)));
    fVar4 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x1bc)) + (double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1ac))) +
                    (double)(*(float *)(gen_frame + 0x1f4)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x1dc)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b4)) + (double)(*(float *)(gen_frame + 0x1c4)) * (double)(*(float *)(gen_frame + 0x1f0))) +
                    (double)(*(float *)(gen_frame + 0x1d4)) * (double)(*(float *)(gen_frame + 0x1f4))) + (double)(*(float *)(gen_frame + 0x1e4)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    fVar5 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ec)) * (double)(*(float *)(gen_frame + 0x1b0)) + (double)(*(float *)(gen_frame + 0x1c0)) * (double)(*(float *)(gen_frame + 0x1f0))) +
                    (double)(*(float *)(gen_frame + 0x1d0)) * (double)(*(float *)(gen_frame + 0x1f4))) + (double)(*(float *)(gen_frame + 0x1e0)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ac)) * (double)(*(float *)(gen_frame + 0x1fc)) + (double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1bc))) +
                    (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b4))) +
                     (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d4))) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1e4)))));
    (*(float *)(gen_frame + 0x244)) = fVar11;
    fVar10 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x200)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x1fc)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x204)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x208)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ac)) * (double)(*(float *)(gen_frame + 0x20c)) + (double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1bc))) +
                     (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x24c)) = fVar12;
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x250)) = fVar13;
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1b4))) +
                     (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1d4))) + (double)(*(float *)(gen_frame + 0x218)) * (double)(*(float *)(gen_frame + 0x1e4)))));
    (*(float *)(gen_frame + 0x254)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1ac)) * (double)(*(float *)(gen_frame + 0x21c)) + (double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1bc))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1cc))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1dc)))));
    (*(float *)(gen_frame + 0x25c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c0)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b0))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d0))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1e0)))));
    (*(float *)(gen_frame + 0x260)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1b4))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1d4))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1e4)))));
    (*(float *)(gen_frame + 0x264)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x16c)) * (double)fVar4 + (double)(*(float *)(gen_frame + 0x170)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x174)) * (double)fVar12) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x178)))));
    (*(float *)(gen_frame + 0x1ec)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)fVar10 * (double)(*(float *)(gen_frame + 0x170)) + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar5) +
                     (double)fVar13 * (double)(*(float *)(gen_frame + 0x174))) + (double)fVar16 * (double)(*(float *)(gen_frame + 0x178)))));
    (*(float *)(gen_frame + 0x1f0)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)fVar11 * (double)(*(float *)(gen_frame + 0x170)) + (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar7) +
                     (double)fVar14 * (double)(*(float *)(gen_frame + 0x174))) + (double)fVar17 * (double)(*(float *)(gen_frame + 0x178)))));
    (*(float *)(gen_frame + 0x1f4)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)fVar4 * (double)(*(float *)(gen_frame + 0x17c)) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar8) +
                     (double)(*(float *)(gen_frame + 0x184)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x1fc)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x180)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x184)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x200)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x180)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x184)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x204)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x190)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x18c)) * (double)fVar4) +
                     (double)(*(float *)(gen_frame + 0x194)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar15)));
    (*(float *)(gen_frame + 0x20c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x190)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x18c)) * (double)fVar5) +
                     (double)(*(float *)(gen_frame + 0x194)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar16)));
    (*(float *)(gen_frame + 0x210)) = fVar25;
    fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x190)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x18c)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x194)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x198)) * (double)fVar17)));
    (*(float *)(gen_frame + 0x214)) = fVar26;
    *(float *)((int)this + 0xa4) = fVar18;
    *(float *)((int)this + 0xa8) = fVar19;
    *(float *)((int)this + 0xac) = fVar20;
    *(float *)((int)this + 0xb0) = fVar21;
    *(float *)((int)this + 0xb4) = fVar22;
    *(float *)((int)this + 0xb8) = fVar23;
    *(float *)((int)this + 0xbc) = fVar24;
    *(float *)((int)this + 0xc0) = fVar25;
    *(float *)((int)this + 0xc4) = fVar26;
    *(float *)((int)this + 200) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar8 + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar4) +
                 (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar15)));
    *(float *)((int)this + 0xcc) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar10 + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar5) +
                 (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar13) + (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar16)));
    fVar4 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar7) +
                    (double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14) + (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar17)));
    *(float *)((int)this + 0xd0) = fVar4;
    (*(undefined4 *)(gen_frame + 0x12c)) = *(undefined4 *)((int)this + 0xa4);
    (*(undefined4 *)(gen_frame + 0x130)) = *(undefined4 *)((int)this + 0xa8);
    (*(undefined4 *)(gen_frame + 0x134)) = *(undefined4 *)((int)this + 0xac);
    (*(undefined4 *)(gen_frame + 0x13c)) = *(undefined4 *)((int)this + 0xb0);
    (*(undefined4 *)(gen_frame + 0x138)) = 0;
    (*(undefined4 *)(gen_frame + 0x140)) = *(undefined4 *)((int)this + 0xb4);
    (*(undefined4 *)(gen_frame + 0x148)) = 0;
    (*(undefined4 *)(gen_frame + 0x158)) = 0;
    (*(undefined4 *)(gen_frame + 0x144)) = *(undefined4 *)((int)this + 0xb8);
    (*(undefined4 *)(gen_frame + 0x15c)) = *(undefined4 *)((int)this + 200);
    (*(undefined4 *)(gen_frame + 0x14c)) = *(undefined4 *)((int)this + 0xbc);
    (*(undefined4 *)(gen_frame + 0x160)) = *(undefined4 *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)((int)this + 0xc0);
    (*(float *)(gen_frame + 0x164)) = fVar4;
    (*(undefined4 *)(gen_frame + 0x154)) = *(undefined4 *)((int)this + 0xc4);
    (*(undefined4 *)(gen_frame + 0x168)) = REFG(float, 0x1087f04);
    F_00c98ca0(&(*(undefined4 *)(gen_frame + 0x12c)));
    *(undefined4 *)((int)this + 0xd4) = (*(undefined4 *)(gen_frame + 0x12c));
    *(undefined4 *)((int)this + 0xd8) = (*(undefined4 *)(gen_frame + 0x130));
    *(undefined4 *)((int)this + 0xdc) = (*(undefined4 *)(gen_frame + 0x134));
    *(undefined4 *)((int)this + 0xe0) = (*(undefined4 *)(gen_frame + 0x13c));
    *(undefined4 *)((int)this + 0xe4) = (*(undefined4 *)(gen_frame + 0x140));
    *(undefined4 *)((int)this + 0xe8) = (*(undefined4 *)(gen_frame + 0x144));
    *(undefined4 *)((int)this + 0xec) = (*(undefined4 *)(gen_frame + 0x14c));
    *(undefined4 *)((int)this + 0xf0) = (*(undefined4 *)(gen_frame + 0x150));
    *(undefined4 *)((int)this + 0xf4) = (*(undefined4 *)(gen_frame + 0x154));
    *(undefined4 *)((int)this + 0xf8) = (*(undefined4 *)(gen_frame + 0x15c));
    *(undefined4 *)((int)this + 0xfc) = (*(undefined4 *)(gen_frame + 0x160));
    *(float *)((int)this + 0x100) = (*(float *)(gen_frame + 0x164));
    F_00ca11f0(*(undefined * PTR32 *)((int)this + 0x34),this);
    return 1;
  }
  return 0;
}

/* ref: FUN_00cae8e0 */
byte F_00cae8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcae8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
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
  ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1,((byte *)(gen_frame + 0x0)));
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
     (uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))((*(int * PTR32 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x64)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x58))),
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
      (uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x70)) + 4))((*(int * PTR32 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x64)),&(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x40))), fVar3 = (*(float *)(gen_frame + 0x74))
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
  fVar3 = gen_bits2f(((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1));
  param_2[0xf] = fVar3;
  return 1;
}

/* ref: FUN_00caf050 */
uint F_00caf050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcaf050u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[2])) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar1;
  }
  return (*(uint *)&gen_args[2]) & 0xffffff00;
}

/* ref: FUN_00caf080 */
undefined1 F_00caf080(void)
{
  GEN_ENTER(0xcaf080u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00caf090 */
uint F_00caf090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcaf090u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  
  if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[2])) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
    return uVar1;
  }
  return (*(uint *)&gen_args[2]) & 0xffffff00;
}

/* ref: FUN_00caf0d0 */
undefined1 F_00caf0d0(void)
{
  GEN_ENTER(0xcaf0d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00caf0f0 */
byte F_00caf0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcaf0f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00caf100 */
byte F_00caf100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaf100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00caf110 */
uint F_00caf110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcaf110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,&(*(undefined4 *)(gen_frame + 0x24)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,&(*(undefined4 *)(gen_frame + 0x18)));
  ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,&(*(float *)(gen_frame + 0x30)));
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((double)GEN_TOD(SQRT(((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x30)) * (double)(*(float *)(gen_frame + 0x30)) +
                                          (double)(*(float *)(gen_frame + 0x34)) * (double)(*(float *)(gen_frame + 0x34))) + 0.0)))))) * REFG(double, 0x1088108))))
  ;
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,this,&(*(undefined4 *)(gen_frame + 0x8)));
  if ((char)uVar2 == '\0') {
    iVar1 = *param_1;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x18))(param_1,this,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0x30)),uVar2);
  }
  return uVar2;
}

/* ref: FUN_00caf230 */
byte F_00caf230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcaf230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  byte bVar1;
  uint uVar2;
  float fVar3;
  
  (*(int * PTR32 *)(gen_frame + 0x68)) = this;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  ((code *)*(gen_code32 *)(*param_1 + 0x3c))(param_1,&(*(float *)(gen_frame + 0x10)));
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
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1090998);
  (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1090998);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x28)) * (double)REFG(float, 0x15d76f4) +
                      (double)(*(float *)(gen_frame + 0x18)) * (double)REFG(float, 0x15d76f0)) +
                     (double)(*(float *)(gen_frame + 0x38)) * (double)REFG(float, 0x15d76f8)) + (double)(*(float *)(gen_frame + 0x48)))));
  (*(float *)(gen_frame + 0x5c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x28)) * (double)REFG(float, 0x15d7700) +
                      (double)(*(float *)(gen_frame + 0x18)) * (double)REFG(float, 0x15d76fc)) +
                     (double)(*(float *)(gen_frame + 0x38)) * (double)REFG(float, 0x15d7704)) + (double)(*(float *)(gen_frame + 0x48)))));
  (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x28)) * (double)REFG(float, 0x15d770c) +
                      (double)(*(float *)(gen_frame + 0x18)) * (double)REFG(float, 0x15d7708)) +
                     (double)(*(float *)(gen_frame + 0x38)) * (double)REFG(float, 0x15d7710)) + (double)(*(float *)(gen_frame + 0x48)))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x10)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x30)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x24)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x14)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x34)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x28)) * (double)REFG(float, 0x15d7718) +
                      (double)(*(float *)(gen_frame + 0x18)) * (double)REFG(float, 0x15d7714)) +
                     (double)(*(float *)(gen_frame + 0x38)) * (double)REFG(float, 0x15d771c)) + (double)(*(float *)(gen_frame + 0x48)))));
  bVar1 = F_00553ba0((uint)param_3,param_4,(uint)&(*(float *)(gen_frame + 0x6c)),(uint)&(*(float *)(gen_frame + 0x5c)),&(*(float *)(gen_frame + 0x78)),&(*(undefined4 *)(gen_frame + 0x4)),
                       &(*(float *)(gen_frame + 0x88)));
  if ((((bVar1 != 0) &&
       ((!GEN_ISNAN((*(float *)(gen_frame + 0x88))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x88)) < *(float *)&REFG(undefined, 0x1088114))))
      && ((double)(*(float *)(gen_frame + 0x88)) < REFG(double, 0x10909a0))) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x68)) + 4))((*(int * PTR32 *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x6c)),&(*(float *)(gen_frame + 0x5c)),&(*(float *)(gen_frame + 0x78))),
     (char)uVar2 != '\0')) {
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x88));
    param_2[3] = (*(float *)(gen_frame + 0x6c));
    param_2[4] = (*(float *)(gen_frame + 0x70));
    param_2[5] = (*(float *)(gen_frame + 0x74));
    param_2[6] = (*(float *)(gen_frame + 0x5c));
    param_2[7] = (*(float *)(gen_frame + 0x60));
    param_2[8] = (*(float *)(gen_frame + 0x64));
    param_2[9] = (*(float *)(gen_frame + 0x78));
    param_2[10] = (*(float *)(gen_frame + 0x7c));
    param_2[0xb] = (*(float *)(gen_frame + 0x80));
  }
  (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x84));
  bVar1 = F_00553ba0((uint)param_3,param_4,(uint)&(*(float *)(gen_frame + 0x6c)),(uint)&(*(float *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x4)),
                       &(*(float *)(gen_frame + 0x88)));
  fVar3 = (*(float *)(gen_frame + 0x84));
  if (((bVar1 != 0) &&
      ((!GEN_ISNAN((*(float *)(gen_frame + 0x88))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x88)) < *(float *)&REFG(undefined, 0x1088114)))) &&
     (((*(float *)(gen_frame + 0x88)) < (*(float *)(gen_frame + 0x84)) &&
      (uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x68)) + 4))((*(int * PTR32 *)(gen_frame + 0x68)),&(*(float *)(gen_frame + 0x6c)),&(*(float *)(gen_frame + 0x78)),&(*(float *)(gen_frame + 0x50))), fVar3 = (*(float *)(gen_frame + 0x84))
      , (char)uVar2 != '\0')))) {
    param_2[3] = (*(float *)(gen_frame + 0x6c));
    param_2[4] = (*(float *)(gen_frame + 0x70));
    param_2[5] = (*(float *)(gen_frame + 0x74));
    param_2[6] = (*(float *)(gen_frame + 0x78));
    param_2[7] = (*(float *)(gen_frame + 0x7c));
    param_2[8] = (*(float *)(gen_frame + 0x80));
    param_2[9] = (*(float *)(gen_frame + 0x50));
    param_2[10] = (*(float *)(gen_frame + 0x54));
    param_2[0xb] = (*(float *)(gen_frame + 0x58));
    fVar3 = (*(float *)(gen_frame + 0x88));
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
  fVar3 = gen_bits2f(((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1));
  param_2[0xf] = fVar3;
  return 1;
}

/* ref: FUN_00caf9d0 */
uint F_00caf9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcaf9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
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
  return (uint)((!GEN_ISNAN(*(float *)((int)this + 4)) && !GEN_ISNAN(fVar5)) &&
               !(*(float *)((int)this + 4) < fVar5));
}

/* ref: FUN_00cafba0 */
uint F_00cafba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcafba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x11295c4));
  bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00cafbd0 */
uint F_00cafbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcafbd0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*(uint *)((*(int *)&gen_args[0]) + 0x44) & (*(uint *)&gen_args[2])) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[2])REFP(0x11295cc));
    (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[3]);
    bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
    return CONCAT31(extraout_var,bVar1);
  }
  return (*(uint *)&gen_args[2]) & 0xffffff00;
}

/* ref: FUN_00cafc20 */
uint F_00cafc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcafc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
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
  return (uint)((!GEN_ISNAN(*(float *)((int)this + 4)) && !GEN_ISNAN(fVar5)) &&
               !(*(float *)((int)this + 4) < fVar5));
}

/* ref: FUN_00cafdf0 */
uint F_00cafdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcafdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x11295d4));
  bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),this,param_1,param_2,param_3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00cafe20 */
uint F_00cafe20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcafe20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined3 extraout_var_00 = 0;
  
  if (((*(uint *)&gen_args[2]) != 0) && ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) & (*(uint *)&gen_args[2])) == 0)) {
    return (*(uint *)&gen_args[2]) & 0xffffff00;
  }
  uVar2 = *(*(uint * PTR32 *)&gen_args[3]);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    goto switchD_00cafe4d_caseD_0;
  case 4: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]));
    if ((*((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])) & uVar2) != (((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])))[1]) goto switchD_00cafe4d_default;
switchD_00cafe4d_caseD_0: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[3])[1],(*(uint * PTR32 *)&gen_args[3])[2]);
    return uVar2;
  case 5: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]));
    if ((*((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])) & uVar2) != (((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])))[1]) goto switchD_00cafe4d_default;
  case 1: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[3])[1],(*(uint * PTR32 *)&gen_args[3])[2]);
    return uVar2;
  case 6: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]));
    uVar2 = uVar2 & *((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5]));
    if (uVar2 != (((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])))[1]) goto switchD_00cafe4d_default;
  case 2: ;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[2])REFP(0x11295dc));
    (*(uint *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[3])[4];
    bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[3])[1],(*(uint * PTR32 *)&gen_args[3])[2]);
    return CONCAT31(extraout_var,bVar1);
  case 7: ;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]));
    if ((*((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])) & uVar2) != (((uint *)GEN_TOP((*(uint * PTR32 *)&gen_args[3])[5])))[1]) goto switchD_00cafe4d_default;
  case 3: ;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[2])REFP(0x11295dc));
    (*(uint *)(gen_frame + 0x8)) = (*(uint * PTR32 *)&gen_args[3])[4];
    bVar1 = F_00caf230(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[3])[1],(*(uint * PTR32 *)&gen_args[3])[2]);
    return CONCAT31(extraout_var_00,bVar1);
  default: ;
switchD_00cafe4d_default: ;
    return uVar2 & 0xffffff00;
  }
}

/* ref: FUN_00caff70 */
uint F_00caff70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcaff70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
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
  return (uint)((!GEN_ISNAN(*(float *)((int)this + 4)) && !GEN_ISNAN(fVar5)) &&
               !(*(float *)((int)this + 4) < fVar5));
}

/* ref: FUN_00cb0140 */
uint F_00cb0140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb0140u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((*(uint *)((*(int *)&gen_args[0]) + 0x44) & (*(uint *)&gen_args[2])) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[2])REFP(0x11295e4));
    (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[3]);
    bVar1 = F_00cae8e0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)),(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
    return CONCAT31(extraout_var,bVar1);
  }
  return (*(uint *)&gen_args[2]) & 0xffffff00;
}

/* ref: FUN_00cb0190 */
uint F_00cb0190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb0190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  F_00c96ab0(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x11295f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x11295f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x11295f0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x11295ec));
  *(undefined4 *)((int)this + 0x68) = *param_3;
  *(undefined4 *)((int)this + 0x6c) = param_3[1];
  *(undefined4 *)((int)this + 0x70) = param_3[2];
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = *param_4;
  *(undefined4 *)((int)this + 0x84) = param_4[1];
  *(undefined4 *)((int)this + 0x88) = param_4[2];
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = *param_5;
  *(undefined4 *)((int)this + 0x9c) = param_5[1];
  *(undefined4 *)((int)this + 0xa0) = param_5[2];
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
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined1 *)((int)this + 0x104) = 1;
  return (uint)this;
}

/* ref: FUN_00cb0370 */
uint F_00cb0370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb03b0 */
uint F_00cb03b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb03b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb0400 */
uint F_00cb0400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb0440 */
uint F_00cb0440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb0470 */
uint F_00cb0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11295bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb04a0 */
unsigned int F_00cb04a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb04a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x68) = *param_2;
  *(undefined4 *)(in_ecx + 0x6c) = param_2[1];
  *(undefined4 *)(in_ecx + 0x70) = param_2[2];
  *(undefined1 *)(in_ecx + 0x104) = 1;
  return 0;
}

/* ref: FUN_00cb04d0 */
unsigned int F_00cb04d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb04d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x80) = *param_2;
  *(undefined4 *)(in_ecx + 0x84) = param_2[1];
  *(undefined4 *)(in_ecx + 0x88) = param_2[2];
  *(undefined1 *)(in_ecx + 0x104) = 1;
  return 0;
}

/* ref: FUN_00cb0500 */
unsigned int F_00cb0500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x98) = *param_2;
  *(undefined4 *)(in_ecx + 0x9c) = param_2[1];
  *(undefined4 *)(in_ecx + 0xa0) = param_2[2];
  *(undefined1 *)(in_ecx + 0x104) = 1;
  return 0;
}

/* ref: FUN_00cb0530 */
unsigned int F_00cb0530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xd8);
  uVar2 = *(undefined4 *)(in_ecx + 0xdc);
  *param_2 = *(undefined4 *)(in_ecx + 0xd4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0xe0);
  uVar2 = *(undefined4 *)(in_ecx + 0xe4);
  uVar3 = *(undefined4 *)(in_ecx + 0xe8);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xec);
  uVar2 = *(undefined4 *)(in_ecx + 0xf0);
  uVar3 = *(undefined4 *)(in_ecx + 0xf4);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xfc);
  uVar2 = *(undefined4 *)(in_ecx + 0x100);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0xf8);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00cb0600 */
uint F_00cb0600(void)
{
  GEN_ENTER(0xcb0600u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: FUN_00cb0610 */
uint F_00cb0610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb0610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if ((*param_3 & uVar1) == param_3[1]) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this,param_1,param_2,param_4,param_5);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00cb0650 */
uint F_00cb0650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb0680((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00cb0660 */
uint F_00cb0660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb0680((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00cb0670 */
uint F_00cb0670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb0680((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00cb0680 */
uint F_00cb0680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x11295f8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x11295f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x11295f0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x11295ec));
  F_00c96c00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb06f0 */
uint F_00cb06f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb06f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0710 */
uint F_00cb0710(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0740 */
float10 F_00cb0740(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((ushort)param_1 == 0) {
    return (float10)0;
  }
  return ((float10)GEN_TOD(gen_bits2f(((param_1 & 0x8000) * 8 | param_1 & 0x3ff) << 0xd |
                             (((ushort)param_1 >> 10 & 0x1f) + 0x70) * 0x800000)));
}

/* ref: FUN_00cb0790 */
ushort F_00cb0790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((ushort *)GEN_TOP((*(int *)(in_ecx + 0x24) + 4 + param_2 * 6)));
}

/* ref: FUN_00cb07c0 */
uint F_00cb07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb07c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x134c214) = param_1;
  return param_1;
}

/* ref: FUN_00cb07d0 */
uint F_00cb07d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb07d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 + param_2 * 0xc,0);
  return uVar1;
}

/* ref: FUN_00cb0800 */
uint F_00cb0800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb0800u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cb52f0(param_1 + param_3 * 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00cb0820 */
uint F_00cb0820(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0840 */
uint F_00cb0840(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0860 */
uint F_00cb0860(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb0890 */
uint F_00cb0890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (((int)this + 0x18U <= param_1) &&
     (param_1 < (int)this + 0x18U + *(int *)((int)this + 0xc) * 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb08d0 */
uint F_00cb08d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb08d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *param_1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 * PTR32 *)((int)this + 0x14) = param_1;
  return (uint)param_1;
}

/* ref: FUN_00cb0910 */
uint F_00cb0910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                    (*(int *)((int)this + 8) + 0xc,param_1);
  return uVar1 + *(int *)((int)this + 4);
}

/* ref: FUN_00cb0930 */
uint F_00cb0930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                    (*(int *)((int)this + 8) + 0xc,param_1);
  return uVar1 + *(int *)((int)this + 4);
}

/* ref: FUN_00cb0950 */
uint F_00cb0950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                    (*(int *)((int)this + 8) + 0xc,param_1);
  puVar3 = ((uint *)GEN_TOP((uVar1 + *(int *)((int)this + 4))));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0x60))))
                    (*(int *)((int)this + 8) + 0xc);
  uVar1 = *puVar3;
  if (uVar2 < 3) {
    return uVar1 + 4;
  }
  return (uVar1 & 0xffffff) + (int)puVar3;
}

/* ref: FUN_00cb09a0 */
uint F_00cb09a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb09a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb5870(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cb09f0 */
uint F_00cb09f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb09f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return ~*(uint *)(in_ecx + 4) & 1;
}

/* ref: FUN_00cb0a50 */
byte F_00cb0a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb0b50 */
uint F_00cb0b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b60 */
uint F_00cb0b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb0b70 */
uint F_00cb0b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b80 */
uint F_00cb0b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb0b90 */
uint F_00cb0b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb0ba0 */
uint F_00cb0ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb0ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb0bb0 */
uint F_00cb0bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0bb0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0be0 */
uint F_00cb0be0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0be0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb0c10 */
uint F_00cb0c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0c10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c30 */
uint F_00cb0c30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0c30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb0c50 */
uint F_00cb0c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb0c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),~*(byte *)((int)this + 4));
  if ((~*(byte *)((int)this + 4) & 1) != 0) {
    iVar5 = 0;
    if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)((int)this + 8);
        sVar1 = *((short *)GEN_TOP((*(int *)(iVar3 + 0x24) + iVar4)));
        if (sVar1 == 0) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0x60))))(iVar3 + 0xc);
          if (uVar2 < 3) {
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) + 0xc))))
                              (*(int *)((int)this + 8) + 0xc,iVar5);
            F_00cb5490(((undefined *)GEN_TOP((uVar2 + *(int *)((int)this + 4)))));
          }
        }
        else if (sVar1 == 0xc) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar3 + 0xc) + 0xc))))(iVar3 + 0xc,iVar5);
          iVar3 = uVar2 + *(int *)((int)this + 4);
          if (iVar3 != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),iVar3);
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 6;
      } while (iVar5 < (int)(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78))));
    }
    uVar2 = 0;
    if (*(int *)((int)this + 4) != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 4) = 1;
  }
  return uVar2;
}

/* ref: FUN_00cb0d10 */
unsigned int F_00cb0d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb0d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
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
  
  puVar10 = (ushort *)(param_1 + param_2 * 2);
  F_00cb0c50(this);
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                    (REFG(undefined4, 0x15d7724),*((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))),0);
  *(uint *)((int)this + 4) = uVar7;
  param_1 = 0;
  if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x24)));
      this_00 = ((float *)GEN_TOP(((int)*(short *)(local_8 + 4 + iVar5) + *(int *)((int)this + 4))));
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(local_8 + iVar5))) {
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
        F_00cb5870(this_00,pcVar8);
        break;
      case 1: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        break;
      case 2: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        break;
      case 3: ;
        *(char *)this_00 = (char)*puVar10;
        puVar10 = (ushort *)((int)puVar10 + 1);
        break;
      case 4: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*(undefined1 *)((int)puVar10 + 1));
        puVar10 = puVar10 + 1;
        break;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*puVar10,*(undefined1 *)((int)puVar10 + 1));
        puVar10 = puVar10 + 1;
        break;
      case 6: ;
      case 9: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *(undefined1 *)((int)puVar10 + 1)),
                                                (char)puVar10[1]),*(undefined1 *)((int)puVar10 + 3))
                             );
        puVar10 = puVar10 + 2;
        break;
      case 7: ;
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)*puVar10,
                                                         *(undefined1 *)((int)puVar10 + 1)),
                                                (char)puVar10[1]),*(undefined1 *)((int)puVar10 + 3))
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
        uVar1 = *(undefined1 *)((int)puVar10 + 1);
        uVar6 = puVar10[1];
        uVar2 = *(undefined1 *)((int)puVar10 + 3);
        *this_00 = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)puVar10[2],
                                                         *(undefined1 *)((int)puVar10 + 5)),
                                                (char)puVar10[3]),*(undefined1 *)((int)puVar10 + 7))
                             );
        this_00[1] = gen_bits2f(CONCAT31(CONCAT21(CONCAT11((char)uVar4,uVar1),(char)uVar6),uVar2));
        puVar10 = puVar10 + 4;
        break;
      case 0xc: ;
        uVar4 = *puVar10;
        puVar10 = puVar10 + 1;
        fVar9 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                     (REFG(undefined4, 0x15d7724),(uint)(ushort)(uVar4 << 8 | uVar4 >> 8),0));
        *this_00 = fVar9;
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 6;
    } while (param_1 < *((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb0f70 */
unsigned int F_00cb0f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb0f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  short * param_4 = (short *)(uintptr_t)gen_a4;
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
  F_00cb0c50(this);
  param_2 = (char *)((int)param_4 + (int)param_2 * -2);
  pcVar11 = param_2;
  if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
    param_4 = *((short * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x24)));
    psVar6 = param_4 + 2;
    local_c = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78)));
    do {
      puVar10 = (undefined1 *)(iVar1 + *psVar6);
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
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),pcVar11,0);
  *(uint *)((int)this + 4) = uVar8;
  F_00c46aa0(uVar8,iVar1,pcVar11);
  local_c = 0;
  if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x24)));
      iVar12 = (int)*(short *)(local_8 + 4 + iVar4);
      this_00 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar12)));
      switch((unsigned int)(uintptr_t)(*(undefined2 *)(local_8 + iVar4))) {
      case 0: ;
        pcVar9 = ((char *)GEN_TOP(((int)CONCAT31(CONCAT21(CONCAT11((char)*this_00,
                                                          *(undefined1 *)((int)this_00 + 1)),
                                                 *(undefined1 *)((int)this_00 + 2)),
                                        *(undefined1 *)((int)this_00 + 3)) + iVar1 + param_3)));
        pcVar11 = pcVar9;
        do {
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        F_00c46aa0(param_2 + *(int *)((int)this + 4),pcVar9,pcVar11 + (1 - (int)(pcVar9 + 1)));
        *this_00 = (int)param_2 - iVar12;
        F_00cb5570(this_00);
        param_2 = param_2 + (int)(pcVar11 + (1 - (int)(pcVar9 + 1)));
        break;
      case 4: ;
      case 5: ;
        *(ushort *)this_00 = CONCAT11((char)*this_00,*(undefined1 *)((int)this_00 + 1));
        break;
      case 6: ;
      case 7: ;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*(undefined1 *)((int)this_00 + 1)),
                                     *(undefined1 *)((int)this_00 + 2)),
                            *(undefined1 *)((int)this_00 + 3));
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
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)*this_00,*(undefined1 *)((int)this_00 + 1)),
                                     *(undefined1 *)((int)this_00 + 2)),
                            *(undefined1 *)((int)this_00 + 3));
        break;
      case 10: ;
      case 0xb: ;
        uVar8 = *this_00;
        *this_00 = CONCAT31(CONCAT21(CONCAT11((char)this_00[1],*(undefined1 *)((int)this_00 + 5)),
                                     *(undefined1 *)((int)this_00 + 6)),
                            *(undefined1 *)((int)this_00 + 7));
        this_00[1] = CONCAT31(CONCAT21(CONCAT11((char)uVar8,*(undefined1 *)((int)this_00 + 1)),
                                       *(undefined1 *)((int)this_00 + 2)),
                              *(undefined1 *)((int)this_00 + 3));
      }
      local_c = local_c + 1;
      local_8 = local_8 + 6;
    } while (local_c < *((ushort *)GEN_TOP((*(int *)((int)this + 8) + 0x78))));
  }
  return 0;
}

/* ref: FUN_00cb1240 */
uint F_00cb1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  *(undefined4 *)((int)this + 4) = 1;
  *(int *)((int)this + 8) = param_3;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_3 + 0xc) + 0x60))))((int *)(param_3 + 0xc));
  if (uVar1 < 3) {
    F_00cb0d10(this,param_1,param_2,param_4);
    return (uint)this;
  }
  F_00cb0f70(this,param_1,param_2,(param_4 + param_2 * -2) - param_1,param_5);
  return (uint)this;
}

/* ref: FUN_00cb12c0 */
uint F_00cb12c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb12c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb12d0 */
uint F_00cb12d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb12d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb12f0 */
unsigned int F_00cb12f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb12f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00cb1330 */
unsigned int F_00cb1330(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1330u, gen_a0, 0u, 0u, 0u);
  undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != (undefined * PTR32 *)0x0) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return 0;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((code *)*(gen_code32 *)*ppuVar1)(ppuVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_00cb1390 */
unsigned int F_00cb1390(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1390u, gen_a0, 0u, 0u, 0u);
  undefined * PTR32 * param_1 = (undefined * PTR32 *)(uintptr_t)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    while ((param_1 < ppuVar1 + 6 || (ppuVar1 + 6 + (int)ppuVar1[3] * 3 <= param_1))) {
      if (ppuVar1 != (undefined * PTR32 *)0x0) {
        ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
      }
      if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
        return 0;
      }
    }
    ppuVar1[4] = ppuVar1[4] + 1;
    *param_1 = ppuVar1[5];
    ppuVar1[5] = (undefined *)param_1;
    if (ppuVar1[4] == ppuVar1[3]) {
      ((code *)*(gen_code32 *)*ppuVar1)(ppuVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_00cb13f0 */
uint F_00cb13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb13f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129674));
  F_00cb0c50(this);
  if ((param_1 & 1) != 0) {
    F_00cb1330(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb1480 */
unsigned int F_00cb1480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return 0;
}

/* ref: FUN_00cb14b0 */
uint F_00cb14b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb14b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb15d0 */
uint F_00cb15d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb15d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * PTR32 * ppuVar3;
  uint uVar4;
  int * piVar5;
  
  ppuVar3 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  if ((undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220) != &REFG(undefined * PTR32, 0x134c224)) {
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        puVar2 = (undefined4 *)ppuVar3[5];
        ppuVar3[4] = ppuVar3[4] + -1;
        ppuVar3[5] = (undefined *)*puVar2;
        return (uint)puVar2;
      }
      ppuVar3 = (undefined * PTR32 *)ppuVar3[2];
    } while (ppuVar3 != &REFG(undefined * PTR32, 0x134c224));
  }
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),(REFG(int, 0x134c214) * 3 + 6) * 4,0)))
  ;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
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
  if (REFG(undefined * PTR32, 0x134c220) != (undefined *)0x0) {
    *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar2;
  }
  REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
  puVar1 = (undefined4 *)puVar2[5];
  REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar2;
  puVar2[4] = puVar2[4] + -1;
  puVar2[5] = *puVar1;
  return (uint)puVar1;
}

/* ref: FUN_00cb16c0 */
uint F_00cb16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * PTR32 * ppuVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int * piVar6;
  
  ppuVar1 = (undefined * PTR32 *)REFG(undefined * PTR32, 0x134c220);
  while( true ) {
    if (ppuVar1 == &REFG(undefined * PTR32, 0x134c224)) {
      puVar4 = (undefined4 *)F_00cb52f0((REFG(int, 0x134c214) * 3 + 6) * 4,param_2);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
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
      if (REFG(undefined * PTR32, 0x134c220) != (undefined *)0x0) {
        *((undefined4 * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = puVar4;
      }
      REFG(int, 0x134c230) = REFG(int, 0x134c230) + 1;
      puVar2 = (undefined4 *)puVar4[5];
      REFG(undefined * PTR32, 0x134c220) = (undefined *)puVar4;
      puVar4[4] = puVar4[4] + -1;
      puVar4[5] = *puVar2;
      return (uint)puVar2;
    }
    if (ppuVar1[4] != (undefined *)0x0) break;
    ppuVar1 = (undefined * PTR32 *)ppuVar1[2];
  }
  puVar4 = (undefined4 *)ppuVar1[5];
  ppuVar1[4] = ppuVar1[4] + -1;
  ppuVar1[5] = (undefined *)*puVar4;
  return (uint)puVar4;
}

/* ref: FUN_00cb17a0 */
uint F_00cb17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129670));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb1800 */
byte F_00cb1800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) != *(int *)(param_1 + 4);
}

/* ref: FUN_00cb1820 */
uint F_00cb1820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb1820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00cb1870 */
unsigned int F_00cb1870(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1870u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  return 0;
}

/* ref: FUN_00cb1880 */
uint F_00cb1880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb18b0 */
uint F_00cb18b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb18b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d7724) = param_1;
  return param_1;
}

/* ref: FUN_00cb18c0 */
uint F_00cb18c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb18c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb18e0 */
uint F_00cb18e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb18e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb1960 */
uint F_00cb1960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this,param_1);
  return (uint)this;
}

/* ref: FUN_00cb1980 */
uint F_00cb1980(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1980u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb19d0 */
uint F_00cb19d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb19d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)((char)param_1 != '\0') | -(uint)((char)param_2 != '\0') & 2;
}

/* ref: FUN_00cb1a10 */
ushort F_00cb1a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x7e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb1a30 */
unsigned int F_00cb1a30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1a30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  return 0;
}

/* ref: FUN_00cb1a40 */
uint F_00cb1a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb1a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4,param_1,(int)this + 4,param_5,param_3,param_4,param_2);
  return uVar1;
}

/* ref: FUN_00cb1a80 */
uint F_00cb1a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb1a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + -1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))
                    (REFG(int, 0x15d7724) + 4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_00cb1ab0 */
byte F_00cb1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3ec) != 0;
}

/* ref: FUN_00cb1ac0 */
uint F_00cb1ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: FUN_00cb1ad0 */
uint F_00cb1ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3d8);
}

/* ref: FUN_00cb1af0 */
uint F_00cb1af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1b00 */
uint F_00cb1b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1b10 */
uint F_00cb1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00cb1b20 */
byte F_00cb1b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1b40 */
byte F_00cb1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1b80 */
byte F_00cb1b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1ba0 */
byte F_00cb1ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1bd0 */
byte F_00cb1bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1bf0 */
byte F_00cb1bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1c20 */
byte F_00cb1c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb1c40 */
byte F_00cb1c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb1ca0 */
uint F_00cb1ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1cb0 */
uint F_00cb1cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1cd0 */
uint F_00cb1cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ce0 */
uint F_00cb1ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d30 */
uint F_00cb1d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d40 */
uint F_00cb1d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d80 */
uint F_00cb1d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1d90 */
uint F_00cb1d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1da0 */
uint F_00cb1da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1db0 */
uint F_00cb1db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1dc0 */
uint F_00cb1dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1dd0 */
uint F_00cb1dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1de0 */
uint F_00cb1de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1df0 */
uint F_00cb1df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e00 */
uint F_00cb1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e10 */
byte F_00cb1e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1e30 */
uint F_00cb1e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1e40 */
uint F_00cb1e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e50 */
uint F_00cb1e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1e60 */
byte F_00cb1e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1e80 */
uint F_00cb1e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb1e90 */
uint F_00cb1e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1ea0 */
uint F_00cb1ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb1eb0 */
byte F_00cb1eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1eb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb1ed0 */
uint F_00cb1ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ee0 */
uint F_00cb1ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1ef0 */
uint F_00cb1ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb1f00 */
uint F_00cb1f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb1f10 */
uint F_00cb1f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1f10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb1f40 */
uint F_00cb1f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb1f90 */
unsigned int F_00cb1f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00cb1fc0 */
unsigned int F_00cb1fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00cb1ff0 */
uint F_00cb1ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb1ff0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fd08));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 1;
  F_00cb5730((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb2050 */
uint F_00cb2050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 4) == *(int *)(param_1 + 4)) &&
     (*(int *)((int)this + 0xc) == *(int *)(param_1 + 0xc))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00cb20a0 */
unsigned int F_00cb20a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb20a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00cb20d0 */
byte F_00cb20d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcb20d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  if ((*(int *)&gen_args[1]) != 0) {
    REFG(int, 0x15d7724) = (*(int *)&gen_args[1]);
  }
  if ((*(int *)&gen_args[2]) != 0) {
    F_00cb5730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(int *)&gen_args[2]));
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e4))) = (*(int *)&gen_args[3]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) + 1;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = ~-(uint)((*(int *)&gen_args[3]) != 0) & (*(uint *)&gen_args[5]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(undefined4 *)&gen_args[4]);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c))) = 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  return *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c)));
}

/* ref: FUN_00cb2160 */
byte F_00cb2160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb2160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(char)param_2);
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57a8))[0])))(((undefined1 *)(gen_frame + 0x8)),0x100,"%s.exh",param_1);
  *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
            ((int *)(REFG(int, 0x15d7724) + 4),((undefined1 *)(gen_frame + 0x8)),(int)this + 4,
             -(uint)((char)param_3 != '\0') & 2 | (uint)((char)param_2 != '\0'),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 1;
}

/* ref: FUN_00cb2200 */
unsigned int F_00cb2200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  iVar1 = *param_1;
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)),
                            *(undefined1 *)(iVar1 + 10)),*(undefined1 *)(iVar1 + 0xb));
  if (uVar5 != 0) {
    do {
      piVar3 = (int *)F_00cb58d0(param_1,((undefined1 *)(gen_frame + 0x4)),uVar4);
      uVar2 = *(undefined4 *)(*piVar3 + 4);
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))(REFG(int, 0x15d7724) + 4,uVar2,(int)this + 4,0,0,0,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return 0;
}

/* ref: FUN_00cb2290 */
uint F_00cb2290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  short * psVar1;
  short sVar2;
  gen_size32 _Size;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  short * psVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = param_1;
  F_00cb5bc0(((undefined1 *)(gen_frame + 0x28)));
  iVar7 = 0;
  F_00cb5b90(param_1,((undefined1 *)(gen_frame + 0x18)));
  if ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (iVar7 < (*(int *)(gen_frame + 0x34)))) {
        iVar7 = (*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0x18)));
    } while ((*(uint *)(gen_frame + 0x1c)) != (*(uint *)(gen_frame + 0x2c)));
  }
  _Size = (iVar7 + 1) * 4;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),_Size,0)));
  *(undefined * PTR32 *)((int)this + 0x3dc) = pvVar4;
  F_00c48350(pvVar4,0,_Size);
  F_00cb5b90(param_1,((undefined1 *)(gen_frame + 0x0)));
  pvVar4 = param_1;
  if ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      bVar3 = 0;
      F_00cb5970(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if (-1 < (*(int *)(gen_frame + 0x34))) {
        psVar6 = *(short * PTR32 *)((int)this + 0x410);
        *(int *)((int)this + 0x3e0) = *(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4;
        if (psVar6 != (short *)0x0) {
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
      *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
      ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                (REFG(undefined4, 0x15d7724) + 1,((undefined1 *)(gen_frame + 0x38)),(int)this + 4,-(uint)bVar3 & 2 | 1,0,0,1);
      F_00cb5920(((undefined1 *)(gen_frame + 0x0)));
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x4)) != (*(uint *)(gen_frame + 0x2c)));
  }
  uVar5 = F_00cb5b90(pvVar4,((undefined1 *)(gen_frame + 0xc)));
  if ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c))) {
    do {
      F_00cb5970(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x34)));
      if ((-1 < (*(int *)(gen_frame + 0x34))) && (*((int *)GEN_TOP((*(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4))) != 0)) {
        iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x3dc) + (*(int *)(gen_frame + 0x34)) * 4)));
        if (iVar7 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar7 + -0xc;
        }
        *(short *)(iVar7 + 0x7e) = (short)(*(int *)(gen_frame + 0x34));
      }
      F_00cb5920(((undefined1 *)(gen_frame + 0xc)));
      uVar5 = (*(uint *)(gen_frame + 0x10));
    } while ((*(uint *)(gen_frame + 0x10)) != (*(uint *)(gen_frame + 0x2c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return uVar5;
}

/* ref: FUN_00cb24c0 */
uint F_00cb24c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb24c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2510 */
uint F_00cb2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2520 */
uint F_00cb2520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2530 */
uint F_00cb2530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2540 */
uint F_00cb2540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2560 */
uint F_00cb2560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb2570 */
uint F_00cb2570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb2590 */
uint F_00cb2590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb25a0 */
uint F_00cb25a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb25a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb25e0 */
unsigned int F_00cb25e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb25e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00cb2620 */
unsigned int F_00cb2620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00cb2640 */
unsigned int F_00cb2640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00cb2680 */
unsigned int F_00cb2680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00cb26a0 */
uint F_00cb26a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb26a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb26d0 */
uint F_00cb26d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb26d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb2700 */
uint F_00cb2700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2700u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (*(uint *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106fd40));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = 1;
  (*(uint *)(gen_frame + 0x1c)) = CONCAT13((char)((uint)uVar2 >> 0x18),0x10000);
  F_00cb5730(&(*(int *)(gen_frame + 0x18)),(*(undefined4 *)&gen_args[1]));
  uVar4 = (*(uint *)(gen_frame + 0x1c)) >> 1 & 0x1f;
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 0x1c + 8)));
  (*(undefined4 *)(gen_frame + 0x28)) = 1;
  uVar5 = (*(uint *)(gen_frame + 0x1c));
  while( true ) {
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    if (iVar1 == (int)(*(undefined * PTR32 *)&gen_args[0]) + uVar4 * 0x1c + 0xc) {
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = (char)(uVar5 >> 0x10);
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) == '\0') && ((*(int *)(gen_frame + 0x18)) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(int *)(gen_frame + 0x18)));
      }
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return 0;
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 100))))(iVar1 + 0xc);
    bVar3 = F_00cb5430(&(*(int *)(gen_frame + 0x18)),uVar5);
    if (bVar3 != 0) break;
    iVar1 = *(int *)(iVar1 + 8);
    uVar5 = (*(uint *)(gen_frame + 0x1c));
  }
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 + 0xc;
  }
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  if (((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) == '\0') && ((*(int *)(gen_frame + 0x18)) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(int *)(gen_frame + 0x18)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return uVar5;
}

/* ref: FUN_00cb2840 */
uint F_00cb2840(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (uVar2 < 0x20) {
    piVar3 = (int *)(*(int *)this + 0x18 + uVar2 * 0x1c);
    while (*piVar3 == 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 7;
      if (0x1f < uVar2) {
        return uVar2;
      }
    }
    *(uint *)((int)this + 8) = uVar2;
    iVar1 = *(int *)this + uVar2 * 0x1c;
    *(int *)((int)this + 4) = iVar1;
    uVar2 = *(uint *)(iVar1 + 8);
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00cb2890 */
uint F_00cb2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_1 != 0) {
    F_00cb2840(this);
    this = ((undefined *)(uint)(this));
  }
  return (uint)this;
}

/* ref: FUN_00cb28f0 */
byte F_00cb28f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb28f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x410) = param_1[5];
  bVar1 = F_00cb20d0(this,*param_1,param_1[1],param_1[2],param_1[3],param_1[4]);
  return bVar1;
}

/* ref: FUN_00cb2920 */
unsigned int F_00cb2920(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (((*(char *)((int)this + 8) == '\0') && (*(char *)((int)this + 0x18) != '\0')) &&
     (uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this), (char)uVar2 == '\0')) {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x44); piVar1 != (int *)((int)this + 0x48);
        piVar1 = (int *)piVar1[2]) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    *(undefined1 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00cb2960 */
uint F_00cb2960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb2700((undefined *)((int)this + 0x58),param_1);
  if (uVar1 == 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,0,0);
    uVar1 = F_00cb2700((undefined *)((int)this + 0x58),param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb29a0 */
byte F_00cb29a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb29a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}

/* ref: FUN_00cb29d0 */
byte F_00cb29d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}

/* ref: FUN_00cb2a00 */
unsigned int F_00cb2a00(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00cb2a30 */
unsigned int F_00cb2a30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00cb2ac0 */
unsigned int F_00cb2ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return 0;
}

/* ref: FUN_00cb2af0 */
uint F_00cb2af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2b60 */
unsigned int F_00cb2b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return 0;
}

/* ref: FUN_00cb2b90 */
uint F_00cb2b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2bd0 */
unsigned int F_00cb2bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 * PTR32 *)((int)this + 8) = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  return 0;
}

/* ref: FUN_00cb2c00 */
unsigned int F_00cb2c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  *(int *)(param_1 + 4) = iVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
  if (*(int *)(iVar1 + 8) != 0) {
    *((int *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return 0;
}

/* ref: FUN_00cb2c30 */
unsigned int F_00cb2c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return 0;
}

/* ref: FUN_00cb2c60 */
uint F_00cb2c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = param_1;
  while( true ) {
    if (uVar1 == (int)this + 0xcU) {
      return 0;
    }
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00cb2cc0 */
unsigned int F_00cb2cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return 0;
}

/* ref: FUN_00cb2cf0 */
unsigned int F_00cb2cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return 0;
}

/* ref: FUN_00cb2d20 */
unsigned int F_00cb2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return 0;
}

/* ref: FUN_00cb2d60 */
uint F_00cb2d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb2d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0xc) {
      *param_1 = (int)this + 0xc;
      return (uint)param_1;
    }
    if (iVar1 == param_2) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00cb2da0 */
uint F_00cb2da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2de0 */
uint F_00cb2de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2e20 */
uint F_00cb2e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb2e60 */
uint F_00cb2e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2e60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb2e80 */
unsigned int F_00cb2e80(unsigned int gen_a0)
{
  GEN_ENTER(0xcb2e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00cb2ed0 */
uint F_00cb2ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *param_1 = this;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1;
  if (this != (undefined *)0x0) {
    F_00cb2840(param_1);
    puVar1 = ((undefined4 *)(uint)(param_1));
  }
  return (uint)puVar1;
}

/* ref: FUN_00cb2f00 */
uint F_00cb2f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 100))))(param_1 + 0xc);
  uVar3 = *(ushort *)(uVar3 + 4) >> 1 & 0x1f;
  iVar2 = *(int *)((int)this + uVar3 * 0x1c + 0x10);
  *(int *)(param_1 + 4) = iVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 8);
  if (*(int *)(iVar2 + 8) != 0) {
    *((int *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = param_1;
  }
  *(int *)(iVar2 + 8) = param_1;
  piVar1 = (int *)((int)this + uVar3 * 0x1c + 0x18);
  *piVar1 = *piVar1 + 1;
  *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
  return 1;
}

/* ref: FUN_00cb2f60 */
uint F_00cb2f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 100))))(param_1 + 0xc);
  uVar2 = *(ushort *)(uVar3 + 4);
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (uVar2 >> 1 & 0x1f) * 0x1c + 0x18)));
  *piVar1 = *piVar1 + -1;
  *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + -1;
  return 0xffffffff;
}

/* ref: FUN_00cb2fc0 */
uint F_00cb2fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb2fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar2 = 0;
  puVar4 = (uint *)((int)this + 0x18);
  uVar3 = param_1;
  while (*puVar4 <= uVar3) {
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 - *puVar4;
    puVar4 = puVar4 + 7;
    if (0x1f < uVar2) {
      return 0;
    }
  }
  uVar1 = *(uint *)((int)this + uVar2 * 0x1c + 8);
  while( true ) {
    if (uVar1 == (int)this + uVar2 * 0x1c + 0xc) {
      return 0;
    }
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  return uVar1;
}

/* ref: FUN_00cb3020 */
unsigned int F_00cb3020(unsigned int gen_a0)
{
  GEN_ENTER(0xcb3020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00cb3070 */
unsigned int F_00cb3070(unsigned int gen_a0)
{
  GEN_ENTER(0xcb3070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00cb30c0 */
uint F_00cb30c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb30c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_01051d29(this,0x1c,0x20,((code *)REFP(0xcb2e80)));
  return extraout_EAX;
}

/* ref: FUN_00cb30d0 */
unsigned int F_00cb30d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb30d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00cb3120 */
byte F_00cb3120(unsigned int gen_a0)
{
  GEN_ENTER(0xcb3120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this);
  if ((char)uVar3 != '\0') {
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x3d8);
  *(undefined1 *)((int)this + 8) = 1;
  do {
    if (iVar2 == 0) {
      if ((*(int *)((int)this + 0x3dc) != 0) && (*(int *)((int)this + 0x3dc) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)((int)this + 0x3dc));
        *(undefined4 *)((int)this + 0x3dc) = 0;
      }
      return 1;
    }
    uVar3 = 0;
    piVar4 = (int *)((int)this + 0x70);
    do {
      if (*piVar4 != 0) {
        puVar5 = *(undefined4 * PTR32 *)((int)this + uVar3 * 0x1c + 0x60);
        goto LAB_00cb3164;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 7;
    } while (uVar3 < 0x20);
    puVar5 = (undefined4 *)0x0;
LAB_00cb3164: ;
    uVar3 = ((code *)*(gen_code32 *)(puVar5[3] + 4))(puVar5 + 3);
    if ((char)uVar3 != '\0') {
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(puVar5[3] + 100))(puVar5 + 3);
    uVar1 = *(ushort *)(uVar3 + 4);
    if (puVar5[1] != 0) {
      *(undefined4 *)(puVar5[1] + 8) = puVar5[2];
    }
    if (puVar5[2] != 0) {
      *(undefined4 *)(puVar5[2] + 4) = puVar5[1];
    }
    piVar4 = ((int *)GEN_TOP(((int)this + (uVar1 >> 1 & 0x1f) * 0x1c + 0x70)));
    *piVar4 = *piVar4 + -1;
    *(int *)((int)this + 0x3d8) = *(int *)((int)this + 0x3d8) + -1;
    ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    iVar2 = *(int *)((int)this + 0x3d8);
  } while( true );
}

/* ref: FUN_00cb3220 */
undefined4 F_00cb3220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3220u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fd70));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (undefined4)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(char *)(gen_frame + 0x2e)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[1]));
  iVar6 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58;
  iVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 1;
  (*(int *)(gen_frame + 0x18)) = iVar6;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
  if (iVar6 == 0) goto LAB_00cb3292;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x18)));
    iVar5 = (*(int *)(gen_frame + 0x1c));
LAB_00cb3292: ;
    do {
      puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
      if (iVar5 != 0) goto LAB_00cb329e;
      do {
        if (puVar2 == (undefined4 *)0x0) {
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 0;
        }
LAB_00cb329e: ;
        piVar7 = &(*(int *)(gen_frame + 0x28));
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(puVar2[3] + 100))(puVar2 + 3)));
        bVar3 = F_00cb5430(this_00,piVar7);
        if (bVar3 != 0) {
          uVar4 = ((code *)*(gen_code32 *)(puVar2[3] + 100))(puVar2 + 3);
          uVar1 = *(ushort *)(uVar4 + 4);
          if (puVar2[1] != 0) {
            *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
          }
          if (puVar2[2] != 0) {
            *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
          }
          piVar7 = ((int *)GEN_TOP((iVar6 + (uVar1 >> 1 & 0x1f) * 0x1c + 0x18)));
          *piVar7 = *piVar7 + -1;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) + -1;
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 1;
        }
      } while (iVar5 == 0);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)puVar2[2];
    } while ((undefined4 *)puVar2[2] != (undefined4 *)(iVar5 + 0xc));
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  } while( true );
}

/* ref: FUN_00cb3390 */
byte F_00cb3390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3390u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == (*(int *)&gen_args[1])) {
    return 1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(int *)&gen_args[1]);
  for (; piVar1 != ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))); piVar1 = (int *)piVar1[2]) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(int *)&gen_args[1]));
  }
  F_00cb3120((*(undefined * PTR32 *)&gen_args[0]));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) + 1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(int *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c))) = 1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                    (REFG(int, 0x15d7724) + 4,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(int)(*(undefined * PTR32 *)&gen_args[0]) + 4,0,0,0,1);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  return *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40c)));
}

/* ref: FUN_00cb3430 */
byte F_00cb3430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3430u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  byte bVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fda0));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(char *)(gen_frame + 0x2e)) = '\x01';
  F_00cb5730(&(*(int *)(gen_frame + 0x28)),(*(undefined4 *)&gen_args[1]));
  iVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 1;
  (*(int *)(gen_frame + 0x18)) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(int *)(gen_frame + 0x24)) = 0;
  if ((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58 == 0) goto LAB_00cb34a1;
  do {
    F_00cb2840(&(*(int *)(gen_frame + 0x18)));
    iVar3 = (*(int *)(gen_frame + 0x1c));
LAB_00cb34a1: ;
    do {
      iVar1 = (*(int *)(gen_frame + 0x24));
      if (iVar3 != 0) goto LAB_00cb34a9;
      do {
        if (iVar1 == 0) {
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return (byte)(*(undefined4 *)&gen_args[2]);
        }
LAB_00cb34a9: ;
        piVar4 = &(*(int *)(gen_frame + 0x28));
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 100))))(iVar1 + 0xc)));
        bVar2 = F_00cb5430(this_00,piVar4);
        if (bVar2 != 0) {
          (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
          if (((*(char *)(gen_frame + 0x2e)) == '\0') && ((*(int *)(gen_frame + 0x28)) != 0)) {
            ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(int *)(gen_frame + 0x28)));
          }
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
          return 1;
        }
      } while (iVar3 == 0);
      (*(int *)(gen_frame + 0x24)) = *(int *)(iVar1 + 8);
    } while (*(int *)(iVar1 + 8) != iVar3 + 0xc);
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
  } while( true );
}

/* ref: FUN_00cb3550 */
uint F_00cb3550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x28);
  while ((uVar2 = (int)this + 0x2cU, uVar1 != (int)this + 0x2cU && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x2cU) {
    *(int *)(param_1 + 4) = (int)this + 0x20;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x28);
    if (*(int *)((int)this + 0x28) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + 4))) = param_1;
    }
    *(uint *)((int)this + 0x28) = param_1;
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb35b0 */
uint F_00cb35b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb35b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x44);
    *(undefined1 *)((int)this + 0x18) = 1;
    for (; piVar1 != (int *)((int)this + 0x48); piVar1 = (int *)piVar1[2]) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    }
    F_00cb3120(this);
    *(int *)((int)this + 0x3ec) = *(int *)((int)this + 0x3ec) + 1;
    *(undefined4 *)((int)this + 1000) = 0;
    *(undefined1 *)((int)this + 0x40c) = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                      (REFG(int, 0x15d7724) + 4,*(undefined4 *)((int)this + 0x10),(int)this + 4,0,0,0,1);
    *(uint *)((int)this + 0xc) = uVar2;
    *(undefined1 *)((int)this + 8) = 0;
    for (piVar1 = *(int * PTR32 *)((int)this + 0x44); piVar1 != (int *)((int)this + 0x48);
        piVar1 = (int *)piVar1[2]) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    }
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_1,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00cb3660 */
uint F_00cb3660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x44);
  while ((uVar2 = (int)this + 0x48U, uVar1 != (int)this + 0x48U && (uVar2 = uVar1, uVar1 != param_1)
         )) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x48U) {
    *(int *)(param_1 + 4) = (int)this + 0x3c;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x44);
    if (*(int *)((int)this + 0x44) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x44) + 4))) = param_1;
    }
    *(uint *)((int)this + 0x44) = param_1;
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + 1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb36c0 */
uint F_00cb36c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb36c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0x3f8);
  while ((uVar2 = (int)this + 0x3fcU, uVar1 != (int)this + 0x3fcU &&
         (uVar2 = uVar1, uVar1 != param_1))) {
    if (uVar1 != 0) {
      uVar1 = *(uint *)(uVar1 + 8);
    }
  }
  if (uVar2 == (int)this + 0x3fcU) {
    *(int *)(param_1 + 4) = (int)this + 0x3f0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x3f8);
    if (*(int *)((int)this + 0x3f8) != 0) {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x3f8) + 4))) = param_1;
    }
    *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + 1;
    *(uint *)((int)this + 0x3f8) = param_1;
    return 1;
  }
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00cb3730 */
byte F_00cb3730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x3f8);
  while ((iVar2 = (int)this + 0x3fc, iVar1 != (int)this + 0x3fc && (iVar2 = iVar1, iVar1 != param_1)
         )) {
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if (iVar2 != (int)this + 0x3fc) {
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
      }
      if (*(int *)(param_1 + 8) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = *(undefined4 *)(param_1 + 4);
      }
      *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + -1;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb37a0 */
unsigned int F_00cb37a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb37a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x3f8);
  if (this_00 != (undefined *)((int)this + 0x3fc)) {
    piVar3 = (int *)(param_1 + 0xc);
    while( true ) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
      bVar1 = F_00cb5430((undefined *)((int)this_00 + 0xc),uVar2);
      if (bVar1 != 0) break;
      if (this_00 != (undefined *)0x0) {
        this_00 = *(undefined * PTR32 *)((int)this_00 + 8);
      }
      if (this_00 == (undefined *)((int)this + 0x3fc)) {
        return 0;
      }
    }
    if (this_00 != (undefined *)0x0) {
      if (*(int *)((int)this_00 + 4) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 4) + 8))) = *(undefined4 *)((int)this_00 + 8);
      }
      if (*(int *)((int)this_00 + 8) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 8) + 4))) = *(undefined4 *)((int)this_00 + 4);
      }
      *(int *)((int)this + 0x408) = *(int *)((int)this + 0x408) + -1;
    }
    F_00cb5bf0(this_00,piVar3);
  }
  return 0;
}

/* ref: FUN_00cb3830 */
uint F_00cb3830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x3dc) != 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x3dc) + param_1 * 4)));
  }
  uVar1 = F_00cb2fc0((undefined *)((int)this + 0x58),param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb3870 */
uint F_00cb3870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb2fc0((undefined *)((int)this + 0x58),param_1);
  if (uVar1 != 0) {
    return uVar1 + 0xc;
  }
  return 0;
}

/* ref: FUN_00cb38c0 */
unsigned int F_00cb38c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb38c0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fe0d));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  (*(undefined4 *)(gen_frame + 0x18)) = 6;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) != 0) {
    F_00cb3120((*(undefined * PTR32 *)&gen_args[0]));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 4;
  F_01051d29(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),0x1c,0x20,((code *)REFP(0xcb2e80)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x1129680));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return 0;
}

/* ref: FUN_00cb3a40 */
uint F_00cb3a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb3a50((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00cb3a50 */
uint F_00cb3a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb38c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb3a80 */
byte F_00cb3a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb3a80u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x170];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x164);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  byte * pbVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this_00;
  char * pcVar7;
  char * pcVar8;
  int * piVar9;
  undefined4 uVar10;
  char * pcVar11;
  uint uVar12;
  int iVar13;
  undefined4 * puVar14;
  
  puVar14 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x158)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x154)) = ((code *)REFP(0x106fe54));
  (*(undefined * PTR32 *)(gen_frame + 0x150)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x150));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x150)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x44)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(byte *)(gen_frame + 0x4b)) = 0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3acb;
  uVar3 = F_00cb9700((*(undefined4 * PTR32 *)&gen_args[1]));
  uVar12 = (uint)uVar3;
  (*(uint *)(gen_frame + 0x40)) = uVar12;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3adb;
  pbVar4 = (byte *)F_00cb97e0(puVar14);
  pcVar7 = (char *)*puVar14;
  cVar1 = *pcVar7;
  pcVar11 = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar7;
  if (cVar1 != '\0') {
    pcVar8 = ((char *)(gen_frame + 0x4c));
    do {
      if (cVar1 == '.') {
        pcVar11 = pcVar8;
      }
      *pcVar8 = cVar1;
      cVar1 = pcVar8[(int)(pcVar7 + (1 - (int)((char *)(gen_frame + 0x4c))))];
      pcVar8 = pcVar8 + 1;
      uVar12 = (*(uint *)(gen_frame + 0x40));
    } while (cVar1 != '\0');
  }
  *pcVar11 = '\0';
  (*(undefined2 *)(gen_frame + 0x38)) = 0;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)((char *)(gen_frame + 0x4c));
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)0x0;
  (*(char *)(gen_frame + 0x3a)) = '\x01';
  F_00cb5730(&(*(char * PTR32 *)(gen_frame + 0x34)),((char *)(gen_frame + 0x4c)));
  (*(undefined4 *)(gen_frame + 0x158)) = 1;
  if (uVar12 != 0) {
    (*(uint *)(gen_frame + 0x40)) = uVar12;
    do {
      uVar12 = (uint)*pbVar4;
      (*(uint *)(gen_frame + 0x28)) = uVar12;
      (*(byte * PTR32 *)(gen_frame + 0x3c)) = pbVar4 + 1;
      if ((uVar12 == 0) || (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x1c) == uVar12)) {
        iVar13 = 0;
        uVar12 = 0;
        puVar14 = (undefined4 *)0x0;
        (*(byte *)(gen_frame + 0x4b)) = 1;
        if ((*(undefined * PTR32 *)(gen_frame + 0x44)) != (undefined *)0xffffffa8) {
          uVar5 = 0;
          piVar9 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x70);
          do {
            if (*piVar9 != 0) {
              puVar14 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar5 * 0x1c + 0x60);
              iVar13 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar5 * 0x1c + 0x58;
              uVar12 = uVar5;
              break;
            }
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 7;
          } while (uVar5 < 0x20);
        }
        (*(uint *)(gen_frame + 0x30)) = 0xffffffff;
        do {
          do {
            do {
              if (iVar13 != 0) goto LAB_00cb3bce;
              do {
                pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x44));
                if (puVar14 == (undefined4 *)0x0) {
LAB_00cb3cba: ;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x0;
                  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),0x94,0)));
                  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
                  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = 2;
                  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = 2;
                  if (this_00 == (undefined *)0x0) {
                    pcVar7 = (char *)0x0;
                  }
                  else {
                    if (((*(uint *)&gen_args[2]) >> 1 & 1) == 0) {
                      uVar10 = *(undefined4 *)((int)pvVar6 + 1000);
                    }
                    else {
                      uVar10 = 0;
                    }
                    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)uVar10;
                    (*(undefined1 * PTR32 *)(gen_frame + 0x20)) = ((undefined1 *)GEN_TOP((gen_frame + 0x8)));
                    uVar12 = (uint)((byte)(*(uint *)&gen_args[2]) & 1);
                    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)uVar12;
                    pcVar7 = (char *)F_00cb9050(this_00,(*(uint *)(gen_frame + 0x28)),(*(undefined4 * PTR32 *)(gen_frame + 0x24)),(*(char * PTR32 *)(gen_frame + 0x2c)),(*(byte * PTR32 *)(gen_frame + 0x3c)),
                                                  uVar10,uVar12);
                  }
                  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x158)) + 0)) = 1;
                  (*(undefined4 *)(gen_frame + 0x158)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x158)), 1, 3),1);
                  if (-1 < (int)(*(uint *)(gen_frame + 0x30))) {
                    *(short *)(pcVar7 + 0x7e) = (short)(*(uint *)(gen_frame + 0x30));
                  }
                  if (*(int * PTR32 *)((int)pvVar6 + 0x3e0) != (int *)0x0) {
                    if (pcVar7 == (char *)0x0) {
                      pcVar11 = (char *)0x0;
                    }
                    else {
                      pcVar11 = pcVar7 + 0xc;
                    }
                    **(int * PTR32 *)((int)pvVar6 + 0x3e0) = (int)pcVar11;
                    *(undefined4 *)((int)pvVar6 + 0x3e0) = 0;
                  }
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3d6b;
                  uVar12 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(pcVar7 + 0xc) + 100))))(pcVar7 + 0xc);
                  uVar12 = *(ushort *)(uVar12 + 4) >> 1 & 0x1f;
                  iVar13 = *(int *)((int)pvVar6 + uVar12 * 0x1c + 0x68);
                  *(int *)(pcVar7 + 4) = iVar13;
                  *(undefined4 *)(pcVar7 + 8) = *(undefined4 *)(iVar13 + 8);
                  if (*(int *)(iVar13 + 8) != 0) {
                    *((char * PTR32 *)GEN_TOP((*(int *)(iVar13 + 8) + 4))) = pcVar7;
                  }
                  *(char * PTR32 *)(iVar13 + 8) = pcVar7;
                  piVar9 = (int *)((int)pvVar6 + uVar12 * 0x1c + 0x70);
                  *piVar9 = *piVar9 + 1;
                  *(int *)((int)pvVar6 + 0x3d8) = *(int *)((int)pvVar6 + 0x3d8) + 1;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)pcVar7;
                  F_00cb37a0(pvVar6,pcVar7);
                  if (pcVar7[0x81] != '\0') {
                    (*(byte *)(gen_frame + 0x4b)) = 0;
                  }
                  goto LAB_00cb3dc7;
                }
LAB_00cb3bce: ;
                (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(char * PTR32 *)(gen_frame + 0x34));
                pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(puVar14[3] + 100))(puVar14 + 3)));
                bVar2 = F_00cb5430(pvVar6,(*(char * PTR32 * PTR32 *)(gen_frame + 0x8)));
                pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x44));
                if (bVar2 != 0) {
                  (*(uint *)(gen_frame + 0x30)) = (uint)*(ushort *)((int)puVar14 + 0x7e);
                  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x3e0) =
                       *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + 0x3dc) + (uint)*(ushort *)((int)puVar14 + 0x7e) * 4
                  ;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0xcb3c6c;
                  uVar12 = ((code *)*(gen_code32 *)(puVar14[3] + 100))(puVar14 + 3);
                  uVar3 = *(ushort *)(uVar12 + 4);
                  if (puVar14[1] != 0) {
                    *(undefined4 *)(puVar14[1] + 8) = puVar14[2];
                  }
                  if (puVar14[2] != 0) {
                    *(undefined4 *)(puVar14[2] + 4) = puVar14[1];
                  }
                  piVar9 = ((int *)GEN_TOP(((int)pvVar6 + (uVar3 >> 1 & 0x1f) * 0x1c + 0x70)));
                  *piVar9 = *piVar9 + -1;
                  *(int *)((int)pvVar6 + 0x3d8) = *(int *)((int)pvVar6 + 0x3d8) + -1;
                  (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)0x1;
                  ((code *)*(gen_code32 *)*puVar14)(puVar14,1);
                  goto LAB_00cb3cba;
                }
              } while (iVar13 == 0);
              puVar14 = (undefined4 *)puVar14[2];
            } while (puVar14 != (undefined4 *)(iVar13 + 0xc));
            uVar12 = uVar12 + 1;
            puVar14 = (undefined4 *)0x0;
            iVar13 = 0;
          } while (0x1f < uVar12);
          piVar9 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar12 * 0x1c + 0x70);
          uVar5 = uVar12;
          do {
            if (*piVar9 != 0) {
              puVar14 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar5 * 0x1c + 0x60);
              iVar13 = (int)(*(undefined * PTR32 *)(gen_frame + 0x44)) + uVar5 * 0x1c + 0x58;
              uVar12 = uVar5;
              break;
            }
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 7;
          } while (uVar5 < 0x20);
        } while( true );
      }
LAB_00cb3dc7: ;
      bVar2 = *(*(byte * PTR32 *)(gen_frame + 0x3c));
      pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x3c));
      while (bVar2 != 0) {
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar4;
      }
      pbVar4 = pbVar4 + 1;
      uVar12 = (*(uint *)(gen_frame + 0x40)) - 1;
      (*(uint *)(gen_frame + 0x40)) = uVar12;
    } while (uVar12 != 0);
  }
  (*(undefined4 *)(gen_frame + 0x158)) = 0xffffffff;
  if (((*(char *)(gen_frame + 0x3a)) == '\0') && ((*(char * PTR32 *)(gen_frame + 0x34)) != (char *)0x0)) {
    (*(char * PTR32 * PTR32 *)(gen_frame + 0x8)) = (char * PTR32 *)(*(char * PTR32 *)(gen_frame + 0x34));
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(*(char * PTR32 *)(gen_frame + 0x34)));
  }
  bVar2 = (*(byte *)(gen_frame + 0x4b));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x150));
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x15c));
  return bVar2;
}

/* ref: FUN_00cb3e30 */
uint F_00cb3e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3e30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106feb4));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[18])REFP(0x11296f0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(undefined * PTR32 (*)[2])REFP(0x11296e4));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(undefined * PTR32 (*)[1])REFP(0x11296d0));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109bef4));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 4;
  (*(undefined4 *)(gen_frame + 0x28)) = 4;
  F_01051d8c(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),0x1c,0x20,((code *)REFP(0xcb2bd0)),((code *)REFP(0xcb2e80)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3d8))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3dc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3e0))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3ec))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc))) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x404))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f8))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3fc)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x400))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3f0)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x410))) = 0;
  REFG(undefined4, 0x15d7724) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb3f50 */
unsigned int F_00cb3f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb3f50u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x4c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x38)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x34)) = ((code *)REFP(0x106fee0));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x30));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x30)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]));
  if ((char)uVar3 == '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if (uVar3 != 0) {
      F_00cb5aa0(((undefined1 *)(gen_frame + 0x20)),uVar3);
      (*(uint *)(gen_frame + 0x38)) = 0;
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      F_00cb59f0(((undefined1 *)(gen_frame + 0x28)),uVar3,uVar4);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 1;
      (*(uint *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x38)), 1, 3),1);
      bVar2 = F_00cb58a0(((undefined1 *)(gen_frame + 0x20)));
      if (bVar2 == 0) {
        bVar2 = F_00cb58f0(((undefined1 *)(gen_frame + 0x28)));
        if (bVar2 == 0) {
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
          uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
          (*(uint *)(gen_frame + 0x18)) = uVar4;
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          bVar2 = F_00cb3a80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),&(*(uint *)(gen_frame + 0x18)),(*(int * PTR32 *)&gen_args[1]));
          if (bVar2 == 0) {
            *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
          }
        }
        else {
          F_00cb2290(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),((undefined1 *)(gen_frame + 0x28)));
        }
      }
      else {
        F_00cb2200(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),((undefined1 *)(gen_frame + 0x20)));
      }
      uVar3 = (*(uint *)(gen_frame + 0x38));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x38)) = uVar3 & 0xffffff00;
      F_00cb5a10();
      (*(uint *)(gen_frame + 0x38)) = 0xffffffff;
      F_00cb5b50(((undefined1 *)(gen_frame + 0x20)));
    }
  }
  else {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x408))) = 0;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1000))) + -1;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4,piVar1);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x30));
  return 0;
}

/* ref: FUN_00cb40a0 */
ushort F_00cb40a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb40a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 8 + param_2 * 2);
}

/* ref: FUN_00cb40b0 */
ushort F_00cb40b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb40b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + param_1 * 2 + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb40e0 */
ushort F_00cb40e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb40e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb4120 */
uint F_00cb4120(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4120u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0xffff0000;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4170 */
byte F_00cb4170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  short * psVar1;
  uint uVar2;
  
  if ((*(short *)((int)this + 4) == (short)param_1[1]) && (*(int *)this == *param_1)) {
    uVar2 = 0;
    if (*(ushort *)((int)this + 6) != 0) {
      psVar1 = (short *)((int)this + 8);
      do {
        if (*psVar1 != *((short *)GEN_TOP((((int)param_1 - (int)this) + (int)psVar1)))) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        psVar1 = psVar1 + 1;
      } while (uVar2 < *(ushort *)((int)this + 6));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb41d0 */
uint F_00cb41d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb41d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)this = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(short *)((int)this + 4) = (short)param_1;
  return param_1 & 0xffff;
}

/* ref: FUN_00cb41f0 */
unsigned int F_00cb41f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb41f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  undefined2 * puVar3;
  ushort * puVar4;
  
  *(undefined4 *)this = param_1;
  uVar2 = 0;
  *(short *)((int)this + 6) = (short)param_3;
  if (param_3 != 0) {
    puVar3 = (undefined2 *)((int)this + 8);
    do {
      *puVar3 = *(undefined2 *)(param_2 + uVar2 * 2);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 < param_3);
  }
  uVar1 = *(ushort *)this;
  if ((*(short *)((int)this + 6) != -1) && (*(short *)((int)this + 6) != 0)) {
    uVar2 = (uint)*(ushort *)((int)this + 6);
    puVar4 = (ushort *)((int)this + 8);
    do {
      uVar1 = uVar1 * 2 ^ *puVar4;
      puVar4 = puVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(ushort *)((int)this + 4) = uVar1;
  return 0;
}

/* ref: FUN_00cb4260 */
byte F_00cb4260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  short * psVar2;
  
  uVar1 = 0;
  if (*(ushort *)((int)this + 6) != 0) {
    psVar2 = (short *)((int)this + 8);
    do {
      if (*psVar2 != *(short *)(param_1 + uVar1 * 2)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (uVar1 < *(ushort *)((int)this + 6));
  }
  return 1;
}

/* ref: FUN_00cb42a0 */
uint F_00cb42a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb42a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 6) = 0;
  *(short *)((int)this + 4) = (short)param_1;
  return (uint)this;
}

/* ref: FUN_00cb42c0 */
uint F_00cb42c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb42c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = param_1;
  puVar2 = (ushort *)((int)this + 8);
  *(short *)((int)this + 6) = (short)param_3;
  F_00c46aa0(puVar2,param_2,param_3 * 2);
  uVar1 = *(ushort *)this;
  if ((*(short *)((int)this + 6) != -1) && (*(short *)((int)this + 6) != 0)) {
    uVar3 = (uint)*(ushort *)((int)this + 6);
    do {
      uVar1 = uVar1 * 2 ^ *puVar2;
      puVar2 = puVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *(ushort *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: FUN_00cb4320 */
uint F_00cb4320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  
  if (*(ushort *)((int)param_1 + 6) == 0xffff) {
    *(undefined2 *)((int)this + 6) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this,*param_1,param_1 + 2,(uint)*(ushort *)((int)param_1 + 6));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb4360 */
uint F_00cb4360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0xffff0000;
  if (*(ushort *)((int)param_1 + 6) == 0xffff) {
    *(undefined2 *)((int)this + 6) = 0xffff;
    return (uint)this;
  }
  F_00cb41f0(this,*param_1,param_1 + 2,(uint)*(ushort *)((int)param_1 + 6));
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb43b0 */
byte F_00cb43b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cb4170(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00cb43e0 */
byte F_00cb43e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb43e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
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
  if (*(int *)((int)this + 4) != 0) {
    do {
      bVar3 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar6))),param_1);
      if ((bVar3 != 0) && (*((int *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc)))) == 0)) {
        uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2,param_1);
        *((uint *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc)))) = uVar4;
        piVar2 = *((int * PTR32 *)GEN_TOP((iVar6 + 0xc + *(int *)((int)this + 0xc))));
        uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + uVar5 * 4))) = uVar4;
      }
      iVar1 = iVar6 + *(int *)((int)this + 0xc);
      if ((*(short *)(iVar1 + 6) != -1) && (*(int *)(iVar1 + 0xc) == 0)) {
        local_8 = local_8 + 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (uVar5 < *(uint *)((int)this + 4));
    if (local_8 != 0) {
      return 0;
    }
  }
  ((code *)*(gen_code32 *)(*(int *)this + 4))
            (this,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),
             *(undefined4 *)((int)this + 8));
  return 1;
}

/* ref: FUN_00cb44e0 */
uint F_00cb44e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb44e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar3;
  
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),param_2);
    if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4)));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar4))) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: FUN_00cb4540 */
uint F_00cb4540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),param_2);
  iVar4 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),((undefined1 *)(gen_frame + 0xc)));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),((undefined1 *)(gen_frame + 0xc)));
    if (*((int *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc))));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      uVar3 = *(uint *)((int)this + 0xc);
      *(undefined4 *)(iVar4 + 0xc + uVar3) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00cb45d0 */
uint F_00cb45d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb45d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
  iVar5 = param_1 * 0x10;
  bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))),uVar3);
  uVar4 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar5))),uVar3);
    if (*((int *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc))));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      *((undefined4 *)GEN_TOP((iVar5 + 0xc + *(int *)((int)this + 0xc)))) = 0;
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + param_1 * 4))) = 0;
    uVar4 = param_1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_00cb4650 */
uint F_00cb4650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb4660 */
uint F_00cb4660(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 << 4,0);
  return uVar1;
}

/* ref: FUN_00cb4680 */
uint F_00cb4680(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 * 4,0);
  return uVar1;
}

/* ref: FUN_00cb46a0 */
uint F_00cb46a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb46a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb46d0 */
uint F_00cb46d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb46d0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb4700 */
uint F_00cb4700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  *(uint *)((int)this + 4) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 << 4,0);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 * 4,0);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = 0;
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xc) + 6 + iVar2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc + iVar2))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + uVar1 * 4))) = 0;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (uVar1 < param_1);
  }
  return (uint)this;
}

/* ref: FUN_00cb47a0 */
uint F_00cb47a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb47a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    do {
      uVar3 = F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
      bVar2 = F_00cb4170(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),uVar3);
      if (bVar2 == 0) {
        F_00cb4320(((undefined *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4))),uVar3);
        if (*((int *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) != 0) {
          piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc))));
          ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
          *((undefined4 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0xc)))) = 0;
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + (*(uint *)(gen_frame + 0x8)) * 4))) = 0;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      iVar4 = iVar4 + 0x10;
    } while ((*(uint *)(gen_frame + 0x8)) < *(uint *)((int)this + 4));
  }
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00cb4870 */
unsigned int F_00cb4870(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  F_00cb47a0(this);
  return 0;
}

/* ref: FUN_00cb4880 */
uint F_00cb4880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1129738));
  F_00cb47a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb48d0 */
uint F_00cb48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb48d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 8) == 0) {
    if (*(int *)(param_2 + 4) == 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4),param_1);
      *(uint *)(param_2 + 4) = uVar2;
    }
    piVar1 = *(int * PTR32 *)(param_2 + 4);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(uint *)(param_2 + 8) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2);
        if ((char)uVar2 != '\0') goto LAB_00cb491e;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 4))))(*(int * PTR32 *)(param_2 + 4));
    }
  }
LAB_00cb491e: ;
  return *(uint *)(param_2 + 8);
}

/* ref: FUN_00cb49a0 */
uint F_00cb49a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb49c0 */
byte F_00cb49c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cb49e0 */
byte F_00cb49e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb49e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb4a10 */
uint F_00cb4a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  F_00cb4120(this);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00cb4320(this,param_1);
  *(undefined8 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 1);
  return (uint)this;
}

/* ref: FUN_00cb4a60 */
uint F_00cb4a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb4a70 */
uint F_00cb4a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4a80 */
byte F_00cb4a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4a80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb4aa0 */
uint F_00cb4aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00cb4120(this);
  *(undefined4 *)((int)this + 0xc) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00cb4320(this,param_1);
  *(undefined8 *)((int)this + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return (uint)this;
}

/* ref: FUN_00cb4af0 */
unsigned int F_00cb4af0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00cb4b30 */
unsigned int F_00cb4b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4b30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined * this_00;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106ff0b));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),0x1c,0)));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (this_00 == (undefined *)0x0) {
    this_00 = (undefined *)0x0;
  }
  else {
    F_00cb4120(this_00);
    iVar1 = (*(int *)&gen_args[1]);
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(undefined4 *)((int)this_00 + 0x14) = 0;
    *(undefined4 *)((int)this_00 + 0xc) = 1;
    *(undefined4 *)((int)this_00 + 0x18) = 0;
    F_00cb4320(this_00,(*(int *)&gen_args[1]));
    *(undefined8 *)((int)this_00 + 0xc) = *(undefined8 *)(iVar1 + 0xc);
    *(undefined4 *)((int)this_00 + 0x14) = *(undefined4 *)(iVar1 + 0x14);
  }
  *(undefined4 *)((int)this_00 + 0x18) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = this_00;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb4bd0 */
uint F_00cb4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 8);
  iVar2 = *param_2;
  if (iVar2 == iVar1) {
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    *(undefined4 *)((int)this + 8) = uVar3;
    *param_1 = uVar3;
    return (uint)param_1;
  }
  iVar4 = *(int *)(iVar1 + 0x18);
  while( true ) {
    if (iVar4 == 0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar5 = *(int *)(iVar1 + 0x18);
    if (iVar2 == iVar5) break;
    iVar4 = *(int *)(iVar5 + 0x18);
    iVar1 = iVar5;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  *param_1 = *(undefined4 *)(*param_2 + 0x18);
  return (uint)param_1;
}

/* ref: FUN_00cb4c40 */
uint F_00cb4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb4c50 */
uint F_00cb4c50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4c50u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00cb4c60 */
uint F_00cb4c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb4cc0 */
uint F_00cb4cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint in_ecx;
  
  iVar1 = *(int *)((int)this + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return in_EAX;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4),iVar1);
        *(uint *)(iVar1 + 0x10) = in_EAX;
      }
      piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
      if (piVar2 != (int *)0x0) {
        in_ecx = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        *(uint *)(iVar1 + 0x14) = in_ecx;
        if ((in_ecx == 0) || (in_EAX = F_00cb09f0(in_ecx), (char)in_EAX == '\0')) {
          in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 4))))(*(int * PTR32 *)(iVar1 + 0x10));
        }
      }
    }
    if (iVar1 == 0) break;
    iVar1 = *(int *)(iVar1 + 0x18);
  }
  return in_EAX;
}

/* ref: FUN_00cb4d30 */
unsigned int F_00cb4d30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  for (iVar1 = *(int *)((int)this + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    if (*(int *)(iVar1 + 0x14) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x10) + 4))))(*(int * PTR32 *)(iVar1 + 0x10));
    }
    if (iVar1 == 0) break;
  }
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),iVar1);
    iVar1 = iVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00cb4d90 */
uint F_00cb4d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb4dc0 */
unsigned int F_00cb4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb4dc0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x106ff3b));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129744));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  F_00cb4d30((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x1129740));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x18);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),iVar2);
    iVar2 = iVar1;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 0;
}

/* ref: FUN_00cb4e40 */
uint F_00cb4e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x18) = iVar1;
  if (iVar1 != 0) {
    F_00cb4320(param_1,iVar1);
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
  }
  return 0;
}

/* ref: FUN_00cb4e70 */
uint F_00cb4e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),*param_1);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *param_1 = *puVar1;
    uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb4ed0 */
uint F_00cb4ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x18)));
    *(int *)((int)this + 0x18) = iVar1;
    if (iVar1 != 0) {
      F_00cb4320(param_1,iVar1);
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
    }
  }
  return 0;
}

/* ref: FUN_00cb4f10 */
uint F_00cb4f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),*param_1);
  if (*(int *)((int)this + 0x18) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x18)));
    *(undefined4 * PTR32 *)((int)this + 0x18) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *param_1 = *puVar1;
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x14)));
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar2;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb4f80 */
uint F_00cb4f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb4f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  
  for (iVar1 = *(int *)((int)this + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
    bVar2 = F_00cb4170(param_2,iVar1);
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
uint F_00cb4fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb4fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != 0) {
    while (bVar1 = F_00cb4170(param_1,iVar3), bVar1 == 0) {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (iVar3 != 0) {
      uVar2 = F_00cb48d0(this,param_1,iVar3 + 0xc);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00cb5020 */
byte F_00cb5020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(param_1,iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) goto LAB_00cb505d;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0;
    }
  }
LAB_00cb505d: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)),param_1);
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00cb50e0 */
byte F_00cb50e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00cb42a0(((undefined1 *)(gen_frame + 0x0)),param_1);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0x0)),iVar2), bVar1 == 0) {
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) goto LAB_00cb512e;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 0;
    }
  }
LAB_00cb512e: ;
  F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x18)) + 4)) = 0;
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00cb4320(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x0)));
  (*(undefined8 *)(gen_frame + 0x18)) = 1;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00cb4b30((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 1;
}

/* ref: FUN_00cb51b0 */
unsigned int F_00cb51b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb51b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  int iVar2;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (iVar2 != 0) {
    while (bVar1 = F_00cb4170(this_00,iVar2), bVar1 == 0) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if ((iVar2 != 0) &&
       (*(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + -1, *(int *)(iVar2 + 0xc) < 1)) {
      (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)iVar2;
      if (*(int *)(iVar2 + 0x14) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar2 + 0x10) + 4))))(*(int * PTR32 *)(iVar2 + 0x10));
      }
      F_00cb4bd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined * PTR32 *)&gen_args[1]));
    }
  }
  return 0;
}

/* ref: FUN_00cb5220 */
uint F_00cb5220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = F_00cb42a0(((undefined1 *)(gen_frame + 0xc)),param_1);
  iVar3 = *(int *)((int)this + 0x10);
  if (iVar3 != 0) {
    while( true ) {
      bVar1 = F_00cb4170(((undefined1 *)(gen_frame + 0xc)),iVar3);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      if (iVar3 == 0) goto LAB_00cb52a1;
      iVar3 = *(int *)(iVar3 + 0x18);
      if (iVar3 == 0) {
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar2;
      }
    }
    (*(int *)(gen_frame + 0x8)) = iVar3;
    if ((iVar3 != 0) &&
       (*(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1, *(int *)(iVar3 + 0xc) < 1)) {
      if (*(int *)(iVar3 + 0x14) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 0x10) + 4))))(*(int * PTR32 *)(iVar3 + 0x10));
      }
      uVar2 = F_00cb4bd0((undefined *)((int)this + 8),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
    }
  }
LAB_00cb52a1: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00cb52c0 */
uint F_00cb52c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb52c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4dc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb52f0 */
uint F_00cb52f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb52f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57a8))[0])))(((undefined1 *)(gen_frame + 0x8)),0x100,"Common.Component.Excel.%s",param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00cb5350 */
uint F_00cb5350(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb5350u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57ac))[0])))(((undefined1 *)(gen_frame + 0x8)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 8) + 4))))(REFG(int, 0x15d7724) + 8,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00cb53b0 */
uint F_00cb53b0(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xcb53b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57ac))[0])))(((undefined1 *)(gen_frame + 0x8)),0x400,param_1,((undefined *)&gen_args[1]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 8) + 8))))(REFG(int, 0x15d7724) + 8,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00cb5430 */
byte F_00cb5430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (*(short *)((int)this + 4) != *(short *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
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
uint F_00cb5490(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb54b0 */
byte F_00cb54b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb54b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(int * PTR32 *)this != *(int *)*param_1) {
    return 0;
  }
  pbVar3 = (byte *)((int *)*param_1 + 1);
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
byte F_00cb5510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint * puVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (**(uint * PTR32 *)this != (uint)*(ushort *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
  puVar2 = *(uint * PTR32 *)this + 1;
  while( true ) {
    bVar1 = (byte)*puVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = *(byte *)((int)puVar2 + 1);
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    puVar2 = (uint *)((int)puVar2 + 2);
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00cb5570 */
unsigned int F_00cb5570(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  *(byte *)((int)this + 3) = bVar5;
  return 0;
}

/* ref: FUN_00cb55b0 */
byte F_00cb55b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb55b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
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
byte F_00cb5630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)*param_1) {
    return 0;
  }
  pbVar3 = (byte *)((char *)*param_1 + 4);
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
byte F_00cb56a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb56a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if ((char)(*(uint *)((int)(uintptr_t)this) >> 0x18) != *(char *)(param_1 + 1)) {
    return 0;
  }
  pbVar3 = (byte *)*param_1;
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
uint F_00cb5710(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5730 */
unsigned int F_00cb5730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  uint uVar5;
  ushort uVar6;
  
  if ((*(char *)((int)this + 6) == '\0') && (*(int *)this != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  uVar6 = 0;
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  *(undefined2 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 6) == '\0') {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),pcVar3,0);
    *(uint *)this = uVar5;
    pcVar4 = (char *)0x0;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar4[*(int *)this] = param_1[(int)pcVar4];
        pcVar1 = param_1 + (int)pcVar4;
        pcVar4 = pcVar4 + 1;
        *(short *)((int)this + 4) = *(short *)((int)this + 4) * 2 ^ (short)*pcVar1;
      } while (pcVar4 < pcVar3);
    }
  }
  else {
    pcVar4 = (char *)0x0;
    *(char * PTR32 *)this = param_1;
    if (pcVar3 != (char *)0x0) {
      do {
        uVar6 = (short)param_1[(int)pcVar4] ^ uVar6 * 2;
        pcVar4 = pcVar4 + 1;
        *(ushort *)((int)this + 4) = uVar6;
      } while (pcVar4 < pcVar3);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00cb57e0 */
uint F_00cb57e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb57e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  uint * puVar2;
  char * pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)this != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)this);
    *(undefined4 *)this = 0;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (int)pcVar3 - (int)(param_1 + 1);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),iVar4 + 5,0);
  *(uint *)this = uVar5;
  uVar6 = 0;
  uVar5 = 0;
  if (iVar4 == -1) {
    **(undefined4 * PTR32 *)this = 0;
    return uVar5;
  }
  do {
    *(char *)(*(int *)this + 4 + uVar5) = param_1[uVar5];
    pcVar3 = param_1 + uVar5;
    uVar5 = uVar5 + 1;
    uVar6 = uVar6 * 2 ^ (int)*pcVar3;
  } while (uVar5 < iVar4 + 1U);
  puVar2 = *(uint * PTR32 *)this;
  *puVar2 = uVar6;
  return (uint)puVar2;
}

/* ref: FUN_00cb5870 */
uint F_00cb5870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00cb57e0(this,param_1);
  }
  return uVar1;
}

/* ref: FUN_00cb5890 */
uint F_00cb5890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb58a0 */
byte F_00cb58a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb58a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)*in_ecx;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'F')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb58d0 */
uint F_00cb58d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb58d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)((int)this + 4) + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00cb58f0 */
byte F_00cb58f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb58f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = (char *)*in_ecx;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) && (pcVar1[3] == 'T')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb5920 */
unsigned int F_00cb5920(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  
  if (*(char * PTR32 *)((int)this + 4) != (char *)0x0) {
    cVar1 = **(char * PTR32 *)((int)this + 4);
    while ((cVar1 != '\n' &&
           ((cVar1 != '\r' || (cVar1 = '\r', *((char *)GEN_TOP((*(int *)((int)this + 4) + 1))) != '\n'))))) {
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      cVar1 = **(char * PTR32 *)((int)this + 4);
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + (cVar1 != '\n') + 1;
    if (*(int *)((int)this + 4) == *(int *)(*(int *)this + 4)) {
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00cb5970 */
unsigned int F_00cb5970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  byte bVar2;
  bool bVar3;
  char * pcVar4;
  char * pcVar5;
  byte * pbVar6;
  
  pcVar5 = *(char * PTR32 *)((int)this + 4);
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
uint F_00cb59f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb59f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_2 + param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00cb5a10 */
unsigned int F_00cb5a10(void)
{
  GEN_ENTER(0xcb5a10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00cb5a20 */
uint F_00cb5a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 * PTR32 *)this = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_1;
  }
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  F_00cb5920(this);
  return ((uint)(uint)(this));
}

/* ref: FUN_00cb5a50 */
uint F_00cb5a50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 * 8,0);
  return uVar1;
}

/* ref: FUN_00cb5a70 */
uint F_00cb5a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5a70u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb5aa0 */
uint F_00cb5aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  char * pcVar3;
  int iVar4;
  
  *(char * PTR32 *)this = param_1;
  if ((((*param_1 == 'E') && (param_1[1] == 'X')) && (param_1[2] == 'L')) && (param_1[3] == 'F')) {
    iVar4 = CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]);
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),iVar4 * 8,0)));
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    pcVar3 = (char *)(*(int *)this + 0x10);
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
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00cb5b50 */
uint F_00cb5b50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = *(char * PTR32 *)this;
  if ((((*pcVar1 == 'E') && (pcVar1[1] == 'X')) && (pcVar1[2] == 'L')) &&
     ((pcVar1[3] == 'F' && (pcVar1 = (char *)0x0, *(int *)((int)this + 4) != 0)))) {
    pcVar1 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*(int *)((int)this + 4))));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)pcVar1;
}

/* ref: FUN_00cb5b90 */
uint F_00cb5b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = this;
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)this;
  }
  param_1[1] = uVar1;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bc0 */
uint F_00cb5bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  F_00cb5920(param_1);
  return ((uint)(uint)(param_1));
}

/* ref: FUN_00cb5bf0 */
uint F_00cb5bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1,*(undefined4 *)((int)this + 0x14));
  return uVar1;
}

/* ref: FUN_00cb5c10 */
uint F_00cb5c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 6) = 0;
  F_00cb5730(this,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5c30 */
uint F_00cb5c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5c30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ff68));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&REFG(undefined1, 0x107fc63));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined4 *)&gen_args[1]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5ca0 */
uint F_00cb5ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb5ca0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ff98));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined4 *)&gen_args[2]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5d10 */
unsigned int F_00cb5d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5d10u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106ffc8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return 0;
}

/* ref: FUN_00cb5da0 */
uint F_00cb5da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5da0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x106fff8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1129764));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11296c8));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  if (((*(uint *)&gen_args[1]) & 1) != 0) {
    F_00406ad0((*(undefined * PTR32 *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb5e50 */
uint F_00cb5e50(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5e50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1,0);
  return uVar1;
}

/* ref: FUN_00cb5e70 */
uint F_00cb5e70(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),param_1);
  return uVar1;
}

/* ref: FUN_00cb5e90 */
unsigned int F_00cb5e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this,param_1);
  return 0;
}

/* ref: FUN_00cb5ea0 */
uint F_00cb5ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00cb5730(this,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ec0 */
uint F_00cb5ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cb5730(this,param_1);
  return (uint)this;
}

/* ref: FUN_00cb5ee0 */
unsigned int F_00cb5ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5ee0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  do {
  } while (*param_1 != '\0');
  return 0;
}

/* ref: FUN_00cb5f00 */
unsigned int F_00cb5f00(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5f00u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  return 0;
}

/* ref: FUN_00cb5f10 */
uint F_00cb5f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb5f80 */
uint F_00cb5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb5f80u, gen_a0, gen_a1, 0u, 0u);
  char in_cl = (char)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
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
uint F_00cb5fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb5fd0u, gen_a0, 0u, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*in_esi != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*in_esi);
    *in_esi = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6010 */
uint F_00cb6010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6010u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(uint *)((int)this + 0x54) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 8))))
                      (*(int * PTR32 *)((int)this + 0x58),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return *(uint *)((int)this + 0x54);
}

/* ref: FUN_00cb6030 */
uint F_00cb6030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x54) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x14))))
                      (*(int * PTR32 *)((int)this + 0x58),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cb6050 */
unsigned int F_00cb6050(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6050u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((0 < *(int *)(param_1 + 0x60)) && (*(int *)(param_1 + 100) != 0)) {
                    
                    
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 100) + 0x10))))();
    return 0;
  }
  return 0;
}

/* ref: FUN_00cb6070 */
uint F_00cb6070(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x134c234))[param_1];
}

/* ref: FUN_00cb6090 */
uint F_00cb6090(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x134c268) + param_1 * 4);
}

/* ref: FUN_00cb60b0 */
uint F_00cb60b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb60b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x134c29c) + param_1 * 4);
}

/* ref: FUN_00cb60d0 */
uint F_00cb60d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb60d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 100) + 0x1c))))
                            (*(int * PTR32 *)((int)this + 100),param_1)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    if (uVar2 != 0) {
      uVar2 = F_00cb09f0(uVar2);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6110 */
uint F_00cb6110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x54) == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x20))))
                              (*(int * PTR32 *)((int)this + 0x58),param_1,param_2)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2);
        if ((char)uVar2 != '\0') {
          F_00cb4320(param_2,piVar1 + 2);
          return (uint)piVar1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00cb6170 */
uint F_00cb6170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(int *)((int)this + 0x54) == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    F_00cb4120(((undefined1 *)(gen_frame + 0xc)));
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_1,((undefined1 *)(gen_frame + 0xc)))));
    if (piVar1 == (int *)0x0) {
      *param_2 = -1;
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (uVar2 != 0) {
        uVar2 = F_00cb09f0(uVar2);
        if ((char)uVar2 != '\0') {
          *param_2 = piVar1[2];
          F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
          return (uint)piVar1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00cb6200 */
uint F_00cb6200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcb6200u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x58) + 0x24))))
                    (*(int * PTR32 *)((int)this + 0x58),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00cb6210 */
uint F_00cb6210(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x6e);
}

/* ref: FUN_00cb6220 */
ushort F_00cb6220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x6e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00cb6230 */
uint F_00cb6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00cb6240 */
uint F_00cb6240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x24) + 2 + param_2 * 6)));
}

/* ref: FUN_00cb6260 */
uint F_00cb6260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) +
                (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb6280 */
uint F_00cb6280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 4 +
                (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x18) + 2 + param_1 * 6))) * 6)));
}

/* ref: FUN_00cb62a0 */
byte F_00cb62a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb62a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((short *)GEN_TOP((*(int *)((int)this + 0x24) + 2 + param_1 * 6))) != -1;
}

/* ref: FUN_00cb62d0 */
uint F_00cb62d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb62d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: FUN_00cb62e0 */
unsigned int F_00cb62e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb62e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  return 0;
}

/* ref: FUN_00cb6360 */
uint F_00cb6360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6370 */
byte F_00cb6370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb63b0 */
uint F_00cb63b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb63b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb63d0 */
byte F_00cb63d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb6410 */
unsigned int F_00cb6410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb6410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return 0;
}

/* ref: FUN_00cb6430 */
unsigned int F_00cb6430(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] != 0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
      return 0;
    }
    F_00406b30(puVar1 + -1);
  }
  return 0;
}

/* ref: FUN_00cb6460 */
byte F_00cb6460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6460u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: FUN_00cb6490 */
uint F_00cb6490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb64d0 */
uint F_00cb64d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb64d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  if ((param_1 & 2) != 0) {
    F_01051d29(this,0x58,*(int *)((int)this + -4),((code *)REFP(0xcb6430)));
    if ((param_1 & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),(int)this - 4U);
    }
    return (int)this - 4U;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
  }
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb6590 */
uint F_00cb6590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb65a0 */
uint F_00cb65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb65a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb65f0 */
uint F_00cb65f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb65f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6600 */
uint F_00cb6600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6620 */
uint F_00cb6620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb6630 */
uint F_00cb6630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6640 */
byte F_00cb6640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6640u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00cb6660 */
uint F_00cb6660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00cb6680 */
uint F_00cb6680(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6680u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129814));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66a0 */
uint F_00cb66a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb66b0 */
uint F_00cb66b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb66d0 */
byte F_00cb66d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb66f0 */
uint F_00cb66f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb66f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb6710 */
uint F_00cb6710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6720 */
uint F_00cb6720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb6760 */
uint F_00cb6760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6770 */
uint F_00cb6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb6780 */
uint F_00cb6780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb6790 */
uint F_00cb6790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb6790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb67a0 */
uint F_00cb67a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb67a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb67b0 */
uint F_00cb67b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 * 6,0);
  return uVar1;
}

/* ref: FUN_00cb67d0 */
uint F_00cb67d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(undefined4, 0x15d7724),param_1 * 2,0);
  return uVar1;
}

/* ref: FUN_00cb67f0 */
uint F_00cb67f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb67f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6820 */
uint F_00cb6820(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6820u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00cb6850 */
uint F_00cb6850(unsigned int gen_a0)
{
  GEN_ENTER(0xcb6850u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(undefined4, 0x15d7724),*param_1);
    *param_1 = 0;
  }
  return uVar1;
}

